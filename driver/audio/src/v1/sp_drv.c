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
 * l1sp.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   L1SP Interface 
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
 *******************************************************************************/
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_trace.h"
#include "string.h"
#include "reg_base.h"
#include "custom_equipment.h" /* custom_cfg_audio_ec_range() */
#include "device.h" /* MAX_VOL_LEVEL,  in ps\l4\include */
#include "audcoeff_default.h"

#include "audio_def.h"
#include "l1audio.h"
#include "l1audio_trace.h"
#include "l1sp_trc.h"
#include "l1audio_sph_trc.h"
#include "ddload.h"
#include "media.h"
#include "afe.h"
#include "am.h"
#include "vm.h"
#include "sal_def.h"
#include "sal_exp.h"

#include "sp_drv.h"

#include "l4_ps_api.h" 

#if defined(__DATA_CARD_SPEECH__)
#include "sp_daca.h"
#endif

#ifdef __TWOMICNR_SUPPORT__
#include "two_mic_NR_custom_if.h"
#endif

#if !defined(__SMART_PHONE_MODEM__)
#else
#include "sidetone.h"
#endif


#define __BT_SUPPORT__
/* ------------------------------------------------------------------------------ */
/*  Speech Interface                                                              */
/* ------------------------------------------------------------------------------ */

typedef enum{
	L1SP_NVRAM_VALUES_FLAG_MODE = 0x1,
	L1SP_NVRAM_VALUES_FLAG_IN_FIR = 0x2,
	L1SP_NVRAM_VALUES_FLAG_OUT_FIR = 0x4,
	L1SP_NVRAM_VALUES_FLAG_WB_MODE = 0x8,
	L1SP_NVRAM_VALUES_FLAG_WB_IN_FIR = 0x10,
	L1SP_NVRAM_VALUES_FLAG_WB_OUT_FIR = 0x20,
	L1SP_NVRAM_VALUES_FLAG_RECORD_MODE = 0x40,
	L1SP_NVRAM_VALUES_FLAG_RECORD_IN_FIR = 0x80,
	L1SP_NVRAM_VALUES_FLAG_VOLUME_PARAM = 0x100,
}L1SP_INTERNAL_NVRAM_VALUES_FLAG; // for NvramValuesFlag


static struct {
   uint16   aud_id;

   uint8    sph_mode;
   // uint8    sph_level; // phase out
   uint16   sph_c_para[NUM_COMMON_PARAS];
   uint16   sph_m_para[NUM_MODE_PARAS];
   uint16   sph_v_para[NUM_VOL_PARAS]; // useless, should find time to remove it  
	uint16   sph_m_paraWb[NUM_MODE_PARAS];
#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)	
   int16    sph_dmnr_para[NUM_DMNR_PARAM];
#if defined(__AMRWB_LINK_SUPPORT__)
   int16    sph_wb_dmnr_para[NUM_WB_DMNR_PARAM];
#endif
	int16    sph_lspk_dmnr_para[NUM_DMNR_PARAM];
#if defined(__AMRWB_LINK_SUPPORT__)
   int16    sph_lspk_wb_dmnr_para[NUM_WB_DMNR_PARAM];
#endif
#endif    

   uint8    mic_volume; //  [analog+digital gain]value corrently set to DSP&HW; when ANALOG_AFE_PATH_EXIST is NOT defined, this is 0
#if 0   
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
   uint16   spe_state;
   uint16   spe_app_mask;   //record the usage every application should have. Ex. phonecall should be turned on DMNR. please do not update the mask directly, please use function l1sp_updateSpeAppMask() to update
   uint16   spe_usr_mask;   //record the usage user choose. Please use function l1sp_updateSpeUsrMaskWithWholeValue() to update
   uint16   spe_usr_sub_mask; // record the usage of enhancement sub feature. Sync with Sal_Enh_Dynamic_t definition.  Ex. phonecall should be turned on DMNR, but users can decide whether turn on or not.please do not update the mask directly, please use function l1sp_updateUsrSubMask() to update 
   bool     spe_flag;   
   bool     isULMute; // flag to keep the DSP UL MUTE states
   bool     isDLMute; // flag to keep the DSP DL MUTE states
   bool     tch_state; // true: TCH on; false: TCH off
   // bool     pcmplayback_flag; // only used in META taste function. // phase out.
   uint8    state; // recording the network is 2G or 3G      
#if 0      
/* under construction !*/
#endif

//#if defined(__BT_SUPPORT__)
   bool     bt_on; // include DSP BT path setting and AFE path switch
//#endif
#if defined( __UMTS_RAT__ ) || defined( __UMTS_TDD128_MODE__ )
   bool     interRAT;
#endif
   void (*onHandler)(void *hdl); 
   void (*offHandler)(void *hdl); 
	
	void (*bgsOnHandler)(void); 
   void (*bgsOffHandler)(void); 
#if defined(__DATA_CARD_SPEECH__)
   void (*strmOnHandler)(void *); 
   void (*strmOffHandler)(void *);
   void (*strmHdl)(kal_uint32 event, void *param);
#endif      
   //value from nvram 
   uint16   setNvramValuesFlag; //bit 0 for sph_allModePara, bit 1 for sph_allInFirCoeff, bit 2 for sph_allOutFirCoeff, 
                                //bit 3 for sph_allWbModePara, bit 4 for sph_allWbInFirCoeff, bit 5 for sph_allWbOutFirCoeff
                                //bit 6 for recordModePara, bit 7 for recordInFirCoeff
                                //bit 8 for sph_allVolumePara 
   
   uint16 sph_allModePara[NUM_SPH_MODE][NUM_MODE_PARAS];   
   int16 sph_allInFirCoeff[NUM_SPH_INPUT_FIR][NUM_FIR_COEFFS];
   int16 sph_allOutFirCoeff[NUM_SPH_OUTPUT_FIR][NUM_FIR_COEFFS];
   uint16 sph_allVolumePara[3][7][4];
   uint16 sph_selectedOutFirIndex;
   
#ifdef WB_SPE_SUPPORT
   uint16 sph_allWbModePara[NUM_SPH_MODE][NUM_MODE_PARAS];
   int16 sph_allWbInFirCoeff[NUM_SPH_INPUT_FIR][NUM_WB_FIR_COEFFS];
   int16 sph_allWbOutFirCoeff[NUM_SPH_OUTPUT_FIR][NUM_WB_FIR_COEFFS];
#endif // WB_SPE_SUPPORT	

#if defined(__ECALL_SUPPORT__)
   void (*pcm4wayOnHandler)(void *); 
   void (*pcm4wayOffHandler)(void *);
#endif
} l1sp;
kal_enhmutexid sp_mutex;
// static kal_bool lineon_flag = KAL_FALSE;  // line in--> phase out


// Line in related. Phase out
//extern void AFE_SetGainFastRamp(kal_bool enable);

#if defined(__BT_SUPPORT__)
bool L1SP_IsBluetoothOn( void )
{
   return (l1sp.sph_mode==SPH_MODE_BT_CORDLESS || l1sp.sph_mode==SPH_MODE_BT_EARPHONE || 
      l1sp.sph_mode==SPH_MODE_BT_CARKIT || l1sp.sph_mode==SPH_MODE_LINEIN_VIA_BT_CORDLESS);
}
#endif

void L1SP_UpdateSpeechPara( uint16 sph_m_para[NUM_MODE_PARAS] )
{
   memcpy(l1sp.sph_m_para, sph_m_para, NUM_MODE_PARAS*sizeof(uint16));
}

#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
static kal_uint16 L1SP_GetAudID(void)/*Be careful.Before Locking SleepMode, to access DSP sherrif tasks much time. So access DSP must be after SetFlag*/
{
   kal_uint16 aud_id;
   aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( aud_id );
   return aud_id;
}
static void L1SP_FreeAudID(kal_uint16 aud_id)
{
   L1Audio_ClearFlag( aud_id );
   L1Audio_FreeAudioID( aud_id );
}
#endif
/*******************************************************************/
/*   The new interface for DSP speech enhancement function / Bluetooth */
/*******************************************************************/
#define USE_AEC defined(AEC_ENABLE)
#define USE_EES defined(EES_ENABLE)

uint16 spe_table[SPH_MODE_UNDEFINED] = {
#if defined(__HQA_AUDIO__) && !(__HQA_AUDIO_AEC_NR_DRC__)
   0, 0, 0, 0, 0, 0, 0,
#elif defined(MT6236) || defined(MT6236B) || defined(MT6256) || defined(MT6255) || defined(MT6252) || defined(MT6252H) || defined(MT6280) || defined(MT6589)
   #if TDDNC_SUPPORT
	  	#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)//in FD216, DMNR's running depends on  // TODO:FIXME
		  /* SPH_MODE_NORMAL */    SPE_AEC_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_DMNR_FLAG + SPE_AGC_FLAG + SPH_ENH_MASK_SIDETONE,
		#else
	     /* SPH_MODE_NORMAL */    SPE_AEC_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_TDDNC_FLAG + SPE_AGC_FLAG + SPH_ENH_MASK_SIDETONE,
	   #endif
		
      #if defined(AEC_ENABLE)           
      /* SPH_MODE_EARPHONE */    SPE_AEC_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_TDDNC_FLAG + SPE_AGC_FLAG + SPH_ENH_MASK_SIDETONE,
      #else 
      /* SPH_MODE_EARPHONE */    SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_TDDNC_FLAG + SPH_ENH_MASK_SIDETONE,
      #endif  
		
      /* SPH_MODE_LOUDSPK */     SPE_EES_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_TDDNC_FLAG + SPE_AGC_FLAG,
      
      #if defined(AEC_ENABLE) && defined(__BT_SUPPORT__)         
      /* SPH_MODE_BT_EARPHONE */ SPE_AEC_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG,
      #else 
      /* SPH_MODE_BT_EARPHONE */ SPE_UL_NR_FLAG + SPE_DL_NR_FLAG,
      #endif
		
      /* SPH_MODE_BT_CORDLESS */ 0,
      
      /* SPH_MODE_BT_CARKIT */   SPE_EES_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG,

      /* SPH_MODE_AUX1 */        SPE_EES_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_TDDNC_FLAG + SPE_AGC_FLAG,
   #else
	  	#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)
		/* SPH_MODE_NORMAL */      SPE_AEC_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_DMNR_FLAG + SPE_AGC_FLAG + SPH_ENH_MASK_SIDETONE,
		#else
      /* SPH_MODE_NORMAL */      SPE_AEC_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_AGC_FLAG + SPH_ENH_MASK_SIDETONE,
      #endif
		
      #if defined(AEC_ENABLE)           
      /* SPH_MODE_EARPHONE */    SPE_AEC_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_AGC_FLAG + SPH_ENH_MASK_SIDETONE,
      #else 
      /* SPH_MODE_EARPHONE */    SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_AGC_FLAG + SPH_ENH_MASK_SIDETONE,
      #endif  
		
      /* SPH_MODE_LOUDSPK */     SPE_EES_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_AGC_FLAG,
      
      #if defined(AEC_ENABLE) && defined(__BT_SUPPORT__)         
      /* SPH_MODE_BT_EARPHONE */ SPE_AEC_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG,
      #else 
      /* SPH_MODE_BT_EARPHONE */ SPE_UL_NR_FLAG + SPE_DL_NR_FLAG,
      #endif
		
      /* SPH_MODE_BT_CORDLESS */ 0,
      
      /* SPH_MODE_BT_CARKIT */   SPE_EES_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG,

		/* SPH_MODE_AUX1 */        SPE_EES_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_AGC_FLAG,
   #endif
#endif
   /* SPH_MODE_AUX2 */        0            
};   

typedef enum{
	L1SP_SPE_SUBMASK_BYMASK = 0,
	L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, // default true
	L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE, // default true
	L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON,
	L1SP_SPE_SUBMASK_SKIP,
}L1SP_SPE_SUBMASK_VALUES; // for NvramValuesFlag

