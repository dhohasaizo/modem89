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
 *	csmcc_bc_func.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for bearer capability compatibility checking
 *   and negotiation functions used in CSM module.
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define CSMCC_BC_FUNC_C

//#include "kal_release.h"      	/* Basic data type */

//#include "stack_common.h"  
//#include "stack_msgs.h"
//#include "app_ltlcom.h"       	/* Task message communiction */

//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */

//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"      	/* Stack timer */

//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
//#include "mcd_l4_common.h"
//#include "mcd.h"

#ifdef __SAT__
//#include "ps2sat_struct.h"  /* Ripple SATCE */
//#include "sat_def.h"
#endif /* __SAT__ */

//#include "ps2sim_struct.h"
//#include "nvram_struct.h"
#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"
#include "mncc_struct.h"

#include "l3_inc_enums.h"
//#include "mncc_enums.h"
#include "csmcc_common_enums.h"
#include "csmcc_enums.h"
#include "l4c_common_enum.h"
//#include "csmss_common_enums.h"
#include "sim_common_enums.h"
//#include "nvram_enums.h"
//#include "l4_defs.h"
#include "csmcc_defs.h"
#include "csmcc_bc_defs.h"
#include "csmcc_bc_types.h"

#ifdef __TCPIP_OVER_CSD__
//#include "csd_l1ra.h"
#endif

#ifdef __CSD_FAX__
//#include "csm_data_enums.h"
#endif

#include "csmcc_types.h"
//#include "csmcc_utility.h"
#include "csmcc_bc_func.h"

#include "kal_trace.h"
#include "csm_trc.h"

//#include "custom_nvram_editor_data_item.h"

//#include "Custom_data_account.h"

//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
//#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "custom_em.h"

extern void csmcc_reset_data_bc_param(void);
extern const kal_uint8 customer_define_codec_priority[];
extern kal_uint8 cc_get_SUPPORTED_2G_CODEC_NUM(void);

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_voice_bc_ie
* DESCRIPTION                                                           
*    This function is used to fill bearer capability IE of voice call
*
* CALLS  
*	csmcc_fill_voice_bc_ie(csmcc_bc_struct *bc)
*
* PARAMETERS
*	bc	IN	first variable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_fill_voice_bc_ie(csmcc_bc_struct *bc)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 speech_ver_count;
   kal_uint8 codec_id;


   /************************************************
    * octet 3
    * if MS support half rate, RCR = dual/FR preferred
    * else RCR = FR only
    ***********************************************/
   
   /* bit 7-6 (rcr) */
   if(SPEECH_VER(HR_SUPP_MASK) == KAL_TRUE)
   {
//MAUI_01966467
   #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
         bc->radio_chanl_req = CSMCC_DUAL_FR_PREF;
   }
   else
   {
      bc->radio_chanl_req = CSMCC_FR_ONLY;
   }

   /* bit 5 (coding stand): common setting */

   /* bit 4 (transfer mode): common setting */
   bc->transfer_mode = CSMCC_CIRCUIT_MODE;

   /* bit 3-1 (itc): has been filled*/
      
   /************************************************
    * octet 3a ect..
    ***********************************************/   
   
   speech_ver_count = 0;
    
    for (codec_id=0;codec_id<cc_get_SUPPORTED_2G_CODEC_NUM();codec_id++)
    {
        switch (customer_define_codec_priority[cc_get_SUPPORTED_2G_CODEC_NUM()-codec_id-1])
        {
            case CSMCC_FR_V1://support CSMCC_FR_V1
            if(SPEECH_VER(FR_V1_MASK) == KAL_TRUE)
            {
                bc->octet3a[speech_ver_count].speech_version_ind = CSMCC_FR_V1;
                speech_ver_count++;
            }
            break;
            
            case CSMCC_HR_V1://support CSMCC_HR_V1
            if(SPEECH_VER(HR_V1_MASK) == KAL_TRUE)
            {
                bc->octet3a[speech_ver_count].speech_version_ind = CSMCC_HR_V1;
                speech_ver_count++;
            }
            break;
            
            case CSMCC_FR_V2://support CSMCC_FR_V2
            if(SPEECH_VER(FR_V2_MASK) == KAL_TRUE)
            {
                bc->octet3a[speech_ver_count].speech_version_ind = CSMCC_FR_V2;
                speech_ver_count++;
            }
            break;
            
            case CSMCC_FR_V3://support CSMCC_FR_V3
            if(SPEECH_VER(FR_V3_MASK) == KAL_TRUE)
            {
                bc->octet3a[speech_ver_count].speech_version_ind = CSMCC_FR_V3;
                speech_ver_count++;
            }
            break;
            
            case CSMCC_HR_V3://support CSMCC_HR_V3
            if(SPEECH_VER(HR_V3_MASK) == KAL_TRUE)
            {
                bc->octet3a[speech_ver_count].speech_version_ind = CSMCC_HR_V3;
                speech_ver_count++;
            }
            break;
            
   

#if defined(__AMRWB_LINK_SUPPORT__)
            case CSMCC_FR_AMRWB_V5://support AMR_WB
            if(SPEECH_VER2(FR_AMRWB_V5_MASK) == KAL_TRUE && CSMCC_PTR->ctm_status == CSMCC_CTM_NOT_SUPPORT)
            {
                bc->octet3a[speech_ver_count].speech_version_ind = CSMCC_FR_AMRWB_V5;
                speech_ver_count++;
            }
            break;
#endif         
            default:// discard the other value
            break;
          
        
        }
    
    }


   bc->octet3a[speech_ver_count-1].CTM = CSMCC_PTR->ctm_status;          
   bc->num_octet3a = speech_ver_count;
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_fill_voice_bc_ie */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_get_ur_by_speed
* DESCRIPTION                                                           
*    This function is used to get user rate from bearer speed parameter set
*    by AT-command.
*
* CALLS  
*	csmcc_get_ur_by_speed(csmcc_bearer_speed_enum speed,
*                             csmcc_user_rate_enum *ur,
*                             csmcc_fnur_enum *fnur)
*
* PARAMETERS
*	speed	IN	first variable, used as input
*	*ur	OUT	second variable, used as output
*	*fnur	OUT	third variable, used as output	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_get_ur_by_speed(csmcc_bearer_speed_enum speed,
                                       csmcc_user_rate_enum *ur,
                                       csmcc_fnur_enum *fnur)
{
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->rat == RAT_GSM)
   {

   	switch(speed)
   	{
      		case CSMCC_AUTOBAUDING:
         		*ur = CSMCC_UR_9_6_K;
         		break;
      		case CSMCC_2400_BPS_V22BIS:
      		case CSMCC_2400_BPS_V26TER:
      		case CSMCC_2400_BPS_V120:
      		case CSMCC_2400_BPS_V110:      
         		*ur = CSMCC_UR_2_4_K;
         		break;      
      		case CSMCC_4800_BPS_V32:
      		case CSMCC_4800_BPS_V120:      
      		case CSMCC_4800_BPS_V110:      
         		*ur = CSMCC_UR_4_8_K;
         		break;      
      		case CSMCC_9600_BPS_V34:
      		case CSMCC_9600_BPS_V32:      
      		case CSMCC_9600_BPS_V120:
      		case CSMCC_9600_BPS_V110:      
         		*ur = CSMCC_UR_9_6_K;
         		break;      
      		case CSMCC_14400_BPS_V34:
      		case CSMCC_14400_BPS_V120:
      		case CSMCC_14400_BPS_V110:
         		*ur = CSMCC_UR_9_6_K;
         		*fnur = CSMCC_FNUR_14_4_K;
         		break; 
            default: 
            break;
   	} /* switch(speed) */
   }   
#ifdef __UMTS_RAT__
   else if (CSMCC_PTR->rat == RAT_UMTS)
   {
   	switch(speed)
   	{
      		case CSMCC_AUTOBAUDING:
         		*ur = CSMCC_UR_9_6_K;
         		*fnur = CSMCC_FNUR_14_4_K;				
         		break;
      		case CSMCC_2400_BPS_V22BIS:
      		case CSMCC_2400_BPS_V26TER:
      		case CSMCC_2400_BPS_V120:
      		case CSMCC_2400_BPS_V110:      
         		*ur = CSMCC_UR_2_4_K;
         		*fnur = CSMCC_FNUR_9_6_K;								
         		break;      
      		case CSMCC_4800_BPS_V32:
      		case CSMCC_4800_BPS_V120:      
      		case CSMCC_4800_BPS_V110:      
         		*ur = CSMCC_UR_4_8_K;
         		*fnur = CSMCC_FNUR_9_6_K;												
         		break;      
      		case CSMCC_9600_BPS_V34:
      		case CSMCC_9600_BPS_V32:      
      		case CSMCC_9600_BPS_V120:
      		case CSMCC_9600_BPS_V110:      
         		*ur = CSMCC_UR_9_6_K;
         		*fnur = CSMCC_FNUR_9_6_K;												
         		break;      
      		case CSMCC_14400_BPS_V34:
      		case CSMCC_14400_BPS_V120:
      		case CSMCC_14400_BPS_V110:
         		*ur = CSMCC_UR_9_6_K;
         		*fnur = CSMCC_FNUR_14_4_K;
			break;	
		case CSMCC_19200_BPS_V34:
		case CSMCC_19200_BPS_V120:
		case CSMCC_19200_BPS_V110:	
         		*ur = CSMCC_UR_9_6_K;
         		*fnur = CSMCC_FNUR_19_2_K;			
         		break;      
		case CSMCC_28800_BPS_V34:
		case CSMCC_28800_BPS_V120:
		case CSMCC_28800_BPS_V110:	
         		*ur = CSMCC_UR_9_6_K;
         		*fnur = CSMCC_FNUR_28_8_K;			
         		break;    				
		case CSMCC_38400_BPS_V120:
		case CSMCC_38400_BPS_V110:
			*ur = CSMCC_UR_9_6_K;
			*fnur = CSMCC_FNUR_38_4_K;			
			break;		
		case CSMCC_48000_BPS_V120:
		case CSMCC_48000_BPS_V110:
			*ur = CSMCC_UR_9_6_K;
			*fnur = CSMCC_FNUR_48_K;			
			break;					
		case CSMCC_56000_BPS_V120:
		case CSMCC_56000_BPS_V110:
	#ifdef __SYNC_HDLC_CSD__
                /* [__UMTS_CSD_T__] TS27.001, B.1.3.1.3
                 * Transparent FNUR=56kbps for BS30(Iu mode) 
                 */
		case CSMCC_56000_BPS_TRANSPARENT:
	#endif /* __SYNC_HDLC_CSD__ */
			*ur = CSMCC_UR_9_6_K;
			*fnur = CSMCC_FNUR_56_K;			
			break;
				
	#ifdef __SYNC_HDLC_CSD__
                /* [__UMTS_CSD_T__] TS27.001, B.1.3.1.5
                 * Transparent FNUR=64kbps for BS30(Iu mode) 
                 */
		case CSMCC_64000_BPS_TRANSPARENT:
			*ur = CSMCC_UR_9_6_K;
			*fnur = CSMCC_FNUR_64_K;			
			break;
       #endif /* __SYNC_HDLC_CSD__ */
       default: 
            break;
   
   	} /* switch(speed) */   
   }
