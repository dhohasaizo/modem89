

#include "kal_public_api.h"
#include "kal_general_types.h"

#include "kal_trace.h"
#include "l1sp_trc.h"
#include "l1audio_trace.h"

#include "sidetone.h"

#include "sal_def.h"
#include "sal_exp.h"

#include "reg_base.h"



typedef struct SIDETONE_INFO_STRUCT
{
	uint16 extStVolume; // value set from AP, should be Adaptive side tone volume
#if SMART_PHONE_HW_SIDETONE_SUPPORT
	kal_timerid timer; 
#endif
	bool  isActive; // periodically update the Hw AFE Sidetone Gain 
} SIDETONE_INFO;

static SIDETONE_INFO gSidetoneInfo;

#if SMART_PHONE_HW_SIDETONE_SUPPORT

#define WriteApReg(_addr, _value) (*(volatile kal_uint32 *)(_addr) = (_value))
// #define SetApReg(_addr, value) (_addr = ((_addr & (~_addr##_MASK)) | (value <<_addr##_BIT)))

#if defined(MT6589)

// #define AP_AUDSYS_BASE   0xA2070000
#define AP_AFE_SIDDETONE_GAIN              (AP_AUDSYS_base + 0x01EC)

// #define AP_AFE_SIDDETONE_GAIN_GAIN        (*(volatile kal_uint32 *)AP_AFE_SIDDETONE_GAIN)
// #define AP_AFE_SIDDETONE_GAIN_GAIN_BIT    0
// #define AP_AFE_SIDDETONE_GAIN_GAIN_MASK   (0xff << AP_AFE_SIDDETONE_GAIN_GAIN_BIT) 

#endif // defined(MT6589)


//-----------------------------------------------------------------------------

void sidetone_UpdateHwStVolume(void);
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

/*
	Like callback function periodically
*/
void sidetone_UpdateHwStVolume(void)
{	
	// kal_prompt_trace(MOD_L1SP, "sidetone_UpdateHwStVolume");
	
	if(gSidetoneInfo.isActive){
		
		kal_uint16 dspValue, targetValue; 
		//read from DSP and update the volume 
		dspValue=SAL_Sidetone_GetAdaptiveGain(); // Q1.15 Format
		
		// multiple, 
		// gSidetoneInfo.extStVolume is Q4.12 Format
		// HW is Q1.15 Format		
		targetValue = (kal_uint16)(((kal_uint32)(dspValue* gSidetoneInfo.extStVolume))>>12);
		if(targetValue > 0x7FFF) {
			targetValue = 0x7FFF;
		}

		// write to ap hw 
		WriteApReg(AP_AFE_SIDDETONE_GAIN, targetValue);		
		// WriteApReg(AP_AFE_SIDDETONE_GAIN, 0x7FFF);		
		if(!kal_if_hisr()){
			kal_trace(TRACE_GROUP_SP_DEBUG, SIDETONE_WRITE_TO_HW, targetValue);
		} else {
			kal_dev_trace(TRACE_GROUP_SP_DEBUG, SIDETONE_WRITE_TO_HW, targetValue);
		}

		/*
		// trigger the timer again.
		sidetone_triggerTimer();
		*/
		kal_set_timer(gSidetoneInfo.timer, (kal_timer_func_ptr)(sidetone_UpdateHwStVolume), NULL, 4, 0);
	}
}


void SIDETONE_UpdateStart(void)
{
	kal_trace(TRACE_INFO, SIDETONE_START);

	gSidetoneInfo.isActive = true;

	/*
	*((volatile kal_uint32 *)(0x80000458)) |= 0x00000080; // enalbe power
	// trigger the timer again.
	sidetone_triggerTimer();
	*/

	kal_set_timer(gSidetoneInfo.timer, (kal_timer_func_ptr)(sidetone_UpdateHwStVolume), NULL, 4, 0);

}

void SIDETONE_UpdateStop(void)
{
	kal_trace(TRACE_INFO, SIDETONE_STOP);
	
	gSidetoneInfo.isActive = false;

	kal_cancel_timer(gSidetoneInfo.timer);
	
	
}

/**
	Be called from SPC message handler, so we do not leave any log here. 
	Please try to check A2M message and you can get the value

	@vol: volume calculated by AP side
*/
void SIDETONE_SetExtStVolume(kal_uint16 vol)
{	
	gSidetoneInfo.extStVolume = vol; 	
}


void SIDETONE_TurnSwSidetoneOn(kal_bool on)
{
	// do nothing when using hardware sidetone
	(void) on;
}


void SIDETONE_Init(void)
{
	//gSidetoneInfo.extStVolume = 0x7fff;
	// init value sync with AP side int value
	gSidetoneInfo.extStVolume = 0;
	
	// gSidetoneInfo.gptTimer = DclSGPT_Open(DCL_GPT_CB, FLAGS_NONE);
	gSidetoneInfo.timer = kal_create_timer("sidetone"); 
	
}

// ============================================================================
#else

void SIDETONE_UpdateStart(void)
{ 
	kal_trace(TRACE_INFO, SIDETONE_START);

	gSidetoneInfo.isActive = true;

	// update dsp's sidetone volume
	SIDETONE_SetExtStVolume(gSidetoneInfo.extStVolume);

}

void SIDETONE_UpdateStop(void)
{ 
	kal_trace(TRACE_INFO, SIDETONE_STOP);
	
	gSidetoneInfo.isActive = false;
}

/**
	Be called from SPC message handler, so we do not leave any log here. 
	Please try to check A2M message and you can get the value

	@vol: volume calculated by AP side
*/
void SIDETONE_SetExtStVolume(kal_uint16 vol)
{ 
	gSidetoneInfo.extStVolume = vol;

	if(gSidetoneInfo.isActive){
		kal_uint16 targetValue; // This is For DSP Q4.12 Format
		
		// gSidetoneInfo.extStVolume is Q4.12 Format for HW sidetone gain.
		// targetValue is SW sidetone gain, which is 12 db loader then hw sidetone gain
		// As the result, we need to left shift 2 bit to calucate correct sw sidetone gain

		targetValue = (gSidetoneInfo.extStVolume<<2);
		if(targetValue > 0x7FFF) {
			targetValue = 0x7FFF;
		}
		
		// write to ap hw 
		SAL_Sidetone_SetGain(targetValue);
		// WriteApReg(AP_AFE_SIDDETONE_GAIN, 0x7FFF);		
		if(!kal_if_hisr()){
			kal_trace(TRACE_GROUP_SP_DEBUG, SIDETONE_WRITE_TO_HW, targetValue);
		} else {
			kal_dev_trace(TRACE_GROUP_SP_DEBUG, SIDETONE_WRITE_TO_HW, targetValue);
		}
	}
}


/**
	Please use this function during DSP power on. (The function may access sherif)
	@on: ture for turning on, false for turing off.
*/
void SIDETONE_TurnSwSidetoneOn(kal_bool on)
{
	SAL_Sidetone_Enable(on);
}


void SIDETONE_Init(void)
{ 
	//gSidetoneInfo.extStVolume = 0x7fff;
	// init value sync with AP side int value
	gSidetoneInfo.extStVolume = 0;
}

#endif