L1SP_SPE_SUBMASK_VALUES spe_subMask_table[SPH_MODE_UNDEFINED][SAL_ENH_DYNAMIC_NUM] = {
	/* SPH_MODE_NORMAL */  
	{ L1SP_SPE_SUBMASK_SKIP, 
	  L1SP_SPE_SUBMASK_BYMASK, 
	  L1SP_SPE_SUBMASK_BYMASK, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE,
	  L1SP_SPE_SUBMASK_BYMASK},
	/* SPH_MODE_EARPHONE */
	{ L1SP_SPE_SUBMASK_SKIP, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON,
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE,
	  L1SP_SPE_SUBMASK_BYMASK},
	/* SPH_MODE_LOUDSPK */
	{ L1SP_SPE_SUBMASK_SKIP, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON,
	  L1SP_SPE_SUBMASK_BYMASK,
	  L1SP_SPE_SUBMASK_BYMASK},
	/* SPH_MODE_BT_EARPHONE */
	{ L1SP_SPE_SUBMASK_SKIP, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON,
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE,
	  L1SP_SPE_SUBMASK_BYMASK},
	/* SPH_MODE_BT_CORDLESS */
	{ L1SP_SPE_SUBMASK_SKIP, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON,
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE,
	  L1SP_SPE_SUBMASK_BYMASK},
	/* SPH_MODE_BT_CARKIT */
	{ L1SP_SPE_SUBMASK_SKIP, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON,
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE,
	  L1SP_SPE_SUBMASK_BYMASK},
	/* SPH_MODE_AUX1 --> use for magic con-call*/ 
	{ L1SP_SPE_SUBMASK_SKIP, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON,
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE,
	  L1SP_SPE_SUBMASK_BYMASK},
	/* SPH_MODE_AUX2 */
	{ L1SP_SPE_SUBMASK_SKIP, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE,
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE,
	  L1SP_SPE_SUBMASK_BYMASK},
	/* LINEIN ?  */
	{ L1SP_SPE_SUBMASK_SKIP, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE, 
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON, 
	  L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON,
	  L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE,
	  L1SP_SPE_SUBMASK_BYMASK}
	//
};

#if __RELOAD_DSP_COEFF__


void L1SP_Reload_SPE_Para( void )
{
   SPE_LoadSpeechPara(l1sp.sph_c_para, l1sp.sph_m_para, l1sp.sph_v_para, l1sp.sph_m_paraWb);
}
#endif

/* Phase out, 
void L1SP_Init_PCMPlayback(uint8 sph_mode, bool bDigitalGain, uint16 digital_gain)
{
	 unsigned short Speech_Normal_Mode_Para[16] = DEFAULT_SPEECH_NORMAL_MODE_PARA;
   unsigned short Speech_Earphone_Mode_Para[16] = DEFAULT_SPEECH_EARPHONE_MODE_PARA;
   unsigned short Speech_Loudspeaker_Mode_Para[16] = DEFAULT_SPEECH_LOUDSPK_MODE_PARA;
	 
	 switch(sph_mode) {
	 case SPH_MODE_NORMAL:
	     if(bDigitalGain == true) {
	        Speech_Normal_Mode_Para[7] = digital_gain;
	     }
	 	  L1SP_SetSpeechMode(SPH_MODE_NORMAL, Speech_Normal_Mode_Para);
	 		break;
	 case SPH_MODE_EARPHONE:
	     if(bDigitalGain == true) {
	        Speech_Earphone_Mode_Para[7] = digital_gain;
	     }
	 	  L1SP_SetSpeechMode(SPH_MODE_EARPHONE, Speech_Earphone_Mode_Para);
	 	  break;
	 case SPH_MODE_LOUDSPK: 
	     if(bDigitalGain == true) {
	        Speech_Loudspeaker_Mode_Para[7] = digital_gain;
	     }
	 	  L1SP_SetSpeechMode(SPH_MODE_LOUDSPK, Speech_Loudspeaker_Mode_Para);
	 	  break;
	 default:
	 	  break;
	 } 
}

void L1SP_EnableStrmPcmSPE(void)
{
	 l1sp.pcmplayback_flag = true;
}

void L1SP_DisableStrmPcmSPE(void)
{
	 l1sp.pcmplayback_flag = false;
}

bool L1SP_CheckStrmPcmSPE(void)
{
	 return l1sp.pcmplayback_flag;
}

*/

void SetSpeechEnhancement( bool ec )
{

	//for data card, speech enhancment is not existing. 
#if defined(__DATA_CARD_SPEECH__) || defined(MT6280)
   return; 
#endif // defined(__DATA_CARD_SPEECH__) || defined(MT6280)

#ifdef SPH_CHIP_BACK_PHONECALL_USED
	return;
#endif // SPH_CHIP_BACK_PHONECALL_USED
   
   if ((!AM_IsAmInSpeechState()) || (!l1sp.spe_flag)) 
      return;
   ASSERT(l1sp.sph_mode<SPH_MODE_UNDEFINED);

   kal_trace( TRACE_INFO, L1SP_APPLY_MODE, (ec)?1:0, l1sp.sph_mode, -1, l1sp.mic_volume );
   if( ec ) {
      uint16 next_state, keep_on_state, on_state, off_state;  
		uint8 i;
		
		// Update Usr Sub Mask to DSP ENH Dynamic control, 
		// [Remind] ignore SAL_ENH_DYNAMIC_MUTE_UL, because DSP using same sherif to control
		for(i=SAL_ENH_DYNAMIC_DMNR_MUX; i<SAL_ENH_DYNAMIC_NUM ; i++){
			L1SP_SPE_SUBMASK_VALUES subMask = spe_subMask_table[l1sp.sph_mode][i]; 

			// bit wise update the sub mask (dynamic control for SPE)
			switch(subMask){
				case L1SP_SPE_SUBMASK_BYMASK:
					SAL_ENH_Dynamic_Ctrl(((l1sp.spe_usr_sub_mask & (1<<i))!=0), i);
					break; 
				case L1SP_SPE_SUBMASK_DONT_CARE_NO_STATE_MACHINE: // default true
				case L1SP_SPE_SUBMASK_DONT_CARE_NO_EM_VALUE:
				case L1SP_SPE_SUBMASK_SKIP_DEFAULT_ON:
					SAL_ENH_Dynamic_Ctrl(true, i);
					break;
				case L1SP_SPE_SUBMASK_SKIP:
					break;
			}
			kal_trace( TRACE_INFO, L1SP_SET_ENHANCEMENT_SUB_MASK, i, subMask);
			//SAL_ENH_Dynamic_Ctrl(((l1sp.spe_usr_sub_mask & (1<<i))!=0), i);
		}
	
      next_state = spe_table[l1sp.sph_mode];
	  // using l1sp.spe_mask to control the open/close of speech enhancment. 
      for(i=0; i< NUM_OF_SPH_FLAG; i++) {
	     uint16 tempMaskBit = (1<<i);
	     if((
	        ((l1sp.spe_app_mask & tempMaskBit) == 0 ) || 
	        ((l1sp.spe_usr_mask & tempMaskBit) == 0 ) 
	        )&& (next_state & tempMaskBit))
         {
            next_state -=tempMaskBit;
         }
	  }
	  
#ifdef __TWOMICNR_SUPPORT__
      if ( l1sp.sph_mode == SPH_MODE_LOUDSPK ){
         next_state &= ~(SPE_AEC_FLAG + SPE_EES_FLAG + SPE_UL_NR_FLAG);
         Two_Mic_NR_chip_Handfree_mode();
         kal_trace( TRACE_STATE, L1SP_2MIC_STATE, l1sp.sph_mode, next_state);
      }else if ( l1sp.sph_mode == SPH_MODE_NORMAL )
      {
         next_state &= ~(SPE_AEC_FLAG + SPE_EES_FLAG);
         Two_Mic_NR_chip_Handset_mode();
         kal_trace( TRACE_STATE, L1SP_2MIC_STATE, l1sp.sph_mode, next_state);
      }else{
         Two_Mic_NR_chip_Bypass_mode();
         kal_trace(L1SP_2MIC_ENTER_BYPASS, "L1SP 2Mic Enter Bypass mode");
      }
#endif
#if defined(__TC01_VOICE_ENGINE__)
      if( l1sp.sph_mode == SPH_MODE_NORMAL ){
         if(VS_IsStart())
            VS_Stop();
         VC_Start();
         next_state &= ~SPE_DL_NR_FLAG;
      }
      else if( l1sp.sph_mode == SPH_MODE_LOUDSPK ){
         if(VC_IsStart())
            VC_Stop();
         VS_Start();
         next_state &= ~SPE_DL_NR_FLAG;
      }
#endif
            
      switch( l1sp.sph_mode ) {
#if TDDNC_SUPPORT
			case SPH_MODE_NORMAL:
			case SPH_MODE_LOUDSPK:
				if(0==(next_state&SPE_DMNR_FLAG)) { // when DMNR is off, use TDDNC
					next_state |= SPE_TDDNC_FLAG;
				}
				break;
#endif

      #if defined(__BT_SUPPORT__)      // DSP_BT_SUPPORT
         case SPH_MODE_BT_EARPHONE:
         case SPH_MODE_BT_CORDLESS:
         case SPH_MODE_BT_CARKIT:
            ASSERT( AM_IsBluetoothOn() );
            break;
      #endif       
         default:
            break;         	
      }

      keep_on_state = next_state & l1sp.spe_state; 
      on_state = next_state - keep_on_state; 
      off_state = l1sp.spe_state - keep_on_state;

      kal_trace( TRACE_INFO, L1SP_SET_ENHANCEMENT, keep_on_state, on_state, off_state);
   
      if(off_state != 0) 
         SPE_TurnOffProcess(off_state);   

    
      if(next_state != 0)
      {
         kal_trace( TRACE_INFO, L1SP_SPEECH_ENHANCEMENT, next_state,
            l1sp.sph_m_para[0], l1sp.sph_m_para[1], l1sp.sph_c_para[0], l1sp.sph_c_para[1] );

			// reload the parameters
         if(next_state & (SPE_AEC_FLAG + SPE_EES_FLAG + SPE_UL_NR_FLAG + SPE_DL_NR_FLAG + SPE_TDDNC_FLAG))
            SPE_LoadSpeechPara(l1sp.sph_c_para, l1sp.sph_m_para, l1sp.sph_v_para, l1sp.sph_m_paraWb);

#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)	
			if(next_state & SPE_DMNR_FLAG)
			{
				if(SPH_MODE_LOUDSPK == l1sp.sph_mode) { // load the loud speaker mode DMNR parameter
					SPE_LoadDmnrCoeffs(l1sp.sph_lspk_dmnr_para);
#if defined(__AMRWB_LINK_SUPPORT__)
					SPE_LoadWbDmnrCoeffs(l1sp.sph_lspk_wb_dmnr_para);
#endif //__AMRWB_LINK_SUPPORT__

				} else {				
			 		SPE_LoadDmnrCoeffs(l1sp.sph_dmnr_para);	
#if defined(__AMRWB_LINK_SUPPORT__)
					SPE_LoadWbDmnrCoeffs(l1sp.sph_wb_dmnr_para);
#endif //__AMRWB_LINK_SUPPORT__
				}

		 	}
#endif //__DUAL_MIC_SUPPORT__ || defined(__SMART_PHONE_MODEM__)	

         if(on_state != 0) 
            SPE_TurnOnProcess(on_state);

			if(SPH_ENH_MASK_SIDETONE & on_state) {
#if defined(__SMART_PHONE_MODEM__)	// prevent build error
				SIDETONE_TurnSwSidetoneOn(true);
#endif				
			}
			
      }
      l1sp.spe_state = next_state;
      SPE_Clear_DLL_Entry(l1sp.spe_state);
   }
   else {
      if(l1sp.spe_state != 0)
      {
         SPE_TurnOffProcess(l1sp.spe_state);  
			if(SPH_ENH_MASK_SIDETONE & l1sp.spe_state) {
#if defined(__SMART_PHONE_MODEM__)  // prevent build error
				SIDETONE_TurnSwSidetoneOn(false);
#endif				
			}
			
         l1sp.spe_state = 0;
         SPE_Clear_DLL_Entry(0);
      }
#ifdef __TWOMICNR_SUPPORT__
      if ( l1sp.sph_mode == SPH_MODE_LOUDSPK || l1sp.sph_mode == SPH_MODE_NORMAL )
      {
         Two_Mic_NR_chip_Sleep();
         kal_trace(TRACE_STATE, L1SP_2MIC_SLEEP);
      }
      else{
         Two_Mic_NR_chip_exit_Bypass_mode();
         kal_trace(TRACE_STATE, L1SP_2MIC_EXIT_BYPASS);
      }
#endif
#if defined(__TC01_VOICE_ENGINE__)
      VC_Stop();
      VS_Stop();
#endif
   }

#if 0
/* under construction !*/
/* under construction !*/
#if !USE_AEC
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif	
}

