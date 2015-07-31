/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * pcm4way.c
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

#include "kal_public_api.h"
#include "reg_base.h"

#include "l1audio.h"
#include "am.h"
#include "audio_def.h"
#include "afe_def.h"
#include "media.h"
#include "pcm4way.h"
#include "sal_def.h"
#include "sal_exp.h"

#define NON_PCMEX_STATE 0x0
#define PCM4WAY_STATE   0x1
#define PCM2WAY_STATE   0x2

#define P4W_INTERNAL_BUF_MAX_SIZE 320 // unit is sample (16bit), 16 * 2 

static _PCMEX_T pcmEx;

static uint16 p4w_ulInternalBufDataSize;
static uint16 p4w_dlInternalBufDataSize;
static uint16 p4w_ul1InternalBuf[P4W_INTERNAL_BUF_MAX_SIZE];
static uint16 p4w_dlInternalBuf[P4W_INTERNAL_BUF_MAX_SIZE];

void pcmEx_hisrDlHdlr(void *param) 
{  
	// get SD buf data to temp buffer
   uint32 I;
	uint16 *dl_buf = p4w_dlInternalBuf; 
   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_DL);

	p4w_dlInternalBufDataSize = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_DL);
   for( I = p4w_dlInternalBufDataSize; I > 0; I-- )
      *dl_buf++ = *ptr++;
	
	// handler callback 
   if(pcmEx.pnw_dl_hdlr)
      pcmEx.pnw_dl_hdlr();   
}

void pcmEx_hisrUlHdlr(void *param) 
{
	// get mic1 data to temp buffer
	uint16 I;
	uint16 *ul_buf = p4w_ul1InternalBuf;
	volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_UL1);
	
	p4w_ulInternalBufDataSize = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_UL1);
   if( L1SP_IsMicrophoneMuted() ){
      for( I = p4w_ulInternalBufDataSize; I > 0; I-- )
         *ul_buf++ = 0;
   } else {
      for( I = p4w_ulInternalBufDataSize; I > 0; I-- )    
          *ul_buf++ = *ptr++;
   }
	
	// handler callback 
   if(pcmEx.pnw_ul_hdlr)
      pcmEx.pnw_ul_hdlr();   
}

//************** PCM 4-WAY *******************



void Extended_PCM4WAY_Start(void (*pcm4way_dl_hdlr)(void), void (*pcm4way_ul_hdlr)(void), uint8 type, uint8 cfgUl1, uint8 cfgDL, uint8 cfgUl2)
{
   uint32 I;

   pcmEx.aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( pcmEx.aud_id );

	// clean internal buffer
	memset(p4w_ul1InternalBuf, 0, P4W_INTERNAL_BUF_MAX_SIZE*sizeof(uint16));
	memset(p4w_dlInternalBuf, 0, P4W_INTERNAL_BUF_MAX_SIZE*sizeof(uint16));
	p4w_ulInternalBufDataSize = 0;
	p4w_dlInternalBufDataSize = 0;
	
	// mapping the pcm4way applicatoin type to am type, and setup the band informtion. 
   pcmEx.app_type = type; 

	switch (type) {
		case P4W_APP_CTM: 
		case P4W_APP_TYPE_UNDER_CALL:
			pcmEx.am_type = AM_PCMEX_TYPE_DEDICATION;			
			pcmEx.bandInfo = PCMNWAY_BAND_INFO_DYNAMIC;
			break; 
		case P4W_APP_TYPE_WITHOUT_CALL:
			pcmEx.am_type = AM_PCMEX_TYPE_IDLE_WO_ENH;			
			pcmEx.bandInfo = PCMNWAY_BAND_INFO_NB;
			break;
	}

   ASSERT(SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) && SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF));

   L1Audio_HookHisrHandler(DP_D2C_PCM_EX_DL,(L1Audio_EventHandler)pcmEx_hisrDlHdlr, 0);
   L1Audio_HookHisrHandler(DP_D2C_PCM_EX_UL,(L1Audio_EventHandler)pcmEx_hisrUlHdlr, 0);   
   pcmEx.pnw_dl_hdlr = pcm4way_dl_hdlr; 
   pcmEx.pnw_ul_hdlr = pcm4way_ul_hdlr; 
   pcmEx.state = PCM4WAY_STATE;

	pcmEx.cfgDL = cfgDL;
	pcmEx.cfgUl1 = cfgUl1;
	pcmEx.cfgUl2 = cfgUl2;
	
   /* the begining of configure the SAL */   
   AM_PCM_EX_On(pcmEx.am_type, (uint32)(&pcmEx));//to config pnw

   SAL_PcmEx_SetStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_ON);
   SAL_PcmEx_SetStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_ON);  
   
   for(I = 0; ;I ++){
      kal_bool is_ready = true;
      if( (pcmEx.cfgDL & (USE_D2M_PATH+USE_M2D_PATH)) && (!SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY)))
         is_ready &= false;
      if( ((pcmEx.cfgUl1 & (USE_D2M_PATH+USE_M2D_PATH)) || (pcmEx.cfgUl2 & (USE_D2M_PATH+USE_M2D_PATH)) )
			&& (!SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY)))
         is_ready &= false;
      if(is_ready)
         break;
