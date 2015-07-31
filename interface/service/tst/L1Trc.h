/*******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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


/*****************************************************************************
 *
 * Filename:
 * ---------
 * L1Trc.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file contains the variable declaraed and macr defined for layer 1 
 *		trace functionality.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 * removed!
 * removed!
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#if defined(L1_CATCHER) && !defined(L1_SIM)

#ifndef TRACE_DEF_H
#define TRACE_DEF_H
 
#include "kal_public_api.h"

/********************/
/* Constant definition */
/********************/
#define	ISR_FRAME_MAGIC	0xA5
#define	ISR_FRAME_LMU_MAGIC	0xA6  //0xA6 Len(2) Checksum(1)
#define ISR_SKIP_MAGIC 0xFA //This char will be ignored by Catcher



#if defined(__MTK_TARGET__)
#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
  #define __L1Func __attribute__ ((section ("INTSRAM_ROCODE"))) 
#else //#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
    #define __L1Func __attribute__ ((section ("INTERNCODE")))
#endif  //#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
#else //#if defined(__MTK_TARGET__)
  #define __L1Func
#endif //#if defined(__MTK_TARGET__)


/*************************************/
/* Definition used in generated code */
/*************************************/
extern kal_uint32 SaveAndSetIRQMask(void);        
extern void RestoreIRQMask(kal_uint32);           
extern kal_bool trc_check_vacancy(kal_uint32);    

typedef void (*trc_setfilterfunc)(unsigned char *);
#define TRC_FILTER_FUNC_ARRAY		trc_filterfuncarray
#define TRC_NBR_MODULE				trc_filterfuncnbr
#define TRC_BUFFER				    trc_buf
#define TRC_TASK_BUFFER             trc_buf
#define TRC_ISR_BUFFER              trc_buf
#define TRC_BUFFER_PTR			    trc_bufptr
#define TRC_SET_FILTER_FUNC			trc_setfilterfunc	

#define TRC_START_FILL_TASK TRC_START_FILL
#define TRC_END_FILL_TASK   TRC_END_FILL
#define TRC_START_FILL_ISR  TRC_START_FILL
#define TRC_END_FILL_ISR    TRC_END_FILL

#define UL1_FN_SIZE 13
#define L1_FN_SIZE 10
#ifdef __GEMINI_GSM__
#define L1_FN_2_SIZE 11
#endif  //#ifdef __GEMINI_GSM__

#ifdef __GEMINI_WCDMA__
#define UL1_FN_2_SIZE 14
#endif  //#ifdef __GEMINI_WCDMA__
#define UL1_L1_FN_SIZE UL1_FN_SIZE+L1_FN_SIZE

#define TRC_START_FILL(NoBytes)                       \
    kal_uint32 savedMask=0;                           \
    kal_uint32 TRC_LOCAL;                             \
    savedMask = SaveAndSetIRQMask();                  \
    if(!trc_check_vacancy(NoBytes)){                  \
      RestoreIRQMask(savedMask);                      \
      return;                                         \
    }                                                 \
    TRC_LOCAL = trc_bufptr;                           \
    do {} while(0)
    
    
#define TRC_END_FILL                                  \
    trc_bufptr = TRC_LOCAL;                           \
    RestoreIRQMask(savedMask);                       \
    do{}while(0)

//LMU compatible definitions
#define TRC_END_FILL_TASK_0w TRC_END_FILL
#define TRC_END_FILL_TASK_1w TRC_END_FILL
#define TRC_END_FILL_TASK_2w TRC_END_FILL
#define TRC_END_FILL_TASK_3w TRC_END_FILL
#define TRC_END_FILL_TASK_4w TRC_END_FILL
#define TRC_END_FILL_TASK_5w TRC_END_FILL
#define TRC_END_FILL_TASK_6w TRC_END_FILL
#define TRC_END_FILL_TASK_7w TRC_END_FILL