#endif /*__UMTS_RAT__*/
   else
   {
   	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
   }
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_get_ur_by_speed */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_get_mt_by_speed
* DESCRIPTION                                                           
*    This function is used to get modem type from bearer
*    speed parameter set by AT-command.
*
* CALLS  
*	csmcc_get_mt_by_speed(csmcc_bearer_speed_enum speed,
*                             csmcc_modem_type_enum *mt,
*                             csmcc_other_modem_type_enum *other_mt)
*
* PARAMETERS
*	speed		IN	first variable, used as input
*	*mt		OUT	second variable, used as output
*	*other_mt	OUT	third variable, used as output	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_get_mt_by_speed(csmcc_bearer_speed_enum speed,
                                       csmcc_modem_type_enum *mt,
                                       csmcc_other_modem_type_enum *other_mt)
{
   switch(speed)
   {
      case CSMCC_AUTOBAUDING:
         *mt = CSMCC_MT_AUTOBAUDING;
         break;
      case CSMCC_2400_BPS_V22BIS:
         *mt = CSMCC_MT_V22_BIS;
         break;
      case CSMCC_2400_BPS_V26TER:
         *mt = CSMCC_MT_V26_TER;
         break;
      case CSMCC_9600_BPS_V32:
      case CSMCC_4800_BPS_V32:
         *mt = CSMCC_MT_V32;
         break;
      case CSMCC_9600_BPS_V34:
      case CSMCC_14400_BPS_V34: 
#ifdef __UMTS_RAT__
      case CSMCC_19200_BPS_V34:
      case CSMCC_28800_BPS_V34:	 
#endif /*__UMTS_RAT__*/
         *mt = CSMCC_MT_V32;
         *other_mt = CSMCC_MT_V34;
         break;
      default:
         break;
   } /* switch(speed) */

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_get_mt_by_speed */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_get_ra_by_speed
* DESCRIPTION                                                           
*    This function is used to get rate adaptation from bearer
*    speed parameter set by AT-command.
*
* CALLS  
*	csmcc_get_ra_by_speed(csmcc_bearer_speed_enum speed,
*                             csmcc_rate_adaptation_enum *ra,
*                             csmcc_other_rate_adaptation_enum *other_ra)
*
* PARAMETERS
*	speed		IN	first variable, used as input
*	*ra		OUT	second variable, used as output
*	*other_ra	OUT	third variable, used as output	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_get_ra_by_speed(csmcc_bearer_speed_enum speed,
                                  csmcc_rate_adaptation_enum *ra,
                                  csmcc_other_rate_adaptation_enum *other_ra)
{

   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->rat == RAT_GSM)
   {

   	switch(speed)
   	{
      		case CSMCC_2400_BPS_V110:
      		case CSMCC_4800_BPS_V110:
      		case CSMCC_9600_BPS_V110:
      		case CSMCC_14400_BPS_V110:
         		*ra = CSMCC_RA_V110;
         		break;
      		case CSMCC_2400_BPS_V120:
      		case CSMCC_4800_BPS_V120:      
      		case CSMCC_9600_BPS_V120:
      		case CSMCC_14400_BPS_V120:
         		*ra = CSMCC_RA_OTHER;
         		*other_ra = CSMCC_RA_V120;
         		break;
      		default:
         		break;
   	} /* switch(speed) */

   }
#ifdef __UMTS_RAT__
   else if(CSMCC_PTR->rat == RAT_UMTS)
   {
      	switch(speed)
   	{
      		case CSMCC_2400_BPS_V110:
      		case CSMCC_4800_BPS_V110:
      		case CSMCC_9600_BPS_V110:
      		case CSMCC_14400_BPS_V110:
		case CSMCC_19200_BPS_V110:		
		case CSMCC_28800_BPS_V110:
		case CSMCC_38400_BPS_V110:	
		case CSMCC_48000_BPS_V110:
		case CSMCC_56000_BPS_V110:	
         		*ra = CSMCC_RA_V110;
         		break;
      		case CSMCC_2400_BPS_V120:
      		case CSMCC_4800_BPS_V120:      
      		case CSMCC_9600_BPS_V120:
      		case CSMCC_14400_BPS_V120:
		case CSMCC_19200_BPS_V120:
		case CSMCC_28800_BPS_V120:
		case CSMCC_38400_BPS_V120:
		case CSMCC_48000_BPS_V120:
		case CSMCC_56000_BPS_V120:	
         		*ra = CSMCC_RA_OTHER;
         		*other_ra = CSMCC_RA_V120;
         		break;
      		default:
         		break;
   	} /* switch(speed) */
   }
#endif /*__UMTS_RAT__*/
   else
   {
   	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
   }  

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_get_ra_by_speed */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_get_cf_format
* DESCRIPTION                                                           
*    This function is used to get char framing format from parameters set by
*    AT-command
*
* CALLS  
*	csmcc_get_cf_format(csmcc_cf_format_enum format,
*                           csmcc_nsb_enum *nsb,
*                           csmcc_ndb_enum *ndb)
*
* PARAMETERS
*	format		IN	first variable, used as input
*	*nsb		OUT	second variable, used as output
*	*ndb		OUT	third variable, used as output	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_get_cf_format(csmcc_cf_format_enum format,
                                     csmcc_nsb_enum *nsb,
                                     csmcc_ndb_enum *ndb)
{                          
   switch(format)
   {
      case CSMCC_CF_8_DATA_2_STOP:
         *nsb = CSMCC_2_STOP_BIT;
         *ndb = CSMCC_8_DATA_BIT;
         break;
      case CSMCC_CF_8_DATA_1_PARITY_1_STOP:
      case CSMCC_CF_8_DATA_1_STOP:
         *nsb = CSMCC_1_STOP_BIT;
         *ndb = CSMCC_8_DATA_BIT;
         break;
      case CSMCC_CF_7_DATA_2_STOP:
         *nsb = CSMCC_2_STOP_BIT;
         *ndb = CSMCC_7_DATA_BIT;
         break;
      case CSMCC_CF_7_DATA_1_PARITY_1_STOP:
      case CSMCC_CF_7_DATA_1_STOP:
         *nsb = CSMCC_1_STOP_BIT;
         *ndb = CSMCC_7_DATA_BIT;
         break;
      default:
         *nsb = CSMCC_1_STOP_BIT;
         *ndb = CSMCC_8_DATA_BIT;
         break;
   } /* switch(format) */
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_get_cf_format */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_get_cf_parity
* DESCRIPTION                                                           
*    This function is used to get parity information from parameter set by 
*    AT-command.
*
* CALLS  
*	csmcc_get_cf_parity(csmcc_cf_format_enum format,
*                           csmcc_cf_parity_enum cf_parity,
*                           csmcc_parity_enum *parity)
*
* PARAMETERS
*	format		IN	first variable, used as input
*	cf_parity	IN	second variable, used as input
*	*parity		OUT	third variable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_get_cf_parity(csmcc_cf_format_enum format,
                                     csmcc_cf_parity_enum cf_parity,
                                     csmcc_parity_enum *parity)
{

   switch(format)
   {
      case CSMCC_CF_8_DATA_2_STOP:
      case CSMCC_CF_8_DATA_1_STOP:
      case CSMCC_CF_7_DATA_2_STOP:
      case CSMCC_CF_7_DATA_1_STOP:
         *parity = CSMCC_PARITY_NONE;
         return CSMCC_NO_ERROR;
      default:
         break;
   } /* switch(format) */
   
   switch(cf_parity)
   {
      case CSMCC_CF_PARITY_ODD:
         *parity = CSMCC_PARITY_ODD;
         break;
      case CSMCC_CF_PARITY_EVEN:
         *parity = CSMCC_PARITY_EVEN;
         break;
      case CSMCC_CF_PARITY_MARK:
         *parity = CSMCC_PARITY_FORCED_1;
         break;
      case CSMCC_CF_PARITY_SPACE:
         *parity = CSMCC_PARITY_FORCED_0;
         break;
      default:
         *parity = CSMCC_PARITY_NONE;
         break;
   } /* switch(parity) */

   return CSMCC_NO_ERROR;

} /* end of csmcc_get_cf_parity */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_get_mt_by_ur
* DESCRIPTION                                                           
*    This function is used to get modem type according to user rate in case 
*    of autobauding.
*
* CALLS  
*	csmcc_get_mt_by_ur(csmcc_user_rate_enum ur,
*                          csmcc_modem_type_enum *mt)
*
* PARAMETERS
*	ur	IN	first variable, used as input
*	*mt	OUT	second variable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/

csmcc_ret_t csmcc_get_mt_by_ur(csmcc_user_rate_enum ur,
                                    csmcc_modem_type_enum *mt)
{
   switch(ur)
   {
      case CSMCC_UR_0_3_K:
         *mt = CSMCC_MT_V21;
         break;
      case CSMCC_UR_1_2_K:
         *mt = CSMCC_MT_V22;
         break;
      case CSMCC_UR_2_4_K:
         *mt = CSMCC_MT_V22_BIS;
         break;
      case CSMCC_UR_4_8_K:
      case CSMCC_UR_9_6_K:
      case CSMCC_UR_12_K:
         *mt = CSMCC_MT_V32;
         break;
      default:
         *mt = CSMCC_MT_NONE;
         break;
   } /* switch(ur) */
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_get_mt_by_ur */

#ifdef __CSD_FAX__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_fax_bc_param
* DESCRIPTION                                                           
*    This function is used to fill bearer capability parameters of fax call
*
* CALLS  
*	csmcc_fill_fax_bc_param(csmcc_data_bc_param *data_bc_param)
*
* PARAMETERS
*	data_bc_param	IN	first variable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_fax_bc_param(csmcc_data_bc_param_struct *data_bc_param_ptr)
{  
   /* local var declare */
   //csmcc_at_param_struct *at_param_ptr = &(CSMCC_PTR->at_param);   
      
   csmcc_reset_data_bc_param();
      
   /* itc */
   data_bc_param_ptr->itc = CSMCC_ITC_FAX_GROUP_3;
   
   /* sync/async */
   data_bc_param_ptr->sync = CSMCC_SYNC_DATA;
   
   /* char framing */
   data_bc_param_ptr->nsb = CSMCC_1_STOP_BIT;
   data_bc_param_ptr->ndb = CSMCC_8_DATA_BIT;
   data_bc_param_ptr->parity = CSMCC_PARITY_NONE;

   /* ce, only support T in fax. */
   data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
   
   data_bc_param_ptr->ur = CSMCC_UR_9_6_K;
   
   #ifdef __FAX_14_4__
   data_bc_param_ptr->fnur = CSMCC_FNUR_14_4_K;
   #endif
   
   /* ra, mt, other mt (all set to NONE) */
   data_bc_param_ptr->ra = CSMCC_RA_NONE;
   data_bc_param_ptr->mt = CSMCC_MT_NONE;
   data_bc_param_ptr->other_mt = CSMCC_OTHER_MT_NONE;
   
} /* end of csmcc_fill_fax_bc_param */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_fax_bc_ie
* DESCRIPTION                                                           
*    This function is used to fill bearer capability IE of fax call
*
* CALLS  
*	csmcc_fill_fax_bc_ie(csmcc_bc_struct *bc)
*
* PARAMETERS
*	bc	IN	first variable, used as output
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_fax_bc_ie(csmcc_bc_struct *bc)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_data_bc_param_struct *data_bc_param_ptr = &(CSMCC_PTR->data_bc_param);
   
   /**********************
    * octet 3
    *********************/
   
   /* bit 7-6 (RCR) */ 
   /* if HR supported, Anite expects DUAL_HR/FR_PREF, but real nw only accept FR_ONLY. 
       so fill DUAL_HR/FR only when using test SIM. */
   if((check_sim_card_status(CSMCC_SIM_INTERFACE) == TEST_SIM_PRESENCE)
      && (ACC(TCH_H_MASK) == KAL_TRUE))
   {      
        /* Temporary solution: using Bit 8 as HR preferred flag */
         if(ACC((kal_uint8)0x80))
            bc->radio_chanl_req = CSMCC_DUAL_HR_PREF;
         else
            bc->radio_chanl_req = CSMCC_DUAL_FR_PREF;            
   }
   else  
   {
      /* Set FR_ONLY when HR is not supported 
          or when using Real nw due to real nw only accept FR_ONLY. */
      bc->radio_chanl_req = CSMCC_FR_ONLY;  
   }

   /* bit 5 (coding stand): common setting */

   /* bit 4 (transfer mode): common setting */
   bc->transfer_mode = CSMCC_CIRCUIT_MODE;

   /* bit 3-1 (itc): */
   bc->itc = data_bc_param_ptr->itc;

   /*********************
    * octet 3a (null)
    *********************/   
   bc->num_octet3a = 0;
   
   /****************************************
    * octet 4
    * Transparent:
    *    structure = unstructured 
    *    NIRR = no meaning
    * Non-Transparent:
    *    structure = SDU
    *    NIRR = NIRR requested if ur <= 4.8k
    ****************************************/

   bc->octet4_present = KAL_TRUE;

   /* bit 7 (compress): spare */
   
   /* bit 6-5 (structure) */
   if(data_bc_param_ptr->ce == CSMCC_TRANSPARENT)
   {
      bc->octet4.structure = CSMCC_UNSTRUCTURED;
   }
   else
   {
      bc->octet4.structure = CSMCC_SDU_INTEGRITY;
   }

   /* bit 4 (dupl. mode): common setting */
   bc->octet4.duplex_mode = CSMCC_FULL_DUPLEX;

   /* bit 3 (configure): common setting */
   bc->octet4.configuration = 0;

   /* bit 2 (NIRR) */
   if(data_bc_param_ptr->ce == CSMCC_TRANSPARENT)
   {
      bc->octet4.NIRR = CSMCC_NIRR_NO_MEANING;
   }
   else if(data_bc_param_ptr->ur <= CSMCC_UR_4_8_K)
   {
      /* On real network, set to NIRR NO MEANING  
         bc->octet4.NIRR = CSMCC_NIRR_REQUESTED; */         
      bc->octet4.NIRR = CSMCC_NIRR_NO_MEANING;
   }
   else
   {
      bc->octet4.NIRR = CSMCC_NIRR_NO_MEANING;
   }
   
   /* bit 1 (establishment): common setting */
   bc->octet4.establishment = 0;
   
   /**********************
    * octet 5
    *********************/
   
   bc->octet5_present = KAL_TRUE;

   /* bit 7-6 (access id): common setting */

   /* bit 5-4 (rate adaption) */
   bc->octet5.rate_adaption = data_bc_param_ptr->ra;

   /* bit 3-1 (signalling access protocol) */
   bc->octet5.siganaling_access_protocol = CSMCC_SAP_I440_450;

   /**********************
    * octet 6
    *********************/
   
   bc->octet6_present = KAL_TRUE;

   /* bit 7-6 (layer 1 id): common setting */

   /* bit 5-2 (UIL1P): common setting */
   bc->octet6.user_info_layer1_protocol = 0;

   /* bit 1 (sync/async) */
   bc->octet6.sync_or_async = data_bc_param_ptr->sync;
   
   /**********************
    * octet 6a
    *********************/
   
   bc->octet6a_present = KAL_TRUE;

   /* bit 7 (nsb) */
   bc->octet6a.number_stop_bits = data_bc_param_ptr->nsb;
   
   /* bit 6 (negotiation): common setting */
   bc->octet6a.negotiation = 0;

   /* bit 5 (ndb) */
   bc->octet6a.number_data_bits = data_bc_param_ptr->ndb;

   /* bit 4-1 (user rate) */
   bc->octet6a.user_rate = data_bc_param_ptr->ur;

   /*********************************************
    * octet 6b
    * Transparent:
    *   IR = 16k if user rate > 4.8k else IR = 8k
    * Non-Transparent:
    *   IR = 16k
    *********************************************/
   
   bc->octet6b_present = KAL_TRUE;

   /* bit 7-6 (IR) */
   if(data_bc_param_ptr->ce == CSMCC_TRANSPARENT)
   {
      if(bc->octet6a.user_rate > CSMCC_UR_4_8_K)
      {
         bc->octet6b.intermediate_rate = CSMCC_IR_16_K;
      }
      else
      {
         bc->octet6b.intermediate_rate = CSMCC_IR_8_K;
      }
   }
   else
   {
      bc->octet6b.intermediate_rate = CSMCC_IR_16_K;
   }

   /* bit 5 (NICT): common setting */
   bc->octet6b.NIC_on_TX = CSMCC_NO_NIC_ON_TX;

   /* bit 4 (NICR): common setting */
   bc->octet6b.NIC_on_RX = CSMCC_NO_NIC_ON_RX;

   /* bit 3-1 (parity) */
   bc->octet6b.parity = data_bc_param_ptr->parity;   

   /**********************
    * octet 6c
    *********************/
   
   bc->octet6c_present = KAL_TRUE;

   /* 7-6 (ce) */
   bc->octet6c.connection_element = data_bc_param_ptr->ce;

   /* 5-1 (modem type) */
   bc->octet6c.modem_type = data_bc_param_ptr->mt;

   /**********************
   * octet 6d
   *********************/
   if(data_bc_param_ptr->fnur != CSMCC_FNUR_NM)
   {
      bc->octet6d_present = KAL_TRUE;

      /* octet 6d bit 7-6 (other modem type) */
      bc->octet6d.other_modem_type = data_bc_param_ptr->other_mt;

      /* octet 6d bit 5-1 (fnur) */
      bc->octet6d.fixed_network_user_rate = data_bc_param_ptr->fnur;
      
      bc->octet6e_present = KAL_TRUE;

      /* octet 6e bit 7-4 (acc) */
      bc->octet6e.accptable_channel_coding = GET_ACC;

      /* octet 6e bit 3-1 (maxTCH): default */
//MAUI_01966467
      /*[MAUI_01712442]CC R6 change request*/
      bc->octet6e.max_num_traffic_channels = GET_MAX_TCH;
      
      if(data_bc_param_ptr->ce != CSMCC_TRANSPARENT)
      {
         bc->octet6f_present = KAL_TRUE;

         /* 6f bit 7-5 (UIMI): default */
         bc->octet6f.UIMI = CSMCC_UIMI_NOT_ALLOWED;

         /* 6f bit 4-1 (waiur) */
         if(data_bc_param_ptr->fnur == CSMCC_FNUR_9_6_K)
         {
            bc->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_9_6_K;
         }
         else
         {
         bc->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_14_4_K;
         }
      }
   }


   /**************************************
    * octet 7 
    * exist only for non-transparent
    **************************************/
   
#ifndef __REL4__
   /*mtk01602: R99 onward, TS27.001 preserves Non-Transparent FAX,
     but remove it after Rel4 */

   if(data_bc_param_ptr->ce != CSMCC_TRANSPARENT)
   {
      bc->octet7_present = KAL_TRUE;
      /* bits 7-6 (layer 2 id): common setting */

      /* bits 5-1 (UIL2P) */
      bc->octet7.user_info_layer2_protocol = CSMCC_UIL2P_X25;
   } 
#endif /*__REL4__*/
   
   
} /* end of csmcc_fill_fax_bc_ie */ 

#endif /* __CSD_FAX__ */
#ifdef __VIDEO_CALL_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_video_bc_param
* DESCRIPTION                                                           
*    This function is used to fill bearer capability parameters of video call
*
* CALLS  
*	csmcc_fill_video_bc_param(csmcc_data_bc_param *data_bc_param)
*
* PARAMETERS
*	data_bc_param	IN	first variable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_video_bc_param(csmcc_data_bc_param_struct *data_bc_param_ptr)
{  
   /* local var declare */
   //csmcc_at_param_struct *at_param_ptr = &(CSMCC_PTR->at_param);   
      
   csmcc_reset_data_bc_param();
      
   /* itc */
   data_bc_param_ptr->itc = CSMCC_ITC_UDI;
   
   /* sync/async */
   data_bc_param_ptr->sync = CSMCC_SYNC_DATA;
   
   /* char framing */
   data_bc_param_ptr->nsb = CSMCC_1_STOP_BIT;
   data_bc_param_ptr->ndb = CSMCC_8_DATA_BIT;
   data_bc_param_ptr->parity = CSMCC_PARITY_NONE;

   data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
   
   data_bc_param_ptr->ur = CSMCC_UR_9_6_K;
   data_bc_param_ptr->fnur = CSMCC_FNUR_64_K;
   
   /* ra, mt, other mt (all set to NONE) */
   data_bc_param_ptr->ra = CSMCC_RA_OTHER;
   data_bc_param_ptr->other_ra = CSMCC_RA_H223;
   
   data_bc_param_ptr->mt = CSMCC_MT_NONE;
   data_bc_param_ptr->other_mt = CSMCC_OTHER_MT_NONE;
   
} /* end of csmcc_fill_video_bc_param */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_video_bc_ie
* DESCRIPTION                                                           
*    This function is used to fill bearer capability IE of video call
*
* CALLS  
*	csmcc_fill_video_bc_ie(csmcc_bc_struct *bc)
*
* PARAMETERS
*	bc	IN	first variable, used as output
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_video_bc_ie(csmcc_bc_struct *bc)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_data_bc_param_struct *data_bc_param_ptr = &(CSMCC_PTR->data_bc_param);
   
   /**********************
    * octet 3
    *********************/
   
   /* bit 7-6 (RCR) */ 

   bc->radio_chanl_req = CSMCC_FR_ONLY;
   /* bit 5 (coding stand): common setting */

   /* bit 4 (transfer mode): common setting */
   bc->transfer_mode = CSMCC_CIRCUIT_MODE;

   /* bit 3-1 (itc): */
   bc->itc = data_bc_param_ptr->itc;

   /*********************
    * octet 3a (null)
    *********************/   
   bc->num_octet3a = 0;
   
   /****************************************
    * octet 4
    * Transparent:
    *    structure = unstructured 
    *    NIRR = no meaning
    * Non-Transparent:
    *    structure = SDU
    *    NIRR = NIRR requested if ur <= 4.8k
    ****************************************/

   bc->octet4_present = KAL_TRUE;

   /* bit 7 (compress): spare */
   
   /* bit 6-5 (structure) */
   if(data_bc_param_ptr->ce == CSMCC_TRANSPARENT)
   {
      bc->octet4.structure = CSMCC_UNSTRUCTURED;
   }
   else
   {
      bc->octet4.structure = CSMCC_SDU_INTEGRITY;
   }

   /* bit 4 (dupl. mode): common setting */
   bc->octet4.duplex_mode = CSMCC_FULL_DUPLEX;

   /* bit 3 (configure): common setting */
   bc->octet4.configuration = 0;

   /* bit 2 (NIRR) */
   bc->octet4.NIRR = CSMCC_NIRR_NO_MEANING;

   
   /* bit 1 (establishment): common setting */
   bc->octet4.establishment = 0;
   
   /**********************
    * octet 5
    *********************/
   
   bc->octet5_present = KAL_TRUE;

   /* bit 7-6 (access id): common setting */

   /* bit 5-4 (rate adaption) */
   bc->octet5.rate_adaption = data_bc_param_ptr->ra;

   /* bit 3-1 (signalling access protocol) */
   bc->octet5.siganaling_access_protocol = CSMCC_SAP_I440_450;
   
   /***************************************************
    * octet 5a
    * exist only in case other ITC and other ra exist
    ***************************************************/

   /* bit 7-6 (other ITC) */
   if(data_bc_param_ptr->itc == CSMCC_OTHER_ITC)
   {
      bc->octet5a_present = KAL_TRUE;
      bc->octet5a.other_ITC = data_bc_param_ptr->other_itc;
   }
   
   /* bit 5-4 (rate adaption) */
   if(data_bc_param_ptr->ra == CSMCC_RA_OTHER)
   {
      bc->octet5a_present = KAL_TRUE;
      bc->octet5a.other_rate_adaption = data_bc_param_ptr->other_ra;
   }

   /**************************************************
    * octet 5b
    * exist only in case rate adaption V.120 is used
    *************************************************/

   if(data_bc_param_ptr->ra == CSMCC_RA_OTHER
      && data_bc_param_ptr->other_ra == CSMCC_RA_V120)
   {
      bc->octet5b_present = KAL_TRUE;
      bc->octet5b.hdr_or_no_hdr = data_bc_param_ptr->v120_param.v120_rah;
      bc->octet5b.multi_frame = data_bc_param_ptr->v120_param.v120_mfm;
      bc->octet5b.mode = data_bc_param_ptr->v120_param.v120_mode;
      bc->octet5b.LLI = data_bc_param_ptr->v120_param.v120_llineg;
      bc->octet5b.assignor = data_bc_param_ptr->v120_param.v120_assign;
      bc->octet5b.inband_negotiation = data_bc_param_ptr->v120_param.v120_negtype;
   }
   
   /**********************
    * octet 6
    *********************/
   
   bc->octet6_present = KAL_TRUE;

   /* bit 7-6 (layer 1 id): common setting */

   /* bit 5-2 (UIL1P): common setting */
   bc->octet6.user_info_layer1_protocol = 0;

   /* bit 1 (sync/async) */
   bc->octet6.sync_or_async = data_bc_param_ptr->sync;
   
   /**********************
    * octet 6a
    *********************/
   
   bc->octet6a_present = KAL_TRUE;

   /* bit 7 (nsb) */
   bc->octet6a.number_stop_bits = data_bc_param_ptr->nsb;
   
   /* bit 6 (negotiation): common setting */
   bc->octet6a.negotiation = 0;

   /* bit 5 (ndb) */
   bc->octet6a.number_data_bits = data_bc_param_ptr->ndb;

   /* bit 4-1 (user rate) */
   bc->octet6a.user_rate = data_bc_param_ptr->ur;

   /*********************************************
    * octet 6b
    * Transparent:
    *   IR = 16k if user rate > 4.8k else IR = 8k
    * Non-Transparent:
    *   IR = 16k
    *********************************************/
   
   bc->octet6b_present = KAL_TRUE;

   /* bit 7-6 (IR) */
   bc->octet6b.intermediate_rate = CSMCC_IR_16_K;

   /* bit 5 (NICT): common setting */
   bc->octet6b.NIC_on_TX = CSMCC_NO_NIC_ON_TX;

   /* bit 4 (NICR): common setting */
   bc->octet6b.NIC_on_RX = CSMCC_NO_NIC_ON_RX;

   /* bit 3-1 (parity) */
   bc->octet6b.parity = data_bc_param_ptr->parity;   

   /**********************
    * octet 6c
    *********************/
   
   bc->octet6c_present = KAL_TRUE;

   /* 7-6 (ce) */
   bc->octet6c.connection_element = data_bc_param_ptr->ce;

   /* 5-1 (modem type) */
   bc->octet6c.modem_type = data_bc_param_ptr->mt;

   /**********************
   * octet 6d
   *********************/

      bc->octet6d_present = KAL_TRUE;

      /* octet 6d bit 7-6 (other modem type) */
      bc->octet6d.other_modem_type = data_bc_param_ptr->other_mt;

      /* octet 6d bit 5-1 (fnur) */
      bc->octet6d.fixed_network_user_rate = data_bc_param_ptr->fnur;


   /**********************
   * octet 6e
   *********************/  
   
      bc->octet6e_present = KAL_TRUE;

      /* octet 6e bit 7-4 (acc) */
//MAUI_01966467
#ifdef __REL6__
      /*[MAUI_01712442]CC R6 change request*/
      bc->octet6e.accptable_channel_coding = GET_ACC;
#else
      bc->octet6e.accptable_channel_coding = 0;
#endif
      /* octet 6e bit 3-1 (maxTCH): default */
      /*[MAUI_01712442]CC R6 change request*/
      bc->octet6e.max_num_traffic_channels = GET_MAX_TCH;

   /**********************
   * octet 6f
   *********************/      

      bc->octet6f_present = KAL_TRUE;

      /* 6f bit 7-5 (UIMI): default */
      bc->octet6f.UIMI = CSMCC_UIMI_NOT_ALLOWED;

      /* 6f bit 4-1 (waiur) */
      bc->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_NM;
		 
} /* end of csmcc_fill_video_bc_ie */ 

#endif /* __VIDEO_CALL_SUPPORT__ */

#if defined(__CSD_T__) || defined(__CSD_NT__)
/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_data_bc_param
* DESCRIPTION                                                           
*    This function is used to fill bearer capability parameters of data call
*
* CALLS  
*	csmcc_fill_data_bc_param(csmcc_data_bc_param *data_bc_param)
*
* PARAMETERS
*	data_bc_param	IN	first variable, used as output
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_data_bc_param(csmcc_data_bc_param_struct *data_bc_param_ptr,
                                          kal_bool is_sat_data_call)
{
   CSMCC_PTR_G_TO_L
   csmcc_bearer_name_enum bearer_name = CSMCC_INVALID_BEARER_NAME; /*mtk00924: remove warning C2874W may be used before being set*/
   csmcc_bearer_ce_enum bearer_ce = CSMCC_INVALID_BEARER_CE;
   csmcc_bearer_speed_enum bearer_speed = CSMCC_INVALID_SPEED;
   /* local var declare */
   csmcc_at_param_struct *at_param_ptr = &(CSMCC_PTR->at_param);   
   
   csmcc_reset_data_bc_param();
   
   if (is_sat_data_call == KAL_FALSE)
   {
      bearer_name = at_param_ptr->bearer_service_type.bearer_name;
      bearer_ce = at_param_ptr->bearer_service_type.bearer_ce;
      bearer_speed = at_param_ptr->bearer_service_type.bearer_speed;
   }
   #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   else
   {
      bearer_name = CSMCC_PTR->sat_prof.sat_cbst.service_name;
      bearer_ce = CSMCC_PTR->sat_prof.sat_cbst.ce;
      bearer_speed  = CSMCC_PTR->sat_prof.sat_cbst.speed;
   }
   #endif
     
   /* itc, sync/async */
   switch(bearer_name)
   {
      case CSMCC_DATA_ASYNC_RDI:
         data_bc_param_ptr->itc = CSMCC_OTHER_ITC;
         data_bc_param_ptr->other_itc = CSMCC_ITC_RDI;      
      case CSMCC_DATA_ASYNC:
         data_bc_param_ptr->sync = CSMCC_ASYNC_DATA;
         data_bc_param_ptr->ce = bearer_ce;
         break;
      case CSMCC_DATA_SYNC_RDI:
         data_bc_param_ptr->itc = CSMCC_OTHER_ITC;
         data_bc_param_ptr->other_itc = CSMCC_ITC_RDI;         
      case CSMCC_DATA_SYNC:
         data_bc_param_ptr->sync = CSMCC_SYNC_DATA;
         data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
         break;      
      default:
         /* invalie value range */
         break;
   } 

   /* char framing */   
   if(data_bc_param_ptr->sync == CSMCC_SYNC_DATA)
   {
      data_bc_param_ptr->nsb = CSMCC_1_STOP_BIT;
      data_bc_param_ptr->ndb = CSMCC_8_DATA_BIT;
      data_bc_param_ptr->parity = CSMCC_PARITY_NONE;
   }
   else
   {
      csmcc_get_cf_format(at_param_ptr->cf_param.cf_format,
                          &(data_bc_param_ptr->nsb),
                          &(data_bc_param_ptr->ndb));
                          
      csmcc_get_cf_parity(at_param_ptr->cf_param.cf_format,
                          at_param_ptr->cf_param.cf_parity,
                          &(data_bc_param_ptr->parity));
   }

   /* ur, fnur */
   csmcc_get_ur_by_speed(bearer_speed, 
                         &(data_bc_param_ptr->ur), 
                         &(data_bc_param_ptr->fnur));                       
   /* mt, other mt */
   csmcc_get_mt_by_speed(bearer_speed, 
                         &(data_bc_param_ptr->mt), 
                         &(data_bc_param_ptr->other_mt));
   /* ra, other ra */                      
   csmcc_get_ra_by_speed(bearer_speed, 
                         &(data_bc_param_ptr->ra), 
                         &(data_bc_param_ptr->other_ra));
   
   /* identify UDI and 3.1k audio */
   if(data_bc_param_ptr->itc != CSMCC_OTHER_ITC)
   {
      if(data_bc_param_ptr->mt != CSMCC_MT_NONE)
      {
         data_bc_param_ptr->itc = CSMCC_ITC_3_1_K_AUDIO;
      }
      else
      {
         data_bc_param_ptr->itc = CSMCC_ITC_UDI;
      }
   }

   /* set v.120 relative parameters */
   if(data_bc_param_ptr->other_ra == CSMCC_RA_V120)
   {   
      data_bc_param_ptr->v120_param = at_param_ptr->v120_param;      
   }

   /* set RLP relative parameters */
   if(data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT) 
   {
      data_bc_param_ptr->rlp_param = at_param_ptr->rlp_param;            
      data_bc_param_ptr->data_compression_param = at_param_ptr->data_compression_param;
   }

} /* end of csmcc_fill_data_bc_param */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_data_bc_ie
* DESCRIPTION                                                           
*    This function is used to fill bearer capability IE of data call
*
* CALLS  
*	csmcc_fill_data_bc_ie(csmcc_bc_struct *bc)
*
* PARAMETERS
*	bc	IN	first variable, used as output
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_data_bc_ie(csmcc_bc_struct *bc)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_data_bc_param_struct *data_bc_param_ptr = &(CSMCC_PTR->data_bc_param);
   
   /*******************************************************
    * octet 3
    * if MS support half rate data, RCR = dual/FR preferred
    * else RCR = FR only
    ******************************************************/

   /* bit 7-6 (RCR) */
   if(ACC(TCH_H_MASK) == KAL_TRUE)
   {
      /* Temporary solution: using Bit 8 as HR preferred flag */
      if(ACC((kal_uint8)0x80))
         bc->radio_chanl_req = CSMCC_DUAL_HR_PREF;
      else
         bc->radio_chanl_req = CSMCC_DUAL_FR_PREF;      
   }
   else
   {
      bc->radio_chanl_req = CSMCC_FR_ONLY;
   }

   /* bit 5 (coding stand): common setting */

   /* bit 4 (transfer mode): common setting */
   bc->transfer_mode = CSMCC_CIRCUIT_MODE;

   /* bit 3-1 (itc) */
   bc->itc = data_bc_param_ptr->itc;
   
   /******************************************
    * octet 3a (null)
    *****************************************/
   bc->num_octet3a = 0;

   /****************************************
    * octet 4
    * Transparent:
    *    structure = unstructured 
    *    NIRR = no meaning
    * Non-Transparent:
    *    structure = SDU
    *    NIRR = NIRR requested if ur <= 4.8k
    ****************************************/
   
   bc->octet4_present = KAL_TRUE;

   /* bit 7 (compress): default */
   bc->octet4.compress = CSMCC_NO_DATA_COMPRESS;    

   /* bit 6-5 (structure) */
   if(data_bc_param_ptr->ce == CSMCC_TRANSPARENT)
   {
      bc->octet4.structure = CSMCC_UNSTRUCTURED;
   }
   else
   {
      bc->octet4.structure = CSMCC_SDU_INTEGRITY;
   }
   
   /* bit 4 (dupl. mode) : common setting */
   bc->octet4.duplex_mode = CSMCC_FULL_DUPLEX;

   /* bit 3 (configuration) : common setting */
   bc->octet4.configuration = 0;

   /* bit 2 (NIRR) */
   if(data_bc_param_ptr->ce == CSMCC_TRANSPARENT)
   {
      bc->octet4.NIRR = CSMCC_NIRR_NO_MEANING;
   }
   else if(data_bc_param_ptr->ur <= CSMCC_UR_4_8_K)
   {
      /* On real network, set to NIRR NO MEANING  
         bc->octet4.NIRR = CSMCC_NIRR_REQUESTED; */         
      bc->octet4.NIRR = CSMCC_NIRR_NO_MEANING;
   }
   else
   {
      bc->octet4.NIRR = CSMCC_NIRR_NO_MEANING;
   }

   /* bit 1 (establishment) : common setting */
   bc->octet4.establishment = 0;

   /**********************
    * octet 5
    *********************/
   
   bc->octet5_present = KAL_TRUE;

   /* bit 7-6 (access id): common setting */

   /* bit 5-4 (rate adaption) */
   bc->octet5.rate_adaption = data_bc_param_ptr->ra;

   /* bit 3-1 (signalling access protocol): default */
   bc->octet5.siganaling_access_protocol = CSMCC_SAP_I440_450;
   
   /***************************************************
    * octet 5a
    * exist only in case other ITC and other ra exist
    ***************************************************/

   /* bit 7-6 (other ITC) */
   if(data_bc_param_ptr->itc == CSMCC_OTHER_ITC)
   {
      bc->octet5a_present = KAL_TRUE;
      bc->octet5a.other_ITC = data_bc_param_ptr->other_itc;
   }
   
   /* bit 5-4 (rate adaption) */
   if(data_bc_param_ptr->ra == CSMCC_RA_OTHER)
   {
      bc->octet5a_present = KAL_TRUE;
      bc->octet5a.other_rate_adaption = data_bc_param_ptr->other_ra;
   }
   
   /**************************************************
    * octet 5b
    * exist only in case rate adaption V.120 is used
    *************************************************/

   if(data_bc_param_ptr->ra == CSMCC_RA_OTHER
      && data_bc_param_ptr->other_ra == CSMCC_RA_V120)
   {
      bc->octet5b_present = KAL_TRUE;
      bc->octet5b.hdr_or_no_hdr = data_bc_param_ptr->v120_param.v120_rah;
      bc->octet5b.multi_frame = data_bc_param_ptr->v120_param.v120_mfm;
      bc->octet5b.mode = data_bc_param_ptr->v120_param.v120_mode;
      bc->octet5b.LLI = data_bc_param_ptr->v120_param.v120_llineg;
      bc->octet5b.assignor = data_bc_param_ptr->v120_param.v120_assign;
      bc->octet5b.inband_negotiation = data_bc_param_ptr->v120_param.v120_negtype;
   }
   
   /*************************************************
    * octet 6
    ************************************************/

   bc->octet6_present = KAL_TRUE;

   /* bit 7-6 (layer 1 id): common setting */

   /* bit 5-2 (UIL1P) */
   bc->octet6.user_info_layer1_protocol = 0; 

   /* bit 1 (sync/async) */
   bc->octet6.sync_or_async = data_bc_param_ptr->sync;

   /************************************************
    * octet 6a 
    ************************************************/
   
   bc->octet6a_present = KAL_TRUE;

   /* bit 7 (nsb) */
   bc->octet6a.number_stop_bits = data_bc_param_ptr->nsb;

   /* bit 6 (negotiation): common setting */
   bc->octet6a.negotiation = 0;

   /* bit 5 (ndb) */
   bc->octet6a.number_data_bits = data_bc_param_ptr->ndb;
   
   /* bit 4-1 (user rate) */
   bc->octet6a.user_rate = data_bc_param_ptr->ur;
   
   /*********************************************
    * octet 6b
    * Transparent:
    *   IR = 16k if user rate > 4.8k else IR = 8k
    * Non-Transparent:
    *   IR = 16k
    *********************************************/

   bc->octet6b_present = KAL_TRUE;

   /* bit 7-6 (IR) */
   if(data_bc_param_ptr->ce == CSMCC_TRANSPARENT)
   {
      if(bc->octet6a.user_rate > CSMCC_UR_4_8_K)
      {
         bc->octet6b.intermediate_rate = CSMCC_IR_16_K;
      }
      else
      {
         bc->octet6b.intermediate_rate = CSMCC_IR_8_K;
      }
   }
   else
   {
      bc->octet6b.intermediate_rate = CSMCC_IR_16_K;
   }

   /* bit 5 (NICT): common setting */
   bc->octet6b.NIC_on_TX = CSMCC_NO_NIC_ON_TX;

   /* bit 4 (NICR): common setting */
   bc->octet6b.NIC_on_RX = CSMCC_NO_NIC_ON_RX;

   /* bit 3-1 (parity) */
   bc->octet6b.parity = data_bc_param_ptr->parity;

   /*********************************************
    * octet 6c
    *********************************************/

   bc->octet6c_present = KAL_TRUE;

   /* bit 7-6 (ce) */
   bc->octet6c.connection_element = data_bc_param_ptr->ce;

   /* bit 5-1 (modem type) */
   bc->octet6c.modem_type = data_bc_param_ptr->mt;

   /*********************************************
    * octet 6d, 6e
    * exist only if fnur is used
    * octet 6f 
    * exist only if fnur is used and non-transparent
    *********************************************/
   
   if(data_bc_param_ptr->fnur != CSMCC_FNUR_NM)
   {
      bc->octet6d_present = KAL_TRUE;

      /* octet 6d bit 7-6 (other modem type) */
      bc->octet6d.other_modem_type = data_bc_param_ptr->other_mt;

      /* octet 6d bit 5-1 (fnur) */
      bc->octet6d.fixed_network_user_rate = data_bc_param_ptr->fnur;
      
      bc->octet6e_present = KAL_TRUE;

      /* octet 6e bit 7-4 (acc) */
      bc->octet6e.accptable_channel_coding = GET_ACC;

      /* octet 6e bit 3-1 (maxTCH): default */
//MAUI_01966467
      /*[MAUI_01712442]CC R6 change request*/
      bc->octet6e.max_num_traffic_channels = GET_MAX_TCH;
      
      if(data_bc_param_ptr->ce != CSMCC_TRANSPARENT)
      {
         bc->octet6f_present = KAL_TRUE;

         /* 6f bit 7-5 (UIMI): default */
         bc->octet6f.UIMI = CSMCC_UIMI_NOT_ALLOWED;

	  if(CSMCC_PTR->rat == RAT_GSM)
	  {

         	/* 6f bit 4-1 (waiur) */
         	if(data_bc_param_ptr->fnur == CSMCC_FNUR_9_6_K)
         	{
            		bc->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_9_6_K;
         	}
         	else
         	{
         		bc->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_14_4_K;
         	}

	  }
#ifdef __UMTS_RAT__
	  else /*CSMCC_PTR->rat == RAT_UMTS*/
	  {
         	/* 6f bit 4-1 (waiur) */
         	if(data_bc_param_ptr->fnur == CSMCC_FNUR_28_8_K)
         	{
          		bc->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_28_8_K;
         	}
	  	else if (data_bc_param_ptr->fnur > CSMCC_FNUR_28_8_K)	 
	  	{
			bc->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_57_6_K;
	  	}
         	else
         	{
         		bc->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_14_4_K;
         	}	
	  }
#endif /*__UMTS_RAT__*/

      }
#ifdef __SYNC_HDLC_CSD__	  
      else
      {
          if(CSMCC_PTR->rat == RAT_UMTS)
	  {
              /* [__UMTS_CSD_T__] TS27.001, B.1.3.1
               * ACC, MaxNumTCH, WAIUT, UIMI are not applicable to UTRAN Iu mode
               */

              /* octet6e */
              bc->octet6e_present = KAL_TRUE;

              bc->octet6e.accptable_channel_coding = 0;
              bc->octet6e.max_num_traffic_channels = CSMCC_1_TCH;


              /* octet6f */
              bc->octet6f_present = KAL_TRUE;

              bc->octet6f.UIMI = CSMCC_UIMI_NOT_ALLOWED;
              bc->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_NM;
	   }
      }
#endif /* __SYNC_HDLC_CSD__ */
   }

   /*********************************************
    * octet 7 
    * exist only in case non-transparent
    *********************************************/

   if(data_bc_param_ptr->ce != CSMCC_TRANSPARENT)
   {      
      /* bit 7-6 (layer 2 id): common setting */

      /* bit 5-1 (UIL2P): NAV (outband flow control) */
   }

} /* end of csmcc_fill_data_bc_ie */

#endif /* (__CSD_T__) || (__CSD_NT__) */

