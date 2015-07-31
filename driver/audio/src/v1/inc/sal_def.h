#ifndef SAL_DEF_H
#define SAL_DEF_H

#include "common_def.h"

#define _SAL_FO_DUALMIC_SUPPORT_ (!defined(MT6280))
#define _SAL_ENABLE_SW_SIDETONE_ (!defined(MT6280))

#define SAL_DEV_NORMAL	  		0
#define SAL_DEV_EARPHONE  		1
#define SAL_DEV_LOUDSPK			2
#define SAL_DEV_BT_EARPHONE_NB 	3
#define SAL_DEV_BT_EARPHONE_WB 	4
#define SAL_DEV_BT_CORDLESS 	5
#define SAL_DEV_MAX_NUM 		6

#define SAL_APP_TYPE_2GCall 0
#define SAL_APP_TYPE_3GCall 1

#define SAL_ENH_AEC		0
#define SAL_ENH_NR_UL	1
#define SAL_ENH_NR_DL	2
#define SAL_ENH_TDNC	3
#define SAL_ENH_DMNR	4


#define SAL_FLTCOEFLEN_SIDETONE 31
#define SAL_FLTCOEFLEN_BKF_NB 	45
#define SAL_FLTCOEFLEN_BKF_WB 	90
#define SAL_FLTCOEFLEN_SRC 		82
#define SAL_FLTCOEFLEN_AGC 		40
#define SAL_FLTCOEFLEN_DMNR_NB 	44
#define SAL_FLTCOEFLEN_DMNR_WB	76
#define SAL_PARAMETERLEN_COMMON 12
#define SAL_PARAMETERLEN_MODE_NB 	16
#define SAL_PARAMETERLEN_MODE_WB 	16


#define SAL_3G_VALUE_TX_CODEC_MODE 0
#define SAL_3G_VALUE_RX_CODEC_MODE 1
#define SAL_3G_VALUE_TX_TYPE 2
#define SAL_3G_VALUE_RX_TYPE 3

#define SAL_3G_ADDR_TXHB   0
#define SAL_3G_ADDR_RXHB   1


#define SAL_3G_TX_SPEECH_GOOD  2
#define SAL_3G_TX_SID_FIRST    1
#define SAL_3G_TX_SID_UPDATE   3
#define SAL_3G_TX_NO_DATA      0

#define SAL_3G_RX_SPEECH_GOOD  0
#define SAL_3G_RX_SPEECH_BAD   4
#define SAL_3G_RX_SID_FIRST    6
#define SAL_3G_RX_SID_UPDATE   8
#define SAL_3G_RX_SID_BAD      10
#define SAL_3G_RX_NO_DATA      14




#define SAL_DSPINT_PRIO_REC_EPL 1 //uplink
#define SAL_DSPINT_PRIO_REC_PCM 2 //uplink
#define SAL_DSPINT_PRIO_REC_VM  3 //downlink
#define SAL_DSPINT_PRIO_3G_DL	4
#define SAL_DSPINT_PRIO_3G_UL	5
#define SAL_DSPINT_PRIO_PNW_DL	6
#define SAL_DSPINT_PRIO_PNW_UL	7
#define SAL_DSPINT_PRIO_DACA_DL	8
#define SAL_DSPINT_PRIO_DACA_UL	9
#define SAL_DSPINT_PRIO_BGS		10 //downlink, ping pong
#define SAL_DSPINT_PRIO_AVBT	11
#define SAL_DSPINT_PRIO_MAX     12


#define SAL_DSPINT_ID_REC_EPL   (1 << SAL_DSPINT_PRIO_REC_EPL)
#define SAL_DSPINT_ID_REC_PCM   (1 << SAL_DSPINT_PRIO_REC_PCM)
#define SAL_DSPINT_ID_REC_VM    (1 << SAL_DSPINT_PRIO_REC_VM)
#define SAL_DSPINT_ID_3G_DL		(1 << SAL_DSPINT_PRIO_3G_DL)
#define SAL_DSPINT_ID_3G_UL		(1 << SAL_DSPINT_PRIO_3G_UL)
#define SAL_DSPINT_ID_PNW_DL	(1 << SAL_DSPINT_PRIO_PNW_DL)
#define SAL_DSPINT_ID_PNW_UL	(1 << SAL_DSPINT_PRIO_PNW_UL)
#define SAL_DSPINT_ID_DACA_DL	(1 << SAL_DSPINT_PRIO_DACA_DL)
#define SAL_DSPINT_ID_DACA_UL	(1 << SAL_DSPINT_PRIO_DACA_UL)
#define SAL_DSPINT_ID_BGS		(1 << SAL_DSPINT_PRIO_BGS)
#define SAL_DSPINT_ID_AVBT		(1 << SAL_DSPINT_PRIO_AVBT)

typedef enum{
	SAL_PCM_NARROWBAND = 0,
	SAL_PCM_WIDEBAND,
	SAL_PCM_DYNAMIC
}Sal_PcmBand_Config_t;

typedef enum{
	SAL_PCMEX_OFF = 0,
	SAL_PCMEX_ON,
	SAL_PCMEX_RDY,
}Sal_PcmEx_State_t;



typedef enum{
	SAL_PCMEX_TYPE_PNW = 0,
	SAL_PCMEX_TYPE_DACA,
	SAL_PCMEX_TYPE_REC_NML,
	SAL_PCMEX_TYPE_REC_EPL //no actual dsp control before MT6589
}Sal_PcmEx_Type_t;