#ifndef L1D_TEST
      ASSERT(I < 22);  // wait 200ms  
      kal_sleep_task(2);
#endif
   } 
   /* the end of configure the SAL */   
}

void Extended_PCM4WAY_Stop(uint32 type)
{   
	// Sal_PCMEx_Config_t cfg_t;
	// cfg_t.idle = false;//initialized
   ASSERT(type == pcmEx.app_type);  // start and stop should using same type
   
   /* the begining of configure the SAL */ 
	ASSERT(SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) || SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY));
	ASSERT(SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) || SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY));
               
   SAL_PcmEx_SetStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF);
   SAL_PcmEx_SetStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF);

   //cfg_t.swi = SAL_PCMEX_SWITCH_OFF;
   // cfg_t.type = SAL_PCMEX_TYPE_PNW;
   AM_PCM_EX_Off(pcmEx.am_type, (uint32)(&pcmEx));
   /* the end of configure the SAL */    
   
   L1Audio_UnhookHisrHandler(DP_D2C_PCM_EX_DL); 
   L1Audio_UnhookHisrHandler(DP_D2C_PCM_EX_UL);    
   L1Audio_ClearFlag( pcmEx.aud_id );
   L1Audio_FreeAudioID( pcmEx.aud_id );
   pcmEx.pnw_dl_hdlr = pcmEx.pnw_ul_hdlr = NULL;    
   pcmEx.state = NON_PCMEX_STATE;
   pcmEx.app_type = P2W_APP_TYPE_UNDEFINE;
   pcmEx.am_type  = AM_PCMEX_TYPE_UNDEF;   
}

void PCM4WAY_Start(void (*pcm4way_hdlr)(void), uint32 type)
{
   Extended_PCM4WAY_Start(pcm4way_hdlr, NULL, type, 
                          USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH,
                          USE_D2M_PATH + USE_M2D_PATH,
                          0);
}

void PCM4WAY_Stop(uint32 type)
{
   Extended_PCM4WAY_Stop(type);
}

////////////////////////////////////////////////////////////////////////////////

void PCM4WAY_GetFromMic(uint16 *ul_buf)
{
	memcpy(ul_buf, p4w_ul1InternalBuf, p4w_ulInternalBufDataSize*sizeof(uint16));
/*
   uint32 I;
	
   // Use address mode to prevent idma being interrupted by other ISR, ie. L1D.
   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_UL1);
   if( L1SP_IsMicrophoneMuted() ){
      for( I = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_UL1); I > 0; I-- )
         *ul_buf++ = 0;
   } else {
      for( I = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_UL1); I > 0; I-- )    
          *ul_buf++ = *ptr++;
   }
*/

}
  
void PCM4WAY_PutToSE(const uint16 *ul_data)  
{
   uint32 I;

   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_UL1);
   for( I = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_UL1) ; I > 0; I-- )
      *ptr++ = *ul_data++;
}