#ifdef __TCPIP_OVER_CSD__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_csd_bc_param
* DESCRIPTION                                                           
*    This function is used to fill bearer capability parameters of CSD dial-up call
*
* CALLS  
*	csmcc_fill_csd_bc_param(kal_uint8 csd_ur, kal_uint8 csd_type, kal_uint8 csd_module)
*
* PARAMETERS
*  csd_ur	  IN first variable, used as output
*  csd_type       IN second variable, used as input
*  csd_module     IN third variable, used as input
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
//MAUI_02395019
void csmcc_fill_csd_bc_param(kal_uint8 csd_ur, kal_uint8 csd_type, kal_uint8 csd_module)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_data_bc_param_struct *data_bc_param_ptr;
   data_bc_param_ptr = &(CSMCC_PTR->data_bc_param);

   csmcc_reset_data_bc_param();
   
   /*This function is to set bearer capability according to 
   CSD profile account id. For SATe case, we do not need to
   call this function but filling data param directly*/

   switch(csd_ur)
   {
      case CSD_PROF_RATE_2400:
         data_bc_param_ptr->ur = CSMCC_UR_2_4_K;

#ifdef __UMTS_RAT__
         if(CSMCC_PTR->rat == RAT_UMTS)
         {
            data_bc_param_ptr->fnur = CSMCC_FNUR_9_6_K;
         }
#endif /*__UMTS_RAT__*/

         break;
      case CSD_PROF_RATE_4800:
         data_bc_param_ptr->ur = CSMCC_UR_4_8_K;

#ifdef __UMTS_RAT__
         if(CSMCC_PTR->rat == RAT_UMTS)
         {
            data_bc_param_ptr->fnur = CSMCC_FNUR_9_6_K;
         }
#endif /*__UMTS_RAT__*/

         break;      
      case CSD_PROF_RATE_14400:
         data_bc_param_ptr->ur = CSMCC_UR_9_6_K;
         data_bc_param_ptr->fnur = CSMCC_FNUR_14_4_K;
         break;      
      case CSD_PROF_RATE_9600:  
      case CSD_PROF_RATE_AUTO:    
      default:
         data_bc_param_ptr->ur = CSMCC_UR_9_6_K;

#ifdef __UMTS_RAT__
        if(CSMCC_PTR->rat == RAT_UMTS)
        {
            data_bc_param_ptr->fnur = CSMCC_FNUR_9_6_K;
        }
#endif /*__UMTS_RAT__*/


   }
      
   /* ce */
   if(csd_module == KAL_TRUE)
   {      
      data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
   }
   else
   {
      data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
   }
   
   #ifndef __CSD_NT_2400__
   if(csd_ur == CSD_PROF_RATE_2400)
   {
      /* only support transparent 2.4 k */
      data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
   }
   #endif
      
   /* sync/async */      
   data_bc_param_ptr->sync = CSMCC_ASYNC_DATA;

   /* itc, mt/ra */      
   switch(csd_type)
   {
      case CSMCC_ITC_3_1_K_AUDIO:
         data_bc_param_ptr->itc = CSMCC_ITC_3_1_K_AUDIO;
         switch(csd_ur)
         {
            case CSD_PROF_RATE_2400:
               data_bc_param_ptr->mt = CSMCC_MT_V22_BIS;
               break;
            case CSD_PROF_RATE_4800:
            case CSD_PROF_RATE_9600:
               data_bc_param_ptr->mt = CSMCC_MT_V32;
               break;
            case CSD_PROF_RATE_14400:
               data_bc_param_ptr->mt = CSMCC_MT_V32;
               data_bc_param_ptr->other_mt = CSMCC_MT_V34;
               break;
            case CSD_PROF_RATE_AUTO:
               data_bc_param_ptr->mt = CSMCC_MT_AUTOBAUDING;
               break;
         }
         break;
      case CSMCC_ITC_UDI:
      default:      
         data_bc_param_ptr->itc = CSMCC_ITC_UDI;       
         data_bc_param_ptr->ra = CSMCC_RA_V110;
         break;
   } 
   
   /* char framing */   
   data_bc_param_ptr->nsb = CSMCC_1_STOP_BIT;
   data_bc_param_ptr->ndb = CSMCC_8_DATA_BIT;
   data_bc_param_ptr->parity = CSMCC_PARITY_NONE;

   if(data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT) 
   {
      /* set RLP relative parameters */      
      data_bc_param_ptr->rlp_param.rlp_iws = 61;
      data_bc_param_ptr->rlp_param.rlp_mws = 61;
      data_bc_param_ptr->rlp_param.rlp_T1 = 48; /* use T1 related to 4.8k */
      data_bc_param_ptr->rlp_param.rlp_N2 = 6; 
      data_bc_param_ptr->rlp_param.rlp_ver = 0; /* version 0 */
      data_bc_param_ptr->rlp_param.rlp_T4 = 0; /* useless */      
      /* set data compression relative parameters */      
      data_bc_param_ptr->data_compression_param.dir = CSMCC_NO_COMPRESSION;
      data_bc_param_ptr->data_compression_param.negotiation = CSMCC_NO_DISC_IF_NO_NEGOTIATION;
      data_bc_param_ptr->data_compression_param.max_dict = 512;
      data_bc_param_ptr->data_compression_param.max_string = 6;      
   }

} /* end of csmcc_fill_csd_bc_param */

#endif /* __TCPIP_OVER_CSD__ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_bc
* DESCRIPTION                                                           
*    This function is used to fill bearer capability parameters associated 
*    with a call.
*
* CALLS  
*	csmcc_fill_bc(kal_uint8 call_id, kal_uint8 src_id, csmcc_call_type_enum call_type, csmcc_csd_prof_rate_enum profile_type) 
*
* PARAMETERS
*	call_id      IN	first variable, used as input
*	src_id       IN second variable, used as input
*       call_type    IN third variable, used as input
*       profile_type  IN fourth variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_fill_bc(kal_uint8 call_id, kal_uint8 src_id, csmcc_call_type_enum call_type, csmcc_csd_prof_rate_enum profile_type) 
{
   /* except Remote MMI, call mode must be single mode */
   CSMCC_PTR_G_TO_L
   CALL_DATA(call_id, call_mode) = 
      (src_id < RMMI_SRC)?CSMCC_SINGLE_MODE:CSMCC_PTR->at_param.call_mode;

   /* fill call type, the initial call type must be the first */
   CALL_DATA(call_id, cur_call_type) = 0;
   
   /*[MAUI_00740014]Video Call Fallback: If bearer_speed from AT=CSMCC_64000_BPS_MULTIMEDIA(VT), call_type from AT is still DATA_CALL,  */
#if defined(__VIDEO_CALL_SUPPORT__) && defined(__REL5__)
   if((call_type == CSMCC_DATA_CALL) 
   	&& (CSMCC_PTR->at_param.bearer_service_type.bearer_speed) == CSMCC_64000_BPS_MULTIMEDIA)
   {
      kal_brief_trace(TRACE_GROUP_1, CSMCC_VT_CALL_FROM_AT);
      call_type = CSMCC_VIDEO_CALL;
   }
#endif /*(__VIDEO_CALL_SUPPORT__) && (__REL5__)*/
   CALL_DATA(call_id, bc[0]) = call_type;
   
   kal_brief_trace(TRACE_GROUP_2,CSMCC_CALL_TYPE_AND_MODE, call_type, CALL_DATA(call_id, call_mode));
   
//MAUI_01966467
/*[MAUI_01712442]CC R6 change request*/
#ifdef __REL6__
 #if defined(__VIDEO_CALL_SUPPORT__)
   /* Any service which is only supported in UMTS shall
    * flag CSMCC_PTR->umts_only_service
    */
   if(call_type == CSMCC_VIDEO_CALL)
   {
       CSMCC_PTR->umts_only_service = KAL_TRUE;
   }
 #endif /*__3G_VIDEO_CALL*/
#endif  /* (__REL6__)*/ 
   
   /* the first service */
   switch(call_type)
   {
      case CSMCC_VOICE_CALL:
         CSMCC_PTR->nego_bc.bc1.itc = CSMCC_ITC_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         break;
      case CSMCC_AUX_VOICE_CALL:
         CSMCC_PTR->nego_bc.bc1.itc = CSMCC_ITC_AUX_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         break;
#ifdef __CSD_FAX__
      case CSMCC_FAX_CALL:
         csmcc_fill_fax_bc_param(&(CSMCC_PTR->data_bc_param));
         csmcc_fill_fax_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         break;
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__)
      case CSMCC_DATA_CALL:
         csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_FALSE);
         csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         break;
#ifdef __TCPIP_OVER_CSD__
      case CSMCC_CSD_CALL:
         /* for CSD call, reset call_mode=single mode automatically. refer ref. phone. */
         CSMCC_PTR->at_param.call_mode = CSMCC_SINGLE_MODE;
         CALL_DATA(call_id, call_mode) = CSMCC_SINGLE_MODE;         
         /* Add profile type for__SIM_PROVISIONING_SUPPORT__*/
         //MAUI_02395019
         //csmcc_fill_csd_bc_param(&(CSMCC_PTR->data_bc_param), csd_prof_id, profile_type);
         csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         //CSMCC_PTR->csd_prof_id = csd_prof_id;
         CSMCC_PTR->prof_type = profile_type;
         break;
#endif /* ~ __TCPIP_OVER_CSD__ */
#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
      case CSMCC_SAT_DATA_CALL:            
         csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_TRUE);
         csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
	 CSMCC_PTR->prof_type = CSMCC_SAT_PROF;//__DTCNT_SIM_PROFILES_SUPPORT__
         return CSMCC_NO_ERROR;
#endif  /* ~ __SATCE__ */
#endif  /* ~ __CSD_T__ || __CSD_NT__ */
#ifdef __VIDEO_CALL_SUPPORT__
      case CSMCC_VIDEO_CALL:            
         csmcc_fill_video_bc_param(&(CSMCC_PTR->data_bc_param));
         csmcc_fill_video_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         break;
#endif /*__VIDEO_CALL_SUPPORT__*/
      default:
         /* invalid value range */
         return CSMCC_ERROR;
   } /* swithc(bc[0]) */
   
   CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
   
   switch(CALL_DATA(call_id, call_mode))
   {
      case CSMCC_SINGLE_MODE:

         break;
#ifdef __CSD_FAX__
      case CSMCC_ALT_VOICE_FAX:
         if((CALL_DATA(call_id, bc[0]) == CSMCC_VOICE_CALL)
            || (CALL_DATA(call_id, bc[0]) == CSMCC_AUX_VOICE_CALL))
         {
            CALL_DATA(call_id, bc[1]) = CSMCC_FAX_CALL;
            csmcc_fill_fax_bc_param(&(CSMCC_PTR->data_bc_param));
            csmcc_fill_fax_bc_ie(&(CSMCC_PTR->nego_bc.bc2));
         }
         else if(CALL_DATA(call_id, bc[0]) == CSMCC_FAX_CALL)
         {
         #ifdef __CPHS__
            CALL_DATA(call_id, bc[1])  = ( CSMCC_PTR->als.line_id == CSMCC_ALS_LINE2 ) ? 
                               CSMCC_AUX_VOICE_CALL : CSMCC_VOICE_CALL;
         #else
            CALL_DATA(call_id, bc[1]) = CSMCC_VOICE_CALL;
         #endif
           
            csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc2));
         }
         else
         {

            /* call type is not voice or fax, not allowed to setup the call. */
            return CSMCC_ERROR;
         }
         
         CSMCC_PTR->nego_bc.bc2_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.repeat_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = CSMCC_ALTERNATE_MODE;
         break;
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__VIDEO_CALL_SUPPORT__)
      case CSMCC_ALT_VOICE_DATA:
         if((CALL_DATA(call_id, bc[0]) == CSMCC_VOICE_CALL)
            || (CALL_DATA(call_id, bc[0]) == CSMCC_AUX_VOICE_CALL))
         {
             /*[MAUI_00740014]Video Call Fallback*/
	     #if defined(__VIDEO_CALL_SUPPORT__) && defined(__REL5__)
	     if(CSMCC_PTR->at_param.bearer_service_type.bearer_speed == CSMCC_64000_BPS_MULTIMEDIA)
	     {
	         CALL_DATA(call_id, bc[1]) = CSMCC_VIDEO_CALL;
		 csmcc_fill_video_bc_param(&(CSMCC_PTR->data_bc_param));
		 csmcc_fill_video_bc_ie(&(CSMCC_PTR->nego_bc.bc2)); 
	     }
	     else
	    #endif /*(__VIDEO_CALL_SUPPORT__) && (__REL5__)*/
	    {
	    #if defined(__CSD_T__) || defined(__CSD_NT__)
                CALL_DATA(call_id, bc[1]) = CSMCC_DATA_CALL;
                csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_FALSE);
                csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc2));            
	    #endif /*(__CSD_T__) && (__CSD_NT__)*/	
	    }
         }
   	 #if defined(__CSD_T__) || defined(__CSD_NT__)
         else if(CALL_DATA(call_id, bc[0]) == CSMCC_DATA_CALL)
         {
         #ifdef __CPHS__
            CALL_DATA(call_id, bc[1])  = ( CSMCC_PTR->als.line_id == CSMCC_ALS_LINE2 ) ? 
                               CSMCC_AUX_VOICE_CALL : CSMCC_VOICE_CALL;
         #else
            CALL_DATA(call_id, bc[1]) = CSMCC_VOICE_CALL;
         #endif
           
            csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc2));
         }
	 #endif /*(__CSD_T__) && (__CSD_NT__)*/
          /*[MAUI_00740014]Video Call Fallback*/
	 #if defined(__VIDEO_CALL_SUPPORT__) && defined(__REL5__)
	 else if(CALL_DATA(call_id, bc[0]) == CSMCC_VIDEO_CALL)
	 {
	 #ifdef __CPHS__
             CALL_DATA(call_id, bc[1])  = ( CSMCC_PTR->als.line_id == CSMCC_ALS_LINE2 ) ? 
                               CSMCC_AUX_VOICE_CALL : CSMCC_VOICE_CALL;
         #else
             CALL_DATA(call_id, bc[1]) = CSMCC_VOICE_CALL;
         #endif           
	     csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc2));
	 }
	 #endif /*(__VIDEO_CALL_SUPPORT__) && (__REL5__)*/
         else
         {
            /* call type is not voice or data/video, not allowed to setup the call. */
            return CSMCC_ERROR;
         }

         CSMCC_PTR->nego_bc.bc2_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.repeat_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = CSMCC_ALTERNATE_MODE;
         /*[MAUI_00740014] TS24.008 5.3.6.2.1, the associated Repeat Indicator shall be set to "support of service change and fallback"*/
	 #if defined(__VIDEO_CALL_SUPPORT__) && defined(__REL5__)
	 if(CALL_DATA(call_id, bc[0]) == CSMCC_VIDEO_CALL 
	   || CALL_DATA(call_id, bc[1]) == CSMCC_VIDEO_CALL)
         {
	     CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = CSMCC_SERVICE_CHANGE_AND_FALLBACK;
         }
	 #endif /*(__VIDEO_CALL_SUPPORT__) && (__REL5__)*/

         break;

#if defined(__CSD_T__) || defined(__CSD_NT__)
      case CSMCC_VOICE_FOLLOW_DATA:
         if((CALL_DATA(call_id, bc[0]) != CSMCC_VOICE_CALL)
            && (CALL_DATA(call_id, bc[0]) != CSMCC_AUX_VOICE_CALL))
         {
            /* The 1st bc only can be voice call. */
            return CSMCC_ERROR;
         }
         
         CALL_DATA(call_id, bc[1]) = CSMCC_DATA_CALL;
         csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_FALSE);
         csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc2));
         CSMCC_PTR->nego_bc.bc2_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.repeat_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = CSMCC_SEQUENTIAL_MODE;
         break;
		 
#endif /*(__CSD_T__) && (__CSD_NT__)*/		 
#endif /*(__CSD_T__) || (__CSD_NT__) || (__VIDEO_CALL_SUPPORT__)*/        

      default:
         /* invalid value range */
         return CSMCC_ERROR;

   } /* switch(cur_call_type) */

   return CSMCC_NO_ERROR;

} /* end of csmcc_fill_bc */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_llc
* DESCRIPTION                                                           
*    This function is used to fill low layer compatibility parameters associated 
*    with a call.
*
* CALLS  
*	csmcc_fill_llc(csmcc_llc_struct *llc_ptr, csmcc_bc_struct *app_bc_ptr)
*
* PARAMETERS
*	llc_ptr        OUT first variable, used as output
*	app_bc_ptr     IN second variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_llc(csmcc_llc_struct *llc_ptr,csmcc_bc_struct *app_bc_ptr)
{
   CSMCC_PTR_G_TO_L
   /* octet 3 */
   llc_ptr->information_transfer_capability = 0x08; /* default: UDI */
   
   /* octet 4 */
   llc_ptr->transfer_mode = 0; /* common setting: circuit mode */
   llc_ptr->information_transfer_rate = 0x10; /* default: 64 kbit/s */
   
   /* octet 5 */
   llc_ptr->octet5_present = KAL_TRUE;
   //llc_ptr->octet5.user_info_layer1_protocol = 0x01; /* default: V.110 */
   
   switch(CSMCC_PTR->at_param.bearer_service_type.bearer_speed)
   {
   	case CSMCC_2400_BPS_V120:
   	case CSMCC_4800_BPS_V120:
   	case CSMCC_9600_BPS_V120:
   	case CSMCC_14400_BPS_V120:
   	case CSMCC_19200_BPS_V120:
   	case CSMCC_28800_BPS_V120:
   	case CSMCC_38400_BPS_V120:
   	case CSMCC_48000_BPS_V120:
   	case CSMCC_56000_BPS_V120:	
   		llc_ptr->octet5.user_info_layer1_protocol = 0x08; /* default: V.120 */
		break;
   	default:
		llc_ptr->octet5.user_info_layer1_protocol = 0x01; /* default: V.110 */   	
		break;
   }
   
   /* octet 5a */
   llc_ptr->octet5a_present = KAL_TRUE;   
   llc_ptr->octet5a.synchronous_flag = app_bc_ptr->octet6.sync_or_async;
   llc_ptr->octet5a.negotiation = 0; /* common setting: In-band negotiation not possible */
      
   switch(CSMCC_PTR->at_param.bearer_service_type.bearer_speed)
   {
      case CSMCC_2400_BPS_V120:
      case CSMCC_2400_BPS_V110:	  	
         llc_ptr->octet5a.user_rate = CSMCC_LLC_UR_2400_BPS;
         break;
      case CSMCC_4800_BPS_V120:
      case CSMCC_4800_BPS_V110:	  	
         llc_ptr->octet5a.user_rate = CSMCC_LLC_UR_4800_BPS;
         break;      
      case CSMCC_9600_BPS_V120:
      case CSMCC_9600_BPS_V110:	  	
         llc_ptr->octet5a.user_rate = CSMCC_LLC_UR_9600_BPS;
         break;      
	case CSMCC_14400_BPS_V120:
	case CSMCC_14400_BPS_V110:	
	  llc_ptr->octet5a.user_rate = CSMCC_LLC_UR_14400_BPS;
	  break;
	case CSMCC_19200_BPS_V120:
	case CSMCC_19200_BPS_V110:	
	  llc_ptr->octet5a.user_rate = CSMCC_LLC_UR_19200_BPS;
	  break;		
	case CSMCC_28800_BPS_V120:
	case CSMCC_28800_BPS_V110:	
	  llc_ptr->octet5a.user_rate = 0x13;	  
	  break;
	case CSMCC_38400_BPS_V120:
	case CSMCC_38400_BPS_V110:	
	  llc_ptr->octet5a.user_rate = 0x0d;		
	  break;
	case CSMCC_48000_BPS_V120:
	  llc_ptr->octet5a.user_rate = CSMCC_LLC_UR_48000_BPS;		
	  break;			
	case CSMCC_56000_BPS_V120:
#ifdef __SYNC_HDLC_CSD__
	case CSMCC_56000_BPS_TRANSPARENT:
        case CSMCC_64000_BPS_TRANSPARENT:
#endif /* __SYNC_HDLC_CSD__ */
	  llc_ptr->octet5a.user_rate = CSMCC_LLC_UR_56000_BPS;		
	  break;	
	default:
	  llc_ptr->octet5a.user_rate = CSMCC_LLC_UR_9600_BPS;		
	  break;			  
   }
      
   if(llc_ptr->octet5.user_info_layer1_protocol == 0x01)
   {
   	llc_ptr->octet5b1_present = KAL_TRUE;		

   	switch(CSMCC_PTR->at_param.bearer_service_type.bearer_speed)
   	{
      		case CSMCC_14400_BPS_V110 :
      		case CSMCC_19200_BPS_V110 :
         		llc_ptr->octet5b1.intermediate_rate = 0x03;
         		break;         
      		case CSMCC_28800_BPS_V110:
      		case CSMCC_38400_BPS_V110:
	  		llc_ptr->octet5b1.intermediate_rate = 0x00;
         		break;	
      		default:
         		llc_ptr->octet5b1.intermediate_rate = 0x02;
         		break;         
   	}   
   	llc_ptr->octet5b1.NIC_on_Tx = 0; /* common setting: not required */
   	llc_ptr->octet5b1.NIC_on_Rx = 0; /* common setting: not required */
   	llc_ptr->octet5b1.flow_control_on_Tx = 0; /* common setting: not acceptable */
   	llc_ptr->octet5b1.flow_control_on_Rx = 0; /* common setting: not acceptable */  
   }
   else
   {
   	llc_ptr->octet5b2_present = KAL_TRUE;	
   	llc_ptr->octet5b2.header_flag = 0x01;
   	llc_ptr->octet5b2.multi_frame = 0x01;
   	llc_ptr->octet5b2.mode_of_layer1= 0x01;
   	llc_ptr->octet5b2.LLI_negotiation= 0x00;
   	llc_ptr->octet5b2.assignor = 0x00;
   	llc_ptr->octet5b2.inband_negotiation= 0x01;
   }
   
   /* octet 5c */
   llc_ptr->octet5c_present = KAL_TRUE;
   llc_ptr->octet5c.number_of_stop_bits = 0x01; /* default: 1 stop bit */
   llc_ptr->octet5c.number_of_data_bits = 0x03; /* default: 8 data bits */
   llc_ptr->octet5c.parity = 0x03; /* default: no parity */
             
}/* end of csmcc_fill_llc */

#ifdef __VIDEO_CALL_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_video_call_llc
* DESCRIPTION                                                           
*    This function is used to fill low layer compatibility parameters associated 
*    with a video call.
*
* CALLS  
*	csmcc_fill_video_call_llc(csmcc_llc_struct *llc_ptr, csmcc_bc_struct *app_bc_ptr)
*
* PARAMETERS
*	llc_ptr        OUT first variable, used as output
*	app_bc_ptr     IN second variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_video_call_llc(csmcc_llc_struct *llc_ptr,csmcc_bc_struct *app_bc_ptr)
{
   /* octet 3 */
   llc_ptr->information_transfer_capability = 0x08; /* default: UDI */
   
   /* octet 4 */
   llc_ptr->transfer_mode = 0; /* common setting: circuit mode */
   llc_ptr->information_transfer_rate = 0x10; /* default: 64 kbit/s */
   
   /* octet 5 */
   llc_ptr->octet5_present = KAL_TRUE;
   llc_ptr->octet5.user_info_layer1_protocol = 0x06; /*H.223/H.245 refered by TS26.112*/                 
}   /* end of csmcc_fill_video_call_llc */
#endif /*__VIDEO_CALL_SUPPORT__*/