void L1SP_LoadCommonSpeechPara( uint16 c_para[NUM_COMMON_PARAS] )
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif    
   memcpy(l1sp.sph_c_para, c_para, NUM_COMMON_PARAS*sizeof(uint16));
   SetSpeechEnhancement( true );
   
   // Some common parameters are used in non-speech function
   // Force to load common parameter
   SPE_LoadSpeechPara(l1sp.sph_c_para, NULL, NULL, NULL);
	
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif
}
void l1sp_setAllSpeechModePara(uint16 * speech_mode_para, int16 length)
{
	ASSERT((NUM_SPH_MODE*NUM_MODE_PARAS) == length);
	
	memcpy(l1sp.sph_allModePara, speech_mode_para, 
		NUM_SPH_MODE*NUM_MODE_PARAS*sizeof(uint16));
	l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_MODE;
}

void l1sp_SetWbSpeechPara( kal_uint16 m_para[NUM_MODE_PARAS] )
{
   memcpy( l1sp.sph_m_paraWb, m_para, NUM_MODE_PARAS*sizeof(uint16));
}
void l1sp_updateSpeAppMask(uint8 updateFlags, bool enable)
{
	if(enable)
		l1sp.spe_app_mask |= (updateFlags);
	else
		l1sp.spe_app_mask &= ~(updateFlags);

	kal_trace( TRACE_INFO, L1SP_UPDATE_SPE_MASKS, 2, l1sp.spe_app_mask, l1sp.spe_usr_mask, l1sp.spe_usr_sub_mask, updateFlags, enable);	
}

/*
void l1sp_updateSpeUsrMask(uint8 updateFlags, bool enable)
{
	if(enable)
		l1sp.spe_usr_mask |= (updateFlags);
	else
		l1sp.spe_usr_mask &= ~(updateFlags);

	kal_trace( TRACE_INFO, L1SP_UPDATE_SPE_MASKS, 2, l1sp.spe_app_mask, l1sp.spe_usr_mask, l1sp.spe_usr_sub_mask, updateFlags, enable);	
}
*/
void l1sp_updateSpeUsrMaskWithWholeValue(uint16 newValue)
{
	kal_uint16 orgValue = l1sp.spe_usr_mask;

	l1sp.spe_usr_mask  = newValue;
	
	kal_trace( TRACE_INFO, L1SP_UPDATE_SPE_MASKS, 3, l1sp.spe_app_mask, l1sp.spe_usr_mask, l1sp.spe_usr_sub_mask, newValue, orgValue);	
	
	if(l1sp.spe_state) // already turn on speech enhancement
      SetSpeechEnhancement(KAL_TRUE);
}

/**
	@newValue: 
	typedef enum{
                // ==> SAL_ENH_DYNAMIC_MUTE_UL, bit 0. Please DO NOT use it
		SPE_DYNAMIC_MASK_DMNR = 0x1, // ==> SAL_ENH_DYNAMIC_DMNR_MUX, bit 1
		SPE_DYNAMIC_MASK_VCE  = 0x2, // ==> SAL_ENH_DYNAMIC_VCE_MUX, bit 2
		SPE_DYNAMIC_MASK_BWE  = 0x4, // ==> SAL_ENH_DYNAMIC_BWE_MUX, bit 3
		SPE_DYNAMIC_MASK_DLNR  = 0x8, // ==> SAL_ENH_DYNAMIC_DLNR_MUX, bit 4  // undefined in AP
		SPE_DYNAMIC_MASK_ULNR  = 0x10, // ==> SAL_ENH_DYNAMIC_DLNR_MUX, bit 5 // undefined in AP
		SPE_DYNAMIC_MASK_LSPK_DMNR  = 0x10, // ==> SAL_ENH_DYNAMIC_DLNR_MUX, bit 6
	}SPE_SUB_MASK_T;
	
*/
void l1sp_updateSpeUsrSubMaskWithWholeValue(uint16 newValue)
{
	kal_uint16 orgValue = l1sp.spe_usr_sub_mask;

	l1sp.spe_usr_sub_mask  = (newValue<<1);
	
	kal_trace( TRACE_INFO, L1SP_UPDATE_SPE_MASKS, 4, l1sp.spe_app_mask, l1sp.spe_usr_mask, l1sp.spe_usr_sub_mask, newValue, orgValue);	
	
	if(l1sp.spe_state) // already turn on speech enhancement
      SetSpeechEnhancement(KAL_TRUE);
}

#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)	

/**
	Not support parameter rewirte under application begin runnning
*/
void L1SP_SetDMNRPara( const kal_int16 DMNR_para[NUM_DMNR_PARAM] )
{
	
	memcpy(&l1sp.sph_dmnr_para, DMNR_para, NUM_DMNR_PARAM*sizeof(uint16));
	// SPE_LoadDmnrCoeffs(l1sp.sph_dmnr_para); // load the data to DSP before turn on
}

#if defined(__AMRWB_LINK_SUPPORT__)
/**
	Not support parameter rewirte under application begin runnning
*/
void L1SP_SetWbDMNRPara( const kal_int16 WB_DMNR_para[NUM_WB_DMNR_PARAM] )
{
	memcpy(&l1sp.sph_wb_dmnr_para, WB_DMNR_para, NUM_WB_DMNR_PARAM*sizeof(uint16));
	// SPE_LoadWbDmnrCoeffs(l1sp.sph_wb_dmnr_para); // load the data to DSP before turn on 
}
#endif //__AMRWB_LINK_SUPPORT__

/**
	Not support parameter rewirte under application begin runnning
*/
void L1SP_SetLSpkDMNRPara( const kal_int16 LSpk_DMNR_para[NUM_DMNR_PARAM] )
{	
	memcpy(&l1sp.sph_lspk_dmnr_para, LSpk_DMNR_para, NUM_DMNR_PARAM*sizeof(uint16));
	// SPE_LoadDmnrCoeffs(l1sp.sph_dmnr_para); // load the data to DSP before turn on
}

#if defined(__AMRWB_LINK_SUPPORT__)

/**
	Not support parameter rewirte under application begin runnning
*/
void L1SP_SetLSpkWbDMNRPara( const kal_int16 LSpk_Wb_DMNR_para[NUM_WB_DMNR_PARAM] )
{
	memcpy(&l1sp.sph_lspk_wb_dmnr_para, LSpk_Wb_DMNR_para, NUM_WB_DMNR_PARAM*sizeof(uint16));
	// SPE_LoadWbDmnrCoeffs(l1sp.sph_wb_dmnr_para); // load the data to DSP before turn on 
}
#endif //__AMRWB_LINK_SUPPORT__

#endif //__DUAL_MIC_SUPPORT__ || defined(__SMART_PHONE_MODEM__)	



kal_uint8 L1SP_GetSpeechMode( void )
{
    return l1sp.sph_mode;
}


static void changeSpeechMode(uint8 afterSalDevMode, uint8 prev_sph_mode, uint8 after_sph_mode, 
	uint16 m_paras[NUM_MODE_PARAS])
{
	kal_bool preIsBt;
	kal_bool afterIsBt;
	kal_bool isSpeechOn; 
	kal_bool isAmInSpeechState;

	kal_trace( TRACE_INFO, L1SP_CHANGE_ENH_MODE, prev_sph_mode, after_sph_mode, l1sp.sph_mode); 

	preIsBt = ( (SPH_MODE_BT_EARPHONE==prev_sph_mode) || 
		(SPH_MODE_BT_CORDLESS==prev_sph_mode) ||
		(SPH_MODE_BT_CARKIT==prev_sph_mode) );
	afterIsBt = ( (SPH_MODE_BT_EARPHONE==after_sph_mode) || 
		(SPH_MODE_BT_CORDLESS==after_sph_mode) ||	
		(SPH_MODE_BT_CARKIT==after_sph_mode) );
	isSpeechOn = AM_IsSpeechOn();
	isAmInSpeechState = AM_IsAmInSpeechState();
	
	//if( prev_sph_mode != after_sph_mode ) { // Allow quick adaptation when change mode		
   //  	SetSpeechEnhancement( false );		
	//}
	
	// Always turn off the enhancement first in order to feed the parameter to DSP in the run time(under call)
	// beacuse enhancement only get the parameter under enable state machine
	SetSpeechEnhancement( false );
	
   // setBt(after_sph_mode, prev_sph_mode);
   if(preIsBt != afterIsBt){ // need off on speech , due to speech buffer changes between VBI and DAI
   	// turn off DSP app
   	if(true == isAmInSpeechState){
			if(true == isSpeechOn) {
				AM_SpeechOff(1); // turn off 8k and speech off

			} else { // cordless mode / speech 
				
				// if( prev_sph_mode == SPH_MODE_BT_CORDLESS ) {
			  	// 	AM_BTCordlessOff();
		   	// } else {		   		
					ASSERT(0); // Do not handle here. Please handle it on application
					// AM_PCM_EX_Off(AM_PCMEX_TYPE type,uint32 p2exData)
		   	// }
				
			}
   	}
			
		if(l1sp.bt_on)
		{
			AM_BluetoothOff();
			l1sp.bt_on = false;
		}
   }

	// Begin apply the new device and enhancement parameter
	// setSrcControl(prev_sph_mode, mode);
	if((SPH_MODE_BT_EARPHONE==after_sph_mode) || 
		(SPH_MODE_BT_CARKIT==after_sph_mode)) {
		// get sampling rate information from AFE information
		if(0== AFE_GetVoice8KMode()) { // NB
			SAL_Set_Device(SAL_DEV_BT_EARPHONE_NB);
		} else { //WB
			SAL_Set_Device(SAL_DEV_BT_EARPHONE_WB);
		}
	} else {
		SAL_Set_Device(afterSalDevMode);
	}
	
	l1sp.sph_mode = after_sph_mode;		
	
	memcpy(l1sp.sph_m_para, m_paras, NUM_MODE_PARAS*sizeof(uint16));

	if(preIsBt != afterIsBt){ // need off on speech, due to speech buffer changes between VBI and DAI
		
		if(afterIsBt)
		{
			if ((after_sph_mode==SPH_MODE_BT_CORDLESS || after_sph_mode==SPH_MODE_LINEIN_VIA_BT_CORDLESS)) 
         {
         	AM_BluetoothOn(1);
			} else {
				AM_BluetoothOn(2);
			}
			
			l1sp.bt_on = true;
		}

		if(true == isAmInSpeechState){
			if(true == isSpeechOn) {				
				// [REMIND]L1SP_STATE_xx can mapping to RAT_2G_MODE using "index -1"
				AM_SpeechOn((L1SP_GetState()-1), 1); 
				
			} else { // cordless mode / speech 
				
				// if( after_sph_mode == SPH_MODE_BT_CORDLESS ) {
			  	// 	AM_BTCordlessOn();
		   	// } else {		   		
					ASSERT(0); // Do not handle here. Please handle it on application
					// AM_PCM_EX_Off(AM_PCMEX_TYPE type,uint32 p2exData)
		   	// }
				
			}
   	}
   }
	
   kal_trace( TRACE_INFO, L1SP_SET_MODE, l1sp.sph_mode, -1, l1sp.mic_volume );
   SetSpeechEnhancement( true );
}