void PCM4WAY_FillSE(uint16 value)  
{
   uint32 I;

   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_UL1);
   for( I = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_UL1) ; I > 0; I-- )
      *ptr++ = value;
}

void PCM4WAY_GetFromSD(uint16 *dl_buf)
{
	memcpy(dl_buf, p4w_dlInternalBuf, p4w_dlInternalBufDataSize*sizeof(uint16));
/*
   uint32 I;

   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_DL1);
   for( I = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_DL1); I > 0; I-- )
      *dl_buf++ = *ptr++;
*/
}

void PCM4WAY_PutToSpk(const uint16 *dl_data)
{
   uint32 I;

   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_DL);
   for( I = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_DL)  ; I > 0; I-- )
      *ptr++ = *dl_data++;
}

void PCM4WAY_FillSpk(uint16 value)
{
   uint32 I;

   // Use address mode to prevent idma being interrupted by other ISR, ie. L1D.
   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_DL);
   for( I = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_DL); I > 0; I-- )
      *ptr++ = value;
}

//************** PCM 2-WAY *******************

/**
Query the buffer size using in pcm2way
@format: type is P2W_Format, please privide the value for query
@mic_bufsize: return value of microphone buffer size in word(16-bit unit)
@spk_bufsize: return value of speaker buffer size in word(16-bit unit)
*/
void PCM2WAY_QueryBufSize(P2W_Format format, kal_uint32 *mic_bufsize, kal_uint32 *spk_bufsize)
{
   switch((kal_uint32)format){
      case P2W_FORMAT_NORMAL://SPH_P2W_UNDEF:
   	   *mic_bufsize = *spk_bufsize = 160;
   	   break;
	   
      case P2W_FORMAT_VOIP://SPH_P2W_VOIP:
         *mic_bufsize = *spk_bufsize = 160;
         break;
		 
#if defined(__DUAL_MIC_SUPPORT__)  || defined(__SMART_PHONE_MODEM__)
      case P2W_FORMAT_CAL://SPH_P2W_ENH_CAL:
         *spk_bufsize = 160;
         *mic_bufsize = 322; //160*2 +2;
         break;
		 
#if defined(WB_SPE_SUPPORT) // + __DUAL_MIC_SUPPORT__
	  case P2W_FORMAT_WB_CAL://SPH_P2W_ENH_CAL for WB:
         *spk_bufsize = 320;
         *mic_bufsize = 642; //320*2 +2;
         break;
		 
#endif //WB_SPE_SUPPORT (+ __DUAL_MIC_SUPPORT__) 
#endif //__DUAL_MIC_SUPPORT__ || defined(__SMART_PHONE_MODEM__)

	  case P2W_FORMAT_WB_NORMAL:
	  	 *mic_bufsize = *spk_bufsize = 320;
		 break;
		 
      default:
         ASSERT(0);
   }
}

uint32 PCM2Way_GetBandInfo(void)
{
   return pcmEx.bandInfo;
}

void PCM2Way_SetFormat(uint32 format) //for caller, it's WB or NB
{
	//SAC_SphP2WPar.u4Format = format;	 
#if defined(__DUAL_MIC_SUPPORT__)  || defined(__SMART_PHONE_MODEM__)
	if(format == P2W_FORMAT_CAL){
		 pcmEx.bandInfo = PCMNWAY_BAND_INFO_NB; //NB
		 //L1SP_SetULAGC(true);  
		 
	} else
#if defined(WB_SPE_SUPPORT) // + __DUAL_MIC_SUPPORT__
	if (format == P2W_FORMAT_WB_CAL ) {
		 pcmEx.bandInfo = PCMNWAY_BAND_INFO_WB; //WB
	
		 //L1SP_SetULAGC(true);
	} else
#endif //WB_SPE_SUPPORT (+ __DUAL_MIC_SUPPORT__)
#endif //__DUAL_MIC_SUPPORT__ || defined(__SMART_PHONE_MODEM__)

	if (format == P2W_FORMAT_WB_NORMAL)
	{
		pcmEx.bandInfo = PCMNWAY_BAND_INFO_WB;
	} else if (format == P2W_FORMAT_NORMAL) 
	{
		pcmEx.bandInfo = PCMNWAY_BAND_INFO_NB;
	} else if (format == P2W_FORMAT_VOIP) 
	{
		pcmEx.bandInfo = PCMNWAY_BAND_INFO_NB;
	} 
	else
	{ // un-recognized format
	
		 // pcmEx.bandInfo = PCMNWAY_BAND_INFO_UNSET;
		 ASSERT(0);
	}

}