/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_bc_compat
* DESCRIPTION                                                           
*    This function is used to check if two bearer capability is compatible
*
* CALLS  
*	csmcc_is_bc_compat(csmcc_bc_struct *bc1,
*                          csmcc_bc_struct *bc2)
*
* PARAMETERS
*	*bc1	IN/OUT	first variable, used as input
*	*bc2	IN	second variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_bc_compat(csmcc_bc_struct *bc1,
                            csmcc_bc_struct *bc2)
{
   if(bc1->itc != bc2->itc)
   {
      return KAL_FALSE;
   }
   
   if(bc1->itc == CSMCC_ITC_SPEECH
      || bc1->itc == CSMCC_ITC_AUX_SPEECH)
   {
      /* for speech call*/
      return KAL_TRUE;
   }
   
   /* (octet4) check compress */
   if(bc1->octet4_present != bc2->octet4_present)
   {
      return KAL_FALSE;
   }
   else if(bc1->octet4_present == KAL_TRUE)
   {
      if(bc1->octet4.compress != bc2->octet4.compress)
      {
         return KAL_FALSE;
      }
   }
   
   /* (octet5) check rate adaptation, SAP */
   if(bc1->octet5_present != bc2->octet5_present)
   {
      return KAL_FALSE;
   }   
   else if(bc1->octet5_present == KAL_TRUE)
   {
      if(bc1->octet5.rate_adaption != bc2->octet5.rate_adaption
         || bc1->octet5.siganaling_access_protocol != bc2->octet5.siganaling_access_protocol)
      {
         return KAL_FALSE;
      }
   }
   
   /* (octet5a) check other ITC, other rate adaptation */
   if(bc1->octet5a_present != bc2->octet5a_present)
   {
      return KAL_FALSE;
   }
   else if(bc1->octet5a_present == KAL_TRUE)
   {
      if(bc1->octet5a.other_ITC != bc2->octet5a.other_ITC
         || bc1->octet5a.other_rate_adaption != bc2->octet5a.other_rate_adaption)
      {
         return KAL_FALSE;
      }      
   }
   
   /* (octet6) check sync/async */
   if(bc1->octet6_present != bc2->octet6_present)
   {
      return KAL_FALSE;
   }
   else if(bc1->octet6_present == KAL_TRUE)
   {
      if(bc1->octet6.sync_or_async != bc2->octet6.sync_or_async)
      {
         return KAL_FALSE;
      }
   }
   
   /* (octet6a) check nsb, ndb, user rate */
   if(bc1->octet6a_present != bc2->octet6a_present)
   {
      return KAL_FALSE;
   }
   else if(bc1->octet6a_present == KAL_TRUE)
   {
      if(bc1->octet6a.number_stop_bits != bc2->octet6a.number_stop_bits
         || bc1->octet6a.number_data_bits != bc2->octet6a.number_data_bits
         || bc1->octet6a.user_rate != bc2->octet6a.user_rate)
      {
         return KAL_FALSE;
      }
   }
   
   /* (octet6b) update intermediate rate, check parity */
   if(bc1->octet6b_present != bc2->octet6b_present)
   {
      return KAL_FALSE;
   }
   else if(bc1->octet6b_present == KAL_TRUE)
   {   
      if(bc1->octet6b.parity != bc2->octet6b.parity)
      {
         return KAL_FALSE;
      }
   }

   /* (octet6c) check connection element, modem type */
   if(bc1->octet6c_present != bc2->octet6c_present)
   {
      return KAL_FALSE;
   }
   else if(bc1->octet6c_present == KAL_TRUE)
   {
      if((bc1->octet6c.connection_element == CSMCC_TRANSPARENT 
         && bc2->octet6c.connection_element == CSMCC_NON_TRANSPARENT)
         || (bc1->octet6c.connection_element == CSMCC_NON_TRANSPARENT
         && bc2->octet6c.connection_element == CSMCC_TRANSPARENT))
      {
         return KAL_FALSE;
      }
   
      if(bc1->octet6c.modem_type != bc2->octet6c.modem_type
         && bc1->octet6c.modem_type != CSMCC_MT_AUTOBAUDING
         && bc2->octet6c.modem_type != CSMCC_MT_AUTOBAUDING)
      {
         return KAL_FALSE;
      }
   }

   if(bc1->octet7_present != bc2->octet7_present)
   {
      return KAL_FALSE;
   }      
   else if(bc1->octet7_present == KAL_TRUE)
   {
      if(bc1->octet7.user_info_layer2_protocol != bc2->octet7.user_info_layer2_protocol)
      {
         return KAL_FALSE;
      }
   }
   
   return KAL_TRUE;
              
} /* end of csmcc_is_bc_compat */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_update_bc
* DESCRIPTION                                                           
*    This function is used to update bc according to negotiated bearer 
*    capability by network in case of MO call.
*
* CALLS  
*	csmcc_update_bc(csmcc_bc_struct *src_bc,
*                       csmcc_bc_struct *dest_bc
*                       csmcc_data_bc_param_struct *data_bc_param_ptr)
*
* PARAMETERS
*	*src_bc			IN	first variable, used as input
*	*dest_bc		OUT	second variable, used as output
*	*data_bc_param_ptr	OUT	third variable, used as output
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_update_bc(csmcc_bc_struct *src_bc,
                     csmcc_bc_struct *dest_bc,
                     csmcc_data_bc_param_struct *data_bc_param_ptr)
{
   if(dest_bc->itc == CSMCC_ITC_SPEECH)
   {
      /* for speech call */
      return;
   }

   /* update NIRR */
   dest_bc->octet4.NIRR = src_bc->octet4.NIRR;
   
   /* update intermediate rate */
   dest_bc->octet6b.intermediate_rate = src_bc->octet6b.intermediate_rate;
   
   dest_bc->octet6c.connection_element = src_bc->octet6c.connection_element;
   
   data_bc_param_ptr->ce = (csmcc_bearer_ce_enum)(src_bc->octet6c.connection_element);
   
   dest_bc->octet4.structure = src_bc->octet4.structure;
   
   dest_bc->octet6c.modem_type = src_bc->octet6c.modem_type;
   
   data_bc_param_ptr->mt = (csmcc_modem_type_enum)(src_bc->octet6c.modem_type);

   if(data_bc_param_ptr->ce == CSMCC_TRANSPARENT)
   {
      dest_bc->octet6f_present = KAL_FALSE;
      dest_bc->octet7_present = KAL_FALSE;
   }
   
   if(src_bc->octet6d_present == KAL_FALSE) 
   {
      /* network doesn't support TCH/F14.4 */
      data_bc_param_ptr->fnur = CSMCC_FNUR_NM;
      data_bc_param_ptr->other_mt = CSMCC_OTHER_MT_NONE;
      dest_bc->octet6d_present = KAL_FALSE;
      dest_bc->octet6e_present = KAL_FALSE;
      dest_bc->octet6f_present = KAL_FALSE;
   }
   
} /* end of csmcc_update_bc */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_mo_call_compat
* DESCRIPTION                                                           
*    This function is used to check if negotiated bearer capabilty by network
*    in CALL PROCEEDING is compatible with MS.
*
* CALLS  
*	csmcc_is_mo_call_compat(mncc_call_proc_ind_struct* call_proc_ind_ptr)
*
* PARAMETERS
*	call_proc_ind_ptr	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_mo_call_compat(mncc_call_proc_ind_struct* call_proc_ind_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_nego_bc_struct *nego_bc_ptr = &(CSMCC_PTR->nego_bc);
   csmcc_bc_struct bc1;
   csmcc_bc_struct bc2;
   
   if(GET_CALL_TYPE(call_proc_ind_ptr->call_id) == CSMCC_VOICE_CALL
      || GET_CALL_TYPE(call_proc_ind_ptr->call_id) == CSMCC_AUX_VOICE_CALL)
   {
      /* speech call */
      return KAL_TRUE;
   }

   if(CSMCC_PTR->rat == RAT_GSM)
   {

        if(call_proc_ind_ptr->bc1P == KAL_FALSE)
        {
           /* 
            * no bearer capability IE contained in CALL PROCEEDING. 
            * In this case, discard the TCH/F14.4 relative bearer 
            * capability parameters. Refer 3GPP TS 27.007 clause 8.3.3.2
            */
            CSMCC_PTR->data_bc_param.fnur = CSMCC_FNUR_NM;
            CSMCC_PTR->data_bc_param.other_mt = CSMCC_OTHER_MT_NONE;
            nego_bc_ptr->bc1.octet6d_present = KAL_FALSE;
            nego_bc_ptr->bc1.octet6e_present = KAL_FALSE;
            nego_bc_ptr->bc1.octet6f_present = KAL_FALSE;
            nego_bc_ptr->bc2.octet6d_present = KAL_FALSE;
            nego_bc_ptr->bc2.octet6e_present = KAL_FALSE;
            nego_bc_ptr->bc2.octet6f_present = KAL_FALSE;

            return KAL_TRUE;
        }

   }
#ifdef __UMTS_RAT__
   else if(CSMCC_PTR->rat == RAT_UMTS)
   	    return KAL_TRUE;
#endif /*__UMTS_RAT__*/

   
   if(nego_bc_ptr->repeat_present == KAL_TRUE)
   {
      if(call_proc_ind_ptr->bc_repeat_indP == KAL_TRUE)
      {
         /* bc1 and bc2 of NW must be compatible with MS's */

         csmcc_form_app_bc(&bc1, &(call_proc_ind_ptr->bc1));

         if(csmcc_is_bc_compat(&(nego_bc_ptr->bc1), 
                               &bc1) == KAL_FALSE)

         {
            return KAL_FALSE;
         }

         csmcc_update_bc(&bc1, 
                         &(nego_bc_ptr->bc1),
                         &(CSMCC_PTR->data_bc_param));

         if(call_proc_ind_ptr->bc2P == KAL_FALSE)
         {
            return KAL_FALSE;
         }

         csmcc_form_app_bc(&bc2, &(call_proc_ind_ptr->bc2));
         
         if(csmcc_is_bc_compat(&(nego_bc_ptr->bc2), 
                               &bc2) == KAL_FALSE)
         {
            return KAL_FALSE;
         }

         csmcc_update_bc(&bc2, 
                         &(nego_bc_ptr->bc2),
                         &(CSMCC_PTR->data_bc_param));
         
         return KAL_TRUE;
                                           
      }
      else
      {
         
         csmcc_form_app_bc(&bc1, &(call_proc_ind_ptr->bc1));

         /* bc1 of NW must be compatible with one of MS's */
         if(csmcc_is_bc_compat(&(nego_bc_ptr->bc1), 
                               &bc1) == KAL_TRUE)
         {

            csmcc_update_bc(&bc1, 
                            &(nego_bc_ptr->bc1),
                            &(CSMCC_PTR->data_bc_param));

            nego_bc_ptr->bc2_present = KAL_FALSE;
            
            CALL_DATA(call_proc_ind_ptr->call_id,bc[1]) = \
                          CSMCC_INVALID_CALL_TYPE;
                            
            CALL_DATA(call_proc_ind_ptr->call_id, call_mode) = CSMCC_SINGLE_MODE;
                            
            return KAL_TRUE;
         }
        
         if(csmcc_is_bc_compat(&(nego_bc_ptr->bc2), 
                               &bc1) == KAL_TRUE)
         {

            csmcc_update_bc(&bc1, 
                            &(nego_bc_ptr->bc2),
                            &(CSMCC_PTR->data_bc_param));

            nego_bc_ptr->bc1 = nego_bc_ptr->bc2;
                        
            CALL_DATA(call_proc_ind_ptr->call_id,bc[0]) = \
               CALL_DATA(call_proc_ind_ptr->call_id,bc[1]);

            nego_bc_ptr->bc2_present = KAL_FALSE;

            CALL_DATA(call_proc_ind_ptr->call_id,bc[1]) = \
                          CSMCC_INVALID_CALL_TYPE;
            
            CALL_DATA(call_proc_ind_ptr->call_id, call_mode) = CSMCC_SINGLE_MODE;
            
            return KAL_TRUE;
         }
         
         return KAL_FALSE;         
      }

   } /* if nego_bc_ptr->repeat_present */
   else
   {
      if(call_proc_ind_ptr->bc_repeat_indP == KAL_TRUE)
      {
         /* MS only request single service */
         return KAL_FALSE;
      }
      else
      {
         
         csmcc_form_app_bc(&bc1, &(call_proc_ind_ptr->bc1));

         /* bc1 of NW must be compatible with MS's */
         if(csmcc_is_bc_compat(&(nego_bc_ptr->bc1), 
                               &bc1) == KAL_TRUE)
         {
            csmcc_update_bc(&bc1, 
                            &(nego_bc_ptr->bc1),
                            &(CSMCC_PTR->data_bc_param));

            return KAL_TRUE;
         }
         
         return KAL_FALSE;
      }
   	
   } /* else nego_bc_ptr->repeat_present */
   
   return KAL_FALSE;

} /* end of csmcc_is_mo_call_compat */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_sns_bc
* DESCRIPTION                                                           
*    This function is used to prepare bearer capability in case of single
*    numbering scheme.
* CALLS  
*	csmcc_fill_sns_bc(kal_uint8 call_id,
*                                  csmcc_sns_mode_enum sns_mode)
*
* PARAMETERS
*	call_id		INPUT	first variable, used as input	
*	sns_mode	INPUT	second variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_sns_bc(kal_uint8 call_id, csmcc_sns_mode_enum sns_mode)
{
      
   CSMCC_PTR_G_TO_L
   switch(sns_mode)
   {
      case CSMCC_SNS_VOICE:
         CALL_DATA(call_id, bc[0]) = CSMCC_VOICE_CALL;
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc1.itc = CSMCC_ITC_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         CALL_DATA(call_id, call_mode) = CSMCC_SINGLE_MODE;
         break;
#ifdef __CSD_FAX__         
      case CSMCC_SNS_ALT_VOICE_FAX_VOICE_FIRST:
         CALL_DATA(call_id, bc[0]) = CSMCC_VOICE_CALL;
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc1.itc = CSMCC_ITC_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         CALL_DATA(call_id, bc[1]) = CSMCC_FAX_CALL;
         csmcc_fill_fax_bc_param(&(CSMCC_PTR->data_bc_param));
         CSMCC_PTR->nego_bc.bc2_present = KAL_TRUE;
         csmcc_fill_fax_bc_ie(&(CSMCC_PTR->nego_bc.bc2));
         
         CSMCC_PTR->nego_bc.repeat_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = CSMCC_ALTERNATE_MODE;
         
         CALL_DATA(call_id, call_mode) = CSMCC_ALT_VOICE_FAX;
         
         break;
         
      case CSMCC_SNS_FAX:
         CALL_DATA(call_id, bc[0]) = CSMCC_FAX_CALL;
         csmcc_fill_fax_bc_param(&(CSMCC_PTR->data_bc_param));
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         csmcc_fill_fax_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         CALL_DATA(call_id, call_mode) = CSMCC_SINGLE_MODE;
         break;
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__)         
      case CSMCC_SNS_ALT_VOICE_DATA_VOICE_FIRST:
         CALL_DATA(call_id, bc[0]) = CSMCC_VOICE_CALL;
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc1.itc = CSMCC_ITC_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         CALL_DATA(call_id, bc[1]) = CSMCC_DATA_CALL;
         csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_FALSE);
         CSMCC_PTR->nego_bc.bc2_present = KAL_TRUE;
         csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc2));

         CSMCC_PTR->nego_bc.repeat_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = CSMCC_ALTERNATE_MODE;
         
         CALL_DATA(call_id, call_mode) = CSMCC_ALT_VOICE_DATA;
         
         break;
      
      case CSMCC_SNS_DATA:
         CALL_DATA(call_id, bc[0]) = CSMCC_DATA_CALL;
         csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_FALSE);
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         
         CALL_DATA(call_id, call_mode) = CSMCC_SINGLE_MODE;
         break;
#endif
#ifdef __CSD_FAX__
      case CSMCC_SNS_ALT_VOICE_FAX_FAX_FIRST:
         CALL_DATA(call_id, bc[0]) = CSMCC_FAX_CALL;
         csmcc_fill_fax_bc_param(&(CSMCC_PTR->data_bc_param));
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         csmcc_fill_fax_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         CALL_DATA(call_id, bc[1]) = CSMCC_VOICE_CALL;
         CSMCC_PTR->nego_bc.bc2_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc2.itc = CSMCC_ITC_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc2));
         
         CSMCC_PTR->nego_bc.repeat_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = CSMCC_ALTERNATE_MODE;     
                                   
         CALL_DATA(call_id, call_mode) = CSMCC_ALT_VOICE_FAX;
         
         break;      
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__)  
      case CSMCC_SNS_ALT_VOICE_DATA_DATA_FIRST:
         CALL_DATA(call_id, bc[0]) = CSMCC_DATA_CALL;
         csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_FALSE);
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         CALL_DATA(call_id, bc[1]) = CSMCC_VOICE_CALL;
         CSMCC_PTR->nego_bc.bc2_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc2.itc = CSMCC_ITC_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc2));

         CSMCC_PTR->nego_bc.repeat_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = CSMCC_ALTERNATE_MODE;     
                                   
         CALL_DATA(call_id, call_mode) = CSMCC_ALT_VOICE_DATA;
         
         break;
      
      case CSMCC_SNS_VOICE_FOLLOW_DATA:
         CALL_DATA(call_id, bc[0]) = CSMCC_VOICE_CALL;
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc1.itc = CSMCC_ITC_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         CALL_DATA(call_id, bc[1]) = CSMCC_DATA_CALL;
         csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_FALSE);
         CSMCC_PTR->nego_bc.bc2_present = KAL_TRUE;
         csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc2));

         CSMCC_PTR->nego_bc.repeat_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = CSMCC_SEQUENTIAL_MODE;         
         
         CALL_DATA(call_id, call_mode) = CSMCC_VOICE_FOLLOW_DATA;
         
         break;
#endif
      
      default:
         /* invalid value range */
         break;
   } /* switch(sns_mode) */
   
} /* end of csmcc_fill_sns_bc */

#if defined(__CSD_T__) || defined(__CSD_NT__)
/*************************************************************************
* FUNCTION                                                            
*	csmcc_nego_data_bc
* DESCRIPTION                                                           
*    This function is used to negotiate bearer capability of incoming data call
*
* CALLS  
*	csmcc_nego_data_bc(csmcc_bc_struct *bc,
*                          csmcc_data_bc_param_struct *data_bc_param_ptr)
*
* PARAMETERS
*	*bc	IN	first variable, used as input
*	*data_bc_param_ptr	OUT	second variable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_nego_data_bc(csmcc_bc_struct *bc,
                             csmcc_data_bc_param_struct *data_bc_param_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_at_param_struct *at_param_ptr = &(CSMCC_PTR->at_param);
   
   /* check if MS supports CSD */
   if(DATA_CAP(CSD_MASK) == KAL_FALSE)
   {
      /* CSD not supported by MS */
      return CSMCC_ERROR;
   }
   
   /* itc */
   data_bc_param_ptr->itc = (csmcc_itc_enum)(bc->itc);   
   
   /* other itc */
   if(bc->octet5a_present == KAL_TRUE)
   {
      data_bc_param_ptr->other_itc = (csmcc_other_itc_enum)(bc->octet5a.other_ITC);
   }
   
   if(bc->octet5.siganaling_access_protocol == CSMCC_SAP_I440_450)
   {         
      /* sync/async */
      data_bc_param_ptr->sync = (csmcc_sync_enum)(bc->octet6.sync_or_async);
   
      switch(bc->octet6.sync_or_async)
      {
      case CSMCC_ASYNC_DATA:
         
         switch(bc->octet6c.connection_element)
         {
            case CSMCC_TRANSPARENT:
               if(DATA_CAP(TRANS_ASYNC_MASK) == KAL_FALSE)
               {
                  return CSMCC_ERROR;
               }
               data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
               break;
            
            case CSMCC_NON_TRANSPARENT:
               if(DATA_CAP(NON_TRANS_ASYNC_MASK) == KAL_FALSE)
               {
                  return CSMCC_ERROR;
               }            
               data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
               break;
               
            case CSMCC_TRANSPARENT_PREF:
               if(DATA_CAP(TRANS_ASYNC_MASK) == KAL_TRUE)
               {
                  data_bc_param_ptr->ce = /*CSMCC_TRANSPARENT*/CSMCC_NON_TRANSPARENT;
               }
               else if(DATA_CAP(NON_TRANS_ASYNC_MASK) == KAL_TRUE)
               {
                  data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
               }
               else
               {
                  return CSMCC_ERROR;
               }
               break;
               
            case CSMCC_NON_TRANSPARENT_PREF:
               if(DATA_CAP(NON_TRANS_ASYNC_MASK) == KAL_TRUE
                  && bc->octet6a.user_rate >= CSMCC_UR_4_8_K)
               {
                  data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
               }
               else if(DATA_CAP(TRANS_ASYNC_MASK) == KAL_TRUE)
               {
                  data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
               }
               else
               {
                  return CSMCC_ERROR;
               }
               break;
            default:
               /* invalid value range */
               return CSMCC_ERROR;

         } /* switch(connection_element) */
        
         break;
         
      case CSMCC_SYNC_DATA:

         switch(bc->octet6c.connection_element)
         {
            case CSMCC_TRANSPARENT:
               if(DATA_CAP(TRANS_SYNC_MASK) == KAL_FALSE)
               {
                  return CSMCC_ERROR;
               }
               data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
               break;
            
            case CSMCC_NON_TRANSPARENT:
               if(DATA_CAP(NON_TRANS_SYNC_MASK) == KAL_FALSE)
               {
                  return CSMCC_ERROR;
               }            
               data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
               break;
               
            case CSMCC_TRANSPARENT_PREF:
               if(DATA_CAP(TRANS_SYNC_MASK) == KAL_TRUE)
               {
                  data_bc_param_ptr->ce = /*CSMCC_TRANSPARENT*/CSMCC_NON_TRANSPARENT;
               }
               else if(DATA_CAP(NON_TRANS_SYNC_MASK) == KAL_TRUE)
               {
                  data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
               }
               else
               {
                  return CSMCC_ERROR;
               }
               break;
               
            case CSMCC_NON_TRANSPARENT_PREF:
               if(DATA_CAP(NON_TRANS_SYNC_MASK) == KAL_TRUE
                  && bc->octet6a.user_rate >= CSMCC_UR_4_8_K)
               {
                  data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
               }
               else if(DATA_CAP(TRANS_SYNC_MASK) == KAL_TRUE)
               {
                  data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
               }
               else
               {
                  return CSMCC_ERROR;
               }
               break;
            default:
               /* invalid value range */
               return CSMCC_ERROR;

         } /* switch(connection_element) */
               
         break;
         
      default:
         /* invalid value range */
         return CSMCC_ERROR;
      }
   }
   else
   {
      /* no support of PAD(X.28), packet data service (X.32) */
      return CSMCC_ERROR;
   }
   
   
   /* char framing */
   if(data_bc_param_ptr->sync == CSMCC_SYNC_DATA)
   {
      data_bc_param_ptr->nsb = CSMCC_1_STOP_BIT;
      data_bc_param_ptr->ndb = CSMCC_8_DATA_BIT;
      data_bc_param_ptr->parity = CSMCC_PARITY_NONE;
   }
   else
   {
      csmcc_get_cf_format(at_param_ptr->cf_param.cf_format, 
                          &(data_bc_param_ptr->nsb), 
                          &(data_bc_param_ptr->ndb));
                          
      csmcc_get_cf_parity(at_param_ptr->cf_param.cf_format, 
                          at_param_ptr->cf_param.cf_parity, 
                          &(data_bc_param_ptr->parity));
   }

   /* user rate support T: 2.4k 4.8k 9.6k  NT: 4.8k 9.6k */
   
   if((data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT 
      #ifdef __CSD_NT_2400__
      && bc->octet6a.user_rate < CSMCC_UR_2_4_K
      #else   
      && bc->octet6a.user_rate < CSMCC_UR_4_8_K
      #endif
      ) 
      ||(data_bc_param_ptr->ce == CSMCC_TRANSPARENT 
      && bc->octet6a.user_rate < CSMCC_UR_2_4_K))
   {
      return CSMCC_ERROR;
   }
   else
   {   
      data_bc_param_ptr->ur = (csmcc_user_rate_enum)(bc->octet6a.user_rate);
   }
   
   /* ra */
   if(	bc->octet5_present == KAL_TRUE)
   {
   	if(bc->octet5.rate_adaption == CSMCC_RA_X31)   
		return CSMCC_ERROR;
   	else
                data_bc_param_ptr->ra = (csmcc_rate_adaptation_enum)(bc->octet5.rate_adaption);
   }
            
   /* other ra */
   if(bc->octet5a_present == KAL_TRUE)
   {
	if(bc->octet5.rate_adaption == CSMCC_RA_OTHER &&
	   (/*bc->octet5a.other_rate_adaption == CSMCC_RA_H223 ||*/ bc->octet5a.other_rate_adaption == CSMCC_RA_PIAFS))
		return CSMCC_ERROR;
	else
                data_bc_param_ptr->other_ra = (csmcc_other_rate_adaptation_enum)(bc->octet5a.other_rate_adaption);
   }
         
   /* mt */
   data_bc_param_ptr->mt = (csmcc_modem_type_enum)(bc->octet6c.modem_type);                 

   if(data_bc_param_ptr->mt == CSMCC_MT_AUTOBAUDING)
   {
      /* according to 27.007, autobauding (automatic selection 
       * of the speed; this setting is possible in case of 3.1 
       * kHz modem and non-transparent service) */
      
      if(data_bc_param_ptr->ce != CSMCC_NON_TRANSPARENT
         || data_bc_param_ptr->itc != CSMCC_ITC_3_1_K_AUDIO)
      {
         return CSMCC_ERROR;
      }
   }

   if(bc->octet6d_present == KAL_TRUE)
   {
      /* only support user rate up to 14.4 k */
      if(bc->octet6d.fixed_network_user_rate >= CSMCC_FNUR_14_4_K)
      {
         data_bc_param_ptr->fnur = CSMCC_FNUR_14_4_K;
      }
      else
      {
         data_bc_param_ptr->fnur = bc->octet6d.fixed_network_user_rate;
      }         
      
      /* 9.6k (V.34) and 14.4k (V.34)*/
      if(data_bc_param_ptr->itc == CSMCC_ITC_3_1_K_AUDIO)
      {
         data_bc_param_ptr->other_mt = CSMCC_MT_V34;
      }
   }

   /* set v.120 relative parameters */
   if(data_bc_param_ptr->other_ra == CSMCC_RA_V120)
   {   
      data_bc_param_ptr->v120_param = at_param_ptr->v120_param;      
   }

   /* set RLP relative parameters */
   if(data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT) 
   {
      data_bc_param_ptr->rlp_param = at_param_ptr->rlp_param;            
      data_bc_param_ptr->data_compression_param = at_param_ptr->data_compression_param;
   }      
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_nego_data_bc */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_data_nego_bc_ie
* DESCRIPTION                                                           
*    This function is used to negotiate bearer capability of incoming data call
*
* CALLS  
*	csmcc_fill_data_nego_bc_ie(csmcc_bc_struct *bc_ptr, csmcc_bc_struct *nbc_ptr)
*
* PARAMETERS
*	bc_ptr	IN	first variable, used as input
*  nbc_ptr  OUT second variable, used as output
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_data_nego_bc_ie(csmcc_bc_struct *bc_ptr, csmcc_bc_struct *nbc_ptr)
{
   CSMCC_PTR_G_TO_L
   csmcc_data_bc_param_struct *data_bc_param_ptr = &(CSMCC_PTR->data_bc_param);

   *nbc_ptr = *bc_ptr;
   
   /* (RCR) */
   if(ACC(TCH_H_MASK) == KAL_TRUE)
   {
      /* Temporary solution: using Bit 8 as HR preferred flag */
      if(ACC((kal_uint8)0x80))
         nbc_ptr->radio_chanl_req = CSMCC_DUAL_HR_PREF;
      else
         nbc_ptr->radio_chanl_req = CSMCC_DUAL_FR_PREF;
   }
   else
   {
      nbc_ptr->radio_chanl_req = CSMCC_FR_ONLY;
   }      
   
   nbc_ptr->octet6c.connection_element = data_bc_param_ptr->ce;
   
   if(data_bc_param_ptr->sync == CSMCC_SYNC_DATA)
   {
      nbc_ptr->octet6a.number_stop_bits = CSMCC_1_STOP_BIT;
      nbc_ptr->octet6a.number_data_bits = CSMCC_8_DATA_BIT;
      nbc_ptr->octet6b.parity = CSMCC_PARITY_NONE;
   }
   else
   {
      nbc_ptr->octet6a.number_stop_bits = data_bc_param_ptr->nsb;
      nbc_ptr->octet6a.number_data_bits = data_bc_param_ptr->ndb;
      nbc_ptr->octet6b.parity = data_bc_param_ptr->parity;
   }

   nbc_ptr->octet4.compress = CSMCC_NO_DATA_COMPRESS;
         
   if(data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT)
   {
      nbc_ptr->octet4.structure = CSMCC_SDU_INTEGRITY;

      /* negotiation of intermediate rate */
      if(nbc_ptr->radio_chanl_req == CSMCC_FR_ONLY
         && nbc_ptr->octet6a.user_rate <= CSMCC_UR_4_8_K
         && nbc_ptr->octet4.NIRR == CSMCC_NIRR_REQUESTED)
      {
         nbc_ptr->octet6b.intermediate_rate = CSMCC_IR_8_K;
      }
      else
      {
         nbc_ptr->octet4.NIRR = CSMCC_NIRR_NO_MEANING;
      }
      
      /* (UIL2P): NAV (outband flow control) */      
      nbc_ptr->octet7_present = KAL_FALSE;      
   }
   else
   {
      nbc_ptr->octet4.structure = CSMCC_UNSTRUCTURED;
      
      if(nbc_ptr->octet6a.user_rate <= CSMCC_UR_4_8_K)
      {
         nbc_ptr->octet6b.intermediate_rate = CSMCC_IR_8_K;
      }
      else
      {
         nbc_ptr->octet6b.intermediate_rate = CSMCC_IR_16_K;
      }
      
      nbc_ptr->octet7_present = KAL_FALSE;
   }

   if(data_bc_param_ptr->fnur != CSMCC_FNUR_NM)
   {
      nbc_ptr->octet6d.fixed_network_user_rate = data_bc_param_ptr->fnur;
      nbc_ptr->octet6d.other_modem_type = data_bc_param_ptr->other_mt;
      
      nbc_ptr->octet6e_present = KAL_TRUE;
      nbc_ptr->octet6e.accptable_channel_coding = GET_ACC;
//MAUI_01966467
      /*[MAUI_01712442]CC R6 change request*/
      nbc_ptr->octet6e.max_num_traffic_channels = GET_MAX_TCH;
         
      if(data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT)
      {
         nbc_ptr->octet6f_present = KAL_TRUE;
         nbc_ptr->octet6f.UIMI = CSMCC_UIMI_NOT_ALLOWED;
         if(data_bc_param_ptr->fnur >= CSMCC_FNUR_14_4_K)
         {
            nbc_ptr->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_14_4_K;
         }
         else
         {
            nbc_ptr->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_9_6_K;
         }
      }
      else
      {
         nbc_ptr->octet6f_present = KAL_FALSE;
      }
   }
   else
   {
      nbc_ptr->octet6d_present = KAL_FALSE;
      nbc_ptr->octet6e_present = KAL_FALSE;
      nbc_ptr->octet6f_present = KAL_FALSE;
   }
   
} /* end of csmcc_fill_data_nego_bc_ie */

#endif /* __CSD_T__ || __CSD_NT__ */