void l1sp_SetSpeechMode( uint8 devMode, uint8 mode, uint16 m_para[NUM_MODE_PARAS] )
{
   uint8 prev_sph_mode = l1sp.sph_mode;
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif   

#ifdef SPH_CHIP_BACK_PHONECALL_USED
	devMode = SAL_DEV_NORMAL;
   mode = SPH_MODE_NORMAL; // force setting to normal mode
#endif

   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 4, prev_sph_mode, mode);
  	kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
	changeSpeechMode(devMode, l1sp.sph_mode, mode, m_para);   
	
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif   		
}

static void l1sp_getFirMappingByScene(const uint32 scene, 
	uint8 *devMode, uint8 *enhMode,
	uint8 *inFir, uint8 *outFir)
{
	uint8 tempDevMode = 0xff; 
	uint8 tempEnhMode = 0xff;
	uint8 tempInFir = 0xff; 
	uint8 tempOutFir = 0xff;
	
	switch(scene) {
	case SPH_ENH_AND_FIR_SCENE_NORMAL:
		tempDevMode = SAL_DEV_NORMAL; // SPH_MODE_NORMAL;
		tempEnhMode = SPH_MODE_NORMAL;
		tempInFir = SPH_FIR_COEFF_NORMAL;
		tempOutFir = SPH_FIR_COEFF_NORMAL;
		
		break;
	case SPH_ENH_AND_FIR_SCENE_EARPHONE:
	case SPH_ENH_AND_FIR_SCENE_LOUDSPK:
		tempDevMode = scene; // SAL_DEV_EARPHONE or SAL_DEV_LOUDSPK
		tempEnhMode = scene;
		tempInFir = scene;
		tempOutFir = scene;
		break;	
#if defined(__BT_SUPPORT__)		
	case SPH_ENH_AND_FIR_SCENE_BT_EARPHONE:	
	case SPH_ENH_AND_FIR_SCENE_BT_CARKIT:
		tempDevMode = SAL_DEV_BT_EARPHONE_NB; //scene;
		tempEnhMode = scene;
		tempInFir = SPH_FIR_COEFF_BT; 
		tempOutFir = SPH_FIR_COEFF_BT;
		break;

	case SPH_ENH_AND_FIR_SCENE_BT_CORDLESS:		
#if defined(MT6280) || defined(MT6589) // hw did not support
		ASSERT(0);
#else 
		tempDevMode = SAL_DEV_BT_CORDLESS; //scene;
		tempEnhMode = scene;
		tempInFir = SPH_FIR_COEFF_BT; 
		tempOutFir = SPH_FIR_COEFF_BT;
#endif		
		break;
#endif
	case SPH_ENH_AND_FIR_SCENE_AUX1: // AUX is use to  loud speaker mode
		tempDevMode = SAL_DEV_LOUDSPK; //scene
		tempEnhMode = SPH_MODE_AUX1; //scene
		tempInFir = SPH_FIR_COEFF_HANDFREE;
		tempOutFir = SPH_FIR_COEFF_HANDFREE;
		break;
	case SPH_ENH_AND_FIR_SCENE_AUX2:
		tempDevMode = SPH_MODE_NORMAL;
		tempEnhMode = SPH_MODE_AUX2;
		tempInFir = SPH_FIR_COEFF_VOIP_HANDFREE;
		tempOutFir = SPH_FIR_COEFF_VOIP_HANDFREE;
		break;		
	default:
		{
			ASSERT(0);
		}

	}
	
	*devMode = tempDevMode;
	*enhMode = tempEnhMode;
	*inFir = tempInFir;
	*outFir = tempOutFir;
	
}

/**
	new interface to replace L1SP_SetSpeechMode(), L1SP_Write_Audio_Coefficients(), 
	L1SP_Write_WB_Audio_Coefficients() in the same time. 

	if you want to use personal configuration, you can use original interfaces. 

	@scene: [Input] scenario for different enhancement and fir combination. 
*/
void L1SP_SetSpeechEnhanceAndFir(uint32 scene, uint32 updatedCoeff)

{
	uint8 modeIndex = 0;
	uint8 inFirIndex = 0;
	uint8 outFirIndex = 0;
	uint8 devModeIndex = 0; 


	//speech mode
//----------------- original scenario ---------------
	if(scene <SPH_MODE_UNDEFINED)
	{ //keeping the original scenario

		l1sp_getFirMappingByScene(scene, &devModeIndex, &modeIndex, 
			&inFirIndex, &outFirIndex);

#ifdef WB_SPE_SUPPORT 
		if((updatedCoeff == 0) || (updatedCoeff&SPH_ENH_AND_FIR_UPDATE_TYPE_WB_FIR)!=0){
			if((l1sp.setNvramValuesFlag & L1SP_NVRAM_VALUES_FLAG_WB_IN_FIR)
				&& (l1sp.setNvramValuesFlag & L1SP_NVRAM_VALUES_FLAG_WB_OUT_FIR)) {

				AM_WriteWbFirCoeffs(l1sp.sph_allWbInFirCoeff[inFirIndex],
					l1sp.sph_allWbOutFirCoeff[outFirIndex]);
				// l1sp_Write_WB_Audio_Coefficients(l1sp.sph_allWbInFirCoeff[inFirIndex], l1sp.sph_allWbOutFirCoeff[outFirIndex]);
			}
		}
#endif	
	
		// Write NB FIR
		// this function needs to after WB Fir Coeffs are set. Because BKF enable is in this function
		if((updatedCoeff == 0) || (updatedCoeff&SPH_ENH_AND_FIR_UPDATE_TYPE_NB_FIR)!=0)
			L1SP_Write_Audio_Coefficients_ByFirIndex(inFirIndex, outFirIndex); 
		//l1sp_Write_Audio_Coefficients(l1sp.sph_allInFirCoeff[inFirIndex], l1sp.sph_allOutFirCoeff[outFirIndex]);

	
		//speech mode
#ifdef WB_SPE_SUPPORT 
		if((updatedCoeff == 0) || (updatedCoeff&SPH_ENH_AND_FIR_UPDATE_TYPE_WB_ENH_MODE)!=0){
			if(l1sp.setNvramValuesFlag & L1SP_NVRAM_VALUES_FLAG_WB_MODE)//(l1sp.has_all_wb_sph_m_para)
				l1sp_SetWbSpeechPara(l1sp.sph_allWbModePara[modeIndex]);
		}
#endif 		
		if((updatedCoeff == 0) || (updatedCoeff&SPH_ENH_AND_FIR_UPDATE_TYPE_NB_ENH_MODE)!=0)
			l1sp_SetSpeechMode(devModeIndex, modeIndex, l1sp.sph_allModePara[modeIndex]);
	

	}
//---------------------- undefined cases --------------------
	else { // undefined cases. 
		kal_trace ( TRACE_INFO, L1SP_USELESS_SET, scene, 0, 0);
	}
	
	kal_trace( TRACE_INFO, L1SP_SET_ENH_FIR, scene, modeIndex, inFirIndex, outFirIndex, l1sp.spe_usr_mask, l1sp.spe_app_mask);
	
}

void l1sp_setAllSpeechFirCoeff_InputOnly(int16 *speech_input_FIR_coeffs, int16 length)
{
	ASSERT((NUM_SPH_INPUT_FIR*NUM_FIR_COEFFS) == length);
	
	memcpy(l1sp.sph_allInFirCoeff, speech_input_FIR_coeffs, 
		NUM_SPH_INPUT_FIR*NUM_FIR_COEFFS*sizeof(int16));
	l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_IN_FIR;

}

void l1sp_setAllSpeechFirCoeff_OutputOnly(int16 *speech_output_FIR_coeffs, int16 length)
{
	ASSERT((NUM_SPH_INPUT_FIR*NUM_FIR_COEFFS) == length);
	
	memcpy(l1sp.sph_allOutFirCoeff, speech_output_FIR_coeffs,
		NUM_SPH_OUTPUT_FIR*NUM_FIR_COEFFS*sizeof(int16));
	l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_OUT_FIR;
}

void l1sp_setAllWbSpeechModePara(uint16 * speech_mode_para, int16 length)
{
#ifdef WB_SPE_SUPPORT
	ASSERT((NUM_SPH_MODE*NUM_MODE_PARAS) == length);
	
	memcpy(l1sp.sph_allWbModePara, speech_mode_para, 
		NUM_SPH_MODE*NUM_MODE_PARAS*sizeof(uint16));
	l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_WB_MODE; // (1<<3) bit [3]
#endif // WB_SPE_SUPPORT
}

void l1sp_setAllWbSpeechFirCoeff_InputOnly(
		int16 *speech_input_FIR_coeffs, int16 length)
{
#ifdef WB_SPE_SUPPORT
	ASSERT((NUM_SPH_INPUT_FIR*NUM_WB_FIR_COEFFS) == length);
	memcpy(l1sp.sph_allWbInFirCoeff, speech_input_FIR_coeffs, 
		length*sizeof(int16));
	l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_WB_IN_FIR; // (1<<4) bit [4]
#endif // WB_SPE_SUPPORT
}

void l1sp_setAllWbSpeechFirCoeff_OutputOnly(
		int16 *speech_output_FIR_coeffs, int16 length)
{
#ifdef WB_SPE_SUPPORT
	ASSERT((NUM_SPH_OUTPUT_FIR*NUM_WB_FIR_COEFFS) == length);
	memcpy(l1sp.sph_allWbOutFirCoeff, speech_output_FIR_coeffs,
		length*sizeof(int16));
	l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_WB_OUT_FIR; // (1<<4) bit [4]
#endif //WB_SPE_SUPPORT
}
/**
	@index: [Input] Identify which LID is going to provide
	@buffer: [Output] Buffer with the contain the result
	@len: [Input] Length of the output buffer
*/
void L1SP_GetNvramInfoByIndex(L1SP_NVRAM_INFO_INDEX index, void *buffer, uint16 len)
{
	switch(index)
	{
#if WB_SPE_SUPPORT
	case L1SP_NVRAM_INFO_INDEX_WB_SPEECH_INPUT_FIR:
	{
		ASSERT(len == (NUM_SPH_INPUT_FIR * NUM_WB_FIR_COEFFS));
		memcpy(buffer, l1sp.sph_allWbInFirCoeff, sizeof(kal_uint16) * NUM_SPH_INPUT_FIR * NUM_WB_FIR_COEFFS);
	}
		break;
	case L1SP_NVRAM_INFO_INDEX_WB_SPEECH_OUTPUT_FIR:
	{
		ASSERT(len == (NUM_SPH_OUTPUT_FIR * NUM_WB_FIR_COEFFS));
		memcpy(buffer, l1sp.sph_allWbOutFirCoeff, sizeof(kal_uint16) * NUM_SPH_OUTPUT_FIR * NUM_WB_FIR_COEFFS);
	}
		break;
	case L1SP_NVRAM_INFO_INDEX_WB_SPEECH_MODE_PARAM:
	{
		ASSERT(len == (NUM_SPH_MODE * NUM_MODE_PARAS));
		memcpy(l1sp.sph_allWbModePara, buffer, sizeof(kal_uint16) * NUM_SPH_MODE * NUM_MODE_PARAS);
	}
		break;
#endif // WB_SPE_SUPPORT
	default:
		ASSERT(0); 
	}
}
/**
	MED can put all nvram structure to AUD via this function. Audio/Speech driver will parsing the LID by itself. 
	
	@index: [Input] Identify which LID is used to parsing the buffer
	@buffer: [Input] Buffer with the contain from nvram
	@len: [Input] Length of the input buffer
*/
void L1SP_SetNvramInfoByIndex(L1SP_NVRAM_INFO_INDEX index, uint8* buffer, uint16 len)
{
	switch(index)
	{
	case L1SP_NVRAM_INFO_INDEX_UNDEF:		

		break;
	case L1SP_NVRAM_INFO_INDEX_PARAM:
	{
		int16 bufCur=0;

		//NB input FIR
		l1sp_setAllSpeechFirCoeff_InputOnly((int16 *)(buffer + bufCur), 6 * NUM_FIR_COEFFS);
        bufCur += (sizeof(kal_uint16)* 6 * NUM_FIR_COEFFS);

		//NB output FIR
		l1sp_setAllSpeechFirCoeff_OutputOnly((int16 *)(buffer + bufCur), 6 * NUM_FIR_COEFFS);
        bufCur += (sizeof(kal_uint16)* 6 * NUM_FIR_COEFFS);

		//selected FIR
		kal_mem_cpy(&(l1sp.sph_selectedOutFirIndex), (buffer + bufCur), sizeof(kal_uint16));
		bufCur += sizeof(kal_uint16);
		
		//common
		{
		uint16 *data = (uint16 *)(buffer + bufCur);
		L1SP_LoadCommonSpeechPara(data); //common paramter will copy into l1sp.sph_c_para in this function
		bufCur += sizeof(kal_uint16) * 12; //hardcoding size
		}

		//mode parameter
		l1sp_setAllSpeechModePara((uint16 *)(buffer + bufCur), ( NUM_SPH_MODE * 16));
		bufCur += (sizeof(kal_uint16)* NUM_SPH_MODE * 16);

		kal_mem_cpy(l1sp.sph_allVolumePara, (buffer + bufCur), (sizeof(kal_uint16)*3*7*4));
		l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_VOLUME_PARAM;
		
		/*		
	    	kal_uint16 Media_Playback_Maximum_Swing;
    		kal_int16 Melody_FIR_Coeff_Tbl[25];
	    	kal_int16 audio_compensation_coeff[3][45];
		*/
	}
		break;
		
#if WB_SPE_SUPPORT
	case L1SP_NVRAM_INFO_INDEX_WB_SPEECH_INPUT_FIR:
	{
		memcpy(l1sp.sph_allWbInFirCoeff, buffer, sizeof(kal_uint16) * NUM_SPH_INPUT_FIR * NUM_WB_FIR_COEFFS);
		l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_WB_IN_FIR; // (1<<4) bit [4]
	}
		break;
	case L1SP_NVRAM_INFO_INDEX_WB_SPEECH_OUTPUT_FIR:
	{
		memcpy(l1sp.sph_allWbOutFirCoeff, buffer, sizeof(kal_uint16) * NUM_SPH_OUTPUT_FIR * NUM_WB_FIR_COEFFS);
		l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_WB_OUT_FIR; // (1<<5) bit [5]
	}
		break;
	case L1SP_NVRAM_INFO_INDEX_WB_SPEECH_MODE_PARAM:
	{
		memcpy(l1sp.sph_allWbModePara, buffer, sizeof(kal_uint16) * NUM_SPH_MODE * NUM_MODE_PARAS);
		l1sp.setNvramValuesFlag |= L1SP_NVRAM_VALUES_FLAG_WB_MODE; // (1<<3) bit [3]
	}
		break;
#endif

#if 0 //defined(__HD_RECORD__)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__STEREO_RECORD__)
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //__HD_RECORD__	

	default:
		ASSERT(0); 
	}
		
}