/**

@type: please refer to P2W_App_Type. 
	0 for pcm4way CTM, 
	1 for pcm2way Voice, 
	2 for pcm2way Voip, 
 	3 for pcm2Way record only(calibration used), 
 	4 for pcm2Way record&playback(calibration used)
*/
void Extended_PCM2WAY_Start(void (*pcm2way_dl_hdlr)(void), void (*pcm2way_ul_hdlr)(void), uint8 type, uint8 cfgUl1, uint8 cfgDL, uint8 cfgUl2)
{
   uint32 I;
   kal_bool flag;

   // Sal_PCMEx_Config_t cfg_t;
   // cfg_t.idle = false;//initialized   

   pcmEx.aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( pcmEx.aud_id );      /*Be careful.Before Locking SleepMode, to access DSP sherrif tasks much time. So access DSP must be after SetFlag*/

	// for band infomation checking, user should usd PCM2Way_SetFormat() to set format before pcm2way start
	ASSERT(pcmEx.bandInfo != PCMNWAY_BAND_INFO_UNSET );

   pcmEx.app_type = type;

	flag = true;     //this flag is used to choose one among multiple options 
	switch (type) {  // type checking and pcm2way application type mapping to am type
	   //group1 has the similar settings
		case P2W_APP_TYPE_UNDER_CALL:			
			if(flag){pcmEx.am_type = AM_PCMEX_TYPE_DEDICATION;flag=false;}
      case P2W_APP_TYPE_WITHOUT_CALL:			
			if(flag){pcmEx.am_type = AM_PCMEX_TYPE_IDLE_WO_ENH;flag=false;}			
		case P2W_APP_TYPE_VOIP:			
			if(flag){pcmEx.am_type = AM_PCMEX_TYPE_IDLE;flag=false;}
				
			if(PCMNWAY_BAND_INFO_WB == PCM2Way_GetBandInfo()){
				PCM2WAY_QueryBufSize(P2W_FORMAT_WB_NORMAL, &(pcmEx.u4DspPcmExMicLen), &(pcmEx.u4DspPcmExSpkLen));
			} else {
				PCM2WAY_QueryBufSize(P2W_FORMAT_NORMAL, &(pcmEx.u4DspPcmExMicLen), &(pcmEx.u4DspPcmExSpkLen));
			}
			break;
#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__) 			
      //group2 has the similar settings
		case P2W_APP_TYPE_REC_ONLY_CAL:			
			if(flag){pcmEx.am_type = AM_PCMEX_TYPE_REC_ONLY_CAL;flag=false;}
		case P2W_APP_TYPE_REC_PLAY_CAL:
			if(flag){pcmEx.am_type = AM_PCMEX_TYPE_REC_PLAY_CAL;flag=false;}
						
			if(PCMNWAY_BAND_INFO_NB == PCM2Way_GetBandInfo()){
				PCM2WAY_QueryBufSize(P2W_FORMAT_CAL, &(pcmEx.u4DspPcmExMicLen), &(pcmEx.u4DspPcmExSpkLen));
			} else if(PCMNWAY_BAND_INFO_WB == PCM2Way_GetBandInfo()){
				PCM2WAY_QueryBufSize(P2W_FORMAT_WB_CAL, &(pcmEx.u4DspPcmExMicLen), &(pcmEx.u4DspPcmExSpkLen));
			} else {
				ASSERT(0); // calibration does NOT support dynamic band setting 
			}
			pcmEx.u4DspPcmExMicLen -= 2; //AGC is put in the sherif instead of buffer	
			break;
#endif //__DUAL_MIC_SUPPORT__	|| defined(__SMART_PHONE_MODEM__)		
		default:
			ASSERT(0);
	}
 
   ASSERT(SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) && SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF));
                  
   L1Audio_HookHisrHandler(DP_D2C_PCM_EX_DL,(L1Audio_EventHandler)pcmEx_hisrDlHdlr, 0);
   L1Audio_HookHisrHandler(DP_D2C_PCM_EX_UL,(L1Audio_EventHandler)pcmEx_hisrUlHdlr, 0);   
   pcmEx.pnw_dl_hdlr = pcm2way_dl_hdlr; 
   pcmEx.pnw_ul_hdlr = pcm2way_ul_hdlr; 
   pcmEx.state = PCM2WAY_STATE;
   
 	pcmEx.cfgUl1 = cfgUl1;
	pcmEx.cfgDL = cfgDL; 
	pcmEx.cfgUl2 = cfgUl2;


   AM_PCM_EX_On(pcmEx.am_type, (uint32)(&pcmEx));//to config pnw

   SAL_PcmEx_SetStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_ON);
   SAL_PcmEx_SetStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_ON);  
   
   for(I = 0; ;I ++){
      kal_bool is_ready = true;

      if( (pcmEx.cfgDL & (USE_D2M_PATH+USE_M2D_PATH)) && (!SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY)))
         is_ready &= false;
      if( ((pcmEx.cfgUl1 & (USE_D2M_PATH+USE_M2D_PATH)) || (pcmEx.cfgUl2 & (USE_D2M_PATH+USE_M2D_PATH)))
			&& (!SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY)))
         is_ready &= false;   
		
      if(is_ready)
         break;
