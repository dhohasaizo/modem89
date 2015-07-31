/*****************************************************************************
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
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * pcm4way.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   PCM4WAY/PCM2WAY interface 
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef __PCM4WAY_H
#define __PCM4WAY_H
#include "common_def.h"


typedef struct{
   uint16     aud_id;
	uint32     state;     //pcm2way / pcm4way
   kal_uint32 am_type;
   kal_uint32 app_type; // AM_PCMEX_TYPE
   
   kal_uint32 bandInfo;  //to record the band information, please refer to PCMNWAY_BAND_INFO

   kal_uint16 cfgUl1;
   kal_uint16 cfgDL;
	kal_uint16 cfgUl2;
   
   kal_uint32 u4DspPcmExMicLen;
   kal_uint32 u4DspPcmExSpkLen;

   void        (*pnw_dl_hdlr)(void);
   void        (*pnw_ul_hdlr)(void);      
}_PCMEX_T;


// #define PNW_ENBLE               (1<<8)
#define DATA_SELECT_AFTER_ENH   (1<<0)  
#define USE_D2M_PATH            (1<<1)
#define USE_M2D_PATH            (1<<2)

#define PNW_DSP_IDLE            (0)
#define PNW_DSP_ON              (1)
#define PNW_DSP_READY           (2)

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
/* under construction !*/
/* under construction !*/
#endif

typedef enum {
	P4W_APP_CTM = 0,
	P4W_APP_TYPE_UNDER_CALL, //p2w acts as I/O to get/put pcm data under idle
	P4W_APP_TYPE_WITHOUT_CALL,
  
	P4W_APP_TYPE_UNDEFINE = 0xFFFF
}P4W_APP_TYPE;


void PCM4WAY_Start(void (*pcm4way_hdlr)(void), uint32 type);   
void PCM4WAY_Stop(uint32 type);           
void Extended_PCM4WAY_Start(void (*pcm4way_dl_hdlr)(void), void (*pcm4way_ul_hdlr)(void), uint8 type, uint8 cfgUl1, uint8 cfgDL, uint8 cfgUl2);
void Extended_PCM4WAY_Stop(uint32 type);

void PCM4WAY_GetFromMic(uint16 *ul_buf);
void PCM4WAY_PutToSE(const uint16 *ul_data); 
void PCM4WAY_FillSE(uint16 value); 

void PCM4WAY_GetFromSD(uint16 *dl_buf);
void PCM4WAY_PutToSpk(const uint16 *dl_data); 
void PCM4WAY_FillSpk(uint16 value);

void PCM2WAY_Start(void (*pcm2way_hdlr)(void), uint32 type);
void PCM2WAY_Stop(uint32 type);
void Extended_PCM2WAY_Start(void (*pcm2way_dl_hdlr)(void), void (*pcm2way_ul_hdlr)(void), uint8 type, uint8 cfgUl1, uint8 cfgDL, uint8 cfgUl2);
void Extended_PCM2WAY_Stop(uint32 type);

void PCM2WAY_GetFromMic(uint16 *ul_buf);
void PCM2WAY_PutToSpk(const uint16 *dl_data);
void PCM2WAY_FillSpk(uint16 value);

void PCM2WAY_SetBufSize(uint32 size);
#endif 
