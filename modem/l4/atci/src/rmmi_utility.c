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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * RMMI_UTILITY.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ...
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
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
 *============================================================================
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define RMMI_UTILITY_C

#include <stdio.h>
//#include <stdarg.h>
//#include "kal_release.h"
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "app_buff_alloc.h"     /* Declaration of buffer management API */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "divider_public.h"
#include "kal_public_defs.h"
#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
#include "csmss_common_enums.h"


//#include "mcd_l4_common.h"
 
#include "rmmi_parser.h"
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_table.h"
#include "l4_trc.h"
#include "atci_trc.h"

#include "dcl.h"
//#include "l4c_aux_struct.h"
//#include "l4c_rspfmttr.h"
//#include "sat_def.h"
//#include "sim_common_enums.h"

//#include "mcd_ss_parameters.h"  /* csm */
//#include "mcd_ss_tcapmessages.h"
 
#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_types.h"
//#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c2csm_ss_struct.h"
//#include "l4c2smsal_struct.h"
//#include "ps2sat_struct.h"

//#include "mcd_ps2sat_peer.h"
 
#include "l4_defs.h"
//#include "csmcc_common_enums.h"
//#include "rmmi_common_enum.h"
//#include "l4c2phb_enums.h"
//#include "csmcc_atfunc.h"
//#include "l4c_cc_cmd.h"

#include "mcd_l3_inc_struct.h" 

#ifdef __MOD_SMSAL__
#include "smsal_l4c_enum.h"
#include "smsal_context.h"
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_defs.h"
#endif /* __MOD_SMSAL__ */ 

#ifdef __MOD_TCM__
//#include "mmi_l3_enums.h"
#endif 
#ifdef __MOD_UEM__
#include "device.h"
//#include "l4c2uem_struct.h"
#endif /* __MOD_UEM__ */ 

//#include "L4c_ss_parse.h"
#include "l4c_sim_cmd.h"
/*#if defined (VM_SUPPORT)
#include "med_struct.h"
#endif */
#include "l4c_eq_cmd.h"
#include "l4c_sms_cmd.h"

//#include "l4c_msghdlr.h"
#include "rmmi_rspfmttr.h"
#include "rmmi_utility.h"
//#include "resource_audio.h"

#ifdef __CSD_FAX__
//#include "l4c2t30_enums.h"
#include "csm_data_enums.h"
#include "csmcc_enums.h"
#endif /* __CSD_FAX__ */ 
#include "l3_inc_enums.h"
#include "kbd_table.h"

#include "l4c_utility.h"
//#include "common_nvram_editor_data_item.h"
//#include "l4c2phb_enums.h" 
//#include "l4c2phb_struct.h"
#include "l4c_phb_cmd.h"

#include "rmmi_msghdlr.h"

//#include "phb_defs.h"       

//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "string.h"
//#include "kal_common_defs.h"
//#include "kal_release.h"

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "cmux_vp_num.h"
#include "rmmi_root.h"
#include "rmmi_sio.h"
#include "l4crac_enums.h"
#include "l4c_nw_cmd.h"

/* for __DUAL_TALK_MODEM_SUPPORT__
*/
#include "l1audio.h"
#include "l1sm_public.h"
#include "eint.h"

#ifdef __GAS_SUPPORT__
#include "rmmi_struct.h"
#endif 
#include "rmmi_ind.h"
#include "l4c_gprs_cmd.h"
#include "l4crac_func.h" 

void toUpper(kal_uint8 *str);

extern UART_PORT PS_UART_PORT;
extern UART_baudrate PS_BAUDRATE;
extern kal_uint16 custom_ath_for_dialup_timer(void);
extern kal_bool l4_custom_is_supportted_cscs(kal_char* string);
extern kal_uint8* custom_check_keypad_code(kal_uint8 *key, kal_uint8 *keycode);
extern kal_bool custom_is_home_plmn(kal_uint8* plmn, kal_uint8* mcc_mnc, kal_bool is_on_hplmn);

#if defined(__DUAL_TALK_MODEM_SUPPORT__)
extern kal_uint8 rmmi_aux_PDNhandle;
extern const kal_uint8 WAKE_UP_EINT_NO;
extern const char gpio_dtk_wakeup_pin;
#endif
extern module_type gas_mod_table[];
extern kal_char *gas_cmd_table[];

/*****************************************************************************
 * FUNCTION
 *  rmmi_is_number_string
 * DESCRIPTION
 *  this function is using to check if the string is composed of numbers.
 * PARAMETERS
 *  str     [?]     the string to be examined
 * RETURNS
 *  
 *****************************************************************************/
kal_bool rmmi_is_number_string(kal_uint8 *str)
{
    kal_uint8 i = 0;

    while (str[i] != RMMI_END_OF_STRING_CHAR)
    {
        if (!(RMMI_IS_NUMBER(str[i])))
        {
            return KAL_FALSE;
        }
        i++;
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_int_validator
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint32 rmmi_int_validator(rmmi_string_struct *source_string_ptr, kal_uint8 delimiter)
{
    kal_uint32 ret_val = RMMI_VALIDATOR_ERROR;
    kal_int32 value = 0;
    kal_uint16 length;
    kal_bool error_flag = KAL_FALSE;
    kal_bool some_char_found = KAL_FALSE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_INT_VALIDATOR_ENTRY);
    ASSERT(source_string_ptr != NULL);
    length = (kal_uint16)strlen((char*)source_string_ptr->string_ptr);
    /* If there are some leading white spaces, ignore them */
    rmmi_skip_spaces(source_string_ptr);

    /*
     * Start checking for the integer, till the delimiter which may
     * * be a comma, a dot etc.
     */

    while ((source_string_ptr->string_ptr[source_string_ptr->index]
            != delimiter)
           &&
           (source_string_ptr->string_ptr[source_string_ptr->index]
            != rmmi_ptr->s_reg.s3) && (source_string_ptr->index < length))
    {
        /* It means we found something between two commas(,)  */
        some_char_found = KAL_TRUE;

        /*
         * check whether the character is in 0 - 9 range. If so,
         * * store corresponding integer value for that character
         */
        if ((source_string_ptr->string_ptr[source_string_ptr->index]
             >= RMMI_CHAR_0) && (source_string_ptr->string_ptr[source_string_ptr->index] <= RMMI_CHAR_9))
        {
            value = value * 10 + (source_string_ptr->string_ptr[source_string_ptr->index] - RMMI_CHAR_0);
        }
        else    /* out of range, return immediately */
        {
            error_flag = KAL_TRUE;
            break;
        }
        /* If the character is a valid part of integer, then continue */
        source_string_ptr->index++;
    }   /* end of the while loop */

    if (error_flag == KAL_TRUE)
    {
        /*
         * Value is not in the valid range. It can also be due to
         * * white space in between two digits, because such white
         * * spaces are not allowed
         */
        /* mark for solve correct input but incorrect end for 1,2,2, */
        /* rmmi_result_code_fmttr (  RMMI_RCODE_ERROR,
           INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR ); */
        ret_val = RMMI_VALIDATOR_ERROR;
    }
    else if (some_char_found == KAL_FALSE)
    {
        /* Nothing is present before the delimiter */
        ret_val = RMMI_VALIDATOR_ERROR;
        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }
    /*
     * If some thing is present and check for the valid range as
     * * specified by the calling function
     */
    else
    {
        ret_val = value;
        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_int_validator_ext
 * DESCRIPTION
 *  
 * PARAMETERS
 *  error_cause             [?]         
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint32 rmmi_int_validator_ext(kal_uint8 *error_cause, rmmi_string_struct *source_string_ptr, kal_uint8 delimiter)
{
    kal_uint32 ret_val = RMMI_VALIDATOR_ERROR;
    kal_int32 value = 0;
    kal_uint16 length;
    kal_bool error_flag = KAL_FALSE;
    kal_bool some_char_found = KAL_FALSE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    //kal_brief_trace(TRACE_FUNC, FUNC_RMMI_INT_VALIDATOR_ENTRY);
    ASSERT(source_string_ptr != NULL);
    length = (kal_uint16)strlen((char*)source_string_ptr->string_ptr);

    /* If there are some leading white spaces, ignore them */
    rmmi_skip_spaces(source_string_ptr);

    /*
     * we have to initial the error so that we can using again and
     * again even if any error occur. so we dont have to init before
     * enter this function
     */
    *error_cause = RMMI_PARSE_OK;

    /*
     * Start checking for the integer, till the delimiter which may
     * * be a comma, a dot etc.
     */

    while ((source_string_ptr->string_ptr[source_string_ptr->index]
            != delimiter)
           &&
           (source_string_ptr->string_ptr[source_string_ptr->index]
            != rmmi_ptr->s_reg.s3) && (source_string_ptr->index < length))
    {
        /* It means we found something between two commas(,)  */
        some_char_found = KAL_TRUE;

        /*
         * check whether the character is in 0 - 9 range. If so,
         * * store corresponding integer value for that character
         */
        if ((source_string_ptr->string_ptr[source_string_ptr->index]
             >= RMMI_CHAR_0) && (source_string_ptr->string_ptr[source_string_ptr->index] <= RMMI_CHAR_9))
        {
            value = value * 10 + (source_string_ptr->string_ptr[source_string_ptr->index] - RMMI_CHAR_0);
        }
        else    /* out of range, return immediately */
        {
            error_flag = KAL_TRUE;
            break;
        }
        /* If the character is a valid part of integer, then continue */
        source_string_ptr->index++;
    }   /* end of the while loop */

    if (error_flag == KAL_TRUE)
    {
        /*
         * Value is not in the valid range. It can also be due to
         * * white space in between two digits, because such white
         * * spaces are not allowed
         */
        /* mark for solve correct input but incorrect end for 1,2,2, */
        /* rmmi_result_code_fmttr (  RMMI_RCODE_ERROR,
           INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR ); */
        ret_val = RMMI_VALIDATOR_ERROR;
        *error_cause = (kal_uint8) RMMI_PARSE_ERROR;
    }
    else if (some_char_found == KAL_FALSE)
    {
        /* Nothing is present before the delimiter */
        ret_val = RMMI_VALIDATOR_ERROR;
        *error_cause = (kal_uint8) RMMI_PARSE_NOT_FOUND;

        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }
    /*
     * If some thing is present and check for the valid range as
     * * specified by the calling function
     */
    else
    {
        ret_val = value;
        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        if (source_string_ptr->string_ptr[source_string_ptr->index] == delimiter)
        {
            source_string_ptr->index++;
            rmmi_skip_spaces(source_string_ptr);
            if (source_string_ptr->string_ptr[source_string_ptr->index] == rmmi_ptr->s_reg.s3)
            {
                ret_val = RMMI_VALIDATOR_ERROR;
                *error_cause = (kal_uint8) RMMI_PARSE_ERROR;
            }
        }
        else
        {
            source_string_ptr->index++;
        }
    }
    return ret_val;
}

//mtk02508 MAUI_01740414 begin
/*****************************************************************************
 * FUNCTION
 *  rmmi_int_validator_range_check
 * DESCRIPTION
 *  This function is used to parse a string and get an integer with boundary checking.
 * PARAMETERS
 *  error_cause             [?]         
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  max                     [IN]    the maximum value could be return
 * RETURNS
 *  If parse ok, the return is the value and the error_cause = RMMI_PARSE_OK
 *  Otherwise, return RMMI_VALIDATOR_ERROR, and 
 *      if the value is not found, error_cause = RMMI_PARSE_NOT_FOUND
 *      Otherwise, error_cause = RMMI_PARSE_ERROR
 *****************************************************************************/
kal_uint32 rmmi_int_validator_range_check(kal_uint8 *error_cause, rmmi_string_struct *source_string_ptr, kal_uint8 delimiter, kal_uint32 max)
{
    kal_uint32 ret_val = RMMI_VALIDATOR_ERROR;
    kal_uint32 value = 0;
    kal_uint16 length;
    kal_bool error_flag = KAL_FALSE;
    kal_bool some_char_found = KAL_FALSE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_INT_VALIDATOR_ENTRY);
    ASSERT(source_string_ptr != NULL);
    length = (kal_uint16)strlen((char*)source_string_ptr->string_ptr);

    /* If there are some leading white spaces, ignore them */
    rmmi_skip_spaces(source_string_ptr);

    /*
     * we have to initial the error so that we can using again and
     * again even if any error occur. so we dont have to init before
     * enter this function
     */

    if (error_cause != NULL)
    {
        *error_cause = RMMI_PARSE_OK;
    }

    /*
     * Start checking for the integer, till the delimiter which may
     * * be a comma, a dot etc.
     */

    while ((source_string_ptr->string_ptr[source_string_ptr->index]
            != delimiter)
           &&
           (source_string_ptr->string_ptr[source_string_ptr->index]
            != rmmi_ptr->s_reg.s3) && (source_string_ptr->index < length))
    {
        /* It means we found something between two commas(,)  */
        some_char_found = KAL_TRUE;

        /*
         * check whether the character is in 0 - 9 range. If so,
         * * store corresponding integer value for that character
         */
        if ((source_string_ptr->string_ptr[source_string_ptr->index] >= RMMI_CHAR_0) 
            && (source_string_ptr->string_ptr[source_string_ptr->index] <= RMMI_CHAR_9))
        {
            kal_uint8 tmp = source_string_ptr->string_ptr[source_string_ptr->index] - RMMI_CHAR_0;
            if (max < tmp)
            {
                error_flag = KAL_TRUE;
                break;
            }
            else if (value <= (max - tmp) / 10)
            {
                value = value * 10 + tmp;
            }
            else // the value will be larger than max
            {
                error_flag = KAL_TRUE;
                break;
            }
        }
        else    /* out of range, return immediately */
        {
            error_flag = KAL_TRUE;
            break;
        }
        /* If the character is a valid part of integer, then continue */
        source_string_ptr->index++;
    }   /* end of the while loop */

    if (error_flag == KAL_TRUE)
    {
        /*
         * Value is not in the valid range. It can also be due to
         * * white space in between two digits, because such white
         * * spaces are not allowed
         */
        /* mark for solve correct input but incorrect end for 1,2,2, */
        /* rmmi_result_code_fmttr (  RMMI_RCODE_ERROR,
           INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR ); */
        ret_val = RMMI_VALIDATOR_ERROR;
        if (error_cause != NULL)
        {
            *error_cause = (kal_uint8) RMMI_PARSE_ERROR;
        }
    }
    else if (some_char_found == KAL_FALSE)
    {
        /* Nothing is present before the delimiter */
        ret_val = RMMI_VALIDATOR_ERROR;
        if (error_cause != NULL)
        {
            *error_cause = (kal_uint8) RMMI_PARSE_NOT_FOUND;
        }

        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }
    /*
     * If some thing is present and check for the valid range as
     * * specified by the calling function
     */
    else
    {
        ret_val = value;
        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        if (source_string_ptr->string_ptr[source_string_ptr->index] == delimiter)
        {
            source_string_ptr->index++;
            rmmi_skip_spaces(source_string_ptr);
            if (source_string_ptr->string_ptr[source_string_ptr->index] == rmmi_ptr->s_reg.s3)
            {
                ret_val = RMMI_VALIDATOR_ERROR;
                if (error_cause != NULL)
                {
                    *error_cause = (kal_uint8) RMMI_PARSE_ERROR;
                }
            }
        }
        else
        {
            source_string_ptr->index++;
        }
    }
    return ret_val;
}
//mtk02508 MAUI_01740414 end

/*****************************************************************************
 * FUNCTION
 *  rmmi_signed_int_validator
 * DESCRIPTION
 *  
 * PARAMETERS
 *  error_cause             [?]         
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_int32 rmmi_signed_int_validator(
            kal_uint8 *error_cause,
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter)
{
    kal_int32 value = 0;
    kal_uint16 length;
    kal_bool error_flag = KAL_FALSE;
    kal_bool some_char_found = KAL_FALSE;
    kal_bool is_negative = KAL_FALSE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_INT_VALIDATOR_ENTRY);
    ASSERT(source_string_ptr != NULL);

    /* initial the error code */
    *error_cause = RMMI_PARSE_OK;

    length = (kal_uint16)strlen((char*)source_string_ptr->string_ptr);
    /* If there are some leading white spaces, ignore them */
    rmmi_skip_spaces(source_string_ptr);

    if ((source_string_ptr->index < length) &&
        (source_string_ptr->string_ptr[source_string_ptr->index] == RMMI_CHAR_MINUS))
    {
        is_negative = KAL_TRUE;
        source_string_ptr->index++;
    }

    /* Start checking for the integer, till the delimiter which may */
    while ((source_string_ptr->string_ptr[source_string_ptr->index]
            != delimiter)
           &&
           (source_string_ptr->string_ptr[source_string_ptr->index]
            != rmmi_ptr->s_reg.s3) && (source_string_ptr->index < length))
    {
        /* It means we found something between two commas(,)  */
        some_char_found = KAL_TRUE;

        /*
         * check whether the character is in 0 - 9 range. If so,
         * * store corresponding integer value for that character
         */
        if ((source_string_ptr->string_ptr[source_string_ptr->index]
             >= RMMI_CHAR_0) && (source_string_ptr->string_ptr[source_string_ptr->index] <= RMMI_CHAR_9))
        {
            value = value * 10 + (source_string_ptr->string_ptr[source_string_ptr->index] - RMMI_CHAR_0);
        }
        else    /* out of range, return immediately */
        {
            error_flag = KAL_TRUE;
            break;
        }
        /* If the character is a valid part of integer, then continue */
        source_string_ptr->index++;
    }   /* end of the while loop */

    if (error_flag == KAL_TRUE)
    {
        /*
         * Value is not in the valid range. It can also be due to
         * * white space in between two digits, because such white
         * * spaces are not allowed
         */
        /* mark for solve correct input but incorrect end for 1,2,2, */
        /* rmmi_result_code_fmttr (  RMMI_RCODE_ERROR,
           INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR ); */
        value = RMMI_VALIDATOR_ERROR;
        *error_cause = (kal_uint8) RMMI_PARSE_ERROR;
    }
    else if (some_char_found == KAL_FALSE)
    {
        /* Nothing is present before the delimiter */
        value = RMMI_VALIDATOR_ERROR;
        *error_cause = (kal_uint8) RMMI_PARSE_NOT_FOUND;

        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }
    /*
     * If some thing is present and check for the valid range as
     * * specified by the calling function
     */
    else
    {
        if (is_negative == KAL_TRUE)
        {
            value = (0 - value);
        }

        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }
    return value;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_hex_validator_ext
 * DESCRIPTION
 *  this function parses the hex. and pass back the hex string "str"
 *  addtionally it passes the error_cause back, and here <CR> acts as delimiter as well
 * PARAMETERS
 *  error_cause             [?]         
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  max_length              [IN]        
 *  str                     [?]         
 * RETURNS
 *  if string is correctly parsed: ret_val = RMMI_DEF_VALUE.
 *  otherwise : ret_val = RMMI_VALIDATOR ERROR. there are 3 possible cases:
 *  1. nothing is found by delimiter or <CR> ==> error_cause = RMMI_PARSE_NOT_FOUND
 *  2. string is not a invalid hex or too long  ==> error_cause = RMMI_PARSE_ERROR
 *****************************************************************************/
kal_uint8 rmmi_hex_validator_ext(
            kal_uint8 *error_cause,
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter,
            kal_uint16 max_length,
            kal_uint8 *str)
{
    kal_uint8 ret_val = RMMI_VALIDATOR_ERROR;
    kal_uint8 index = 0;
    kal_uint16 length;
    kal_bool error_flag = KAL_FALSE;
    kal_bool some_char_found = KAL_FALSE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    ASSERT((str != NULL) && (source_string_ptr != NULL) && (error_cause != NULL));
    length = (kal_uint16)strlen((char*)source_string_ptr->string_ptr);
    /* If there are some leading white spaces, ignore them */
    rmmi_skip_spaces(source_string_ptr);

    /*
     * we have to initial the error so that we can using again and
     * again even if any error occur. so we dont have to init before
     * enter this function
     */
    *error_cause = RMMI_PARSE_OK;

    /*
     * Start checking for the integer, till the delimiter which may
     * * be a comma, a dot etc.
     */

    toUpper(source_string_ptr->string_ptr);
    while ((source_string_ptr->string_ptr[source_string_ptr->index]
            != delimiter)
           &&
           (source_string_ptr->string_ptr[source_string_ptr->index]
            != rmmi_ptr->s_reg.s3) && (source_string_ptr->index < length))
    {
        /* It means we found something between two commas(,)  */
        some_char_found = KAL_TRUE;

        if (index >= (max_length - 1))  /* length is too long , break */
        {
            error_flag = KAL_TRUE;
            break;
        }

        /*
         * check whether the character is in 0 - 9 or A - F range.
         * If not, break then return.
         */
        if ((source_string_ptr->string_ptr[source_string_ptr->index]
             >= RMMI_CHAR_0) && (source_string_ptr->string_ptr[source_string_ptr->index] <= RMMI_CHAR_9))
        {
            *((kal_uint8*) str + index) = source_string_ptr->string_ptr[source_string_ptr->index];
            index++;
        }
        else if ((source_string_ptr->string_ptr[source_string_ptr->index]
                  >= RMMI_CHAR_A) && (source_string_ptr->string_ptr[source_string_ptr->index] <= RMMI_CHAR_F))
        {
            *((kal_uint8*) str + index) = source_string_ptr->string_ptr[source_string_ptr->index];
            index++;
        }
        else    /* out of range, return immediately */
        {
            error_flag = KAL_TRUE;
            break;
        }
        /* If the character is a valid part of integer, then continue */
        source_string_ptr->index++;
    }   /* end of the while loop */

    if (error_flag == KAL_TRUE)
    {
        /* Value is not in the valid range. */
        ret_val = RMMI_VALIDATOR_ERROR;
        *error_cause = (kal_uint8) RMMI_PARSE_ERROR;
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
    }
    else if (some_char_found == KAL_FALSE)
    {
        /* Nothing is present before the delimiter */
        ret_val = RMMI_VALIDATOR_ERROR;
        *error_cause = (kal_uint8) RMMI_PARSE_NOT_FOUND;
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;

        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }
    /*
     * If some thing is present and check for the valid range as
     * * specified by the calling function
     */
    else
    {
        ret_val = RMMI_DEF_VALUE;
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  check_chld_opcode
 * DESCRIPTION
 *  
 * PARAMETERS
 *  input       [IN]        
 *  call_id     [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_chld_opcode(kal_uint8 input, kal_uint8 *call_id)
{
    kal_uint8 opcode = 0xff;
    kal_uint8 ch1, ch2;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_CHLD_OPCODE_ENTRY);
    ASSERT(call_id != NULL);
    ch1 = input/10; //DIVIDE(input, 10);
    ch2 = input%10; //MODULO(input, 10);

    *call_id = 0;

    switch (ch1)
    {
        case 0:
            if (ch2 == 0)
            {
                opcode = CSMCC_REL_HELD_OR_UDUB;
            }
            else if (ch2 == 1)
            {
                opcode = CSMCC_REL_ACTIVE_AND_ACCEPT;
            }
            else if (ch2 == 2)
            {
                opcode = CSMCC_HOLD_ACTIVE_AND_ACCEPT;
            }
            else if (ch2 == 3)
            {
                opcode = CSMCC_ADD_HELD_CALL;
            }
            else if (ch2 == 4)
            {
                opcode = CSMCC_EXPLICIT_CALL_TRANSFER;
            }
            else if (ch2 == 5)
            {
                opcode = CSMCC_ACTIVATE_CCBS_CALL;
            }
        #if defined(__ANDROID_RIL_SUPPORT__)
            else if (ch2 == 6)
            {
                opcode = CSMCC_REL_ALL;
            }
        #endif
        #ifdef __CALL_REJECT__
            else if (ch2 == 8)
            {
                opcode = CSMCC_REL_CALL_REJECT;
            }
        #endif
            else
            {
                opcode = 0xff;
            }
            break;
        case 1:
            if ((ch2 > 0) && (ch2 <= 7))
            {
                //mtk01616_080217: user want to abort MO call when 1A1MO, we revise the definition about CRSS 1x to achieve this. (originally,we don't think MO is "active" call)
            #if defined(__CHLD_1x_REL_SPECIFIC_CALL__) || !defined(__MMI_FMI__)
                opcode = CSMCC_REL_SPECIFIC_CALL;
            #else 
                opcode = CSMCC_REL_SPECIFIC_ACTIVE_CALL;
            #endif 
                *call_id = ch2;
            }
            else
            {
                opcode = 0xff;
            }
            break;
        case 2:
            if ((ch2 > 0) && (ch2 <= 7))
            {
                opcode = CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL;
                *call_id = ch2;
            }
            else
            {
                opcode = 0xff;
            }
            break;
    #if defined(__OP01__) && defined(__VIDEO_CALL_SUPPORT__)
        case 9:
            if ((ch2 > 0) && (ch2 <= 7)) //at+chld=9X, where X means the call id
            {
                opcode = CSMCC_VT_FALL_TO_VOICE;
                *call_id = ch2;
            }
            break;
    #endif
        default:
            opcode = 0xff;
    }
    return opcode;
}


/*****************************************************************************
 * FUNCTION
 *  check_phb_storage_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  code        [IN]        
 *  name        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_phb_storage_name(kal_uint8 code, kal_uint8 *name)
{
    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_PHB_STORAGE_NAME_ENTRY);
    ASSERT(name != NULL);
    switch (code)
    {
        case RMMI_PHB_MT:
            strcpy((char*)name, "MT\0");
            break;
        case RMMI_PHB_SM:
            strcpy((char*)name, "SM\0");
            break;
        case RMMI_PHB_ME:
            strcpy((char*)name, "ME\0");
            break;
        case RMMI_PHB_FD:
            strcpy((char*)name, "FD\0");
            break;
    #ifdef __PHB_STORAGE_LA__       
        case RMMI_PHB_LA:
            strcpy((char*)name, "LA\0");
            break;
    #endif /* __PHB_STORAGE_LA__ */
        case RMMI_PHB_LD:
            strcpy((char*)name, "LD\0");
            break;
        case RMMI_PHB_MC:
            strcpy((char*)name, "MC\0");
            break;
        case RMMI_PHB_RC:
            strcpy((char*)name, "RC\0");
            break;
        case RMMI_PHB_EN:
            strcpy((char*)name, "EN\0");
            break;
        case RMMI_PHB_ON:
            strcpy((char*)name, "ON\0");
            break;
        case RMMI_PHB_DC:
            strcpy((char*)name, "DC\0");
            break;
        default:
            name[0] = 0;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  check_phb_storage_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  name        [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_phb_storage_code(kal_uint8 *name)
{
    kal_uint8 code = 0xff;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_PHB_STORAGE_CODE_ENTRY);
    ASSERT(name != NULL);
    toUpper(name);

    if (strcmp((char*)name, "SM") == 0)
    {
        code = RMMI_PHB_SM;
    }
    else if (strcmp((char*)name, "FD") == 0)
    {
        code = RMMI_PHB_FD;
    }
    else if (strcmp((char*)name, "ON") == 0)
    {
        code = RMMI_PHB_ON;
    }
#ifndef EXTERNAL_MMI
    else if (strcmp((char*)name, "ME") == 0)
    {
        code = RMMI_PHB_ME;
    }
    else if (strcmp((char*)name, "LD") == 0)
    {
        code = RMMI_PHB_LD;
    }
    else if (strcmp((char*)name, "MC") == 0)
    {
        code = RMMI_PHB_MC;
    }
    else if (strcmp((char*)name, "RC") == 0)
    {
        code = RMMI_PHB_RC;
    }
    /*else if (strcmp((char*)name, "EN") == 0)
    {
        code = RMMI_PHB_EN;
    }*/
    else if (strcmp((char*)name, "DC") == 0)
    {
        code = RMMI_PHB_DC;
    }
    #ifdef __PHB_STORAGE_LA__      
    else if (strcmp((char*)name, "LA") == 0)
    {
        code = RMMI_PHB_LA;
    }
    #endif /* __PHB_STORAGE_LA__ */
#endif
    return code;
}


/*****************************************************************************
 * FUNCTION
 *  check_nw_class_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  code        [IN]        
 *  name        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_nw_class_name(kal_uint8 code, kal_uint8 *name)
{
    ASSERT(name != NULL);
    switch (code)
    {
        case 0:
            strcpy((char*)name, "A\0");
            break;
        case 1:
            strcpy((char*)name, "B\0");
            break;
        case 2:
            strcpy((char*)name, "CG\0");
            break;
        case 3:
            strcpy((char*)name, "CC\0");
            break;
        default:
            name[0] = 0;
            break;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  check_nw_class_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  name        [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_nw_class_code(kal_uint8 *name)
{
    kal_uint8 code = 0; //default classb mobile

    ASSERT(name != NULL);
    toUpper(name);
    if (strcmp((char*)name, "B") == 0)
    {
        code = 1;
    }
    else if (strcmp((char*)name, "CG") == 0)
    {
        code = 2;
    }
    else if (strcmp((char*)name, "CC") == 0)
    {
        code = 3;
    }
    return code;
}


/*****************************************************************************
 * FUNCTION
 *  check_bscode_class
 * DESCRIPTION
 *  this function convert l4_bs_code_enum to class defined in 07.07
 *  mtk00714 : 20040413
 * PARAMETERS
 *  bscode      [IN]        
 * RETURNS
 *  converted bsclass
 *****************************************************************************/
kal_uint8 check_bscode_class(kal_uint8 bscode)
{
    kal_uint8 classx;

    switch (bscode)
    {
        case L4_TELEPHONY:
            classx = 1;
            break;
        case L4_ALL_BEARER_SERVICES:
        case L4_ALL_DATA_TELESERVICES:
            classx = 2;
            break;
        case L4_FACSIMILE_SERVICES:
            classx = 4;
            break;
        case L4_ALL_TELESERVICES_EXCEPT_SMS:
            classx = 7;
            break;
        case L4_SHORT_MESSAGE_SERVICES:
            classx = 8;
            break;
        case L4_ALL_TELESERVICES:
            classx = 15;
            break;
        case L4_ALL_DATA_CIRCUIT_SYNC:
            classx = 16;
            break;
        case L4_ALL_DATA_CIRCUIT_ASYNC:
            classx = 32;
            break;
        case L4_ALL_GPRS_BEARER_SERVICES:
            classx = 64;
            break;
        default:
            classx = 0;
    }
    return classx;
}


/*****************************************************************************
 * FUNCTION
 *  check_bscode_L4enum
 * DESCRIPTION
 *  this function convert  class defined in 07.07 to l4_bs_code_enum
 *  mtk00714 : 20040413
 * PARAMETERS
 *  classx      [IN]        
 * RETURNS
 *  converted bscode enum
 *****************************************************************************/
kal_uint8 check_bscode_L4enum(kal_uint8 classx)
{
    kal_uint8 bs_code;

    switch (classx)
    {
        case 0:
            bs_code = 0;
            break;
        case 1:
            bs_code = L4_TELEPHONY;
            break;
        case 2:
            bs_code = L4_ALL_BEARER_SERVICES;
            break;
        case 4:
            bs_code = L4_FACSIMILE_SERVICES;
            break;
#if 0 //mtk02508 MAUI_01740379 <class>=0 shall be separated to 1+2+4
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif            
        case 8:
            bs_code = L4_SHORT_MESSAGE_SERVICES;
            break;
        case 15:
            bs_code = L4_ALL_TELESERVICES;
            break;
        case 16:
            bs_code = L4_ALL_DATA_CIRCUIT_SYNC;
            break;
        case 32:
            bs_code = L4_ALL_DATA_CIRCUIT_ASYNC;
            break;
        case 64:
            bs_code = L4_ALL_GPRS_BEARER_SERVICES;
            break;
        default:
            bs_code = 0;
    }
    return bs_code;
}


/*****************************************************************************
 * FUNCTION
 *  check_dcs_toGsm7bit
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_text        [?]     
 *  dest_text       [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_dcs_toGsm7bit(kal_uint8 *src_text, kal_uint8 *dest_text)
{
    kal_uint8 i = 0, j = 0;
    kal_uint8 length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_DCS_TOGSM7BIT_ENTRY);
    ASSERT(src_text != NULL);
    switch (rmmi_ptr->char_set)
    {

        case RMMI_CHSET_GSM:
            while (src_text[i] != RMMI_END_OF_STRING_CHAR)
            {
                dest_text[j] = src_text[i];
                i++;
                j++;
            }
            length = i;
            break;
        case RMMI_CHSET_UCS2:
        case RMMI_CHSET_HEX:
            length = (kal_uint8)strlen((char*)src_text) >> 1;
            check_hex_value(src_text, dest_text);
            //dest_text = src_text;     
            //length = strlen((char *)text) >> 1;
            break;
        case RMMI_CHSET_IRA:
        case RMMI_CHSET_88591:
            while (src_text[i] != RMMI_END_OF_STRING_CHAR)
            {
                if (src_text[i] == 0x24)
                {
                    dest_text[j] = 0x02;
                }
                else if (src_text[i] == 0x40)
                {
                    dest_text[j] = 0x0;
                }
                else if (src_text[i] == 0x5f)
                {
                    dest_text[j] = 0x11;
                }
                else if (src_text[i] > 0x7f)
                {
                    dest_text[j] = MAP_ISO_GSM7BIT_TABLE[src_text[i] - 0x80];
                }
                else if (RMMI_IS_EXT_CHAR(src_text[i]))
                {
                    dest_text[j] = 0x1b;
                    j++;
                    switch (src_text[i])
                    {
                        case RMMI_CHAR_VERTICAL_LINE:
                        {
                            dest_text[j] = 0x40;
                            break;
                        }
                        case RMMI_HAT:
                        {
                            dest_text[j] = 0x14;
                            break;
                        }
                        case RMMI_L_CURLY_BRACKET:
                        {
                            dest_text[j] = 0x28;
                            break;
                        }
                        case RMMI_R_CURLY_BRACKET:
                        {
                            dest_text[j] = 0x29;
                            break;
                        }
                        case RMMI_L_SQ_BRACKET:
                        {
                            dest_text[j] = 0x3c;
                            break;
                        }
                        case RMMI_R_SQ_BRACKET:
                        {
                            dest_text[j] = 0x3e;
                            break;
                        }
                        case RMMI_CHAR_TILDE:
                        {
                            dest_text[j] = 0x3d;
                            break;
                        }
                        case RMMI_CHAR_REVERSE_SOLIDUS:
                        {
                            dest_text[j] = 0x2f;
                            break;
                        }
                        default:
                            break;
                    }
                }
                else
                {
                    dest_text[j] = src_text[i];
                }
                i++;
                j++;
            }
            length = j;
            break;
        case RMMI_CHSET_PCCP437:
        case RMMI_CHSET_PCDN:
            while (src_text[i] != RMMI_END_OF_STRING_CHAR)
            {
                if (src_text[i] == 0x15)
                {
                    dest_text[i] = 0x5f;
                }
                else if (src_text[i] == 0x24)
                {
                    dest_text[i] = 0x02;
                }
                else if (src_text[i] == 0x40)
                {
                    dest_text[i] = 0x0;
                }
                else if (src_text[i] == 0x5f)
                {
                    dest_text[i] = 0x11;
                }
                else if (src_text[i] > 0x7f)
                {
                    dest_text[i] = MAP_PC_GSM7BIT_TABLE[src_text[i] - 0x80];
                }
                else
                {
                    dest_text[i] = src_text[i];
                }

                if (rmmi_ptr->char_set == RMMI_CHSET_PCDN)
                {
                    dest_text[i] = (dest_text[i] == 0x9b) ? 0x0c : dest_text[i];
                    dest_text[i] = (dest_text[i] == 0x9d) ? 0x0b : dest_text[i];
                }
                else
                {
                    dest_text[i] = (dest_text[i] == 0x9b) ? 0 : dest_text[i];
                    dest_text[i] = (dest_text[i] == 0x9d) ? 0x03 : dest_text[i];
                }
                i++;
            }
            //dest_text = src_text;     
            length = i;
            break;
            default: 
                break;
    }
    return length;
}

void rmmi_gsm7bit_to_IRA(kal_uint8 *src, kal_uint8 *des, kal_uint16 src_len, kal_uint8 des_len)
{

    kal_uint16 i, j;

    des_len -= 1;
    for(i=0, j=0; (i < src_len) && (j < des_len); i++, j++)
    {
        if(src[i] == 0x1b)
        {
            des[j] = Gsm7bit_default_ext_value_to_ascii(src[++i]);
        }
        else
        {
            des[j] = GSM7BitToAsciiArray[src[i]];
        }
    }        
    des[j] = RMMI_END_OF_STRING_CHAR;
    
}

/*****************************************************************************
 * FUNCTION
 *  check_dcs_toCscs
 * DESCRIPTION
 *  
 * PARAMETERS
 *  dcs         [IN]        
 *  length      [IN]        
 *  data        [?]         
 *  ch_str      [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_dcs_toCscs(kal_uint8 dcs, kal_uint16 length, kal_uint8 *data, kal_uint8 *ch_str)
{
    kal_uint16 i = 0, j = 0;
    kal_wchar *ucs2_array;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_DCS_TOCSCS_ENTRY);
    ASSERT((data != NULL) && (ch_str != NULL));
    if (dcs == SMSAL_DEFAULT_DCS)
    {
        switch (rmmi_ptr->char_set)
        {
            case RMMI_CHSET_GSM:
                kal_mem_cpy(ch_str, data, length);
                /* mtk00924_060102: append end_of_string_char when the string ends, otherwise, 
                   rmmi_fast_string_print may block in while loop */
                ch_str[length] = RMMI_END_OF_STRING_CHAR;
                break;
            case RMMI_CHSET_IRA:
            case RMMI_CHSET_88591:

                rmmi_gsm7bit_to_IRA(data, ch_str, length, 0);
                break;
            case RMMI_CHSET_PCDN:
            case RMMI_CHSET_PCCP437:
                while (i < length)
                {
                    if (data[i] == 0x5f)
                    {
                        ch_str[i] = 0x15;
                    }
                    else if (data[i] == 0x02)
                    {
                        ch_str[i] = 0x24;
                    }
                    else if (data[i] == 0x0)
                    {
                        ch_str[i] = 0x40;
                    }
                    else if (data[i] == 0x11)
                    {
                        ch_str[i] = 0x5f;
                    }
                    else
                    {
                        ch_str[i] = data[i];
                    }
                    i++;
                }
                ch_str[i] = RMMI_END_OF_STRING_CHAR;
                break;
            case RMMI_CHSET_HEX:
                check_sms_pdu_string(length, data, ch_str);
                break;
            case RMMI_CHSET_UCS2: //MAUI_01593887
                ucs2_array = get_ctrl_buffer(length * 2 + 2);   //+2 : to store 0x0000
                kal_mem_set(ucs2_array, 0x00, (length * 2 + 2));
                for(i=0, j=0; i < length; i++, j++)
                {
                    if(data[i] == 0x1b)
                    {
                        ucs2_array[j] = Gsm7bit_default_ext_value_to_UCS2(data[++i]);
                    }
                    else if ( (data[i]==0x10) || ((data[i]>=0x12) && (data[i]<=0x1A)))
                    {
                        ucs2_array[j] = Gsm7bit_greece_char_to_UCS2(data[i]);
                    }
                    else
                    {
                        ucs2_array[j] = (kal_wchar) GSM7BitToAsciiArray[data[i]];
                    }
                }
                rmmi_byte_order_reverse((kal_uint8*)ucs2_array, (kal_uint16) (length * 2 + 2));
                rmmi_print_ucs2((kal_uint8*)ucs2_array, ch_str);
                free_ctrl_buffer(ucs2_array);
                break;
             default: 
                break;
        }
    }
    else if (dcs & SMSAL_8BIT_DCS)
    {
        print_hex_value(data, ch_str);
    }
    else if (dcs & SMSAL_UCS2_DCS)
    {
        rmmi_print_ucs2(data, ch_str);
    }

}

/*****************************************************************************
 * FUNCTION
 *  Gsm7bit_default_ext_value_to_ascii
 * DESCRIPTION
 *  Transfer gsm7bit default extened code to the ASCII
 *  Note that there are some character which can't be handle by this function, like  ??????
 * PARAMETERS
 *  gsm7bit_ext_value         [IN]  
 * RETURNS
 *  ASCIIi code
 *****************************************************************************/
kal_uint8 Gsm7bit_default_ext_value_to_ascii(kal_uint8 gsm7bit_ext_value)
{
    kal_uint8 ascii_value = 0;

    switch (gsm7bit_ext_value)
    {       
        case 0x14:
            ascii_value = RMMI_HAT;
            break;
        case 0x28:
            ascii_value = RMMI_L_CURLY_BRACKET;
            break;
        case 0x29:
            ascii_value = RMMI_R_CURLY_BRACKET;
            break;
        case 0x2f:
            ascii_value = RMMI_CHAR_REVERSE_SOLIDUS;
            break;
        case 0x3c:
            ascii_value = RMMI_L_SQ_BRACKET;
            break;
        case 0x3d:
            ascii_value = RMMI_CHAR_TILDE;
            break;
        case 0x3e:
            ascii_value = RMMI_R_SQ_BRACKET;
            break;
        case 0x40:
            ascii_value = RMMI_CHAR_VERTICAL_LINE;
            break;
        default:
            ascii_value = RMMI_SPACE;
            break;
    }
    
    return ascii_value;
}

/*****************************************************************************
 * FUNCTION
 *  Gsm7bit_default_ext_value_to_UCS2
 * DESCRIPTION
 *  Transfer gsm7bit default extened code to the UCS2
 * PARAMETERS
 *  gsm7bit_ext_value         [IN]  
 * RETURNS
 *  UCS2 Code
 *****************************************************************************/
kal_wchar Gsm7bit_default_ext_value_to_UCS2(kal_uint8 gsm7bit_ext_value)
{
    if(gsm7bit_ext_value == 0x65)
    {
        return 0x20AC;          // ??????
    }
    else
    {
        return Gsm7bit_default_ext_value_to_ascii(gsm7bit_ext_value);
    }
}

/*****************************************************************************
 * FUNCTION
 *  Gsm7bit_greece_char_to_UCS2
 * DESCRIPTION
 *  Transfer gsm7bit default extened code to the UCS2
 * PARAMETERS
 *  gsm7bit_ext_value         [IN]  
 * RETURNS
 *  UCS2 Code
 *****************************************************************************/
kal_wchar Gsm7bit_greece_char_to_UCS2(kal_uint8 gsm7bit_greece)
{
    kal_wchar greece_char = 0;

    switch(gsm7bit_greece)
    {
        case 0x10:
            greece_char = 0x0394;
            break;
        case 0x12:
            greece_char = 0x03A6;
            break;
        case 0x13:
            greece_char = 0x0393;
            break;
        case 0x14:
            greece_char = 0x039B;
            break;
        case 0x15:
            greece_char = 0x03A9;
            break;
        case 0x16:
            greece_char = 0x03A0;
            break;
        case 0x17:
            greece_char = 0x03A8;
            break;
        case 0x18:
            greece_char = 0x03A3;
            break;
        case 0x19:
            greece_char = 0x0398;
            break;
        case 0x1A:
            greece_char = 0x039E;
            break;

        default:
            break;
    }

    return greece_char;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_decode_cbsdcs
 * DESCRIPTION
 *  This function decodes the data coding scheme.
 * PARAMETERS
 *  dcs                 [IN]            
 *  lang_type           [?]             
 *  alphabet_type       [?]             
 *  msg_class           [?]             
 *  is_compress         [?]             
 *  is_reserved         [?]             
 *  c(?)                [IN/OUT]        Msg_class
 *  a(?)                [IN]            Dcs
 *  b(?)                [IN/OUT]        Alphabet_type
 *  d(?)                [IN/OUT]        Compress
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_decode_cbsdcs(
        kal_uint8 dcs,
        kal_uint8 *lang_type,
        kal_uint8 *alphabet_type,
        //smsal_dcs_enum
        kal_uint8 *msg_class,
        //smsal_msg_class_enum
        kal_bool *is_compress,
        kal_bool *is_reserved)
{
    kal_uint8 coding_group = (dcs >> 4);
    kal_uint8 coding_bits = (dcs & 0x0f);

    *is_compress = KAL_FALSE;
    *is_reserved = KAL_FALSE;
    *msg_class = SMSAL_CLASS_UNSPECIFIED;
    *alphabet_type = SMSAL_DEFAULT_DCS;

    switch (coding_group)
    {
        case 0x00:
            *alphabet_type = SMSAL_DEFAULT_DCS;
            *lang_type = coding_bits;
            break;
        case 0x01:
            if (coding_bits == 0)
            {
                *alphabet_type = SMSAL_DEFAULT_DCS;
            }
            else if (coding_bits == 1)
            {
                *alphabet_type = SMSAL_UCS2_DCS;
            }
            else
            {
                *is_reserved = KAL_TRUE;
            }
            break;
        case 0x02:
            *alphabet_type = SMSAL_DEFAULT_DCS;
            if (coding_bits < 0x04)
            {
                *lang_type = coding_bits;
            }
            else
            {
                *is_reserved = KAL_TRUE;
            }
            break;
        case 0x03:
            *alphabet_type = SMSAL_DEFAULT_DCS;
            *is_reserved = KAL_TRUE;
            break;
        case 0x04:  /* General Data Coding Scheme */
        case 0x05:
        case 0x06:
        case 0x07:
            if ((coding_group & 0x02) != 0)
            {
                *is_compress = KAL_TRUE;
            }

            if ((coding_group & 0x01) == 0x01)
            {
                *msg_class = (dcs & 0x03);
            }

            *alphabet_type = (dcs & SMSAL_RESERVED_DCS);

            if (*alphabet_type == SMSAL_RESERVED_DCS)
            {
                *is_reserved = KAL_TRUE;
            }
            break;
        case 0x08:  /* 0x08 - 0x0d: Reserved */
        case 0x09:
        case 0x0a:
        case 0x0b:
        case 0x0c:
        case 0x0d:
            *is_reserved = KAL_TRUE;
            break;
        case 0x0e:  /* defined by WAP forum */
            break;
        case 0x0f:  /* Data Coding/Message Class */
            *is_reserved = ((dcs & SMSAL_UCS2_DCS) == SMSAL_UCS2_DCS) ? KAL_TRUE : KAL_FALSE;
            *msg_class = (dcs & 0x03);
            if (*msg_class == 0)
            {
                *msg_class = SMSAL_CLASS_UNSPECIFIED;   /* no msg class */
            }

            *alphabet_type = (dcs & SMSAL_8BIT_DCS);
            break;
        default:
            break;
    }

    return;
}   /* end of smsal_decode_cbsdcs */

#ifdef __MOD_SMSAL__


/*****************************************************************************
 * FUNCTION
 *  check_sms_storage_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  code        [IN]        
 *  name        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_sms_storage_name(kal_uint8 code, kal_uint8 *name)
{
    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_SMS_STORAGE_NAME_ENTRY);
    ASSERT(name != NULL);
    switch (code)
    {
        case SMSAL_SM:
            strcpy((char*)name, "SM\0");
            break;
        case SMSAL_ME:
            strcpy((char*)name, "ME\0");
            break;
        case SMSAL_MT:
            strcpy((char*)name, "MT\0");
            break;
        case SMSAL_SM_PREFER:
            strcpy((char*)name, "SM_P\0");
            break;
        case SMSAL_ME_PREFER:
            strcpy((char*)name, "ME_P\0");
            break;
        default: 
                break;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  check_sms_storage_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  name        [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_sms_storage_code(kal_uint8 *name)
{
    kal_uint8 code = 0xff;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_SMS_STORAGE_CODE_ENTRY);
    ASSERT(name != NULL);
    toUpper(name);
    if (strcmp((char*)name, "BM") == 0)
    {
        code = SMSAL_BM;
    }
    else if (strcmp((char*)name, "ME") == 0)
    {
        code = SMSAL_ME;
    }
    else if (strcmp((char*)name, "MT") == 0)
    {
        code = SMSAL_MT;
    }
    else if (strcmp((char*)name, "SM") == 0)
    {
        code = SMSAL_SM;
    }
    else if (strcmp((char*)name, "TA") == 0)
    {
        code = SMSAL_TA;
    }
    else if (strcmp((char*)name, "SR") == 0)
    {
        code = SMSAL_SR;
    }
    else if (strcmp((char*)name, "SM_P") == 0)
    {
        code = SMSAL_SM_PREFER;
    }
    else if (strcmp((char*)name, "ME_P") == 0)
    {
        code = SMSAL_ME_PREFER;
    }

    return code;
}


/*****************************************************************************
 * FUNCTION
 *  check_sms_scts
 * DESCRIPTION
 *  
 * PARAMETERS
 *  dest        [?]     
 *  scts        [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void check_sms_scts(kal_uint8 *dest, kal_uint8 *scts)
{
    kal_uint8 tz_flag;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_SMS_SCTS_ENTRY);
    ASSERT((dest != NULL) && (scts != NULL));
    if (strcmp((char*)scts, "\0\0\0\0\0\0\0") == 0)
    {
        dest[0] = RMMI_END_OF_STRING_CHAR;
        return;
    }
    tz_flag = ((scts[6] & 0x08) == 0) ? RMMI_CHAR_PLUS : RMMI_CHAR_MINUS;

    kal_sprintf(
        (kal_char*) dest,
        "20%d%d/%d%d/%d%d %d%d:%d%d:%d%d%c%d%d%c",
        scts[0] & 0xf,
        (scts[0] >> 4),
        scts[1] & 0xf,
        (scts[1] >> 4),
        scts[2] & 0xf,
        (scts[2] >> 4),
        scts[3] & 0xf,
        (scts[3] >> 4),
        scts[4] & 0xf,
        (scts[4] >> 4),
        scts[5] & 0xf,
        (scts[5] >> 4),
        tz_flag,
        scts[6] & 0x7,
        (scts[6] >> 4),
        RMMI_END_OF_STRING_CHAR);
}
#endif /* __MOD_SMSAL__ */ 


/*****************************************************************************
 * FUNCTION
 *  check_facility_type
 * DESCRIPTION
 *  
 * PARAMETERS
 *  fac     [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_facility_type(kal_uint8 *fac)
{
    kal_uint8 type = 0;
    kal_uint8 ch1, ch2;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_FACILITY_TYPE_ENTRY);
    ASSERT(fac != NULL);
    toUpper(fac);
    ch1 = *((kal_uint8*) fac + 0);
    ch2 = *((kal_uint8*) fac + 1);

    switch (ch1)
    {
        case RMMI_CHAR_A:
            switch (ch2)
            {
                case RMMI_CHAR_B:
                    type = L4_BAC;
                    break;
                case RMMI_CHAR_C:
                    type = L4_BIC;
                    break;
                case RMMI_CHAR_G:
                    type = L4_BOC;
                    break;
                case RMMI_CHAR_I:
                    type = L4_BAIC;
                    break;
                case RMMI_CHAR_O:
                    type = L4_BAOC;
                    break;
                default:
                    break;
            }
            break;
            /* AO, AI, AB, AC, AG */
        case RMMI_CHAR_C:
            break;
            /* CS *///not support
        case RMMI_CHAR_F:
            break;
            /* FD *///not support
        case RMMI_CHAR_I:
            if (ch2 == RMMI_CHAR_R)
            {
                type = L4_BAICROAM;
            }
            break;
            /* IR */
        case RMMI_CHAR_O:
            if (ch2 == RMMI_CHAR_I)
            {
                type = L4_BOIC;
            }
            else if (ch2 == RMMI_CHAR_X)
            {
                type = L4_BOICEXHC;
            }
            else
            {
                type = 0;
            }
            break;
            /* OI, OX */
        case RMMI_CHAR_P:
            switch (ch2)
            {
                case RMMI_CHAR_C:
                    type = TYPE_CP;
                    break;
                case RMMI_CHAR_N:
                    type = TYPE_NP;
                    break;
                case RMMI_CHAR_P:
                    type = TYPE_SP;
                    break;
                case RMMI_CHAR_U:
                    type = TYPE_NSP;
                    break;
                case RMMI_CHAR_2:
                    type = TYPE_CHV2;
                    break;
		  case RMMI_CHAR_F:
		      type = TYPE_IMSI_LOCK;
		      break;
                default:
                    //case RMMI_CHAR_S:  //not support
                    break;
            }
            break;
            /* PS, PF, PN, PU, PP, PC ,P2 */
        case RMMI_CHAR_S:
            if (ch2 == RMMI_CHAR_C)
            {
                type = TYPE_CHV1;
            }
            break;
            /* SC */
        default: 
                break;
    }

    return type;
}