#ifndef L1D_TEST
      ASSERT(I < 22);  // wait 200ms  
      kal_sleep_task(2);
#endif
   }      
   /* the end of configure the SAL */             
}  
   
void Extended_PCM2WAY_Stop(uint32 type)
{        
	// Sal_PCMEx_Config_t cfg_t;
	// cfg_t.idle = false;//initialized

	
	ASSERT(type == pcmEx.app_type);  // start and stop should using same type


   /* the begining of configure the SAL */ 
	ASSERT(SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) || SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY));
	ASSERT(SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) || SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY));
               
   SAL_PcmEx_SetStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF);
   SAL_PcmEx_SetStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF);

   AM_PCM_EX_Off(type, (uint32)(&pcmEx));
   /* the end of configure the SAL */    
   
   L1Audio_UnhookHisrHandler(DP_D2C_PCM_EX_DL); 
   L1Audio_UnhookHisrHandler(DP_D2C_PCM_EX_UL); 
   L1Audio_ClearFlag( pcmEx.aud_id );
   L1Audio_FreeAudioID( pcmEx.aud_id );   
   pcmEx.pnw_dl_hdlr = pcmEx.pnw_ul_hdlr = NULL;
   pcmEx.state = NON_PCMEX_STATE;        
   pcmEx.bandInfo = PCMNWAY_BAND_INFO_UNSET;
   pcmEx.app_type = P2W_APP_TYPE_UNDEFINE;
   pcmEx.am_type  = AM_PCMEX_TYPE_UNDEF;   
   
   PCM2Way_SetFormat(P2W_FORMAT_NORMAL);
}


void PCM2WAY_Start(void (*pcm2way_hdlr)(void), uint32 type)
{
   Extended_PCM2WAY_Start(pcm2way_hdlr, NULL, type, 
                          USE_D2M_PATH + DATA_SELECT_AFTER_ENH,
                          USE_M2D_PATH,
                          0);
}

void PCM2WAY_Stop(uint32 type)
{
   Extended_PCM2WAY_Stop(type);
}



/**
@deprecated. 

*/
void PCM2WAY_SetBufSize(uint32 size)
{
	pcmEx.u4DspPcmExMicLen = size;
	pcmEx.u4DspPcmExSpkLen = size;
}