/**
	@device: device using in speech. pleae refer to 
		#define  L1SP_BUFFER_0        0x01    // NOTE: Don't use buffer definition directly
		#define  L1SP_BUFFER_1        0x02    //       Use speaker definition below
		#define  L1SP_BUFFER_ST       0x04
		#define  L1SP_BUFFER_EXT      0x08
		#define  L1SP_BUFFER_EXT_G    0x10
		#define  L1SP_STEREO2MONO     0x20     // Do not use this term for speaker definition
		#define  L1SP_BUFFER_ST_M     (L1SP_BUFFER_ST|L1SP_STEREO2MONO)
		#define  L1SP_EXT_DAC_BUF0    0x40 
		#define  L1SP_EXT_DAC_BUF1    0x80
	Phase-out function without using
*/
void L1SP_SetOutputDevice( uint8 device )
{
#if 0 //def ANALOG_AFE_PATH_EXIST
/* under construction !*/
/* under construction !*/
#endif // #ifdef ANALOG_AFE_PATH_EXIST
}

/**
	@return: device using in speech.
	Phase-out function without using
*/
uint8 L1SP_GetOutputDevice(void)
{
   return 0; //l1sp.output_dev;
}

/**
	Function is used when MODEM side has PGA gain & DSP digital gain control 
	i.e. ANALOG_AFE_PATH_EXIST is defined
	
	@volume1: MMI(EM) value from 0 to 256	
	@digital_gain_index:unit is 0.5 db. Value from 0 to -64db (seems option)
*/
void L1SP_SetOutputVolume( uint8 volume1, int8 digital_gain_index )
{
#if 0 // ANALOG_AFE_PATH_EXIST  
/* under construction !*/
/* under construction !*/
#endif
}

#if defined(__GAIN_TABLE_SUPPORT__)
void L1SP_SetOutputGainControl( uint32 gain )
{
#if 0 // ANALOG_AFE_PATH_EXIST  
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}
#endif

#ifndef ANALOG_AFE_PATH_EXIST  // ONLY exist digital path and hw
void l1sp_digiOnly_SetOutputVolume(int16 digitalGain)
{
	AFE_DigitalOnly_SetDigitalGain( L1SP_SPEECH, digitalGain );
}
#endif

void l1sp_digiOnly_SetEnhRefOutputVolume(int16 digitalRefGain)
{
	AFE_DigitalOnly_SetEnhRefDigitalGain(digitalRefGain);
}

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

/**
	this function is to replace L1SP_SetSpeechVolumeLevel()
	
	@level: [input] speech volume level for speech
	@v_paraIndex: [input] volume paramter (saving in nvram) index
*/
void L1SP_SetSpeechVolumeLevelByIndex(kal_uint8 level, kal_uint8 v_paraIndex)
{
//  phase out. 
// 	L1SP_SetSpeechVolumeLevel(level, l1sp.sph_allVolumePara[v_paraIndex][level]);
}

/**
	Phase out function without using
	@src: microhpone source for speech, plese refer to
		#define  L1SP_LNA_0           0
		#define  L1SP_LNA_1           1
		#define  L1SP_LNA_DIGITAL     2
		#define  L1SP_LNA_FMRR        3
	
*/
void L1SP_SetInputSource( uint8 src )
{
#if 0 //def ANALOG_AFE_PATH_EXIST    
/* under construction !*/
#endif
}

/**
	Phase out function without using
	@return: microphone source for speech
*/
uint8 L1SP_GetInputSource( void )
{
	return 0; // AFE_GetInputSource();
}

#if 0 //ANALOG_AFE_PATH_EXIST
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
/* under construction !*/
#endif
/**
	@mic_volume: MMI(EM) value. Including Analog & digital gain
*/
void L1SP_SetMicrophoneVolume( uint8 mic_volume )
{
#if 0 //ANALOG_AFE_PATH_EXIST
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

}

#ifndef ANALOG_AFE_PATH_EXIST  // ONLY exist digital path and hw
void l1sp_digiOnly_SetMicrophoneVolume(int16 digitalGain)
{
	AFE_DigitalOnly_SetMicrophoneVolume(digitalGain);
}
#endif

#if defined(__GAIN_TABLE_SUPPORT__)
void L1SP_SetMicGainControl( uint32 mic_gain )
{
   //kal_trace( TRACE_INFO, L1SP_SET_MIC_VOL, mic_volume, l1sp.sph_m_para[4]);
   kal_uint32 mic_volume = mic_gain >> 26;
   kal_trace( TRACE_INFO, L1SP_SET_MIC_GAIN_CONTROL, mic_gain);
   //if( (l1sp.sph_m_para[4] & 0x2000) )
   {
      if(mic_volume >= 10)
         mic_volume -= 10;//down 10 dB
      else
         mic_volume = 0;
   }
   mic_gain = (mic_gain & 0x03FFFFFF) | (mic_volume << 26);
   //kal_trace( TRACE_INFO, L1SP_ADAPT_MIC_VOL, mic_volume);	
   kal_trace( TRACE_INFO, L1SP_ADAPT_MIC_GAIN_CONTROL, mic_gain);

   AFE_SetMicGainControl( mic_gain );
   
   SetSpeechEnhancement( true );
}
#endif

uint8 L1SP_GetMicrophoneVolume( void )
{
   return 0;
}

/**
	Phase out function without using
	@sidetone: value from EM, which is 0~255. 
*/
void L1SP_SetSidetoneVolume( uint8 sidetone )
{
	// keep API header to avoid link error
}

/**
	Phase out function without using
	@return: value from EM, which is 0~255. 
*/
uint8 L1SP_GetSidetoneVolume( void )
{
	// keep API header to avoid link error, 
	return 0;
}

void L1SP_MuteMicrophone( bool mute )
{	
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif      

   //AFE_MuteMicrophone( mute ); // do not use AFE_MuteMicrophone for speech enhancement
   AM_MuteULSpeech( mute );
   l1sp.isULMute = mute;
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif      
}

void L1SP_MuteSpeaker( bool mute )
{
#ifdef ANALOG_AFE_PATH_EXIST
   AFE_MuteSpeaker( L1SP_SPEECH, mute );
#else

#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif      
	AM_MuteDLSpeech( mute );
   l1sp.isDLMute = mute;
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif      
	
#endif
}

bool L1SP_IsMicrophoneMuted( void )
{
	return l1sp.isULMute; 
   // return AM_IsULSpeechMuted();
}

extern void CSR_SP3G_Callback( SP3G_Event event, void *data );
extern void vt_SP3G_Callback( kal_uint8 event, void *data );

#if defined( __UMTS_RAT__ ) || defined( __UMTS_TDD128_MODE__ )
void L1SP_3G_Request(void)
{  
   if(l1sp.state ==  L1SP_STATE_3G_SPEECH_ON)
   {
      CSR_SP3G_Callback(SP3G_CODEC_READY, (void*)SP3G_Rab_Id());
      return;
   }
}
#endif

void L1SP_SetState(uint8 state)
{
#if defined( __UMTS_RAT__ ) || defined( __UMTS_TDD128_MODE__ )
   if( ( l1sp.state == L1SP_STATE_3G_SPEECH_ON && state == L1SP_STATE_2G_SPEECH_ON ) ||
      ( l1sp.state == L1SP_STATE_2G_SPEECH_ON && state == L1SP_STATE_3G_SPEECH_ON ) )
      l1sp.interRAT = true;
#endif
   l1sp.state = state; 
   L1Audio_Msg_Speech_State(L1Audio_Speech_State(state));
}

uint8 L1SP_GetState( void )
{
   return l1sp.state; 
}


kal_bool L1SP_IsSpeechOn( void )
{
    return (AM_IsSpeechOn());
}

bool voc_flag = false;

//#ifdef SPH_CHIP_BACK_PHONECALL_USE
#if !defined(__SMART_PHONE_MODEM__)
#define WriteREG(_addr, _value) (*(volatile kal_uint32 *)(_addr) = (_value))

#if defined(MT6589)

#define AP_AUDSYS_BASE   0xA2070000

#define AUDIO_TOP_CON0                  (AP_AUDSYS_BASE + 0x0000)
#define AUDIO_TOP_CON3                  (AP_AUDSYS_BASE + 0x000c)
#define AFE_DAC_CON0                    (AP_AUDSYS_BASE + 0x0010)
#define AFE_DAC_CON1                    (AP_AUDSYS_BASE + 0x0014)
#define AFE_I2S_CON                     (AP_AUDSYS_BASE + 0x0018)
#define AFE_DAIBT_CON0                  (AP_AUDSYS_BASE + 0x001c)
                                        
#define AFE_CONN0                       (AP_AUDSYS_BASE + 0x0020)
#define AFE_CONN1                       (AP_AUDSYS_BASE + 0x0024)
#define AFE_CONN2                       (AP_AUDSYS_BASE + 0x0028)
#define AFE_CONN3                       (AP_AUDSYS_BASE + 0x002c)
#define AFE_CONN4                       (AP_AUDSYS_BASE + 0x0030)

#define AFE_I2S_CON1                    (AP_AUDSYS_BASE + 0x0034)
#define AFE_I2S_CON2                    (AP_AUDSYS_BASE + 0x0038)
#define AFE_MRGIF_CON                   (AP_AUDSYS_BASE + 0x003c)

