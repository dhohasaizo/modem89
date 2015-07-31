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
 * sp_drv.h
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * MD speech control interfaces 
 *
 * Author:
 * -------
 * 
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
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
 
#ifndef _SP_DRV_H
#define _SP_DRV_H

void L1SP_SpeechLoopBackEnable(kal_bool fgEnable);

void L1SP_Register_BgsService(void (*onHandler)(void), void (*offHandler)(void));
void L1SP_UnRegister_BgsService( void );

// ----------------------------------------------------------------------------
// ENHANCEMENT MODE PARAMETERS
// ----------------------------------------------------------------------------
void l1sp_SetWbSpeechPara( kal_uint16 m_para[NUM_MODE_PARAS] );
void l1sp_SetSpeechMode( uint8 devMode, uint8 mode, uint16 m_para[NUM_MODE_PARAS] );

void l1sp_setAllSpeechModePara(uint16 * speech_mode_para, int16 length);
void l1sp_setAllSpeechFirCoeff_InputOnly(int16 *speech_input_FIR_coeffs, int16 length);
void l1sp_setAllSpeechFirCoeff_OutputOnly(int16 *speech_output_FIR_coeffs, int16 length);

void l1sp_setAllWbSpeechModePara(uint16 * speech_mode_para, int16 length);
void l1sp_setAllWbSpeechFirCoeff_InputOnly(int16 *speech_input_FIR_coeffs, int16 length);
void l1sp_setAllWbSpeechFirCoeff_OutputOnly(int16 *speech_output_FIR_coeffs, int16 length);

void l1sp_updateSpeUsrMaskWithWholeValue(uint16 newValue);
void l1sp_updateSpeUsrSubMaskWithWholeValue(uint16 newValue);

// ----------------------------------------------------------------------------
// DSP volume related
// ----------------------------------------------------------------------------

void l1sp_digiOnly_SetOutputVolume(int16 digitalGain);
void l1sp_digiOnly_SetEnhRefOutputVolume(int16 digitalRefGain);
void l1sp_digiOnly_SetMicrophoneVolume(int16 digitalGain);


// ----------------------------------------------------------------------------
// Else
// ----------------------------------------------------------------------------

#if 0 //defined(MT6582)// defined(MT6589)
/* under construction !*/
#endif

#endif //_SP_DRV_H