typedef enum{
	SAL_PCMEX_SWITCH_OFF = 0,
	SAL_PCMEX_SWITCH_ON
}Sal_PcmEx_Switch_t;

typedef enum{
	SAL_PCMEX_PNW_BUF_UL1 = 0,
	SAL_PCMEX_PNW_BUF_UL2,
	SAL_PCMEX_PNW_BUF_DL,
	SAL_PCMEX_DACA_BUF_UL,
	SAL_PCMEX_DACA_BUF_DL,
	SAL_PCMEX_BUF_SE,
	SAL_PCMEX_BUF_SE2,//mic2
	SAL_PCMEX_BUF_SD
}Sal_PcmEx_BufId_t;


typedef struct{

	Sal_PcmEx_Switch_t swi;

	Sal_PcmEx_Type_t type;
	
	bool idle;//must be assinged
	Sal_PcmBand_Config_t band;//taking effect only when idle is true
	uint16 delR;
	uint16 delW;
	uint16 delM;


	//for pcm n way
	bool afterEnh_ul1;
	bool D2M_ul1;
	bool M2D_ul1;
	bool DMNR_cal;

	bool afterEnh_ul2;
	bool D2M_ul2;
	bool M2D_ul2;

	bool afterEnh_dl; //position
	bool D2M_dl; //dl position is different from daca on bgs and keytone
	bool M2D_dl;

	
}Sal_PCMEx_Config_t;


typedef enum{
	SAL_VM_SWITCH_OFF = 0,
	SAL_VM_SWITCH_ON
}Sal_VM_Switch_t;


typedef struct{
	
	Sal_VM_Switch_t swi;
	bool idle;

	uint16 delR;
	uint16 delW;
	uint16 delM;
	uint16 codec;

}Sal_VM_Config_t;


typedef struct{

	uint16 enc_mode;
	uint16 dec_mode;

	uint16 enc_hdr;
	uint16 dec_hdr;

	volatile uint16 *enc_hb_addr;
	volatile uint16 *dec_hb_addr;

	volatile uint16 *dbgInfo_addr;
	volatile uint16 *enh_dbgInfo_addr;
		
}Sal_VM_Frame;

#define SAL_VM_DBGINFO_LEN 56
#define SAL_VM_ENH_DBGINFO_LEN 69
#define SAL_VM_DRV_DBGINFO_LEN 20

typedef struct{

	uint16 ul_pre_len;
	uint16 ul_pos_len;
	uint16 dl_pre_len;
	uint16 dl_pos_len;
	
	uint16 ul2_pos_len;

	volatile uint16 *ul_pre_buf;
	volatile uint16 *ul_pos_buf;
	volatile uint16 *dl_pre_buf;
	volatile uint16 *dl_pos_buf;

	volatile uint16 *ul2_pos_buf;

}Sal_EPL_Frame;


typedef enum{
	SAL_BT_MODE_LINEAR = 0,
	SAL_BT_MODE_SIGNEXT,
	SAL_BT_MODE_GAIN
}Sal_BT_Mode_t;

typedef enum{
	SAL_BT_LINEAR_GAIN_FIXED = 0,//fixed to 18db
	SAL_BT_LINEAR_ZPAD,//last 3 bits
	SAL_BT_LINEAR_GAIN_CONFIG_ZPAD
}Sal_BT_Linear_Ctrl_t;

typedef struct{

	bool feed_cfg;// false: clear bt config
	Sal_BT_Mode_t mode;

	//for linear mode
	Sal_BT_Linear_Ctrl_t linear_ctrl;
	bool linear_reverse;
	uint8 linear_ul_gain;

	//for gain mode
	uint8 gainmode_dl_gain;
	
}Sal_BT_Config;

typedef enum{
	SAL_MUTE_UL_POS_EN,
	SAL_MUTE_UL_PRE_EN,
	SAL_MUTE_UL_IN_EN,
	SAL_MUTE_DL_PRE_SD,
	SAL_MUTE_DL_PRE_EN,
	SAL_MUTE_DL_8K
}Sal_Mute_Point_t;

typedef enum{
	SAL_ENH_DYNAMIC_MUTE_UL,
	SAL_ENH_DYNAMIC_DMNR_MUX,
	SAL_ENH_DYNAMIC_VCE_MUX,
	SAL_ENH_DYNAMIC_BWE_MUX,
	SAL_ENH_DYNAMIC_UL_NR_MUX,
	SAL_ENH_DYNAMIC_DL_NR_MUX,
	SAL_ENH_DYNAMIC_DMNR_HF_MUX,
	SAL_ENH_DYNAMIC_SIDEKEYCTRL_DGAIN_MUX,
	SAL_ENH_DYNAMIC_NUM //for salu using
}Sal_Enh_Dynamic_t;

typedef struct{

	bool main_switch;
	bool gain_switch;//false->fixed_gain
	bool hpiir_switch;
	bool vad_switch;
	bool cosim;
	bool init_req;
	
}Sal_AGC_Config_t;

#define SAL_CTM_VALUE_TYPE_FACCH_REPORT 0
#define SAL_CTM_VALUE_TYPE_AMR_RX_RATE 1

#define SAL_UNKNOWN 0xeeee

#endif