#ifdef __CSD_FAX__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_nego_fax_bc
* DESCRIPTION                                                           
*    This function is used to negotiate bearer capability of incoming fax call
*
* CALLS  
*	csmcc_nego_data_bc(csmcc_bc_struct *bc,
*                          csmcc_data_bc_param_struct *data_bc_param_ptr)
*
* PARAMETERS
*	*bc	IN	first variable, used as input
*	*data_bc_param_ptr	OUT	second variable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_nego_fax_bc(csmcc_bc_struct *bc,
                             csmcc_data_bc_param_struct *data_bc_param_ptr)
{
   /* check if MS support fax */
   CSMCC_PTR_G_TO_L
   if(DATA_CAP(TRANS_FAX_MASK) == KAL_FALSE
      && DATA_CAP(NON_TRANS_FAX_MASK) == KAL_FALSE)
   {
      /* fax not supported by MS */
      return CSMCC_ERROR;
   }

   /* itc */
   data_bc_param_ptr->itc = bc->itc;

   if(bc->octet5.siganaling_access_protocol == CSMCC_SAP_I440_450)
   {      
      /* sync/async */
      data_bc_param_ptr->sync = bc->octet6.sync_or_async;
   
      switch(bc->octet6.sync_or_async)
      {
      case CSMCC_ASYNC_DATA:         
         return CSMCC_ERROR;
         
      case CSMCC_SYNC_DATA:
         switch(bc->octet6c.connection_element)
         {
            case CSMCC_TRANSPARENT:
               if(DATA_CAP(TRANS_FAX_MASK) == KAL_FALSE)
               {
                  return CSMCC_ERROR;
               }
               data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
               break;            
            case CSMCC_NON_TRANSPARENT:
               if(DATA_CAP(NON_TRANS_FAX_MASK) == KAL_FALSE)
               {
                  return CSMCC_ERROR;
               }
               data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
               break;
            case CSMCC_TRANSPARENT_PREF:
               if(DATA_CAP(TRANS_FAX_MASK) == KAL_TRUE)
               {
                  data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
               }
               else if(DATA_CAP(NON_TRANS_FAX_MASK) == KAL_TRUE)
               {
                  data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
               }
               else
               {
                  return CSMCC_ERROR;
               }
               break;
            case CSMCC_NON_TRANSPARENT_PREF:
               if(DATA_CAP(NON_TRANS_FAX_MASK) == KAL_TRUE
                  && bc->octet6a.user_rate >= CSMCC_UR_4_8_K)
               {
                  data_bc_param_ptr->ce = CSMCC_NON_TRANSPARENT;
               }
               else if(DATA_CAP(TRANS_FAX_MASK) == KAL_TRUE)
               {
                  data_bc_param_ptr->ce = CSMCC_TRANSPARENT;
               }
               else
               {
                  return CSMCC_ERROR;
               }
               break;               

            default:
               /* invalid value range */
               return CSMCC_ERROR;
         }/* switch(connection_element) */         
         break;         
      default:
         /* invalid value range */
         return CSMCC_ERROR;
      } /* switch(sync) */
   }
   else
   {
      /* no support of PAD(X.28), packet dat aservice(X.32) */
      return CSMCC_ERROR;
   }
         
   /* set sync relative parameters */
   data_bc_param_ptr->nsb = CSMCC_1_STOP_BIT;
   data_bc_param_ptr->ndb = CSMCC_8_DATA_BIT;
   data_bc_param_ptr->parity = CSMCC_PARITY_NONE;

   /* user rate support T: 2.4k 4.8k 9.6k  NT: 4.8k 9.6k */
   if((data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT 
      #ifdef __CSD_NT_2400__
      && bc->octet6a.user_rate < CSMCC_UR_2_4_K
      #else   
      && bc->octet6a.user_rate < CSMCC_UR_4_8_K
      #endif
      ) 
      ||(data_bc_param_ptr->ce == CSMCC_TRANSPARENT 
      && bc->octet6a.user_rate < CSMCC_UR_2_4_K))
   {
      return CSMCC_ERROR;
   }
   else
   {
      data_bc_param_ptr->ur = bc->octet6a.user_rate;
   }
   
   data_bc_param_ptr->ra = CSMCC_RA_NONE;
   data_bc_param_ptr->mt = CSMCC_MT_NONE;
   
   if(bc->octet6d_present == KAL_TRUE)
   {
      /* only support user rate up to 14.4 k */
      if(bc->octet6d.fixed_network_user_rate >= CSMCC_FNUR_14_4_K)
      {
         data_bc_param_ptr->fnur = CSMCC_FNUR_14_4_K;
      }
      else
      {
         data_bc_param_ptr->fnur = bc->octet6d.fixed_network_user_rate;
      }         
      
      /* 9.6k (V.34) and 14.4k (V.34)*/
      if(data_bc_param_ptr->itc == CSMCC_ITC_3_1_K_AUDIO)
      {
         data_bc_param_ptr->other_mt = CSMCC_MT_V34;
      }
   }
   
   /* set RLP relative parameters */
   if(data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT) 
   {
      data_bc_param_ptr->rlp_param = CSMCC_PTR->at_param.rlp_param;            
      data_bc_param_ptr->data_compression_param = CSMCC_PTR->at_param.data_compression_param;
   }         
         
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_nego_fax_bc */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_fax_nego_bc_ie
* DESCRIPTION                                                           
*    This function is used to negotiate bearer capability of incoming fax call
*
* CALLS  
*	csmcc_fill_fax_nego_bc_ie(csmcc_bc_struct *bc_ptr, csmcc_bc_struct *nbc_ptr)
*
* PARAMETERS
*	*bc_ptr	INPUT	first variable, used as output
*  *nbc_ptr OUTPUT   second variable, used as output
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_fax_nego_bc_ie(csmcc_bc_struct *bc_ptr, csmcc_bc_struct *nbc_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_data_bc_param_struct *data_bc_param_ptr = &(CSMCC_PTR->data_bc_param);

   *nbc_ptr = *bc_ptr;
   
   /* (RCR) */
   /* if HR supported, Anite expects DUAL_HR/FR_PREF, but real nw only accept FR_ONLY. 
       so fill DUAL_HR/FR only when using test SIM. */
   
   if((check_sim_card_status(CSMCC_SIM_INTERFACE) == TEST_SIM_PRESENCE)
      && ACC(TCH_H_MASK) == KAL_TRUE)
   {
      /* Temporary solution: using Bit 8 as HR preferred flag */
      if(ACC((kal_uint8)0x80))
         nbc_ptr->radio_chanl_req = CSMCC_DUAL_HR_PREF;
      else
         nbc_ptr->radio_chanl_req = CSMCC_DUAL_FR_PREF;
   }
   else
   {
      nbc_ptr->radio_chanl_req = CSMCC_FR_ONLY;
   }         
      
   nbc_ptr->octet4.compress = CSMCC_NO_DATA_COMPRESS; 

   nbc_ptr->octet6c.connection_element = data_bc_param_ptr->ce;
   
   if(data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT)
   {
      nbc_ptr->octet4.structure = CSMCC_SDU_INTEGRITY;

      /* negotiation of intermediate rate */
      if(nbc_ptr->radio_chanl_req == CSMCC_FR_ONLY
         && nbc_ptr->octet6a.user_rate <= CSMCC_UR_4_8_K
         && nbc_ptr->octet4.NIRR == CSMCC_NIRR_REQUESTED)
      {
         nbc_ptr->octet6b.intermediate_rate = CSMCC_IR_8_K;
      }
      else
      {
         nbc_ptr->octet4.NIRR = CSMCC_NIRR_NO_MEANING;
      }
   }
   else
   {
      nbc_ptr->octet4.structure = CSMCC_UNSTRUCTURED;
      
      if(nbc_ptr->octet6a.user_rate <= CSMCC_UR_4_8_K)
      {
         nbc_ptr->octet6b.intermediate_rate = CSMCC_IR_8_K;
      }
      else
      {
         nbc_ptr->octet6b.intermediate_rate = CSMCC_IR_16_K;
      }
      
   }

   nbc_ptr->octet6a.number_stop_bits = CSMCC_1_STOP_BIT;
   nbc_ptr->octet6a.number_data_bits = CSMCC_8_DATA_BIT;
   nbc_ptr->octet6b.parity = CSMCC_PARITY_NONE;

   nbc_ptr->octet5.rate_adaption = CSMCC_RA_NONE;
   nbc_ptr->octet6c.modem_type = CSMCC_MT_NONE;
   
   if(data_bc_param_ptr->fnur != CSMCC_FNUR_NM)
   {
      nbc_ptr->octet6d.fixed_network_user_rate = data_bc_param_ptr->fnur;
      nbc_ptr->octet6d.other_modem_type = data_bc_param_ptr->other_mt;
      
      nbc_ptr->octet6e_present = KAL_TRUE;
      nbc_ptr->octet6e.accptable_channel_coding = GET_ACC;
      /*[MAUI_01712442]CC R6 change request*/
      nbc_ptr->octet6e.max_num_traffic_channels = GET_MAX_TCH;
         
      if(data_bc_param_ptr->ce == CSMCC_NON_TRANSPARENT)
      {
         nbc_ptr->octet6f_present = KAL_TRUE;
         nbc_ptr->octet6f.UIMI = CSMCC_UIMI_NOT_ALLOWED;
         if(data_bc_param_ptr->fnur >= CSMCC_FNUR_14_4_K)
         {
            nbc_ptr->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_14_4_K;
         }
         else
         {
            nbc_ptr->octet6f.wanted_air_interface_user_rate = CSMCC_AIUR_9_6_K;
         }
      }
      else
      {
         nbc_ptr->octet6f_present = KAL_FALSE;
      }
   }   
   else
   {
      nbc_ptr->octet6d_present = KAL_FALSE;
      nbc_ptr->octet6e_present = KAL_FALSE;
      nbc_ptr->octet6f_present = KAL_FALSE;
   }
   
} /* end of csmcc_fill_fax_nego_bc_ie */

#endif /* __CSD_FAX__ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_check_bc
* DESCRIPTION                                                           
*  This function is used to check if bearer capability can be negotiated or 
*  accepted by MS
*
* CALLS  
*	csmcc_check_bc(csmcc_bc_struct *bc_ptr, csmcc_bc_struct *nbc_ptr, kal_bool is_nego)
*
* PARAMETERS
*	bc_ptr      IN	first variable, used as input
*  nbc_ptr     OUT second variable, used as output
*	is_nego     IN	third variable, used as input
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_call_type_enum csmcc_check_bc(csmcc_bc_struct *bc_ptr, 
                                    csmcc_bc_struct *nbc_ptr, 
                                    kal_bool is_nego)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_type = CSMCC_INVALID_CALL_TYPE;

   switch(bc_ptr->itc)
   {
      case CSMCC_ITC_SPEECH: /* bc of voice call */
         nbc_ptr->itc = bc_ptr->itc;
         csmcc_fill_voice_bc_ie(nbc_ptr);
         call_type = CSMCC_VOICE_CALL;
         break;
         
      case CSMCC_ITC_AUX_SPEECH: /* bc of aux voice all*/
         nbc_ptr->itc = bc_ptr->itc;
         csmcc_fill_voice_bc_ie(nbc_ptr);
         call_type = CSMCC_AUX_VOICE_CALL;
         break;
         
#ifdef __CSD_FAX__         
      case CSMCC_ITC_FAX_GROUP_3: /* bc of fax call */
         if(csmcc_nego_fax_bc(bc_ptr,
                              &(CSMCC_PTR->data_bc_param)) != CSMCC_NO_ERROR)
         {
            break;
         }         
         if(is_nego == KAL_TRUE)
         {
            csmcc_fill_fax_nego_bc_ie(bc_ptr, nbc_ptr);
         }
         else
         {
            *nbc_ptr = *bc_ptr;
         }
         call_type = CSMCC_FAX_CALL;         
         break;
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__VIDEO_CALL_SUPPORT__)
            case CSMCC_ITC_UDI: 
                 if(bc_ptr->octet5a_present == KAL_TRUE && bc_ptr->octet5a.other_rate_adaption == CSMCC_RA_H223)
                 {
#ifdef __VIDEO_CALL_SUPPORT__
                     call_type = CSMCC_VIDEO_CALL;
#endif /*__VIDEO_CALL_SUPPORT__*/
                 }
                 else
                 {
#if defined(__CSD_T__) || defined(__CSD_NT__)
                     call_type = CSMCC_DATA_CALL;
#endif /*(__CSD_T__) || (__CSD_NT__)*/
                 }
      
            break; 
            
#if defined(__CSD_T__) || defined(__CSD_NT__)
            case CSMCC_ITC_3_1_K_AUDIO:
            case CSMCC_OTHER_ITC:  /* bc of data call */      
               call_type = CSMCC_DATA_CALL;     
               break;
#endif  /*(__CSD_T__) || (__CSD_NT__)*/
#endif /*(__CSD_T__) || (__CSD_NT__) || (__VIDEO_CALL_SUPPORT__)*/

      default:
         /* unsupported ITC */
         break;
   }
#if defined(__CSD_T__) || defined(__CSD_NT__)         
   if(call_type == CSMCC_DATA_CALL)
   {
         if(csmcc_nego_data_bc(bc_ptr,
                               &(CSMCC_PTR->data_bc_param)) != CSMCC_NO_ERROR)
         {
            return CSMCC_INVALID_CALL_TYPE;
         }         
         if(is_nego == KAL_TRUE)
         {
            csmcc_fill_data_nego_bc_ie(bc_ptr, nbc_ptr);
         }
         else
         {
            *nbc_ptr = *bc_ptr;
         }
   }
#endif /*(__CSD_T__) || (__CSD_NT__)*/
#ifdef __VIDEO_CALL_SUPPORT__
   if(call_type == CSMCC_VIDEO_CALL)
   {
      /* MAUI_01982626 [CSM][CC] revise VT only support 64k */
      if ((bc_ptr->octet6d.fixed_network_user_rate != CSMCC_FNUR_64_K) || ((csmcc_call_capability & CSMCC_VT_CAP_MASK) !=0))
      {
         return CSMCC_INVALID_CALL_TYPE;
      }
      else
      {
         csmcc_fill_video_bc_param(&(CSMCC_PTR->data_bc_param));
         csmcc_fill_video_bc_ie(nbc_ptr);
      }
   }
#endif
   return call_type;

}  /* end of csmcc_check_bc */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_check_bc
* DESCRIPTION                                                           
*  This function is used to check if bearer capability can be negotiated or 
*  accepted by MS
*
* CALLS  
*	csmcc_check_call_cap(kal_uint8 call_id, 
*                       csmcc_bc_struct *bc1_ptr, 
*                       csmcc_bc_struct *bc2_ptr, 
*                       kal_uint8 repeat_ind,
*                       kal_bool is_nego)
*
* PARAMETERS
*	call_id  IN	first variable, used as input
*  bc1_ptr  IN second variable, used as output
*	bc2_ptr  IN	third variable, used as input
*  repeat_ind  IN fourth variable, used as input
*  is_nego  IN fifth variable, used as input
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_check_call_cap(kal_uint8 call_id, 
                              csmcc_bc_struct *bc1_ptr, 
                              csmcc_bc_struct *bc2_ptr, 
                              kal_uint8 repeat_ind,
                              kal_bool is_nego)
{
   CSMCC_PTR_G_TO_L
#ifdef __FAX_TWN_MT_TEST__
   /* only for test fax. */
   /* If bc2 is fax, then enforce single mode, fax call. */
   if ((bc2_ptr != NULL) && (bc2_ptr->itc == CSMCC_ITC_FAX_GROUP_3))
   {
      if((CALL_DATA(call_id, bc[0]) = csmcc_check_bc(bc2_ptr, 
                                                     &(CSMCC_PTR->nego_bc.bc1), 
                                                     is_nego)) 
                                                     == CSMCC_INVALID_CALL_TYPE)
      {
         kal_brief_trace(TRACE_WARNING,
                  CSMCC_TRACE_BC2_CHECK_FAILURE,
                  bc2_ptr->itc);

         return KAL_FALSE;
      }
      else
      {
         CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;
         CSMCC_PTR->nego_bc.bc2_present = KAL_FALSE;
         CSMCC_PTR->nego_bc.repeat_present = KAL_FALSE;
         CALL_DATA(call_id, call_mode) = CSMCC_SINGLE_MODE;         
         
         return KAL_TRUE;
      }
   }   
   /* end for test fax. */
#endif
   
   if((CALL_DATA(call_id, bc[0]) = csmcc_check_bc(bc1_ptr, 
                                                  &(CSMCC_PTR->nego_bc.bc1), 
                                                  is_nego)) 
                                                  == CSMCC_INVALID_CALL_TYPE)
   {
      kal_brief_trace(TRACE_WARNING,
                CSMCC_TRACE_BC1_CHECK_FAILURE,
                bc1_ptr->itc);

      return KAL_FALSE;
   }

/* MAUI_01966497 [UCM 3.0] [1] Assert Fail: 0 GCallSrvCmInterface.c 2990 - MMI - [CSM][VT] reject MT video call if no UMTS capability */
#ifdef __VIDEO_CALL_SUPPORT__
   /* [MAUI_01712442], reject MT video call if no UMTS capability */
   if(CALL_DATA(call_id, bc[0]) == CSMCC_VIDEO_CALL)
   {
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
#endif
      if((CSMCC_PTR->rat == RAT_GSM) || (CSMCC_PTR->rat == RAT_NONE))
      {
         kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
         return KAL_FALSE;
      }
   }
#endif

   CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;

   if(bc2_ptr != NULL)
   {            
      if((CALL_DATA(call_id, bc[1]) = csmcc_check_bc(bc2_ptr, 
                                                     &(CSMCC_PTR->nego_bc.bc2), 
                                                     is_nego)) 
                                                     == CSMCC_INVALID_CALL_TYPE)
      {
         kal_brief_trace(TRACE_WARNING,
                  CSMCC_TRACE_BC2_CHECK_FAILURE,
                  bc2_ptr->itc);

         return KAL_FALSE;
      }
      else
      {
         CSMCC_PTR->nego_bc.bc2_present = KAL_TRUE;
      }
   }

   if(CSMCC_PTR->nego_bc.bc2_present == KAL_FALSE)
   {
      CALL_DATA(call_id, call_mode) = CSMCC_SINGLE_MODE;
      return KAL_TRUE;
   }      
   else
   {
      CSMCC_PTR->nego_bc.repeat_present = KAL_TRUE;      
      CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication = repeat_ind;

      if(CALL_DATA(call_id,bc[0]) == CSMCC_DATA_CALL 
         || CALL_DATA(call_id,bc[1]) == CSMCC_DATA_CALL)
      {
         if(repeat_ind == CSMCC_SEQUENTIAL_MODE)
         {
            CALL_DATA(call_id,call_mode) = CSMCC_VOICE_FOLLOW_DATA;
         }
         else
         {
            CALL_DATA(call_id,call_mode) = CSMCC_ALT_VOICE_DATA;
         }
      }
      else if(CALL_DATA(call_id,bc[0]) == CSMCC_FAX_CALL 
              || CALL_DATA(call_id,bc[1]) == CSMCC_FAX_CALL)
      {
         CALL_DATA(call_id,call_mode) = CSMCC_ALT_VOICE_FAX;
      }
   }

   return KAL_TRUE;
   
}  /* end of csmcc_check_call_cap */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_mt_call_compat
* DESCRIPTION                                                           
*    This function is used to check if incoming call is compatible with MS
*
* CALLS  
*	csmcc_is_mt_call_compat(kal_uint8 call_id,
*                               mncc_setup_ind_struct *setup_ind_ptr)
*
* PARAMETERS
*	call_id		IN	first variable, used as input
*	setup_ind_ptr	IN	second variable, used as input
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_mt_call_compat(kal_uint8 call_id, mncc_setup_ind_struct *setup_ind_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_bc_struct bc1;
   csmcc_bc_struct bc2;
   kal_bool ret_val;
   #ifdef __REL5__
   csmcc_call_type_enum call_type;
   #endif
   
   /* the initial call type must be the first */
   CALL_DATA(call_id, cur_call_type) = 0;

   if(setup_ind_ptr->bc1P == KAL_FALSE)
   {
       /*mtk01602 070415: R5 new feature, Backup BC IE*/
   #ifdef __REL5__
      if(setup_ind_ptr->backup_bcP == KAL_TRUE)
      {
     	  csmcc_form_app_bc(&bc1, &(setup_ind_ptr->backup_bc));

          /* 24.008 5.2.2.3 The mobile station may also use the backup bearer
          capability IE, if provided by the network, to deduce the requested service */

		  /* 27.001 8.3.2 a) MS shall not negotiate parameter values where the MSC
		  has to offer a value in the BC-IE first. So fill is_nego = FALSE.*/ 
          ret_val = csmcc_check_call_cap(call_id, 
                                         &bc1,
                                         NULL,
                                         setup_ind_ptr->bc_repeat_ind.repeat_indication,
                                         KAL_FALSE);
		  
      	 /* 24.008 5.2.2.2 For a backup bearer capability IE received with a 
	     SETUP message the mobile station shall not perform compatibility 
	     checking as described in annex B.
	     If compatibility checking fail, fill compatible BC directly or SNS BC.*/
         if(ret_val == KAL_FALSE)
         {
         	call_type = csmcc_deduce_bc_from_peer_backup(&bc1);

			/*27.001 8.3.2 a) The presence of BACKUP BC-IE does not change the 
			condition of "no BC-IE received", that means in particular that the MS shall
			include any BC-IE.*/
			if(call_type == CSMCC_INVALID_CALL_TYPE)
  		    	 csmcc_fill_sns_bc(call_id, CSMCC_PTR->at_param.sns_mode);
         }
	 CSMCC_PTR->nego_bc.bc1_present = KAL_TRUE;

	 /*backup bc contains maximum 16 byte, no possible for BC2. */
         CSMCC_PTR->nego_bc.bc2_present = KAL_FALSE;
         CSMCC_PTR->nego_bc.repeat_present = KAL_FALSE;
         CALL_DATA(call_id, call_mode) = CSMCC_SINGLE_MODE;   
		 
      }
      else
   #endif /*__REL5__*/
      {	   
   	 /* single number scheme applies */
      	 csmcc_fill_sns_bc(call_id, CSMCC_PTR->at_param.sns_mode);
      }

      return KAL_TRUE;
   }

   csmcc_form_app_bc(&bc1, &(setup_ind_ptr->bc1));

   if(setup_ind_ptr->bc2P == KAL_TRUE)
   {
      csmcc_form_app_bc(&bc2, &(setup_ind_ptr->bc2));      
      ret_val = csmcc_check_call_cap(call_id, 
                                     &bc1, 
                                     &bc2, 
                                     setup_ind_ptr->bc_repeat_ind.repeat_indication, 
                                     KAL_TRUE);
   }
   else
   {
      ret_val = csmcc_check_call_cap(call_id, 
                                     &bc1, 
                                     NULL, 
                                     setup_ind_ptr->bc_repeat_ind.repeat_indication,
                                     KAL_TRUE);
   }

   return ret_val;
   
} /* end of csmcc_is_mt_call_compat */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_ccbs_call_compat
* DESCRIPTION                                                           
*    This function is used to basic service recall alignment in case of 
*    CCBS call invocation.
*
* CALLS  
*	csmcc_is_ccbs_call_compat(kal_uint8 call_id,
*                      mncc_ccbs_establishment_ind_struct *ccbs_est_ind_ptr)
*
* PARAMETERS
*	call_id			IN	first variable, used as input
*	ccbs_est_ind_ptr	IN	second variable, used as input
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_ccbs_call_compat(kal_uint8 call_id, mncc_ccbs_est_ind_struct *ccbs_est_ind_ptr)
{
   /* local var declare */
   csmcc_bc_struct bc1;
   csmcc_bc_struct bc2;
   kal_bool ret_val;

   if(ccbs_est_ind_ptr->bc1P == KAL_FALSE)
   {
      return KAL_FALSE;
   }

   /* fill call type, the initial call type must be the first */
   CALL_DATA(call_id, cur_call_type) = 0;

   csmcc_form_app_bc(&bc1, &(ccbs_est_ind_ptr->bc1));

   if(ccbs_est_ind_ptr->bc2P == KAL_TRUE)
   {
      csmcc_form_app_bc(&bc2, &(ccbs_est_ind_ptr->bc2));      
      ret_val = csmcc_check_call_cap(call_id, 
                                     &bc1, 
                                     &bc2, 
                                     ccbs_est_ind_ptr->bc_repeat_ind.repeat_indication, 
                                     KAL_FALSE);
   }
   else
   {
      ret_val = csmcc_check_call_cap(call_id, 
                                     &bc1, 
                                     NULL, 
                                     ccbs_est_ind_ptr->bc_repeat_ind.repeat_indication,
                                     KAL_FALSE);
   }

   return ret_val;
      
} /* end of csmcc_is_ccbs_call_compat */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet3
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_bc_octet3(kal_uint8 *peer_bc_octet_ptr ,
                          csmcc_bc_struct *app_bc_ptr )
{ 
 *peer_bc_octet_ptr = app_bc_ptr->itc;
 *peer_bc_octet_ptr |= \
     ((app_bc_ptr->transfer_mode & CSMCC_ONE_BIT_MASK)\
      << CSMCC_THREE_BIT_OFFSET);
  
 *peer_bc_octet_ptr |= \
     ((app_bc_ptr->radio_chanl_req & CSMCC_TWO_BIT_MASK)\
     << CSMCC_FIVE_BIT_OFFSET);
  
 if(app_bc_ptr->num_octet3a)  
  {
   *peer_bc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
   return(BC_OCTET3A);
  }
 else
  {  
   *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
   if(app_bc_ptr->octet4_present) {
      return BC_OCTET4;
   }
   
   if(app_bc_ptr->octet5_present) {
      return BC_OCTET5;
   }
   
   if(app_bc_ptr->octet6_present) {
      return BC_OCTET6;
   }
    
    return(BC_OCTET_NONE);
   }  
     
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet3a
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_bc_octet3a(kal_uint8 *peer_bc_octet_ptr, 
                           csmcc_bc_struct *app_bc_ptr)
{

  app_bc_ptr->num_octet3a-=1;

  *peer_bc_octet_ptr = \
    (app_bc_ptr->octet3a[app_bc_ptr->num_octet3a]).\
     speech_version_ind ;
     *peer_bc_octet_ptr |= (((app_bc_ptr->octet3a[app_bc_ptr->num_octet3a]).\
     CTM & CSMCC_ONE_BIT_MASK) <<CSMCC_FIVE_BIT_OFFSET);
 
  if(app_bc_ptr->num_octet3a) 
   {  
   *peer_bc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
   return(BC_OCTET3A);
   }    
  else
   {
   *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
   return(BC_OCTET_NONE);
   }  
}     

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet4
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_bc_octet4(kal_uint8 *peer_bc_octet_ptr, 
	                       csmcc_bc_struct *app_bc_ptr)
{
 
  *peer_bc_octet_ptr  = (app_bc_ptr->octet4).establishment;
  *peer_bc_octet_ptr |= \
      (((app_bc_ptr->octet4).NIRR & CSMCC_ONE_BIT_MASK)\
       << CSMCC_ONE_BIT_OFFSET);
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet4).configuration & \
	      CSMCC_ONE_BIT_MASK) << CSMCC_TWO_BIT_OFFSET);
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet4).duplex_mode & \
	      CSMCC_ONE_BIT_MASK) << CSMCC_THREE_BIT_OFFSET);
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet4).structure & \
	      CSMCC_TWO_BIT_MASK) << CSMCC_FOUR_BIT_OFFSET);
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet4).compress & \
	      CSMCC_ONE_BIT_MASK) << CSMCC_SIX_BIT_OFFSET);

  *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET); 
  
  if(app_bc_ptr->octet5_present) {
    return(BC_OCTET5);
  }
 
  if(app_bc_ptr->octet6_present) {
       return (BC_OCTET6);
  }
  
   return(BC_OCTET_NONE);   
    
}  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet5
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_bc_octet5(kal_uint8  *peer_bc_octet_ptr, 
                          csmcc_bc_struct *app_bc_ptr)
{   
  *peer_bc_octet_ptr = \
      (app_bc_ptr->octet5).siganaling_access_protocol; 
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet5).rate_adaption & \
	      CSMCC_TWO_BIT_MASK ) << CSMCC_THREE_BIT_OFFSET);

  if(app_bc_ptr->octet5a_present)
   {
    *peer_bc_octet_ptr |=(0 << CSMCC_SEVEN_BIT_OFFSET);
    return(BC_OCTET5A);
   }
  else
   {
    *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
   }

  if(app_bc_ptr->octet6_present)  {
    return(BC_OCTET6);
  }

  if(app_bc_ptr->octet7_present) {
    return(BC_OCTET7); 
  }

  return(BC_OCTET_NONE);   

}  
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet5a
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_bc_octet5a(kal_uint8 *peer_bc_octet_ptr, 
                           csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet5a).other_rate_adaption\
                       & CSMCC_TWO_BIT_MASK) << CSMCC_THREE_BIT_OFFSET );

  *peer_bc_octet_ptr |= (((app_bc_ptr->octet5a).other_ITC & \
	      CSMCC_TWO_BIT_MASK) << CSMCC_FIVE_BIT_OFFSET);
  if(app_bc_ptr->octet5b_present)
   {
     *peer_bc_octet_ptr |= ( 0 << CSMCC_SEVEN_BIT_OFFSET);
     return(BC_OCTET5B);
   }
   else
   {
     *peer_bc_octet_ptr |=(1 << CSMCC_SEVEN_BIT_OFFSET);
    
     if(app_bc_ptr->octet6_present) {
       return(BC_OCTET6);
     }
 
     if(app_bc_ptr->octet7_present) {
       return(BC_OCTET7);
     }
     
    return(BC_OCTET_NONE);     
   }   
}  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet5b
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet5b(kal_uint8 *peer_bc_octet_ptr,
                           csmcc_bc_struct *app_bc_ptr )

