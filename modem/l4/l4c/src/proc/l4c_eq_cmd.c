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
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (kal_uint8 src_id, C){} 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * L4C_EQ_CMD.C
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_EQ_CMD_C
#ifdef __MOD_UEM__

#include <string.h>
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "stdio.h"
#include "kal_trace.h"


#ifdef __MOD_SMU__
#include "ps2sim_struct.h"
#endif /* __MOD_SMU__ */ 

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
#include "dcl.h"
#include "l4_trc.h"

#include "nvram_data_items.h"
#include "nvram_struct.h"

#include "mcd_l3_inc_struct.h"

#ifdef __MOD_RAC__
#include "l4c2rac_struct.h"
#include "l4crac_enums.h" // mtk02285, 20090309, MAUI_01640548
#endif 
#ifdef __MOD_SMU__
#include "l4c2smu_struct.h"
#endif 
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_enum.h"     
#endif /* __MOD_SMSAL__ */ 
#include "device.h"
#include "l4c2uem_struct.h"
#include "l4c_common_enum.h"
#include "l4c2csm_cc_struct.h"

#include "uem_proc_cmd.h"
#include "med_struct.h" /* add for brain audio play by string */

#include "l4c_utility.h"
#include "keypad_sw.h"
#include "lmmi_ind.h"
#include "l4c_eq_msg.h"
#include "rmmi_utility.h"

#include "kbd_table.h"
#include "rmmi_parser.h"

#include "rmmi_rspfmttr.h"
#include "rmmi_rsp.h"
#include "rmmi_sio.h"
#include "lmmi_rsp.h"
#include "l4crac_func.h"

#include "rmmi_msghdlr.h"

#if defined(__MMI_FMI__)
#include "fs_type.h"
#include "fs_func.h"
#include "fs_errcode.h"
#endif
#include "nvram_enums.h"

#ifdef __MTK_TARGET__
#include "drvpdn.h"
#endif
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "wchar.h"

#include "l4_msgid.h"
#include "sim_public_msgid.h"
#include "nvram_msgid.h"
#ifdef __IRDA_SUPPORT__
#include "ircomm_msgid.h"
#endif
#include "ppp_msgid.h"

#if defined(__AT_ENFC_SUPPORT__) || defined(__NFC_SUPPORT__)
/*Add header files for NFC related feature*/
#include "mtk_nfc_ext_msg.h"
#endif


#include "rmmi_root.h"
#include "ps_public_utility.h"
#include "custom_l4_utility.h"
#include "mph_cs_msg.h"

#include "syscomp_config.h"
#include "task_config.h"      	/* Task creation */
#if defined(__UMTS_FDD_MODE__)
#include "ul1_cnst.h"
#include "ul1_def.h"
#include "ul1_struct.h" /* For 3G RF TX POWER test */
#endif

#include "md_sap.h"
#include "ul1_msgid.h"
#include "l1_ext_msgid.h"
#include "nvram_interface.h"

#ifdef __VSIM__
#include "ps_em_enum.h"
#endif

extern UART_PORT TST_PORT;
extern UART_PORT TST_PORT_L1;


extern kal_uint16 l4crac_get_rac_prefer_nvram_ef(void);
extern kal_uint32 uem_get_vbat_percentage(void);
extern void l4cuem_call_status_req_ind(kal_uint8 ind_type);
extern void l4c_general_rrsp(kal_bool result, kal_uint16 cause);

extern kal_uint8 custom_allow_at_write_imei(void);

extern UART_PORT PS_UART_PORT;
extern UART_PORT TST_PORT;
extern UART_baudrate PS_BAUDRATE;
extern UART_baudrate TST_BAUDRATE;
extern kal_uint8 rmmi_aux_PDNhandle;

extern void tst_change_port(UART_PORT new_port);

extern void rmmi_result_code_fmttr(kal_uint8 rsp_type, kal_uint16 cause);
kbd_buffer_struct l4c_kbd_buffer;
kal_bool l4c_send_kbdilm = KAL_TRUE;