#define TRC_END_FILL_ISR_0w TRC_END_FILL
#define TRC_END_FILL_ISR_1w TRC_END_FILL
#define TRC_END_FILL_ISR_2w TRC_END_FILL
#define TRC_END_FILL_ISR_3w TRC_END_FILL
#define TRC_END_FILL_ISR_4w TRC_END_FILL
#define TRC_END_FILL_ISR_5w TRC_END_FILL
#define TRC_END_FILL_ISR_6w TRC_END_FILL
#define TRC_END_FILL_ISR_7w TRC_END_FILL

/*******************/
/* Variable        */
/*******************/
#ifdef TRC_C
 #if defined(__MTK_TARGET__)
 #if defined(__UMTS_RAT__)
  //#pragma arm section rwdata = "INTSRAM_RW" , rodata = "INTSRAM_RODATA" , zidata = "INTSRAM_ZI" 
  #define TRC_EXT __attribute__ ((zero_init, section ("INTSRAM_ZI")))
 #else //#if defined(__UMTS_RAT__)
  //#pragma arm section rwdata = "INTERNRW" , rodata = "INTERNCONST" , zidata = "INTERNZI"
  #define TRC_EXT __attribute__ ((zero_init, section ("INTERNZI")))
 #endif  //#if defined(__UMTS_RAT__)
 #else //#if defined(__MTK_TARGET__)
  #define TRC_EXT
 #endif //#if defined(__MTK_TARGET__)
#else
  #define TRC_EXT extern
#endif

#if defined(MT6268T) || defined(MT6268H) || ( defined(MT6589) && defined(__MD2__) )
  #define L1TRC_BUFFER_SIZE (1<<10)
#else	//#if defined(MT6268T) || defined(MT6268H) || ( defined(MT6589) && defined(__MD2__) )
  #define L1TRC_BUFFER_SIZE (1<<12)
#endif	//#if defined(MT6268T) || defined(MT6268H) || ( defined(MT6589) && defined(__MD2__) )

/* Task level buffer */
TRC_EXT kal_uint8   trc_buffers[2][L1TRC_BUFFER_SIZE];
TRC_EXT kal_uint8   *trc_buf;
TRC_EXT kal_uint8   *trc_buf_in_process;
TRC_EXT kal_uint32  trc_buf_len_in_process;
TRC_EXT kal_uint32  bak_trc_buf_len_in_process;
/* Pointer of task level buffer */
TRC_EXT kal_uint32  trc_bufptr;
/* Indicate number of lost traces */
TRC_EXT kal_uint8  trc_lostTraces;

#if defined(__LOGACC_ENABLE__)
TRC_EXT kal_uint32  trc_lga_start;
TRC_EXT kal_uint32  trc_lga_end;
#endif  //#if defined(__LOGACC_ENABLE__)


/************/
/*Functions */
/************/
void Trc_Init(void);
void trc_trigger(void);
void trc_fillFrameNumber_multiple(kal_uint32 framenumber, kal_uint32 ebit, kal_uint32 time, kal_uint32 sim_index);
void trc_UFillFrameNumber_multiple(kal_uint16 framenumber, kal_uint32 ebit, kal_int16 bsfn, kal_uint32 time, kal_uint32 sim_index);
void trc_handover(kal_uint32 handovertime, kal_uint32 framenumber);
void trc_Uhandover(kal_uint32 handovertime, kal_uint32 framenumber);
void trc_setfilter(kal_uint8 *setting, kal_uint32 len);
kal_int32 trc_getfilter(kal_uint8 *buffer, kal_int32 len);
void trc_trigger_multiple(kal_uint32 framenumber[], kal_uint16 ebit[], kal_uint32 sim_number, kal_uint32 timestamp); //2G entry functions
void trc_UpdateTimeStamp(kal_uint32 time);