void PCM2WAY_GetFromMic(uint16 *ul_buf)
{
   uint32 I;
   int32 bufLength;

	// mic 1 location
   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_UL1);

	// mic1 buffer size 
   bufLength = pcmEx.u4DspPcmExMicLen; // idle usage: P2W_APP_TYPE_WITHOUT_CALL, P2W_APP_TYPE_VOIP
	if(P2W_APP_TYPE_UNDER_CALL) {
		bufLength = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_UL1);
	}
#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)//every buffer is contain only one mic WHEN CALIBRATION
   else if(P2W_APP_TYPE_REC_ONLY_CAL == pcmEx.app_type || P2W_APP_TYPE_REC_PLAY_CAL == pcmEx.app_type) {
      bufLength >>= 1;
   }
#endif

	// Get Mic1 the data
   if( L1SP_IsMicrophoneMuted() ){
      for( I = bufLength; I > 0; I-- )
         *ul_buf++ = 0;
   } else {
      //*ul_buf = *ptr;   // dummy read
      for( I = bufLength; I > 0; I-- )    
          *ul_buf++ = *ptr++;
   }

	// Calibration related
#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)//every buffer is contain only one mic WHEN CALIBRATION, process the second one
   if(P2W_APP_TYPE_REC_ONLY_CAL == pcmEx.app_type || P2W_APP_TYPE_REC_PLAY_CAL == pcmEx.app_type)
   { 
   	// Mic 2 location
      ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_UL2);

		// Get Mic2 data
      if( L1SP_IsMicrophoneMuted() ){
         for( I = bufLength; I > 0; I-- )
            *ul_buf++ = 0;
      } else {
         *ul_buf = *ptr;   // dummy read
         for( I = bufLength; I > 0; I-- )    
            *ul_buf++ = *ptr++;
      }

		// Get AGC information
   	*ul_buf++ = SAL_AGC_GetSWGain(0);
		*ul_buf++ = SAL_AGC_GetSWGain(1);
   }
#endif //__DUAL_MIC_SUPPORT__ || defined(__SMART_PHONE_MODEM__)

   
} 

void PCM2WAY_GetFromSecondMic(uint16 *ul2_buf)
{
	uint32 I;
   int32 bufLength;

	// mic2 location
   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_UL2);

	// mic2 buffer size 
   bufLength = pcmEx.u4DspPcmExMicLen; // idle usage: P2W_APP_TYPE_WITHOUT_CALL, P2W_APP_TYPE_VOIP
	if(P2W_APP_TYPE_UNDER_CALL) {
		bufLength = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_UL2);
	}

	// Get Mic2 the data
   if( L1SP_IsMicrophoneMuted() ){
      for( I = bufLength; I > 0; I-- )
         *ul2_buf++ = 0;
   } else {
      //*ul_buf = *ptr;   // dummy read
      for( I = bufLength; I > 0; I-- )    
          *ul2_buf++ = *ptr++;
   }
}

void PCM2WAY_PutToSpk(const uint16 *dl_data)
{
   uint32 I;      

	// get speaker position
   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_DL);

	// get speaker length
	int32 bufLength = pcmEx.u4DspPcmExSpkLen;
	if(P2W_APP_TYPE_UNDER_CALL) {
		bufLength = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_DL);
	}

	// put data to buffer
   *ptr++ = *dl_data++;
   for( I = bufLength - 1 ; I > 0; I-- )
      *ptr++ = *dl_data++;

}


void PCM2WAY_FillSpk(uint16 value)
{
   uint32 I;   
   // Use address mode to prevent idma being interrupted by other ISR, ie. L1D.
   
   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_PNW_BUF_DL);

	// get speaker length
	int32 bufLength = pcmEx.u4DspPcmExSpkLen;
	if(P2W_APP_TYPE_UNDER_CALL) {
		bufLength = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_DL);
	}
	
   *ptr++ = value;
   for( I = bufLength - 1 ; I > 0; I-- )
      *ptr++ = value;

}