extern void l4cphb_sync_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);   

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_gpio_detect_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ext_gpio_device     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_gpio_detect_res_req(kal_uint8 ext_gpio_device)
{
    l4cuem_gpio_detect_res_req(ext_gpio_device);
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_full_para_audio_play_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  sound_id        [IN]        
 *  style           [IN]        
 *  identifier      [IN]  
 *  volume        [IN]
 *  out_path     [IN]
 * RETURNS
 *  
 *****************************************************************************/

kal_bool l4c_eq_full_para_audio_play_req(kal_uint8 src_id, kal_uint8 sound_id, kal_uint8 style, kal_uint16 identifier, kal_uint8 volume, kal_uint8 out_path)
{

    l4cuem_audio_play_req(sound_id, style, identifier, volume, out_path);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_audio_play_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  sound_id        [IN]        
 *  style           [IN]        
 *  identifier      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_audio_play_req(kal_uint8 src_id, kal_uint8 sound_id, kal_uint8 style, kal_uint16 identifier)
{
    /*
     * if (is_cmd_conflict(src_id, CRMP_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */
    
    /* Fill the old interface missing parameter with default setting */
    
    
    return l4c_eq_full_para_audio_play_req(src_id,
                                           sound_id,
                                           style,
                                           identifier,
                                           3,
                                           (kal_uint8)AUDIO_DEVICE_SPEAKER2);
    
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_audio_stop_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  sound_id        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_audio_stop_req(kal_uint8 src_id, kal_uint8 sound_id)
{
    l4cuem_audio_stop_req(sound_id);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_audio_play_by_name_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_name       [?]         
 *  style           [IN]        
 *  identifier      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_audio_play_by_name_req(kal_uint8 src_id, kal_wchar *file_name, kal_uint8 style, kal_uint16 identifier)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 
    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_audio_stop_by_name_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_name       [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_audio_stop_by_name_req(kal_uint8 src_id, kal_wchar *file_name)
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
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_audio_play_by_string_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  melody          [?]         
 *  len             [IN]        
 *  format          [IN]        
 *  play_style      [IN]        
 *  identifier      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_audio_play_by_string_req(
            kal_uint8 src_id,
            kal_uint8 *melody,
            kal_uint32 len,
            kal_uint8 format,
            kal_uint8 play_style,
            kal_uint16 identifier,
            kal_uint32 start_offset,
            kal_uint32 end_offset,
            kal_uint8 volume,
    	    kal_uint8 output_path,
    	    kal_uint8 blocking) 
{
    media_aud_play_by_string_req_struct *param_ptr;

    //eq_review : can be remove???
    if (is_eq_cmd_conflict(src_id, AUDI_STRING_PLAY) == KAL_TRUE)
    {
        return KAL_FALSE;
    }
    l4c_set_user_action(L4C_EQ, src_id, AUDI_STRING_PLAY); //reset in audio_play_by_string_cnf_hdlr

    param_ptr = (media_aud_play_by_string_req_struct*)
        construct_local_para((kal_uint16) sizeof(media_aud_play_by_string_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->melody = melody;
    param_ptr->len = len;
    param_ptr->format = format;
    param_ptr->play_style = play_style;
    param_ptr->identifier = identifier;
    param_ptr->start_offset = start_offset;
    param_ptr->end_offset = end_offset;
    param_ptr->volume = volume;
    param_ptr->output_path = output_path;
    param_ptr->blocking = blocking;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_AUDIO_PLAY_BY_STRING_REQ, param_ptr, NULL);

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_audio_stop_by_string_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_audio_stop_by_string_req(kal_uint8 src_id)
{
    media_aud_stop_by_string_req_struct *param_ptr;

    if (is_eq_cmd_conflict(src_id, AUDI_STRING_STOP) == KAL_TRUE)
    {
        return KAL_FALSE;
    }
    l4c_set_user_action(L4C_EQ, src_id, AUDI_STRING_STOP); //reset in audio_stop_by_string_cnf_hdlr

    param_ptr = (media_aud_stop_by_string_req_struct*)
        construct_local_para((kal_uint16) sizeof(media_aud_stop_by_string_req_struct), TD_RESET);

    param_ptr->src_id = src_id;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_AUDIO_STOP_BY_STRING_REQ, param_ptr, NULL);

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_demo_ext_midi_ring_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  imelody         [?]         
 *  len             [IN]        
 *  play_style      [IN]        
 *  identifier      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_demo_ext_midi_ring_req(
            kal_uint8 src_id,
            kal_uint8 *imelody,
            kal_uint16 len,
            kal_uint8 play_style,
            kal_uint16 identifier)
{
    l4cuem_demo_ext_imelody_ring_req(imelody, len, play_style, identifier);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_mms_folder_status_output_req
 * DESCRIPTION
 *  reponse for +EMMSFS
 * PARAMETERS
 *  result                  [IN]        
 *  numOfMsg                [IN]        
 *  numOfUnreadMsg          [IN]        
 *  mmsHomeDirectory        [?]         
 *  infoFilePath            [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mms_folder_status_output_req(
        kal_uint8 result,
        kal_uint32 numOfMsg,
        kal_uint32 numOfUnreadMsg,
        kal_uint8 *mmsHomeDirectory,
        kal_uint8 *infoFilePath)
{
#ifdef MMS_SUPPORT
#ifdef __DT_SUPPORT__ // dependent feature with DT_SUPPORT
    kal_uint16 string_length;   /* string length variable */
    kal_uint8 buffer[MAX_DATA_QUEUE_LENGTH];
    kal_uint8 home_dir[200];
    kal_uint8 file_path[200];

    //    RMMI_PTR->PCsuite_route_through_mmi = KAL_FALSE;
    if (RMMI_UART_GetOwnerID(PS_UART_PORT) == MOD_DT)
    {
        //mtk01616_071002: if UART owner is DT , it means previous EMMSFS is already ignored by PC suite. So we drop the result code here
        kal_trace(TRACE_WARNING, WARNING_L4C_MMS_FOLDER_STATUS_OUTPUT_REQ_DROP_RESULT_CODE);
        return;
    }

    if (result == 0)    // MMS_RESULT_OK ==0 
    {
        rmmi_byte_order_reverse(mmsHomeDirectory, 100);
        rmmi_print_ucs2(mmsHomeDirectory, home_dir);
        rmmi_byte_order_reverse(infoFilePath, 100);
        rmmi_print_ucs2(infoFilePath, file_path);
        kal_sprintf(
            (char*)buffer,
            "+EMMSFS: %d, %u, %u, \"%s\", \"%s\"",
            result,
            numOfMsg,
            numOfUnreadMsg,
            home_dir,
            file_path);
        string_length = strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
#endif 
#endif /* MMS_SUPPORT */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_mms_upload_msg_output_req
 * DESCRIPTION
 *  Response of +EMMSEXE=1 (upload mms)
 * PARAMETERS
 *  result      [IN]        
 *  msgId       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mms_upload_msg_output_req(kal_uint8 result, kal_uint32 msgId, kal_uint8 storage)
{
#ifdef MMS_SUPPORT
#ifdef __DT_SUPPORT__ // dependent feature with DT_SUPPORT
    kal_uint16 string_length;   /* string length variable */
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];

    if (RMMI_UART_GetOwnerID(PS_UART_PORT) == MOD_DT)
    {
        //mtk01616_071002: if UART owner is DT , it means previous EMMSEXE is already ignored by PC suite. So we drop the result code here
        kal_trace(TRACE_WARNING, WARNING_L4C_MMS_UPLOAD_MSG_OUTPUT_REQ_DROP_RESULT_CODE);
        return;
    }

    if (result == 0)    // MMS_RESULT_OK ==0 
    {
        kal_sprintf((char*)buffer, "+EMMSEXE: %d, %u, %d", result, msgId, storage);
        string_length = strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
#endif 
#endif /* MMS_SUPPORT */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_mms_delete_msg_output_req
 * DESCRIPTION
 *  Response for +EMMSEXE= 0 (delete MMS)
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mms_delete_msg_output_req(kal_uint8 result)
{
#ifdef MMS_SUPPORT
#ifdef __DT_SUPPORT__ // dependent feature with DT_SUPPORT

    kal_uint16 string_length;   /* string length variable */
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];

    if (RMMI_UART_GetOwnerID(PS_UART_PORT) == MOD_DT)
    {
        //mtk01616_071002: if UART owner is DT , it means previous EMMSEXE is already ignored by PC suite. So we drop the result code here
        kal_trace(TRACE_WARNING, WARNING_L4C_MMS_DELETE_MSG_REQ_DROP_RESULT_CODE);
        return;
    }

    if (result == 0)    // MMS_RESULT_OK ==0 
    {
        kal_sprintf((char*)buffer, "+EMMSEXE: %d", result);
        string_length = strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
#endif 
#endif /* MMS_SUPPORT */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_mms_read_msg_path_res_req
 * DESCRIPTION
 *  Response of +EMMSEXE=2 (get mms file path)
 * PARAMETERS
 *  result      [IN]        
 *  msgId       [IN]        
 *  path        [IN]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mms_read_msg_path_res_req(kal_uint8 result, kal_uint32 msgId,kal_uint8 *path)
{
#ifdef MMS_SUPPORT
#ifdef __DT_SUPPORT__ // dependent feature with DT_SUPPORT
    kal_uint8 buffer[MAX_DATA_QUEUE_LENGTH];
    kal_uint8 string_length = 0;
    kal_uint8 output_file_path[200];

    if (RMMI_UART_GetOwnerID(PS_UART_PORT) == MOD_DT)
    {
        //mtk01616_071002: if UART owner is DT , it means previous EMMSEXE is already ignored by PC suite. So we drop the result code here
        kal_trace(TRACE_WARNING, WARNING_L4C_MMS_READ_MSG_PATH_REQ_DROP_RESULT_CODE);
        return;
    }

    if (result == 0)    // MMC_RESULT_OK ==0 
    {
        rmmi_byte_order_reverse(path, 100);
        rmmi_print_ucs2(path, output_file_path);
        kal_sprintf(
                (kal_char*) buffer,
                "+EMMSEXE: %d, %u,\"%s\"",
                result,
                msgId,
                output_file_path);
        
        string_length = strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
#endif	
#endif /* MMS_SUPPORT */ 
}

/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_java_local_install_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  error_code      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mmi_java_local_install_res_req(kal_uint32 error_code)
{
#ifdef __J2ME__
#ifdef __DT_SUPPORT__ // dependent feature with DT_SUPPORT
    if (RMMI_UART_GetOwnerID(PS_UART_PORT) == MOD_DT)
    {
        //mtk01616_071002: if UART owner is DT , it means previous EJAVA is already ignored by PC suite. So we drop the result code here
        kal_trace(TRACE_WARNING, WARNING_L4C_MMI_JAVA_LOCAL_INSTALL_RES_REQ_DROP_RESULT_CODE);
        return;
    }

    if (error_code == 0)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, (kal_uint16) (error_code + 256));
    }
#endif /* __DT_SUPPORT__ */ 
#endif /* __J2ME__ */ 
}


#if defined(__MMI_FMI__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_screen_touch_res_req
 * DESCRIPTION
 *  This function handle Screen touch event(trigger by AT) response from MMI
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/

void l4c_eq_screen_touch_res_req(kal_int8 result)
{
#if defined(PLUTO_MMI) && defined(TOUCH_PANEL_SUPPORT)
    l4c_context_struct *l4c_ptr = L4C_PTR;

    RMMI_PTR->current_src = l4c_ptr->route_thru_lmmi_user;
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;
    l4c_ptr->route_thru_lmmi = KAL_FALSE; 
    
    if(result == 0)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        kal_trace(TRACE_WARNING, WARNING_EQ_SRNTCH_FAILED, result);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
#endif
    
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_scrnorient_res_req
 * DESCRIPTION
 *  This function handle Screen orientation query event(trigger by AT) response from MMI
 * PARAMETERS
 *  result      [IN]    
 *  mode      [IN]   0: query mode 1: set mode
 * RETURNS
 *  void
 *****************************************************************************/
 void l4c_eq_scrnorient_res_req(kal_int8 result, kal_uint8 mode)
{
#if defined(PLUTO_MMI)
    kal_uint8 buffer[12];
    kal_uint32 string_length;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    RMMI_PTR->current_src = l4c_ptr->route_thru_lmmi_user;
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;
    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    if((result >= 0) && (mode == 0))
    {
        string_length = kal_sprintf((kal_char*)buffer,"+CSO: %d", result);
        //string_length = strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else if((result == 0) && (mode == 1))
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        kal_trace(TRACE_WARNING, WARNING_EQ_SCRN_PARA_GET_FAILED, result);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
#endif
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_scrnsize_query_res_req
 * DESCRIPTION
 *  This function handle Screen size query event(trigger by AT) response from MMI
 * PARAMETERS
 *  result      [IN]
 *  max_x     [IN]
 *  max_y     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
 void l4c_eq_scrnsize_query_res_req(kal_int8 result, kal_uint16 max_x, kal_uint16 max_y)
{
#if defined(PLUTO_MMI)
    kal_uint8 buffer[20];
    kal_uint32 string_length;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    RMMI_PTR->current_src = l4c_ptr->route_thru_lmmi_user;
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;
    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    if(result == 0)/* result = 0 stand for command successfully run */
    {
        string_length = kal_sprintf((kal_char*)buffer,"+CSS: %d,%d", max_x, max_y);
        //string_length = strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        kal_trace(TRACE_WARNING, WARNING_EQ_SCRN_PARA_GET_FAILED, result);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
#endif
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_screen_shot_res_req
 * DESCRIPTION
 *  This function handle screen shot request(trigger by AT) response from MMI
 * PARAMETERS
 *  result      [IN]
 *  file_path  [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_screen_shot_res_req(kal_int8 result, kal_uint8 op, kal_wchar *file_path)
{
#if defined(PLUTO_MMI)
    FS_HANDLE file_handle;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;
    l4c_ptr->route_thru_lmmi = KAL_FALSE;

    //kal_prompt_trace(MOD_L4C, "screen shot res req entry %d", result);//this will be removed when checking in
    if((result == 0) && (op < 4))
    {
        if(op < 2)
        {
            /* op = 0, 1 for Screen shot */
            file_handle = FS_Open((WCHAR*)file_path, FS_READ_ONLY|FS_OPEN_NO_DIR);
            if(file_handle < FS_NO_ERROR)
            {
                /* The 3rd parameter in this trace message explanation:
                 * 1   FS_Open
                 * 2   FS_Read
                 * 3   FS_Close
                 */
                kal_brief_trace(TRACE_WARNING, WARNING_L4C_EQ_FS_RETURN_ERROR, 1, file_handle);
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
                return;
            }
            else
            {
                rmmi_ptr->screenshot_fd = file_handle;
                rmmi_ptr->screenshot_index = 0;
                rmmi_ptr->screenshot_pending = KAL_FALSE;
                l4c_eq_screen_shot_output();
            }
        }
        else
        {
            /* op = 2, 3 for MTK string check tool */
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        }

    }
    else
    {
        //return error here...
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
#endif
    return;
}
#endif /* defined(__MMI_FMI__) */


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_at_alarm_general_res_req
 * DESCRIPTION
 *  Response for +CALD
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_at_alarm_general_res_req(kal_bool result)
{
#ifdef __MMI_FMI__
#if !defined(__SLIM_AT__)
    l4c_context_struct *l4c_ptr = L4C_PTR;

    RMMI_PTR->current_src = l4c_ptr->route_thru_lmmi_user; 
    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    l4c_ptr->route_thru_lmmi = KAL_FALSE; 
#endif /* !(defined(__SLIM_AT__) */ 
#endif /* __MMI_FMI__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_at_alarm_query_res_req
 * DESCRIPTION
 *  Response for +CALA? (read command)
 * PARAMETERS
 *  totalAlarm      [IN]        
 *  activeAlarm     [IN]        
 *  alarmList       [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_at_alarm_query_res_req(kal_uint8 totalAlarm, kal_uint8 activeAlarm, mmi_at_alarm_info_struct *alarmList)
{
#ifdef __MMI_FMI__
#if !defined(__SLIM_AT__)
    kal_uint8 date_mode, time_mode;
    kal_uint8 i, k;
    kal_uint8 recurr_str[15] = "";
    kal_uint8 recurr_bit;
    kal_uint8 temp[3];
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    kal_uint8 time[25];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    

    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;
    if (rmmi_ptr->cmd_mode == RMMI_TEST_MODE)
    {
        if (rmmi_ptr->action_cmd == RMMI_CMD_ATCALA)
        {
            kal_sprintf((char*)buffer, "+CALA: (0-%u), (), 0, 13", (totalAlarm - 1));
            string_length = strlen((char*)buffer);
        }
        else
        {
            kal_sprintf((char*)buffer, "+CALD: (0-%u)", (totalAlarm - 1));
            string_length = strlen((char*)buffer);
        }
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }
    else
    {
        if (rmmi_ptr->date_aux_mode == 2)
        {
            date_mode = DATE_AUX_YYYY_MM_DD;
        }
        else
        {
            date_mode = DATE_AUX_YY_MM_DD;
        }
        time_mode = TIME_HH_MM_24;

        for (i = 0; i < activeAlarm; i++)
        {
            recurr_str[0] = '\0';   /* clean recurr_str to "" */
            if (alarmList[i].recurr != 0)
            {
                for (k = 1; k <= 7; k++)
                {
                    recurr_bit = (alarmList[i].recurr & (0x01 << (k % 7)));
                    if (recurr_bit != 0)        //This day the alarm is on.
                    {
                        kal_sprintf((kal_char*) temp, "%d,", k);
                        strcat((char*)recurr_str, (char*)temp);
                    }
                }
                recurr_str[strlen((char*)recurr_str) - 1] = '\0';      //remove extra comma ','
                alarmList[i].date_time.rtc_year = 0;
                alarmList[i].date_time.rtc_mon = 0;
                alarmList[i].date_time.rtc_day = 0;
            }
            else
            {
                recurr_str[0] = '\0';
            }

            /* transform rtc time back to string */
            rtc_to_string_format((kal_uint8*) time, date_mode, time_mode, &(alarmList[i].date_time));
            rmmi_ptr->arg_list[0] = (void*)time;
            rmmi_ptr->arg_list[1] = (void*)&alarmList[i].alarm_index;
            rmmi_ptr->arg_list[2] = (void*)&recurr_str;
            string_length = rmmi_fast_string_print(
                                buffer,
                                (kal_uint8*) "+CALA: \"%s\", %d, , , \"%s\"",
                                rmmi_ptr->arg_list,
                                3 /* 6 */ );
            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        }
    }
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    l4c_ptr->route_thru_lmmi = KAL_FALSE;	
    if (alarmList != NULL)
    {
        free_ctrl_buffer(alarmList);
    }
    return;
#endif /* !(defined(__SLIM_AT__) */ 
#endif /* __MMI_FMI__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_vibrator_mode_req
 * DESCRIPTION
 *  Response for +CVIB= (set command)
 *  send REQ_IND to MMI, ask MMI to do it.
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_set_vibrator_mode_req(kal_uint8 src_id, kal_uint8 mode)
{
    //   l4cuem_set_profile_req_struct *param_ptr;

    if (src_id >= RMMI_SRC)
    {
        if (is_eq_cmd_conflict(src_id, CVIB_SET) == KAL_TRUE)
        {
            return KAL_FALSE;
        }
        l4c_eq_set_vibrator_mode_req_ind(mode); //MMI will write NVRAM directly
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_silent_mode_req
 * DESCRIPTION
 *  for +CSIL= (set command) from AT
 *  send REQ_IND to MMI, ask MMI to do it.
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_set_silent_mode_req(kal_uint8 src_id, kal_bool mode)
{

    if (src_id >= RMMI_SRC)
    {
        if (is_eq_cmd_conflict(src_id, CSIL_SET) == KAL_TRUE)
        {
            return KAL_FALSE;
        }

        l4c_eq_set_silent_mode_req_ind(mode); //MMI will write NVRAM directly
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_language_req
 * DESCRIPTION
 *  for +CLAN= (set command) from AT
 *  send REQ_IND to MMI, ask MMI to do it.
 * PARAMETERS
 *  src_id          [IN]        
 *  lang_code       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_set_language_req(kal_uint8 src_id, kal_uint8 lang_code)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    if (src_id >= RMMI_SRC)
    {
        if (is_eq_cmd_conflict(src_id, CLAN_SET) == KAL_TRUE)
        {
            return KAL_FALSE;
        }
        /* send IND to ask MMI set language */
        l4c_eq_set_language_req_ind(lang_code); //MMI will send SET_LANGUAGE_REQ after read/write NVRAM
        l4c_ptr->route_thru_lmmi = KAL_TRUE;
        l4c_ptr->route_thru_lmmi_user = src_id; 		
        return KAL_TRUE;
    }
    else
    {
        /* This is for AT+CLAE : language event reporting */
        kal_bool result;
        kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
        kal_uint16 string_length;
        kal_uint8 language[6];

        //L4C_PTR->route_thru_lmmi = KAL_FALSE ;
        result = check_language_name(lang_code, language);

        if (l4c_ptr->route_thru_lmmi == KAL_TRUE)       //mtk00924_060208:only giving result code if request is from AT
        {
            rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;        
            if (result == KAL_FALSE || lang_code == MMI_PS_AT_LANG_UNKWN)       //MMI_PS_AT_LANG_UNKWN will be return if  language we want to set was not supported
            {
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
                return KAL_FALSE;
            }
            else
            {
                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            }
            l4c_ptr->route_thru_lmmi = KAL_FALSE;
        }

        if (rmmi_ptr->clae_mode == 1)
        {	
	        kal_uint8 temp_src;                           
	        temp_src = rmmi_ptr->current_src;  			 
            rmmi_ptr->current_src = RMMI_UNSOLICITED;  
            rmmi_ptr->arg_list[0] = (void*)language;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CLAV: \"%s\"", rmmi_ptr->arg_list, 1);
            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
	        rmmi_ptr->current_src = temp_src;   			
        }
    }
    return KAL_TRUE;
}


#if defined(__AT_CSGT_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_greeting_text_req
 * DESCRIPTION
 *  Response for +CSDF and +CSTF  (set command)
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 *  dcs         [IN]        
 *  text        [?]         
 *  length      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_set_greeting_text_req(
            kal_uint8 src_id,
            kal_bool mode,
            kal_uint8 dcs,
            kal_uint8 text[UEM_GREETING_LEN],
            kal_uint8 length)
{
    if (src_id >= RMMI_SRC)
    {
        #ifdef __MMI_FMI__ 
            l4c_eq_set_greeting_text_req_ind(mode, dcs, text, length);
	    L4C_PTR->route_thru_lmmi = KAL_TRUE;
            L4C_PTR->route_thru_lmmi_user = src_id;	
	#endif
    }
    return KAL_TRUE;
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_date_time_format_req
 * DESCRIPTION
 *  for +CSDF, +CSTF  (set command) from AT
 *  send REQ_IND to MMI, ask MMI to do it.
 * PARAMETERS
 *  src_id          [IN]        
 *  is_date_set     [IN]        
 *  mode            [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_set_date_time_format_req(kal_uint8 src_id, kal_bool is_date_set, kal_uint8 mode)
{
    if (src_id >= RMMI_SRC)
    {
        //mtk01616_070601: CSDF_SET is not used now
        l4c_eq_set_date_time_format_req_ind(is_date_set, mode);
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_query_vibrator_mode_res_req
 * DESCRIPTION
 *  Response for +CVIB? (read command)
 * PARAMETERS
 *  mode        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_query_vibrator_mode_res_req(kal_bool mode)
{
#if !defined(__SLIM_AT__)

    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user; 
    rmmi_ptr->arg_list[0] = (void*)&mode;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CVIB: %d", rmmi_ptr->arg_list, 1);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    l4c_ptr->route_thru_lmmi = KAL_FALSE;	 
    return;
#endif /* !(defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_query_silent_mode_res_req
 * DESCRIPTION
 *  Response for +CSIL? (read command)
 * PARAMETERS
 *  mode        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_query_silent_mode_res_req(kal_bool mode)
{
#if !defined(__SLIM_AT__)
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user; 
    rmmi_ptr->arg_list[0] = (void*)&mode;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CSIL: %d", rmmi_ptr->arg_list, 1);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    l4c_ptr->route_thru_lmmi = KAL_FALSE;	 
    return;
#endif /* !(defined(__SLIM_AT__) */  
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_query_greeting_text_res_req
 * DESCRIPTION
 *  Response for +CSGT? (read command)
 * PARAMETERS
 *  mode        [IN]        
 *  dcs         [IN]        
 *  text        [?]         
 *  length      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_query_greeting_text_res_req(kal_bool mode, kal_uint8 dcs, kal_uint8 *text, kal_uint8 length)
{
#if !defined(__SLIM_AT__)

    kal_uint8 buffer[UEM_MAX_GREETING_LEN * 5];
    kal_uint8 string[UEM_MAX_GREETING_LEN * 4 + 4];
    kal_uint16 string_length;
    kal_wchar ucs2_value[UEM_MAX_GREETING_LEN];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;
    if (dcs == L4_UCS2)
    {
        switch (rmmi_ptr->char_set)
        {
            case RMMI_CHSET_UCS2:
                rmmi_byte_order_reverse(text, UEM_MAX_GREETING_LEN * 2 + 2);
                rmmi_print_ucs2(text, string);
                break;
            case RMMI_CHSET_IRA:
            case RMMI_CHSET_GSM:
            default:
            {
                ucs2_to_ascii((kal_wchar*) text, (kal_uint8*) string);
                break;
            }
        }
    }
    else if (dcs == L4_ASCII)
    {
        switch (rmmi_ptr->char_set)
        {
            case RMMI_CHSET_UCS2:
                ascii_to_ucs2(text, ucs2_value);
                rmmi_byte_order_reverse((kal_uint8*) ucs2_value, (kal_uint16) (strlen((char*)text) * 2));
                rmmi_print_ucs2((kal_uint8*) ucs2_value, string);
                break;
            case RMMI_CHSET_IRA:
            case RMMI_CHSET_GSM:
            default:
                strcpy((char*)string, (char*)text);
                break;
        }
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
        return;
    }

    rmmi_ptr->arg_list[0] = (void*)string;
    rmmi_ptr->arg_list[1] = (void*)&mode;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CSGT: \"%s\", %d", rmmi_ptr->arg_list, 2);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    l4c_ptr->route_thru_lmmi = KAL_FALSE;	
    return;
#endif /* !(defined(__SLIM_AT__) */  
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_query_language_res_req
 * DESCRIPTION
 *  Response for +CLAN? (read command)
 * PARAMETERS
 *  lang_code       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_query_language_res_req(kal_uint8 lang_code)
{
#if !defined(__SLIM_AT__)

    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 lang_name[6];
    kal_bool result;
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user; 
    result = check_language_name(lang_code, lang_name);
    if (result == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    else
    {
        rmmi_ptr->arg_list[0] = (void*)lang_name;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CLAN: \"%s\"", rmmi_ptr->arg_list, 1);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    l4c_ptr->route_thru_lmmi = KAL_FALSE;	 
    return;
#endif /* !(defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_query_datetime_format_res_req
 * DESCRIPTION
 *  Response for +CSDF? and +CSTF?  (read command)
 * PARAMETERS
 *  is_date     [IN]        
 *  mode        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_query_datetime_format_res_req(kal_bool is_date, kal_uint8 mode)
{
#if !defined(__SLIM_AT__)

    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user; 
    if (is_date == KAL_TRUE)
    {
        rmmi_ptr->arg_list[0] = (void*)&mode;
        rmmi_ptr->arg_list[1] = (void*)&rmmi_ptr->date_aux_mode;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CSDF: %d, %d", rmmi_ptr->arg_list, 2);
    }
    else
    {
        rmmi_ptr->arg_list[0] = (void*)&mode;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CSTF: %d", rmmi_ptr->arg_list, 1);
    }

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    l4c_ptr->route_thru_lmmi = KAL_FALSE;	 
    return;
#endif /* !(defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_query_mute_mode_res_req
 * DESCRIPTION
 *  Response for +CMUT? (read command)
 * PARAMETERS
 *  mode        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_query_mute_mode_res_req(kal_bool mode)
{
#if !defined(__SLIM_AT__)

    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user; 
    rmmi_ptr->arg_list[0] = (void*)&mode;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CMUT: %d", rmmi_ptr->arg_list, 1);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    l4c_ptr->route_thru_lmmi = KAL_FALSE;	
    return;
#endif /* !(defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_exe_mute_req
 * DESCRIPTION
 *  to disable/enable the uplink voice muting during a voice call.
 *  if only AT, L4C set it directly.
 *  otherwise, send REQ_IND to ask MMI to do it.
 * PARAMETERS
 *  src_id              [IN]        
 *  audio_device        [IN]        
 *  mute_onoff          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_exe_mute_req(kal_uint8 src_id, kal_uint8 audio_device, kal_bool mute_onoff)
{

    if (src_id >= RMMI_SRC)
    {
        if (is_eq_cmd_conflict(src_id, CMUT_SET) == KAL_TRUE)
        {
            return KAL_FALSE;
        }
    }

    if (src_id >= RMMI_SRC)
    {

    #ifdef __MMI_FMI__
        /* ask MMI to set mute mode */
        l4c_eq_set_mute_mode_req_ind(audio_device, mute_onoff);
        return KAL_TRUE;
    #else /* __MMI_FMI__ */ 
        /* MMI not exists, set mute mode directly */
        l4cuem_set_mute_req(audio_device, mute_onoff);
        return KAL_TRUE;
    #endif /* __MMI_FMI__ */ 

    }
    else
    {
        l4cuem_set_mute_req(audio_device, mute_onoff);
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_exe_volume_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  volume_type         [IN]        
 *  volume_level        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_exe_volume_req(kal_uint8 src_id, kal_uint8 volume_type, kal_uint8 volume_level)
{
    if (src_id >= RMMI_SRC)
    {
        if (is_eq_cmd_conflict(src_id, VOL_SET) == KAL_TRUE)
        {
            return KAL_FALSE;
        }
    }

    if (src_id >= RMMI_SRC)
    {
    #if defined (__MMI_FMI__) && !defined(EXTERNAL_MMI)
        l4c_eq_set_volume_req_ind(volume_type, volume_level); 
    #else 
        l4cuem_audio_set_volume_req(volume_type, volume_level);
    #endif 
    }
    else
    {
        l4cuem_audio_set_volume_req(volume_type, volume_level);
#if 0 //eq_action_revise
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
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_audio_profile_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  audio_prof      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_audio_profile_req(kal_uint8 src_id, audio_profile_struct *audio_prof)
{
    media_aud_set_audio_profile_req_struct *param_ptr;

    if (is_eq_cmd_conflict(src_id, AUDI_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    /* send primitive to uem */
    param_ptr = (media_aud_set_audio_profile_req_struct*)
        construct_local_para((kal_uint16) sizeof(media_aud_set_audio_profile_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->update_nvram = KAL_TRUE;
    kal_mem_cpy(&param_ptr->audio_profile, (audio_profile_struct*) audio_prof, sizeof(audio_profile_struct));
    /*
     * param_ptr->mode = mode;
     * kal_mem_cpy(param_ptr->melody, (kal_uint8 *)melody, 7*sizeof(kal_uint8));
     * kal_mem_cpy(param_ptr->keytone, (kal_uint8 *)keytone, 7*sizeof(kal_uint8));
     * kal_mem_cpy(param_ptr->speech, (kal_uint8 *)speech, 7*sizeof(kal_uint8));
     * param_ptr->mic = mic;
     * param_ptr->sidetone = sidetone;
     */
    l4c_set_user_action(L4C_EQ, src_id, AUDI_SET); //reset in set_audio_profile_cnf_hdlr
    l4c_send_msg_to_uem(MSG_ID_L4CUEM_SET_AUDIO_PROFILE_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_audio_param_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  audio_para      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_audio_param_req(kal_uint8 src_id, audio_param_struct *audio_para)
{
    media_aud_set_audio_param_req_struct *param_ptr;

    if (is_eq_cmd_conflict(src_id, AUDI_PARAM_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    /* send primitive to uem */
    param_ptr = (media_aud_set_audio_param_req_struct*)
        construct_local_para((kal_uint16) sizeof(media_aud_set_audio_param_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->update_nvram = KAL_TRUE;
    kal_mem_cpy(&param_ptr->audio_param, (audio_param_struct*) audio_para, sizeof(audio_param_struct));
    /*
     * param_ptr->mode = mode;
     * kal_mem_cpy(param_ptr->melody, (kal_uint8 *)melody, 7*sizeof(kal_uint8));
     * kal_mem_cpy(param_ptr->keytone, (kal_uint8 *)keytone, 7*sizeof(kal_uint8));
     * kal_mem_cpy(param_ptr->speech, (kal_uint8 *)speech, 7*sizeof(kal_uint8));
     * param_ptr->mic = mic;
     * param_ptr->sidetone = sidetone;
     */
    l4c_set_user_action(L4C_EQ, src_id, AUDI_PARAM_SET); //reset in set_audio_param_cnf_hdlr
    l4c_send_msg_to_uem(MSG_ID_L4CUEM_SET_AUDIO_PARAM_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_audio_profile_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_audio_profile_req(kal_uint8 src_id, kal_uint8 mode)
{

    l4cuem_get_audio_profile_req(src_id, mode);

    /*
     * kal_mem_cpy((kal_uint8 *)melody,aud_profile.melody, 7*sizeof(kal_uint8));
     * kal_mem_cpy((kal_uint8 *)keytone,aud_profile.keytone, 7*sizeof(kal_uint8));
     * kal_mem_cpy((kal_uint8 *)speech, aud_profile.speech,7*sizeof(kal_uint8));
     * kal_mem_cpy((kal_uint8 *)mic, &(aud_profile.mic),sizeof(kal_uint8));
     * kal_mem_cpy((kal_uint8 *)sidetone, &(aud_profile.sidetone),sizeof(kal_uint8));
     */
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_audio_param_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_audio_param_req(kal_uint8 src_id)
{

    l4cuem_get_audio_param_req(src_id);
    /*
     * kal_mem_cpy((kal_uint8 *)melody,aud_profile.melody, 7*sizeof(kal_uint8));
     * kal_mem_cpy((kal_uint8 *)keytone,aud_profile.keytone, 7*sizeof(kal_uint8));
     * kal_mem_cpy((kal_uint8 *)speech, aud_profile.speech,7*sizeof(kal_uint8));
     * kal_mem_cpy((kal_uint8 *)mic, &(aud_profile.mic),sizeof(kal_uint8));
     * kal_mem_cpy((kal_uint8 *)sidetone, &(aud_profile.sidetone),sizeof(kal_uint8));
     */
    return KAL_TRUE;
}


#if defined(__AMRWB_LINK_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_audio_wb_param_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]   
 *  option      [IN]
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_audio_wb_param_req(kal_uint8 src_id, kal_uint8 option)
{
    if(RMMI_PTR->eaps_action != RMMI_EAPS_NO_ACION)
    {
        return KAL_FALSE;
    }
    if(option == 4)
    {
        option = 2;
    }
    
    l4cuem_get_aduio_wb_param_req(src_id, (l4_wb_audio_para_action_enum)option);
    
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_audio_wb_param_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id             [IN]
 *  option             [IN]
 * new_param       [IN]
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_audio_wb_param_req(kal_uint8 src_id, kal_uint8 option, void *new_param)
{
    if(option == 4)
    {
        option = 2;
    }
    l4cuem_set_aduio_wb_param_req(src_id, (l4_wb_audio_para_action_enum)option, new_param);
    return KAL_TRUE;
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_volume_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  volume_type     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_volume_req(kal_uint8 src_id, kal_uint8 volume_type)
{
    l4cuem_audio_get_volume_req(src_id, volume_type);
    switch (volume_type)
    {
        case VOL_TYPE_SPH:
        {
            l4c_set_user_action(L4C_EQ, src_id, CLVL_READ); //reset in l4cuem_get_volume_cnf_hdlr
            break;
        }
        case VOL_TYPE_MEDIA:
        {
            l4c_set_user_action(L4C_EQ, src_id, CRSL_READ); //reset in l4cuem_get_volume_cnf_hdlr
            break;
        }
        default:
            return KAL_FALSE;
    }

    return KAL_TRUE;
}



/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_speech_mode_req
 * DESCRIPTION
 *  The speech mode is set by MMI in feature phone, and by modem itself in 
 *  non-smartphone modem or Android Edge modem card(for emulation)
 * PARAMETERS
 *  on_off      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_speech_mode_req(kal_bool on_off)
{
#if !defined(__SP_RIL_SUPPORT__) || (defined(__ANDROID_RIL_SUPPORT__) && defined(__MODEM_CARD__))
    //mtk02285, 20090309, MAUI_01640548 ~
    kal_uint8 rat_mode = 0;
    plmn_id_rat_struct current_plmn;
    l4crac_get_current_plmn(&current_plmn);
    //kal_prompt_trace(MOD_L4C, "current_plmn.rat=%d", current_plmn.rat);
    switch (current_plmn.rat)
    {
        case L4C_RAT_NONE:    
        case L4C_RAT_GSM:
            rat_mode = 0; //RAT_2G_MODE 
            break;

        case L4C_RAT_UMTS:
            rat_mode = 1; //RAT_3G_MODE
            break;

        default:
            /* So far, modem project does not support VT call Therefore, there will be no RAT_3G324M_MODE */
            break;
    }
    l4cuem_speech_set_mode_req(on_off, rat_mode); // RAT_2G_MODE, RAT_3G_MODE, RAT_3G324M_MODE (l1sp.c)
    //~ mtk02285, 20090309, MAUI_01640548
#endif /* not WM_RIL_SUPPORT */
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_audio_mode_req
 * DESCRIPTION
 *  The audio mode is set by MMI in feature phone, and by modem itself in 
 *  non-smartphone modem or Android Edge modem card(for emulation)
 * PARAMETERS
 *  mode        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_audio_mode_req(kal_uint8 mode)
{
#if !defined(__SP_RIL_SUPPORT__) || (defined(__ANDROID_RIL_SUPPORT__) && defined(__MODEM_CARD__))
    l4cuem_set_audio_mode(mode);
#endif 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_adc_all_channel_start_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_adc_all_channel_start_req(void)
{
    l4cuem_get_adc_all_channel_start_req();
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_adc_all_channel_stop_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_adc_all_channel_stop_req(void)
{
    l4cuem_get_adc_all_channel_stop_req();
    return KAL_TRUE;
}

/*
 * kal_bool l4c_eq_set_alert_mode_req (kal_uint8 src_id,
 * kal_uint8 alert_mode)
 * {
 * if (is_cmd_conflict(src_id, CALM_SET) == KAL_TRUE)
 * {
 * return KAL_FALSE;
 * }
 * 
 * if (src_id == RMMI_SRC)
 * {
 * l4c_eq_set_alert_mode_req_ind(alert_mode);
 * return KAL_TRUE;
 * }
 * else
 * {
 * return KAL_FALSE;
 * }
 * }
 * 
 * kal_bool l4c_eq_get_alert_mode_req (kal_uint8 src_id,
 * kal_uint8 *alert_mode)
 * {
 * kal_bool ret_val;
 * 
 * if (src_id == RMMI_SRC)
 * {
 * ret_val = l4c_eq_get_alert_mode_req_ind(alert_mode);
 * }
 * 
 * return ret_val;
 * }
 */


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_exe_gpio_level_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  gpio_dev_type       [IN]        
 *  gpio_dev_level      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_exe_gpio_level_req(kal_uint8 src_id, kal_uint8 gpio_dev_type, kal_uint8 gpio_dev_level)
{
#if 0 //cbklt_revise
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
    {
        l4cuem_gpio_set_level_req(gpio_dev_type, gpio_dev_level); 
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_gpio_level_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  gpio_dev_type       [IN]        
 *  gpio_dev_level      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_gpio_level_req(kal_uint8 src_id, kal_uint8 gpio_dev_type, kal_uint8 *gpio_dev_level)
{
    l4cuem_gpio_get_level_req(gpio_dev_type, gpio_dev_level);

    return KAL_TRUE;
}

#ifdef __MMI_FMI__
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_backlight_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_backlight_req(kal_uint8 state, kal_uint16 duration)
{
#if !defined(__SLIM_AT__)
    kal_uint8 dev_level;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    if (state == 0) //disable
    {
        dev_level = LED_LIGHT_LEVEL0;
    }
    else //enable
    {
        dev_level = LED_LIGHT_LEVEL5;
    }

    l4c_eq_set_gpio_level_req_ind(GPIO_DEV_LED_MAINLCD, dev_level, duration);
    l4c_ptr->route_thru_lmmi = KAL_TRUE;
    l4c_ptr->route_thru_lmmi_user = RMMI_PTR->current_src;
#endif
    return KAL_TRUE;
}
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_at_cbklt_query_res_req
 * DESCRIPTION
 *  Response for +CBKLT? (read command)
 * PARAMETERS
 *  totalAlarm      [IN]        
 *  activeAlarm     [IN]        
 *  alarmList       [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_at_cbklt_query_res_req(kal_uint8 level, kal_uint16 duration)
{
#if !defined(__SLIM_AT__)
    kal_uint8 state;
    kal_uint16 string_length = 0;
    kal_uint8 buffer[25];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;

    if (level == LED_LIGHT_LEVEL0) //disable
    {
        state = 0;
    }
    else //enable
    {
        if (duration == 0xffff) //enable for indefinitely
        {
            state = 2;
        }
        else if (duration == 0) //enable for a duration specified by the UE
        {
            state = 3;
        }
        else //enable for the duration specified
        {
            state = 1;
        }
    }

    rmmi_ptr->arg_list[0] = (void*)&state;
    rmmi_ptr->arg_list[1] = (void*)&duration;
    if (state == 1)
    {
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CBKLT: %d, %d", rmmi_ptr->arg_list, 2);
    }
    else
    {
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CBKLT: %d", rmmi_ptr->arg_list, 1);
    }

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    return;
#endif /* !(defined(__SLIM_AT__) */ 
}
#endif

/* voice memo */
#if defined(__NONE_USED_L4MMI_MESSAGE__)


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_get_info_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_get_info_req(kal_uint8 src_id)
{
    l4aud_vm_get_info_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_GET_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_GET_EXE;

    param_ptr = (l4aud_vm_get_info_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_get_info_req_struct), TD_RESET);

    param_ptr->src_id = src_id;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_GET_INFO_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_record_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  dir         [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_record_req(kal_uint8 src_id, kal_uint8 dir)
{
    l4aud_vm_record_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_REC_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_REC_EXE;

    param_ptr = (l4aud_vm_record_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_record_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->direction = dir;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_RECORD_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_stop_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_stop_req(kal_uint8 src_id)
{
    l4aud_vm_stop_req_struct *param_ptr;

    param_ptr = (l4aud_vm_stop_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_stop_req_struct), TD_RESET);

    param_ptr->src_id = src_id;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_STOP_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_abort_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_abort_req(kal_uint8 src_id)
{
    l4aud_vm_abort_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_ABT_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_ABT_EXE;

    param_ptr = (l4aud_vm_abort_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_abort_req_struct), TD_RESET);

    param_ptr->src_id = src_id;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_ABORT_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_pause_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_pause_req(kal_uint8 src_id)
{
    l4aud_vm_pause_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_PAU_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_PAU_EXE;

    param_ptr = (l4aud_vm_pause_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_pause_req_struct), TD_RESET);

    param_ptr->src_id = src_id;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_PAUSE_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_resume_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_resume_req(kal_uint8 src_id)
{
    l4aud_vm_resume_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_RES_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_RES_EXE;

    param_ptr = (l4aud_vm_resume_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_resume_req_struct), TD_RESET);

    param_ptr->src_id = src_id;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_RESUME_REQ, param_ptr, NULL);

    return KAL_TRUE;
}

#ifdef __FS_ON__


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_play_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_name       [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_play_req(kal_uint8 src_id, kal_wchar *file_name)
{
    l4aud_vm_play_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_PLAY_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_PLAY_EXE;

    param_ptr = (l4aud_vm_play_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_play_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    kal_mem_cpy(param_ptr->file_name, file_name, MAX_VM_FILE_NAME * ENCODE_BYTE);

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_PLAY_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_delete_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_name       [?]         
 *  delete_all      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_delete_req(kal_uint8 src_id, kal_wchar *file_name, kal_bool delete_all)
{
    l4aud_vm_delete_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_DEL_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_DEL_EXE;

    param_ptr = (l4aud_vm_delete_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_delete_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->delete_all = delete_all;
    kal_mem_cpy(param_ptr->file_name, file_name, MAX_VM_FILE_NAME * ENCODE_BYTE);

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_DELETE_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_append_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_name       [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_append_req(kal_uint8 src_id, kal_wchar *file_name)
{
    l4aud_vm_append_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_APP_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_APP_EXE;

    param_ptr = (l4aud_vm_append_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_append_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    kal_mem_cpy(param_ptr->file_name, file_name, MAX_VM_FILE_NAME * ENCODE_BYTE);

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_APPEND_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_rename_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  old_name        [?]         
 *  new_name        [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_rename_req(kal_uint8 src_id, kal_wchar *old_name, kal_wchar *new_name)
{
    l4aud_vm_rename_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_REN_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_REN_EXE;

    param_ptr = (l4aud_vm_rename_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_rename_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    kal_mem_cpy(param_ptr->old_file_name, old_name, MAX_VM_FILE_NAME * ENCODE_BYTE);
    kal_mem_cpy(param_ptr->new_file_name, new_name, MAX_VM_FILE_NAME * ENCODE_BYTE);

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_RENAME_REQ, param_ptr, NULL);

    return KAL_TRUE;
}
#else /* __FS_ON__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_play_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  file_id     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_play_req(kal_uint8 src_id, kal_uint8 file_id)
{
    l4aud_vm_play_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_PLAY_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_PLAY_EXE;

    param_ptr = (l4aud_vm_play_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_play_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->file_id = file_id;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_PLAY_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_delete_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_id         [IN]        
 *  delete_all      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_delete_req(kal_uint8 src_id, kal_uint8 file_id, kal_bool delete_all)
{
    l4aud_vm_delete_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_DEL_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_DEL_EXE;

    param_ptr = (l4aud_vm_delete_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_delete_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->file_id = file_id;
    param_ptr->delete_all = delete_all;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_DELETE_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vm_append_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  file_id     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_vm_append_req(kal_uint8 src_id, kal_uint8 file_id)
{
    l4aud_vm_append_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, VM_APP_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = VM_APP_EXE;

    param_ptr = (l4aud_vm_append_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4aud_vm_append_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->file_id = file_id;

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_VM_APPEND_REQ, param_ptr, NULL);

    return KAL_TRUE;
}
#endif /* __FS_ON__ */ 
#endif /* defined(__NONE_USED_L4MMI_MESSAGE__)*/ 

/* simulate keypad, indicator, lcd */


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_keypad_input_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  keycode     [?]         
 *  time        [IN]        
 *  pause       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_keypad_input_req(kal_uint8 src_id, kal_uint8 *keycode, kal_uint8 time, kal_uint8 pause)
{
    #if defined(__MMI_FMI__) 

    kal_uint8 length = 0;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    if (src_id != RMMI_SRC)
    {
        return KAL_FALSE;
    }

    //hogan 070416 , MMI might be delayed to get the buffer, but another +ckpd came in (clear previous kbd_buffer)
    if (l4c_kbd_buffer.kbd_data_buffer_windex != l4c_kbd_buffer.kbd_data_buffer_rindex)
    {
        kal_trace(
            TRACE_WARNING,
            WARNING_SOMETHING_STILL_IN_L4C_KBD_BUFFER,
            l4c_kbd_buffer.kbd_data_buffer_windex,
            l4c_kbd_buffer.kbd_data_buffer_rindex);
        return KAL_FALSE;
    }

    /* 20040510 mtk00714 add for Joseph: to enable testing +CKPD from Catcher during dial-up */
    if (l4c_ptr->ekey_mode != 1)        //ekey_mode!=1 : normal +CKPD should check cmd conflict or not.
    {
        if (is_eq_cmd_conflict(src_id, CKPD_EXE) == KAL_TRUE)
        {
            return KAL_FALSE;
        }
    }
    else        //when ekey_mode==1, we allow +CKPD from Catcher during dial-up    
    {
        // if RMMI itself is already doing +CKPD, return KAL_FALSE
        if (l4c_check_user_action(L4C_EQ, RMMI_SRC, CKPD_EXE) == KAL_TRUE)
        {
            return KAL_FALSE;
        }
    }
    l4c_set_user_action(L4C_EQ, src_id, CKPD_EXE); //reset in l4c_keypad_input_press_hdlr

    /* find keycode length */
    while (keycode[length] != 0xff)
    {
        length++;
    }

    /* initilaization: clear kbdbuffer */
    l4c_clear_kbdbuffer();

    /* enqueue */
    if (keycode[0] >= MAX_DEVICE_KEYS)
    {
        ASSERT(0);
    }

    l4c_equeue_onekey_to_kbdbuffer(kbd_onekey_press, keycode[0]);
    kal_trace(TRACE_INFO, INFO_RMMI_KEYPRESS, keycode[0], 0, l4c_kbd_buffer.kbd_data_buffer_windex);

    if (l4c_send_kbdilm)
    {
        l4c_send_kbdilm = KAL_FALSE;
        l4cuem_keypad_detect_ind(l4c_kbd_getkeydata);
    }

    /* start keypad press timer */
    if ((time >= L4C_LONGPRESS_TIMER))
    {
        l4c_ptr->event_id[0] = evshed_set_event(
                                l4c_ptr->event_scheduler_ptr,
                                (kal_timer_func_ptr) l4c_keypad_input_long_press_hdlr,
                                NULL,
                                L4C_LONGPRESS_TIMER * KAL_TICKS_100_MSEC);

    }
    else
    {
        l4c_ptr->event_id[0] = evshed_set_event(
                                l4c_ptr->event_scheduler_ptr,
                                (kal_timer_func_ptr) l4c_keypad_input_press_hdlr,
                                NULL,
                                time * KAL_TICKS_100_MSEC);
    }
    /* save key sequence */
    l4c_ptr->parameter[src_id].length = length + 5; /* */
    if (l4c_ptr->parameter[src_id].length >= 2048)
    {
        ASSERT(0);
    }

    l4c_ptr->parameter[src_id].data = get_ctrl_buffer(l4c_ptr->parameter[src_id].length);
    l4c_ptr->keypad_press_timer = (kal_uint8) time;
    *((kal_uint8*) l4c_ptr->parameter[src_id].data + 0) = time;
    *((kal_uint8*) l4c_ptr->parameter[src_id].data + 1) = pause;
    *((kal_uint8*) l4c_ptr->parameter[src_id].data + 2) = 0;
    *((kal_uint8*) l4c_ptr->parameter[src_id].data + 3) = kbd_onekey_press;
    *((kal_uint8*) l4c_ptr->parameter[src_id].data + 4) = length;
    kal_mem_cpy((kal_uint8*) l4c_ptr->parameter[src_id].data + 5, keycode, length);
    #endif

    return KAL_TRUE;
}


#if defined(__TC01__) 
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
    #if defined(__MMI_FMI__) 
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
#if 0 //mtk01616_100409 : MTR tool might send release request before previous request is finished
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
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
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

#if defined(__NONE_USED_L4MMI_MESSAGE__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_dspl_text_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  text_string     [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_dspl_text_req(kal_uint8 src_id, kal_uint8 *text_string)
{
    if (src_id < RMMI_SRC)
    {
        return KAL_FALSE;
    }

    l4c_eq_set_dspl_text_req_ind(text_string);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_indicator_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  icon_id     [IN]        
 *  value       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_indicator_req(kal_uint8 src_id, kal_uint8 icon_id, kal_uint8 value)
{
    if (src_id < RMMI_SRC)
    {
        return KAL_FALSE;
    }

    l4c_eq_set_indicator_req_ind(icon_id, value);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_indicator_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  icon_id     [IN]        
 *  value       [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_indicator_req(kal_uint8 src_id, kal_uint8 icon_id, kal_uint8 *value)
{
    return KAL_TRUE;
}
#endif

/* rtc related, clock, alarm */


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_exe_rtc_time_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  rtc_type        [IN]        
 *  set_type        [IN]        
 *  time            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_exe_rtc_time_req(kal_uint8 src_id, kal_uint8 rtc_type, kal_uint8 set_type, rtc_alarm_info_struct time)
{
    return (l4cuem_rtc_set_time_req(rtc_type, time, set_type));
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_rtc_time_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  rtc_type        [IN]        
 *  set_type        [IN]        
 *  time            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_rtc_time_req(kal_uint8 src_id, kal_uint8 rtc_type, kal_uint8 set_type, rtc_alarm_info_struct time)
{
    /* Johnny: remove it, we need not check command conflict of CALA_SET */
    /*
     * if (is_cmd_conflict(src_id, CALA_SET) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */

    if (src_id >= RMMI_SRC)
    {
        l4c_eq_set_rtc_time_req_ind(rtc_type, set_type, time);
        L4C_PTR->route_thru_lmmi = KAL_TRUE;    //Mtk00924_060215: wait for MMI's general_res_req to return OK or ERROR
        L4C_PTR->route_thru_lmmi_user = src_id;        
        /* mtk00714 marked on 20040601: Alarm now use l4c_eq_at_alarm_set_req_lind(); */
        /* 
         * if(rtc_type == RTC_ALARM_IND)
         * {
         * L4C_PTR->cc_current_action[src_id] = CALA_SET;
         * L4C_PTR->route_thru_lmmi = KAL_TRUE;
         * }
         */
    }
    else
    {
        /* mtk00714 marked on 20040601: Alarm now use l4c_eq_at_alarm_set_req_lind(); */
        /*
         * if (rtc_type == RTC_ALARM_IND)
         * {
         * param_ptr = (l4cuem_set_profile_req_struct *)
         * construct_local_para(
         * (kal_uint16)sizeof(l4cuem_set_profile_req_struct),
         * TD_RESET);
         * 
         * param_ptr->src_id = src_id;
         * param_ptr->type = CALA_SET;
         * param_ptr->data1 = time.alarm_index;
         * 
         * param1 = &time;
         * 
         * L4C_PTR->cc_current_action[src_id] = CALA_SET;
         * 
         * l4c_send_msg_to_uem ( MSG_ID_L4CUEM_SET_PROFILE_REQ,
         * param_ptr, (kal_uint8 *)param1);
         * }
         * else
         */
        {
            /* RTC clock */
            l4cuem_rtc_set_time_req(rtc_type, time, set_type);
            l4c_eq_set_rtc_time_lrsp(KAL_TRUE, L4C_NO_CAUSE);
        }
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_rtc_time_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  rtc_type        [IN]        
 *  num             [?]         
 *  rtctime         [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_rtc_time_req(kal_uint8 src_id, kal_uint8 rtc_type, kal_uint8 *num, rtc_alarm_info_struct *rtctime)
{
    kal_bool result;

    if (rtc_type == RTC_TIME_CLOCK_IND)
    {
        result = l4cuem_rtc_get_time_req(rtc_type, 0, &rtctime[0]);
    }
    else        //RTC_ALARM_IND
    {
        /* mtk00714: 20040610 marked : rmi_data.alarm_info  in UEM will not be used anymore. */
        return KAL_FALSE;
        /*
         *num = l4cuem_rtc_get_count_req (rtc_type);
         
         for (i=0; i<MAX_ALARM_NUM; i++)
         {
         result = l4cuem_rtc_get_time_req(rtc_type, i, &rtctime[index]);
         if (result == KAL_TRUE)
         {
         index++;
         }
         }
         */
    }

    return result;
}

/* delete HW RTC time */


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_exe_rtc_delete_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  rtc_type        [IN]        
 *  rtc_index       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_exe_rtc_delete_req(kal_uint8 src_id, kal_uint8 rtc_type, kal_uint8 rtc_index)
{
    l4cuem_rtc_delete_date_time_req(rtc_type, rtc_index);
    return KAL_TRUE;
}

/* delete profile setting (Alarm) */


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_rtc_delete_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  rtc_type        [IN]        
 *  rtc_index       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_rtc_delete_req(kal_uint8 src_id, kal_uint8 rtc_type, kal_uint8 rtc_index)
{
    // mtk00714 marked 20040601: UEM_PTR -> rmi_data.alarm_info is not used anymore 
    return KAL_FALSE;
}


#if defined(__NONE_USED_L4MMI_MESSAGE__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_country_code_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  country_code        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_country_code_req(kal_uint8 src_id, kal_uint8 country_code)
{
    // mtk00714 marked 20040601: UEM_PTR -> rmi_data.country_code is not used anymore 
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_country_code_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  country_code        [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_country_code_req(kal_uint8 src_id, kal_uint8 *country_code)
{
    // mtk00714 marked 20040601: UEM_PTR -> rmi_data.country_code is not used anymore 
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_battery_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  battery_status      [?]         
 *  battery_vol         [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_battery_status_req(kal_uint8 src_id, kal_uint8 *battery_status, kal_uint8 *battery_vol)
{
    l4cuem_get_battery_status_req(battery_status, battery_vol);

    return KAL_TRUE;
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_battery_capacity_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  battery_status      [?]         
 *  battery_cap         [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_battery_capacity_status_req(kal_uint8 src_id, kal_uint8 *battery_status, kal_uint32 *battery_cap)
{
    kal_uint8 battery_vol;

    l4cuem_get_battery_status_req(battery_status, &battery_vol);        //here battery_vol is no use.
    *battery_cap = uem_get_vbat_percentage();
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_equip_id_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  equip_type      [IN]        
 *  equip_id        [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_equip_id_req(kal_uint8 src_id, kal_uint8 equip_type, kal_uint8 *equip_id)
{
    l4cuem_get_equip_id_req(equip_type, equip_id);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_load_default_config_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_load_default_config_req(kal_uint8 src_id)
{
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_power_off_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_power_off_req(kal_uint8 src_id)
{
    L4C_PTR->cc_current_action[src_id] = POWEROFF_EXE;

#ifdef __SP_RIL_SUPPORT__
    /*   mtk02480
      *	For WinMo,  LN maintain at AP side, we can bypass sync PHB procedure during power off
      */
    l4cphb_sync_cnf_hdlr(NULL,NULL);
#else
    l4c_send_msg_to_phb(MSG_ID_L4CPHB_SYNC_REQ, NULL, NULL);
#endif

    /* schedule each sub module to shut down */
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_cancel_lock_poweron_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_cancel_lock_poweron_req(kal_uint8 src_id,kal_uint8 type)
{
#ifdef __CANCEL_LOCK_POWERON__           
    switch (type)
    {
        case TYPE_PHB_SMS_PARAM_ONLY_INIT:
        {
            l4c_phb_init_me_phb_req(src_id,TYPE_PHB_SMS_PARAM_ONLY_INIT);
            l4c_smsal_init_me_sms_req(src_id,SMSAL_PARAM_INIT_ONLY);
        }
        break;

        case TYPE_PHB_NORMAL_INIT:
        {
            l4c_phb_init_me_phb_req(src_id,TYPE_PHB_NORMAL_INIT);
            
        }
        break;

        case TYPE_SMS_NORMAL_INIT:
        {
            l4c_smsal_init_me_sms_req(src_id,SMSAL_NORMAL_INIT);
        }
        break;
        
         
        default:    
            break;
    }        
#endif /* __CANCEL_LOCK_POWERON__ */    
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_load_power_on_data_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  read_flag       [IN]        
 *  file_idx        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_load_power_on_data_req(kal_uint8 src_id, kal_bool read_flag, nvram_lid_enum file_idx)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;
    
    if (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION)
    {
        if ((l4c_comm_ptr->poweron_mode != POWER_ON_KEYPAD) && (l4c_comm_ptr->poweron_mode != POWER_ON_EXCEPTION))
        {
            /* this mean power on mode is not normal power on. */
            /* we dont have to do sub-module activation , clear L4C state */
            /* and current action */
            // L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;
            return KAL_TRUE;

        }
        l4c_ptr->cc_current_action[src_id] = POWERON_EXE;

        if (read_flag == KAL_FALSE)
        {
            l4csmu_start_req_struct *param_ptr;

        #ifdef __CTA_DUAL_SIM_STANDARD__
            sim_reset_req_struct*param_ptr3;

            if (l4c_ptr->sim_poweroff == KAL_TRUE)
            {        
                param_ptr3 = (sim_reset_req_struct *)construct_local_para((kal_uint16)sizeof(sim_reset_req_struct), TD_RESET);
                param_ptr3->src_id = L4C_SRC; /* Won't response to LMMI or RMMI */
            
                l4c_send_msg_to_sim(MSG_ID_SIM_RESET_REQ, param_ptr3, NULL);		
            }
        #endif
            l4c_ptr->sim_poweroff = KAL_FALSE;
        
            /* 1. activate SMU */
            param_ptr = (l4csmu_start_req_struct*)construct_local_para((kal_uint16) sizeof(l4csmu_start_req_struct), TD_RESET);
            param_ptr->src_id = src_id;
            param_ptr->poweron_mode = l4c_comm_ptr->poweron_mode;

            l4c_send_msg_to_smu(MSG_ID_L4CSMU_START_REQ, param_ptr);

        #ifdef __MOD_RAC__
            /* 2. RF on or off according to cfun_state */
            if (l4c_ptr->cfun_state == 1)
            {
            #if defined (__MTK_TARGET__) || defined (__UE_SIMULATOR__)
                l4crac_set_rat_mode_req_struct *param_ptr = (l4crac_set_rat_mode_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4crac_set_rat_mode_req_struct), TD_RESET);
                l4c_rat_enum rat_mode = l4crac_get_rat_mode();

            #if defined(__ENS_RAT_BALANCING__) && defined(__UMTS_RAT__)
                rat_mode = l4c_nw_check_ef_rat_mode();
            #endif
                param_ptr->src_id = src_id;
                param_ptr->rat_mode = rat_mode;
                param_ptr->save_to_nvram = KAL_TRUE; //MAUI_02554068
                l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_RAT_MODE_REQ, param_ptr);
                l4c_set_user_action(L4C_RAC, src_id, PWRON_SET_RAT_MODE);
            #endif /* defined (__MTK_TARGET__) || defined (__UE_SIMULATOR__) */
            }
            else if (l4c_ptr->cfun_state == 4)
            {
                // Enable VISM if boot up in flight mode
            #ifdef __VSIM__
                if ((query_ps_conf_test_mode()==PS_CONF_TEST_FACTORY) && 
                    (query_ps_conf_test_profile_setting() & FACTORY_MODEM_VIRTUAL_SIM_ON_BIT_FOR_L4C))
                {
                    l4c_sim_vsim_req(L4C_SRC, KAL_TRUE);
                }
            #endif
            }
        #endif /* __MOD_RAC__ */ 

             /* 3. Activate CSM with init_type=NVRAM, to read speech capability */
         #ifdef __MOD_CSM__
             {
     	     	   l4ccsm_cc_startup_req_struct *param_ptr;
     
                 param_ptr = (l4ccsm_cc_startup_req_struct*)construct_local_para((kal_uint16) sizeof(l4ccsm_cc_startup_req_struct), TD_RESET);
                 param_ptr->src_id = src_id;
                 param_ptr->init_type = L4CCSM_CC_STARTUP_NVRAM;
                 l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_STARTUP_REQ, param_ptr, NULL, 0);
             }
          #endif
		
        }
        else
        {
            nvram_read_req_struct *param_ptr;

            param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(src_id,
                                                                                    file_idx,
                                                                                    1,
                                                                                    1);

            l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);
        }
    }
    else
    {
        /* error */
    }

#if 0 //__CTM_SUPPORT__
/* under construction !*/
#endif 

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_uart_transfer_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id                      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_uart_transfer_req(kal_uint8 port)
{
    //kal_prompt_trace(MOD_L4C, "port=%d, rmmi_current_mod_id=%d, L4C=%d, ATCI=%d", 
		//port, rmmi_current_mod_id, MOD_L4C, MOD_ATCI);
    if (RMMI_UART_GetOwnerID(port) == MOD_ATCI)
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
 *  l4c_eq_uart_release_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id                      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_uart_release_req(kal_uint8 port)
{
    //kal_prompt_trace(MOD_L4C, "port=%d, rmmi_current_mod_id=%d, L4C=%d, ATCI=%d", 
		//port, rmmi_current_mod_id, MOD_L4C, MOD_ATCI);
	rmmi_obtain_uart_control(port, KAL_FALSE);
	return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_uart_port_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id                      [IN]        
 *  func_id                     [IN]        
 *  ps_port                     [IN]        
 *  tst_port_ps                 [IN]        
 *  ps_baud_rate                [IN]        
 *  tst_baud_rate_ps            [IN]        
 *  High_Speed_SIM_Enabled      [IN]        
 *  swdbg                       [IN]        
 *  uart_power_setting          [IN]        
 *  cti_uart_port               [IN]        
 *  cti_baud_rate               [IN]        
 *  tst_port_l1                 [IN]        
 *  tst_baud_rate_l1            [IN]        
 *  tst_output_mode             [IN]        
 *  usb_logging_mode            [IN]        
 *  tst_port_dsp                [IN]
 *  tst_baud_rate_dsp           [IN]
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_uart_port_req(
            kal_uint8 src_id,
            kal_uint8 func_id,
            kal_uint8 ps_port,
            kal_uint8 tst_port_ps,
            kal_uint32 ps_baud_rate,
            kal_uint32 tst_baud_rate_ps,
            kal_bool High_Speed_SIM_Enabled,
            kal_uint8 swdbg,
            kal_uint8 uart_power_setting,
            kal_uint8 cti_uart_port,
            kal_uint32 cti_baud_rate,
            kal_uint8 tst_port_l1,
            kal_uint32 tst_baud_rate_l1,
            kal_uint8 tst_output_mode,
            kal_uint8 usb_logging_mode,
            kal_uint16 tst_port_dsp,
            kal_uint32 tst_baud_rate_dsp)
{
    /*mtk80396 Change Desing from 2010/08/06 W1033, After receive MMI set uart port request, 
        * we write to NVRAM directly and response in NVRAM read cnf hdlr,
        * and phase out  read => write=> respone design. Because MMI will give all the parameters
        * that in port_setting_struct */
    nvram_write_req_struct *param_ptr;
    port_setting_struct uart_param;
    kal_bool result;    

    result = nvram_external_read_data(NVRAM_EF_PORT_SETTING_LID, 1, (kal_uint8*)&uart_param, NVRAM_EF_PORT_SETTING_SIZE);

    if ((result != KAL_TRUE) || (is_eq_cmd_conflict(src_id, UART_WRITE_EXE) == KAL_TRUE))
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_EQ,src_id, UART_WRITE_EXE); /* Reset in nvram_write_cnf_hdlr */

    param_ptr = (nvram_write_req_struct*)l4c_construct_nvram_write_local_para(src_id,
                                                                              NVRAM_EF_PORT_SETTING_LID,
                                                                              1);

    //tst_port = (ps_port == uart_port1) ? uart_port2 : uart_port1;
    uart_param.ps_port = ps_port;
    uart_param.tst_port_ps = tst_port_ps;
    uart_param.tst_port_l1 = tst_port_l1;
    uart_param.ps_baudrate = ps_baud_rate;
    uart_param.tst_baudrate_ps = tst_baud_rate_ps;
    uart_param.tst_baudrate_l1 = tst_baud_rate_l1;
    uart_param.High_Speed_SIM_Enabled = High_Speed_SIM_Enabled;
    uart_param.swdbg = swdbg;
    uart_param.tst_output_mode = tst_output_mode;

    /* Fion Add, Start [Set UART Power] */
    uart_param.uart_power_setting = uart_power_setting;

    uart_param.cti_uart_port = cti_uart_port;
    uart_param.cti_baudrate = cti_baud_rate;

    uart_param.usb_logging_mode = usb_logging_mode;

    #if defined(__DSP_FCORE4__)
    uart_param.tst_port_dsp = tst_port_dsp;
    uart_param.tst_baud_rate_dsp = tst_baud_rate_dsp;
    #endif

    if (func_id == UART_NVRAM_LID_FUNC_UART_POWER)
    {
        l4cuem_em_uart_poweron_req(uart_param.uart_power_setting);
    }
    /* Fion Add, End [Set UART Power] */


    l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ,
                        param_ptr,
                        (kal_uint8 *)&uart_param,
                        sizeof(port_setting_struct));
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_uart_port_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_uart_port_req(kal_uint8 src_id)
{
    nvram_read_req_struct *param_ptr;

    //port_setting_struct uart_param;
    //kal_uint8 ps_port = 0,tst_port = 0;
    //kal_uint32 ps_baud_rate = 0,tst_baud_rate = 0;
    // Lisen 0813
    // kal_bool High_Speed_SIM_Enabled = KAL_FALSE;

    if (is_eq_cmd_conflict(src_id, UART_PORT_READ) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_EQ, src_id, UART_PORT_READ); //reset in nvram_read_cnf_hdlr

    param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(src_id,
                                                                            NVRAM_EF_PORT_SETTING_LID,
                                                                            1,
                                                                            1);
    //uart_param.ps_port = ps_port;
    //uart_param.tst_port_ps = tst_port;
    //uart_param.ps_baudrate = ps_baud_rate;
    //uart_param.tst_baudrate_ps = tst_baud_rate;
    //uart_param.High_Speed_SIM_Enabled = High_Speed_SIM_Enabled;
    //L4C_PTR->parameter[src_id].length = sizeof(port_setting_struct);
    //L4C_PTR->parameter[src_id].data = get_ctrl_buffer (sizeof (port_setting_struct));
    //kal_mem_cpy((kal_uint8 *)L4C_PTR->parameter[src_id].data, (kal_uint8 *)&uart_param,sizeof(port_setting_struct));

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_nvram_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_idx        [IN]        
 *  para            [IN]        
 *  rec_amount      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_read_nvram_req(kal_uint8 src_id, kal_uint16 file_idx, kal_uint16 para, kal_uint16 rec_amount)
{
    nvram_read_req_struct *param_ptr;

    /* if(is_cmd_conflict(src_id, NVM_R_EXE) == KAL_TRUE)
       {
       return KAL_FALSE;
       } */

    /* if (L4C_PTR->cc_current_action[src_id] == POWERON_EXE)
       return KAL_FALSE; */
    if(src_id == LMMI_SRC)
    {
        src_id = L4C_NVRAM_ACCESS_SRC;
    }
    param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(src_id,
                                                                            file_idx,
                                                                            para,
                                                                            rec_amount);

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_write_nvram_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_idx        [IN]        
 *  para            [IN]        
 *  data            [?]         
 *  length          [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_write_nvram_req(
            kal_uint8 src_id,
            kal_uint16 file_idx,
            kal_uint16 para,
            kal_uint8 *data,
            kal_uint16 length)
{
    nvram_write_req_struct *param_ptr;

    /* if (is_cmd_conflict(src_id, NVM_W_EXE) == KAL_TRUE)
       {
       return KAL_FALSE;
       }
       
       L4C_PTR->cc_current_action[src_id] = NVM_W_EXE; */

    param_ptr = (nvram_write_req_struct*) l4c_construct_nvram_write_local_para(src_id,
                                                                               file_idx,
                                                                               para);

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr, data, length);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_reset_nvram_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  reset_category      [IN]        
 *  lid                 [IN]        
 *  rec_index           [IN]        
 *  rec_amount          [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_reset_nvram_req(
            kal_uint8 src_id,
            kal_uint8 reset_category,
            kal_uint16 lid,
            kal_uint16 rec_index,
            kal_uint16 rec_amount)
{
    nvram_reset_req_struct *param_ptr;

    param_ptr = (nvram_reset_req_struct*) construct_local_para((kal_uint16) sizeof(nvram_reset_req_struct), TD_RESET);

    param_ptr->reset_category = reset_category;
    param_ptr->LID = lid;
    param_ptr->access_id = src_id;
    param_ptr->rec_index = rec_index;
    param_ptr->rec_amount = rec_amount;

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_RESET_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_set_timer_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  timeout_hdlr        [?]         
 *  time                [IN]        
 *  param               [?]         
 * RETURNS
 *  
 *****************************************************************************/
eventid l4c_set_timer_req(void *timeout_hdlr, kal_uint16 time, void *param)
{
    eventid event_id;

    event_id = evshed_set_event(
                L4C_PTR->event_scheduler_ptr,
                (kal_timer_func_ptr) timeout_hdlr,
                param,
                time * KAL_TICKS_100_MSEC);

    return event_id;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_stop_timer_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  event_id        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_stop_timer_req(eventid event_id)
{
    evshed_cancel_event(L4C_PTR->event_scheduler_ptr, &event_id);
    return KAL_TRUE;
}


/*
 * kal_bool l4c_test_char_set (kal_uint8 const  **buffer)
 * {
 * *buffer = (kal_uint8 const *)
 * "+CSCS: \"IRA\", \"GSM\", \"HEX\", \"PCCP437\", \"8859-1\", \"UCS2\"";
 * return KAL_TRUE;
 * }
 * 
 * kal_bool l4c_test_te_data_rate (kal_uint8 const  **buffer)
 * {
 * *buffer = (kal_uint8 const *)
 * "+IPR: 0,75,150,300,600,1200,2400,4800,7200,9600,14400,28800,38400,57600,115200";
 * return KAL_TRUE;
 * }
 */


/*****************************************************************************
 * FUNCTION
 *  l4c_exe_functionality_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  fun         [IN]        
 *  rst         [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_exe_functionality_req(kal_uint8 src_id, kal_uint8 fun, kal_uint8 rst)
{
    if ((src_id >= RMMI_SRC) && (fun != 0))
    {
        return KAL_FALSE;
    }
#if defined(__MTK_TARGET__) || defined(__UE_SIMULATOR__)
    if (fun == ALARM_RESET)
    {
        L4C_COMM_PTR->poweron_mode = POWER_ON_KEYPAD;
    }
    l4cuem_power_reset(fun);
#endif /* __MTK_TARGET__ __UE_SIMULATOR__*/ 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_keypad_event_output_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  keypad_status       [IN]        
 *  keypad_code         [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_em_keypad_event_output_req(kal_uint8 src_id, kal_uint8 keypad_status, kal_uint8 keypad_code,kal_uint32 time_stamp)
{
    #if defined(__MMI_FMI__)  
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    //kal_uint8          mapped_code = 25;

    if (L4C_PTR->keypad_event_flag == KAL_TRUE)
    {
        rmmi_ptr->arg_list[0] = (void*)&keypad_status;
        rmmi_ptr->arg_list[1] = (void*)&keypad_code;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EKPDS: %d,%d", rmmi_ptr->arg_list, 2);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }
    if (rmmi_ptr->report_mode.cmer_keyp == 2)
    {
        kal_uint8 keypad_press;

        keypad_press = 1 - keypad_status;       //opposite to MMI

        rmmi_ptr->arg_list[0] = (void*)&keypad_code;
        rmmi_ptr->arg_list[1] = (void*)&keypad_press;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CKPD: %d,%d", rmmi_ptr->arg_list, 2);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }

    #if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
    #endif

    #endif
	
    return KAL_TRUE;

}

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_keypad_event_output_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  keypad_status       [IN]        
 *  keypad_code         [IN]        
 * RETURNS
 *  
 *****************************************************************************/
void l4c_eq_keypad_event_output_req(kal_uint8 src_id, kal_uint8 keypad_status, kal_uint8 keypad_code)
{
    kal_uint8 buffer[30];
    kal_uint16 string_length;
    kal_bool result;
    kal_uint8 key;
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    #if defined(__TC01__) && !defined(WISDOM_MMI)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif

    if (rmmi_ptr->report_mode.cmer_keyp > 0)
    {
        kal_uint8 keypad_press;

        keypad_press = 1 - keypad_status;

        result = convert_keypad_code(keypad_code, &key);

        if (result == KAL_FALSE)
        {
            return;
        }

        rmmi_ptr->arg_list[0] = (void*)&key;
        rmmi_ptr->arg_list[1] = (void*)&keypad_press;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CKEV: %d,%d", rmmi_ptr->arg_list, 2);
        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        rmmi_write_unsolicitedResultCode(
                (kal_uint8*) buffer,
                string_length,
                KAL_TRUE,
                rmmi_ptr->report_mode.cmer_mode,
                (void*)&rmmi_ptr->CNMI_ResultCodeBuffer);
        rmmi_ptr->current_src = temp_src;
    }
    return;
}


#if defined(__MMI_FMI__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_scrntch_event_output_req
 * DESCRIPTION
 *  
 * PARAMETERS    
 *  action                   [IN]     
 *  x_coords               [IN]
 *  y_coords               [IN]        
 * RETURNS
 *  
 *****************************************************************************/
 void l4c_eq_scrntch_event_output_req(kal_uint8 action, kal_uint16 x_coords, kal_uint16 y_coords)
{
#if defined(TOUCH_PANEL_SUPPORT)
    kal_uint8 buffer[37];
    kal_uint8 temp_src;
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if(rmmi_ptr->report_mode.cmer_tscrn > 0)
    {
        rmmi_ptr->arg_list[0] = (void*)&action;
        rmmi_ptr->arg_list[1] = (void*)&x_coords;
        rmmi_ptr->arg_list[2] = (void*)&y_coords;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*)"+CTEV: %d,%u,%u", rmmi_ptr->arg_list, 3);
        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        rmmi_write_unsolicitedResultCode(
                (kal_uint8*) buffer,
                string_length,
                KAL_TRUE,
                rmmi_ptr->report_mode.cmer_mode,
                (void*)&rmmi_ptr->CNMI_ResultCodeBuffer);
        /* For <tscrn> = 3 verbose mode */
        if((rmmi_ptr->report_mode.cmer_tscrn == 3) && (action == 1))
        {
            rmmi_ptr->arg_list[0] = (void*)&x_coords;
            rmmi_ptr->arg_list[1] = (void*)&y_coords;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*)"+CTEV: %u,%u,depressed", rmmi_ptr->arg_list, 2);
            rmmi_write_unsolicitedResultCode(
                    (kal_uint8*) buffer,
                    string_length,
                    KAL_TRUE,
                    rmmi_ptr->report_mode.cmer_mode,
                    (void*)&rmmi_ptr->CNMI_ResultCodeBuffer);

        }
        
        rmmi_ptr->current_src = temp_src;
    }    
    return;
#endif  
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_em_lcm_test_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  color       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_em_lcm_test_ind(kal_uint8 src_id, kal_uint8 color)
{
    l4c_em_lcm_test_lind(color);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_set_mmi_default_prof_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  op              [IN]        
 *  category        [IN]        
 *  param1          [IN]        
 *  param2          [IN]        
 *  param3          [IN]        
 *  param4          [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_em_set_mmi_default_prof_ind(
            kal_uint8 src_id,
            kal_uint8 op,
            kal_uint8 category,
            kal_uint8 param1,
            kal_uint8 param2,
            kal_uint8 param3,
            kal_uint8 *param4)
{

    kal_uint8 const *rsp_str = NULL;    /* response string and initialization */
    kal_uint16 string_length;           /* string length variable */

    if (op == 0)
    {
        switch (category)
        {
            case 0:    //wall paper
            case 2:    // home city
            case 3:    // theme
            case 4:    // short-cut
            case 5:    //screen saver
            case 6:    //power_on display
            case 7:    //power_off display
            {
                rsp_str = (kal_uint8 const*)"+ESDP: (0),(0)";  /* prepare the response string */

                break;
            }
            case 1:    // tone
            {
                rsp_str = (kal_uint8 const*)"+ESDP: (0-4), (0)";       /* prepare the response string */
                break;
            }
        }
        string_length = (kal_uint16)strlen((char*)rsp_str); /* type casting */
        rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        l4c_set_mmi_default_prof_lind(op, category, param1, param2, param3, param4);
    }
    return KAL_TRUE;
}


#if defined(__NONE_USED_L4MMI_MESSAGE__)
/*****************************************************************************
 * FUNCTION
 *  l4c_update_mmi_default_prof_value_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  category        [IN]        
 *  param1          [IN]        
 *  param2          [IN]        
 *  param3          [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_update_mmi_default_prof_value_req(kal_uint8 category, kal_uint8 param1, kal_uint8 param2, kal_uint8 param3)
{
    return KAL_TRUE;
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_em_keypad_event_act_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  on_off      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_em_keypad_event_act_ind(kal_uint8 src_id, kal_bool on_off)
{
    l4c_em_keypad_event_act_lind(on_off);
    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_lcm_sleep_mode_req_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  on_off      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_em_lcm_sleep_mode_req_ind(kal_uint8 src_id, kal_uint8 on_off)
{
    l4c_em_lcm_sleep_mode_req_lind(on_off);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_pattern_play_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  pattern     [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_pattern_play_req(kal_uint8 src_id, kal_uint8 pattern, kal_uint8 action)
{

    l4cuem_pattern_play_req(pattern, action);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_hw_level_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  hw_profile      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_hw_level_req(kal_uint8 src_id, l4c_hw_profile_struct *hw_profile)
{
    l4cuem_set_hw_level_req_struct *param_ptr;

    if (is_eq_cmd_conflict(src_id, HW_PROF_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_EQ, src_id, HW_PROF_SET); //reset in l4cuem_set_hw_level_cnf_hdlr

    param_ptr = (l4cuem_set_hw_level_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cuem_set_hw_level_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    kal_mem_cpy(param_ptr->PWM1_freq_Level_Info, hw_profile->PWM1_freq_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(param_ptr->PWM1_duty_Level_Info, hw_profile->PWM1_duty_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(param_ptr->PWM2_freq_Level_Info, hw_profile->PWM2_freq_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(param_ptr->PWM2_duty_Level_Info, hw_profile->PWM2_duty_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(param_ptr->PWM3_freq_Level_Info, hw_profile->PWM3_freq_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(param_ptr->PWM3_duty_Level_Info, hw_profile->PWM3_duty_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(
        param_ptr->MainLCD_Contrast_Level_Info,
        hw_profile->MainLCD_Contrast_Level_Info,
        15 * sizeof(kal_uint8));
    kal_mem_cpy(param_ptr->MainLCD_Bias_Level_Info, hw_profile->MainLCD_Bias_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(param_ptr->MainLCD_Linerate_Level_Info, hw_profile->MainLCD_Linerate_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(param_ptr->MainLCD_Temp_Level_Info, hw_profile->MainLCD_Temp_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(param_ptr->SubLCD_Contrast_Level_Info, hw_profile->SubLCD_Contrast_Level_Info, 15 * sizeof(kal_uint8));
    kal_mem_cpy(param_ptr->SubLCD_Bias_Level_Info, hw_profile->SubLCD_Bias_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(param_ptr->SubLCD_Linerate_Level_Info, hw_profile->SubLCD_Linerate_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(param_ptr->SubLCD_Temp_Level_Info, hw_profile->SubLCD_Temp_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(param_ptr->Battery_Level_Info, hw_profile->Battery_Level_Info, 10 * sizeof(kal_uint32));

#ifdef __MULTI_LEVEL_BACKLIGHT_SUPPORT__
    kal_mem_cpy(param_ptr->bl_PWM_freq_Level_Info, hw_profile->bl_PWM_freq_Level_Info, PWM_MAX_BACKLIGHT_LEVEL * sizeof(kal_uint32));
    kal_mem_cpy(param_ptr->bl_PWM_duty_Level_Info, hw_profile->bl_PWM_duty_Level_Info, PWM_MAX_BACKLIGHT_LEVEL * sizeof(kal_uint32));
#endif

    l4c_send_msg_to_uem(MSG_ID_L4CUEM_SET_HW_LEVEL_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_hw_level_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  hw_profile      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_get_hw_level_req(kal_uint8 src_id, l4c_hw_profile_struct *hw_profile)
{
    l4cuem_set_hw_level_req_struct param_ptr;

    l4cuem_get_hw_level_req(&param_ptr);

    kal_mem_cpy(hw_profile->PWM1_freq_Level_Info, param_ptr.PWM1_freq_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(hw_profile->PWM1_duty_Level_Info, param_ptr.PWM1_duty_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(hw_profile->PWM2_freq_Level_Info, param_ptr.PWM2_freq_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(hw_profile->PWM2_duty_Level_Info, param_ptr.PWM2_duty_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(hw_profile->PWM3_freq_Level_Info, param_ptr.PWM3_freq_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(hw_profile->PWM3_duty_Level_Info, param_ptr.PWM3_duty_Level_Info, 5 * sizeof(kal_uint32));
    kal_mem_cpy(hw_profile->MainLCD_Contrast_Level_Info, param_ptr.MainLCD_Contrast_Level_Info, 15 * sizeof(kal_uint8));
    kal_mem_cpy(hw_profile->MainLCD_Bias_Level_Info, param_ptr.MainLCD_Bias_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(hw_profile->MainLCD_Linerate_Level_Info, param_ptr.MainLCD_Linerate_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(hw_profile->MainLCD_Temp_Level_Info, param_ptr.MainLCD_Temp_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(hw_profile->SubLCD_Contrast_Level_Info, param_ptr.SubLCD_Contrast_Level_Info, 15 * sizeof(kal_uint8));
    kal_mem_cpy(hw_profile->SubLCD_Bias_Level_Info, param_ptr.SubLCD_Bias_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(hw_profile->SubLCD_Linerate_Level_Info, param_ptr.SubLCD_Linerate_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(hw_profile->SubLCD_Temp_Level_Info, param_ptr.SubLCD_Temp_Level_Info, 5 * sizeof(kal_uint8));
    kal_mem_cpy(hw_profile->Battery_Level_Info, param_ptr.Battery_Level_Info, 10 * sizeof(kal_uint32));

#if defined(__MULTI_LEVEL_BACKLIGHT_SUPPORT__)
  kal_mem_cpy(hw_profile->bl_PWM_freq_Level_Info, param_ptr.bl_PWM_freq_Level_Info, PWM_MAX_BACKLIGHT_LEVEL * sizeof(kal_uint32));
  kal_mem_cpy(hw_profile->bl_PWM_duty_Level_Info, param_ptr.bl_PWM_duty_Level_Info, PWM_MAX_BACKLIGHT_LEVEL * sizeof(kal_uint32));
#endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_ms_sn_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_idx        [IN]        
 *  para            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_read_ms_sn_req(kal_uint8 src_id, nvram_lid_enum file_idx, kal_uint8 para)
{
    nvram_read_req_struct *param_ptr;

    if(is_eq_cmd_conflict(src_id, MS_SN_READ) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_EQ, src_id, MS_SN_READ); //reset in nvram_read_cnf_hdlr

    param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(src_id,
                                                                            file_idx,
                                                                            para,
                                                                            1);

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;

}


#if defined(__NONE_USED_L4MMI_MESSAGE__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_ms_imei_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_idx        [IN]        
 *  para            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_read_ms_imei_req(kal_uint8 src_id, nvram_lid_enum file_idx, kal_uint8 para)
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
/* under construction !*/
#endif
    return KAL_TRUE;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_ms_sv_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_idx        [IN]        
 *  para            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_read_ms_sv_req(kal_uint8 src_id, nvram_lid_enum file_idx, kal_uint8 para)
{
    nvram_read_req_struct *param_ptr;

    if (is_eq_cmd_conflict(src_id, MS_SV_READ) == KAL_TRUE)
        return KAL_FALSE;

    l4c_set_user_action(L4C_EQ, src_id, MS_SV_READ);

    param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(src_id,
                                                                            file_idx,
                                                                            para,
                                                                            1);

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_ms_sv_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  data        [IN]         
 *  length      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_ms_sv_req(kal_uint8 src_id, kal_uint8 *data, kal_uint8 length)
{
    nvram_write_req_struct *param_ptr;

    if (is_eq_cmd_conflict(src_id, MS_SV_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }
    l4c_set_user_action(L4C_EQ, src_id, MS_SV_SET); //reset in nvram_write_cnf_hdlr

    param_ptr = (nvram_write_req_struct*)l4c_construct_nvram_write_local_para(src_id,
                                                                              NVRAM_EF_SYS_CACHE_OCTET_LID,
                                                                              NVRAM_SYS_SVN);

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr, data, length);

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_ms_sn_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  data        [?]         
 *  length      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_ms_sn_req(kal_uint8 src_id, kal_uint8 *data, kal_uint8 length)
{
    nvram_write_req_struct *param_ptr;

    if (is_eq_cmd_conflict(src_id, MS_SN_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_EQ, src_id, MS_SN_SET); //reset in nvram_write_cnf_hdlr

    param_ptr = (nvram_write_req_struct*)l4c_construct_nvram_write_local_para(src_id,
                                                                              NVRAM_EF_BARCODE_NUM_LID,
                                                                              1);

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr, data, length);

    return KAL_TRUE;

}

/* 030923 mtk00468 add for write IMEI */


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_ms_imei_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  data        [?]         
 *  length      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_set_ms_imei_req(kal_uint8 src_id, kal_uint8 *data, kal_uint8 length)
{
    kal_uint16 para;
    nvram_write_req_struct *param_ptr;

    if (custom_allow_at_write_imei() == KAL_FALSE)
    {
        return KAL_FALSE;
    }
    
    if (is_eq_cmd_conflict(src_id, MS_IMEI_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_EQ,src_id, MS_IMEI_SET); //reset in nvram_write_cnf_hdlr

#ifdef __GEMINI__
    if (src_id != LMMI_SRC)
    {
        para = 1 + (RMMI_PTR->imei_action - RMMI_IMEI_WRITE);
    }
    else
    {
        para = 1 + (kal_uint16)l4c_gemini_get_actual_sim_id(l4c_current_mod_id - MOD_L4C);
    }
#else /* __GEMINI__ */ 
    para = 1;
#endif /* __GEMINI__ */ 

    param_ptr = (nvram_write_req_struct*)l4c_construct_nvram_write_local_para(src_id,
                                                                              NVRAM_EF_IMEI_IMEISV_LID,
                                                                              para);

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr, data, length);

#ifdef __DYNAMIC_SET_IMEI__
    {
        l4crac_set_imei_req_struct *param_ptr2;

        param_ptr2 = (l4crac_set_imei_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4crac_set_imei_req_struct), TD_RESET);

        kal_mem_cpy((void*)param_ptr2->imei, (void*)data, 8);

        l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_IMEI_REQ, param_ptr2);
    }
#endif

    return KAL_TRUE;

}

#if defined(NEPTUNE_MMI)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_autotest_report_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  file_idx        [IN]        
 *  para            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_read_autotest_report_req(kal_uint8 src_id, nvram_lid_enum file_idx, kal_uint8 para)
{
    nvram_read_req_struct *param_ptr;

    l4c_set_user_action(L4C_EQ, src_id, TEST_REPORT_READ); //reset in nvram_read_cnf_hdlr

    param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(src_id,
                                                                            file_idx,
                                                                            para,
                                                                            1);

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_lock_nvram_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_lock_nvram_req(kal_uint8 src_id, kal_uint8 mode)
{
    nvram_set_lock_req_struct *param_ptr;

    l4c_set_user_action(L4C_EQ, src_id, LOCK_NVRAM); //reset in nvram_set_lock_cnf_hdlr

    param_ptr = (nvram_set_lock_req_struct*)
        construct_local_para((kal_uint16) sizeof(nvram_set_lock_req_struct), TD_RESET);

    param_ptr->lock_en = mode;

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_SET_LOCK_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_sleep_mode_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  on_off      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
#if defined(__MTK_TARGET__) || defined(__UE_SIMULATOR__)
extern void L1SM_SleepDisable(kal_uint8 handle);
extern void L1SM_SleepEnable(kal_uint8 handle);
#endif
kal_bool l4c_em_sleep_mode_req(kal_bool on_off)
{
#if defined(__MTK_TARGET__) || defined(__UE_SIMULATOR__)
    if (on_off == KAL_FALSE)
    {
        L1SM_SleepDisable(rmmi_aux_PDNhandle);  //doesn't allow system to sleep
    }
    else
    {
        L1SM_SleepEnable(rmmi_aux_PDNhandle);
    }
#endif /* __MTK_TARGET__ __UE_SIMULATOR__ */ 
    return KAL_TRUE;
}


#if defined(__NONE_USED_L4MMI_MESSAGE__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_rtc_poweron_state_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_rtc_poweron_state_req(void)
{
    // l4cuem_rtc_poweron_state();
    return KAL_TRUE;
}
#endif

#ifdef __IRDA_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_irda_open_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  wait_duration       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_irda_open_req(kal_uint16 wait_duration)
{
    ircomm_open_struct *param_ptr;

    param_ptr = (ircomm_open_struct*) construct_local_para((kal_uint16) sizeof(ircomm_open_struct), TD_RESET);

    param_ptr->wait_duration = wait_duration;

    l4c_send_msg_to_irda(MSG_ID_IRCOMM_OPEN, param_ptr);

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_irda_close_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_irda_close_req(void)
{
    kal_uint8 result;
    kal_uint8 call_id;
    kal_uint8 next_call_id;
    l4c_call_entry_struct call_info;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    /* we have to disconnect data */
    if (l4c_ptr->cc_state[RMMI_SRC] != L4C_COMMAND_STATE && RMMI_PTR->uart_in_data_mode == KAL_TRUE)
    {
        if (l4c_ptr->uart_data_mode == L4C_CSD_DATA)
        {                                               /* CSD disconnect procedure */
            result = l4ccsm_cc_get_in_call(&call_id);   /* get in-call call id */
            if (result == KAL_TRUE)
            {                                           /* we have to prevent one Data call exist but incall is waitting call cases */
                l4ccsm_cc_get_call_info(call_id, &call_info, &next_call_id);
                /* we should get CSD call id rather using waitting call id */
                if (call_info.call_mode != CSMCC_DATA_CALL)
                {
                    /* if csd call exist only that call id posible */
                    result = l4ccsm_cc_get_active_call(&call_id);
                    if (result == 0)
                    {
                        ASSERT(0);
                    }
                }
            }
            if (result == KAL_TRUE && call_id != CSMCC_INVALID_CALL_ID)
            {
                l4ccsm_cc_call_disc_req_struct *param_ptr;

                param_ptr = (l4ccsm_cc_call_disc_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4ccsm_cc_call_disc_req_struct), TD_RESET);

                param_ptr->src_id = RMMI_SRC;
                param_ptr->call_id = call_id;
                l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_DISC_REQ, param_ptr, NULL, 0);
                l4c_ptr->cc_current_action[RMMI_SRC] = PPP_DEACT_EXE;
            }

        }
    #ifdef __MOD_TCM__
        else if (l4c_ptr->uart_data_mode == L4C_GPRS_DATA)
        {   /* PPP deactive procedure */
            l4cppp_deactivate_req_struct *param_ptr;

            param_ptr = (l4cppp_deactivate_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4cppp_deactivate_req_struct), TD_RESET);
            //param_ptr->context_id = RMMI_PTR->ppp_nsapi; //mtk02285, 201003, 6251_ram

            l4c_send_msg_to_ppp(MSG_ID_L4CPPP_DEACTIVATE_REQ, param_ptr);

            l4c_ptr->cc_current_action[RMMI_SRC] = PPP_DEACT_EXE;
            return KAL_TRUE;
        }
    #endif /* __MOD_TCM__ */ 
        else    /* abnormal case */
        {
            ASSERT(0);
        }

    }
    else if (l4c_ptr->cc_state[RMMI_SRC] == L4C_COMMAND_STATE)
    {
        l4c_send_msg_to_irda(MSG_ID_IRCOMM_DISCONNECT_REQ, NULL);

        l4c_send_msg_to_irda(MSG_ID_IRCOMM_CLOSE, NULL);

        /* open UART and obtain UART port */
        PS_UART_PORT = uart_port2;              /* set uart to IRDA port */
        RMMI_UART_Open(PS_UART_PORT, MOD_ATCI);
        rmmi_obtain_uart_control(uart_port2);   /* set uart owner */
    }
    else
    {

    }

    return KAL_TRUE;

}
#endif /* __IRDA_SUPPORT__ */ 

#ifdef __USB_ENABLE__


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_usbconfig_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  mode            [IN]        
 *  reserved        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_usbconfig_req(kal_uint8 src_id, kal_uint8 mode, kal_uint32 reserved)
{

    l4cuem_usbconfig_req(src_id, mode, reserved);

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_usbuart_switch_port_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  app             [IN]        
 *  new_port        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_eq_usbuart_switch_port_req(kal_uint8 src_id, kal_uint8 app, UART_PORT new_port)
{
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;
    
    kal_trace(TRACE_INFO, INFO_USBUART_SWITCH_PORT, src_id, app, new_port);     

    if (app == USB_SWITCH_PORT_APP_DATA)
    {
        UART_PORT port1 = uart_port_usb;
        UART_PORT port2 = uart_port_usb2;

        #ifdef __USB_MULTIPLE_COMPORT_SUPPORT__
        if (TST_PORT == uart_port_usb || TST_PORT_L1 == uart_port_usb)
        {
            port1 = uart_port_usb2;
            port2 = uart_port_usb;
        }
        /*else if (TST_PORT == uart_port_usb2 || TST_PORT_L1 == uart_port_usb2)
        {
            port1 = uart_port_usb;
            port2 = uart_port_usb2;
        }*/ // as default
        else if (PS_UART_PORT == uart_port_usb2)
        {
            port1 = uart_port_usb2;
            port2 = uart_port_usb;
        }        
        #endif

        if (RMMI_UART_GetOwnerID(PS_UART_PORT) != MOD_ATCI)
        {
            kal_trace(TRACE_WARNING, WARNING_UART_OWNER_IS_NOT_L4C, RMMI_UART_GetOwnerID(PS_UART_PORT));
            return KAL_FALSE;
        }

        if ((TST_PORT != port1) && (TST_PORT_L1 != port1))
        {
            l4c_comm_ptr->usb_app = USB_SWITCH_PORT_APP_DATA;
            rmmi_comm_ptr->uart_port_value = PS_UART_PORT;

            kal_trace(TRACE_INFO, INFO_L4C_EQ_USBUART_SWITCH_PORT_REQ_CALL_UART_SWITCHPORT, PS_UART_PORT);        
            RMMI_UART_OpenWithPort(PS_UART_PORT, port1);

            rmmi_root_plugout_uart(PS_UART_PORT);
            rmmi_root_plugin_uart(port1);

            PS_UART_PORT = port1;
        }
        else
        {
            return KAL_FALSE;
        }

#ifdef __USB_MULTIPLE_COMPORT_SUPPORT__
        kal_trace(TRACE_INFO, INFO_L4C_EQ_USBUART2_TST_USAGE, TST_PORT, TST_PORT_L1);
        if ((TST_PORT != port2) && (TST_PORT_L1 != port2))
        {
            rmmi_root_plugin_uart(port2);
            RMMI_UART_Open(port2, MOD_ATCI);
        }
#endif /* __USB_MULTIPLE_COMPORT_SUPPORT__, mtk02285_usb2 */
        
        
    }
    else if (app == USB_SWITCH_PORT_APP_DEBUG) 
    {
        rmmi_comm_ptr->uart_port_value = TST_PORT;
        l4c_comm_ptr->usb_app = USB_SWITCH_PORT_APP_DEBUG;
        tst_change_port(uart_port_usb);
    }

    return KAL_TRUE;

}

#ifdef __USB_MULTIPLE_COMPORT_SUPPORT__
kal_bool l4c_eq_read_nvm_uart_port_req(kal_uint8 src_id, kal_uint16 action) //MAUI_02304946, mtk02285
{
    nvram_read_req_struct* param_ptr = NULL;
	L4C_PTR->eq_current_action = action;
    param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(src_id,
                                                                            NVRAM_EF_PORT_SETTING_LID,
                                                                            1,
                                                                            1);
    l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);
    return KAL_TRUE;
}
#endif  /* __USB_MULTIPLE_COMPORT_SUPPORT__, mtk02285_usb2 */

#endif /* __USB_ENABLE__ */ 

#endif /* __MOD_UEM__ */ 
#if 0
#ifdef __RMMI_DEBUG__
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
/* under construction !*/
/* under construction !*/
#endif /* __RMMI_DEBUG__ */ 
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_pmic_config_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_pmic_config_req(kal_uint8 src_id, kal_uint8 request_type, pmic_config_param_struct request)
{
    l4cuem_em_pmic_config_req(src_id, request_type, request);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_usbdetect_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_usbdetect_res_req(kal_uint8 src_id, kal_uint8 action)
{
    l4cuem_usbdetect_res_req(action);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_battery_status_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  status_type     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_battery_status_res_req(kal_uint8 src_id, kal_uint8 status_type)
{
    l4cuem_battery_status_res_req(status_type);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_bt_set_vr_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  on_off      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_bt_set_vr_req(kal_uint8 src_id, kal_bool on_off)
{
#if defined(__BT_SUPPORT__)

    kal_uint8 buffer[10];
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    

    if (on_off == KAL_TRUE)
    {
        kal_sprintf((kal_char*) buffer, "+BVRA: 1");
    }
    else
    {
        kal_sprintf((kal_char*) buffer, "+BVRA: 0");
    }

    if (l4c_ptr->route_thru_lmmi == KAL_TRUE) 
    {
        /** MAUI_01517654 ** mtk02514 ** 090219******
        * User input AT+BVRA will enter this block
        ****************************************/
        rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user; 
        rmmi_write_to_uart((kal_uint8*) buffer, strlen((char*)buffer), KAL_TRUE);
        l4c_ptr->route_thru_lmmi = KAL_FALSE; 
    }
    else 
    {
        /** MAUI_01517654 ** mtk02514 ** 090219******
        * User who presses Right Soft Key of the MMI will enter this block
        ****************************************/
        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        rmmi_write_to_uart((kal_uint8*) buffer, strlen((char*)buffer), KAL_TRUE);
        rmmi_ptr->current_src = temp_src;
    }
#endif /* defined(__BT_SUPPORT__) */ 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vcard_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mode            [IN]        
 *  result          [IN]        
 *  file_path       [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_vcard_res_req(kal_uint8 mode, kal_bool result, kal_uint8 *file_path)
{
    //    kal_bool ret_val  = KAL_FALSE;
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 string_length = 0;
    kal_uint8 output_file_path[100];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (mode == 0)      //write operation
    {
        rmmi_final_rsp_generator(RMMI_SRC, result, buffer, string_length);
    }
    else if (mode == 1) //read operation
    {
        if (result == KAL_TRUE)
        {
            rmmi_byte_order_reverse(file_path, 50);
            rmmi_print_ucs2(file_path, output_file_path);
            kal_sprintf(
                (kal_char*) buffer,
                "+EVCARD: \"%s\"%c%c%c%cOK",
                output_file_path,
                rmmi_ptr->s_reg.s3,
                rmmi_ptr->s_reg.s4,
                rmmi_ptr->s_reg.s3,
                rmmi_ptr->s_reg.s4);
        }
        else
        {
            output_file_path[0] = RMMI_END_OF_STRING_CHAR;
            kal_sprintf(
                (kal_char*) buffer,
                "+EVCARD: \"%s\"%c%c%c%cOK",
                output_file_path,
                rmmi_ptr->s_reg.s3,
                rmmi_ptr->s_reg.s4,
                rmmi_ptr->s_reg.s3,
                rmmi_ptr->s_reg.s4);

        }
        string_length = (kal_uint8)strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }
    else if (mode == 2)
    {        
        if (result == KAL_TRUE)
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        else
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, L4C_NO_CAUSE);
    }
    else
    {
        kal_sprintf((kal_char*) buffer, "+EVCARD: ERROR");
        string_length = (kal_uint8)strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_vcalendar_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mode            [IN]        
 *  result          [IN]        
 *  cause           [IN]        
 *  total           [IN]        
 *  used            [IN]        
 *  index           [IN]        
 *  file_path       [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_vcalendar_res_req(
        kal_uint8 mode,
        kal_bool result,
        kal_uint8 cause,
        kal_uint8 total,
        kal_uint8 used,
        kal_uint8 index,
        kal_uint8 *file_path)
{
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 string_length = 0;
    kal_uint8 output_file_path[100];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (mode == 1 || mode == 2 || mode == 5)    /* update/delete/query Vcalendar 1.0 is supported or not */
    {
        if (result == KAL_FALSE)
        {
            rmmi_ptr->cmee_err = cause;
        }

        rmmi_final_rsp_generator(RMMI_SRC, result, buffer, string_length);
    }
    else if (mode == 0) /* add */
    {
        if (result == KAL_TRUE)
        {
            kal_sprintf((kal_char*) buffer, "+EVCLD: %d", index);
        }
        else
        {
            buffer[0] = RMMI_END_OF_STRING_CHAR;
        }

        string_length = (kal_uint8)strlen((char*)buffer);
        rmmi_final_rsp_generator(RMMI_SRC, result, buffer, string_length);
    }
    else if (mode == 3) /* read */
    {
        if (result == KAL_TRUE)
        {
            rmmi_byte_order_reverse(file_path, 50);
            rmmi_print_ucs2(file_path, output_file_path);
            kal_sprintf(
                (kal_char*) buffer,
                "+EVCLD: \"%s\"%c%c%c%cOK",
                output_file_path,
                rmmi_ptr->s_reg.s3,
                rmmi_ptr->s_reg.s4,
                rmmi_ptr->s_reg.s3,
                rmmi_ptr->s_reg.s4);
        }
        else
        {
            rmmi_ptr->cmee_err = cause;
            output_file_path[0] = RMMI_END_OF_STRING_CHAR;
            kal_sprintf(
                (kal_char*) buffer,
                "+EVCLD: \"%s\"%c%c%c%cOK",
                output_file_path,
                rmmi_ptr->s_reg.s3,
                rmmi_ptr->s_reg.s4,
                rmmi_ptr->s_reg.s3,
                rmmi_ptr->s_reg.s4);

        }
        string_length = (kal_uint8)strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }
    else if (mode == 4) /* query */
    {
        if (result == KAL_TRUE)
        {
            kal_sprintf((kal_char*) buffer, "+EVCLD: %d, %d", used, total);
        }
        else
        {
            buffer[0] = RMMI_END_OF_STRING_CHAR;
        }

        string_length = (kal_uint8)strlen((char*)buffer);
        rmmi_final_rsp_generator(RMMI_SRC, result, buffer, string_length);
    }
    else
    {
        kal_sprintf((kal_char*) buffer, "+EVCLD: ERROR");
        string_length = (kal_uint8)strlen((char*)buffer);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_str_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  length          [IN]        
 *  data_string     [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_str_res_req(kal_uint16 length, kal_uint8 *data_string)
{
    #ifdef __MMI_FMI__   

    //kal_bool ret_val  = KAL_FALSE;
    kal_uint8 buffer[300];
    kal_uint8 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (rmmi_ptr->MMI_string_enable == RMMI_EMMISTR_DISABLE)
    {
        return;
    }

    if (length > 0)
    {
        if (rmmi_ptr->MMI_string_enable == RMMI_EMMISTR_ENABLE)
        {
            kal_sprintf((kal_char*) buffer, "+MMI_STR: ");
            string_length = strlen((char*)buffer);
            kal_mem_cpy(buffer + string_length, data_string, length);

            string_length = string_length + length;
        }
        else if (rmmi_ptr->MMI_string_enable == RMMI_EMMISTR_DATA_FROM_MMI)
        {
            kal_mem_cpy(buffer, data_string, length);
            string_length = length;
        }
    }
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;

    #endif
}

//#if defined(DCM_ENABLE)


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_dcm_enable_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  enable      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_dcm_enable_req(kal_uint8 src_id, kal_bool enable)
{
    l4cuem_em_dcm_enable_req(enable);
    l4c_eq_dcm_enable_lrsp();   //l4cuem_em_dcm_enable_req() will be finished in a very short time
}

//#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_rf_test_gsm_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_rf_test_gsm_req(kal_uint8 src_id, kal_uint8 request_type, rf_test_gsm_param_struct request)
{
    //#if defined(__RFTOOL_ON_MOBILE__)
    l4cuem_em_rf_test_gsm_req(src_id, request_type, request);
    //#endif    
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_fm_radio_config_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_fm_radio_config_req(kal_uint8 src_id, kal_uint8 request_type, fm_radio_config_param_struct request)
{
    l4cuem_em_fm_radio_config_req(src_id, request_type, request);
}

#if defined(__WIFI_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_rf_test_wifi_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_rf_test_wifi_req(kal_uint8 src_id, kal_uint8 request_type, rf_test_wifi_param_struct request)
{
    l4cuem_em_rf_test_wifi_req(src_id, request_type, request);
}
#endif

   // #ifdef __VOIP__


/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_eq_call_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  call_status     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mmi_eq_call_status_req(kal_uint8 src_id, kal_uint8 call_status)
{
    /*
     * 
     * typedef enum {
     * UEM_CALL_UNKNOW     = 0 ,
     * UEM_CALL_SETUP          , 
     * UEM_CALL_CONNECT        ,
     * UEM_CALL_DISCONNECT           
     * }uem_call_state_enum;   
     * 
     */

    l4cuem_call_status_req_ind(call_status);
}

//#endif /*__VOIP__*/    

void l4c_eq_lcd_set_contrast_req(kal_uint8 lcd_type, kal_uint8 lcd_contrast)
{
	l4cuem_lcd_set_contrast_req(lcd_type,  lcd_contrast);

	l4c_eq_lcd_set_contrast_lrsp(KAL_TRUE);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_query_hand_free_mode_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  call_status     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_query_hand_free_mode_res_req(kal_bool is_hand_free)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    kal_uint8 const *rsp_str = NULL;    /* response string and initialization */
    kal_uint16 string_length = 0;       /* string length variable */
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
	
    if (l4c_ptr->route_thru_lmmi == KAL_TRUE)
    {
        rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;
    }    

    rmmi_ptr->arg_list[0] = (void*)&is_hand_free;     
    #ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif
    rsp_str = &buffer[0];
    rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);

    rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_avr_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  call_status     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_set_avr_res_req(kal_uint8 result, kal_uint8 mode)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 const *rsp_str = NULL;    /* response string and initialization */
    kal_uint16 string_length = 0;       /* string length variable */
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
	
    if (l4c_ptr->route_thru_lmmi == KAL_TRUE)
    {
        rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;
    }    

    if (result == KAL_FALSE)
    {
       #ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
       #endif
       rsp_str = &buffer[0];
       rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
	
       l4c_ptr->route_thru_lmmi = KAL_FALSE; 
	   
       return;
    }
    else if (result == 2)
    {
       #ifdef __TC01__ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
       #endif
       rsp_str = &buffer[0];
       rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);

       l4c_ptr->route_thru_lmmi = KAL_FALSE; 

       return;
    }

    if (mode == 0)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 1)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 2)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 3)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 4)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 5)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 6)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 7)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    
    rsp_str = &buffer[0];
    rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);

    rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_cam_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  call_status     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_set_cam_res_req(kal_uint8 result, kal_uint8 mode)
{
    kal_uint8 const *rsp_str = NULL;    /* response string and initialization */
    kal_uint16 string_length = 0;       /* string length variable */
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
	
    if (l4c_ptr->route_thru_lmmi == KAL_TRUE)
    {
        rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;
    }    

    if (result == KAL_FALSE)
    {
       #ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
       #endif
       rsp_str = &buffer[0];
       rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);

       l4c_ptr->route_thru_lmmi = KAL_FALSE; 

       return;
    }
    else if (result == 2)
    {
       #ifdef __TC01__ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
       #endif
       rsp_str = &buffer[0];
       rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);

       l4c_ptr->route_thru_lmmi = KAL_FALSE; 

       return;
    }

    if (mode == 0)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 1)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 2)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 3)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 4)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 5)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 6)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 7)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 8)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 9)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 10)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 11)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    else if (mode == 12)
    {
    	#ifdef __TC01__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
    }
    rsp_str = &buffer[0];
    rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);

    rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
}

#if defined(PLUTO_MMI)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_ram_usage_res_req
 * DESCRIPTION
 *  This handle response message for Getting RAM usage request, and 'used' indicated how many Bytes 
 * RAM is used.
 * PARAMETERS
 *  result          [IN]        
 *  used           [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_ram_usage_res_req(kal_int8 result, kal_uint32 used)
{
#if defined(__OP11_ATK__) || defined(__AUTO_ATK__)
    kal_uint8 buffer[20];
    kal_uint32 string_length = 0;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;

    if(result == 0)
    {
        string_length = kal_sprintf((kal_char *)buffer, "+ERAM: %d Bytes", used);
        rmmi_write_to_uart(buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
#endif /* defined(__OP11_ATK__) || defined(__AUTO_ATK__) */
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_launch_app_res_req
 * DESCRIPTION
 *  This handle response message for launching a Java/MRE application
 * PARAMETERS
 *  result          [IN]            
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_launch_app_res_req(kal_int8 result)
{
#if defined(__OP11_ATK__) || defined(__AUTO_ATK__)
    l4c_context_struct *l4c_ptr = L4C_PTR;

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;

    if(result == 0)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
#endif /* defined(__OP11_ATK__) || defined(__AUTO_ATK__) */
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_app_info_output_res_req
 * DESCRIPTION
 *  Output the log message from Java/MRE application, the log may be standard output or error message
 * PARAMETERS
 *  type          [IN]     
 *  log            [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_app_info_output_res_req(kal_uint8 type, kal_uint16 *log)
{
#if defined(__OP11_ATK__) || defined(__AUTO_ATK__)
    kal_uint16 string_length = 0;
    kal_uint16 log_length = 0;
    kal_uint16 out_len = 0;
    kal_uint16 finished = 0;
    kal_uint8 i;
    kal_uint8 *buffer = NULL;
    kal_uint8 data1;
    kal_uint8 data2;
    kal_uint8 temp_src;
    kal_uint8 *log_ptr = NULL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    if(type > 1)
    {
        return;
    }

    log_length = (kal_uint16)wcslen((kal_wchar *)log); /* counted by wchar */
    
    if(log_length >= 1000)
    {
        return; /* MMI will guarantee that log length less than 2000 Bytes, not our limitation, 
                           * String length Exceed 2000 Bytes may caused by memory corruption */
    }
    log_length *= 2;/* counted by Byte */

    if(log_length > ((MAX_DATA_QUEUE_LENGTH-100)/2))
    {
        out_len = (MAX_DATA_QUEUE_LENGTH - 100)/2;
    }
    else
    {
        out_len = log_length; 
    }
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    
    buffer = get_ctrl_buffer(out_len*2 + 20);/* 20: used to add header and tail on log string */
    
    rmmi_ptr->arg_list[0] = (void*)&rmmi_ptr->s_reg.s3;
    rmmi_ptr->arg_list[1] = (void*)&rmmi_ptr->s_reg.s4;
    rmmi_ptr->arg_list[2] = (void*)&type;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*)"%c%c+ELOG: %d,\"", rmmi_ptr->arg_list, 3);
    

    log_ptr = (kal_uint8 *)log;
    while(log_length > 0)
    {
        for(i = 0; i < out_len; i++)
        {
            data1 = (log_ptr[i+finished] & 0xF0) >> 4;
            data2 = (log_ptr[i+finished] & 0x0F);

            if(data1 <= 9)      
            {
                data1 += 0x30;
            }
            else if((data1 >= 0xA) && (data1 <= 0xF))      
            {
                data1 += 0x37;
            }

            if(data2 <= 9)      
            {
                data2 += 0x30;
            }
            else if((data2 >= 0xA) && (data2 <= 0xF))      
            {
                data2 += 0x37;
            }

            buffer[2*i+string_length] = data1;
            buffer[2*i+1+string_length] = data2;
        }
        string_length += out_len * 2;
        finished += out_len;
        log_length -= out_len;
        if(log_length > ((MAX_DATA_QUEUE_LENGTH-100)/2))
        {
            out_len = (MAX_DATA_QUEUE_LENGTH - 100)/2;
        }
        else
        {
            out_len = log_length;
        }
        rmmi_write_to_uart(buffer, string_length, KAL_FALSE);
        string_length = 0;
    }

    /* Append "<CR><LF> on the end of the output */
    buffer[0] = 0x22;
    buffer[1] = 0x0d;
    buffer[2] = 0x0a;

    rmmi_write_to_uart(buffer, 3, KAL_FALSE);
    
    if(buffer != NULL)
    {
        free_ctrl_buffer(buffer);
    }
    rmmi_ptr->current_src = temp_src;
#endif /* defined(__OP11_ATK__) || defined(__AUTO_ATK__) */
}
#endif /* defined(PLUTO_MMI) */


#if defined(__MMI_FMI__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_ringtone_play_res_req
 * DESCRIPTION
 *  Ringtone Play request result, returned by MMI
 * PARAMETERS
 *  type          [IN]     
 *  log            [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_ringtone_play_res_req(kal_bool result, kal_uint8 cause)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    RMMI_PTR->current_src = l4c_ptr->route_thru_lmmi_user; 
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;

    if(result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
}

#endif /* defined(__MMI_FMI__) */

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_boot_mode_req
 * DESCRIPTION
 * PARAMETERS
 *  src_id        [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_set_boot_mode_req(kal_uint8 src_id, kal_uint8 mode)
{
    if (mode == 1)
    {
        L4C_COMM_PTR->poweron_mode = POWER_ON_EXCEPTION;
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_em_get_conftest_para_req
 * DESCRIPTION
 *  Get Current PS conformance test profile.
 * PARAMETERS
 *  src_id        [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_get_conftest_para_req(kal_uint8 src_id)
{

    if(src_id >= RMMI_SRC)
    {
        l4c_em_get_conftest_para_rrsp(KAL_TRUE);
    }
    else
    {
        l4c_em_get_conftest_para_lrsp(KAL_TRUE,
                                      L4C_COMM_PTR->ps_conf_test_mode,
                                      L4C_COMM_PTR->ps_conf_test_profile);
    }

}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_set_conftest_para_req
 * DESCRIPTION
 *  Set PS conformance test profile.
 * PARAMETERS
 *  src_id        [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_em_set_conftest_para_req(kal_uint8 src_id, kal_uint8 conf_test_mode, kal_uint32 test_profile)
{
    nvram_write_req_struct *param_ptr;
    kal_uint32 setting;

    if(!is_eq_cmd_conflict(src_id, PS_CONF_TEST_PROFILE_SET))
    {
        l4c_set_user_action(L4C_EQ, src_id, PS_CONF_TEST_PROFILE_SET); /* Reset in nvram_write_cnf_hdlr */
        param_ptr = (nvram_write_req_struct *)l4c_construct_nvram_write_local_para(src_id,
                                                                                   NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID,
                                                                                   1);
        setting = (conf_test_mode << 24);
        setting |= (test_profile & 0x00FFFFFF);
        
        /* mtk80396 apply on run time for some test items that will refer to L4 context on run time,
           but if related module only read from L4 context once during power on, Then need to reboot the device!*/
        L4C_COMM_PTR->ps_conf_test_mode = conf_test_mode;
        L4C_COMM_PTR->ps_conf_test_profile = test_profile;
        
        l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ,
                            param_ptr,
                            (kal_uint8 *)&setting,
                            4);
        return KAL_TRUE;
    }
    else
    {
        if(src_id < RMMI_SRC)
        {
            l4c_em_set_conftest_para_lrsp(L4C_SET_PS_CONF_TEST_PROFILE_CONFLICT);
        }
        return KAL_FALSE;
    }

}


#if defined(__UMTS_FDD_MODE__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_rf_test_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  func     [IN]    
 *      
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_3g_rf_test_req(kal_uint8 src_id, kal_uint8 func, kal_uint8 band, kal_uint16 freq, kal_int8 power)
{
    l4ul1_em_tst_req_struct *param_ptr = NULL;
    
    /* Check EQ action here */
    if (is_eq_cmd_conflict(src_id, RF_TEST_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }
    l4c_set_user_action(L4C_EQ, src_id, RF_TEST_SET);
    
    param_ptr = (l4ul1_em_tst_req_struct *)construct_local_para(sizeof(l4ul1_em_tst_req_struct), TD_RESET);
    
    param_ptr->src_id = src_id;
    
    if(func == 0)
    {
        param_ptr->type = UL1_EM_TST_CMD_TX_DPCH;
        param_ptr->param.txdpch.rf_band = band;
        param_ptr->param.txdpch.ul_freq = freq;
        param_ptr->param.txdpch.power = power;
    }
    else
    {
        param_ptr->type = UL1_EM_TST_CMD_END;
    }
    
    msg_send6(MOD_L4C,MOD_UL1,L4C_UL1_SAP,MSG_ID_L4CUL1_EM_TST_CONTROL_REQ,(local_para_struct*) param_ptr,
              NULL);
    
    return KAL_TRUE;
}
#endif



#if defined(__AT_ENFC_SUPPORT__) || defined(__NFC_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_nfc_test_request
 * DESCRIPTION
 *  This function is for sending test request message to NFC.
 * PARAMETERS
 *  src_id        [IN]     
 *  option        [IN]
 *  data_ptr    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_eq_nfc_test_req(kal_uint8 src_id, kal_uint8 option, void *data_ptr)
{
    kal_uint32 msg_len;
    nfc_msg_struct *msg_ptr = NULL;

    if(is_eq_cmd_conflict(src_id, ENFC_EXE) == KAL_TRUE)
    {
        /* command conflict !*/
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_EQ, src_id, ENFC_EXE);
    
    switch(option)
    {
        case 0:
        case 1:
        {
            msg_len = sizeof(nfc_script_request);
            msg_ptr = (nfc_msg_struct *)
                construct_local_para((sizeof(nfc_msg_struct) + msg_len),
                                     TD_RESET);
            if(option == 0)
            {
                msg_ptr->msg_type = (kal_uint32)MSG_ID_NFC_SWP_SELF_TEST_REQ;
            }
            else
            {
                msg_ptr->msg_type = (kal_uint32)MSG_ID_NFC_ANTENNA_SELF_TEST_REQ;
            }
            
            msg_ptr->msg_length = msg_len;
            kal_mem_cpy((void *)((kal_uint8 *)msg_ptr+ sizeof(nfc_msg_struct)), data_ptr, msg_len);
            
            break;
        }
        case 2:
        {
            msg_len = sizeof(nfc_script_uid_request);
            msg_ptr = (nfc_msg_struct *)
                construct_local_para((sizeof(nfc_msg_struct) + msg_len),
                                     TD_RESET);
            
            msg_ptr->msg_type = (kal_uint32)MSG_ID_NFC_TAG_UID_RW_REQ;
            msg_ptr->msg_length = msg_len;
            kal_mem_cpy((void *)((kal_uint8 *)msg_ptr+ sizeof(nfc_msg_struct)), data_ptr, msg_len);
            break;
        }
        case 3:
        {
            msg_len = sizeof(nfc_meta_card_emulation_request);
            msg_ptr = (nfc_msg_struct *)
                construct_local_para((sizeof(nfc_msg_struct) + msg_len),
                                     TD_RESET);
            msg_ptr->msg_type = (kal_uint32)MSG_ID_NFC_CARD_EMULATION_MODE_TEST_REQ;
            msg_ptr->msg_length = msg_len;
            kal_mem_cpy((void *)((kal_uint8 *)msg_ptr+ sizeof(nfc_msg_struct)), data_ptr, msg_len);
            break;
        }
        default:
        {
            return KAL_FALSE;
        }
    }

    l4c_send_msg(MOD_NFC, MSG_ID_NFC_TEST_REQ, INVALID_SAP, (void *)msg_ptr, NULL);//SAP id can be revised
    return KAL_TRUE;
}
#endif


#if defined(__AT_BACKUP_DATA_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_em_set_sds_req
 * DESCRIPTION
 *  Secure data backup/restore request
 * PARAMETERS
 *  src_id        [IN] 
 *  op             [IN]
 * RETURNS
 *  void
 *****************************************************************************/

kal_bool l4c_em_set_sds_req(kal_uint8 src_id, kal_uint8 op)
{
    nvram_sds_req_struct *param_ptr;

    if(!is_eq_cmd_conflict(src_id, ESDS_SET))
    {
        l4c_set_user_action(L4C_EQ, src_id, ESDS_SET); /* Reset in nvram_sds_cnf */
        param_ptr = (nvram_sds_req_struct*) construct_local_para((kal_uint16) sizeof(nvram_sds_req_struct), TD_RESET);
        
        param_ptr->access_id = src_id;
        if(op == 0)
	    {
	        param_ptr->access_mode = NVRAM_SDS_ACCESS_BACKUP;
	    }
        else
	    {
	        param_ptr->access_mode = NVRAM_SDS_ACCESS_RESTORE;
	    }
        
        l4c_send_msg_to_nvm(MSG_ID_NVRAM_SDS_REQ,
                            param_ptr,
                            NULL,
                            0);
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
	
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_query_cal_data_dl_status_req
 * DESCRIPTION
 *  This function is to query downlink status for calibration data
 * PARAMETERS
 *  src_id        [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_query_cal_data_dl_status_req(kal_uint8 src_id)
{
#ifdef __MTK_TARGET__
    l4cl1_query_cal_data_dl_status_req_struct* param_ptr = NULL;

    param_ptr = (l4cl1_query_cal_data_dl_status_req_struct*)construct_local_para(
                sizeof(l4cl1_query_cal_data_dl_status_req_struct), TD_RESET);
    param_ptr->src_id = src_id;
    l4c_send_msg(L4_MODULE(MOD_L1, l4c_current_mod_id - MOD_L4C), 
                 MSG_ID_L4CL1_QUERY_CAL_DATA_DL_STATUS_REQ, 
                 L4C_L1_SAP,
                 param_ptr,
                 NULL);
#else
    if (src_id == LMMI_SRC)
    {
        l4c_eq_query_cal_data_dl_status_lrsp(KAL_TRUE);
    }
    else if ((src_id >= RMMI_SRC) && (src_id < RMMI_ALL))
    {
        l4c_eq_query_cal_data_dl_status_rrsp(KAL_TRUE);
    }
#endif /* __MTK_TARGET__ */
    return;
}


#if defined(__DUAL_TALK_MODEM_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_med_in_proc_call_req
 * DESCRIPTION
 *  construct and send MSG_ID_MEDIA_IN_PROC_CALL_REQ to MED
 * PARAMETERS
 *  cmd_id      [IN]    rmmi_extended_cmd_id_enum
 *  func        [IN]    function that will be invoked by MED
 *  func_arg2   [IN]    rmmi_l1audio_spc_param_struct as arg2 for func
 * RETURNS
 *  kal_bool
 *****************************************************************************/
kal_bool l4c_med_in_proc_call_req(l4c_source_id_enum src_id,
                                  kal_uint16 cmd_id, 
                                  void *cmd_info,
                                  kal_uint16 size_of_info)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    void *func_arg2_ptr = NULL;
    media_in_proc_call_req_struct *local_param_ptr = NULL;

    if (l4c_ptr->l1aud_spc_src_id != INVALID_SRC)
    {
        return KAL_FALSE;
    }
    
    local_param_ptr = (media_in_proc_call_req_struct*)construct_local_para(
        (kal_uint16)sizeof(media_in_proc_call_req_struct), TD_RESET);

    l4c_ptr->l1aud_spc_src_id = src_id;
    
    if (size_of_info > 0)
    {
        func_arg2_ptr = get_ctrl_buffer(size_of_info);
        kal_mem_cpy(func_arg2_ptr, cmd_info, size_of_info);
    }

    local_param_ptr->func = rmmi_l1aud_spc_callback;
    local_param_ptr->func_arg1 = cmd_id;
    local_param_ptr->func_arg2 = func_arg2_ptr;

    l4c_send_msg(MOD_MED, MSG_ID_MEDIA_IN_PROC_CALL_REQ, L4_AUD_SAP, local_param_ptr, NULL);

    return KAL_TRUE;
}
#endif /* defined(__DUAL_TALK_MODEM_SUPPORT__) */