/*******************************/
/* Macro for retrieving values */
/*******************************/
/* TRC_MAKE_CHAR */
#define TRC_MAKE_CHAR(buffer, offset, value)        \
    do {                                            \
      *(buffer+offset) = value;                     \
      offset += 1;                                  \
    } while(0)


/* TRC_MAKE_BYTE */
#define TRC_MAKE_BYTE TRC_MAKE_CHAR

/* TRC_MAKE_UBYTE */
#define TRC_MAKE_UBYTE TRC_MAKE_CHAR

/* TRC_MAKE_SHORT */
#define TRC_MAKE_SHORT(buffer, offset, value)   \
    do {                                        \
        *(buffer+offset) = ((value)>>8) & 0xFF; \
        *(buffer+offset+1) = value & 0xFF;      \
        offset += 2;                            \
    } while(0)
    
/* TRC_MAKE_USHORT */
#define TRC_MAKE_USHORT TRC_MAKE_SHORT
    
/* TRC_MAKE_LONG */
#define TRC_MAKE_LONG(buffer, offset, value)       \
    do {                                           \
        *(buffer+offset)   = ((value)>>24) & 0xFF; \
        *(buffer+offset+1) = ((value)>>16) & 0xFF; \
        *(buffer+offset+2) = ((value)>> 8) & 0xFF; \
        *(buffer+offset+3) = ((value)) & 0xFF;     \
        offset += 4;                               \
    } while(0)
    
/* TRC_MAKE_ULONG */
#define TRC_MAKE_ULONG TRC_MAKE_LONG

/* TRC_MAKE_FN */
#define TRC_MAKE_FN(buffer, offset, value)          \
    do {                                            \
        *(buffer+offset)   = ((value)>>16) & 0xFF;  \
        *(buffer+offset+1) = ((value)>> 8) & 0xFF;  \
        *(buffer+offset+2) = ((value) )    & 0xFF;  \
        offset += 3;                                \
    } while(0)

//For LMU related macros compatible
#define TRC_MAKE_CHAR_0c TRC_MAKE_CHAR
#define TRC_MAKE_CHAR_1c TRC_MAKE_CHAR
#define TRC_MAKE_CHAR_2c TRC_MAKE_CHAR
#define TRC_MAKE_CHAR_3c TRC_MAKE_CHAR

#define TRC_MAKE_SHORT_0c TRC_MAKE_SHORT
#define TRC_MAKE_SHORT_1c TRC_MAKE_SHORT
#define TRC_MAKE_SHORT_2c TRC_MAKE_SHORT
#define TRC_MAKE_SHORT_3c TRC_MAKE_SHORT

#define TRC_MAKE_FN_0c TRC_MAKE_FN
#define TRC_MAKE_FN_1c TRC_MAKE_FN
#define TRC_MAKE_FN_2c TRC_MAKE_FN
#define TRC_MAKE_FN_3c TRC_MAKE_FN

#define TRC_MAKE_LONG_0c TRC_MAKE_LONG
#define TRC_MAKE_LONG_1c TRC_MAKE_LONG
#define TRC_MAKE_LONG_2c TRC_MAKE_LONG
#define TRC_MAKE_LONG_3c TRC_MAKE_LONG

#define TRC_PAD_CHAR(...)
#define TRC_PAD_SHORT(...)
#define TRC_PAD_FN(...)

#define TRC_ISR_BUFFER_FULL(...)
#define TRC_TASK_BUFFER_FULL(...)

//For LMU logging
  #if defined(__TST_LMU_LOGGING__) || defined(__TST_MALMO_SUPPORT__)
  #include "L1Trc_lmu.h"
  #endif  //#if defined(__TST_LMU_LOGGING__) || defined(__TST_MALMO_SUPPORT__)

#endif /* TRACE_DEF_H */

#elif defined(L1_SIM) /* #if defined(L1_CATCHER) && !defined(L1_SIM) */
  #include "L1Trc_Sim.h"
#endif /* #if defined(L1_CATCHER) && !defined(L1_SIM) */