#define AFE_DL1_BASE                    (AP_AUDSYS_BASE + 0x0040)
#define AFE_DL1_CUR                     (AP_AUDSYS_BASE + 0x0044)
#define AFE_DL1_END                     (AP_AUDSYS_BASE + 0x0048)
#define AFE_DL2_BASE                    (AP_AUDSYS_BASE + 0x0050)
#define AFE_DL2_CUR                     (AP_AUDSYS_BASE + 0x0054)
#define AFE_DL2_END                     (AP_AUDSYS_BASE + 0x0058)
#define AFE_AWB_BASE                    (AP_AUDSYS_BASE + 0x0070)
#define AFE_AWB_CUR                     (AP_AUDSYS_BASE + 0x0078)
#define AFE_AWB_END                     (AP_AUDSYS_BASE + 0x007c)
#define AFE_VUL_BASE                    (AP_AUDSYS_BASE + 0x0080)
#define AFE_VUL_CUR                     (AP_AUDSYS_BASE + 0x0088)
#define AFE_VUL_END                     (AP_AUDSYS_BASE + 0x008c)
#define AFE_DAI_BASE                    (AP_AUDSYS_BASE + 0x0090)
#define AFE_DAI_CUR                     (AP_AUDSYS_BASE + 0x0098)
#define AFE_DAI_END                     (AP_AUDSYS_BASE + 0x009c)

#define AFE_IRQ_CON                     (AP_AUDSYS_BASE + 0x00A0)
#define AFE_MEMIF_MON0                  (AP_AUDSYS_BASE + 0x00D0)
#define AFE_MEMIF_MON1                  (AP_AUDSYS_BASE + 0x00D4)
#define AFE_MEMIF_MON2                  (AP_AUDSYS_BASE + 0x00D8)
#define AFE_MEMIF_MON3                  (AP_AUDSYS_BASE + 0x00DC)
#define AFE_MEMIF_MON4                  (AP_AUDSYS_BASE + 0x00E0)

#define AFE_FOC_CON                     (AP_AUDSYS_BASE + 0x0170)
#define AFE_FOC_CON1                    (AP_AUDSYS_BASE + 0x0174)
#define AFE_FOC_CON2                    (AP_AUDSYS_BASE + 0x0178)
#define AFE_FOC_CON3                    (AP_AUDSYS_BASE + 0x017c)
#define AFE_FOC_CON4                    (AP_AUDSYS_BASE + 0x0180)
#define AFE_FOC_CON5                    (AP_AUDSYS_BASE + 0x0184)
#define AFE_MON_STEP                    (AP_AUDSYS_BASE + 0x0188)

#define AFE_SIDDETONE_DEBUG             (AP_AUDSYS_BASE + 0x01D0)
#define AFE_SIDDETONE_MON               (AP_AUDSYS_BASE + 0x01D4)
#define AFE_SIDDETONE_CON0              (AP_AUDSYS_BASE + 0x01E0)
#define AFE_SIDDETONE_COEFF             (AP_AUDSYS_BASE + 0x01E4)
#define AFE_SIDDETONE_CON1              (AP_AUDSYS_BASE + 0x01E8)
#define AFE_SIDDETONE_GAIN              (AP_AUDSYS_BASE + 0x01EC)
#define AFE_SGEN_CON0                   (AP_AUDSYS_BASE + 0x01F0)
                                        
#define AFE_TOP_CON0                    (AP_AUDSYS_BASE + 0x0200)

#define AFE_PREDIS_CON0                 (AP_AUDSYS_BASE + 0x0260)
#define AFE_PREDIS_CON1                 (AP_AUDSYS_BASE + 0x0264)
#define AFE_MRG_MON0                    (AP_AUDSYS_BASE + 0x0270)
#define AFE_MRG_MON1                    (AP_AUDSYS_BASE + 0x0274)
#define AFE_MRG_MON2                    (AP_AUDSYS_BASE + 0x0278)

#define AFE_MOD_PCM_BASE                (AP_AUDSYS_BASE + 0x0330)
#define AFE_MOD_PCM_END                 (AP_AUDSYS_BASE + 0x0338)
#define AFE_MOD_PCM_CUR                 (AP_AUDSYS_BASE + 0x033c)
#define AFE_IRQ_MCU_CON                 (AP_AUDSYS_BASE + 0x03A0)
#define AFE_IRQ_MCU_STATUS              (AP_AUDSYS_BASE + 0x03A4)
#define AFE_IRQ_CLR                     (AP_AUDSYS_BASE + 0x03A8)
#define AFE_IRQ_MCU_CNT1                (AP_AUDSYS_BASE + 0x03AC)
#define AFE_IRQ_MCU_CNT2                (AP_AUDSYS_BASE + 0x03B0)
#define AFE_IRQ_MCU_MON2                (AP_AUDSYS_BASE + 0x03B8)
#define AFE_IRQ_MCU_CNT5                (AP_AUDSYS_BASE + 0x03BC)
#define AFE_IRQ1_MCN_CNT_MON            (AP_AUDSYS_BASE + 0x03C0)
#define AFE_IRQ2_MCN_CNT_MON            (AP_AUDSYS_BASE + 0x03C4)
#define AFE_IRQ1_MCU_EN_CNT_MON         (AP_AUDSYS_BASE + 0x03c8)
#define AFE_IRQ5_MCU_EN_CNT_MON         (AP_AUDSYS_BASE + 0x03cc)
#define AFE_MEMIF_MINLEN                (AP_AUDSYS_BASE + 0x03D0)
#define AFE_MEMIF_MAXLEN                (AP_AUDSYS_BASE + 0x03D4)
#define AFE_MEMIF_PBUF_SIZE             (AP_AUDSYS_BASE + 0x03D8)

#define AFE_GAIN2_CON0                  (AP_AUDSYS_BASE + 0x0428)
#define AFE_GAIN2_CON                   (AP_AUDSYS_BASE + 0x0438)
#define AFE_GAIN2_CON2                  (AP_AUDSYS_BASE + 0x0440)

#define DBG_MON0                        (AP_AUDSYS_BASE + 0x04D0)
#define DBG_MON1                        (AP_AUDSYS_BASE + 0x04D4)
#define DBG_MON2                        (AP_AUDSYS_BASE + 0x04D8)
#define DBG_MON3                        (AP_AUDSYS_BASE + 0x04DC)
#define DBG_MON4                        (AP_AUDSYS_BASE + 0x04E0)
#define DBG_MON5                        (AP_AUDSYS_BASE + 0x04E4)
#define DBG_MON6                        (AP_AUDSYS_BASE + 0x04E8)
#define AFE_ASRC_CON0                   (AP_AUDSYS_BASE + 0x0500)
#define AFE_ASRC_CON1                   (AP_AUDSYS_BASE + 0x0504)
#define AFE_ASRC_CON2                   (AP_AUDSYS_BASE + 0x0508)
#define AFE_ASRC_CON3                   (AP_AUDSYS_BASE + 0x050C)
#define AFE_ASRC_CON4                   (AP_AUDSYS_BASE + 0x0510)
#define AFE_ASRC_CON5                   (AP_AUDSYS_BASE + 0x0514)
#define AFE_ASRC_CON6                   (AP_AUDSYS_BASE + 0x0518)
#define AFE_ASRC_CON7                   (AP_AUDSYS_BASE + 0x051c)
#define AFE_ASRC_CON8                   (AP_AUDSYS_BASE + 0x0520)
#define AFE_ASRC_CON9                   (AP_AUDSYS_BASE + 0x0524)
#define AFE_ASRC_CON10                  (AP_AUDSYS_BASE + 0x0528)
#define AFE_ASRC_CON11                  (AP_AUDSYS_BASE + 0x052c)
#define PCM_INTF_CON1                   (AP_AUDSYS_BASE + 0x0530)
#define PCM_INTF_CON2                   (AP_AUDSYS_BASE + 0x0538)
#define PCM_INTF_CON                    (AP_AUDSYS_BASE + 0x053C)
#define FOC_ROM_SIG                     (AP_AUDSYS_BASE + 0x0630)



#endif // defined(MT6589)

void l1sp_configApAfeHwForBt(void)
{
#if defined(MT6589)

	// GPIO set to external
	/*
	WriteREG(0xA00050D0, 0x5000 ); // GPIO_DIR13 
	WriteREG(0xA00050E0, 0x0001 ); // GPIO_DIR14
	WriteREG(0xA0005EC0, 0x1248 ); // GPIO_MODE2C, 
	*/
	
	// MAIN setting for interconnection
	WriteREG(AUDIO_TOP_CON0, 0x00004000);
	WriteREG(AFE_TOP_CON0, 0x00000000);
	WriteREG(AFE_DAC_CON0, 0x00000001);

	WriteREG(AFE_CONN1, 0x00000000); 
	WriteREG(AFE_CONN2, 0x00000000); 	
	WriteREG(AFE_CONN3, 0x00400000); // i14, o2 
	WriteREG(AFE_CONN4, 0x00000000); 

	WriteREG(AFE_GAIN2_CON0, 0x0000c801);
	WriteREG(AFE_GAIN2_CON, 0x01040000); // MD1
	WriteREG(AFE_GAIN2_CON2, 0x000000C0);

	
	WriteREG(AFE_DAIBT_CON0, 0x105F);
	WriteREG(AFE_MRGIF_CON, 0x00900001);
	
	// MD2
	WriteREG(PCM_INTF_CON1, 0x0000006F);
	// WriteREG(PCM_INTF_CON2, 0x00000000);
	// MD1
	WriteREG(PCM_INTF_CON, 0x0000000F);
#endif
}

void l1sp_configApAfeHw(void)
{

#if defined(MT6589)
	// for second modem with slave mode
	// vSetASRC
	// WriteREG(AFE_ASRC_CON1, 0x00000cb2);
	// WriteREG(AFE_ASRC_CON2, 0x00400000);
	// WriteREG(AFE_ASRC_CON3, 0x00400000);
	// WriteREG(AFE_ASRC_CON4, 0x00000cb2);
	// WriteREG(AFE_ASRC_CON7, 0x00000659);
	
	// vASRCEnable
	// WriteREG(AFE_ASRC_CON6, 0x00000000);
	// WriteREG(AFE_ASRC_CON0, 0x06003030);

	// MAIN setting for interconnection
	WriteREG(AUDIO_TOP_CON0, 0x00004000);
	WriteREG(AFE_TOP_CON0, 0x00000000);
	WriteREG(AFE_DAC_CON0, 0x00000001);
	WriteREG(AFE_CONN1, 0x02000000); // MD2
	WriteREG(AFE_CONN2, 0x24000200); // MD2	
	WriteREG(AFE_CONN3, 0x08000000); // MD1
	WriteREG(AFE_CONN4, 0x00012001); // MD1

	// sidetone
	WriteREG(AFE_SIDDETONE_CON1, 0x00000000);
	

	// MD2
	WriteREG(PCM_INTF_CON1, 0x0000006F);
	// WriteREG(PCM_INTF_CON2, 0x00000000);
	// MD1
	WriteREG(PCM_INTF_CON, 0x0000000F);

	// i2s to external dac
	WriteREG(AFE_I2S_CON1, 0x00000409); //dac 16k
	WriteREG(AFE_I2S_CON2, 0x00000409); //adc 16k
#endif 	
	
}
#endif // !defined(__SMART_PHONE_MODEM__)

void L1SP_Speech_On( uint8 RAT_Mode )
{
   kal_uint32 module_id = MOD_L1AUDIO_SPH_SRV;
   kal_uint32 voc_ptn = TVCI_CREATE_FILE;
   kal_uint32 *voc_ptn_ptr = &voc_ptn;
   
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 0, RAT_Mode, -1);
   if( AM_IsSpeechOn() )
      return;
	

#if !defined(__SMART_PHONE_MODEM__)
	l1sp_configApAfeHw();
#endif // defined(__SMART_PHONE_MODEM__)

   // for phone call used. 
   l1sp.aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( l1sp.aud_id );     /* To lock sleep mode */

	//Check the mute status, this should always unmute. 
	ASSERT(SAL_Mute_Check(SAL_MUTE_DL_8K)==0);
	