{
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet5b).inband_negotiation 
                      & CSMCC_ONE_BIT_MASK) << CSMCC_ONE_BIT_OFFSET );
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet5b).assignor &\
	      CSMCC_ONE_BIT_MASK) << CSMCC_TWO_BIT_OFFSET);
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet5b).LLI & \
	      CSMCC_ONE_BIT_MASK) << CSMCC_THREE_BIT_OFFSET);
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet5b).mode & \
	      CSMCC_ONE_BIT_MASK) << CSMCC_FOUR_BIT_OFFSET);
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet5b).multi_frame & \
	      CSMCC_ONE_BIT_MASK) << CSMCC_FIVE_BIT_OFFSET);
  *peer_bc_octet_ptr |= (((app_bc_ptr->octet5b).hdr_or_no_hdr & \
	      CSMCC_ONE_BIT_MASK) << CSMCC_SIX_BIT_OFFSET);
  
  *peer_bc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET );
 
  if(app_bc_ptr->octet6_present) {
   return(BC_OCTET6);
  }
  
  if(app_bc_ptr->octet7_present) {
   return(BC_OCTET7);   
  }
  
 return(BC_OCTET_NONE); 
}  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet6
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet6(kal_uint8 *peer_bc_octet_ptr,
                          csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr |= (app_bc_ptr->octet6).sync_or_async;
  *peer_bc_octet_ptr |= \
      ((( app_bc_ptr->octet6).user_info_layer1_protocol &
          CSMCC_FOUR_BIT_MASK) << CSMCC_ONE_BIT_OFFSET);
  *peer_bc_octet_ptr |= ( 1 << CSMCC_FIVE_BIT_OFFSET );
 
  if(app_bc_ptr->octet6a_present)
   {
    *peer_bc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
     return(BC_OCTET6A);
   }
  else
   {
    *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
 
    if(app_bc_ptr->octet7_present){
     return(BC_OCTET7);
    }
   
    return(BC_OCTET_NONE);
   }     
}  
    
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet6a
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet6a(kal_uint8 *peer_bc_octet_ptr,
                           csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr = (app_bc_ptr->octet6a).user_rate;
  *peer_bc_octet_ptr |= ((( app_bc_ptr->octet6a).number_data_bits &
                         CSMCC_ONE_BIT_MASK) << CSMCC_FOUR_BIT_OFFSET);
  *peer_bc_octet_ptr |= ((( app_bc_ptr->octet6a).negotiation &
                         CSMCC_ONE_BIT_MASK) << CSMCC_FIVE_BIT_OFFSET);
  *peer_bc_octet_ptr |= ((( app_bc_ptr->octet6a).number_stop_bits &
                         CSMCC_ONE_BIT_MASK) << CSMCC_SIX_BIT_OFFSET);
  				 
 
  if(app_bc_ptr->octet6b_present)
   {
    *peer_bc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
     return(BC_OCTET6B);
   }
  else
   {
    *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
    if(app_bc_ptr->octet7_present){
      return(BC_OCTET7);
    }
    
    return(BC_OCTET_NONE);
   }     
  
}  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet6b
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet6b(kal_uint8 *peer_bc_octet_ptr,
                           csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr = \
      (app_bc_ptr->octet6b).parity & CSMCC_THREE_BIT_MASK;
  *peer_bc_octet_ptr |= ((( app_bc_ptr->octet6b).NIC_on_RX & 
                         CSMCC_ONE_BIT_MASK) << CSMCC_THREE_BIT_OFFSET);
  *peer_bc_octet_ptr |= ((( app_bc_ptr->octet6b).NIC_on_TX &
                         CSMCC_ONE_BIT_MASK) << CSMCC_FOUR_BIT_OFFSET);
  *peer_bc_octet_ptr |= ((( app_bc_ptr->octet6b).intermediate_rate &
                         CSMCC_TWO_BIT_MASK) << CSMCC_FIVE_BIT_OFFSET);
  				 
 
  if(app_bc_ptr->octet6c_present)
   {
    *peer_bc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
     return(BC_OCTET6C);
   }
  else
   {
    *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
    if(app_bc_ptr->octet7_present) {
     return(BC_OCTET7);
    }
    else {
     return(BC_OCTET_NONE);
    }
   }     
  
}  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet6c
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet6c(kal_uint8 *peer_bc_octet_ptr,
                           csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr = (app_bc_ptr->octet6c).modem_type &\
     			 CSMCC_FIVE_BIT_MASK;
  
  *peer_bc_octet_ptr |= \
      ((( app_bc_ptr->octet6c).connection_element & \
               CSMCC_TWO_BIT_MASK) << CSMCC_FIVE_BIT_OFFSET);
 
  if(app_bc_ptr->octet6d_present)
   {
    *peer_bc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
     return(BC_OCTET6D);
   }
  else
   {
    *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
    if(app_bc_ptr->octet7_present) {
     return(BC_OCTET7);
    }
    else {
     return(BC_OCTET_NONE);
    }
   }     
  
}  
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet6d
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet6d(kal_uint8 *peer_bc_octet_ptr,
                           csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr = \
      ((app_bc_ptr->octet6d).fixed_network_user_rate \
        & CSMCC_FIVE_BIT_MASK);
  
  *peer_bc_octet_ptr |= \
      ((( app_bc_ptr->octet6d).other_modem_type & \
          CSMCC_TWO_BIT_MASK) << CSMCC_FIVE_BIT_OFFSET);
   				 
 
  if(app_bc_ptr->octet6e_present)
   {
    *peer_bc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
    return(BC_OCTET6E);
   }
  else
   {
    *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
    if(app_bc_ptr->octet7_present) {
     return(BC_OCTET7);
    }
    else  {
    return(BC_OCTET_NONE);
    } 
	    
   }    
  
}  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet6e
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet6e(kal_uint8 *peer_bc_octet_ptr,
                           csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr = \
      (app_bc_ptr->octet6e).max_num_traffic_channels &\
       CSMCC_THREE_BIT_MASK ;
  *peer_bc_octet_ptr |= \
      ((app_bc_ptr->octet6e).accptable_channel_coding \
        << CSMCC_THREE_BIT_OFFSET);
   				 
 
  if(app_bc_ptr->octet6f_present)
   {
    *peer_bc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
     return(BC_OCTET6F);
   }
  else
   {
    *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
    if(app_bc_ptr->octet7_present) {
     return(BC_OCTET7);
    }
    else  {
     return(BC_OCTET_NONE);
    }
   }     
  
}  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet6f
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet6f(kal_uint8 *peer_bc_octet_ptr,
                           csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr = \
      ((app_bc_ptr->octet6f).wanted_air_interface_user_rate\
       &CSMCC_FOUR_BIT_MASK) ;
  
  *peer_bc_octet_ptr |= \
      ((( app_bc_ptr->octet6f).UIMI & CSMCC_THREE_BIT_MASK)
                                << CSMCC_FOUR_BIT_OFFSET);
  				 
 
  if(app_bc_ptr->octet6g_present)
   {
    *peer_bc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
     return(BC_OCTET6G);
   }
  else
   {
    *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
     
     if(app_bc_ptr->octet7_present) {
       return(BC_OCTET7);
     }
     else {
       return(BC_OCTET_NONE);
     }
   }     
  
}  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet6g
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet6g(kal_uint8 *peer_bc_octet_ptr,
                csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr = ((app_bc_ptr->octet6g).asymmetry_ind & \
	              CSMCC_TWO_BIT_MASK) <<CSMCC_TWO_BIT_OFFSET;
  
  *peer_bc_octet_ptr |= \
      ((( app_bc_ptr->octet6g).accptable_channel_coding_ext \
	  & CSMCC_THREE_BIT_MASK) << CSMCC_FOUR_BIT_OFFSET);
  				 
 
    *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
   if(app_bc_ptr->octet7_present) {
    return(BC_OCTET7);
   }
   else {
    return(BC_OCTET_NONE);        
   }
  
}  
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_octet7
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_peer_bc_octet7(kal_uint8 *peer_bc_octet_ptr, csmcc_bc_struct *app_bc_ptr )
{
  *peer_bc_octet_ptr = ( 1 << 6 );
  *peer_bc_octet_ptr |= \
      ((app_bc_ptr->octet7).user_info_layer2_protocol \
        & CSMCC_FIVE_BIT_MASK);  
  *peer_bc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
  
  return(BC_OCTET_NONE);        
}  
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc_func_init
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void 
csmcc_form_peer_bc_func_init(
	func_peer_bc_ptr *csmcc_form_peer_bc_octet_func)
{                                                             
                                                                
 csmcc_form_peer_bc_octet_func[BC_OCTET3 ] = csmcc_form_peer_bc_octet3;
 csmcc_form_peer_bc_octet_func[BC_OCTET3A] = csmcc_form_peer_bc_octet3a;
 csmcc_form_peer_bc_octet_func[BC_OCTET4 ] = csmcc_form_peer_bc_octet4;
 csmcc_form_peer_bc_octet_func[BC_OCTET5 ] = csmcc_form_peer_bc_octet5;
 csmcc_form_peer_bc_octet_func[BC_OCTET5A] = csmcc_form_peer_bc_octet5a;
 csmcc_form_peer_bc_octet_func[BC_OCTET5B] = csmcc_form_peer_bc_octet5b;
 csmcc_form_peer_bc_octet_func[BC_OCTET6 ] = csmcc_form_peer_bc_octet6;
 csmcc_form_peer_bc_octet_func[BC_OCTET6A] = csmcc_form_peer_bc_octet6a;
 csmcc_form_peer_bc_octet_func[BC_OCTET6B] = csmcc_form_peer_bc_octet6b;
 csmcc_form_peer_bc_octet_func[BC_OCTET6C] = csmcc_form_peer_bc_octet6c;
 csmcc_form_peer_bc_octet_func[BC_OCTET6D] = csmcc_form_peer_bc_octet6d;
 csmcc_form_peer_bc_octet_func[BC_OCTET6E] = csmcc_form_peer_bc_octet6e;
 csmcc_form_peer_bc_octet_func[BC_OCTET6F] = csmcc_form_peer_bc_octet6f;
 csmcc_form_peer_bc_octet_func[BC_OCTET6G] = csmcc_form_peer_bc_octet6g;
 csmcc_form_peer_bc_octet_func[BC_OCTET7 ] = csmcc_form_peer_bc_octet7;
                                                                
                                                                 
} 

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_bc
*
* DESCRIPTION                                                           
*	  This function implements bearer capability packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	app_bc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_form_peer_bc(mncc_bc_struct *peer_bc_ptr, csmcc_bc_struct *app_bc_ptr) 
{  
  kal_uint8 offset = 0;
  kal_uint8 next_octet = BC_OCTET3;
  kal_uint8 *peer_bc_octet_ptr;
  kal_uint8 num_octet3a = app_bc_ptr->num_octet3a;
  
  func_peer_bc_ptr csmcc_form_peer_bc_octet_func[MAX_OCTET_BC];
  func_peer_bc_ptr next_func_ptr; 
      
  csmcc_form_peer_bc_func_init (csmcc_form_peer_bc_octet_func);
  
  next_func_ptr = csmcc_form_peer_bc_octet3 ;
  
  for (offset = 0 ; offset < MAX_OCTET_BC ; offset++)
    {
      if(next_octet == BC_OCTET_NONE){
        break;
      }
     
      peer_bc_octet_ptr = &(peer_bc_ptr->value[offset]);
      *peer_bc_octet_ptr = 0;
      next_func_ptr = csmcc_form_peer_bc_octet_func[next_octet];
     
     if ( next_func_ptr != NULL )  {
       next_octet = (*next_func_ptr)(peer_bc_octet_ptr ,app_bc_ptr);
     }
    }  
  
  peer_bc_ptr->no_value = offset; 

  /* resume number of octet3a */
  app_bc_ptr->num_octet3a = num_octet3a;

} 

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet3
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_app_bc_octet3(csmcc_bc_struct *app_bc_ptr , 
                         kal_uint8 *peer_bc_octet_ptr)
{
  app_bc_ptr->itc          = \
      (*peer_bc_octet_ptr & CSMCC_PEER_BC_ITC_MASK);
  app_bc_ptr->transfer_mode = \
      (*peer_bc_octet_ptr & CSMCC_PEER_BC_TM_MASK)\
                                >> CSMCC_THREE_BIT_OFFSET;

  app_bc_ptr->radio_chanl_req=\
      (*peer_bc_octet_ptr & CSMCC_PEER_BC_RCR_MASK) 
                                        >> CSMCC_FIVE_BIT_OFFSET;

  if ((*peer_bc_octet_ptr & CSMCC_PEER_BC_ITC_MASK ) == 0x00 )/* voice*/
   {
    if ((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0x00 )  {
      return(BC_OCTET3A) ;
    }
    else {
      return(BC_OCTET_NONE) ;  
    }
   }
  else                            /* Not Speech */
   {
    return(BC_OCTET4);
   }    
  
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet3a
*
* DESCRIPTION                                                           
*	  This function implements bearer capability  unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet3a(csmcc_bc_struct *app_bc_ptr,
                          kal_uint8 *peer_bc_octet_ptr)
{
 (app_bc_ptr->octet3a[app_bc_ptr->num_octet3a]).speech_version_ind 
        = (*peer_bc_octet_ptr & CSMCC_PEER_BC_SVI_MASK );

  app_bc_ptr->num_octet3a += 1;
 if ((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0x00 ) {
  return(BC_OCTET3A) ;
 }
 else {
  return(BC_OCTET_NONE);
 }
} 

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet4
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet4(csmcc_bc_struct *app_bc_ptr ,
                         kal_uint8 *peer_bc_octet_ptr)
{                                                                           
  app_bc_ptr->octet4_present = KAL_TRUE;	                                                                   
  
 (app_bc_ptr->octet4).establishment = (*peer_bc_octet_ptr & 
				     CSMCC_PEER_BC_ESTB_MASK);
 (app_bc_ptr->octet4).NIRR  = 
                 ((*peer_bc_octet_ptr & CSMCC_PEER_BC_NIRR_MASK)
		                            >>CSMCC_ONE_BIT_OFFSET);
 (app_bc_ptr->octet4).configuration = ((*peer_bc_octet_ptr &
                          CSMCC_PEER_BC_CFG_MASK) >>CSMCC_TWO_BIT_OFFSET);
 (app_bc_ptr->octet4).duplex_mode = ((*peer_bc_octet_ptr &
                          CSMCC_PEER_BC_DM_MASK)>>CSMCC_THREE_BIT_OFFSET);
 (app_bc_ptr->octet4).structure = \
  ((*peer_bc_octet_ptr & CSMCC_PEER_BC_STR_MASK)>>CSMCC_FOUR_BIT_OFFSET);
 (app_bc_ptr->octet4).compress = \
  ((*peer_bc_octet_ptr & CSMCC_PEER_BC_COMP_MASK)>>CSMCC_SIX_BIT_OFFSET);
 
return(BC_OCTET5);
}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet5
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet5(csmcc_bc_struct *app_bc_ptr , 
                         kal_uint8 *peer_bc_octet_ptr)
{
  app_bc_ptr->octet5_present = KAL_TRUE;

 (app_bc_ptr->octet5).siganaling_access_protocol =
    (*peer_bc_octet_ptr & CSMCC_PEER_BC_SAP_MASK);

 (app_bc_ptr->octet5).rate_adaption = \
  ((*peer_bc_octet_ptr & CSMCC_PEER_BC_RA_MASK)>>CSMCC_THREE_BIT_OFFSET );
 
 /* check ext bit to decide next octet is 5a or 6 */
 if((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK ) == 0x00)
  {
   return(BC_OCTET5A);
  }
 else
  {
   return(BC_OCTET6);
  }   
} 
 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet5a
*
* DESCRIPTION                                                           
*	  This function implements bearer capability  unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet5a (csmcc_bc_struct *app_bc_ptr,
                           kal_uint8 *peer_bc_octet_ptr )
{
  app_bc_ptr->octet5a_present = KAL_TRUE ;
  	
 (app_bc_ptr->octet5a).other_rate_adaption = ((*peer_bc_octet_ptr & 
           CSMCC_PEER_BC_ORA_MASK) >> CSMCC_THREE_BIT_OFFSET);

 (app_bc_ptr->octet5a).other_ITC =\
 ((*peer_bc_octet_ptr &CSMCC_PEER_BC_OITC_MASK) >> CSMCC_FIVE_BIT_OFFSET);

 /* check ext bit to decide next octet is 5b or 6 */
 if((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0x00)
  {
   return(BC_OCTET5B);
  }
 else
  {
   return(BC_OCTET6);
  }
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet5b
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet5b (csmcc_bc_struct *app_bc_ptr, 
                           kal_uint8 *peer_bc_octet_ptr)
{
  app_bc_ptr->octet5b_present = KAL_TRUE ;	
  
 (app_bc_ptr->octet5b).inband_negotiation = ((*peer_bc_octet_ptr &
		     CSMCC_PEER_BC_INB_MASK ) >> CSMCC_ONE_BIT_OFFSET);

 (app_bc_ptr->octet5b).assignor = 
   ( (*peer_bc_octet_ptr & CSMCC_PEER_BC_ASS_MASK)
                                    >> CSMCC_TWO_BIT_OFFSET);
 
 (app_bc_ptr->octet5b).LLI  =((*peer_bc_octet_ptr
		    & CSMCC_PEER_BC_LLI_MASK) >>CSMCC_THREE_BIT_OFFSET);
 
 (app_bc_ptr->octet5b).mode =((*peer_bc_octet_ptr
		    & CSMCC_PEER_BC_MODE_MASK)>> CSMCC_FOUR_BIT_OFFSET);

 (app_bc_ptr->octet5b).multi_frame = ((*peer_bc_octet_ptr
	            &CSMCC_PEER_BC_MF_MASK) >> CSMCC_FIVE_BIT_OFFSET);    
 
 (app_bc_ptr->octet5b).hdr_or_no_hdr = ((*peer_bc_octet_ptr
		    & CSMCC_PEER_BC_HDR_MASK) >> CSMCC_SIX_BIT_OFFSET);

 return(BC_OCTET6); 
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet6
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet6(csmcc_bc_struct *app_bc_ptr,
                         kal_uint8	* peer_bc_octet_ptr)
{
 app_bc_ptr->octet6_present = KAL_TRUE;	
 
 (app_bc_ptr->octet6).sync_or_async = (*peer_bc_octet_ptr & 
				     CSMCC_PEER_BC_SYNC_MASK);
 (app_bc_ptr->octet6).user_info_layer1_protocol =
  (( *peer_bc_octet_ptr & CSMCC_PEER_BC_UIL1_MASK) >> 
                                      CSMCC_ONE_BIT_OFFSET);
 if(( *peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0x00)
  {
   return(BC_OCTET6A);
  }
 else
  {
   return(BC_OCTET7);
  }
}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet6a
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 
csmcc_form_app_bc_octet6a(csmcc_bc_struct *app_bc_ptr ,
                          kal_uint8 *peer_bc_octet_ptr)
                           
{                                                           
  app_bc_ptr->octet6a_present = KAL_TRUE;	                                
         
 (app_bc_ptr->octet6a).user_rate = (*peer_bc_octet_ptr & 
			  CSMCC_PEER_BC_URT_MASK);                   
 (app_bc_ptr->octet6a).number_data_bits = ((*peer_bc_octet_ptr &
			CSMCC_PEER_BC_NDB_MASK) >> CSMCC_FOUR_BIT_OFFSET);
 (app_bc_ptr->octet6a).negotiation =((*peer_bc_octet_ptr & 
			CSMCC_PEER_BC_NEG_MASK) >> CSMCC_FIVE_BIT_OFFSET);
 (app_bc_ptr->octet6a).number_stop_bits =((*peer_bc_octet_ptr &
			CSMCC_PEER_BC_NSB_MASK) >> CSMCC_SIX_BIT_OFFSET);
                                                                 
 if((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0x00)
  {
   return(BC_OCTET6B) ;                                     
  }
  else
  {                                                        
   return(BC_OCTET7);                                     
  }                                                                     
 /*return(BC_OCTET_NONE); by# :unreachable */
}  
                                                                      
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet6b
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet6b(csmcc_bc_struct *app_bc_ptr ,
                          kal_uint8 *peer_bc_octet_ptr)
{                                                                    
  app_bc_ptr->octet6b_present = KAL_TRUE;	                                                     
  
 (app_bc_ptr->octet6b).parity = (*peer_bc_octet_ptr & 
		  CSMCC_PEER_BC_PAR_MASK);
 (app_bc_ptr->octet6b).NIC_on_RX = ((*peer_bc_octet_ptr &
		CSMCC_PEER_BC_NICR_MASK) >> CSMCC_THREE_BIT_OFFSET);
 (app_bc_ptr->octet6b).NIC_on_TX =((*peer_bc_octet_ptr & 
		CSMCC_PEER_BC_NICT_MASK) >> CSMCC_FOUR_BIT_OFFSET);
 (app_bc_ptr->octet6b).intermediate_rate =((*peer_bc_octet_ptr &
		CSMCC_PEER_BC_INRT_MASK) >> CSMCC_FIVE_BIT_OFFSET);
                                                                 
 if((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0x00)            
  {                                                                      
   return(BC_OCTET6C) ;
  }                                                            
  else                                                          
  {                                                               
   return(BC_OCTET7);
  }                                       
  /*return(BC_OCTET_NONE); by #:unreachable */
}                                              
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet6c
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet6c(csmcc_bc_struct *app_bc_ptr,
                          kal_uint8 *peer_bc_octet_ptr)
{                                                            
  app_bc_ptr->octet6c_present = KAL_TRUE;	                                                    
  
 (app_bc_ptr->octet6c).modem_type = (*peer_bc_octet_ptr & 
		  CSMCC_PEER_BC_MODT_MASK);                     
 (app_bc_ptr->octet6c).connection_element = ((*peer_bc_octet_ptr &
		CSMCC_PEER_BC_CE_MASK) >> CSMCC_FIVE_BIT_OFFSET);
                                                               
 if((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0x00)
  {                                                      
   return(BC_OCTET6D) ;                     
  }                              
  else                                                    
  {                                                        
   return(BC_OCTET7);
  }                                              
}     

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet6d
*
* DESCRIPTION                                                           
*	  This function implements bearer capability  unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet6d(csmcc_bc_struct *app_bc_ptr,
                          kal_uint8 *peer_bc_octet_ptr)
{
 app_bc_ptr->octet6d_present = KAL_TRUE;
 	
 (app_bc_ptr->octet6d).fixed_network_user_rate = \
     (*peer_bc_octet_ptr & CSMCC_PEER_BC_FNUR_MASK);
 (app_bc_ptr->octet6d).other_modem_type = ((*peer_bc_octet_ptr &
     		  CSMCC_PEER_BC_OMT_MASK) >> CSMCC_FIVE_BIT_OFFSET);

 if((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0x00)
  {
   return(BC_OCTET6E) ;
  }
  else
  {
   return(BC_OCTET7);
  }
}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet6e
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet6e(csmcc_bc_struct *app_bc_ptr,
                          kal_uint8 *peer_bc_octet_ptr)
{

  app_bc_ptr->octet6e_present = KAL_TRUE;
     
 (app_bc_ptr->octet6e).max_num_traffic_channels = \
     (*peer_bc_octet_ptr & CSMCC_PEER_BC_MAXTC_MASK);
 (app_bc_ptr->octet6e).accptable_channel_coding= \
     ((*peer_bc_octet_ptr & CSMCC_PEER_BC_ACSMCC_MASK) >>\
      CSMCC_THREE_BIT_OFFSET);

 if((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0x00)
  {
   return(BC_OCTET6F) ;
  }
  else
  {
   return(BC_OCTET7);
  }
}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet6f
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet6f(csmcc_bc_struct *app_bc_ptr,
                          kal_uint8 *peer_bc_octet_ptr)
{
 app_bc_ptr->octet6f_present = KAL_TRUE;

 (app_bc_ptr->octet6f).wanted_air_interface_user_rate = \
     	(*peer_bc_octet_ptr & CSMCC_PEER_BC_AIUR_MASK);
 (app_bc_ptr->octet6f).UIMI= ((*peer_bc_octet_ptr &
		CSMCC_PEER_BC_UIMI_MASK) >> CSMCC_FOUR_BIT_OFFSET);

 if((*peer_bc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0)
  {
   return(BC_OCTET6G) ;
  }
  else
  {
   return(BC_OCTET7);
  }
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet6g
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet6g(csmcc_bc_struct *app_bc_ptr,
                          kal_uint8 *peer_bc_octet_ptr)
{
  app_bc_ptr->octet6g_present = KAL_TRUE;

 (app_bc_ptr->octet6g).asymmetry_ind = ((*peer_bc_octet_ptr & 
		  CSMCC_PEER_BC_AI_MASK) >> CSMCC_TWO_BIT_OFFSET );
 (app_bc_ptr->octet6g).accptable_channel_coding_ext= \
     ((*peer_bc_octet_ptr & CSMCC_PEER_BC_ACCE_MASK)  \
      >> CSMCC_FOUR_BIT_OFFSET);

 return(BC_OCTET7);
}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_octet7
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_bc_octet7(csmcc_bc_struct *app_bc_ptr,
                         kal_uint8 *peer_bc_octet_ptr)
{
 app_bc_ptr->octet7_present = KAL_TRUE;
 (app_bc_ptr->octet7).user_info_layer2_protocol = \
     (*peer_bc_octet_ptr & CSMCC_PEER_BC_UIL2_MASK);
  
 return(BC_OCTET_NONE);
}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc_func_init
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void csmcc_form_app_bc_func_init(                                    
	func_app_bc_ptr *csmcc_form_app_bc_octet_func)
{
                                                                                                                       
 csmcc_form_app_bc_octet_func[BC_OCTET3 ] = csmcc_form_app_bc_octet3;
 csmcc_form_app_bc_octet_func[BC_OCTET3A] = csmcc_form_app_bc_octet3a;
 csmcc_form_app_bc_octet_func[BC_OCTET4 ] = csmcc_form_app_bc_octet4;
 csmcc_form_app_bc_octet_func[BC_OCTET5 ] = csmcc_form_app_bc_octet5;
 csmcc_form_app_bc_octet_func[BC_OCTET5A] = csmcc_form_app_bc_octet5a;
 csmcc_form_app_bc_octet_func[BC_OCTET5B] = csmcc_form_app_bc_octet5b;
 csmcc_form_app_bc_octet_func[BC_OCTET6 ] = csmcc_form_app_bc_octet6;
 csmcc_form_app_bc_octet_func[BC_OCTET6A] = csmcc_form_app_bc_octet6a;
 csmcc_form_app_bc_octet_func[BC_OCTET6B] = csmcc_form_app_bc_octet6b;
 csmcc_form_app_bc_octet_func[BC_OCTET6C] = csmcc_form_app_bc_octet6c;
 csmcc_form_app_bc_octet_func[BC_OCTET6D] = csmcc_form_app_bc_octet6d;
 csmcc_form_app_bc_octet_func[BC_OCTET6E] = csmcc_form_app_bc_octet6e;
 csmcc_form_app_bc_octet_func[BC_OCTET6F] = csmcc_form_app_bc_octet6f;
 csmcc_form_app_bc_octet_func[BC_OCTET6G] = csmcc_form_app_bc_octet6g;
 csmcc_form_app_bc_octet_func[BC_OCTET7 ] = csmcc_form_app_bc_octet7;
                                                                      
} 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_init_app_bc_octet
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void 
csmcc_init_app_bc_octet ( csmcc_bc_struct *app_bc_ptr )
{
 app_bc_ptr->num_octet3a      = CSMCC_KAL_U_ZERO;
 app_bc_ptr->octet4_present   = KAL_FALSE;
 app_bc_ptr->octet5_present   = KAL_FALSE;
 app_bc_ptr->octet5a_present  = KAL_FALSE;
 app_bc_ptr->octet5b_present  = KAL_FALSE;
 app_bc_ptr->octet6_present   = KAL_FALSE;
 app_bc_ptr->octet6a_present  = KAL_FALSE;
 app_bc_ptr->octet6b_present  = KAL_FALSE;
 app_bc_ptr->octet6c_present  = KAL_FALSE;
 app_bc_ptr->octet6d_present  = KAL_FALSE;
 app_bc_ptr->octet6e_present  = KAL_FALSE;
 app_bc_ptr->octet6f_present  = KAL_FALSE;
 app_bc_ptr->octet6g_present  = KAL_FALSE;
 app_bc_ptr->octet7_present   = KAL_FALSE;

}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_bc
*
* DESCRIPTION                                                           
*	  This function implements bearer capability unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	peer_bc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_form_app_bc(csmcc_bc_struct *app_bc_ptr,
                  mncc_bc_struct *peer_bc_ptr) 
{
  kal_uint8 offset = 0;
  kal_uint8 next_octet = 0; 
  func_app_bc_ptr csmcc_form_app_bc_octet_func[MAX_OCTET_BC]; 
  func_app_bc_ptr next_func_ptr;
  kal_uint8 *peer_bc_octet_ptr;
 
  csmcc_form_app_bc_func_init(csmcc_form_app_bc_octet_func);

  csmcc_init_app_bc_octet ( app_bc_ptr );

  next_func_ptr = csmcc_form_app_bc_octet3; 

  for(offset = 0 ; offset < peer_bc_ptr->no_value ; offset++ )
  {
    peer_bc_octet_ptr =(kal_uint8 *)&(peer_bc_ptr->value[offset]);
   
    if(next_func_ptr !=NULL)   {
      next_octet = (*next_func_ptr)(app_bc_ptr , peer_bc_octet_ptr);
    }
   
    if(next_octet == BC_OCTET_NONE) {
        break;
    }

    next_func_ptr = csmcc_form_app_bc_octet_func[next_octet];  
   }
 
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet3
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet3 (kal_uint8 *peer_llc_octet_ptr,
                            csmcc_llc_struct *app_llc_ptr )
{
  *peer_llc_octet_ptr = \
    (app_llc_ptr->information_transfer_capability & \
     				CSMCC_FIVE_BIT_MASK);
  
  if(app_llc_ptr->octet3a_present)
   {
    *peer_llc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
    return(LLC_OCTET3A);
   }
  
  *peer_llc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);  
  return(LLC_OCTET4);  

}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet3a
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet3a (kal_uint8 *peer_llc_octet_ptr,
                             csmcc_llc_struct *app_llc_ptr )
{
  *peer_llc_octet_ptr |= \
     (((app_llc_ptr->octet3a).negotiation_indicator & \
       CSMCC_ONE_BIT_MASK) 
                     << CSMCC_FIVE_BIT_OFFSET );
  *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET );			
 return(LLC_OCTET4);			

}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet4
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet4 ( kal_uint8 *peer_llc_octet_ptr,
                             csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = app_llc_ptr->information_transfer_rate ;
 
 *peer_llc_octet_ptr |=\
     (( app_llc_ptr->transfer_mode & CSMCC_TWO_BIT_MASK) <<
                        CSMCC_FIVE_BIT_OFFSET);
			 
 *peer_llc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET )  ;
 
if ( app_llc_ptr->information_transfer_rate == 0x18 ) {
  return(LLC_OCTET4A);
}

if(app_llc_ptr->octet5_present) {
  return(LLC_OCTET5);
}

if(app_llc_ptr->octet6_present) {
  return(LLC_OCTET6);
}
if(app_llc_ptr->octet7_present) {
  return(LLC_OCTET7);
}			 

  return(LLC_OCTET_NONE);
}			 

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet4a
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet4a (kal_uint8 *peer_llc_octet_ptr,
                             csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr |= \
     ((app_llc_ptr->octet4a).rate_multiplier & CSMCC_SEVEN_BIT_MASK);
 *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET ) ;
 
 if(app_llc_ptr->octet5_present) {
  return(LLC_OCTET5);
 }
 
 if(app_llc_ptr->octet6_present) {
  return(LLC_OCTET6);
 }
 
if(app_llc_ptr->octet7_present) {
  return(LLC_OCTET7);
}
     
  return(LLC_OCTET_NONE);
 
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet5
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet5 (kal_uint8 *peer_llc_octet_ptr,
                            csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = ( 1 << 5 );
 *peer_llc_octet_ptr |= \
     (app_llc_ptr->octet5).user_info_layer1_protocol ;

 if (app_llc_ptr->octet5a_present)
  {
   *peer_llc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET5A);
  } 
 
  if (app_llc_ptr->octet5c_present)
  {
   *peer_llc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET5C);
  }

  if(app_llc_ptr->octet5d_present)
  {
   *peer_llc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET5D);
  }
  
   *peer_llc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
  if(app_llc_ptr->octet6_present)
  {
   return(LLC_OCTET6);
  }

  if(app_llc_ptr->octet7_present)
  {
   return(LLC_OCTET7);
  }

  return(LLC_OCTET_NONE);
      
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet5a
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet5a (kal_uint8 *peer_llc_octet_ptr,
                             csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = \
     ((app_llc_ptr->octet5a).user_rate) & CSMCC_FIVE_BIT_MASK;
 
 *peer_llc_octet_ptr |=\
     (((app_llc_ptr->octet5a).negotiation & CSMCC_ONE_BIT_MASK) 
                        << CSMCC_FIVE_BIT_OFFSET );
 *peer_llc_octet_ptr |=\
     (((app_llc_ptr->octet5a).synchronous_flag & CSMCC_ONE_BIT_MASK) 
                        << CSMCC_SIX_BIT_OFFSET );
 if ((app_llc_ptr->octet5).user_info_layer1_protocol == 0x01)
  {
   *peer_llc_octet_ptr |=( 0 << CSMCC_SEVEN_BIT_OFFSET) ;
   return(LLC_OCTET5B1);
  }
 
 if ((app_llc_ptr->octet5).user_info_layer1_protocol == 0x08)
  {
   *peer_llc_octet_ptr |=( 0 << CSMCC_SEVEN_BIT_OFFSET) ;
   return(LLC_OCTET5B2);
  }
 
 if (app_llc_ptr->octet5c_present)  			
  {
   *peer_llc_octet_ptr |=( 0 << CSMCC_SEVEN_BIT_OFFSET) ;
   return(LLC_OCTET5C);
  }

 if (app_llc_ptr->octet5d_present)  			
  {
   *peer_llc_octet_ptr |=( 0 << CSMCC_SEVEN_BIT_OFFSET) ;
   return(LLC_OCTET5D);
  }

   *peer_llc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET6);
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet5b1
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet5b1 (kal_uint8 *peer_llc_octet_ptr,
                              csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr |= \
     ( ((app_llc_ptr->octet5b1).flow_control_on_Rx & \
	CSMCC_ONE_BIT_MASK ) << CSMCC_ONE_BIT_OFFSET );

 *peer_llc_octet_ptr |= \
     ( ((app_llc_ptr->octet5b1).flow_control_on_Tx & \
	CSMCC_ONE_BIT_MASK ) << CSMCC_TWO_BIT_OFFSET );

 *peer_llc_octet_ptr |= \
     ( ((app_llc_ptr->octet5b1).NIC_on_Rx  & \
	CSMCC_ONE_BIT_MASK ) << CSMCC_THREE_BIT_OFFSET );

 *peer_llc_octet_ptr |= \
     ( ((app_llc_ptr->octet5b1).NIC_on_Tx  & \
	CSMCC_ONE_BIT_MASK ) << CSMCC_FOUR_BIT_OFFSET );
			
 *peer_llc_octet_ptr |= \
     ( ((app_llc_ptr->octet5b1).intermediate_rate  & \
	CSMCC_TWO_BIT_MASK ) << CSMCC_FIVE_BIT_OFFSET );
			
 if (app_llc_ptr->octet5c_present)  			
  {
   *peer_llc_octet_ptr |=( 0 << CSMCC_SEVEN_BIT_OFFSET) ;
   return(LLC_OCTET5C);
  }

 if (app_llc_ptr->octet5d_present)  			
  {
   *peer_llc_octet_ptr |=( 0 << CSMCC_SEVEN_BIT_OFFSET) ;
   return(LLC_OCTET5D);
  }

   *peer_llc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET6);
			

}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet5b2
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet5b2 (kal_uint8 *peer_llc_octet_ptr,
                              csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr |= \
     ( ((app_llc_ptr->octet5b2).inband_negotiation & \
	CSMCC_ONE_BIT_MASK ) << CSMCC_ONE_BIT_OFFSET );

 *peer_llc_octet_ptr |= ( ((app_llc_ptr->octet5b2).assignor  & 
                        CSMCC_ONE_BIT_MASK ) << CSMCC_TWO_BIT_OFFSET );

 *peer_llc_octet_ptr |= ( ((app_llc_ptr->octet5b2).LLI_negotiation &
                        CSMCC_ONE_BIT_MASK ) << CSMCC_THREE_BIT_OFFSET );

 *peer_llc_octet_ptr |= ( ((app_llc_ptr->octet5b2).mode_of_layer1  & 
                        CSMCC_ONE_BIT_MASK ) << CSMCC_FOUR_BIT_OFFSET );
			
 *peer_llc_octet_ptr |= ( ((app_llc_ptr->octet5b2).multi_frame  & 
                        CSMCC_ONE_BIT_MASK ) << CSMCC_FIVE_BIT_OFFSET );
 
 *peer_llc_octet_ptr |= ( ((app_llc_ptr->octet5b2).header_flag  & 
                        CSMCC_ONE_BIT_MASK ) << CSMCC_SIX_BIT_OFFSET );
			
 if (app_llc_ptr->octet5c_present)  			
  {
   *peer_llc_octet_ptr |=( 0 << CSMCC_SEVEN_BIT_OFFSET) ;
   return(LLC_OCTET5C);
  }

 if (app_llc_ptr->octet5d_present)  			
  {
   *peer_llc_octet_ptr |=( 0 << CSMCC_SEVEN_BIT_OFFSET) ;
   return(LLC_OCTET5D);
  }

   *peer_llc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET6);
			
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet5c
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet5c (kal_uint8 *peer_llc_octet_ptr,
                             csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = \
     ((app_llc_ptr->octet5c).parity & CSMCC_THREE_BIT_MASK );
 
 *peer_llc_octet_ptr |= \
     ( ((app_llc_ptr->octet5c).number_of_data_bits  & 
          CSMCC_TWO_BIT_MASK ) << CSMCC_THREE_BIT_OFFSET );
			
 *peer_llc_octet_ptr |= \
     ( ((app_llc_ptr->octet5c).number_of_stop_bits  & 
       CSMCC_TWO_BIT_MASK ) << CSMCC_FIVE_BIT_OFFSET );

 if (app_llc_ptr->octet5d_present)  			
  {
   *peer_llc_octet_ptr |=( 0 << CSMCC_SEVEN_BIT_OFFSET) ;
   return(LLC_OCTET5D);
  }

   *peer_llc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);

 if (app_llc_ptr->octet6_present)
 {
   return(LLC_OCTET6);
 }

 return(LLC_OCTET_NONE);

}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet5d
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet5d (kal_uint8 *peer_llc_octet_ptr,
                             csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = \
     ((app_llc_ptr->octet5d).modem_type & CSMCC_SIX_BIT_MASK );
 
 *peer_llc_octet_ptr |= \
     ( ((app_llc_ptr->octet5d).duplex_mode  & 
       CSMCC_ONE_BIT_MASK ) << CSMCC_SIX_BIT_OFFSET );

 *peer_llc_octet_ptr |= (1 << CSMCC_SEVEN_BIT_OFFSET);
 return(LLC_OCTET6);
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet6
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet6 (kal_uint8 *peer_llc_octet_ptr,
                            csmcc_llc_struct *app_llc_ptr )
{
 
 *peer_llc_octet_ptr = ( 1 << 6); 
 *peer_llc_octet_ptr |= \
    ((app_llc_ptr->octet6).user_info_layer2_protocol &\
     CSMCC_FIVE_BIT_MASK );
 
 if(((app_llc_ptr->octet6).user_info_layer2_protocol == 0x09)||
    ((app_llc_ptr->octet6).user_info_layer2_protocol == 0x0A)||
    ((app_llc_ptr->octet6).user_info_layer2_protocol == 0x0B)
   )
 {
  *peer_llc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET6A1);
 }
else
 if ((app_llc_ptr->octet6).user_info_layer2_protocol == 0x10)
  {
   *peer_llc_octet_ptr |= (0 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET6A2);
  }
  
 *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET ); 
 return(LLC_OCTET7);
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet6a1
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet6a1 (kal_uint8 *peer_llc_octet_ptr,
                              csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = \
     ((app_llc_ptr->octet6a1).Q933_use & CSMCC_TWO_BIT_MASK );
 
 *peer_llc_octet_ptr |= \
     (((app_llc_ptr->octet6a1).mode_of_layer2 & CSMCC_TWO_BIT_MASK )
                        << CSMCC_FIVE_BIT_OFFSET );

 if(app_llc_ptr->octet6b_present)			
  {
   *peer_llc_octet_ptr |= ( 0 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET6B);
  }
  
   *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET7);
  
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet6a2
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet6a2 (kal_uint8 *peer_llc_octet_ptr,
                              csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = \
     ((app_llc_ptr->octet6a2).user_specified_layer2_protocol_info
       & CSMCC_SEVEN_BIT_MASK );

 *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
 return(LLC_OCTET7);
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet6b
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet6b (kal_uint8 *peer_llc_octet_ptr,
                             csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = \
     ((app_llc_ptr->octet6b).window_size &CSMCC_SEVEN_BIT_MASK );

 *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
 return(LLC_OCTET7);
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet7
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet7 (kal_uint8 *peer_llc_octet_ptr,
                            csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = app_llc_ptr->userInfoLayer3Protocol ;
 
 if ( (app_llc_ptr->userInfoLayer3Protocol) == 0x10)
  {
  *peer_llc_octet_ptr |= ( 0 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET7A1);
  }
 if ( ((app_llc_ptr->userInfoLayer3Protocol) == 0x06) ||
      ((app_llc_ptr->userInfoLayer3Protocol) == 0x07) ||
      ((app_llc_ptr->userInfoLayer3Protocol) == 0x08)
    ) 
  {
  *peer_llc_octet_ptr |= ( 0 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET7A2);
  }
 
 if ( (app_llc_ptr->userInfoLayer3Protocol) == 0x0B)
  {
  *peer_llc_octet_ptr |= ( 0 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET7A3);
  }

  *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
   return(LLC_OCTET_NONE);

}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet7a1
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet7a1 (kal_uint8 *peer_llc_octet_ptr,
                              csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = \
     ((app_llc_ptr->octet7a1).optional_layer3_protocol_info 
                                       & CSMCC_SEVEN_BIT_MASK );

 *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET_NONE);
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet7a2
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet7a2 (kal_uint8 *peer_llc_octet_ptr,
                              csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = \
     (((app_llc_ptr->octet7a2).mode_of_layer3 & CSMCC_SEVEN_BIT_MASK )
                        << CSMCC_FIVE_BIT_OFFSET );
 
 if(app_llc_ptr->octet7b1_present)
 {
  *peer_llc_octet_ptr |= ( 0 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET7B1);
 }
 
 if(app_llc_ptr->octet7c_present)
 {
  *peer_llc_octet_ptr |= ( 0 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET7B1);
 }

 *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET_NONE);

}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet7a3
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet7a3 (kal_uint8 *peer_llc_octet_ptr,
                              csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr =\
     ((app_llc_ptr->octet7a3).additional_layer3_protocol_info_MSB &
                       CSMCC_FOUR_BIT_MASK );
		        
  *peer_llc_octet_ptr |= ( 0 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET7B2);
                      

}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet7b1
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet7b1 (kal_uint8 *peer_llc_octet_ptr,
                              csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = ((app_llc_ptr->octet7b1).default_packet_size &
                       CSMCC_FOUR_BIT_MASK );
		        
  
  if(app_llc_ptr->octet7c_present)
  {
  *peer_llc_octet_ptr |= ( 0 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET7C);
  }
 *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET_NONE);
}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet7b2
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet7b2 (kal_uint8 *peer_llc_octet_ptr,
                              csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = \
     ((app_llc_ptr->octet7b2).additional_layer3_protocol_info_LSB &
                       CSMCC_FOUR_BIT_MASK );
		        
 *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET_NONE);

}			 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_octet7c
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_peer_llc_octet7c (kal_uint8 *peer_llc_octet_ptr,
                             csmcc_llc_struct *app_llc_ptr )
{
 *peer_llc_octet_ptr = ((app_llc_ptr->octet7c).packet_window_size &
                       CSMCC_SEVEN_BIT_MASK );
		        
 *peer_llc_octet_ptr |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
  return(LLC_OCTET_NONE);
}			 

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc_func_init
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_octet_ptr	-	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void 
csmcc_form_peer_llc_func_init(
	func_peer_llc_ptr *csmcc_form_peer_llc_octet_func)
{
 csmcc_form_peer_llc_octet_func[LLC_OCTET3] =\
    				 csmcc_form_peer_llc_octet3 ;
 csmcc_form_peer_llc_octet_func[LLC_OCTET3A] = \
     				csmcc_form_peer_llc_octet3a;
 csmcc_form_peer_llc_octet_func[LLC_OCTET4 ] = \
     				csmcc_form_peer_llc_octet4 ;
 csmcc_form_peer_llc_octet_func[LLC_OCTET4A] = \
     				csmcc_form_peer_llc_octet4a ;
 csmcc_form_peer_llc_octet_func[LLC_OCTET5]  = \
     				csmcc_form_peer_llc_octet5;
 csmcc_form_peer_llc_octet_func[LLC_OCTET5A] = \
     				csmcc_form_peer_llc_octet5a;
 csmcc_form_peer_llc_octet_func[LLC_OCTET5B1]= \
     				csmcc_form_peer_llc_octet5b1;
 csmcc_form_peer_llc_octet_func[LLC_OCTET5B2]= \
     				csmcc_form_peer_llc_octet5b2;
 csmcc_form_peer_llc_octet_func[LLC_OCTET5C] = \
     				csmcc_form_peer_llc_octet5c;
 csmcc_form_peer_llc_octet_func[LLC_OCTET5D] = 
    				 csmcc_form_peer_llc_octet5d;
 csmcc_form_peer_llc_octet_func[LLC_OCTET6]  = \
     				csmcc_form_peer_llc_octet6;
 csmcc_form_peer_llc_octet_func[LLC_OCTET6A1]= \
     				csmcc_form_peer_llc_octet6a1;
 csmcc_form_peer_llc_octet_func[LLC_OCTET6A2]=\
    				 csmcc_form_peer_llc_octet6a2;
 csmcc_form_peer_llc_octet_func[LLC_OCTET6B] = \
     				csmcc_form_peer_llc_octet6b;
 csmcc_form_peer_llc_octet_func[LLC_OCTET7 ] = \
     				csmcc_form_peer_llc_octet7 ;
 csmcc_form_peer_llc_octet_func[LLC_OCTET7A1]= \
     				csmcc_form_peer_llc_octet7a1;
 csmcc_form_peer_llc_octet_func[LLC_OCTET7A2]= \
     				csmcc_form_peer_llc_octet7a2;
 csmcc_form_peer_llc_octet_func[LLC_OCTET7A3]=\
    				 csmcc_form_peer_llc_octet7a3;
 csmcc_form_peer_llc_octet_func[LLC_OCTET7B1]=\
    				 csmcc_form_peer_llc_octet7b1;
 csmcc_form_peer_llc_octet_func[LLC_OCTET7B2]=\
    				 csmcc_form_peer_llc_octet7b2 ;
 csmcc_form_peer_llc_octet_func[LLC_OCTET7C] = \
     				csmcc_form_peer_llc_octet7c ;
} 

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability packing function.
*
* PARAMETERS
*	peer_llc_ptr -	
*	app_llc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_form_peer_llc(mncc_llc_struct *peer_llc_ptr,
                    csmcc_llc_struct *app_llc_ptr)
		 
{
  kal_uint8 offset = 0;
  kal_uint8 next_octet = LLC_OCTET3; 
  func_peer_llc_ptr csmcc_form_peer_llc_octet_func[TOTAL_LLC_OCTET];
  func_peer_llc_ptr next_func_ptr;
  kal_uint8 *peer_llc_octet_ptr = 0;

  csmcc_form_peer_llc_func_init(csmcc_form_peer_llc_octet_func);

  next_func_ptr = csmcc_form_peer_llc_octet3; 

  for(offset = 0 ; offset < MAX_OCTET_LLC ; offset++ )
  {
   if(next_octet == LLC_OCTET_NONE) {
   break;
   }
     
   peer_llc_octet_ptr =(kal_uint8 *)&(peer_llc_ptr->value[offset]);
   *peer_llc_octet_ptr = 0;
   next_func_ptr = csmcc_form_peer_llc_octet_func[next_octet];
   
   if(next_func_ptr !=NULL)  {
      next_octet = (*next_func_ptr)(peer_llc_octet_ptr ,app_llc_ptr);
   }
   }

 peer_llc_ptr->no_value = offset;

}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet3
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet3(csmcc_llc_struct *app_llc_ptr,
                       kal_uint8 *peer_llc_octet_ptr)
{
  app_llc_ptr->information_transfer_capability = \
      *peer_llc_octet_ptr & CSMCC_PEER_LLC_ITC_MASK;
  
  if((*peer_llc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0 )
   {
     app_llc_ptr->octet3a_present = KAL_TRUE;
     return(LLC_OCTET3A);
   }
  else
   {
    app_llc_ptr->octet3a_present = KAL_FALSE;
    return(LLC_OCTET4);
   }
}      
 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet3a
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet3a(csmcc_llc_struct *app_llc_ptr,
                        kal_uint8 *peer_llc_octet_ptr)
{
  (app_llc_ptr->octet3a).negotiation_indicator = 
       ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_NI_MASK)\
                                          >> CSMCC_SIX_BIT_OFFSET);
  return(LLC_OCTET4);
}      

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet4
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet4(csmcc_llc_struct *app_llc_ptr,
                       kal_uint8 *peer_llc_octet_ptr) {
  app_llc_ptr->information_transfer_rate = \
      (*peer_llc_octet_ptr & CSMCC_PEER_LLC_ITR_MASK);

    app_llc_ptr->transfer_mode = \
	((*peer_llc_octet_ptr & CSMCC_PEER_LLC_TM_MASK) >> 
          CSMCC_FIVE_BIT_OFFSET);

  if((*peer_llc_octet_ptr & CSMCC_PEER_LLC_ITR_MASK) == 0x18) 
   {
    return(LLC_OCTET4A);
   }  
  else
  {
    if (((*peer_llc_octet_ptr & CSMCC_PEER_LLC_TM_MASK) 
          << CSMCC_FIVE_BIT_OFFSET) == 0x00)
     {
      if( (app_llc_ptr->information_transfer_capability == 0x08) ||
          (app_llc_ptr->information_transfer_capability == 0x09) || 
          (app_llc_ptr->information_transfer_capability == 0x10 ))
       {
        app_llc_ptr->octet5_present = KAL_TRUE;
	    return(LLC_OCTET5);
       }
      else
       {
	    app_llc_ptr->octet5_present = KAL_FALSE;
	    return(LLC_OCTET_NONE);
       }
   
     }      
  }
 return(LLC_OCTET_NONE); 
} 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet4a
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet4a(csmcc_llc_struct *app_llc_ptr,
                        kal_uint8 *peer_llc_octet_ptr)
{
  (app_llc_ptr->octet4a).rate_multiplier =\
      (*peer_llc_octet_ptr & CSMCC_PEER_LLC_RM_MASK);
    
  if ( app_llc_ptr->transfer_mode == 0x00)
   {
    if( (app_llc_ptr->information_transfer_capability == 0x08) ||
        (app_llc_ptr->information_transfer_capability == 0x09) ||
        (app_llc_ptr->information_transfer_capability == 0x10) )
     {
      app_llc_ptr->octet5_present = KAL_TRUE;
      return(LLC_OCTET5);
     }
    else
     {
      app_llc_ptr->octet5_present = KAL_FALSE;
     }
   
   }
  app_llc_ptr->octet6_present = KAL_TRUE;
  return(LLC_OCTET6);  
}  			       

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet5
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet5(csmcc_llc_struct *app_llc_ptr,
                       kal_uint8 *peer_llc_octet_ptr)
{
    /*Fill user_info_layer1_protocol*/
  (app_llc_ptr->octet5).user_info_layer1_protocol =  \
               (*peer_llc_octet_ptr & CSMCC_PEER_LLC_UIL1_MASK);
  
   /*if information_transfer_capability is 0x8 and UIL is 1 or 8
    *set octet5a to true*/
  
  if( (app_llc_ptr->information_transfer_capability == 0x08) &&
     ( (  (*peer_llc_octet_ptr & CSMCC_PEER_LLC_UIL1_MASK) == 0x01)  ||
       (  (*peer_llc_octet_ptr & CSMCC_PEER_LLC_UIL1_MASK) == 0x08) ) )
       
   {
    app_llc_ptr->octet5a_present = KAL_TRUE;      
    return(LLC_OCTET5A);
   }
   
   /*if information_transfer_capability is 16 and UIL is 2 or 3 
    *set octet5a to true*/
  if( (app_llc_ptr->information_transfer_capability == 0x10) &&
     ( (  (*peer_llc_octet_ptr & CSMCC_PEER_LLC_UIL1_MASK) == 0x02)  ||
       (  (*peer_llc_octet_ptr & CSMCC_PEER_LLC_UIL1_MASK) == 0x03) ) ) 
    
   {
    app_llc_ptr->octet5a_present = KAL_TRUE;      
    return(LLC_OCTET5A);
   }

  /*if UIL is 0x7 set, octet 5a present to true*/ 
  if  (((*peer_llc_octet_ptr) & CSMCC_PEER_LLC_UIL1_MASK) == 0x07)
   {
    app_llc_ptr->octet5a_present = KAL_TRUE;      
    return(LLC_OCTET5A);
   }
    /*else, set octet5a_present to false, and set 
     *octet6_present to true*/
    app_llc_ptr->octet5a_present = KAL_FALSE;      
    app_llc_ptr->octet6_present = KAL_TRUE;

    /*return OCTET_6*/
    return(LLC_OCTET6);

}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet5a
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet5a(csmcc_llc_struct *app_llc_ptr,
                        kal_uint8 *peer_llc_octet_ptr) {
  (app_llc_ptr->octet5a).user_rate = \
      (*peer_llc_octet_ptr & CSMCC_PEER_LLC_URT_MASK);
  (app_llc_ptr->octet5a).negotiation = \
      ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_NEG_MASK )\
                              >> CSMCC_FIVE_BIT_OFFSET);
  (app_llc_ptr->octet5a).synchronous_flag = \
      ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_SYNC_MASK )\
                              >> CSMCC_SIX_BIT_OFFSET);
  			      

  if((app_llc_ptr->octet5).user_info_layer1_protocol == 0x01) {
   return(LLC_OCTET5B1);
  }
   
  if((app_llc_ptr->octet5).user_info_layer1_protocol == 0x08) {
      return(LLC_OCTET5B2);
  }

 return(LLC_OCTET_NONE);
}  			      
  
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet5b1
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet5b1(csmcc_llc_struct *app_llc_ptr,
                         kal_uint8 *peer_llc_octet_ptr) {
  (app_llc_ptr->octet5b1).flow_control_on_Rx =
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_FCR_MASK) \
		         >>CSMCC_ONE_BIT_OFFSET);
  (app_llc_ptr->octet5b1).flow_control_on_Tx =
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_FCT_MASK )\
		          >> CSMCC_TWO_BIT_OFFSET);
  (app_llc_ptr->octet5b1).NIC_on_Rx = 
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_NICR_MASK )\
		           >> CSMCC_THREE_BIT_OFFSET);
			      
  (app_llc_ptr->octet5b1).NIC_on_Tx = 
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_NICT_MASK )\
		           >> CSMCC_FOUR_BIT_OFFSET);

  (app_llc_ptr->octet5b1).intermediate_rate =
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_INTR_MASK )\
		           >> CSMCC_FIVE_BIT_OFFSET);

  if((*peer_llc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK ) == 0x00)
   {
    app_llc_ptr->octet5c_present = KAL_TRUE; 
    return(LLC_OCTET5C);
   } 
  else
   {
    app_llc_ptr->octet5c_present = KAL_FALSE;
    app_llc_ptr->octet6_present = KAL_TRUE;
    return(LLC_OCTET6);
   } 
}  			      
 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet5b2
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet5b2(csmcc_llc_struct *app_llc_ptr,
                         kal_uint8 *peer_llc_octet_ptr) {
  (app_llc_ptr->octet5b2).inband_negotiation =
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_INBN_MASK) \
			     >>CSMCC_ONE_BIT_OFFSET);
  (app_llc_ptr->octet5b2).assignor =
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_ASS_MASK )\
                              >> CSMCC_TWO_BIT_OFFSET);
  (app_llc_ptr->octet5b2).LLI_negotiation = 
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_NLLI_MASK )\
		              >> CSMCC_THREE_BIT_OFFSET);
  (app_llc_ptr->octet5b2).mode_of_layer1 = 
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_MOL1_MASK )\
                              >> CSMCC_FOUR_BIT_OFFSET);
  (app_llc_ptr->octet5b2).multi_frame =
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_MFRM_MASK )\
                              >> CSMCC_FIVE_BIT_OFFSET);
  (app_llc_ptr->octet5b2).header_flag =
                   ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_HDRF_MASK )\
                              >> CSMCC_SIX_BIT_OFFSET);
  

  if((*peer_llc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK ) == 0)
   {
    app_llc_ptr->octet5c_present = KAL_TRUE; 
    return(LLC_OCTET5C);
   } 
  else
   {
    app_llc_ptr->octet5c_present = KAL_FALSE;
    app_llc_ptr->octet6_present = KAL_TRUE;
    return(LLC_OCTET6);
   } 
}  			      
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet5c
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet5c(csmcc_llc_struct *app_llc_ptr,
                        kal_uint8 *peer_llc_octet_ptr) {
  (app_llc_ptr->octet5c).parity =
                      (*peer_llc_octet_ptr & CSMCC_PEER_LLC_PAR_MASK);
  (app_llc_ptr->octet5c).number_of_data_bits =
                      ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_NDB_MASK )\
                            >> CSMCC_THREE_BIT_OFFSET);
  (app_llc_ptr->octet5c).number_of_stop_bits = 
                      ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_NSB_MASK )\
                            >> CSMCC_FIVE_BIT_OFFSET);
		      

  if((*peer_llc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK ) == 0)
   {
    app_llc_ptr->octet5d_present = KAL_TRUE; 
    return(LLC_OCTET5D);
   } 
  else
   {
    app_llc_ptr->octet5d_present = KAL_FALSE;
    app_llc_ptr->octet6_present = KAL_TRUE;
    return(LLC_OCTET6);
   } 
}  			      

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet5d
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet5d(csmcc_llc_struct *app_llc_ptr,
                        kal_uint8 *peer_llc_octet_ptr)
{
  (app_llc_ptr->octet5d).modem_type =
                  (*peer_llc_octet_ptr & CSMCC_PEER_LLC_MT_MASK) ;
			     
  (app_llc_ptr->octet5d).duplex_mode =
                 ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_DUPM_MASK )\
                              >> CSMCC_SIX_BIT_OFFSET);
    app_llc_ptr->octet6_present = KAL_TRUE; 
    return(LLC_OCTET6);
}  			      
 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet6
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet6(csmcc_llc_struct *app_llc_ptr,
                       kal_uint8 *peer_llc_octet_ptr)
{
 (app_llc_ptr->octet6).user_info_layer2_protocol =
                     (*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL2P_MASK);
			     

 if( ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL2P_MASK) == 0x09) ||
    ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL2P_MASK) == 0x0A) ||
    ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL2P_MASK) == 0x0B)
  )  
  {    
    app_llc_ptr->octet6a1_present = KAL_TRUE; 
    return(LLC_OCTET6A1);
  }  

 if ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL2P_MASK) == 0x10)
  {    
    app_llc_ptr->octet6a2_present = KAL_TRUE; 
    return(LLC_OCTET6A2);
  }
  
 return(LLC_OCTET7);  
  
}  			      
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet6a1
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet6a1(csmcc_llc_struct *app_llc_ptr,
                         kal_uint8 *peer_llc_octet_ptr)
{
 (app_llc_ptr->octet6a1).Q933_use =\
                   (*peer_llc_octet_ptr & CSMCC_PEER_LLC_Q933U_MASK) ;
			 
 (app_llc_ptr->octet6a1).mode_of_layer2 =\
            ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_MOL2_MASK)\
	     			   >> CSMCC_FIVE_BIT_OFFSET ) ;

  if((*peer_llc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK ) == 0)
  {
    app_llc_ptr->octet6b_present = KAL_TRUE;
    return(LLC_OCTET6B);
  }
 else  
  {
   app_llc_ptr->octet6b_present = KAL_FALSE;
   return(LLC_OCTET7);
  } 
}  			      
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet6a2
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet6a2(csmcc_llc_struct *app_llc_ptr,
                         kal_uint8 *peer_llc_octet_ptr)
{
 (app_llc_ptr->octet6a2).user_specified_layer2_protocol_info =
                   (*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL2PI_MASK) ;

 app_llc_ptr->octet6b_present = KAL_FALSE;
 return(LLC_OCTET7);  
  
}  			      
 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet6b
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet6b(csmcc_llc_struct *app_llc_ptr,
                        kal_uint8 *peer_llc_octet_ptr)
{
 (app_llc_ptr->octet6b).window_size =
                      (*peer_llc_octet_ptr & CSMCC_PEER_LLC_WS_MASK) ;
	
 return(LLC_OCTET7);  
  
}  			      
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet7
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet7(csmcc_llc_struct *app_llc_ptr,
                       kal_uint8 *peer_llc_octet_ptr)
{
 app_llc_ptr->userInfoLayer3Protocol =
                   *peer_llc_octet_ptr & CSMCC_PEER_LLC_UL3P_MASK ;
	
 if ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL3P_MASK) == 0x10)
  {
   app_llc_ptr->octet7a1_present = KAL_TRUE;
   app_llc_ptr->octet7a2_present = KAL_FALSE;
   app_llc_ptr->octet7a3_present = KAL_FALSE;

   return(LLC_OCTET7A1);
  }
  
 if ( ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL3P_MASK) == 0x06 )||
      ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL3P_MASK) == 0x07 )||
      ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL3P_MASK) == 0x08 ) )
  {
   app_llc_ptr->octet7a2_present = KAL_TRUE;
   app_llc_ptr->octet7a1_present = KAL_FALSE;
   app_llc_ptr->octet7a3_present = KAL_FALSE;
   
   return(LLC_OCTET7A2);
  }
 
 if ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_UL3P_MASK) == 0x0B)
  {
   app_llc_ptr->octet7a3_present = KAL_TRUE;
   app_llc_ptr->octet7a1_present = KAL_FALSE;
   app_llc_ptr->octet7a2_present = KAL_FALSE;
   
   return(LLC_OCTET7A3);
  }
 
   app_llc_ptr->octet7a1_present = KAL_FALSE;
   app_llc_ptr->octet7a2_present = KAL_FALSE;
   app_llc_ptr->octet7a3_present = KAL_FALSE;
   return(LLC_OCTET_NONE);
  
}  			      

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet7a1
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet7a1(csmcc_llc_struct *app_llc_ptr,
                         kal_uint8 *peer_llc_octet_ptr)
{
 (app_llc_ptr->octet7a1).optional_layer3_protocol_info =
                (*peer_llc_octet_ptr & CSMCC_PEER_LLC_OL3PI_MASK) ;
			
 			 
 app_llc_ptr->octet7b1_present = KAL_FALSE;
 app_llc_ptr->octet7b2_present = KAL_FALSE;
 
 
 return(LLC_OCTET_NONE);
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet7a2
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet7a2(csmcc_llc_struct *app_llc_ptr,
                         kal_uint8 *peer_llc_octet_ptr)
{
 (app_llc_ptr->octet7a2).mode_of_layer3 =
                ((*peer_llc_octet_ptr & CSMCC_PEER_LLC_MOL3_MASK) 
		   >> CSMCC_FIVE_BIT_OFFSET);

 if((*peer_llc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0)			
 {			 
  app_llc_ptr->octet7b1_present = KAL_TRUE;
  app_llc_ptr->octet7b2_present = KAL_FALSE;
  return(LLC_OCTET7B1);
 }
 return(LLC_OCTET_NONE);
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet7a3
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet7a3(csmcc_llc_struct *app_llc_ptr,
                         kal_uint8 *peer_llc_octet_ptr)
{
 (app_llc_ptr->octet7a3).additional_layer3_protocol_info_MSB =
            (*peer_llc_octet_ptr & CSMCC_PEER_LLC_AL3PIM_MASK); 
			  

 if((*peer_llc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0)			
 {			 
  app_llc_ptr->octet7b2_present = KAL_TRUE;
  app_llc_ptr->octet7b1_present = KAL_FALSE;
  return(LLC_OCTET7B2);
 }
 return(LLC_OCTET_NONE);
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet7b1
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet7b1(csmcc_llc_struct *app_llc_ptr,
                         kal_uint8 *peer_llc_octet_ptr)
{
 (app_llc_ptr->octet7b1).default_packet_size =
        (*peer_llc_octet_ptr & CSMCC_PEER_LLC_DPS_MASK); 
	 

 if((*peer_llc_octet_ptr & CSMCC_PEER_EXT_BIT_MASK) == 0)			
 {			 
  app_llc_ptr->octet7c_present = KAL_TRUE;
  return(LLC_OCTET7C);
 }

 app_llc_ptr->octet7c_present = KAL_FALSE;
 return(LLC_OCTET_NONE);
}


/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet7b2
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet7b2(csmcc_llc_struct *app_llc_ptr,
                         kal_uint8 *peer_llc_octet_ptr)
{
 (app_llc_ptr->octet7b2).additional_layer3_protocol_info_LSB =
                 (*peer_llc_octet_ptr & CSMCC_PEER_LLC_AL3PIL_MASK); 
			  
 
 app_llc_ptr->octet7c_present = KAL_FALSE;
 return(LLC_OCTET_NONE);
}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet7c
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8
csmcc_form_app_llc_octet7c(csmcc_llc_struct *app_llc_ptr,
                        kal_uint8 *peer_llc_octet_ptr)                 
{                                                    
 (app_llc_ptr->octet7c).packet_window_size =
             (*peer_llc_octet_ptr & CSMCC_PEER_LLC_PWS_MASK); 
                                                 			  
 return(LLC_OCTET_NONE);                                           
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_func_init
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void                                           
csmcc_form_app_llc_func_init(                                         
	func_app_llc_ptr *csmcc_form_app_llc_octet_func)               
{                                                                   
 csmcc_form_app_llc_octet_func[LLC_OCTET3 ] = csmcc_form_app_llc_octet3  ;
 csmcc_form_app_llc_octet_func[LLC_OCTET3A] = csmcc_form_app_llc_octet3a ;
 csmcc_form_app_llc_octet_func[LLC_OCTET4 ] = csmcc_form_app_llc_octet4  ;
 csmcc_form_app_llc_octet_func[LLC_OCTET4A] = csmcc_form_app_llc_octet4a ;
 csmcc_form_app_llc_octet_func[LLC_OCTET5]  = csmcc_form_app_llc_octet5  ;
 csmcc_form_app_llc_octet_func[LLC_OCTET5A] = csmcc_form_app_llc_octet5a ;
 csmcc_form_app_llc_octet_func[LLC_OCTET5B1]= csmcc_form_app_llc_octet5b1;
 csmcc_form_app_llc_octet_func[LLC_OCTET5B2]= csmcc_form_app_llc_octet5b2;
 csmcc_form_app_llc_octet_func[LLC_OCTET5C] = csmcc_form_app_llc_octet5c ;
 csmcc_form_app_llc_octet_func[LLC_OCTET5D] = csmcc_form_app_llc_octet5d ;
 csmcc_form_app_llc_octet_func[LLC_OCTET6]  = csmcc_form_app_llc_octet6  ;
 csmcc_form_app_llc_octet_func[LLC_OCTET6A1]= csmcc_form_app_llc_octet6a1;
 csmcc_form_app_llc_octet_func[LLC_OCTET6A2]= csmcc_form_app_llc_octet6a2;
 csmcc_form_app_llc_octet_func[LLC_OCTET6B] = csmcc_form_app_llc_octet6b ;
 csmcc_form_app_llc_octet_func[LLC_OCTET7 ] = csmcc_form_app_llc_octet7  ;
 csmcc_form_app_llc_octet_func[LLC_OCTET7A1]= csmcc_form_app_llc_octet7a1;
 csmcc_form_app_llc_octet_func[LLC_OCTET7A2]= csmcc_form_app_llc_octet7a2;
 csmcc_form_app_llc_octet_func[LLC_OCTET7A3]= csmcc_form_app_llc_octet7a3;
 csmcc_form_app_llc_octet_func[LLC_OCTET7B1]= csmcc_form_app_llc_octet7b1;
 csmcc_form_app_llc_octet_func[LLC_OCTET7B2]= csmcc_form_app_llc_octet7b2;
 csmcc_form_app_llc_octet_func[LLC_OCTET7C] = csmcc_form_app_llc_octet7c ;
                                                                                                    
}             
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc_octet
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_init_app_llc_octet ( csmcc_llc_struct *app_llc_ptr )
{
  app_llc_ptr->octet3a_present    = KAL_FALSE;
  app_llc_ptr->octet5_present     = KAL_FALSE;
  app_llc_ptr->octet5a_present    = KAL_FALSE;
  app_llc_ptr->octet5b1_present    = KAL_FALSE;
  app_llc_ptr->octet5b2_present    = KAL_FALSE;  
  app_llc_ptr->octet5c_present    = KAL_FALSE;
  app_llc_ptr->octet5d_present    = KAL_FALSE;
  app_llc_ptr->octet6_present     = KAL_FALSE;
  app_llc_ptr->octet6a1_present   = KAL_FALSE;
  app_llc_ptr->octet6a2_present   = KAL_FALSE;
  app_llc_ptr->octet6b_present    = KAL_FALSE;
  app_llc_ptr->octet7_present     = KAL_FALSE;
  app_llc_ptr->octet7a1_present   = KAL_FALSE;
  app_llc_ptr->octet7a2_present   = KAL_FALSE;
  app_llc_ptr->octet7b1_present   = KAL_FALSE;
  app_llc_ptr->octet7c_present    = KAL_FALSE;
  app_llc_ptr->octet7a3_present   = KAL_FALSE;
  app_llc_ptr->octet7b2_present   = KAL_FALSE;

}  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc
*
* DESCRIPTION                                                           
*	  This function implements low layer compatability unpacking function.
*
* PARAMETERS
*	app_llc_ptr -	
*	peer_llc_octet_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_form_app_llc(csmcc_llc_struct *app_llc_ptr,
                mncc_llc_struct *peer_llc_ptr) 
{
  kal_uint8 offset = 0;
  kal_uint8 next_octet = 0; 
  func_app_llc_ptr csmcc_form_app_llc_octet_func[TOTAL_LLC_OCTET]; 
  func_app_llc_ptr next_func_ptr;
  kal_uint8 *peer_llc_octet_ptr;

  csmcc_form_app_llc_func_init(csmcc_form_app_llc_octet_func);

  csmcc_init_app_llc_octet (app_llc_ptr);

  next_func_ptr = csmcc_form_app_llc_octet3; 

  for(offset = 0 ; offset < MAX_OCTET_LLC ; offset++ )
  {
    peer_llc_octet_ptr =(kal_uint8 *)&(peer_llc_ptr->value[offset]);
   
    if(next_func_ptr !=NULL)   {
      next_octet = \
	  (*next_func_ptr)(app_llc_ptr , peer_llc_octet_ptr);
    }
   
    if(next_octet == LLC_OCTET_NONE) {
     break;
    }

    next_func_ptr = csmcc_form_app_llc_octet_func[next_octet];  
   }

}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_llc
*
* DESCRIPTION                                                           
*	  This function implements high layer compatability packing function.
*
* PARAMETERS
*	peer_hlc_ptr -	
*	app_hlc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_form_peer_hlc(mncc_hlc_struct *peer_hlc_ptr,
                    csmcc_hlc_struct *app_hlc_ptr) 
{
  kal_uint8 offset = 0;
 
 if( app_hlc_ptr->octet3_present )
  {
   peer_hlc_ptr->value[offset] = \
       ((app_hlc_ptr->octet3).protocol_profile & CSMCC_TWO_BIT_MASK);
   peer_hlc_ptr->value[offset] |= \
       (((app_hlc_ptr->octet3).interpretation \
	  & CSMCC_THREE_BIT_MASK) << CSMCC_PEER_HLC_INT_OFFSET);
   peer_hlc_ptr->value[offset] |= ( 1 << CSMCC_SEVEN_BIT_OFFSET);
   peer_hlc_ptr->no_value = offset+1;
   offset++;
   }
 
 if( app_hlc_ptr->octet4_present)
   {
     peer_hlc_ptr->value[offset] = \
	 ((app_hlc_ptr->octet4).high_layer_characteristics_iden \
           & CSMCC_PEER_HLC_HLCI_MASK);                              

     if(app_hlc_ptr->octet4a_present)
      {
       peer_hlc_ptr->value[offset] |=( 0 << CSMCC_SEVEN_BIT_OFFSET );
       offset++;
       peer_hlc_ptr->value[offset] = 
       ( (app_hlc_ptr->octet4a).\
	 extended_high_layer_characteristics_Iden \
	                   & CSMCC_PEER_HLC_EHLCI_MASK);  
       peer_hlc_ptr->value[offset] |=( 1 << CSMCC_SEVEN_BIT_OFFSET );
      }
     else {	     
       peer_hlc_ptr->value[offset] |= (1 << CSMCC_SEVEN_BIT_OFFSET); 
     }
    peer_hlc_ptr->no_value = offset+1;   
   }
   
}	

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_llc
*
* DESCRIPTION                                                           
*	  This function implements high layer compatability unpacking function.
*
* PARAMETERS
*	app_hlc_ptr -	
*	peer_hlc_ptr	-	
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_form_app_hlc(csmcc_hlc_struct *app_hlc_ptr,
                   mncc_hlc_struct *peer_hlc_ptr)
{
  kal_uint8 offset = 0;
  app_hlc_ptr->octet3_present  = KAL_FALSE;
  app_hlc_ptr->octet4_present  = KAL_FALSE;
  app_hlc_ptr->octet4a_present = KAL_FALSE;

  app_hlc_ptr->octet3_present = KAL_TRUE;
  
  (app_hlc_ptr->octet3).protocol_profile =  \
                ( peer_hlc_ptr->value[offset] & CSMCC_PEER_HLC_PP_MASK);
  (app_hlc_ptr->octet3).interpretation  =  \
         ( (peer_hlc_ptr->value[offset]& CSMCC_PEER_HLC_INT_MASK)\
	   >> CSMCC_PEER_HLC_INT_OFFSET);
    
  
  if( (peer_hlc_ptr->value[offset]& CSMCC_PEER_HLC_INT_MASK)== 0x10)
   {
    offset++;     
    app_hlc_ptr->octet4_present = KAL_TRUE;
    (app_hlc_ptr->octet4).high_layer_characteristics_iden = 
    ((peer_hlc_ptr->value[offset]) & CSMCC_PEER_HLC_HLCI_MASK);
   	
	                                             					   
     if( (((peer_hlc_ptr->value[offset]) & CSMCC_PEER_HLC_HLCI_MASK)\
		 == 0x5E) || (((peer_hlc_ptr->value[offset]) &\
			 CSMCC_PEER_HLC_HLCI_MASK) == 0x5F)
       )
      {
       offset++;
       app_hlc_ptr->octet4a_present = KAL_TRUE;
       (app_hlc_ptr->octet4a).\
	   extended_high_layer_characteristics_Iden=
       ((peer_hlc_ptr->value[offset]) & CSMCC_PEER_HLC_EHLCI_MASK);
      } 
    } 
}	

#ifdef __REL4__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_supported_codec
*
* DESCRIPTION                                                           
*	  This function implements supported codec packing function.
*     Add 3 more bytes in NVRAM.
*     Original speech verison - Byte 1 for 2G supported speech codec
*     Additional byte 1       - Byte 2 for 2G supported speech codec 
*     Additional byte 2       - Byte 1 for 3G supported speech codec 
*     Additional byte 3       - Byte 2 for 3G supported speech codec 
*
*     For speech codec bitmap, please refer TS 26.103 Sec. 6.2
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_form_peer_supported_codec(mncc_supported_codec_struct *peer_scl_ptr)
{
  CSMCC_PTR_G_TO_L
  kal_uint8 offset = 0;
  kal_uint8 length_byte = 0;
#if defined(__REL5__ ) && defined(__GSM_RAT__)
  if(CSMCC_PTR->rat_mode == RAT_GSM_UMTS)
  {
      /* For Rel5 onward version, an MS supporting GSM "and" UMTS codec types
      other than UMTS AMR shall indicate all codecs for GSM in Supported Codecs IE.
      Thus, REL5 DM setting need to fill all supported GSM and UMTS codec in SCL*/

      /*refer to TS26.103, Sec. 6.2 Codec Bitmap*/
      peer_scl_ptr->value[offset] = SYS_ID_GSM;	 
      offset++;
      peer_scl_ptr->value[offset] = 1;
      length_byte = offset++; 
      peer_scl_ptr->value[offset] = CSMCC_PTR->mscap.speech_version;
      offset++;

      /*[MAUI_01640820] Byte 2 should always be filled*/
      peer_scl_ptr->value[length_byte] += 1;
      peer_scl_ptr->value[offset] = CSMCC_PTR->mscap.speech_version_byte2;
      offset++;
  }
#endif /*__REL5__*/

  if(CSMCC_PTR->rat_mode == RAT_GSM_UMTS || CSMCC_PTR->rat_mode == RAT_UMTS)
  {
      /*Rel4 or SM setting only fill supported UMTS codec in SCL.*/

      /*refer to TS26.103, Sec. 6.2 Codec Bitmap*/
      peer_scl_ptr->value[offset] = SYS_ID_UMTS;
      offset++;
      peer_scl_ptr->value[offset] = 1;
      length_byte = offset++;
      peer_scl_ptr->value[offset] = CSMCC_PTR->mscap.umts_supported_speech;
      offset++;

      /*[MAUI_01640820] Byte 2 should always be filled*/
      peer_scl_ptr->value[length_byte] += 1;
      peer_scl_ptr->value[offset] = CSMCC_PTR->mscap.umts_supported_speech_byte2;
      offset++;
  }
  peer_scl_ptr->no_value= offset;
}  
#endif /* (__REL4__)*/

#ifdef __SAT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_peer_ccp
*
* DESCRIPTION                                                           
*	  This function implements capability configuration parameters
*    packing function.
*
* PARAMETERS
*	peer_bc_octet_ptr	-	
*	ccp_ptr	-	
*  size_of_ccp -
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_form_peer_ccp(mncc_bc_struct *peer_bc_ptr, kal_uint8 *ccp_ptr,
                    kal_uint8 size_of_ccp) 
{  
   ASSERT(size_of_ccp <= CSMCC_MAX_BC_IE_LEN)   ;
   peer_bc_ptr->no_value = size_of_ccp;
   kal_mem_cpy(peer_bc_ptr->value,
               ccp_ptr,
               size_of_ccp);
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_app_ccp
*
* DESCRIPTION                                                           
*	  This function implements capability configuration
*    parameters unpacking function.
*
* PARAMETERS
*	app_bc_ptr	-	
*	ccp_ptr	-	
*  size_of_ccp -
*
* RETURNS
*	pointer to allocated buffer
*
* GLOBALS AFFECTED
*
*************************************************************************/
void
csmcc_form_app_ccp(csmcc_bc_struct *app_bc_ptr,
                   kal_uint8 *ccp_ptr,
                   kal_uint8 size_of_ccp) 
{
   CSMCC_PTR_G_TO_L
   mncc_bc_struct peer_bc;

   //ASSERT(size_of_ccp <= CSMCC_MAX_BC_IE_LEN);

   if(size_of_ccp <= CSMCC_MAX_BC_IE_LEN)
   {
       peer_bc.no_value = ccp_ptr[0];//size_of_ccp;
   
       /*mtk00924_060922: the first byte of ccp is length of BC IE, and the following are the value of BC IE*/
       kal_mem_cpy(peer_bc.value,
                  //ccp_ptr,
                  //size_of_ccp);
                  ccp_ptr+1,
               	  ccp_ptr[0]);

       csmcc_form_app_bc(app_bc_ptr,&peer_bc);
   }
   else
   {
       //mtk01602_080302:if size_of_ccp in CALL_CTRL_BY_SIM_CNF is out of reasonalbe range, fill default voice bc
       #ifdef __CPHS__	
       if(CSMCC_PTR->als.line_id == CSMCC_ALS_LINE2)
       {
	   app_bc_ptr->itc = CSMCC_ITC_AUX_SPEECH;
       }
       else 
       #endif /*__CPHS__*/
       {
   	   app_bc_ptr->itc = CSMCC_ITC_SPEECH;
       }
       csmcc_fill_voice_bc_ie(app_bc_ptr);
   }
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_sat_call_compat
* DESCRIPTION                                                           
*  This function is used to check if SAT triggered call setup bearer 
*  capability is compatible.
*
* CALLS  
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_sat_call_compat(kal_uint8 call_id, 
                                  kal_uint8 *ccp1_ptr,
                                  kal_uint8 size_of_ccp1,
                                  kal_uint8 *ccp2_ptr,
                                  kal_uint8 size_of_ccp2,
                                  kal_bool  is_bc_repeat_ind_avail,
                                  kal_uint8 bc_repeat_ind)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_bc_struct bc1;
   csmcc_bc_struct bc2;
   kal_bool ret_val;

   /* fill call type, the initial call type must be the first */
   CALL_DATA(call_id, cur_call_type) = 0;

   csmcc_form_app_ccp(&bc1, 
                      ccp1_ptr, 
                      size_of_ccp1);
   
   //mtk01602: If length of bc2 is over maximum defined value, use single bc to make call                    
   if(size_of_ccp2 > 0 && size_of_ccp2 <= CSMCC_MAX_BC_IE_LEN)
   {
      csmcc_form_app_ccp(&bc2, 
                         ccp2_ptr, 
                         size_of_ccp2);

      ret_val = csmcc_check_call_cap(call_id, 
                                     &bc1, 
                                     &bc2, 
                                     bc_repeat_ind, 
                                     KAL_FALSE);
      //Cosine, 070706: MAUI_411356
      if(ret_val == KAL_TRUE)
      {
   		CSMCC_PTR->nego_bc.bc1 = bc1;
		CSMCC_PTR->nego_bc.bc2 = bc2;
      }//end cosine
   }
   else
   {
      ret_val = csmcc_check_call_cap(call_id, 
                                     &bc1, 
                                     NULL, 
                                     bc_repeat_ind,
                                     KAL_FALSE);
      //Cosine, 070706: MAUI_411356
      if(ret_val == KAL_TRUE)
      {
   		CSMCC_PTR->nego_bc.bc1 = bc1;
      }//cosine
   }

   return ret_val;
     
} /* end of csmcc_is_sat_call_compat */

#endif /* __SAT__ */

#ifdef __REL5__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_deduce_bc_from_peer_backup
* DESCRIPTION                                                           
*  This function is used to deduce request bearer service of MT call.
*
* CALLS  
*	csmcc_deduce_bc_from_peer_backup(csmcc_bc_struct *bc_ptr, csmcc_bc_struct *nbc_ptr)
*
* PARAMETERS
*	bc_ptr      IN	first variable, used as input
*  nbc_ptr     OUT second variable, used as output
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_call_type_enum csmcc_deduce_bc_from_peer_backup(csmcc_bc_struct *bc_ptr) 
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_type = CSMCC_INVALID_CALL_TYPE;

   switch(bc_ptr->itc)
   {
      case CSMCC_ITC_SPEECH: /* bc of voice call */
         CSMCC_PTR->nego_bc.bc1.itc = CSMCC_ITC_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         call_type = CSMCC_VOICE_CALL;
         break;
         
      case CSMCC_ITC_AUX_SPEECH: /* bc of aux voice all*/
         CSMCC_PTR->nego_bc.bc1.itc = CSMCC_ITC_AUX_SPEECH;
         csmcc_fill_voice_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         call_type = CSMCC_AUX_VOICE_CALL;
         break;
         
#ifdef __CSD_FAX__         
      case CSMCC_ITC_FAX_GROUP_3: /* bc of fax call */
	 csmcc_fill_fax_bc_param(&(CSMCC_PTR->data_bc_param));
         csmcc_fill_fax_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
	 call_type = CSMCC_FAX_CALL;         
         break;
#endif /*__CSD_FAX__*/
#if defined(__CSD_T__) || defined(__CSD_NT__)
      case CSMCC_ITC_3_1_K_AUDIO:
      case CSMCC_OTHER_ITC:  /* bc of data call */      
	 csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_FALSE);
         csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
         call_type = CSMCC_DATA_CALL;     
         break;
#endif /*(__CSD_T__) || (__CSD_NT__) */
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined (__VIDEO_CALL_SUPPORT__)         
      case CSMCC_ITC_UDI:
          if(bc_ptr->octet5a_present == KAL_TRUE 
              && bc_ptr->octet5a.other_rate_adaption == CSMCC_RA_H223) 
          {
#ifdef __VIDEO_CALL_SUPPORT__
              csmcc_fill_video_bc_param(&(CSMCC_PTR->data_bc_param));
              csmcc_fill_video_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
              call_type = CSMCC_VIDEO_CALL;
#endif
          }
          else
          {    
#if defined(__CSD_T__) || defined(__CSD_NT__)
              csmcc_fill_data_bc_param(&(CSMCC_PTR->data_bc_param), KAL_TRUE);
              csmcc_fill_data_bc_ie(&(CSMCC_PTR->nego_bc.bc1));
              call_type = CSMCC_DATA_CALL;
#endif
          }
       break;
#endif /*(__CSD_T__) || (__CSD_NT__) || (__VIDEO_CALL_SUPPORT__)*/

      default:
         /* unsupported ITC */
         break;
   }
   
   return call_type;

}  /* end of csmcc_deduce_bc_from_peer_backup */

#endif /*__REL5__*/