/*****************************************************************************
 * FUNCTION
 *  check_pin_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  type        [IN]        
 *  name        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_pin_name(kal_uint8 type, kal_uint8 *name)
{
    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_PIN_NAME_ENTRY);
    ASSERT(name != NULL);
    *((kal_uint8*) name + 0) = RMMI_END_OF_STRING_CHAR;
    /*
     * typedef enum
     * {
     * ID_READY,
     * ID_SIM_PIN1,
     * ID_SIM_PUK1,
     * ID_PH_SIM_PIN,
     * ID_PH_FSIM_PIN,
     * ID_PH_FSIM_PUK,
     * ID_SIM_PIN2,
     * ID_SIM_PUK2,
     * ID_PH_NET_PIN,
     * ID_PH_NETSUB_PIN,
     * ID_PH_NETSUB_PUK,
     * ID_PH_SP_PIN,
     * ID_PH_SP_PUK,
     * ID_PH_CORP_PIN,
     * ID_PH_CORP_PUK,
     * ID_PHONELOCK
     * }smu_pending_password_id_enum;
     */

    switch (type)
    {
        case ID_READY:
            strcpy((char*)name, "READY\0");
            break;
        case ID_SIM_PIN1:
            strcpy((char*)name, "SIM PIN\0");
            break;
        case ID_SIM_PUK1:
            strcpy((char*)name, "SIM PUK\0");
            break;
        case ID_PH_SIM_PIN:
            strcpy((char*)name, "PH-SIM PIN\0");
            break;
        case ID_PH_FSIM_PIN:
            strcpy((char*)name, "PH-FSIM PIN\0");
            break;
        case ID_PH_FSIM_PUK:
            strcpy((char*)name, "PH-FSIM PUK\0");
            break;
        case ID_SIM_PIN2:
            strcpy((char*)name, "SIM PIN2\0");
            break;
        case ID_SIM_PUK2:
            strcpy((char*)name, "SIM PUK2\0");
            break;
        case ID_PH_NET_PIN:
            strcpy((char*)name, "PH-NET PIN\0");
            break;
        case ID_PH_NET_PUK:
            strcpy((char*)name, "PH-NET PUK\0");
            break;
        case ID_PH_NETSUB_PIN:
            strcpy((char*)name, "PH-NETSUB PIN\0");
            break;
        case ID_PH_NETSUB_PUK:
            strcpy((char*)name, "PH-NETSUB PUK\0");
            break;
        case ID_PH_SP_PIN:
            strcpy((char*)name, "PH-SP PIN\0");
            break;
        case ID_PH_SP_PUK:
            strcpy((char*)name, "PH-SP PUK\0");
            break;
        case ID_PH_CORP_PIN:
            strcpy((char*)name, "PH-CORP PIN\0");
            break;
        case ID_PH_CORP_PUK:
            strcpy((char*)name, "PH-CORP PUK\0");
            break;
        case ID_PHONELOCK:
            strcpy((char*)name, "PHONE LOCK\0");
            break;
    #if defined(__SP_RIL_SUPPORT__)
        case ID_SIM_BLOCKED:
            strcpy((char*)name, "SIM BLOCK\0");
            break;
        case ID_SIM_BUSY:
            strcpy((char*)name, "SIM BUSY\0");
            break;
    #endif /* __SP_RIL_SUPPORT__ */ 
        default:
            break;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  check_ppu_value
 * DESCRIPTION
 *  mtk00714: this function is to convert "string" to "ppu"
 *  <ppu>: 11 bytes acsii + 7 bytes ascii (no decimal point)
 *  <string> : readable for user (with decimal point)
 * PARAMETERS
 *  input       [?]     
 *  output      [?]     
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool check_ppu_value(kal_uint8 *input, kal_uint8 *output)
{
    kal_uint32 index = 0;
    kal_uint32 len;
    kal_uint32 pos;
    kal_uint8 *pdest;
    kal_uint32 i;

    len = strlen((char*)input);
    pdest = (kal_uint8*) strchr((const char*)input, RMMI_CHAR_DOT);

    if (pdest != NULL)  // format: xxx.xxxx , there's decimal point between
    {
        pos = pdest - input + 1;        // the position of the dot (start from 1)

	 if (pos > 12)
	 	return KAL_FALSE;

        for (i = 0; i < (11 - pos + 1); i++)    /* add "0"s before number */
        {
            *((kal_uint8*) output + index) = RMMI_CHAR_0;
            index++;
        }
        for (i = 0; i < (pos - 1); i++) /* copy numbers before dot '.'  */
        {
            *((kal_uint8*) output + index) = *((kal_uint8*) input + i);
            index++;
        }

        for (i = 0; i < (len - pos); i++)   /* copy numbers after dot '.'  */
        {
            *((kal_uint8*) output + index) = *((kal_uint8*) input + pos + i);
            index++;
        }
        for (i = 0; i < (7 - len + pos); i++)   /* copy numbers after dot '.'  */
        {
            *((kal_uint8*) output + index) = RMMI_CHAR_0;
            index++;
        }
        *((kal_uint8*) output + index) = RMMI_END_OF_STRING_CHAR;

    }
    else    /* format: 123, no decimal point */
    {
	 if (len > 11)
	 	return KAL_FALSE;
    
        for (i = 0; i < 11 - len; i++)  /* add "0"s to output before number  */
        {
            *((kal_uint8*) output + index) = RMMI_CHAR_0;
            index++;
        }
        for (i = 0; i < len; i++)   /* copy numbers from input to output  */
        {
            *((kal_uint8*) output + index) = *((kal_uint8*) input + i);
            index++;
        }
        for (i = 0; i < 7; i++) /* add rest "0"s to output   */
        {
            *((kal_uint8*) output + index) = RMMI_CHAR_0;
            index++;
        }
        *((kal_uint8*) output + index) = RMMI_END_OF_STRING_CHAR;
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  check_ppu_string
 * DESCRIPTION
 *  mtk00714: this function is to convert "ppu" to "string"
 *  <ppu>: 11 bytes acsii + 7 bytes ascii (no decimal point)
 *  <string> : readable for user (with decimal point)
 * PARAMETERS
 *  input       [?]     
 *  output      [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void check_ppu_string(kal_uint8 *input, kal_uint8 *output)
{
    kal_uint8 j = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_PPU_STRING_ENTRY);
    ASSERT((input != NULL) && (output != NULL));
    for (j = 0; j <= 10; j++)
    {
        *((kal_uint8*) output + j) = *((kal_uint8*) input + j);
    }

    *((kal_uint8*) output + j) = RMMI_CHAR_DOT;

    for (j = 11; j <= 17; j++)
    {
        *((kal_uint8*) output + j + 1) = *((kal_uint8*) input + j);
    }
    *((kal_uint8*) output + 19) = RMMI_END_OF_STRING_CHAR;
    return;
}


/*****************************************************************************
 * FUNCTION
 *  parse_dcs_list
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source      [?]     
 *  list        [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 parse_dcs_list(rmmi_string_struct *source, kal_uint16 *list)
{
    kal_bool range_flag = KAL_FALSE;
    kal_uint8 index = 0;
    kal_uint16 val = 0, temp;

    kal_brief_trace(TRACE_FUNC, FUNC_PARSE_INT_LIST_ENTRY);
    ASSERT((source != NULL) && (list != NULL));
    while (source->string_ptr[source->index] != RMMI_END_OF_STRING_CHAR)
    {
        rmmi_skip_spaces(source);
        while ((source->string_ptr[source->index] != RMMI_COMMA) &&
               (source->string_ptr[source->index] != RMMI_CHAR_MINUS) &&
               (source->string_ptr[source->index] != RMMI_END_OF_STRING_CHAR))
        {
            rmmi_skip_spaces(source);
            val = val * 10 + (source->string_ptr[source->index++] - RMMI_CHAR_0);
        }
        if (range_flag == KAL_TRUE)
        {
            if (val < list[index - 1])
            {
                return 0xff;
            }
            temp = list[index - 1] + 1;
            while (temp <= val)
            {
                list[index++] = temp++;
                if (index > SMSAL_CB_MAX_ENTRY)
                {
                    return 0xff;
                }
            }
            range_flag = KAL_FALSE;
        }
        else
        {
            list[index++] = val;
        }
        if (source->string_ptr[source->index] == RMMI_END_OF_STRING_CHAR)
        {
            break;
        }
        if (source->string_ptr[source->index] == RMMI_CHAR_MINUS)
        {
            range_flag = KAL_TRUE;
        }
        source->index++;
        val = 0;
        if (index > SMSAL_CB_MAX_ENTRY)
        {
            return 0xff;
        }
    }
    return index;
}


/*****************************************************************************
 * FUNCTION
 *  parse_int_list
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mode                [IN]        
 *  total_mid_num       [IN]        
 *  total_mir_num       [IN]        
 *  source              [?]         
 *  info                [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool parse_int_list(
            kal_bool mode,
            kal_uint8 total_mid_num,
            kal_uint8 total_mir_num,
            rmmi_string_struct *source,
            l4c_cb_info_struct *info)
{
    kal_bool range_flag = KAL_FALSE;
    kal_uint8 mid_count = 0, mir_count = 0;
    //kal_uint16 *list;
    kal_uint16 val = 0;
    kal_uint16 temp;

    kal_uint8 i = 0;
    kal_bool duplicate_flag = KAL_FALSE;
    kal_uint16 mir_start_value = 0;

    kal_uint8 j = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_PARSE_INT_LIST_ENTRY);

    //list = info->mid;

    ASSERT((source != NULL));
    while (source->string_ptr[source->index] != RMMI_END_OF_STRING_CHAR)
    {
        rmmi_skip_spaces(source);
        while ((source->string_ptr[source->index] != RMMI_COMMA) &&
               (source->string_ptr[source->index] != RMMI_CHAR_MINUS) &&
               (source->string_ptr[source->index] != RMMI_END_OF_STRING_CHAR))
        {
            rmmi_skip_spaces(source);
            if (source->string_ptr[source->index] < RMMI_CHAR_0 || source->string_ptr[source->index] > RMMI_CHAR_9)
            {
                return KAL_FALSE;//limited channel ID to 0~65535, not English word
            }
			
            val = val * 10 + (source->string_ptr[source->index++] - RMMI_CHAR_0);

            j++;

            if (j > 5)
            {
                return KAL_FALSE;
            }
        }

        j = 0;

        if (val > 0xffff)       //out of range
        {
            return KAL_FALSE;
        }
        if (range_flag == KAL_TRUE)
        {
            if (total_mir_num != 0)
            {
                if (val < info->mir[mir_count - 1]) /* reject 7-2 input request */
                {
                    return KAL_FALSE;
                }
                info->mir[mir_count++] = val;
                range_flag = KAL_FALSE;
            }
            else    /* No mir element , using mid to implement mir feature */
            {
                ASSERT(mid_count > 0);
                if (val < info->mid[mid_count - 1]) /* reject 7-2 input request */
                {
                    return KAL_FALSE;
                }
                //temp = info->mid[mid_count-1]+1;
                temp = mir_start_value + 1;
                while (temp <= val)
                {

                    if (mid_count == 0)
                    {
                        info->mid_mask[mid_count] = mode;
                        info->mid[mid_count++] = temp++;
                    }
                    else
                    {
                        for (i = 0; i < mid_count; i++)
                        {
                            if (temp == info->mid[i])   //mtk00924 2005_08_30: skip duplicate channel ID
                            {
                                duplicate_flag = KAL_TRUE;
                                break;
                            }
                        }

                        if (duplicate_flag == KAL_FALSE)
                        {
                            info->mid_mask[mid_count] = mode;
                            info->mid[mid_count++] = temp++;
                            if (mid_count > total_mid_num)
                            {
                                return KAL_FALSE;
                            }
                        }
                        else
                        {
                            duplicate_flag = KAL_FALSE; // mtk00924 2005_08_30: reset the flag for the next value                                            
                            temp++;
                        }
                    }
                }
                range_flag = KAL_FALSE;
            }
        }
        else if (source->string_ptr[source->index] == RMMI_CHAR_MINUS)
        {
            if (total_mir_num)
            {
                info->mir_mask[mir_count >> 1] = mode;
                info->mir[mir_count++] = val;
                range_flag = KAL_TRUE;
            }
            else    /* No mir element , using mid to implement mir feature */
            {

                if (mid_count == 0)
                {
                    info->mid_mask[mid_count] = mode;
                    info->mid[mid_count++] = val;
                }
                else
                {
                    for (i = 0; i < mid_count; i++)
                    {
                        if (val == info->mid[i])        //mtk00924 2005_08_30: skip duplicate channel ID
                        {
                            duplicate_flag = KAL_TRUE;
                            break;
                        }
                    }

                    if (duplicate_flag == KAL_FALSE)
                    {
                        info->mid_mask[mid_count] = mode;
                        info->mid[mid_count++] = val;
                        if (mid_count >= total_mid_num)
                        {
                            return KAL_FALSE;
                        }
                    }
                    else
                    {
                        duplicate_flag = KAL_FALSE;     // mtk00924 2005_08_30: reset the flag for the next value
                    }

                }

                mir_start_value = val;  //mtk00924 2005_08_30: use to save the ID that should be started with

                range_flag = KAL_TRUE;
            }
        }
        else
        {

            if (mid_count == 0)
            {
                info->mid_mask[mid_count] = mode;
                info->mid[mid_count++] = val;
            }
            else
            {
                for (i = 0; i < mid_count; i++)
                {
                    if (val == info->mid[i])    //mtk00924 2005_08_30: skip duplicate channel ID
                    {
                        duplicate_flag = KAL_TRUE;
                        break;
                    }
                }

                if (duplicate_flag == KAL_FALSE)
                {
                    if ((mid_count + 1) > total_mid_num)
                    {
                        return KAL_FALSE;       //mtk00924_060221: if user gives more channel ID than total_mid_num, AT return ERROR.
                    }

                    info->mid_mask[mid_count] = mode;
                    info->mid[mid_count++] = val;
                }
                else
                {
                    duplicate_flag = KAL_FALSE; // mtk00924 2005_08_30: reset the flag for the next value
                }

            }
        }

        if (source->string_ptr[source->index] == RMMI_END_OF_STRING_CHAR)
        {
            break;
        }
        source->index++;
        val = 0;

        if ((mid_count > total_mid_num) || ((mir_count/2) > total_mir_num))
        {
            return KAL_FALSE;
        }
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  check_char_set_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  chset           [IN]        
 *  chset_str       [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_char_set_name(kal_uint8 chset, kal_uint8 *chset_str)
{
    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_CHAR_SET_NAME_ENTRY);
    ASSERT(chset_str != NULL);
    switch (chset)
    {
        case RMMI_CHSET_IRA:
            strcpy((char*)chset_str, "IRA\0");
            break;
        case RMMI_CHSET_GSM:
            strcpy((char*)chset_str, "GSM\0");
            break;
        case RMMI_CHSET_HEX:
            strcpy((char*)chset_str, "HEX\0");
            break;
        case RMMI_CHSET_PCCP437:
            strcpy((char*)chset_str, "PCCP437\0");
            break;
        case RMMI_CHSET_PCDN:
            strcpy((char*)chset_str, "PCDN\0");
            break;
        case RMMI_CHSET_88591:
            strcpy((char*)chset_str, "8859-1\0");
            break;
        case RMMI_CHSET_UCS2:
            strcpy((char*)chset_str, "UCS2\0");
            break;
    #ifdef __PHB_0x81_SUPPORT__
        case RMMI_CHSET_UCS2_0X81:
            strcpy((char*)chset_str, "UCS2_0X81\0");
            break;
    #endif /* __PHB_0x81_SUPPORT__ */ 
        default: 
                break;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  check_char_set_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  chset_str       [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_char_set_code(kal_uint8 *chset_str)
{
    kal_uint8 code = 0xff;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_CHAR_SET_CODE_ENTRY);
    ASSERT(chset_str != NULL);
    toUpper(chset_str);
    
    if (l4_custom_is_supportted_cscs((kal_char*)chset_str) == KAL_FALSE)
    {
        code = 0xff;
    }
    else if (strcmp((char*)chset_str, "IRA") == 0)
    {
        code = RMMI_CHSET_IRA;
    }
    else if (strcmp((char*)chset_str, "GSM") == 0)
    {
        code = RMMI_CHSET_GSM;
    }
    else if (strcmp((char*)chset_str, "HEX") == 0)
    {
        code = RMMI_CHSET_HEX;
    }
    else if (strcmp((char*)chset_str, "PCCP437") == 0)
    {
        code = RMMI_CHSET_PCCP437;
    }
    /*
     * else if (strcmp ((char *)chset_str, "PCDN") == 0)
     * {
     * code = RMMI_CHSET_PCDN;
     * }
     */
    else if (strcmp((char*)chset_str, "8859-1") == 0)
    {
        code = RMMI_CHSET_88591;
    }
    else if (strcmp((char*)chset_str, "UCS2") == 0)
    {
        code = RMMI_CHSET_UCS2;
    }
#ifdef __PHB_0x81_SUPPORT__
    else if (strcmp((char*)chset_str, "UCS2_0X81") == 0)
    {
        code = RMMI_CHSET_UCS2_0X81;
    }
#endif /* __PHB_0x81_SUPPORT__ */ 
    return code;
}


/*****************************************************************************
 * FUNCTION
 *  check_sms_mem_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  status_str      [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_sms_mem_code(kal_uint8 *mem_str)
{

    kal_uint8 code = 0xff;
    if (strcmp((char*)mem_str, "SM") == 0 || strcmp((char*)mem_str, "sm") == 0)
    {
        code = RMMI_SMSAL_SM;
    }
    else if (strcmp((char*)mem_str, "ME") == 0 || strcmp((char*)mem_str, "me") == 0)
    {
        code = RMMI_SMSAL_ME;
    }
    return code;
}


/*****************************************************************************
 * FUNCTION
 *  check_sms_status_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  status_str      [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_sms_status_code(kal_uint8 *status_str)
{
    kal_uint8 code = 0xff;

    if (strcmp((char*)status_str, "REC UNREAD") == 0 || strcmp((char*)status_str, "rec unread") == 0)
    {
        code = SMSAL_REC_UNREAD;
    }
    else if (strcmp((char*)status_str, "REC READ") == 0 || strcmp((char*)status_str, "rec read") == 0)
    {
        code = SMSAL_REC_READ;
    }
    else if (strcmp((char*)status_str, "STO UNSENT") == 0 || strcmp((char*)status_str, "sto unsent") == 0)
    {
        code = SMSAL_STO_UNSENT;
    }
    else if (strcmp((char*)status_str, "STO SENT") == 0 || strcmp((char*)status_str, "sto sent") == 0)
    {
        code = SMSAL_STO_SENT;
    }
    else if (strcmp((char*)status_str, "ALL") == 0 || strcmp((char*)status_str, "all") == 0)
    {
        code = SMSAL_ALL;
    }

    return code;
}

/*
 * kal_bool check_lan_code(kal_uint8 *lan_code)
 * {
 * //kal_brief_trace(TRACE_FUNC, FUNC_CHECK_SMS_STORAGE_NAME_ENTRY);
 * ASSERT (lan_code != NULL);
 * //toUpper (lan_code);
 * 
 * if ( (  (lan_code[0]=='E' || lan_code[0]=='e') &&  (lan_code[1] == 'N' || lan_code[1] == 'n') ) ||
 * (  (lan_code[0]=='Z' || lan_code[0]=='z' ) && (lan_code[1] == 'H' || lan_code[1] == 'h' ) ) ||
 * (  (lan_code[0]=='T' || lan_code[0]=='t') &&   (lan_code[1] == 'W' ||lan_code[1] == 'w')  )   )
 * return KAL_TRUE;
 * else
 * return KAL_FALSE;
 * 
 * }
 */

/*
 * void check_auto_lan_code (kal_uint8 *lan_code)
 * {
 * 
 * 
 * toUpper (lan_code);
 * 
 * 
 * if (strcmp ((char *)lan_code, "AUTO") == 0)
 * {
 * // we may call sim functio to get preferred lan set
 * //if not we can using english as our default setting.
 * strcpy((char *)lan_code, "en\0");
 * }
 * return;
 * }
 */


/*****************************************************************************
 * FUNCTION
 *  check_language_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  lan_name        [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_language_code(kal_uint8 *lan_name)
{
    kal_uint8 lan_code = 0xff;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    toUpper(lan_name);
    if (strcmp((char*)lan_name, "EN") == 0)
    {
        lan_code = MMI_PS_AT_LANG_EN;
    }
    else if (strcmp((char*)lan_name, "ZH-TW") == 0)
    {
        lan_code = MMI_PS_AT_LANG_TW;
    }
    else if (strcmp((char*)lan_name, "ZH-CN") == 0)
    {
        lan_code = MMI_PS_AT_LANG_ZH;
    }
    else if (strcmp((char*)lan_name, "AUTO") == 0)
    {
        //check stored lp from SIM
        if (rmmi_ptr->preferred_lang == 0x01)   //English
        {
            lan_code = MMI_PS_AT_LANG_EN;
        }
        else if (rmmi_ptr->preferred_lang == 0xff)      //No lp in SIM
        {
            lan_code = 0xff;
        }
        else    //unspecified
        {
            lan_code = MMI_PS_AT_LANG_DEFAULT;
        }
    }
    return lan_code;
}


/*****************************************************************************
 * FUNCTION
 *  check_language_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  lan_code        [IN]        
 *  lan_name        [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool check_language_name(kal_uint8 lan_code, kal_uint8 *lan_name)
{
    //if(lan_code==MMI_PS_AT_LANG_UNKWN)
    //   return KAL_FALSE;
    if (lan_code >= MMI_PS_AT_LANG_LAST)
    {
        return KAL_FALSE;
    }
    else
    {
        if (lan_code == MMI_PS_AT_LANG_DEFAULT)
        {
            strcpy((char*)lan_name, "AUTO");
        }
        else if (lan_code == MMI_PS_AT_LANG_EN)
        {
            strcpy((char*)lan_name, "en");
        }
        else if (lan_code == MMI_PS_AT_LANG_TW)
        {
            strcpy((char*)lan_name, "zh-TW");
        }
        else if (lan_code == MMI_PS_AT_LANG_ZH)
        {
            strcpy((char*)lan_name, "zh-CN");
        }
        else if (lan_code == MMI_PS_AT_LANG_UNKWN)
        {
            strcpy((char*)lan_name, "other");
        }
        return KAL_TRUE;
    }
}


/*****************************************************************************
 * FUNCTION
 *  check_sms_mem_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  code        [IN]        
 *  name        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_sms_mem_name(kal_uint8 code, kal_uint8 *name)
{
    //kal_brief_trace(TRACE_FUNC, FUNC_CHECK_SMS_STORAGE_NAME_ENTRY);
    ASSERT(name != NULL);
    switch (code)
    {
        case RMMI_SMSAL_SM:
            strcpy((char*)name, "SM");
            break;
        case RMMI_SMSAL_ME:
            strcpy((char*)name, "ME");
            break;
        default:
            name[0] = 0;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  check_sms_status_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  code        [IN]        
 *  name        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_sms_status_name(kal_uint8 code, kal_uint8 *name)
{
    //kal_brief_trace(TRACE_FUNC, FUNC_CHECK_SMS_STORAGE_NAME_ENTRY);
    ASSERT(name != NULL);
    switch (code)
    {
        case SMSAL_REC_UNREAD:
            strcpy((char*)name, "REC UNREAD");
            break;
        case SMSAL_REC_READ:
            strcpy((char*)name, "REC READ");
            break;
        case SMSAL_STO_UNSENT:
            strcpy((char*)name, "STO UNSENT");
            break;
        case SMSAL_STO_SENT:
            strcpy((char*)name, "STO SENT");
            break;
        case SMSAL_ALL:
            strcpy((char*)name, "ALL");
            break;
        default:
            name[0] = 0;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  check_keypad_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  key         [?]     
 *  keycode     [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool check_keypad_code(kal_uint8 *key, kal_uint8 *keycode)
{
    kal_uint32 index = 0;
    kal_uint8 tmp_keycode = 0;
    kal_uint8 *tmp_key;
    kal_bool ret_val = KAL_TRUE;
    kal_uint32 length;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_KEYPAD_CODE_ENTRY);
    ASSERT((key != NULL) && (keycode != NULL));
    
    length = strlen((kal_char*)key);
    while ((index < length) && (ret_val == KAL_TRUE))
    {
        tmp_key = custom_check_keypad_code(key + index, &tmp_keycode);
        if (tmp_key != (key + index))
        {
            if (tmp_key > (key + index))
            {
                index = tmp_key-key;
                *keycode = tmp_keycode;
                keycode++;                
            }
            else
            {
                kal_brief_trace(TRACE_ERROR, ERROR_CHECK_KEY_PAD);
                ret_val = KAL_FALSE;
            }            
            continue;
        }
            
        switch (key[index])
        {
            case RMMI_CHAR_0:
            case RMMI_CHAR_1:
            case RMMI_CHAR_2:
            case RMMI_CHAR_3:
            case RMMI_CHAR_4:
            case RMMI_CHAR_5:
            case RMMI_CHAR_6:
            case RMMI_CHAR_7:
            case RMMI_CHAR_8:
            case RMMI_CHAR_9:
                *keycode = DEVICE_KEY_0 + (key[index] - '0');
                break;
            case RMMI_CHAR_STAR:
                *keycode = DEVICE_KEY_STAR;
                break;
            case RMMI_CHAR_POUND:
                *keycode = DEVICE_KEY_HASH;
                break;
            case RMMI_CHAR_U:
            case rmmi_char_u:
                *keycode = DEVICE_KEY_VOL_UP;
                break;
            case RMMI_CHAR_C:
            case rmmi_char_c:
                *keycode = DEVICE_KEY_CLEAR;
                break;
            case RMMI_CHAR_D:
            case rmmi_char_d:
                *keycode = DEVICE_KEY_VOL_DOWN;
                break;
            case RMMI_HAT:
                *keycode = DEVICE_KEY_UP;
                break;
            case RMMI_CHAR_V:
            case rmmi_char_v:
                *keycode = DEVICE_KEY_DOWN;
                break;
            case RMMI_L_ANGLE_BRACKET:
                *keycode = DEVICE_KEY_LEFT;
                break;
            case RMMI_R_ANGLE_BRACKET:
                *keycode = DEVICE_KEY_RIGHT;
                break;
            case RMMI_CHAR_M:
            case rmmi_char_m:
                *keycode = DEVICE_KEY_MENU;
                break;
            case RMMI_CHAR_F:
            case rmmi_char_f:
                *keycode = DEVICE_KEY_FUNCTION;
                break;
            case RMMI_L_SQ_BRACKET:
                *keycode = DEVICE_KEY_SK_LEFT;
                break;
            case RMMI_R_SQ_BRACKET:
                *keycode = DEVICE_KEY_SK_RIGHT;
                break;
            case RMMI_CHAR_S:
            case rmmi_char_s:
                *keycode = DEVICE_KEY_SEND;
                break;
            case RMMI_CHAR_E:
            case rmmi_char_e:
                *keycode = DEVICE_KEY_END;
                break;
            case RMMI_CHAR_P:
            case rmmi_char_p:
                *keycode = DEVICE_KEY_POWER;
                break;
            case RMMI_COLON:
            {
                index++;
                switch(key[index])
                {
                    case RMMI_CHAR_B:
                        *keycode = DEVICE_KEY_BACK;
                        break;
                    case RMMI_CHAR_H:
                        *keycode = DEVICE_KEY_HOME;
                        break;
                    default:
                        ret_val = KAL_FALSE;
                        break;
                }
                break;
            }
            #if defined(QWERTY_KEYPAD) && defined(__CKPD_QWERTY_KEYPAD_SUPPORT__)
            case RMMI_MONEY:
                index++;
                if (key[index] >= RMMI_CHAR_A && key[index] <= RMMI_CHAR_Z)
                {
                    *keycode = DEVICE_KEY_A + (key[index] - RMMI_CHAR_A); 
                    break;
                }
                switch(key[index])
                {
                    case rmmi_char_e:
                        *keycode = DEVICE_KEY_ENTER;
                        break;
                    case rmmi_char_p:
                        *keycode = DEVICE_KEY_SPACE;
                        break;
                    case rmmi_char_t:
                        *keycode = DEVICE_KEY_TAB;
                        break;
                    case rmmi_char_d:
                        *keycode = DEVICE_KEY_DEL;
                        break;
                    case rmmi_char_a:
                        *keycode = DEVICE_KEY_ALT;
                        break;
                    case rmmi_char_l:
                        *keycode = DEVICE_KEY_CTRL;
                        break;
                    case rmmi_char_w:
                        *keycode = DEVICE_KEY_WIN;
                        break;
                    case rmmi_char_h:
                        *keycode = DEVICE_KEY_SHIFT;
                        break;
                    case RMMI_QUESTION_MARK:
                        *keycode = DEVICE_KEY_QUESTION;
                        break;
                    case RMMI_CHAR_DOT:
                        *keycode = DEVICE_KEY_PERIOD;
                        break;
                    case RMMI_COMMA:
                        *keycode = DEVICE_KEY_COMMA;
                        break;
                    case RMMI_EXCLAMATION_MARK:
                        *keycode = DEVICE_KEY_EXCLAMATION;
                        break;
                    case '\'':
                        *keycode = DEVICE_KEY_APOSTROPHE;
                        break;
                    case RMMI_AT:
                        *keycode = DEVICE_KEY_AT;
                        break;
                    case rmmi_char_s:
                        *keycode = DEVICE_KEY_SEND2;
                        break;
                    case '`':
                        *keycode = DEVICE_KEY_BACKQUOTE;
                        break;
                    case RMMI_CHAR_MINUS:
                        *keycode = DEVICE_KEY_DASH;
                        break;
                    case RMMI_EQUAL:
                        *keycode = DEVICE_KEY_EQUAL;
                        break;
                    case rmmi_char_b:
                        *keycode = DEVICE_KEY_BACKSPACE;
                        break;
                    case RMMI_L_BRACKET:
                        *keycode = DEVICE_KEY_OPEN_PARENS;
                        break;
                    case RMMI_R_BRACKET:
                        *keycode = DEVICE_KEY_CLOSE_PARENS;
                        break;
                    case RMMI_L_SQ_BRACKET:
                        *keycode = DEVICE_KEY_OPEN_SQUARE;
                        break;
                    case RMMI_R_SQ_BRACKET:
                        *keycode = DEVICE_KEY_CLOSE_SQUARE;
                        break;
                    case RMMI_L_CURLY_BRACKET:
                        *keycode = DEVICE_KEY_OPEN_BRACE;
                        break;
                    case RMMI_R_CURLY_BRACKET:
                        *keycode = DEVICE_KEY_CLOSE_BRACE;
                        break;
                    case rmmi_char_i:
                        *keycode = DEVICE_KEY_BACKSLASH;
                        break;
                    case rmmi_char_j:
                        *keycode = DEVICE_KEY_SEMICOLON;
                        break;
                    case RMMI_FORWARD_SLASH:
                        *keycode = DEVICE_KEY_SLASH;
                        break;
                    case RMMI_MONEY:
                        *keycode = DEVICE_KEY_DOLLAR;
                        break;
                    case RMMI_CHAR_PERCENT:
                        *keycode = DEVICE_KEY_PERCENT;
                        break;
                    case RMMI_HAT:
                        *keycode = DEVICE_KEY_CARET;
                        break;
                    case '&':
                        *keycode = DEVICE_KEY_AND;
                        break;
                    case rmmi_char_k:
                        *keycode = DEVICE_KEY_QUOTE;
                        break;
                    case RMMI_CHAR_PLUS:
                        *keycode = DEVICE_KEY_PLUS;
                        break;
                    case RMMI_L_ANGLE_BRACKET:
                        *keycode = DEVICE_KEY_LESS_THAN;
                        break;
                    case RMMI_R_ANGLE_BRACKET:
                        *keycode = DEVICE_KEY_GREAT_THAN;
                        break;
                    case RMMI_CHAR_ULINE:
                        *keycode = DEVICE_KEY_UNDERSCORE;
                        break;
                    case RMMI_CHAR_VERTICAL_LINE:
                        *keycode = DEVICE_KEY_PIPE;
                        break;
                    case RMMI_CHAR_TILDE:
                        *keycode = DEVICE_KEY_TILDE;
                        break;
                    case rmmi_char_c:
                        *keycode = DEVICE_KEY_CAPS_LOCK;
                        break;
                    case RMMI_CHAR_9:
                        *keycode = DEVICE_KEY_NUM_LOCK;
                        break;
                    case rmmi_char_f:
                        *keycode = DEVICE_KEY_FN;
                        break;                        
                    case rmmi_char_y:
                        *keycode = DEVICE_KEY_SYMBOL;
                        break;
                    case rmmi_char_m:
                        *keycode = DEVICE_KEY_EMAIL;
                        break;
                    case rmmi_char_g:
                        *keycode = DEVICE_KEY_MESSAGE;
                        break;
                    case rmmi_char_r:
                        *keycode = DEVICE_KEY_CAMERA;
                        break;
                    case rmmi_char_z:
                        *keycode = DEVICE_KEY_ESC;
                        break;
                    case rmmi_char_q:
                        *keycode = DEVICE_KEY_QWERTY_MENU;
                        break;
                    case rmmi_char_o:
                        *keycode = DEVICE_KEY_OK;
                        break;
                    default:
                        ret_val = KAL_FALSE;
                        break;
                }
                break;
            #endif
            default:
                ret_val = KAL_FALSE;
                break;
        }
        keycode++;
        index++;
    }
    *keycode = 0xff;
    return ret_val;
}

/* this function convert DEVICE_KEY_CODE to <key> defined in +CKPD and +CMER */


/*****************************************************************************
 * FUNCTION
 *  convert_keypad_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  keycode     [IN]        
 *  key         [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool convert_keypad_code(kal_uint8 keycode, kal_uint8 *key)
{
    kal_bool ret_val = KAL_TRUE;

    //kal_brief_trace(TRACE_FUNC, FUNC_CHECK_KEYPAD_CODE_ENTRY);
    ASSERT(key != NULL);

    switch (keycode)
    {
        case DEVICE_KEY_0:
        case DEVICE_KEY_1:
        case DEVICE_KEY_2:
        case DEVICE_KEY_3:
        case DEVICE_KEY_4:
        case DEVICE_KEY_5:
        case DEVICE_KEY_6:
        case DEVICE_KEY_7:
        case DEVICE_KEY_8:
        case DEVICE_KEY_9:
            *key = RMMI_CHAR_0 + (keycode - DEVICE_KEY_0);
            break;
        case DEVICE_KEY_STAR:
            *key = RMMI_CHAR_STAR;
            break;
        case DEVICE_KEY_HASH:
            *key = RMMI_CHAR_POUND;
            break;
        case DEVICE_KEY_VOL_UP:
            *key = RMMI_CHAR_U;
            break;
        case DEVICE_KEY_VOL_DOWN:
            *key = RMMI_CHAR_D;
            break;
        case DEVICE_KEY_UP:
            *key = RMMI_HAT;
            break;
        case DEVICE_KEY_DOWN:
            *key = RMMI_CHAR_V;
            break;
        case DEVICE_KEY_LEFT:
            *key = RMMI_L_ANGLE_BRACKET;
            break;
        case DEVICE_KEY_RIGHT:
            *key = RMMI_R_ANGLE_BRACKET;
            break;
        case DEVICE_KEY_MENU:
            *key = RMMI_CHAR_M;
            break;
        case DEVICE_KEY_FUNCTION:
            *key = RMMI_CHAR_F;
            break;
        case DEVICE_KEY_SK_LEFT:
            *key = RMMI_L_SQ_BRACKET;
            break;
        case DEVICE_KEY_SK_RIGHT:
            *key = RMMI_R_SQ_BRACKET;
            break;
        case DEVICE_KEY_SEND:
            *key = RMMI_CHAR_S;
            break;
        case DEVICE_KEY_END:
            *key = RMMI_CHAR_E;
            break;
        case DEVICE_KEY_POWER:
            *key = RMMI_CHAR_P;
            break;
        default:
            ret_val = KAL_FALSE;
            return ret_val;
    }
    return KAL_TRUE;
}

#ifdef __MOD_TCM__


/*****************************************************************************
 * FUNCTION
 *  check_pdp_type_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  code        [IN]        
 *  str         [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_pdp_type_name(kal_uint8 code, kal_uint8 *str)
{
    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_PDP_TYPE_NAME_ENTRY);
    ASSERT(str != NULL);
    switch (code)
    {
        case IPV4_ADDR_TYPE:
            strcpy((char*)str, "IP\0");
            break;

        case IPV4V6_ADDR_TYPE:
            strcpy((char*)str, "IPV4V6\0");
            break;        

        case IPV6_ADDR_TYPE:
            strcpy((char*)str, "IPV6\0");
            break;

        default:
            strcpy((char*)str, "\0");
            break;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  check_pdp_type_code
 * DESCRIPTION
 *  Convert string to pdp_addr_type_enum
 * PARAMETERS
 *  str     [IN]     
 * RETURNS
 *  the corresponding pdp_addr_type_enum value
 *****************************************************************************/
extern kal_uint8 l4c_test_target_type;
kal_uint8 check_pdp_type_code(kal_uint8 *str)
{
    pdp_addr_type_enum code = NULL_PDP_ADDR_TYPE;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_PDP_TYPE_CODE_ENTRY);
    ASSERT(str != NULL);
    toUpper(str);
    if (strcmp((char*)str, "IP") == 0)
    {
        code = IPV4_ADDR_TYPE;
    }
    else if (strcmp((char*)str, "IPV6") == 0)
    {
        code = IPV6_ADDR_TYPE;
    }
    else if (strcmp((char*)str, "IPV4V6") == 0)
    {
        code = IPV4V6_ADDR_TYPE;
    }        
    else if (strcmp((char*)str, "PPP") == 0)
    {
        code = PPP_ADDR_TYPE;
    }

    if (l4c_test_target_type != 0x56)
    {
        code = l4c_test_target_type; 
        //kal_print("replace PDP type!!!");
        kal_prompt_trace(l4c_current_mod_id, "[IPV4V6] overwrite PDP type to %d", l4c_test_target_type);
    }



    return code;
}

#endif /* __MOD_TCM__ */ /* MOD_TCM */


/*****************************************************************************
 * FUNCTION
 *  check_dotted_value8
 * DESCRIPTION
 *  MAUI_02555586 mtk02126 refine check_dotted_value8
 * PARAMETERS
 *  str     [IN]
 *  val     [OUT]
 *  val_len [IN] the buffer length of val.
 *               we use this parameter to avoid memory corruption problem
 * RETURNS
 *  return the number of numbers found. 255 means error
 *****************************************************************************/
kal_uint8 check_dotted_value8(kal_uint8 *str, kal_uint8 *val, kal_uint32 val_len)
{
    kal_uint8 i = 0;
    kal_uint8 length;
    kal_uint16 temp_value;
    rmmi_validator_cause_enum result;
    rmmi_string_struct source;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_DOTTED_VALUE8_ENTRY);
    if ((NULL == str) || (NULL == val))
    {
        ASSERT(0);
    }
    if (val_len >= RMMI_VALIDATOR_ERROR)
    {
        return RMMI_VALIDATOR_ERROR; 
    }
    
    source.index = 0;
    source.string_ptr = str;
    length = (kal_uint8)strlen((char*)str);

    while (source.index < length && i < val_len)
    {
        temp_value = (kal_uint16)rmmi_extract_number(&source, &result, 0xff);      
        if(result != RMMI_PARSE_OK)
        {
            return RMMI_VALIDATOR_ERROR; 
        }
        *((kal_uint8*) val + i) = (kal_uint8) temp_value;
        source.index++;
        i++;
    }

    /* 
     * mtk02126 this means that the number in str exceed the volume of val 
     */
    if (source.index < length)
    {
        return RMMI_VALIDATOR_ERROR;
    }
    return i;
}


/*****************************************************************************
 * FUNCTION
 *  check_dotted_value16
 * DESCRIPTION
 *  MAUI_02555586 mtk02126 refine check_dotted_value16
 * PARAMETERS
 *  str     [IN]
 *  val     [OUT]
 *  val_len [IN] the buffer length of val.
 *               we use this parameter to avoid memory corruption problem
 * RETURNS
 *  return the number of numbers found. 255 means error
 *****************************************************************************/
kal_uint8 check_dotted_value16(kal_uint8 *str, kal_uint16 *val, kal_uint32 val_len)
{
    kal_uint8 i = 0;
    kal_uint8 length;
    kal_uint16 temp_value;
    rmmi_validator_cause_enum result;
    rmmi_string_struct source;    

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_DOTTED_VALUE16_ENTRY);
    if ((NULL == str) || (NULL == val))
    {
        ASSERT(0);
    }
    if (val_len >= RMMI_VALIDATOR_ERROR)
    {
        return RMMI_VALIDATOR_ERROR; 
    }
    
    source.index = 0;
    source.string_ptr = str;
    length = (kal_uint8)strlen((char*)str);

    while (source.index < length && i < val_len)
    {
        temp_value = (kal_uint16)rmmi_extract_number(&source, &result, 0xffff);
        if(result != RMMI_PARSE_OK)
        {
            return RMMI_VALIDATOR_ERROR; 
        }
        *((kal_uint16*) val + i) = temp_value;
        source.index++;
        i++;
    }

    /* 
     * mtk02126 this means that the number in str exceed the volume of val 
     */
    if (source.index < length)
    {
        return RMMI_VALIDATOR_ERROR;
    }
    return i;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_value2string
 * DESCRIPTION
 *  
 * PARAMETERS
 *  str     [?]         
 *  val     [?]         
 *  cnt     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_value2string(kal_char *str, kal_uint8 *val, kal_uint8 cnt)
{
    kal_char tmp[5];
    kal_uint32 i, len = 0;

    if((str == NULL) || (val == NULL))
    {
        ASSERT(0);
    }	

    if (cnt > 0 && str != NULL)
    {
        sprintf(str, "%d", val[0]);
        len += strlen(str);
    }

    for (i = 1; i < cnt; i++)
    {
        sprintf(tmp, ".%d", val[i]);
        strcat(str, tmp);
        len += strlen(str);
        if (len > 16)
        {
            return;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_u8_to_dotstring
 * DESCRIPTION
 *  
 * PARAMETERS
 *  val         [?]         
 *  str         [?]         
 *  length      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_u8_to_dotstring(kal_uint8 *val, kal_uint8 *str, kal_uint8 length)
{
#if defined(__MOD_TCM__) || defined(__SP_RIL_SUPPORT__)
    //mtk01616_080310: Note!! the compile option should sync with caller , this is used to reduce RO data size in low cost project
    kal_uint32 i, index = 0;

    ASSERT((str != NULL) && (val != NULL));
    if (length == 0)
    {
        str[index] = 0;
        return;
    }
    for (i = 0; i < length; i++)
    {
        index += kal_sprintf((char*)str + index, "%d", val[i]);
        str[index] = RMMI_CHAR_DOT;
        index++;
    }
    str[index - 1] = 0;
#endif /* defined(__MOD_TCM__) || defined(__SP_RIL_SUPPORT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_u16_to_dotstring
 * DESCRIPTION
 *  
 * PARAMETERS
 *  val         [?]         
 *  str         [?]         
 *  length      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_u16_to_dotstring(kal_uint16 *val, kal_uint8 *str, kal_uint8 length)
{
#if defined(__MOD_TCM__) || defined(__SP_RIL_SUPPORT__)
    //mtk01616_080310: Note!! the compile option should sync with caller , this is used to reduce RO data size in low cost project
    kal_uint32 i, index = 0;

    ASSERT((str != NULL) && (val != NULL));
    if (length == 0)
    {
        str[index] = 0;
        return;
    }
    for (i = 0; i < length; i++)
    {
        index += kal_sprintf((char*)str + index, "%u", val[i]);
        str[index] = RMMI_CHAR_DOT;
        index++;
    }
    str[index - 1] = 0;
#endif /* defined(__MOD_TCM__) || defined(__SP_RIL_SUPPORT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_hexstring_to_integer
 * DESCRIPTION
 *  convert the hex string to integer.
 * PARAMETERS
 *  str     [IN]        Hex string
 *  val     [OUT]       Uint32 value.
 * RETURNS
 *  TRUE/FALSE depends on success or fail.
 *****************************************************************************/
kal_bool rmmi_hexstring_to_integer(kal_uint8 *str, kal_uint32 *val)
{
    kal_uint16 i = 0;
    kal_uint32 temp = 0;

    ASSERT((str != NULL) && (val != NULL));
    toUpper(str);

    while (str[i] != RMMI_END_OF_STRING_CHAR)
    {
        if (RMMI_IS_NUMBER(str[i]))
        {
            temp = (temp << 4) + (str[i] - RMMI_CHAR_0);
        }
        else if ((str[i] >= RMMI_CHAR_A) && (str[i] <= RMMI_CHAR_F))
        {
            temp = (temp << 4) + ((str[i] - RMMI_CHAR_A) + 10);
        }
        else
        {
            return KAL_FALSE;
        }
        i++;
    }
    *val = temp;
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  check_hex_value
 * DESCRIPTION
 *  check hex value
 * PARAMETERS
 *  str     [IN]        String
 *  val     [OUT]       Hex value.
 * RETURNS
 *  void
 *****************************************************************************/
void check_hex_value(kal_uint8 *str, kal_uint8 *val)
{
    kal_uint16 i = 0, j = 0;
    kal_uint8 temp;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_HEX_VALUE_ENTRY);
    ASSERT((str != NULL) && (val != NULL));
    toUpper(str);

    while (str[i] != RMMI_END_OF_STRING_CHAR)
    {
        if (RMMI_IS_NUMBER(str[i]))
        {
            temp = str[i] - RMMI_CHAR_0;
        }
        else
        {
            temp = (str[i] - RMMI_CHAR_A) + 10;
        }

        if (RMMI_IS_NUMBER(str[i + 1]))
        {
            temp = (temp << 4) + (str[i + 1] - RMMI_CHAR_0);
        }
        else
        {
            temp = (temp << 4) + ((str[i + 1] - RMMI_CHAR_A) + 10);
        }

        val[j] = temp;
        i += 2;
        j++;
    }
}

/*****************************************************************************
 * FUNCTION
 *  check_emsd_hex_value
 * DESCRIPTION
 *  check hex value
 * PARAMETERS
 *  str     [IN]        String
 *  val     [OUT]       Hex value.
 * RETURNS
 *  void
 *****************************************************************************/
void check_emsd_hex_value(kal_uint8 *str, kal_uint8 *val)
{
    kal_uint16 i = 0, j = 0;
    kal_uint8 temp;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_HEX_VALUE_ENTRY);
    ASSERT((str != NULL) && (val != NULL));
    toUpper(str);

    while (str[i] != RMMI_END_OF_STRING_CHAR)
    {
        if (RMMI_IS_NUMBER(str[i]))
        {
            temp = str[i] - RMMI_CHAR_0;
        }
        else if (RMMI_IS_HEX_ALPHA(str[i]))
        {
            temp = (str[i] - RMMI_CHAR_A) + 10;
        }
        else
        {
            temp = 0; 
        }

        if (RMMI_IS_NUMBER(str[i + 1]))
        {
            temp = (temp << 4) + (str[i + 1] - RMMI_CHAR_0);
        }
        else if (RMMI_IS_HEX_ALPHA(str[i+1]))
        {
            temp = (temp << 4) + ((str[i + 1] - RMMI_CHAR_A) + 10);
        }
        else
        {
            temp = (temp << 4) ;
        }

        val[j] = temp;
        i += 2;
        j++;
    }
}



/*****************************************************************************
 * FUNCTION
 *  string_is_pure_ascii
 * DESCRIPTION
 *  To check if the
 * PARAMETERS
 *  str     [IN]        String to be checked
 *  val     [OUT]       Converted string (implement string convert if necessary)
 *  dcs     [IN]        Dcs of string
 * RETURNS
 *  KAL_TRUE if it is pure ascii input.
 *****************************************************************************/
kal_bool string_is_pure_ascii(kal_uint8 *str, kal_uint8 *val, kal_uint8 dcs)
{
#if defined(__CPBW_ASCII_UCS2_CONVERT__) || defined(__CUSD_UNICODE_INPUT_SUPPORT__)
    kal_uint16 i = 0, j = 0;

    if (dcs == RMMI_CHSET_UCS2)
    {
        toUpper(str);

        while (str[i] != RMMI_END_OF_STRING_CHAR)
        {
            if (!(str[i] == RMMI_CHAR_0 && str[i + 1] == RMMI_CHAR_0))
            {
                kal_brief_trace(TRACE_INFO, INFO_STRING_IS_PURE_ASCII_STRING_IS_NOT_STRATING_WITH_0X00);
                return KAL_FALSE;
            }

            if (RMMI_IS_NUMBER(str[i + 2]))
            {
                val[j] = str[i + 2];
            }
            else if ((str[i + 2] >= RMMI_CHAR_A) && (str[i + 2] <= RMMI_CHAR_F))
            {
                val[j] = str[i + 2];
            }
            else
            {
                kal_brief_trace(TRACE_INFO, INFO_STRING_IS_PURE_ASCII_RETURN_FALSE_DUE_TO_STR_2, i, str[i + 2]);
                return KAL_FALSE;
            }

            if (RMMI_IS_NUMBER(str[i + 3]))
            {
                val[j + 1] = str[i + 3];
            }
            else if ((str[i + 3] >= RMMI_CHAR_A) && (str[i + 3] <= RMMI_CHAR_F))
            {
                val[j + 1] = str[i + 3];
            }
            else
            {
                kal_brief_trace(TRACE_INFO, INFO_STRING_IS_PURE_ASCII_RETURN_FALSE_DUE_TO_STR_3, i, str[i + 3]);
                return KAL_FALSE;
            }

            i += 4;
            j += 2;
        }

        return KAL_TRUE;
    }
#endif

    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  check_hex_value_ext
 * DESCRIPTION
 *  same as check_hex_value, but make sure that input string combined of "0"~"9","A"~"F"
 *  "1234" -> 0x1234
 * PARAMETERS
 *  str     [IN]        String
 *  val     [OUT]       Hex value.
 * RETURNS
 *  TRUE/FALSE depends on success or fail.
 *****************************************************************************/
kal_bool check_hex_value_ext(kal_uint8 *str, kal_uint8 *val)
{
    kal_uint16 i = 0, j = 0;
    kal_uint8 temp;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_HEX_VALUE_ENTRY);
    ASSERT((str != NULL) && (val != NULL));
    toUpper(str);

    while (str[i] != RMMI_END_OF_STRING_CHAR)
    {
        if (RMMI_IS_NUMBER(str[i]))
        {
            temp = str[i] - RMMI_CHAR_0;
        }
        else if ((str[i] >= RMMI_CHAR_A) && (str[i] <= RMMI_CHAR_F))
        {
            temp = (str[i] - RMMI_CHAR_A) + 10;
        }
        else
        {
            return KAL_FALSE;
        }

        if (RMMI_IS_NUMBER(str[i + 1]))
        {
            temp = (temp << 4) + (str[i + 1] - RMMI_CHAR_0);
        }
        else if ((str[i + 1] >= RMMI_CHAR_A) && (str[i + 1] <= RMMI_CHAR_F))
        {
            temp = (temp << 4) + ((str[i + 1] - RMMI_CHAR_A) + 10);
        }
        else
        {
            return KAL_FALSE;
        }

        val[j] = temp;
        i += 2;
        j++;
    }

    val[j] = 0;
    val[j + 1] = 0;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  print_hex_value
 * DESCRIPTION
 *  This function print the hex value to ascii.
 *  Note that UCS2 should use rmmi_print_ucs2(). not this function!!
 *  check hex value
 *  0x1234 => "1234"
 * PARAMETERS
 *  val     [IN]        Hex value.
 *  str     [OUT]       String
 * RETURNS
 *  void
 *****************************************************************************/
void print_hex_value(kal_uint8 *val, kal_uint8 *str)
{
    kal_uint16 i = 0, j = 0;

    ASSERT((str != NULL) && (val != NULL));

    while (!((val[j] == 0) && (val[j + 1] == 0)))
    {
        i += (kal_uint8)kal_sprintf((char*)str + i, "%02X", val[j]);
        j++;
    }
    str[i] = '\0';
}

/*****************************************************************************
 * FUNCTION
 *  print_hex_value_ext
 * DESCRIPTION
 *  This function print the hex value within length to ascii.
 *  
 * PARAMETERS
 *  val     [IN]        Hex value.
 *  str     [OUT]       String
 *  length  [IN]        length of Hex value
 * RETURNS
 *  void
 *****************************************************************************/
void print_hex_value_ext(kal_uint8 *val, kal_uint8 *str, kal_uint8 length)
{
    kal_uint16 i = 0, j = 0;

    ASSERT((str != NULL) && (val != NULL));

    while (j < length)
    {
        i += (kal_uint8)kal_sprintf((char*)str + i, "%02X", val[j]);
        j++;
    }
    str[i] = '\0';
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_print_ucs2
 * DESCRIPTION
 *  check hex value
 *  0x1234 => "1234"
 *  0x6600 => "6600"
 * PARAMETERS
 *  val     [IN]        Hex value.
 *  str     [OUT]       String
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_print_ucs2(kal_uint8 *val, kal_uint8 *str)
{
    kal_uint16 i = 0, j = 0;

    ASSERT((str != NULL) && (val != NULL));

    while (!((val[j] == 0) && (val[j + 1] == 0)))
    {
        i += (kal_uint8)kal_sprintf((char*)str + i, "%02X", val[j]);
        i += (kal_uint8)kal_sprintf((char*)str + i, "%02X", val[j + 1]);
        j += 2;
    }
    str[i] = '\0';
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_byte_order_reverse
 * DESCRIPTION
 *  switch byte order convert big/little endian
 *  0x3412 0x7856 => 0x1234 0x5678
 * PARAMETERS
 *  src         [?]         
 *  length      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_byte_order_reverse(kal_uint8 *src, kal_uint16 length)
{
    kal_uint16 i = 0;
    kal_uint8 temp;

    ASSERT(src != NULL);

    while (i < (length - 1))
    {
        temp = src[i];
        src[i] = src[i + 1];
        src[i + 1] = temp;
        i += 2;
    }
}


/*****************************************************************************
 * FUNCTION
 *  check_sms_pdu_string
 * DESCRIPTION
 *  
 * PARAMETERS
 *  length      [IN]        
 *  bytes       [?]         
 *  str         [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void check_sms_pdu_string(kal_uint16 length, kal_uint8 *bytes, kal_uint8 *str)
{
    kal_uint16 i = 0;
    kal_uint16 j = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_CHECK_SMS_PDU_STRING_ENTRY);
    ASSERT((str != NULL) && (bytes != NULL));
    while (i < length)
    {
        j += (kal_uint8)kal_sprintf((char*)str + j, "%02x", bytes[i]);
        i++;
    }
    str[j] = 0;
    toUpper(str);
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_open_uart_port
 * DESCRIPTION
 *  This is rmmi_open_uart_port function of L4C module.
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool rmmi_open_uart_port(UART_PORT port, UART_BAUDRATE_T baud_rate)
{
#ifdef UART_ENABLE

    UART_CONFIG_T dcb = 
    {
        0,          /* init */
        len_8,      /* dataBits; */
        sb_1,       /* stopBits; */
        pa_none,    /* parity; */
        fc_hw,      /* flow control */
        0x11,       /* xonChar; */
        0x13,       /* xoffChar; */
        KAL_FALSE
    };

    if (port == uart_port_null)
    {
        return KAL_TRUE;
    }

#if defined(__DUAL_TALK_MODEM_SUPPORT__) //for 6573 dual talk modem
    dcb.u1FlowControl = fc_hw;
#else
    dcb.u1FlowControl = RMMI_UART_GetFlowCtrl(port);
#endif

    dcb.u4Baud = baud_rate;
    if (RMMI_UART_Open(port, MOD_ATCI) == KAL_FALSE)
    {
        return KAL_FALSE;
    }
    RMMI_UART_SleepOnTx_Enable(port, uart_sleep_on_tx_allow);
    RMMI_UART_SetDCBConfig(port, &dcb, MOD_ATCI);
    RMMI_UART_ConfigEscape(port, RMMI_CHAR_PLUS, 1000, MOD_ATCI);
    RMMI_UART_ClrRxBuffer(port, MOD_ATCI);
    RMMI_UART_ClrTxBuffer(port, MOD_ATCI);

    rmmi_root_plugin_uart((kal_uint8)port);
#else /* UART_ENABLE */ 
    system("del c:\\mcu_out.log");
#endif /* UART_ENABLE */ 
    return KAL_TRUE;
}


kal_bool rmmi_check_port_ownership(DCL_DEV port, module_type* port_owner) //MAUI_02900475
{
    kal_uint8 i = 0;
    kal_bool ret_val = KAL_FALSE;
    module_type real_owner = RMMI_UART_GetOwnerID((UART_PORT)port);
       
    for(i=0; i<RMMI_MAX_SIM_NUM; i++)
    {
        if(real_owner == (module_type)(MOD_ATCI + i))
        {
            ret_val = KAL_TRUE;
            break;
        }
    }

    if (port_owner != NULL)
    {
        *port_owner = real_owner;
    }
    return ret_val;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_obtain_uart_control
 * DESCRIPTION
 *  
 * PARAMETERS
 *  port        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_obtain_uart_control(kal_uint8 port, kal_bool plugout)
{
    kal_uint8 cid;
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;

#ifdef UART_ENABLE

    kal_brief_trace(TRACE_INFO, INFO_RMMI_OBTAIN_UART_CONTROL, port);  // hogan 070308

    RMMI_UART_SetOwner((UART_PORT)port,  MOD_ATCI);

    RMMI_UART_ClrRxBuffer((UART_PORT)port, MOD_ATCI);
#endif /* UART_ENABLE */ 

    cid = rmmi_port_2_cid(port);
    rmmi_comm_ptr->uart_input_queue[cid].head = 0;
    rmmi_comm_ptr->uart_input_queue[cid].length = 0;

    if ( (rmmi_comm_ptr->uart_plugout & (0x01 << cid)) || plugout)
    {
        rmmi_comm_ptr->uart_plugout &= ~(0x01 << cid);

        if (port != rmmi_comm_ptr->uart_port_value)
        {
            if (RMMI_UART_is_usb_active(port)==KAL_FALSE)
                RMMI_UART_Close(port, MOD_ATCI);
        }
        
        if (port != PS_UART_PORT)
        {
            if (RMMI_UART_is_usb_active(port)==KAL_FALSE)
                rmmi_root_plugout_uart(port);
        }
        else
        {
            // switch port, note: PS_UART_PORT might be the same with uart_port_value
            rmmi_root_plugout_uart((kal_uint8)PS_UART_PORT);
            PS_UART_PORT = rmmi_comm_ptr->uart_port_value;
            rmmi_root_plugin_uart((kal_uint8)PS_UART_PORT);
        }
    }

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_clear_uart_queue
 * DESCRIPTION
 *  
 * PARAMETERS
 *  port        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_clear_uart_queue(kal_uint8 cid)
{
    RMMI_COMM_PTR->uart_input_queue[cid].length = 0;
    RMMI_COMM_PTR->uart_input_queue[cid].head = 0;
    RMMI_COMM_PTR->uart_output_queue[cid].length = 0;
    RMMI_COMM_PTR->uart_output_queue[cid].head = 0;
    RMMI_COMM_PTR->uart_stop_send_flag &= ~(0x01 << cid);
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_find_cmd_mode
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 rmmi_find_cmd_mode(rmmi_string_struct *source_string_ptr)
{
    kal_uint8 ret_val = RMMI_WRONG_MODE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_FIND_CMD_MODE_ENTRY);
    ASSERT(source_string_ptr != NULL);
    /* Skip all leading white spaces */
    rmmi_skip_spaces(source_string_ptr);

    /* First check for the READ command format
       Eg:"AT+CGATT?\r" Here we first search for '?' character */
    if (source_string_ptr->string_ptr[source_string_ptr->index] == RMMI_QUESTION_MARK)
    {
        source_string_ptr->index++;
        rmmi_skip_spaces(source_string_ptr);

        /*
         * Check for the end of line character ('\r'). there may be
         * * spaces between the question mark and the command line
         * * termination character.
         */
        if (source_string_ptr->string_ptr[source_string_ptr->index] == rmmi_ptr->s_reg.s3)
        {
            /* If the above two conditions are passed then return
               READ_MODE */
            ret_val = RMMI_READ_MODE;
        }
        /* else, return RMMI_WRONG_MODE */
        return ret_val;
    }

    /*
     * If not read mode, then check for the TEST/SET/EXECUTE mode.
     * * Symbol '=' is common for both SET/EXECUTE and TEST command;
     * * so first check for the '=' symbol.
     */
    if (source_string_ptr->string_ptr[source_string_ptr->index] == RMMI_EQUAL)
    {
        /*
         * If we find '?' after the '=' symbol, then we decide that
         * * given command is TEST command. Else it is assumed to be
         * * either a SET or an EXECUTE command
         */
        source_string_ptr->index++;
        /* Skip white spaces after the '=' symbol */
        rmmi_skip_spaces(source_string_ptr);
        if (source_string_ptr->string_ptr[source_string_ptr->index] == RMMI_QUESTION_MARK)
        {
            /*
             * Since question mark is also found, check whether the
             * * string is terminated properly by a termination character.
             * * White spaces may be present between the question mark and
             * * the termination character.
             */
            source_string_ptr->index++;
            rmmi_skip_spaces(source_string_ptr);

            if (source_string_ptr->string_ptr[source_string_ptr->index] == rmmi_ptr->s_reg.s3)
            {
                ret_val = RMMI_TEST_MODE;
            }
        }
        /* If didn't find '?' after the '=' symbol then we decide that
           given command is SET/EXECUTE command */
        else
        {
            ret_val = RMMI_SET_OR_EXECUTE_MODE;
        }
    }   /* mtk00468 add for some extend command has no parameter */
    else if ((source_string_ptr->string_ptr[source_string_ptr->index] == rmmi_ptr->s_reg.s3) ||
             (source_string_ptr->string_ptr[source_string_ptr->index] == rmmi_ptr->s_reg.s4))

    {
        ret_val = RMMI_ACTIVE_MODE;
    }

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_string_validator
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  max_length              [IN]        
 *  str                     [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 rmmi_string_validator(
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter,
            kal_uint16 max_length,
            kal_uint8 *str)
{
    kal_uint8 ret_val = RMMI_VALIDATOR_ERROR;
    kal_uint16 index = 0;
    kal_uint8 error_flag = 0;
    kal_bool some_char_found = KAL_FALSE;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_STRING_VALIDATOR_ENTRY);
    ASSERT((str != NULL) && (source_string_ptr != NULL));
    /*
     * Start checking for the integer, till the delimiter which may
     * * be a comma, a dot etc.
     */
    while (1)
    {
        /* If there are some leading white spaces, ignore them */
        rmmi_skip_spaces(source_string_ptr);

        if (source_string_ptr->string_ptr[source_string_ptr->index] == RMMI_DOUBLE_QUOTE)
        {
            source_string_ptr->index++;
            break;
        }
        else
        {
            if (source_string_ptr->string_ptr[source_string_ptr->index] == delimiter)
            {
                source_string_ptr->index++;
            }
            *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
            return ret_val;
        }
    }

    while (source_string_ptr->string_ptr[source_string_ptr->index] != RMMI_DOUBLE_QUOTE)
    {
        /* It means we found something between two commas(,)  */
        some_char_found = KAL_TRUE;
        //rmmi_skip_spaces( source_string_ptr );

        /*
         * check whether the character is in 0 - 9 range. If so,
         * * store corresponding integer value for that character
         */
        if (RMMI_IS_NUMBER(source_string_ptr->string_ptr[source_string_ptr->index]) ||
            RMMI_IS_ALPHA(source_string_ptr->string_ptr[source_string_ptr->index]) ||
            RMMI_IS_SYMBOL(source_string_ptr->string_ptr[source_string_ptr->index]))
        {
            if (index >= (max_length - 1))
            {
                error_flag = TEXT_ERRSTRING_TOO_LONG_ERR;
                break;
            }
            *((kal_uint8*) str + index) = source_string_ptr->string_ptr[source_string_ptr->index];
            index++;
        }
        else    /* out of range, return immediately */
        {
            error_flag = INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR;
            break;
        }
        /* If the character is a valid part of integer, then continue */
        source_string_ptr->index++;
    }   /* end of the while loop */

    if (error_flag != 0)
    {
        /*
         * Value is not in the valid range. It can also be due to
         * * white space in between two digits, because such white
         * * spaces are not allowed
         */
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        // rmmi_result_code_fmttr (  RMMI_RCODE_ERROR, error_flag );
        ret_val = RMMI_VALIDATOR_ERROR;
    }
    else if (some_char_found == KAL_FALSE)
    {
        /* Nothing is present before the delimiter */
        ret_val = RMMI_VALIDATOR_ERROR;
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }
    /*
     * If some thing is present and check for the valid range as
     * * specified by the calling function
     */
    else
    {
        ret_val = RMMI_DEF_VALUE;
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }

    while (1)
    {
        /* If there are some leading white spaces, ignore them */
        rmmi_skip_spaces(source_string_ptr);

        if (source_string_ptr->string_ptr[source_string_ptr->index] == delimiter)
        {
            source_string_ptr->index++;
            break;
        }
        else
        {
            *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
            ret_val = RMMI_VALIDATOR_ERROR;
            return ret_val;
        }
    }
    return ret_val;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_string_validator_ext
 * DESCRIPTION
 *  this function extends rmmi_string_validator().
 *  addtionally it passes the error_cause back, and here <CR> acts as delimiter as well
 * PARAMETERS
 *  error_cause             [?]         
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  max_length              [IN]        
 *  str                     [?]         
 * RETURNS
 *  if string is correctly parsed: ret_val = RMMI_DEF_VALUE.
 *  otherwise : ret_val = RMMI_VALIDATOR ERROR. there are 3 possible cases:
 *  1. no string is found by delimiter or <CR> ==> error_cause = RMMI_PARSE_NOT_FOUND
 *  2. string is invalid syntax or too long      ==> error_cause = RMMI_PARSE_ERROR
 *  3. string is a null string (the case "" )     ==> error_cause = RMMI_PARSE_OK
 *****************************************************************************/
kal_uint8 rmmi_string_validator_ext(
            kal_uint8 *error_cause,
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter,
            kal_uint16 max_length,
            kal_uint8 *str)
{
    kal_uint8 ret_val = RMMI_VALIDATOR_ERROR;
    kal_uint16 index = 0;
    kal_uint8 error_flag = 0;
    kal_bool some_char_found = KAL_FALSE;
    kal_uint16 length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_STRING_VALIDATOR_ENTRY);
    ASSERT((str != NULL) && (source_string_ptr != NULL) && (error_cause != NULL));

    *error_cause = RMMI_PARSE_OK;

    length = (kal_uint16)strlen((char*)source_string_ptr->string_ptr);
    if (source_string_ptr->index >= length)
    {
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        *error_cause = RMMI_PARSE_NOT_FOUND;
        return ret_val;
    }

    /* check the first char (but skip space first ) */
    while (1)
    {
        /* If there are some leading white spaces, ignore them */
        rmmi_skip_spaces(source_string_ptr);

        /* if double_quote found: string begins */
        if (source_string_ptr->string_ptr[source_string_ptr->index] == RMMI_DOUBLE_QUOTE)
        {
            source_string_ptr->index++;
            break;
        }
        /* if delimiter found: error cause = RMMI_PARSE_NOT_FOUND */
        else if ((source_string_ptr->string_ptr[source_string_ptr->index]
                  == delimiter) || (source_string_ptr->string_ptr[source_string_ptr->index] == rmmi_ptr->s_reg.s3))
        {
            source_string_ptr->index++; /* point to the next char after delimiter */
            *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
            *error_cause = RMMI_PARSE_NOT_FOUND;
            return ret_val;
        }
        /* else : error cause = RMMI_PARSE_ERROR, not string type */
        else
        {
            *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
            *error_cause = RMMI_PARSE_ERROR;
            return ret_val;
        }
    }

    while (source_string_ptr->string_ptr[source_string_ptr->index] != RMMI_DOUBLE_QUOTE)

    {
        /* It means we found something after "  */
        some_char_found = KAL_TRUE;

        if (index >= (max_length - 1))  /* length is too long , break */
        {
            error_flag = TEXT_ERRSTRING_TOO_LONG_ERR;
            break;
        }

        /* append the char to str except backslash '\'    */
        if (source_string_ptr->string_ptr[source_string_ptr->index] != '\\')
        {
            *((kal_uint8*) str + index) = source_string_ptr->string_ptr[source_string_ptr->index];
            index++;
            source_string_ptr->index++;
        }
        else    //according to v.25ter sec 5.4.2.2
        {
            kal_uint8 temp;
            kal_uint8 ch;

            source_string_ptr->index++;
            ch = source_string_ptr->string_ptr[source_string_ptr->index];

            if (RMMI_IS_NUMBER(ch))
            {
                temp = ch - RMMI_CHAR_0;
            }
            else if ((ch >= RMMI_CHAR_A) && (ch <= RMMI_CHAR_F))
            {
                temp = ch - RMMI_CHAR_A + 10;
            }
            else if ((ch >= rmmi_char_a) && (ch <= rmmi_char_f))
            {
                temp = ch - rmmi_char_a + 10;
            }
            else        //not hex format
            {
                error_flag = INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR;
                break;
            }

            source_string_ptr->index++;
            ch = source_string_ptr->string_ptr[source_string_ptr->index];

            if (RMMI_IS_NUMBER(ch))
            {
                temp = (temp << 4) + (ch - RMMI_CHAR_0);
            }
            else if ((ch >= RMMI_CHAR_A) && (ch <= RMMI_CHAR_F))
            {
                temp = (temp << 4) + ((ch - RMMI_CHAR_A) + 10);
            }
            else if ((ch >= rmmi_char_a) && (ch <= rmmi_char_f))
            {
                temp = (temp << 4) + ((ch - rmmi_char_a) + 10);
            }
            else        //not hex format
            {
                error_flag = INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR;
                break;
            }

            *((kal_uint8*) str + index) = temp;
            index++;
            source_string_ptr->index++;
        }

    }   /* end of the while loop */

    if (error_flag != 0)
    {
        if (error_flag == TEXT_ERRSTRING_TOO_LONG_ERR)
        {
            *error_cause = RMMI_PARSE_TEXT_TOO_LONG;
        }
        else
        {
            *error_cause = RMMI_PARSE_ERROR;    /* Value is not in the valid range.  */
        }

        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        ret_val = RMMI_VALIDATOR_ERROR;
        return ret_val;
    }
    else if (some_char_found == KAL_FALSE)
    {
        /* Null string: "" : set error_cause = RMMI_PARSE_OK (ret_val= RMMI_VALIDATOR_ERROR) */
        *error_cause = RMMI_PARSE_OK;
        ret_val = RMMI_VALIDATOR_ERROR;
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;

        /* Increment the string sliding index to point to the next
           character after DOUBLE_QUOTE */
        source_string_ptr->index++;
    }
    else
    {
        /* If some thing is present between 2 double quotes: "xxx" */
        ret_val = RMMI_DEF_VALUE;
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        /* Increment the string sliding index to point to the next
           character after DOUBLE_QUOTE */
        source_string_ptr->index++;
    }

    /* final check the delimiter and increase index to skip it */
    while (1)
    {
        /* If there are some leading white spaces, ignore them */
        rmmi_skip_spaces(source_string_ptr);

        /* if delimiter found: increase index and break(thus return) */
        if ((source_string_ptr->string_ptr[source_string_ptr->index]
             == delimiter) || (source_string_ptr->string_ptr[source_string_ptr->index] == rmmi_ptr->s_reg.s3))
        {
            source_string_ptr->index++;
            break;
        }
        /* no delimiter nor <CR> : ret_val = RMMI_VALIDATOR_ERROR */
        else
        {
            *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
            *error_cause = RMMI_PARSE_ERROR;
            ret_val = RMMI_VALIDATOR_ERROR;
            return ret_val;
        }
    }
    return ret_val;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_filename_validator
 * DESCRIPTION
 *  this function parse the filename according to the coding_scheme
 * PARAMETERS
 *  coding_scheme           [IN]        
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  max_length              [IN]        
 *  filename                [?]         
 *  filename_length         [?]         (the length is in kal_wchar, include end of char 0x00)
 *  error_cause             [?]         
 * RETURNS
 *  if filename is correctly parsed: ret_val = RMMI_DEF_VALUE.
 *  otherwise : ret_val = RMMI_VALIDATOR ERROR. there are 3 possible cases:
 *  1. no string is found by delimiter or <CR> ==> error_cause = RMMI_PARSE_NOT_FOUND
 *  2. string is invalid syntax or too long      ==> error_cause = RMMI_PARSE_ERROR
 *  3. string is a null string (the case "" )     ==> error_cause = RMMI_PARSE_OK
 *****************************************************************************/
kal_uint8 rmmi_filename_validator(
            kal_uint8 coding_scheme,
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter,
            kal_uint16 max_length,
            kal_wchar *filename,
            kal_uint16 *filename_length,
            //in w_char include 'end of char' 0x00
                                  kal_uint8 *error_cause)
{
    kal_uint8 result;
    kal_bool ret_val;
    kal_wchar *input_filename;

    *filename_length = 0;
    kal_mem_set(filename, 0, max_length * 2);

    if (coding_scheme == RMMI_CHSET_IRA)
    {
        input_filename = (kal_wchar*) get_ctrl_buffer(max_length);     //using for get ascii code frm PC
        result = rmmi_string_validator_ext(
                    error_cause,
                    source_string_ptr,
                    delimiter,
                    max_length,
                    (kal_uint8*) input_filename);
        if (result != RMMI_VALIDATOR_ERROR)
        {
            *filename_length = (kal_uint16)strlen((char*)input_filename) + 1;
            ascii_to_ucs2((kal_uint8*) input_filename, (kal_wchar*) filename);
        }
        free_ctrl_buffer(input_filename);
        return result;
    }
    else if (coding_scheme == RMMI_CHSET_UCS2)
    {
        kal_uint16 max_len = 500;       // UART_INPUT_QUEUE: 512.

        if (max_length * 4 < 500)
        {
            max_len = max_length * 4;
        }

        input_filename = (kal_wchar*) get_ctrl_buffer(max_len);
        result = rmmi_string_validator_ext(error_cause, source_string_ptr, delimiter, max_len, (kal_uint8*) input_filename);
        if (result != RMMI_VALIDATOR_ERROR)
        {
            ret_val = check_hex_value_ext((kal_uint8*) input_filename, (kal_uint8*) filename);
            if (ret_val == KAL_TRUE)
            {
                *filename_length = (kal_uint16)strlen((char*)input_filename) / 4 + 1;
                rmmi_byte_order_reverse((kal_uint8*) filename, (kal_uint16) (max_length * 2));
            }
            else
            {
                result = RMMI_VALIDATOR_ERROR;
                *error_cause = RMMI_PARSE_ERROR;
            }
        }
        free_ctrl_buffer(input_filename);
        return result;
    }
    else
    {
        *error_cause = RMMI_PARSE_ERROR;
        return RMMI_VALIDATOR_ERROR;
    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_sms_text_validator
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  max_length              [IN]        
 *  str                     [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 rmmi_sms_text_validator(
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter,
            kal_uint16 max_length,
            kal_uint8 *str)
{
    kal_uint8 ret_val = RMMI_VALIDATOR_ERROR;
    kal_uint16 index = 0;
    kal_bool error_flag = KAL_FALSE;
    kal_bool some_char_found = KAL_FALSE;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_SMS_TEXT_VALIDATOR_ENTRY);
    ASSERT((str != NULL) && (source_string_ptr != NULL));
    /*
     * Start checking for the integer, till the delimiter which may
     * * be a comma, a dot etc.
     */

    while (source_string_ptr->string_ptr[source_string_ptr->index] != delimiter)
    {
        /* It means we found something between two commas(,)  */
        some_char_found = KAL_TRUE;
        //rmmi_skip_spaces( source_string_ptr );

        if (index >= (max_length - 1))
        {
            error_flag = KAL_TRUE;
            break;
        }
        *((kal_uint8*) str + index) = source_string_ptr->string_ptr[source_string_ptr->index];
        index++;
        source_string_ptr->index++;
    }   /* end of the while loop */

    if (error_flag == KAL_TRUE)
    {
        /*
         * Value is not in the valid range. It can also be due to
         * * white space in between two digits, because such white
         * * spaces are not allowed
         */
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        //rmmi_result_code_fmttr (  RMMI_RCODE_ERROR,
        //                  TEXT_ERRSTRING_TOO_LONG_ERR );
        ret_val = RMMI_VALIDATOR_ERROR;
    }
    else if (some_char_found == KAL_FALSE)
    {
        /* Nothing is present before the delimiter */
        ret_val = RMMI_DEF_VALUE;
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }
    /*
     * If some thing is present and check for the valid range as
     * * specified by the calling function
     */
    else
    {
        ret_val = RMMI_DEF_VALUE;
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        /*
         * Increment the string sliding index to point to the next
         * * character after delimiter, i.e. the next field in the
         * * command line
         */
        source_string_ptr->index++;
    }

    return ret_val;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_extract_number
 * DESCRIPTION
 *  This function is used to extract an integer number from source_string_ptr 
 *  beginning with the indicated index.
 *  If the format of the number is invalid, we will set the result as KAL_FALSE if the result pointer is not NULL
 * PARAMETERS
 *  source_string_ptr       [IN]        input string with the extract index
 *  result                       [OUT]     result to indicate if extracting number is success or not
 * RETURNS
 *  extract value
 *****************************************************************************/
kal_uint32 rmmi_extract_number(rmmi_string_struct *source_string_ptr, 
        rmmi_validator_cause_enum *result, kal_uint32 max)
{
    kal_uint16 value = 0, digit;
    rmmi_validator_cause_enum result_flag = RMMI_PARSE_NOT_FOUND;

    kal_brief_trace(TRACE_FUNC, FUNC_EXTRACT_NUMBER_ENTRY);
    ASSERT(source_string_ptr != NULL);
    
    while ((source_string_ptr->string_ptr[source_string_ptr->index] >=
            RMMI_CHAR_0) && (source_string_ptr->string_ptr[source_string_ptr->index] <= RMMI_CHAR_9))
    {
        digit = (source_string_ptr->string_ptr[source_string_ptr->index] - RMMI_CHAR_0);

        if( max < digit)
        {
            result_flag = RMMI_PARSE_ERROR;
            break;
        }
        else if( value <= (max-digit)/10)
        {
            value = value * 10 + digit;
        }
        else
        {
            result_flag = RMMI_PARSE_ERROR;
            break;
        }        
        source_string_ptr->index++;
        rmmi_skip_spaces(source_string_ptr);

        result_flag = RMMI_PARSE_OK;
    }

    if( result != NULL )
        *result = result_flag;

    return value;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_extract_number_ext
 * DESCRIPTION
 *  This function is used to extract an integer number from source_string_ptr 
 *  beginning with the indicated index.
 *  If the format of the number is invalid, we will set the result as RMMI_PARSE_ERROR if the result pointer is not NULL
 *  On the other hand, if there is any remaining characters, the result will be RMMI_PARSE_ERROR, too
 * PARAMETERS
 *  source_string_ptr       [IN]        input string with the extract index
 *  result                       [OUT]     result to indicate if extracting number is success or not
 * RETURNS
 *  extract value
 *****************************************************************************/
kal_uint32 rmmi_extract_number_ext(rmmi_string_struct *source_string_ptr, 
        rmmi_validator_cause_enum *result, kal_uint32 max)
{
    kal_uint32 value = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    value = rmmi_extract_number( source_string_ptr, result, max);

    rmmi_skip_spaces(source_string_ptr);
    if (result != NULL && source_string_ptr->string_ptr[source_string_ptr->index] != rmmi_ptr->s_reg.s3)
        *result = RMMI_PARSE_ERROR;
    
    return value;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_skip_leading_chars
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_skip_leading_chars(rmmi_string_struct *source_string_ptr)
{
    kal_uint8 ch;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_SKIP_LEADING_CHARS_ENTRY);
    ASSERT(source_string_ptr != NULL);
    while (1)
    {
        ch = source_string_ptr->string_ptr[source_string_ptr->index];
        if ((ch == rmmi_char_t) || (ch == RMMI_CHAR_T) ||
            (ch == RMMI_EXCLAMATION_MARK) || (ch == RMMI_AT) ||
            (ch == rmmi_char_p) || (ch == RMMI_CHAR_P) || (ch == RMMI_SPACE)||
            (l4c_check_auto_dtmf_modifier(ch) == KAL_TRUE))
        {
            source_string_ptr->index++;
        }
        else
        {
            break;
        }
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  extract_number_string
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr   [IN]         
 *  delimiter           [IN]        
 *  ss_string           [OUT]         
 *  max_length		[IN]	max digits to be extracted(to prevent memory corruption)
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 extract_number_string(rmmi_string_struct *source_string_ptr, kal_uint8 delimiter, kal_uint8 *ss_string,kal_uint8 max_length)
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint8 index = 0;
    kal_uint8 ch;

    kal_brief_trace(TRACE_FUNC, FUNC_EXTRACT_NUMBER_STRING_ENTRY);
    ASSERT((source_string_ptr != NULL) && (ss_string != NULL));
    while ((source_string_ptr->string_ptr[source_string_ptr->index] != delimiter)
        && (source_string_ptr->string_ptr[source_string_ptr->index] != RMMI_SEMICOLON) //hong_data_call
        && (index < max_length-1)) //MAUI_01790867
    {
        ch = source_string_ptr->string_ptr[source_string_ptr->index];
        if ((ch >= RMMI_CHAR_0 && ch <= RMMI_CHAR_9) ||
            ch == RMMI_CHAR_STAR || ch == RMMI_CHAR_POUND ||
            ch == rmmi_char_p || ch == RMMI_CHAR_P ||
            ch == rmmi_char_i || ch == RMMI_CHAR_I ||
            ch == rmmi_char_g || ch == RMMI_CHAR_G || ch == RMMI_CHAR_PLUS
        #ifdef __SP_RIL_SUPPORT__
            || (l4c_check_auto_dtmf_modifier(ch) == KAL_TRUE)
        #endif
            )
        {
            /* valid ch */
            *((kal_uint8*) ss_string + index) = ch;
            index++;
        }
        else if (ch == rmmi_char_t || ch == RMMI_CHAR_T || ch == RMMI_SPACE || ch == RMMI_COMMA || ch == RMMI_EXCLAMATION_MARK
            #ifndef __SP_RIL_SUPPORT__
                || (l4c_check_auto_dtmf_modifier(ch) == KAL_TRUE)
            #endif
                )
        {
            /* ignore ch */
        }
        else
        {
            /* illegal ch */
            kal_brief_trace(TRACE_ERROR, ERROR_EXTRACT_NUMBER_FUNCTION_ILLEGAL_CHARACTER_ERROR);
            ret_val = KAL_FALSE;
            break;
        }

        source_string_ptr->index++;
    }

    if (ret_val == KAL_TRUE)
    {
        *((kal_uint8*) ss_string + index) = RMMI_END_OF_STRING_CHAR;
    }
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  ascii_to_ucs2
 * DESCRIPTION
 *  this function is using to convert ascii code to ucs2 format
 * PARAMETERS
 *  src         [IN]        Ascii string
 *  dest        [OUT]       Ucs2 value
 * RETURNS
 *  void
 *****************************************************************************/
void ascii_to_ucs2(kal_uint8 *src, kal_wchar *dest)
{
    kal_uint8 index = 0;

    while (src[index] != RMMI_END_OF_STRING_CHAR)
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = 0;

    return;

}


/*****************************************************************************
 * FUNCTION
 *  ucs2_to_ascii
 * DESCRIPTION
 *  this function is using to convert ucs2 code to ascii format
 *  If there's a non-convertable ucs2 char, such as chinese word,
 *  KAL_FALSE will be returned.
 *  Otherwise, KAL_TRUE will be returned if successful.
 * PARAMETERS
 *  ucs2_src        [?]         
 *  ascii_dest      [?]         
 *  dest(?)         [OUT]       Ascii string
 *  src(?)          [IN]        Ucs2 wchar
 * RETURNS
 *  kal_bool
 *****************************************************************************/
kal_bool ucs2_to_ascii(kal_wchar *ucs2_src, kal_uint8 *ascii_dest)
{
    kal_uint8 i = 0;

    while (!(ucs2_src[i] == 0)) //while not end of UCS2 string
    {
        if ((ucs2_src[i] >> 8) != 0)    // the first byte is not 0x00, cannot convert to ASCII
        {
            ascii_dest[i] = '\0';
            return KAL_FALSE;
        }
        else    //0x00YZ, so convert dest to
        {
            ascii_dest[i] = (kal_uint8) ucs2_src[i];
        }
        i++;
    }
    ascii_dest[i] = '\0';
    return KAL_TRUE;
}
/*****************************************************************************
 * FUNCTION
 *  rmmi_is_cfunoff_command
 * DESCRIPTION
 *  This function decides
 *  whether this command is at+cfun=0 
 * PARAMETERS
 *  data        [?]         the pointer of command string
 *  length      [IN]        the length of the command string.
 * RETURNS
 *  KAL_TRUE: is cfun=0
 *  KAL_FALSE: not cfun=0 
 *****************************************************************************/
kal_bool rmmi_is_cfunoff_command(kal_uint8 *data, kal_uint8 length)
{

    kal_prompt_trace(rmmi_current_mod_id,"data=%d%d%d%d%d%d%d%d%d%d",data[0],data[1], data[2],data[3]
                                                                                   ,data[4],data[5],data[6],data[7]
                                                                                   ,data[8],data[9]);

    if (length < 7)     //length must larger or equal to 7 (AT+CFUN)
    {
        return KAL_FALSE;
    }

    if (strncmp((char*)data, "AT+CFUN=0", 9) == 0)
    {
        return KAL_TRUE; 
    }
    else 
    {
        return KAL_FALSE; 
    }
}

/*****************************************************************************
 * FUNCTION
 *  is_sms_command
 * DESCRIPTION
 *  This function decides
 *  whether it's a 07.05 SMS command which has data after <CR>.
 * PARAMETERS
 *  data        [?]         the pointer of command string
 *  length      [IN]        the length of the command string.
 * RETURNS
 *  KAL_TRUE: is a sms command
 *  KAL_FALSE: not a sms command
 *****************************************************************************/
kal_bool is_sms_command(kal_uint8 *data, kal_uint8 length)
{
    kal_uint8 src_id = INVALID_SRC;
    kal_uint8 format;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_IS_SMS_MSG_CMD_ENTRY);

    if (length < 7)     //length must larger or equal to 7 (AT+CMGR)
    {
        return KAL_FALSE;
    }

    if (strncmp((char*)data, "AT+CMG", 6) == 0)
    {
        if ((data[6] == RMMI_CHAR_C) || (data[6] == RMMI_CHAR_S))
        {
            if ((data[7] == RMMI_EQUAL) && (data[8] != RMMI_QUESTION_MARK))     //AT+CMGC=, AT+CMGS=
            {
                return KAL_TRUE;
            }
        }
        else if (data[6] == RMMI_CHAR_W)
        {
            if ((data[7] == RMMI_EQUAL) && (data[8] != RMMI_QUESTION_MARK))     //AT+CMGW=
            {
                return KAL_TRUE;
            }
            if ((data[7] == RMMI_END_OF_STRING_CHAR) || (data[7] == rmmi_ptr->s_reg.s3) || (data[7] == rmmi_ptr->s_reg.s4))     //AT+CMGW<CR>
            {
                return KAL_TRUE;
            }
            /*
             * if (data[7] == RMMI_COMMA) //AT+CMGW,
             * return KAL_TRUE;
             */
        }
    }
    else if (strncmp((char*)data, "AT+CNMA", 7) == 0)
    {
        l4c_sms_get_msg_format_req(src_id, &format);//mtk02088_cnma
        if (format == 0)    //PDU mode
        {
        if ((data[7] == RMMI_EQUAL) && (data[8] != RMMI_QUESTION_MARK)) //AT+CNMA
        {
            return KAL_TRUE;
        }
    }
    }
    return KAL_FALSE;
}


const kal_uint8 *const month_string = (kal_uint8 *) "0000Jan\0Feb\0Mar\0Apr\0May\0Jun\0Jul\0Aug\0Sep\0Oct\0Nov\0Dec";

#define CATOI(c) (c-RMMI_CHAR_0)


/*****************************************************************************
 * FUNCTION
 *  rtc_to_string_format
 * DESCRIPTION
 *  
 * PARAMETERS
 *  buf             [?]         
 *  date_mode       [IN]        
 *  time_mode       [IN]        
 *  rtc             [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void rtc_to_string_format(kal_uint8 *buf, kal_uint8 date_mode, kal_uint8 time_mode, rtc_format_struct *rtc)
{
    kal_uint8 time[20];
    kal_brief_trace(TRACE_FUNC, FUNC_RTC_TO_STRING_FORMAT_ENTRY);
    ASSERT((buf != NULL) && (rtc != NULL));
    switch (time_mode)
    {
        case TIME_HH_MM_24:
            kal_sprintf((char*)time, "%02d:%02d:%02d", rtc->rtc_hour, rtc->rtc_min, rtc->rtc_sec);
            break;
        case TIME_HH_MM_12:
        {
            /* This format is not in use currently 2010/03/09 But Reserved for future use*/
            if (rtc->rtc_hour > 12)
            {
                kal_sprintf((char*)time, "%02d:%02d:%02d p.m.", rtc->rtc_hour - 12, rtc->rtc_min, rtc->rtc_sec);
            }
            else if (rtc->rtc_hour < 12)
            {
                kal_sprintf((char*)time, "%02d:%02d:%02d a.m.", rtc->rtc_hour, rtc->rtc_min, rtc->rtc_sec);
            }
            else
            {
                kal_sprintf((char*)time, "%02d:%02d:%02d p.m.", rtc->rtc_hour, rtc->rtc_min, rtc->rtc_sec);
            }
            break;
        }
        default: 
                break;
    }

    switch (date_mode)
    {
        case DATE_AUX_YY_MM_DD:
            kal_sprintf((char*)buf, "%02d/%02d/%02d,%s", rtc->rtc_year, rtc->rtc_mon, rtc->rtc_day, time);
            break;
        case DATE_AUX_YYYY_MM_DD:
            kal_sprintf((char*)buf, "%04d/%02d/%02d,%s", rtc->rtc_year + 2000, rtc->rtc_mon, rtc->rtc_day, time);
            break;
        default: 
                break;
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  string_to_rtc_format
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rtc     [?]     
 *  s       [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool string_to_rtc_format(rtc_format_struct *rtc, kal_uint8 *s)
{
    kal_brief_trace(TRACE_FUNC, FUNC_STRING_TO_RTC_FORMAT_ENTRY);
    ASSERT((s != NULL) && (rtc != NULL));

    if (strlen((char*)s) != 17)
    {
        return KAL_FALSE;
    }
    rtc->rtc_year = CATOI(*s++) * 10;
    rtc->rtc_year += CATOI(*s++);
    //s++;
    if (*s++ != RMMI_FORWARD_SLASH)
    {
        return KAL_FALSE;
    }

    rtc->rtc_mon = CATOI(*s++) * 10;
    rtc->rtc_mon += CATOI(*s++);
    if (rtc->rtc_mon > 12)
    {
        return KAL_FALSE;
    }
    //s++;
    if (*s++ != RMMI_FORWARD_SLASH)
    {
        return KAL_FALSE;
    }

    rtc->rtc_day = CATOI(*s++) * 10;
    rtc->rtc_day += CATOI(*s++);
    if (rtc->rtc_day > 31)
    {
        return KAL_FALSE;
    }
    //s++;
    if (*s++ != RMMI_COMMA)
    {
        return KAL_FALSE;
    }

    rtc->rtc_hour = CATOI(*s++) * 10;
    rtc->rtc_hour += CATOI(*s++);
    if (rtc->rtc_hour > 23)
    {
        return KAL_FALSE;
    }
    //s++;
    if (*s++ != RMMI_COLON)
    {
        return KAL_FALSE;
    }

    rtc->rtc_min = CATOI(*s++) * 10;
    rtc->rtc_min += CATOI(*s++);
    if (rtc->rtc_min > 59)
    {
        return KAL_FALSE;
    }
    //s++;
    if (*s++ != RMMI_COLON)
    {
        return KAL_FALSE;
    }

    rtc->rtc_sec = CATOI(*s++) * 10;
    rtc->rtc_sec += CATOI(*s++);
    if (rtc->rtc_sec > 59)
    {
        return KAL_FALSE;
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  toUpper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  str     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void toUpper(kal_uint8 *str)
{
    kal_uint8 *ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_TOUPPER_ENTRY);
    ASSERT(str != NULL);
    ptr = str;
    while (*ptr != 0)
    {
        if (RMMI_IS_LOWER(*ptr))
        {
            *ptr += (kal_uint8)(RMMI_CHAR_A - rmmi_char_a);
        }
        ptr++;
    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ring_repeat_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ring_repeat_hdlr()
{
    kal_uint8 temp_src;
    kal_uint8 sim_id;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    if (l4c_ptr->event_id[6] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_RMMI_CANCEL_EVENT, l4c_ptr->event_id[6]);
        //evshed_cancel_event (L4C_PTR->event_scheduler_ptr,//mtk00924_060223: timer handler doesn't have to cancel event
        //                          &(L4C_PTR->event_id[6]));
        l4c_ptr->event_id[6] = 0;
    }

    for (sim_id = 0; sim_id < L4_MAX_SIM_NUM; sim_id++)
    {
        if (L4C_PTR_X(mt_call_incoming, sim_id) == KAL_TRUE)
        {
            break;
        }
    }

    if (sim_id < L4_MAX_SIM_NUM)
    {
	    temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        rmmi_result_code_fmttr(RMMI_RCODE_RING, L4C_NO_CAUSE);
        rmmi_ptr->current_src = temp_src;
    }
}

/* Begin: mtk00714 +CASP */


/*****************************************************************************
 * FUNCTION
 *  rmmi_casp_playaudio_timeout_hdlr
 * DESCRIPTION
 *  This function is used to handle the timeout of audio playing.
 *  For +CASP
 * PARAMETERS
 *  arg     [?]     
 *  Sound ID(?)
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_casp_playaudio_timeout_hdlr(void *arg)
{
    kal_uint8 *Sound_ID = (kal_uint8*) arg;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    /* clear event schedule */
    if (l4c_ptr->event_id[2] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_RMMI_CANCEL_EVENT, l4c_ptr->event_id[2]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[2]));
        l4c_ptr->event_id[2] = 0;
    }
    l4c_eq_audio_stop_req(RMMI_SRC, *Sound_ID);
    return;
}

/* End: mtk00714 +CASP */


/*****************************************************************************
 * FUNCTION
 *  rmmi_reset
 * DESCRIPTION
 *  This function is used to handle ATZ and AT&F, which reset RMMI settings
 *  mtk00714 add on 20040301
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_reset(void)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->s_reg.s0 = 0;
    rmmi_ptr->s_reg.s3 = 13;
    rmmi_ptr->s_reg.s4 = 10;
    rmmi_ptr->s_reg.s5 = 8;
    rmmi_ptr->s_reg.s6 = 2;
    rmmi_ptr->s_reg.s7 = 1;    
    rmmi_ptr->s_reg.s8 = 2;
    rmmi_ptr->s_reg.s10 = 2;
    //RMMI_PTR->rsp_mode.echo_flag = RMMI_ECHO_ON;
    rmmi_ptr->rsp_mode.echo_flag = 0xff;
    rmmi_ptr->error_report_mode = RMMI_SIMPLE_ERROR;
    rmmi_ptr->rsp_mode.format = RMMI_VERBOSE_FULL_HEAD_TAIL;
    rmmi_ptr->rsp_mode.suppress_flag = 0;       //ATQ0
    rmmi_ptr->char_set = RMMI_CHSET_IRA;    /* default value */
    rmmi_ptr->plmn_format = RMMI_PLMN_LONG_ALPHA;       //default for long alpha
    rmmi_ptr->CPOL_plmn_format = RMMI_PLMN_NUMERIC;
    rmmi_ptr->date_aux_mode = 1;            /* yy/mm/dd as default format */
    rmmi_ptr->clae_mode = KAL_FALSE;    //default is disable event report
    rmmi_ptr->report_mode.call_wait = 0;        //default value
    rmmi_ptr->report_mode.ss_mo = 0;    //+CSSN=0,0
    rmmi_ptr->report_mode.ss_mt = 0;    //+CSSN=0,0
    rmmi_ptr->report_mode.cs_reg = 0;   //+CREG=0
#ifdef __CLIP_DEFAULT_ENABLE__
    rmmi_ptr->report_mode.clip = RMMI_ENABLE_REPORT;
#else 
    rmmi_ptr->report_mode.clip = RMMI_DISABLE_REPORT;
#endif 
    rmmi_ptr->report_mode.crc = 0;      //+CRC=0
    rmmi_ptr->report_mode.cr = 0;       //+CR=0
#if defined(__BT_SUPPORT__)  //in HCI solution, MS should always send +CIND
    rmmi_ptr->report_mode.cmer_mode = 3;
#else 
    rmmi_ptr->report_mode.cmer_mode = 0;        //+CMER=0,0
#endif 
    rmmi_ptr->report_mode.cmer_keyp = 0;        //+CMER=0,0

    #if defined(__MMI_FMI__)
    rmmi_ptr->report_mode.cmer_tscrn = 0;
    rmmi_ptr->screenshot_pending = KAL_FALSE;
    rmmi_ptr->screenshot_fd = NULL;
    rmmi_ptr->screenshot_index = 0;
    #endif /* defined(__MMI_FMI__)*/
    l4c_sms_set_service_mode_req(RMMI_SRC, 0);  //+CSMS=0

    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_write_to_buffer
 * DESCRIPTION
 *  This is rmmi_write_to_buffer function of L4C module.
 *  it buffers result code of +CNMI
 * PARAMETERS
 *  buffer_ptr      [?]         
 *  buffer          [IN]        Data to be write to buffer
 *  length          [IN]        Number of bytes to be write to buffer
 *  stuff           [IN]        Need to pad CR & LF in front and back of data or not
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_write_to_buffer(void *buffer_ptr, kal_uint8 *buffer, kal_uint16 length, kal_bool stuff)
{

#if !defined(__SLIM_AT__) 

    kal_uint16 i;
    kal_uint16 tail;
    rmmi_uart_queue_struct *ResultCodeBuffer;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    ResultCodeBuffer = (rmmi_uart_queue_struct*) buffer_ptr;

    /* we will clear our buffer if we can not write to buffer */
    if (MAX_DATA_QUEUE_LENGTH - ResultCodeBuffer->length <= length)
    {
        ResultCodeBuffer->head = 0;
        ResultCodeBuffer->length = 0;
    }
    tail = (ResultCodeBuffer->head + ResultCodeBuffer->length) % MAX_DATA_QUEUE_LENGTH;

    if (stuff == KAL_TRUE)
    {
        ResultCodeBuffer->data[(tail + 0) % MAX_DATA_QUEUE_LENGTH] = rmmi_ptr->s_reg.s3;
        ResultCodeBuffer->data[(tail + 1) % MAX_DATA_QUEUE_LENGTH] = rmmi_ptr->s_reg.s4;
        for (i = 0; i < length; i++)
        {
            ResultCodeBuffer->data[(tail + 2 + i) % MAX_DATA_QUEUE_LENGTH] = *((kal_uint8*) buffer + i);
        }
        ResultCodeBuffer->data[(tail + 2 + length) % MAX_DATA_QUEUE_LENGTH] = rmmi_ptr->s_reg.s3;
        ResultCodeBuffer->data[(tail + 3 + length) % MAX_DATA_QUEUE_LENGTH] = rmmi_ptr->s_reg.s4;

        ResultCodeBuffer->length += 4;
    }
    else
    {
        for (i = 0; i < length; i++)
        {
            ResultCodeBuffer->data[(tail + i) % MAX_DATA_QUEUE_LENGTH] = *((kal_uint8*) buffer + i);
        }
    }
    ResultCodeBuffer->length += length;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_write_unsolicitedResultCode
 * DESCRIPTION
 *  This is rmmi_write_unsolicitedResultCode
 *  this function is used for unsolicited result code for +CMER and +CNMI
 *  depends on <mode>, the data is written to UART or buffer
 * PARAMETERS
 *  buffer          [?]         length, stuff: paramters for rmmi_write_to_uart() and rmmi_write_to_buffer().
 *  length          [IN]        
 *  stuff           [IN]        
 *  mode            [IN]        0 -  buffer unsolicited result code 1 -  discard unsolicited result code when online data state, otherwise flush to TE
 *  buffer_ptr      [?]         pointer to the buffer.
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_write_unsolicitedResultCode(
        kal_uint8 *buffer,
        kal_uint16 length,
        kal_bool stuff,
        kal_uint8 mode,
        void *buffer_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    kal_uint8 i;


    /* handle write to uart cases */
    if ( mode == 1 || mode == 2)
    {
        rmmi_write_to_uart(buffer, length, stuff);
    }
    else if( mode == 3)
    {

        #if defined(__BT_SUPPORT__)
            RMMI_PTR->current_src = RMMI_COMM_PTR->rmmi_hf_src;
            rmmi_write_to_uart(buffer, length, stuff);
        #else /* defined(__BT_SUPPORT__) */ 
            rmmi_write_to_uart(buffer, length, stuff);  
        #endif /* defined(__BT_SUPPORT__) */                 
    }
    else
    {
        // CNMI mode is equal to 0, always write to buffer
        rmmi_write_to_buffer(buffer_ptr, buffer, length, stuff);
    }

    for(i = RMMI_SRC ; i < RMMI_SRC_END ; i++)
    {
        switch (mode)
        {
            case 2:
                if ((l4c_ptr->cc_state[i] == L4C_ONLINE_DATA_STATE) ||
                (l4c_ptr->cc_state[i] == L4C_ONLINE_DATA_GPRS_STATE))
                {
                    rmmi_write_to_buffer(buffer_ptr, buffer, length, stuff);
                }
                break;
            default:
                // Do nothing
                break;
        }
    }    
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_write_unsolicitedResultCode_plus
 * DESCRIPTION
 *
 * PARAMETERS
 *  buffer          [?]         length, stuff: paramters for rmmi_write_to_uart() and rmmi_write_to_buffer().
 *  length          [IN]        
 *  stuff           [IN]        
 *  mode            [IN]        0 -  buffer unsolicited result code 1 -  discard unsolicited result code when online data state, otherwise flush to TE
 *  buffer_ptr      [?]         pointer to the buffer.
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_write_unsolicitedResultCode_plus(
        kal_uint8 *buffer,
        kal_uint16 length,
        kal_bool stuff,
        kal_uint8 mode,
        void *buffer_ptr)
{
    kal_uint8 buf[3]; //for storing CR LF
    kal_uint8 *ptr, i; 
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    
    /* handle write to uart cases */
    if( mode != 0)
    {
        ptr = buffer;
        kal_sprintf((char*)buf, "%c%c", rmmi_ptr->s_reg.s3, rmmi_ptr->s_reg.s4);

        if (rmmi_ptr->rsp_mode.format != RMMI_NUM_PARTIAL_HEAD_TAIL)
        {        
            rmmi_write_to_uart((kal_uint8*) buf, 2, KAL_FALSE);//write CR LF in begining
        }

        //separately write to UART to prevent overwrite MAX_DATA_QUEUE_LENGTH
        while (length > (MAX_DATA_QUEUE_LENGTH/2))
        {
            rmmi_write_to_uart((kal_uint8*) ptr, (MAX_DATA_QUEUE_LENGTH/2), KAL_FALSE);
            ptr += (MAX_DATA_QUEUE_LENGTH/2);
            length -= (MAX_DATA_QUEUE_LENGTH/2);
        }

        rmmi_write_to_uart((kal_uint8*) ptr, length, KAL_FALSE);
        rmmi_write_to_uart((kal_uint8*) buf, 2, KAL_FALSE); //write CR LF end
    }
    else
    {        
        // CNMI mode is equal to 0, always write to buffer
        rmmi_write_to_buffer(buffer_ptr, buffer, length, stuff);                 
    }


    for(i = RMMI_SRC ; i < RMMI_SRC_END ; i++)
    {
        switch (mode)
        {
            case 2:
                if ((l4c_ptr->cc_state[i] == L4C_ONLINE_DATA_STATE) ||
                (l4c_ptr->cc_state[i] == L4C_ONLINE_DATA_GPRS_STATE))
                {
                    rmmi_write_to_buffer(buffer_ptr, buffer, length, stuff);
                }
                break;
            default:
                // Do nothing
                break;
        }
    }
        
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_flush_ResultCodeBuffer
 * DESCRIPTION
 *  This is rmmi_flush_ResultCodeBuffer function of L4C module.
 *  AT +CNMI: when <bfr> set to 1, and <mode>1..3 is entered, flush buffer
 *  when <bfr> set to 0, and <mode>1..3 is entered, clear buffer
 * PARAMETERS
 *  buffer_ptr      [?]         pointer which point to the ResultCodeBuffer
 *  flush           [IN]        KAL_TRUE : Flush to PC
 *  KAL_FALSE: Clear Buffer without flushing to PC(?)
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_flush_ResultCodeBuffer(void *buffer_ptr, kal_bool flush)
{
    rmmi_uart_queue_struct *ResultCodeBuffer;

    ResultCodeBuffer = (rmmi_uart_queue_struct*) buffer_ptr;

    if (flush == KAL_TRUE)
    {
        rmmi_write_to_uart(ResultCodeBuffer->data, ResultCodeBuffer->length, KAL_FALSE);
    }

    ResultCodeBuffer->head = 0;
    ResultCodeBuffer->length = 0;

}


#ifdef __CSD_FAX__


/*****************************************************************************
 * FUNCTION
 *  check_g3_service_class_code
 * DESCRIPTION
 *  this function converts "csmcc_fclass_mode_enum" to "g3_service_class_enum"
 *  it is used in Fax AT cmd hdlr()s .
 *  mtk00714 added Dec/2003
 * PARAMETERS
 *  fclass_mode     [IN]        
 *  fclass_mode(IN) : csmcc_fclass_mode_enum(?)
 * RETURNS
 *  g3_service_class_enum
 *****************************************************************************/
kal_uint8 check_g3_service_class_code(kal_uint8 fclass_mode)
{
    kal_uint8 code = 0xff;

    switch (fclass_mode)
    {
        case CSMCC_DATA:
        {
            code = G3_SERV_CLASS_0;
            break;
        }
        case CSMCC_FAX_CLASS_1_TIA:
        {
            code = G3_SERV_CLASS_1;
            break;
        }
        case CSMCC_FAX_CLASS_1_ITUT:
        {
            code = G3_SERV_CLASS_1_0;
            break;
        }
        case CSMCC_FAX_MANU_SPECIFIC:
        {
            code = G3_SERV_CLASS_2;
            break;
        }
        case CSMCC_FAX_CLASS_2:
        {
            code = G3_SERV_CLASS_2_0;
            break;
        }
        default:
        {
            code = 0xff;
        }
    }
    return code;
}

#endif /* __CSD_FAX__ */ 

/* mtk0071420040726 */


/*****************************************************************************
 * FUNCTION
 *  check_cmd_allow
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cmd_code        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool check_cmd_allow(kal_uint16 cmd_code)
{
    kal_bool ret_val;

    ret_val = check_cmd_with_pin(cmd_code);

    if (ret_val == KAL_FALSE)
    {
        kal_brief_trace(TRACE_INFO, INFO_CHECK_CMD_ALLOW_RETURN_FALSE);
    }

    return ret_val;
}

/* some command should block when SIM PIN is not verified */


/*****************************************************************************
 * FUNCTION
 *  check_cmd_with_pin
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cmd_code        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool check_cmd_with_pin(kal_uint16 cmd_code)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (is_sim_verified() == KAL_TRUE)  //PIN is verified.
    {
        return KAL_TRUE;
    }
    else
    {
        /* some command should be blocked */
        switch (cmd_code)
        {
        /* MAUI_02239114 remove AT+DS from PIN checking
        #ifdef CSD_SUPPORT
            case RMMI_CMD_ATDS:
        #endif 
        */
        #if defined(__MOD_PHB__ ) && defined(NEPTUNE_MMI)
            case RMMI_CMD_ATCPBR:
            case RMMI_CMD_ATCPBS:
            case RMMI_CMD_ATCPBW:
        #endif
            case RMMI_CMD_ATCMGS:
            case RMMI_CMD_ATEMGS:	 
        #ifdef __AOC_SUPPORT__
            case RMMI_CMD_ATCACM:
            case RMMI_CMD_ATCAMM:
        #endif
            case RMMI_CMD_ATCIMI:				
            case RMMI_CMD_ATCSCA:
        #ifdef __MOD_TCM__
		#ifdef __EXT_PDP_CONTEXT_ON__
            case RMMI_CMD_ATCGACT:
            case RMMI_CMD_ATCGCMOD:
            //case RMMI_CMD_ATCGDCONT: //mtk02285, 20111003, make CGDCONT ok before unlock PIN
            case RMMI_CMD_ATCGSDATA:
        #ifdef __NDIS_SUPPORT__
            case RMMI_CMD_ATCGPRCO:
        #endif 
		#endif
        #endif /* __MOD_TCM__ */ 
        #if !defined(__SLIM_AT__)				
            case RMMI_CMD_ATCSNS:
        #ifdef __AOC_SUPPORT__
            case RMMI_CMD_ATCAOC:
            case RMMI_CMD_ATCCWE:
        #endif
            case RMMI_CMD_ATCCUG:
            case RMMI_CMD_ATCAEMLPP:
            case RMMI_CMD_ATCCFC:
            case RMMI_CMD_ATCDIP:
            case RMMI_CMD_ATCNAP:
            case RMMI_CMD_ATCTFR:
            case RMMI_CMD_ATCGSMS:
            case RMMI_CMD_ATCSMS:
            case RMMI_CMD_ATCSMA:				
            case RMMI_CMD_ATCMGC:
            case RMMI_CMD_ATEMGC:
            case RMMI_CMD_ATCMSS:
            case RMMI_CMD_ATCNMA:				
            case RMMI_CMD_ATENMA:
            case RMMI_CMD_ATCMMS:
            case RMMI_CMD_ATCSMP:
            case RMMI_CMD_ATCSAS:
            case RMMI_CMD_ATCRES:
        #ifdef __AOC_SUPPORT__                
            case RMMI_CMD_ATCPUC:
        #endif                
            case RMMI_CMD_ATCPOL:
            case RMMI_CMD_ATCPLS:
            case RMMI_CMD_ATCNUM:
            case RMMI_CMD_ATCPBF:
        #if defined(__MOD_TCM__)		
		#ifdef __EXT_SECONDARY_PDP_FEASIBLE__
            case RMMI_CMD_ATCGDSCONT:
            case RMMI_CMD_ATCGTFT:				
		#endif
		#ifdef __EXT_PDP_CONTEXT_ON__
            case RMMI_CMD_ATCGANS:
            case RMMI_CMD_ATCGAUTO:
            case RMMI_CMD_ATCGPADDR:
            case RMMI_CMD_ATCGQMIN:
            case RMMI_CMD_ATCGQREQ:
		#endif /* __EXT_PDP_CONTEXT_ON__ */
        #endif
        #ifdef __MMI_FMI__
            case RMMI_CMD_ATCRSM:
        #endif 
        #endif /* __SLIM_AT__ */ 

                break;
		
        #ifdef __MOD_TCM__		
	     case RMMI_CMD_ATCGATT:
        #endif 
		  rmmi_ptr->cmee_err = OPERATION_NOT_ALLOWED_ERR; 
		  break;	
		  
            default:
            {
            #ifdef __CSD_FAX__
                if ((cmd_code >= RMMI_CMD_ATFPR) && (cmd_code <= RMMI_CMD_ATFWDFC))
                {
                    rmmi_result_code_fmttr(RMMI_RCODE_ERROR, rmmi_ptr->cmee_err);
                    return KAL_FALSE;
                }
                else
            #endif /* __CSD_FAX__ */ 
                {
		      rmmi_ptr->cmee_err = RMMI_ERR_UNKNOWN;  
                    return KAL_TRUE;
                }
            }
        }

        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, rmmi_ptr->cmee_err);  
        return KAL_FALSE;		

    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_convert_l3_cause
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ps_cause        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint16 rmmi_convert_l3_cause(kal_uint16 ps_cause)
{
    switch (ps_cause)
    {
        case CM_MM_NO_SERVICE:
            return NO_NW_SERVICE;       //30

        case CM_MM_CONN_TIMEOUT:
            return RMMI_ERR_NETWORK_TIMEOUT;    //31

        case CM_MM_ILLEGAL_MS:
        #if defined(__WM_RIL_SUPPORT__) //MAUI_01677448
            return RMMI_ERR_NETWORK_NOT_ALLOWED; //32
        #else
            return RMMI_ERR_ILLEGAL_MS; //103
        #endif /* __WM_RIL_SUPPORT__ */

        case CM_MM_ILLEGAL_ME:
            return RMMI_ERR_ILLEGAL_ME; //106

        case CM_MM_GPRS_NOT_ALLOWED:
            return RMMI_ERR_GPRS_NOT_ALLOWED;   //107

        case CM_MM_PLMN_NOT_ALLOWED:
            return RMMI_ERR_PLMN_NOT_ALLOWED;   //111

        case CM_MM_LOCATION_AREA_NOT_ALLOWED:
            return RMMI_ERR_LA_NOT_ALLOWED;     //112

        case CM_MM_ROAMING_AREA_NOT_ALLOWED:
            return RMMI_ERR_ROAMING_AREA_NOT_ALLOWED;   //113

        case CM_MM_SERV_OPTION_NOT_SUPPORTED:
            return RMMI_ERR_SERV_OPTION_NOT_SUPPORTED;  //132

        case CM_MM_REQ_SERV_OPTION_NOT_SUBSCRIBED:
            return RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED;     //133

        case CM_MM_SERV_OPTION_TEMP_OUT_OF_ORDER:
            return RMMI_ERR_SERV_OPTION_TEMP_OUT_OF_ORDER;      //134

        case AUTHENTICATION_FAILURE:
            return RMMI_ERR_PDP_AUTH_FAIL;      //149

        case CM_SS_ERR_SS_SUBSCRIPTIONVIOLATION:
            return OPERATION_NOT_ALLOWED_ERR; // 3
            
    #if defined(__SP_RIL_SUPPORT__)
        case CM_SS_ERR_NEGATIVEPW_CHECK:
            return INCORRECT_PASSWD;    //16
    #endif /* __SP_RIL_SUPPORT__ */ 
        default:
            if (((ps_cause > SM_CAUSE_START) && (ps_cause < SM_CAUSE_END)) ||
                ((ps_cause >= SM_PROPRIETARY_CAUSE_START) && (ps_cause < SM_PROPRIETARY_CAUSE_END)) ||
                ((ps_cause >= TCM_CAUSE_START) && (ps_cause < TCM_CAUSE_END)) ||
                ((ps_cause >= L4C_CMD_CONFLICT) && (ps_cause < L4C_CAUSE_END)))
            {
                kal_brief_trace(TRACE_INFO, INFO_PS_RESULT_CAUSE, ps_cause);
                return ps_cause; // return L4C/TCM/SM reject cause
            }
            else
            {
                return RMMI_ERR_UNKNOWN;        //100
            }

    }
}


/*****************************************************************************
 * FUNCTION
 *  is_sim_verified
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_sim_verified(void)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    if ((rmmi_ptr->command_allow == KAL_TRUE) && (l4c_ptr->smu_activated == L4C_SMU_ACTIVE))    //phone lock case
    {
        rmmi_ptr->cmee_err = RMMI_ERR_UNSPECIFIED;      //back to initial value.   
        return KAL_TRUE;
    }
    if (rmmi_ptr->command_allow == KAL_TRUE) // i.e. L4C_PTR->smu_activated != L4C_SMU_ACTIVE
    {			
    	 rmmi_ptr->cmee_err = SIM_BUSY;    // [MAUI_01354523], mtk02480, NO REQUIRED PIN, but SMU not ready
	 return KAL_FALSE;	 
    }	
    else
    {
        rmmi_ptr->cmee_err = rmmi_ptr->cmd_error_cause;
        return KAL_FALSE;
    }
}

/* mtk0071420041206 */


/*****************************************************************************
 * FUNCTION
 *  is_nw_registered
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_nw_registered(void)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (rmmi_ptr->cops_mode == 2)       //DEREG
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_NETWORK_NOT_ALLOWED);
        return KAL_FALSE;
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_cid_2_srcid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 rmmi_cid_2_srcid(kal_uint8 cid)
{
#if defined(__MESSAGE_BASED_AT_SUPPORT__)
    kal_uint8 src_id;
    src_id = rmmi_msgbased_cid_2_srcid(cid);    
    if (src_id != INVALID_SRC)
        return src_id;
#endif

    return RMMI_COMM_PTR->source[cid];

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_srcid_2_cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 rmmi_srcid_2_cid(kal_uint8 src_id)
{
    kal_uint8 cid;

#if defined(__MESSAGE_BASED_AT_SUPPORT__)
    cid = rmmi_msgbased_srcid_2_cid(src_id);
    if (cid  != 0xff)
        return cid;

#endif

    for (cid = 0; cid < RMMI_MAX_CHANNEL_NUMBER; cid++)
    {
        if (RMMI_COMM_PTR->source[cid] == src_id)
        {
            return cid;
        }
    }
    return 0xff;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_cid_2_port
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 rmmi_cid_2_port(kal_uint8 cid)
{

#if defined(__MESSAGE_BASED_AT_SUPPORT__)
{
    kal_uint8 port;
    port = rmmi_msgbased_cid_2_port(cid);
    if (port  != uart_port_null)
        return port;
}
#endif

    return RMMI_COMM_PTR->port[cid];
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_port_2_cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  port        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 rmmi_port_2_cid(kal_uint8 port)
{
    kal_uint8 cid;

#if defined(__MESSAGE_BASED_AT_SUPPORT__) 

    cid = rmmi_msgbased_port_2_cid(port);
    if (cid  != 0xff)
        return cid;

#endif

    for (cid = 0; cid < RMMI_MAX_CHANNEL_NUMBER; cid++)
    {
        if (RMMI_COMM_PTR->port[cid] == port)
        {
            return cid;
        }
    }
    return 0xff;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_check_online_cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool rmmi_check_online_cid(kal_uint8 cid)
{
    kal_uint8 online_src_id;

    if (l4c_check_online_state(&online_src_id, L4C_ONLINE_STATE))
    {
        if (online_src_id == rmmi_cid_2_srcid(cid))
        {
            return KAL_TRUE;
        }
    }
#if 0 //MAUI_01922673, mtk02285, 20091208: un-necessary
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
    return KAL_FALSE;
}
//mtk02514_plutommi_usim
/*****************************************************************************
 * FUNCTION
 *  rmmi_start_ath_for_dialup_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  port      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_start_ath_for_dialup_hdlr(kal_uint8 port)
{
#if (defined(__MOD_TCM__) && defined(__PS_DIALUP__)) || defined(CSD_SUPPORT)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_START_ATH_FOR_DIALUP_ENTRY);
		
    if(rmmi_ptr->ath_for_dialup == uart_port_null && custom_ath_for_dialup_timer()!=0)
    {
       kal_brief_trace(TRACE_INFO, INFO_SET_ATH_FOR_DIALUP, port);		
       rmmi_ptr->ath_for_dialup = port;			
	
       if (l4c_ptr->event_id[5] != 0)
       {
           kal_brief_trace(TRACE_INFO, INFO_RMMI_CANCEL_EVENT, l4c_ptr->event_id[5]);
           evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[5]));
           l4c_ptr->event_id[5] = 0;
       }

       l4c_ptr->event_id[5] = evshed_set_event(
                            l4c_ptr->event_scheduler_ptr,
                            (kal_timer_func_ptr) rmmi_clear_ath_for_dialup_hdlr,
                            NULL,
                            custom_ath_for_dialup_timer() * KAL_TICKS_100_MSEC);
    }	
    return;	
#endif /* (defined(__MOD_TCM__) && defined(__PS_DIALUP__)) || defined(CSD_SUPPORT) */
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_clear_ath_for_dialup_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/

void rmmi_clear_ath_for_dialup_hdlr(void)
{
#if (defined(__MOD_TCM__) && defined(__PS_DIALUP__)) || defined(CSD_SUPPORT)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CLEAR_ATH_FOR_DIALUP_ENTRY);

    if(rmmi_ptr->ath_for_dialup != uart_port_null)
    {      
       kal_brief_trace(TRACE_INFO, INFO_SET_ATH_FOR_DIALUP, uart_port_null);	
       rmmi_ptr->ath_for_dialup = uart_port_null;	
	
       if (l4c_ptr->event_id[5] != 0)
       {
           kal_brief_trace(TRACE_INFO, INFO_RMMI_CANCEL_EVENT, l4c_ptr->event_id[5]);
           evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[5]));
           l4c_ptr->event_id[5] = 0;
       }	
    }	
#endif /* (defined(__MOD_TCM__) && defined(__PS_DIALUP__)) || defined(CSD_SUPPORT) */
}

#ifndef __test_mode__


/*****************************************************************************
 * FUNCTION
 *  rmmi_need_enter
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cmd     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool rmmi_need_enter(kal_uint16 cmd)    /* mtk00924 20050222 for __test_mode__ modification */
{
    if (cmd == RMMI_MAX_CMD_NUM
        || cmd == RMMI_CMD_ATCMGD 
        || cmd == RMMI_CMD_ATEQSI 
        || cmd == RMMI_CMD_ATCPBR 
        || cmd == RMMI_CMD_ATCPMS 
        || cmd == RMMI_CMD_ATCPBW 
        || cmd == RMMI_CMD_ATEPBUM
    #ifdef __OP01__
        || cmd == RMMI_CMD_ATSCPBW
        || cmd == RMMI_CMD_ATSCPBR
    #endif
        || cmd == RMMI_CMD_ATCSCS
#if defined(__MMI_FMI__)
        || cmd == RMMI_CMD_ATCKPD 
#endif
	|| cmd == RMMI_CMD_ATEPBSE
#ifdef __CSD_FAX__
        || (RMMI_CMD_ATFDT <= cmd && cmd <= RMMI_CMD_ATFWDFC)
#endif 
        || cmd == RMMI_CMD_ATCIND        
        || cmd == RMMI_CMD_ATCOPS 
#ifdef __MOD_TCM__
#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
        || cmd == RMMI_CMD_ATMBPC
#endif
#ifdef __EXT_PDP_CONTEXT_ON__
        || cmd == RMMI_CMD_ATCGCMOD 
        || cmd == RMMI_CMD_ATCGDCONT         
#endif        
        || cmd == RMMI_CMD_ATCGCLASS         
#ifdef __EXT_PDP_CONTEXT_ON__        
#ifdef __R99__
        || cmd == RMMI_CMD_ATCGEQMIN 
        || cmd == RMMI_CMD_ATCGEQREQ
        || cmd == RMMI_CMD_ATCGEQNEG //mtk02285, 20111003
#endif 
#endif
#endif /* __MOD_TCM__ */
#if defined(__AT_EPBW_SUPPORT__)
        || cmd == RMMI_CMD_ATEPBW
#endif
#if !defined(__SLIM_AT__)
        || cmd == RMMI_CMD_ATCSAS 
        || cmd == RMMI_CMD_ATCRES 
        || cmd == RMMI_CMD_ATCPBF 
        || cmd == RMMI_CMD_ATCPOL 
        || cmd == RMMI_CMD_ATCPLS
        || cmd == RMMI_CMD_ATCGSMS     
        || cmd == RMMI_CMD_ATCALA 
        || cmd == RMMI_CMD_ATCALD 
        || cmd == RMMI_CMD_ATCLAN 
        || cmd == RMMI_CMD_ATCLVL 
        || cmd == RMMI_CMD_ATCRSL 
        || cmd == RMMI_CMD_ATCNMA
        || cmd == RMMI_CMD_ATENMA
        || cmd == RMMI_CMD_ATCMGL    
#if defined(__MMI_FMI__)
        || cmd == RMMI_CMD_ATCSDF 
        || cmd == RMMI_CMD_ATCSGT 
        || cmd == RMMI_CMD_ATCSIL 
        || cmd == RMMI_CMD_ATCSTF   
        || cmd == RMMI_CMD_ATCVIB               
#if !defined(__DISABLE_SELDOM_USED_PROPRIETARY_CMD__) //at+esdp is a seldom use command
        || cmd == RMMI_CMD_ATESDP     
#endif
#endif /* __MMI_FMI__ */
#ifdef __MOD_TCM__
#ifdef __EXT_PDP_CONTEXT_ON__
        || cmd == RMMI_CMD_ATCGPADDR
        || cmd == RMMI_CMD_ATEGPAU
#if 0 //defined(__TCM_EXT_CALL_HISTORY_SUPPORT__) && !defined(__MMI_FMI__)
/* under construction !*/
#endif        
#ifdef __NDIS_SUPPORT__
        || cmd == RMMI_CMD_ATCGPRCO
#endif
#if defined(__HSPA_PREFERENCE_SETTING__)
        || cmd == RMMI_CMD_EHSM
#endif
#ifdef __EXT_SECONDARY_PDP_FEASIBLE__
        || cmd == RMMI_CMD_ATCGDSCONT 
        || cmd == RMMI_CMD_ATCGTFT        
#endif /* __EXT_SECONDARY_PDP_FEASIBLE__ */
#endif
#endif
#endif /* !defined(__SLIM_AT__) */
        || cmd == RMMI_CMD_ATESUO 
#if defined(__DT_SUPPORT__) 
        || cmd == RMMI_CMD_ATEJAVA
#if !defined(NEPTUNE_MMI)
        || cmd == RMMI_CMD_ATEVCARD 
#endif 
#endif /* defined(__DT_SUPPORT__) */
#if defined(__SYSSEL_SUPPORT__)
        || cmd == RMMI_CMD_ATSYSSEL
#endif
        )
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}
#endif /* __test_mode__ */ 

#ifdef __BT_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_str_validator
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  max_length              [IN]        
 *  str                     [?]         
 *  skip_bs                 [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool rmmi_bt_str_validator(
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter,
            kal_uint16 max_length,
            kal_uint8 *str,
            kal_bool skip_bs)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 index = 0;
    kal_uint8 error_flag = 0;
    kal_uint16 length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_STRING_VALIDATOR_ENTRY);
    ASSERT((str != NULL) && (source_string_ptr != NULL));

    length = strlen((char*)source_string_ptr->string_ptr);
    if (source_string_ptr->index >= length)
    {
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        return ret_val;
    }

    rmmi_skip_spaces(source_string_ptr);

    while ((source_string_ptr->string_ptr[source_string_ptr->index] != delimiter) &&
           (source_string_ptr->string_ptr[source_string_ptr->index] != rmmi_ptr->s_reg.s3))
    {
        if (index >= (max_length - 1))  /* length is too long , break */
        {
            error_flag = TEXT_ERRSTRING_TOO_LONG_ERR;
            break;
        }

        *((kal_uint8*) str + index) = source_string_ptr->string_ptr[source_string_ptr->index];
        index++;
        source_string_ptr->index++;

        if (skip_bs == KAL_TRUE)
        {
            rmmi_skip_spaces(source_string_ptr);
        }

    }   /* end of the while loop */

    if (error_flag != 0)
    {
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        return ret_val;
    }

    source_string_ptr->index++;
    rmmi_skip_spaces(source_string_ptr);
    *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
    ret_val = KAL_TRUE;
    return ret_val;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_hex_validator
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  maxlen                  [IN]        
 *  addr                    [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool rmmi_bt_hex_validator(
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter,
            kal_uint16 maxlen,
            kal_uint8 *addr)
{
    kal_uint8 *addr_str = NULL;
    kal_bool ret_val;

    addr_str = (kal_uint8*) get_ctrl_buffer(maxlen * 2 + 1);
    ret_val = rmmi_bt_str_validator(source_string_ptr, delimiter, (kal_uint16) (maxlen * 2 + 1), addr_str, KAL_TRUE);
    check_hex_value(addr_str, addr);
    free_ctrl_buffer(addr_str);
    return ret_val;
}
#endif /* __BT_SUPPORT__ */ 
#ifdef __ECALL_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  rmmi_emsd_str_validator
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  max_length              [IN]        
 *  str                     [?]         
 *  skip_bs                 [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool rmmi_emsd_str_validator(
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter,
            kal_uint16 max_length,
            kal_uint8 *str,
            kal_bool skip_bs)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint16 index = 0;
    kal_uint8 error_flag = 0;
    kal_uint16 length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_STRING_VALIDATOR_ENTRY);
    ASSERT((str != NULL) && (source_string_ptr != NULL));

    length = strlen((char*)source_string_ptr->string_ptr);
    if (source_string_ptr->index >= length)
    {
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        return ret_val;
    }

    rmmi_skip_spaces(source_string_ptr);

    while ((source_string_ptr->string_ptr[source_string_ptr->index] != delimiter) &&
           (source_string_ptr->string_ptr[source_string_ptr->index] != rmmi_ptr->s_reg.s3))
    {
        if (index >= (max_length - 1))  /* length is too long , break */
        {
            error_flag = TEXT_ERRSTRING_TOO_LONG_ERR;
            break;
        }

        *((kal_uint8*) str + index) = source_string_ptr->string_ptr[source_string_ptr->index];
        index++;
        source_string_ptr->index++;

        if (skip_bs == KAL_TRUE)
        {
            rmmi_skip_spaces(source_string_ptr);
        }

    }   /* end of the while loop */

    if (error_flag != 0)
    {
        *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
        return ret_val;
    }

    source_string_ptr->index++;
    rmmi_skip_spaces(source_string_ptr);
    *((kal_uint8*) str + index) = RMMI_END_OF_STRING_CHAR;
    ret_val = KAL_TRUE;
    return ret_val;

}

/*****************************************************************************
 * FUNCTION
 *  rmmi_emsd_hex_validator
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]         
 *  delimiter               [IN]        
 *  maxlen                  [IN]        
 *  addr                    [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool rmmi_emsd_hex_validator(
            rmmi_string_struct *source_string_ptr,
            kal_uint8 delimiter,
            kal_uint16 maxlen,
            kal_uint8 *addr)
{
    kal_uint8 *addr_str = NULL;
    kal_bool ret_val;

    addr_str = (kal_uint8*) get_ctrl_buffer(maxlen * 2 + 1);
    ret_val = rmmi_emsd_str_validator(source_string_ptr, delimiter, (kal_uint16) (maxlen * 2 + 1), addr_str, KAL_TRUE);
    check_emsd_hex_value(addr_str, addr);
    free_ctrl_buffer(addr_str);
    return ret_val;
}
#endif /*__ECALL_SUPPORT__*/
/*****************************************************************************
 * FUNCTION
 *  rmmi_view_profile
 * DESCRIPTION
 *  
 * PARAMETERS
 *  profile_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_view_profile(rmmi_profile_struct *profile_ptr)
{
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[MAX_DATA_QUEUE_LENGTH];
    kal_uint8 s0[4], s2[4], s3[4], s4[4], s5[4], s32[4], s33[4], s95[4];
    kal_uint16 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->arg_list[0] = (void*)&profile_ptr->rmmi_atv;  /* ATV */
    rmmi_ptr->arg_list[1] = (void*)&profile_ptr->rmmi_ate;  /* ATE */
    rmmi_ptr->arg_list[2] = (void*)&profile_ptr->rmmi_atq;  /* ATQ */

    rmmi_ptr->arg_list[3] = (void*)&profile_ptr->rmmi_atampC;  /* AT&C */
    rmmi_ptr->arg_list[4] = (void*)&profile_ptr->rmmi_atampD;  /* AT&D */
    rmmi_ptr->arg_list[5] = (void*)&profile_ptr->rmmi_atampK;  /* AT&K */

    rmmi_ptr->arg_list[6] = (void*)&profile_ptr->rmmi_atx;  /* ATX */
    rmmi_ptr->arg_list[7] = (void*)&profile_ptr->rmmi_atw;  /* ATW */

    rmmi_ptr->arg_list[8] = (void*)&profile_ptr->rmmi_cbst.speed;      /* AT+CBST */
    rmmi_ptr->arg_list[9] = (void*)&profile_ptr->rmmi_cbst.name;       /* AT+CBST */
    rmmi_ptr->arg_list[10] = (void*)&profile_ptr->rmmi_cbst.ce;        /* AT+CBST */

    rmmi_ptr->arg_list[11] = (void*)&profile_ptr->rmmi_crlp.iws;       /* AT+CRLP */
    rmmi_ptr->arg_list[12] = (void*)&profile_ptr->rmmi_crlp.mws;       /* AT+CRLP */
    rmmi_ptr->arg_list[13] = (void*)&profile_ptr->rmmi_crlp.T1;        /* AT+CRLP */
    rmmi_ptr->arg_list[14] = (void*)&profile_ptr->rmmi_crlp.N2;        /* AT+CRLP */

    rmmi_ptr->arg_list[15] = (void*)&profile_ptr->rmmi_ciwf;   /* AT+CIWF */

    string_length = rmmi_fast_string_print(
                        buffer,
                        (kal_uint8*) "V%d E%d Q%d &C%d &D%d &K%d X%d W%d +CBST=%d,%d,%d +CRLP=%d,%d,%d,%d +CIWF=%d",
                        rmmi_ptr->arg_list,
                        16);
    rsp_str = &buffer[0];
    rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);

    kal_sprintf((kal_char*) s0, "%03d", profile_ptr->s_reg.s0);
    kal_sprintf((kal_char*) s2, "%03d", profile_ptr->s_reg.s2);
    kal_sprintf((kal_char*) s3, "%03d", profile_ptr->s_reg.s3);
    kal_sprintf((kal_char*) s4, "%03d", profile_ptr->s_reg.s4);
    kal_sprintf((kal_char*) s5, "%03d", profile_ptr->s_reg.s5);
    kal_sprintf((kal_char*) s32, "%03d", profile_ptr->s_reg.s32);
    kal_sprintf((kal_char*) s33, "%03d", profile_ptr->s_reg.s33);
    kal_sprintf((kal_char*) s95, "%03d", profile_ptr->s_reg.s95);

    rmmi_ptr->arg_list[0] = (void*)s0;  /* ATS0 */
    rmmi_ptr->arg_list[1] = (void*)s2;  /* ATS2 */
    rmmi_ptr->arg_list[2] = (void*)s3;  /* ATS3 */
    rmmi_ptr->arg_list[3] = (void*)s4;  /* ATS4 */
    rmmi_ptr->arg_list[4] = (void*)s5;  /* ATS5 */
    rmmi_ptr->arg_list[5] = (void*)s32; /* ATS32 */
    rmmi_ptr->arg_list[6] = (void*)s33; /* ATS33 */
    rmmi_ptr->arg_list[7] = (void*)s95; /* ATS95 */

    string_length = rmmi_fast_string_print(
                        buffer,
                        (kal_uint8*) "S00:%s S02:%s S03:%s S04:%s S05:%s S32:%s S33:%s S95:%s",
                        rmmi_ptr->arg_list,
                        8);
    rsp_str = &buffer[0];
    rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
}

/*****************************************************************************
* FUNCTION
*  	rmmi_current_access_technology()
* DESCRIPTION
*     CUSTOMER DOES NOT need to modify this function.
*
* RULE
*     bit7          6       5       4       3       2       1       0
*     DUAL CARRIER  HSUPA+  HSDPA+  HSUPA   HSDPA   UMTS    EDGE    GPRS
*
* PARAMETERS
*   	none
* RETURNS
*     kal_uint8 
*****************************************************************************/
kal_uint8 rmmi_current_access_technology(rat_enum rat, l4c_data_speed_support_enum cell_data_speed, l4c_data_bearer_capablility_enum max_data_bearer_capa)
{
    kal_uint8 act = 0;

    if (rat == RAT_GSM)
    { 
        if (cell_data_speed == L4C_EDGE_SUPPORT)
        {
            act = 3; //GSM w/EGPRS
        }
    }
    else if (rat == RAT_UMTS)
    {
        act = 2; //UTRAN                
        switch (cell_data_speed & 0x7f) // ignore dual carrier bit (0x80)
        {
            case L4C_HSDPA_SUPPORT:
            case L4C_HSDPAP_SUPPORT:
                act = 4; //UTRAN w/HSDPA
                break;
                
            case L4C_HSUPA_SUPPORT:
            case L4C_HSUPAP_SUPPORT:
                act = 5; //UTRAN w/HSUPA
                break;
                
            case L4C_HSDPA_UPA_SUPPORT:
            case L4C_HSDPAP_UPA_SUPPORT:
            case L4C_HSUPAP_DPA_SUPPORT:
            case L4C_HSPAP_SUPPORT:
                act = 6; //UTRAN w/HSDPA and HSUPA
                break;

#if defined(__SP_RIL_SUPPORT__) || defined(__L4C_COMBINE_RAB_TO_ACT__) 
            case L4C_UMTS_SUPPORT:
                switch (max_data_bearer_capa)
                {
                    case L4C_HSDPA_CAPABILITY:
                    case L4C_HSDPAP_CAPABILITY:
                    case L4C_DC_DPA_CAPABILITY:
                    case L4C_DC_HSDPAP_CAPABILITY:
                        act = 4;
                        break;

                    case L4C_HSUPA_CAPABILITY:
                    case L4C_HSUPAP_CAPABILITY:
                        act = 5;                
                        break;
                        
                    case L4C_HSDPA_HSUPA_CAPABILITY:
                    case L4C_HSDPAP_UPA_CAPABILITY:
                    case L4C_HSUPAP_DPA_CAPABILITY:
                    case L4C_HSPAP_CAPABILITY:
                    case L4C_DC_DPA_UPA_CAPABILITY:
                    case L4C_DC_HSDPAP_UPA_CAPABILITY:
                    case L4C_DC_HSUPAP_DPA_CAPABILITY:
                    case L4C_DC_HSPAP_CAPABILITY:
                        act = 6;
                        break;
                    default: 
                    break;
                }
                break;
#endif// defined(__SP_RIL_SUPPORT__) || defined(__L4C_COMBINE_RAB_TO_ACT__)      
            default: 
            break;
        }
    }

    kal_brief_trace(TRACE_INFO, RMMI_CURRENT_ACCESS_TECHNOLOGY, act, rat, cell_data_speed, max_data_bearer_capa);

    return act;
}


#ifdef __MOD_TCM__
void l4c_ps_update_current_reg_rind()
{
#if defined(__SP_RIL_SUPPORT__) || defined(__L4C_COMBINE_RAB_TO_ACT__)
	kal_uint8 gsm_state, gprs_state;
    kal_uint8 max_data_bearer_capa = l4c_ps_get_data_bearer_capability();
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src = rmmi_ptr->current_src;
    kal_uint8 lac[2];
    rat_enum rat = RAT_GSM;

    lac[0] = (kal_uint8)(rmmi_ptr->ps_register_status.lac_value >> 8);
    lac[1] = (kal_uint8)(rmmi_ptr->ps_register_status.lac_value & 0x00ff);

    #ifdef __ORANGE_H_PLUS__
    switch (rmmi_ptr->register_act)
    #else
    switch (rmmi_ptr->ps_register_status.act)
    #endif
    {
        case 0:
        case 1:
        case 3:
            rat = RAT_GSM;
            break;

        case 2:
        case 4:
        case 5:
        case 6:
            rat = RAT_UMTS;
            break;

        default:
            break;
    }

    if (rmmi_ptr->cs_register_status.state == RMMI_REG_STATE_ROAMING)
    {
        gsm_state = REG_STATE_REGISTERED;
    }
    else
    {
        gsm_state = rmmi_ptr->cs_register_status.state;
    }

    if (rmmi_ptr->ps_register_status.state == RMMI_REG_STATE_ROAMING)
    {
        gprs_state = REG_STATE_REGISTERED;
    }
    else
    {
        gprs_state = rmmi_ptr->ps_register_status.state;
    }

    /* [ALPS00787097] Use the latest cell info received from RAC. Do not get RAC context directly */

    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_nw_reg_state_rind(
        lac,
    #ifdef __REPORT_RAC__
        rmmi_ptr->ps_register_status.rac_value,
    #endif
        rmmi_ptr->ps_register_status.cell_id, 
        gsm_state, 
        gprs_state,
        rat,
        rmmi_ptr->ps_register_status.cell_data_speed_support, 
        max_data_bearer_capa,
        PS_DOMAIN);
    rmmi_ptr->current_src = temp_src;    
#endif// defined(__SP_RIL_SUPPORT__) || defined(__L4C_COMBINE_RAB_TO_ACT__)                   
}
#endif /* __MOD_TCM__ */

/*****************************************************************************
 * FUNCTION
 *  rmmi_ira_toGsm7bit
 * DESCRIPTION
 *  This function is used to transfer a IRA character to GSM 7-bit encoding character
 *  If we can't transfer the input charcater, we will return 0.
 *  Else, we will return the length of GSM 7-bit character after encoding.
 * PARAMETERS
 *  src_text        [?]     the source character
 *  des_text        [?]    the destination character
 * RETURNS
 *  the length of GSM 7-bit character after encoding
 *****************************************************************************/
kal_uint8 rmmi_ira_toGsm7bit(kal_uint8 src_text, kal_uint8 *des_text)
{   
    kal_uint8 ret = 1;
    if (src_text== 0x24)
    {
        des_text[0] = 0x02;
    }
    else if (src_text == 0x40)
    {
        des_text[0] = 0x0;
    }
    else if (src_text == 0x5f)
    {
        des_text[0] = 0x11;
    }
    else if (src_text > 0x7f)
    {
        des_text[0] = MAP_ISO_GSM7BIT_TABLE[src_text - 0x80];
        if (des_text[0] == 0) 
        {
            ret = 0;
        }
    }
    else if (RMMI_IS_EXT_CHAR(src_text))
    {
        des_text[0] = 0x1b;
        ret = 2;
        switch (src_text)
        {
            case RMMI_CHAR_VERTICAL_LINE:
                des_text[1] = 0x40;
                break;

            case RMMI_HAT:
                des_text[1] = 0x14;
                break;

            case RMMI_L_CURLY_BRACKET:
                des_text[1] = 0x28;
                break;

            case RMMI_R_CURLY_BRACKET:
                des_text[1] = 0x29;
                break;

            case RMMI_L_SQ_BRACKET:
                des_text[1] = 0x3c;
                break;

            case RMMI_R_SQ_BRACKET:
                des_text[1] = 0x3e;
                break;

            case RMMI_CHAR_TILDE:
                des_text[1] = 0x3d;
                break;

            case RMMI_CHAR_REVERSE_SOLIDUS:
                des_text[1] = 0x2f;
                break;

            default:
                break;
        }
    }
    else
    {
        des_text[0] = src_text;
    }

    return ret;
}

/*****************************************************************************
 * FUNCTION
 *  check_UCS2_toGsm7bit
 * DESCRIPTION
 *  This function is used to encode a UCS2 String to GSM7bit String
 * PARAMETERS
 *  src_text        [?]        the input source UCS2 String
 *  src_len          [?]        the length of UCS2 String
 *  dest_text       [?]        the destination storage to stored the GSM7bit String after encoding
 *  des_len          [?]        the maximum lenght of dest_text
 * RETURNS
 *  TRUE: encode success
 *  FALSE: encode fail
 *****************************************************************************/
kal_bool check_UCS2_toGsm7bit(
        kal_uint8 *src_text, kal_uint8 src_len, 
        kal_uint8 *dest_text, kal_uint8 *des_len)
{
    kal_uint8 i=0, j=0, len;
    
    while (i < src_len) 
    {
        if (src_text[i] == 0x00) 
        {
            len = rmmi_ira_toGsm7bit(src_text[i+1], &dest_text[j]);
            if (len == 0)
                return KAL_FALSE;
            j += len;
        }
        // for the UCS2 character '?????it can be encoded to GSM7bit using 0x1bAC
        else if (src_text[i] == 0x20 && src_text[i+1] == 0xAC)
        {
            dest_text[j] = 0x1b;
            dest_text[j+1] = 0x65;
            j += 2;
        }
        else 
        {
            return KAL_FALSE;
        }
        i += 2;
            
    }
    *des_len = j;
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  check_IRA_toGsm7bit
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_text        [?]     
 *  dest_text       [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 check_IRA_toGsm7bit(kal_uint8 *src_text, kal_uint8 *dest_text)
{
    kal_uint8 i = 0, j = 0;
    kal_uint8 length = 0;

    while (src_text[i] != RMMI_END_OF_STRING_CHAR)
    {
        if (src_text[i] == 0x24)
        {
            dest_text[j] = 0x02;
        }
        else if (src_text[i] == 0x40)
        {
            dest_text[j] = 0x0;
        }
        else if (src_text[i] == 0x5f)
        {
            dest_text[j] = 0x11;
        }
        else if (src_text[i] > 0x7f)
        {
            dest_text[j] = MAP_ISO_GSM7BIT_TABLE[src_text[i] - 0x80];
        }
        else if (RMMI_IS_EXT_CHAR(src_text[i]))
        {
            dest_text[j] = 0x1b;
            j++;
            switch (src_text[i])
            {
                case RMMI_CHAR_VERTICAL_LINE:
                {
                    dest_text[j] = 0x40;
                    break;
                }
                case RMMI_HAT:
                {
                    dest_text[j] = 0x14;
                    break;
                }
                case RMMI_L_CURLY_BRACKET:
                {
                    dest_text[j] = 0x28;
                    break;
                }
                case RMMI_R_CURLY_BRACKET:
                {
                    dest_text[j] = 0x29;
                    break;
                }
                case RMMI_L_SQ_BRACKET:
                {
                    dest_text[j] = 0x3c;
                    break;
                }
                case RMMI_R_SQ_BRACKET:
                {
                    dest_text[j] = 0x3e;
                    break;
                }
                case RMMI_CHAR_TILDE:
                {
                    dest_text[j] = 0x3d;
                    break;
                }
                case RMMI_CHAR_REVERSE_SOLIDUS:
                {
                    dest_text[j] = 0x2f;
                    break;
                }
                default:
                    break;
            }
        }
        else
        {
            dest_text[j] = src_text[i];
        }
        i++;
        j++;
    }
    length = j;
    return length;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_get_phb_length
 * DESCRIPTION
 *  this function is used to get the maximum length of alpha id and tel number
 *  according to the RMMI_PTR->phb_storage_type
 *  
 * PARAMETERS
 *  alpha_length        [OUT]     the maximum length of alpha id
 *  num_length          [OUT]     the maximum length of tel number
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_get_phb_length(kal_uint8 *alpha_length, kal_uint8 *num_length)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    *alpha_length = MAX_PS_NAME_SIZE - 2;
    *num_length = L4_MAX_ADDR_BCD - 1;

    if(rmmi_ptr->phb_storage_type == RMMI_PHB_SM)
    {
        *alpha_length = rmmi_ptr->phb_info.sim_phb_len;
    }
    else if(rmmi_ptr->phb_storage_type == RMMI_PHB_ON)
    {
        *alpha_length = rmmi_ptr->phb_info.msisdn_alpha_length;
    }
    else if(rmmi_ptr->phb_storage_type == RMMI_PHB_FD)
    {
        *alpha_length = rmmi_ptr->phb_info.sim_fdn_len;
    }				  
    else if(rmmi_ptr->phb_storage_type == RMMI_PHB_EN)
    {
        *alpha_length = 0; //only USIM have alpha_id for ECC
        *num_length = 6; // 3 bytes bcd for EFecc
    }		  
                   
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_is_valid_phb_storage
 * DESCRIPTION
 *  this function is used to check if the we support the input storage type
 *  
 * PARAMETERS
 *  storage        [IN]     the storage type to be judge
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : indicate if the input storage type is valid or not
 *****************************************************************************/
kal_bool rmmi_is_valid_phb_storage(rmmi_phb_type_enum storage)
{
    if( (storage == RMMI_PHB_SM) ||
        (storage == RMMI_PHB_ME) ||
        (storage == RMMI_PHB_FD) ||
        (storage == RMMI_PHB_LD) ||
        (storage == RMMI_PHB_MC) ||
        (storage == RMMI_PHB_RC) ||
        (storage == RMMI_PHB_DC) ||
        (storage == RMMI_PHB_EN) ||
        (storage == RMMI_PHB_ON) ||
        (storage == RMMI_PHB_LA) )
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

#ifdef __UCM_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  rmmi_reset_ring_coun
 * DESCRIPTION
 *  this function is used to reset ring_count used for ATS0
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_reset_ring_count(void)
{
    kal_uint8 sim_index;

    for (sim_index = 0; sim_index < RMMI_MAX_SIM_NUM; sim_index++)
    {
        (&rmmi_cntxt_g[sim_index])->ring_count = 0;
    }
}
#endif /* __UCM_SUPPORT__ */

/*****************************************************************************
 * FUNCTION
 *  rmmi_check_ussd_length
 * DESCRIPTION
 *  this function is used to check the ussd string length according to CSCS
 *  the limitation between MS and NW is 160 bytes. IRA, GSM, PCCP437, PCDN, 
 *  and 88591 are one byte/character and will be sent to NW in GSM 7 bits.
 *  UCS2 is 2 byte/character and HEX is 1 byte/character but both are in HEX
 *  string format.
 *  
 *  IRA, GSM, PCCP437, PCDN, 88591 : (160*8)/7 = 182 characters
 *  UCS2: (160/2)*4 = 320 characters (HEX string input)
 *  HEX:  (160/1)*2 = 320 characters (HEX string input)
 *  
 * PARAMETERS
 *  length      [IN]    the length of the USSD string from upper layer
 *  ussd_str    [IN]    the ussd string
 * RETURNS
 *  kal_bool    KAL_TRUE if the length is safe, otherwise KAL_FALSE
 *****************************************************************************/
kal_bool rmmi_check_ussd_length(kal_uint16 length, kal_uint8 *ussd_str)
{
    kal_uint16 max_len = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;    
    
#if !defined(__CUSD_UNICODE_INPUT_SUPPORT__)
    kal_uint8 temp_char_set;

    temp_char_set = rmmi_ptr->char_set;
    rmmi_ptr->char_set = RMMI_CHSET_IRA;
#endif

    switch (rmmi_ptr->char_set)
    {
        case RMMI_CHSET_IRA:
        {
            kal_uint8 i, j;
            
            for (i=0, j=0; (ussd_str[i]!=RMMI_END_OF_STRING_CHAR) && (i<length); i++)
            {
                if (RMMI_IS_EXT_CHAR(ussd_str[i]))
                {
                    /* extension GSM7bit coding encodes one character into two bytes
                       including one escape code 0x1b
                    */
                    j++;
                }
            }
            max_len = 182 - j;
            break;
        }
        case RMMI_CHSET_GSM:
        case RMMI_CHSET_PCCP437:
        case RMMI_CHSET_PCDN:
        case RMMI_CHSET_88591:
            max_len = 182;
            break;
        case RMMI_CHSET_UCS2:
        case RMMI_CHSET_HEX:
            max_len = 320;
            break;
        default:
            /* illegal cscs */
            return KAL_FALSE;
    }

#if !defined(__CUSD_UNICODE_INPUT_SUPPORT__)
    rmmi_ptr->char_set = temp_char_set;
#endif

    return (length <= max_len)? KAL_TRUE : KAL_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_phb_get_sim_storage_by_current_module()
 * DESCRIPTION
 * this function is used to get the PHB_STORAGE_SIM_X
 * according to the current ATCI module
 *  
 * PARAMETERS
 *  none
 * RETURNS
 *  phb_storage_enum
 *****************************************************************************/
phb_storage_enum rmmi_phb_get_sim_storage_by_current_module()
{
    kal_uint8 i;
    for (i=0; i<RMMI_MAX_SIM_NUM; i++) 
    {
        if (L4_MODULE(MOD_ATCI, i) == rmmi_current_mod_id)
            break;
    }
    i = i ==0 ? PHB_STORAGE_SIM : (PHB_STORAGE_SIM2 + i -1);
    
    return (phb_storage_enum)i;
}

#ifdef __AT_EPBUM_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  rmmi_epbum_type_to_phb_type()
 * DESCRIPTION
 * this function is used to conver the input type of AT+EPBUM to internal phb_type_enum
 * PARAMETERS
 *  epbum_type         [IN]        the input +EPBUM type
 * RETURNS
 *  phb_type_enum
 *****************************************************************************/
phb_type_enum rmmi_epbum_type_to_phb_type(rmmi_epbum_ef_type_enum epbum_type)
{
    phb_type_enum phb_type = PHB_NONE;
    switch(epbum_type)
    {
        case RMMI_EPBUM_EF_ANR:
            phb_type = PHB_ANR;
            break;
        case RMMI_EPBUM_EF_EMAIL:
            phb_type = PHB_EMAIL;
            break;
        case RMMI_EPBUM_EF_SNE:
            phb_type = PHB_SNE;
            break;
        case RMMI_EPBUM_EF_AAS:
            phb_type = PHB_AAS;
            break;
        case RMMI_EPBUM_EF_GAS:
            phb_type = PHB_GAS;
            break;
        case RMMI_EPBUM_EF_GRP:
            phb_type = PHB_GRP;
            break;
        default:
            break;
    }
    return phb_type;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_phb_type_to_epbum_type()
 * DESCRIPTION
 * this function is used to conver the  internal phb_type_enum to the type of AT+EPBUM
 * PARAMETERS
 *  phb_type         [IN]        the internal PHB type
 * RETURNS
 *  rmmi_epbum_ef_type_enum
 *****************************************************************************/
rmmi_epbum_ef_type_enum rmmi_phb_type_to_epbum_type(phb_type_enum phb_type)
{
    rmmi_epbum_ef_type_enum epbum_type = RMMI_EPBUM_EF_MAX;
    switch(phb_type)
    {
        case PHB_ANR:
            epbum_type = RMMI_EPBUM_EF_ANR;
            break;
        case PHB_EMAIL:
            epbum_type = RMMI_EPBUM_EF_EMAIL;
            break;
        case PHB_SNE:
            epbum_type = RMMI_EPBUM_EF_SNE;
            break;
        case PHB_AAS:
            epbum_type = RMMI_EPBUM_EF_AAS;
            break;
        case PHB_GAS:
            epbum_type = RMMI_EPBUM_EF_GAS;
            break;
        case PHB_GRP:
            epbum_type = RMMI_EPBUM_EF_GRP;
            break;
        default:
            break;
    }
    return epbum_type;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  rmmi_get_default_uart_owner
 * DESCRIPTION
 *  This is a public function to let caller(ex. TST) know what is default uart owner of the AT command
 * PARAMETERS
 *  void
 * RETURNS
 *  module_type
 *****************************************************************************/
module_type rmmi_get_default_uart_owner(void)
{
    #ifdef __GEMINI__
    return MOD_L4C + RMMI_COMM_PTR->sim_uart_setting;
    #else
    return MOD_L4C;
    #endif
}


#if defined(__SYSSEL_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  rmmi_get_syssel_band
 *
 * DESCRIPTION
 *  This is a private function to convert <band> parameter of +SYSSEL for
 *  l4c_nw_set_preferred_band_req()
 *
 * PARAMETERS
 *  gsm_band        [IN]    input gsm band bitmap
 *  umts_band       [IN]    input umts band bitmap
 *  band_map       [OUT]    the supported <band> mapping for +SYSSEL
 *
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_convert_syssel_band(kal_uint8 gsm_band, kal_uint16 umts_band, kal_uint32 *band_map)
{
    kal_uint32 bit_mask = 0x00000001;
    kal_uint8 i;

    *band_map = 0;
    if (((gsm_band & 0x9a) == 0x9a) && ((umts_band & 0x13) == 0x13))
    {
        /* GSM850/900/1800/1900, WCDMA850/1900/2100 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((gsm_band & 0x0a) == 0x0a) && ((umts_band & 0x01) == 0x01))
    {
        /* EURO: GSM900/1800, WCDMA2100 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((gsm_band & 0x90) == 0x90) && ((umts_band & 0x12) == 0x12))
    {
        /* NORTH AMERICA: GSM850/1900, WCDMA850/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((gsm_band & 0x9a) == 0x9a)
    {
        /* GSM ONLY: GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((umts_band & 0x13) == 0x13)
    {
        /* UMTS ONLY: WCDMA850/1900/2100 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((gsm_band & 0x80) == 0x80)
    {
        /* GSM850 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((gsm_band & 0x02) == 0x02)
    {
        /* GSM900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((gsm_band & 0x08) == 0x08)
    {
        /* DCS1800 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((gsm_band & 0x10) == 0x10)
    {
        /* PCS1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((umts_band & 0x10) == 0x10)
    {
        /* WCDMA850 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((umts_band & 0x02) == 0x02)
    {
        /* WCDMA1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((umts_band & 0x01) == 0x01)
    {
        /* WCDMA2100 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if ((umts_band & 0x80) == 0x80)
    {
        /* WCDMA900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x81) == 0x81) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA900/2100 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x01) == 0x01) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA2100 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x12) == 0x12) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA850/1900 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x0309) == 0x0309) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA1700/2100 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x82) == 0x82) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA900/1900 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x10) == 0x10) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA850 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x038b) == 0x038b) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA900/1900/2100/1700 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x11) == 0x11) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA850/2100 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x0319) == 0x0319) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA850/2100/1700 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
    bit_mask <<= 1;
    if (((umts_band & 0x85) == 0x85) && ((gsm_band & 0x9a) == 0x9a))
    {
        /* WCDMA900/1800/2100 GSM850/900/1800/1900 */
        *band_map |= bit_mask;
    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_get_syssel_band
 *
 * DESCRIPTION
 *  This is a private function to convert <band> parameter of +SYSSEL for
 *  l4c_nw_set_preferred_band_req()
 *
 * PARAMETERS
 *  band            [IN]    input <band> parameter of +SYSSEL
 *  gsm_band        [OUT]   output gsm band bitmap
 *  umts_band       [OUT]   output umts band bitmap
 *
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_get_syssel_band(kal_uint8 band, kal_uint8 *gsm_band, kal_uint16 *umts_band)
{
    switch (band)
    {
        case 0:
        {
            /* GSM850/900/1800/1900, WCDMA850/1900/2100 */
            *gsm_band = 0x9a;
            *umts_band = 0x13;
            break;
        }
        case 1:
        {
            /* EURO: GSM900/1800, WCDMA2100 */
            *gsm_band = 0x0a;
            *umts_band = 0x01;
            break;
        }
        case 2:
        {
            /* NORTH AMERICA: GSM850/1900, WCDMA850/1900 */
            *gsm_band = 0x90;
            *umts_band = 0x12;
            break;
        }
        case 3:
        {
            /* GSM ONLY: GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            break;
        }
        case 4:
        {
            /* UMTS ONLY: WCDMA850/1900/2100 */
            *umts_band = 0x13;
            break;
        }
        case 5:
        {
            /* GSM850 */
            *gsm_band = 0x80;
            break;
        }
        case 6:
        {
            /* GSM900 */
            *gsm_band = 0x02;
            break;
        }
        case 7:
        {
            /* DCS1800 */
            *gsm_band = 0x08;
            break;
        }
        case 8:
        {
            /* PCS1900 */
            *gsm_band = 0x10;
            break;
        }
        case 9:
        {
            /* WCDMA850 */
            *umts_band = 0x10;
            break;
        }
        case 10:
        {
            /* WCDMA1900 */
            *umts_band = 0x02;
            break;
        }
        case 11:
        {
            /* WCDMA2100 */
            *umts_band = 0x01;
            break;
        }
        case 12:
        {
            /* WCDMA900 */
            *umts_band = 0x80;
            break;
        }
        case 13:
        {
            /* WCDMA900/2100 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x81;
            break;
        }
        case 14:
        {
            /* WCDMA2100 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x01;
            break;
        }
        case 15:
        {
            /* WCDMA850/1900 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x12;
            break;
        }
        case 16:
        {
            /* WCDMA1700/2100 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x0309;
            break;
        }
        case 17:
        {
            /* WCDMA900/1900 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x82;
            break;
        }
        case 18:
        {
            /* WCDMA850 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x10;
            break;
        }
        case 19:
        {
            /* WCDMA900/1900/2100/1700 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x038b;
            break;
        }
        case 20:
        {
            /* WCDMA850/2100 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x11;
            break;
        }
        case 21:
        {
            /* WCDMA850/2100/1700 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x0319;
            break;
        }
        case 22:
        {
            /* WCDMA900/1800/2100 GSM850/900/1800/1900 */
            *gsm_band = 0x9a;
            *umts_band = 0x85;
            break;
        }
        default:
        {
            *gsm_band = 0;
            *umts_band = 0;
        }
    }
}
#endif /* defined(__SYSSEL_SUPPORT__) */


/*****************************************************************************
 * FUNCTION
 *  l4c_copy_mini_log()
 * DESCRIPTION
 * this function is to copy mini log to tst
 * PARAMETERS
 *  phb_type         [IN]        the internal PHB type
 * RETURNS
 *  copy size 
 *****************************************************************************/
kal_uint32 l4c_copy_mini_log(char *dst_buf,kal_uint32 bytes)
{
#ifdef __MOD_TCM__
#if defined(__PS_DIALUP__) || defined(__INT_PDP_CONTEXT_ON__)
    kal_uint8 index=0;
#endif
#endif
    l4c_minilog_struct *mlg_ptr_g = (l4c_minilog_struct*) dst_buf;

    mlg_ptr_g->uart_port_value = RMMI_COMM_PTR->uart_port_value;
    #ifdef __GEMINI__
    mlg_ptr_g->dual_sim_mode_setting = L4C_COMM_PTR->dual_sim_mode_setting;
    #endif 
    mlg_ptr_g->sim_error_cause = L4C_PTR->sim_error_cause; 
    mlg_ptr_g->mmrr_ready_flag = L4C_PTR->mmrr_ready_flag;
    mlg_ptr_g->csm_state = L4C_PTR->csm_state;
    mlg_ptr_g->sub_modules_ready = L4C_PTR->sub_modules_ready;
    mlg_ptr_g->cfun_state = L4C_PTR->cfun_state;

    #ifdef __MOD_TCM__
    #if defined(__PS_DIALUP__)   
    for (index=0; index<MAX_EXT_PDP_CONTEXT+1; index++)
    {
        mlg_ptr_g->ps_dialup_port[index] = L4C_PTR->ps_dialup_port[index];
    }    
    #endif  /* __PS_DIALUP__ */    
    #if defined(__INT_PDP_CONTEXT_ON__)
    for (index=0; index<MAX_INT_PDP_CONTEXT; index++)
    {
        mlg_ptr_g->pdp_context_id[index] = L4C_PTR->pdp_context_id[index];
    }
    #endif /* __INT_PDP_CONTEXT_ON__ */
    #endif /* __MOD_TCM__ */
    
    mlg_ptr_g->enhanced_ecc_id = L4C_PTR->enhanced_ecc_id;
    mlg_ptr_g->auto_attach = l4crac_get_auto_attach(); 
    #ifdef __GEMINI_3G_SWITCH__ 
    mlg_ptr_g->cur_3g_capability = L4C_COMM_PTR->cur_3g_capability; 
    #endif 
    mlg_ptr_g->ps_uart_port = PS_UART_PORT; 
    mlg_ptr_g->ps_conf_test_mode = L4C_COMM_PTR->ps_conf_test_mode; 
    mlg_ptr_g->ps_conf_test_profile = L4C_COMM_PTR->ps_conf_test_profile;
    mlg_ptr_g->flags = smsal_ptr_g->flags; 
#ifdef __GEMINI__
    mlg_ptr_g->sim_status = check_sim_status((kal_uint8)(rmmi_current_mod_id - MOD_ATCI));
#else /* __GEMINI__ */ 
    mlg_ptr_g->sim_status = check_sim_status();
#endif /* __GEMINI__ */ 
    //mlg_ptr_g->mscap = csmcc_ptr_g->mscap; 

    return sizeof(l4c_minilog_struct);

}

/*****************************************************************************
 * FUNCTION
 *  rmmi_convert_reg_state_to_atci
 * DESCRIPTION
 *  
 * PARAMETERS
 *  old_state   [IN]    state in reg_state_enum
 *
 * RETURNS
 *  rmmi_reg_state_enum
 *****************************************************************************/
rmmi_reg_state_enum rmmi_convert_reg_state_to_atci(reg_state_enum old_state)
{
    rmmi_reg_state_enum ret_state;
    kal_uint8 imsi[17];
    kal_uint8 oper[7];
    kal_bool is_on_hplmn;
    
    if (old_state == REG_STATE_NOT_ACTIVE)
    {
        ret_state = RMMI_REG_STATE_NOT_REGISTERED;
    }
    else
    {
        ret_state = old_state;
        if ((old_state == REG_STATE_SEARCHING) && (L4C_PTR->sim_detected == KAL_FALSE))
        {
           ret_state = RMMI_REG_STATE_UNKNOWN; //MAUI_01480905 mtk02480, if no SIM, report unknow
        }
    }

    if (ret_state == RMMI_REG_STATE_REGISTERED)
    {
        l4c_smu_get_imsi_req(RMMI_SRC, (kal_uint8*) imsi);
        l4c_nw_get_current_oper_req(RMMI_SRC, (kal_uint8*) oper);
        l4c_nw_get_romaing_status_req(RMMI_SRC, &is_on_hplmn);

	    if(custom_is_home_plmn((kal_uint8*)oper,(kal_uint8*)&imsi[1], is_on_hplmn) == KAL_FALSE)
        {
            ret_state = RMMI_REG_STATE_ROAMING; //Registered, Roaming (07.07)
        }
    }

    return ret_state;
}


#if defined(__DUAL_TALK_MODEM_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  rmmi_wakeup_md_timeout_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_wakeup_md_timeout_hdlr(void)
{
    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_WAKEUP_TIMEOUT_HDLR, RMMI_WAKE_UP_MD);
    L1SM_SleepEnable(rmmi_aux_PDNhandle);
//    EINT_UnMask(WAKE_UP_EINT_NO);
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_wakeup_ap_timeout_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_wakeup_ap_timeout_hdlr(void)
{
    DCL_HANDLE gpio_handle = DclGPIO_Open(DCL_GPIO, gpio_dtk_wakeup_pin);

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_WAKEUP_TIMEOUT_HDLR, RMMI_WAKE_UP_AP);
    kal_brief_trace(TRACE_INFO, INFO_PULL_GPIO, GPIO_CMD_WRITE_HIGH);
    
    DclGPIO_Control(gpio_handle, GPIO_CMD_WRITE_HIGH, NULL);
    DclGPIO_Close(gpio_handle);
    RMMI_PTR->wake_up_ap = KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_start_wakeup_timer_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_start_wakeup_timer_hdlr(rmmi_wakeup_type_enum wake_up_type)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    kal_timer_func_ptr timer_func_ptr = NULL;
    kal_uint32 elapse = 0;
    
    kal_brief_trace(TRACE_INFO, INFO_WAKEUP, wake_up_type);

    if (wake_up_type == RMMI_WAKE_UP_MD)
    {
        timer_func_ptr = rmmi_wakeup_md_timeout_hdlr;
        elapse = 2 * KAL_TICKS_500_MSEC;
    }
    else //wake_up_type == RMMI_WAKE_UP_AP
    {
        timer_func_ptr = rmmi_wakeup_ap_timeout_hdlr;
        elapse = KAL_TICKS_500_MSEC;
    }
    
    evshed_set_event(l4c_ptr->event_scheduler_ptr,
                     (kal_timer_func_ptr) timer_func_ptr,
                     NULL,
                     elapse);
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_eint0_hdlr()
 * DESCRIPTION
 * this function is callback function for EINT0
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_eint0_hdlr(void)
{
    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_EINT0_HDLR_ENTRY);
    L1SM_SleepDisable(rmmi_aux_PDNhandle);

    /* let sleep mode invoke the callback function to unmask EINT0,
       but not to start a timer and unmask EINT0 by L4C itself
    */
    rmmi_start_wakeup_timer_hdlr(RMMI_WAKE_UP_MD);
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_sleep_mode_callback()
 * DESCRIPTION
 * this function is callback function for sleep mode
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_sleep_mode_callback(void)
{
    EINT_UnMask(WAKE_UP_EINT_NO);
}
/*****************************************************************************
 * FUNCTION
 *  rmmi_l1aud_spc_callback
 * DESCRIPTION
 *   This function is called by MED to execute L1Audio function and return CNF
 *   to L4C
 * PARAMETERS
 *  param1       [IN] command index
 *  param2       [IN] rmmi_l1audio_spc_param_struct, command information
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_l1aud_spc_callback(kal_uint32 param1, void* param2)
{
    rmmi_spc_param_union param_ptr;
    media_in_proc_call_cnf_struct *med_cnf_ptr = NULL;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_L1AUD_SPC_CALLBACK);
    med_cnf_ptr = (media_in_proc_call_cnf_struct*)construct_local_para(
            (kal_uint16)sizeof(media_in_proc_call_cnf_struct),
            TD_RESET);
    
    med_cnf_ptr->result = KAL_TRUE;
    switch (param1)
    {
        case (RMMI_CMD_ATESPEECH):
        {
            param_ptr.espeech_param = param2;
            
            if ((param_ptr.espeech_param)->speech_mode == 0)
            {
                Spc_Speech_Off();
            }
            else
            {
                Spc_Speech_On((param_ptr.espeech_param)->rat_mode);
            }
            break;
        }
        case (RMMI_CMD_ATESSTV):
        {
            param_ptr.esstv_param = param2;
            Spc_SetSidetoneVolume((param_ptr.esstv_param)->sidetone);
            break;
        }
        case (RMMI_CMD_ATEDTP):
        {
            param_ptr.edtp_param = param2;
            Spc_Default_Tone_Play((param_ptr.edtp_param)->tone_id);
            break;
        }
        case (RMMI_CMD_ATEDTS):
        {
            Spc_Default_Tone_Stop();
            break;
        }
        case (RMMI_CMD_ATESETDEV):
        {
            param_ptr.esetdev_param = param2;
            if ((param_ptr.esetdev_param)->esetdev_mode == 0)
            {
                Spc_SetInputSource((param_ptr.esetdev_param)->src_dev);
            }
            else
            {
                Spc_SetOutputDevice((param_ptr.esetdev_param)->src_dev);
            }
            break;
        }
        case (RMMI_CMD_ATESOV):
        {
            param_ptr.esov_param = param2;
            Spc_SetOutputVolume((param_ptr.esov_param)->volume, 
                                (param_ptr.esov_param)->gain_id);
            break;
        }
        case (RMMI_CMD_ATESMV):
        {
            param_ptr.esmv_param = param2;
            Spc_SetMicrophoneVolume((param_ptr.esmv_param)->mic_volume);
            break;
        }
        case (RMMI_CMD_ATESSMA):
        {
            param_ptr.essma_param = (rmmi_spc_essma_param_struct*)param2;
            Spc_SetSpeechMode_Adaptation((param_ptr.essma_param)->mode);
            break;
        }
        default:
            med_cnf_ptr->result = KAL_FALSE;
            break;
    }

    /*  send CNF message back to L4C
    */
    msg_send6(MOD_MED, 
              MOD_L4C, /* these AT commands are only handled by L4C */
              L4_AUD_SAP, 
              MSG_ID_MEDIA_IN_PROC_CALL_CNF, 
              (local_para_struct *) med_cnf_ptr, 
              NULL);

    /* free pointer here 
       which is allocated in l4c_med_in_proc_call_req
    */
    if (param2 != NULL)
    {
        free_ctrl_buffer(param2);
    }
}
#endif /* __DUAL_TALK_MODEM_SUPPORT__ */


#ifdef __ATCI_QUEUE_AT__
/*****************************************************************************
 * FUNCTION
 *  rmmi_is_action_conducting
 * DESCRIPTION
 *   This function is used to check if currently there is action doing 
 *   to L4C
 * PARAMETERS
 *  param1       [IN] command index
 *  param2       [IN] 
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool rmmi_is_action_conducting(kal_uint8 src_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
if ((l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION && l4c_ptr->cc_current_action[src_id] != POWERON_EXE
              && l4c_ptr->cc_current_action[src_id] != ATD_EXE && l4c_ptr->cc_current_action[src_id] != ATD_ECC
#ifdef __SAT__
              && l4c_ptr->cc_current_action[src_id] != SAT_ATD_EXE
#endif 
#ifndef __MMI_FMI__ //mtk01616_090320: allow to end call whe ata is still processing 
              && l4c_ptr->cc_current_action[src_id] != ATA_EXE
#endif 
              && l4c_ptr->cc_current_action[src_id] != ATD_ECC_CHANGE_RAT
              && l4c_ptr->cc_current_action[src_id] != ATD_ECC_CHANGE_RAT_ABORT
             ) || (l4c_ptr->ss_user == src_id && l4c_ptr->ss_current_action != L4C_NO_ACTION && l4c_ptr->ss_current_action != USSR_FAC_IND && l4c_ptr->ss_current_action != USSN_FAC_IND
#ifndef __MMI_FMI__ //for modem load AT+CUSD will return OK first
               && l4c_ptr->ss_current_action != CUSD_EXE
#endif
#if !defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__)//mtk01616_081201
               && l4c_ptr->ss_current_action != PARSE_SS_EXE
#endif
             ) 
               || (l4c_ptr->sms_current_action[src_id]!= L4C_NO_ACTION) 
               || (l4c_ptr->rac_user == src_id 
               	&& l4c_ptr->rac_current_action != L4C_NO_ACTION
               	&& l4c_ptr->rac_current_action != SET_GPRS_CON_TYPE               	
               	&& l4c_ptr->rac_current_action != PWRON_SET_RAT_MODE
               	&& l4c_ptr->rac_current_action != PWRON_ATTACH	// [MAUI_01401889], mtk02480
               	&& l4c_ptr->rac_current_action != RFON_ATTACH		
             	&& l4c_ptr->rac_current_action != SET_RAT_MODE_ATTACH)
               || (l4c_ptr->smu_user == src_id 
               	&& l4c_ptr->smu_current_action != L4C_NO_ACTION)  
#ifdef __MOD_TCM__               	
               || (l4c_ptr->tcm_user == src_id 
               	&& l4c_ptr->tcm_current_action != L4C_NO_ACTION) 
#endif //mtk02285, 201003, 6251_ram               	
               || (l4c_ptr->phb_user == src_id 
               	&& l4c_ptr->phb_current_action != L4C_NO_ACTION) 
               || (l4c_ptr->eq_user == src_id
               	&& l4c_ptr->eq_current_action != L4C_NO_ACTION)
#if defined(__MMI_FMI__)
               || (l4c_ptr->route_thru_lmmi_user == src_id && l4c_ptr->route_thru_lmmi == KAL_TRUE)
#endif             
           )    
    {   
	    if (L4C_PTR->rac_user == src_id && L4C_PTR->rac_current_action == COPS_TEST)
        {   // Allow abort ongoing PLMN list action
            return KAL_FALSE; 
        }
        else if (  (l4c_ptr->sms_current_action[src_id] == CMGS_PDU_EXE)
                 ||(l4c_ptr->sms_current_action[SAT_SRC] == SAT_CMGS_EXE)
                 ||(l4c_ptr->sms_current_action[src_id] == CMGS_EXE) ) 
        {
            return KAL_FALSE; 
        }
        else
        {
            kal_brief_trace(TRACE_WARNING, WARNING_RMMI_CMD_NOT_ALLOWED, RMMI_ERR_ACTION_ALREADY);
            return KAL_TRUE; 
        }
    }
    else 
    {
        return KAL_FALSE; 
    }
}
/*****************************************************************************
 * FUNCTION
 *  rmmi_need_clear_route_lmmi
 * DESCRIPTION
 *   This function is used to check if we need to clear rmmi route_throught_lmmi flag 
 *   to L4C
 * PARAMETERS
 *  param1       [IN] command index
 *  param2       [IN] 
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool rmmi_need_clear_route_lmmi()
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; 
    
    if ((l4c_ptr->tcm_user == rmmi_ptr->current_src) &&
        (l4c_ptr->tcm_current_action == CGACT_EXE ||
        l4c_ptr->tcm_current_action == CGACT_TEST))
    {
        return KAL_FALSE;
    }
    else
    {
        return KAL_TRUE; 
    }
}

#endif 