#if !defined(__SMART_PHONE_MODEM__)
	// this two function is useless under smart phone, remove it to reduce process time
   TONE_StopAndWait();
   KT_StopAndWait();
#endif
   
   l1sp_updateSpeAppMask(0xff, true);

#ifdef ANALOG_AFE_PATH_EXIST
   AFE_SetDigitalGain(L1SP_SPEECH, 100);
#else

#endif


#if defined(AEC_ENABLE) || defined(EES_ENABLE)
#if defined(SPH_CHIP_BACK_PHONECALL_USED) || defined(MT6280)
	// do not download speech enhancment
#else 
	DSP_DynamicDownload( DDID_NOISE_REDUCTION );   
#endif
#endif
	
#if defined( __UMTS_RAT__ ) || defined( __UMTS_TDD128_MODE__ )
#ifdef __VIDEO_CALL_SUPPORT__
   if( RAT_Mode == RAT_3G324M_MODE )
      sp3g_speech_init( RAT_3G324M_MODE );
   else
#endif
      //In Dual mode, allow 2G/3G capability at initialization stage  for InterRAT HO
      //if 3G324M, there is no InterRAT
      sp3g_speech_init( RAT_3G_MODE );
   L1Audio_Msg_SP(0);
     
	// choose the mode is 2g /3g
   if( SP3G_Rab_State() && RAT_Mode != RAT_3G324M_MODE ){
      RAT_Mode = RAT_3G_MODE;
   }else if ( l1sp.tch_state ){
      RAT_Mode = RAT_2G_MODE;
   }else if(RAT_Mode != RAT_3G324M_MODE ){
   	  RAT_Mode = RAT_2G_MODE;
   }
   l1sp.interRAT = false;
   
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 1, SP3G_Rab_State(), -1);
#endif
   
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 2,  l1sp.tch_state, RAT_Mode);
   L1Audio_Msg_SP(1);
   AM_SpeechOn(RAT_Mode, 0);
   L1Audio_Msg_SP(2);

   switch(RAT_Mode)
   {
      case RAT_2G_MODE:
#if defined( __UMTS_RAT__ ) || defined( __UMTS_TDD128_MODE__ )      	
         kal_take_enh_mutex( sp_mutex );           
         if( SP3G_Rab_State()){
		         void SP3G_Rab_Est_sub();
		         SP3G_Rab_Est_sub();              	
         }else
#endif         	
         {
      	   AM_SetDSP2GReset(true);
           L1SP_SetState(L1SP_STATE_2G_SPEECH_ON);           	
         }
#if defined( __UMTS_RAT__ ) || defined( __UMTS_TDD128_MODE__ )      	         
         kal_give_enh_mutex(sp_mutex);
         #if !defined(__L1_STANDALONE__)
         {
            if(query_ps_conf_test_mode()==PS_CONF_TEST_FTA)
               SP3G_SetDTX(false);
            else
               SP3G_SetDTX(true);
         }
         #endif             
#endif         	         
         break;
#if defined( __UMTS_RAT__ ) || defined( __UMTS_TDD128_MODE__ )
      case RAT_3G_MODE: 
         L1SP_SetState(L1SP_STATE_3G_SPEECH_ON);
         CSR_SP3G_Callback(SP3G_CODEC_READY, (void*)SP3G_Rab_Id());
#if !defined(__L1_STANDALONE__)
         {
            if(query_ps_conf_test_mode()==PS_CONF_TEST_FTA)
               SP3G_SetDTX(false);
            else
               SP3G_SetDTX(true);
         }
#endif         
         break;
#ifdef __VIDEO_CALL_SUPPORT__
      case RAT_3G324M_MODE: 
         L1SP_SetState(L1SP_STATE_3G324M_SPEECH_ON);
         vt_SP3G_Callback( (kal_uint8)SP3G_CODEC_READY, (void*)0 );
         break;
#endif
#endif
      default: 
         ASSERT(false);
   }
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 3, -1, -1);

   L1Audio_Msg_SP(3);
#ifndef __L1_STANDALONE__ // avoid link error
   if(!tst_trace_check_ps_filter_off(TRACE_GROUP_VM, &module_id, 0x2))
   {
      tst_vc_response(TVCI_VM_LOGGING, (const kal_uint8*)voc_ptn_ptr, 4);
      VMREC_Start(NULL, 0, true);
      voc_flag = true;
   }
#endif
  
  SetSpeechEnhancement( true );
	//always unmute DSP uplink when speech on (This is to keep the mute definition)
	L1SP_MuteMicrophone(false);
	L1SP_MuteSpeaker(false);

	
// for phone call usage   
#if !DATA_CARD_DISABLE_INTERNAL
#if defined(__DATA_CARD_SPEECH__)
   if (l1sp.strmOnHandler != NULL)
      l1sp.strmOnHandler( NULL );
#endif
#endif

   // recording 
   if(l1sp.onHandler != NULL)
      l1sp.onHandler( (void *)(kal_uint32)l1sp.state );

	// background sound 
	if(l1sp.bgsOnHandler != NULL)
      l1sp.bgsOnHandler();

#if defined(__ECALL_SUPPORT__)
   if (l1sp.pcm4wayOnHandler != NULL)
      l1sp.pcm4wayOnHandler( (void *)0);
#endif

  L1Audio_Msg_SP(4);
}

void L1SP_Register_Service(void (*onHandler)(void *), void (*offHandler)(void *))
{
   l1sp.onHandler = onHandler;   
   l1sp.offHandler = offHandler;
}

void L1SP_UnRegister_Service( void )
{
   l1sp.onHandler = NULL;   
   l1sp.offHandler = NULL;
}

void L1SP_Register_BgsService(void (*onHandler)(void), void (*offHandler)(void))
{
   l1sp.bgsOnHandler = onHandler;   
   l1sp.bgsOffHandler = offHandler;
}

void L1SP_UnRegister_BgsService( void )
{
   l1sp.bgsOnHandler = NULL;   
   l1sp.bgsOffHandler = NULL;
}


#if defined(__DATA_CARD_SPEECH__)
void L1SP_Register_Strm_Handler(
   void (*onHandler)(void *hdl),
   void (*offHandler)(void *hdl),
   void (*hdl)(kal_uint32 event, void *param))
{
   l1sp.strmOnHandler  = onHandler;
   l1sp.strmOffHandler = offHandler;
   l1sp.strmHdl        = hdl;
   //For MOLY00004781, sometimes auto script hit that register handler later than speech on. In this case, we let daca run.
   if( AM_IsSpeechOn() ){
      l1sp.strmOnHandler(NULL);
   }
}

void L1SP_UnRegister_Strm_Handler( void )
{
   if(AM_IsDataCardOn() && (l1sp.strmOffHandler != NULL)){
      /* Normal     Case: PLUGIN(RegisterHandler)-->SpeechOn(OnHandler)-->SpeechOff(OffHandler) -->PLUGOUT(UnRegisterHandler)
         Unexpected Case: PLUGIN(RegisterHandler)-->SpeechOn(OnHandler)-->PLUGOUT(UnRegisterHandler), registerHandler again -->SpeechOff(OffHandler)     */      
      DACA_Stop(DACA_APP_TYPE_ACTIVE_UL_DL_WB);   
   }
   l1sp.strmOnHandler  = NULL;
   l1sp.strmOffHandler = NULL;
}
#endif

#if defined(__ECALL_SUPPORT__)
void L1SP_Register_Pcm4WayService(void (*onHandler)(void *), void (*offHandler)(void *))
{
   l1sp.pcm4wayOnHandler = onHandler; 
   l1sp.pcm4wayOffHandler = offHandler;
}

void L1SP_UnRegister_Pcm4Way_Service( void )
{
   l1sp.pcm4wayOnHandler = NULL; 
   l1sp.pcm4wayOffHandler = NULL;
}
#endif

void L1SP_Speech_Off( void )
{
   kal_uint32 voc_ptn = TVCI_CLOSE_FILE;
   kal_uint32 *voc_ptn_ptr = &voc_ptn;
   
   if( !AM_IsSpeechOn() )
      return;

	// mute DL to prevent sound pushes to hardware buffer then causes noise. Sync with the end of speech unumte
	L1SP_MuteSpeaker(true);
		
#if !DATA_CARD_DISABLE_INTERNAL      
//FIXME: for phone call usage
#if defined(__DATA_CARD_SPEECH__)
   if (l1sp.strmOffHandler != NULL)
      l1sp.strmOffHandler( NULL );
#endif
#endif

#if defined(__ECALL_SUPPORT__)
   if (l1sp.pcm4wayOffHandler != NULL)
      l1sp.pcm4wayOffHandler( (void *)0 );
#endif

	// background sound
	if(l1sp.bgsOffHandler != NULL)
      l1sp.bgsOffHandler();

	// recording
   if(l1sp.offHandler != NULL)
      l1sp.offHandler( (void *)(kal_uint32)l1sp.state );
   SetSpeechEnhancement( false );

   #ifndef __L1_STANDALONE__ // avoid link error
   // kal_uint32 module_id = MOD_L1AUDIO_SPH_SRV;	   
   // if(!tst_trace_check_ps_filter_off(TRACE_GROUP_VM, &module_id, 0x2) && voc_flag)
   if(voc_flag)
   {
      tst_vc_response(TVCI_VM_LOGGING, (const kal_uint8*)voc_ptn_ptr, 4);
	  VMREC_Stop(true);
	  voc_flag = false;
   }
	#endif

   AM_SpeechOff(0);


#if defined( __UMTS_RAT__ )
   {
      uint8 state;
      state = l1sp.state;
      
      if(l1sp.state == L1SP_STATE_3G_SPEECH_ON || l1sp.interRAT
#ifdef __VIDEO_CALL_SUPPORT__
          || l1sp.state == L1SP_STATE_3G324M_SPEECH_ON
#endif
      ){
         L1SP_SetState(L1SP_STATE_3G_SPEECH_CLOSING);
      }
      sp3g_speech_close();
         
    /* only these cases should wait state, if only 2G happen, then return to idle */
      if( state == L1SP_STATE_3G_SPEECH_ON || l1sp.interRAT
#ifdef __VIDEO_CALL_SUPPORT__
          || state == L1SP_STATE_3G324M_SPEECH_ON
#endif
      ){
         //uint32 waitTime;
#ifdef __VIDEO_CALL_SUPPORT__
         if( state == L1SP_STATE_3G324M_SPEECH_ON )
            vt_SP3G_Callback( (kal_uint8)SP3G_CODEC_CLOSED, (void*)0);
         else
#endif
            CSR_SP3G_Callback(SP3G_CODEC_CLOSED, (void*)SP3G_Rab_Id());
         /*
         for(waitTime = 0 ; ; waitTime ++)
         {     
            if(l1sp.state == L1SP_STATE_3G_SPEECH_CLOSED)
               break;
            ASSERT(waitTime < 20);     
            kal_sleep_task(1);
         }*/
      }
   }
#endif
   L1SP_SetState( L1SP_STATE_IDLE );

#if defined(__VIBRATION_SPEAKER_SUPPORT__)
   VIBR_Vibration_Activate();
#endif

	//always unmute DSP uplink after speech off to keep the mute definition
	L1SP_MuteMicrophone(false);
	L1SP_MuteSpeaker(false);
	
   L1Audio_ClearFlag( l1sp.aud_id );
   L1Audio_FreeAudioID( l1sp.aud_id );
}

void L1SP_Set_DAI_Mode( uint8 mode )
{
	//this feature is phased out
}

void L1SP_SetAfeLoopback( bool enable )
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif         
   if( enable )
      AFE_TurnOnLoopback();
   else
      AFE_TurnOffLoopback();
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif      
}
/*for MIC2 loopback*/
void L1SP_SetAfeLoopback2( bool enable )
{
   if( enable ){
      #if defined(MT6256)
      AFE_TurnOnLoopback2();
      #else
      AFE_TurnOnLoopback();
      #endif
   }
   else{
      AFE_TurnOffLoopback();
   }
}

kal_bool L1SP_GetAfeLoopbackStatus( void )
{
   return AFE_GetLoopbackStatus();
}

void L1SP_SetFIR( bool enable )
{
   if( enable ){
		
#ifdef ANALOG_AFE_PATH_EXIST		
      AFE_TurnOnFIR( L1SP_SPEECH );
      AFE_TurnOnFIR( L1SP_VOICE );
#endif // ANALOG_AFE_PATH_EXIST		

   }else{
   
#ifdef ANALOG_AFE_PATH_EXIST   
      AFE_TurnOffFIR( L1SP_SPEECH );
      AFE_TurnOffFIR( L1SP_VOICE );
#endif //ANALOG_AFE_PATH_EXIST

   }
}

void l1sp_Write_Audio_Coefficients( const int16 in_coeff[45], const int16 out_coeff[45] )
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif   
   AM_WriteFirCoeffs( in_coeff, out_coeff );
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif   
}

void L1SP_Write_Audio_Coefficients_ByFirIndex( const uint8 inFirIndex, 
	const uint8 outOrIn2FirIndex)
{

	int16 inCoeff[NUM_FIR_COEFFS];
	int16 outOrIn2Coeff[NUM_FIR_COEFFS];
		
	if(inFirIndex == 0xff) {
		inCoeff[0] = 0x7fff;
		memset(&inCoeff[1], 0, (NUM_FIR_COEFFS-1)*sizeof(int16));
	} else {
		memcpy(inCoeff, l1sp.sph_allInFirCoeff[inFirIndex], (NUM_FIR_COEFFS)*sizeof(int16));		
	}

	if(outOrIn2FirIndex == 0xff) {
		outOrIn2Coeff[0] = 0x7fff;
		memset(&outOrIn2Coeff[1], 0, (NUM_FIR_COEFFS-1)*sizeof(int16));
	} else {
		memcpy(outOrIn2Coeff, l1sp.sph_allOutFirCoeff[outOrIn2FirIndex], (NUM_FIR_COEFFS)*sizeof(int16));		
	}

	l1sp_Write_Audio_Coefficients( inCoeff, outOrIn2Coeff );
	
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif



void L1SP_EnableSpeechEnhancement( bool enable )
{
   if(enable)
   {
      l1sp.spe_flag = true;
      SetSpeechEnhancement(true);
   }
   else 
   {
      SetSpeechEnhancement(false);
      l1sp.spe_flag = false;
   }      
}

void L1SP_LoadSpeechPara( void ) 
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif   
   SPE_LoadSpeechPara(l1sp.sph_c_para, l1sp.sph_m_para, l1sp.sph_v_para, l1sp.sph_m_paraWb);      
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif      
}

void L1SP_Init( void )
{
   l1sp.tch_state = KAL_FALSE;   
#ifdef SPH_CHIP_BACK_PHONECALL_USED
	l1sp.sph_mode = SPH_MODE_NORMAL;
#else
   l1sp.sph_mode = SPH_MODE_UNDEFINED;
#endif

#if !defined(__SMART_PHONE_MODEM__)
	l1sp_configApAfeHw();
#endif


   memset(&l1sp.sph_c_para, 0, NUM_COMMON_PARAS*sizeof(uint16));
   memset(&l1sp.sph_m_para, 0, NUM_MODE_PARAS*sizeof(uint16));
   memset(&l1sp.sph_v_para, 0, NUM_VOL_PARAS*sizeof(uint16));
	memset(&l1sp.sph_m_paraWb, 0, NUM_MODE_PARAS*sizeof(uint16));
   
#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)	
   memset(&l1sp.sph_dmnr_para, 0, NUM_DMNR_PARAM*sizeof(uint16));
#ifdef __AMRWB_LINK_SUPPORT__   
   memset(&l1sp.sph_wb_dmnr_para, 0, NUM_WB_DMNR_PARAM*sizeof(uint16));
#endif
#endif 

#ifdef ANALOG_AFE_PATH_EXIST
   l1sp.mic_volume = AFE_GetMicrophoneVolume(); // get initial value
#else
	l1sp.mic_volume = 0;
#endif

//#if defined(__BT_SUPPORT__)   
   l1sp.bt_on = false;
//#endif

#if defined( __UMTS_RAT__ )
   sp3g_init();
   l1sp.interRAT = false;
#endif

   SPE_Init();
   l1sp.spe_flag = true;
   l1sp.isULMute = false;
   l1sp.spe_state = 0;
   
   //default set the DMNR on
   l1sp.spe_app_mask = 0xffff;
   l1sp.spe_usr_mask = 0xffff;
	l1sp.spe_usr_sub_mask = 0x000E; // default value to turn on , sync with Sal_Enh_Dynamic_t bit wise definition
	
#if 0 // ANALOG_AFE_PATH_EXIST  
/* under construction !*/
/* under construction !*/
#endif
   // l1sp.pcmplayback_flag = KAL_FALSE; phase out
   
   l1sp.onHandler = NULL;
   l1sp.offHandler = NULL;
#if defined(__DATA_CARD_SPEECH__)
   l1sp.strmOnHandler  = NULL;
   l1sp.strmOffHandler = NULL;
   l1sp.strmHdl = NULL;
#endif      
#if defined(__ECALL_SUPPORT__)
   l1sp.pcm4wayOnHandler = NULL; 
   l1sp.pcm4wayOffHandler = NULL;
#endif
   L1SP_SetState(L1SP_STATE_IDLE);


   l1sp.setNvramValuesFlag = 0;
   memset(l1sp.sph_allModePara, 0, NUM_SPH_MODE*NUM_MODE_PARAS*sizeof(uint16));
   memset(l1sp.sph_allInFirCoeff, 0, NUM_SPH_INPUT_FIR*NUM_FIR_COEFFS*sizeof(int16));
   memset(l1sp.sph_allOutFirCoeff, 0, NUM_SPH_OUTPUT_FIR*NUM_FIR_COEFFS*sizeof(int16));
   memset(l1sp.sph_allVolumePara, 0, 3*7*4*sizeof(uint16));
   
   l1sp.sph_selectedOutFirIndex = 0;
}
kal_bool L1SP_TCH_State( void )
{
   return l1sp.tch_state;
}

extern kal_uint32 SP3G_GetCodecMode(void);

// This is invoked by 2G L1D(LISR)
void L1SP_TCH_Notify( bool bOn )
{

   if( !bOn ){ // for 2G->3G handover, mute speech in case Speech_Off command too late to avoid noise
      L1Audio_Msg_TCH_NOTIFY(L1AUDIO_Str_onoff(0), L1Audio_Speech_State(l1sp.state));
      l1sp.tch_state = KAL_FALSE;
      //mute speech
#if defined( __UMTS_RAT__ )      
      if( SP3G_Rab_State() && l1sp.state != L1SP_STATE_3G_SPEECH_ON && l1sp.state != L1SP_STATE_IDLE){//3G->2G fail case, TCH will be off
         SP3G_Reset();
         AM_InterRAT_G2W(SP3G_GetCodecMode());
         L1SP_SetState( L1SP_STATE_3G_SPEECH_ON );
      }
#endif      
      //else if( l1sp.state == L1SP_STATE_2G_SPEECH_ON ) 
         // in case speech off first then TCH off notify.(2G only. If in 3G, then don't care)
         //*DP_SC_MUTE |= 0x0002;
   }
   else{
      L1Audio_Msg_TCH_NOTIFY(L1AUDIO_Str_onoff(1), L1Audio_Speech_State(l1sp.state));
      l1sp.tch_state = KAL_TRUE;
      //*DP_SC_MUTE &= ~0x0002;
#if defined( __UMTS_RAT__ )      
      if( l1sp.state == L1SP_STATE_3G_SPEECH_ON ){//3G->2G HO
         AM_InterRAT_W2G();
         L1SP_SetState( L1SP_STATE_2G_SPEECH_ON );
      }
#endif      
   }

}

void L1SP_SpeechLoopBackEnable(kal_bool fgEnable)
{
	 SAL_LBK_Codec(fgEnable);
}

//-----------------------------------------------------------------------------
// Line in related. Phase out
/* 

void LINEIN_SetOutputDevice( uint8 device )
{
   AFE_SetOutputDevice( L1SP_LINEIN, device );
}

void LINEIN_SetOutputVolume( uint8 volume1, int8 digital_gain_index )
{
   AFE_SetOutputVolume( L1SP_LINEIN, volume1, digital_gain_index );
}

void LINEIN_Open()
{

   if (!lineon_flag){
      ktLock();
#ifdef ANALOG_AFE_PATH_EXIST	      
      AFE_TurnOnSpeaker(L1SP_LINEIN);
#endif      
      lineon_flag = KAL_TRUE;
   }
}

void LINEIN_Close()
{
   if(lineon_flag){
#if defined(MT6252H) || defined(MT6252)
      AFE_SetGainFastRamp(KAL_TRUE);    
#endif

#ifdef ANALOG_AFE_PATH_EXIST	
      AFE_TurnOffSpeaker(L1SP_LINEIN);
#endif      

#if defined(MT6252H) || defined(MT6252)
      kal_sleep_task(3);
      AFE_SetGainFastRamp(KAL_FALSE);    
#endif

      ktUnlock();
      lineon_flag = KAL_FALSE;
   }
#if defined(__VIBRATION_SPEAKER_SUPPORT__)
   VIBR_Vibration_Activate();
#endif
}

void LINEIN_MuteSpeaker( bool mute )
{
   AFE_MuteSpeaker( L1SP_LINEIN, mute );
}

#if defined(__GAIN_TABLE_SUPPORT__)
void LINEIN_SetOutputGainControl( kal_uint32 gain ){
#ifdef ANALOG_AFE_PATH_EXIST
   AFE_SetOutputGainControl( L1SP_LINEIN, gain );
#endif    
}

void LINEIN_SetOutputGainControlDualPath( kal_uint32 ext_amp_gain ){
   AFE_SetOutputGainControlDualPath( L1SP_LINEIN, ext_amp_gain );
}
#endif
*/
//-----------------------------------------------------------------------------

void ABF_SetAcousticLoopback( kal_bool loopback )
{
   return;
}
kal_bool ABF_GetAcousticLoopbackStatus( void )
{
   return KAL_FALSE;
}
#if 0
/* under construction !*/
/* under construction !*/
#if 0 //defined(WAV_CODEC)   
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
#endif   
/* under construction !*/
#endif

/* Just for Factory Usage */
void L1SP_AcousticLoopbackOn (void)
{
#if defined( __ACOUSTIC_LOOPBACK_SUPPORT__ )      
   AcousticLoopbackOn();
#endif   
}

/* Just for Factory Usage */
void L1SP_AcousticLoopbackOff (void)
{
#if defined( __ACOUSTIC_LOOPBACK_SUPPORT__ )         
   AcousticLoopbackOff();
#endif   
}

/* Just for Factory Usage */
void L1SP_AcousticLoopbackSpeechMode(kal_uint8 u1Mode)
{
#if defined( __ACOUSTIC_LOOPBACK_SUPPORT__ )   
   AcousticLoopbackSpeechMode(u1Mode);
#endif       
}

/* Just for Factory Usage */
kal_bool L1SP_AcousticLoopbackStatus(void)
{
#if defined( __ACOUSTIC_LOOPBACK_SUPPORT__ )
   AcousticLoopbackStatus();
#endif

   return KAL_FALSE;
}

/* Just for Factory Usage */
void L1SP_AcousticLoopbackBypassMode(kal_uint8 u1Mode)
{
#if defined( __ACOUSTIC_LOOPBACK_SUPPORT__ )   
   AcousticLoopbackBypassMode(u1Mode);
#endif    
}

/* Just for Factory Usage */
void L1SP_AcousticLoopbackLength (kal_uint32 u4Length)
{
#if defined( __ACOUSTIC_LOOPBACK_SUPPORT__ )   
   AcousticLoopbackLength(u4Length);
#endif   
}

void L1SP_MutePCMOuputPort ( kal_bool fMute )
{

}

