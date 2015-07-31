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
 * SMU_MAIN.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is the handler function process the input message of SMU module.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
/* KAL - RTOS Abstraction Layer */
//#include "kal_release.h"

/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "stack_ltlcom.h"

/* Timer Management  */
//#include "stacklib.h"
//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"

/* Buffer Management */
//#include "app_buff_alloc.h"     

/* Task Management */
//#include "syscomp_config.h"     
#include "task_config.h"  

#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
//#include "custom_nvram_editor_data_item.h"
//#include "common_nvram_editor_data_item.h"
#include "custom_nvram_extra.h"
#ifdef __SML_TEST__
#include "custom_nvram_sec.h"
#include "tst_sap.h"
#endif
#include "ps2sat_struct.h"	/* Benson SATCE */
#include "smu_def.h"
#include "l4c2smu_struct.h"	/* Benson SATCE */
#include "nvram_struct.h"
#include "nvram_enums.h"
//#include "nvram_user_defs.h" /* for file IDs */
#include "l4c_common_enum.h"
//#ifdef __MCD__
//#include "mcd.h"
//#include "mcd_ps2sat_peer.h"
//#else
//#include "ps2sat_peer.h"
//#endif
#include "kal_trace.h"
#include "smu_trc.h"

#include "phb_utils.h"

//#include "csmss_common_enums.h"
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "l4c_sim_msg.h"

#include "ps2sim_struct.h"
//#include "sim_al.h"
//#include "dma_sw.h"  
//#include "sim_sw.h"  
//#include "sim_def.h"
//extern sim_context_struct sim_context_g;

//#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#ifdef __SMS_DEPERSONALIZATION__
#include "L4c_nw_cmd.h" //Kinki : OTA
#endif

//#include "mcd_l3_inc_struct.h"
#include "l4c_utility.h"  //Kinki : OTA

//#include "cbm_consts.h"    
//#include "kal_non_specific_general_types.h"   
//#include "mcd_l4_common.h"    
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"    
//#include "nvram_common_defs.h"    
//#include "ps_trace.h"    
#include "string.h"    
#include "device.h"    
//#include "common_nvram_editor_data_item.h"    
//#include "kal_common_defs.h"    
//#include "soc_consts.h"

#include "kal_general_types.h"
#include "kal_public_api.h"   
#include "kal_public_defs.h"  
#include "nvram_data_items.h" 
//#include "kal_internal_api.h" 
#include "ps_public_struct.h" 
//#include "ps_public_enum.h"   
#include "sim_ps_api.h"

#include "md_sap.h"
#include "svc_sap.h"
#include "drv_msgid.h"
#include "sim_public_msgid.h"
#include "nvram_msgid.h"
#include "sim_ps_msgid.h"
#include "l4_msgid.h"

#include "ps_public_utility.h"

#if defined(__SATCE__) && !defined(__RSAT__)  //mtk02374
#include "custom_data_account.h"
#include "mcd.h"
#include "mcd_ps2sat_peer.h"

#include "soc_api.h"		/* Benson SATCE */
#include "app2cbm_struct.h"

extern kal_uint32 cbm_encode_data_account_id(kal_uint32 acct_id, cbm_sim_id_enum sim_id, 
                                      kal_uint8 app_id, kal_bool always_ask);
#endif /* defined(__SATCE__) && !defined(__RSAT__) */

#if defined(__CUSTOMER_TC01_DISK__) && !defined(WISDOM_MMI)
extern kal_bool smu_tc01_check_sml(kal_uint8 src_id);
extern void smu_tc01_sml_Verify(kal_uint8 src_id, smu_security_type_enum type, kal_uint8 * key);
#endif

void nvram_read_cnf_handler(ilm_struct * smu_ilm_ptr);
//void nvram_write_cnf_handler(ilm_struct * smu_ilm_ptr); 
void smu_mmrr_ready_ind_handler( ilm_struct *smu_ilm_ptr );


/*****************************************************************************
 * FUNCTION
 *  smu_free_ctrl_buffer
 * DESCRIPTION
 *  
 * PARAMETERS
 *  p       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void smu_free_ctrl_buffer(void *p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (p != NULL)
    {
        free_ctrl_buffer(p);
    }
}   /* end of smu_free_ctrl_buffer */

#ifdef __SMU_DBG__


/*****************************************************************************
 * FUNCTION
 *  smu_dbg_print
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mod_id      [IN]        
 *  title       [?]         
 *  data        [?]         
 *  len         [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void smu_dbg_print(module_type mod_id, kal_char *title, kal_uint8 *data, kal_uint16 len)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint16 i = 0;
    kal_uint8 temp1[10];
    kal_uint8 *temp = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    temp = get_ctrl_buffer(256);
    kal_sys_trace(title);
    temp[0] = '\0';
    for (i = 0; i < len; i++)
    {
        kal_sprintf(temp1, "%2X ", *(data + i));
        strcat((kal_char*) temp, (kal_char*) temp1);
        if ((((i + 1) % 50) == 0) || (i == len - 1))
        {
            kal_sys_trace((kal_char*) temp);
            temp[0] = '\0';
        }
    }
    free_ctrl_buffer(temp);
}

#define SMU_DBG_PRINT(title_ptr,data_ptr,len) 		smu_dbg_print(MOD_SMU, title_ptr, data_ptr,len)
#else /* __SMU_DBG__ */ 
#define SMU_DBG_PRINT(title_ptr,data_ptr,len)
#endif /* __SMU_DBG__ */ 

//#ifdef __MCD__
#if defined(__SATCE__) && !defined(__RSAT__)  //mtk02374


/*****************************************************************************
 * FUNCTION
 *  smu_mcd_pack
 * DESCRIPTION
 *  This function is used to pack peer air messages
 * CALLS
 *  
 * PARAMETERS
 *  structid            [IN]        
 *  msg                 [?]         
 *  peer_buff_ptr       [IN]        
 *  hdr_size            [IN]        
 *  tlr_size            [IN]        
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void smu_mcd_pack(
        kal_uint16 structid,
        kal_uint8 *msg,
        peer_buff_struct **peer_buff_ptr,
        kal_uint8 hdr_size,
        kal_uint8 tlr_size)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 *peer_packed_pdu_ptr;
    kal_uint16 pdu_length;
    kal_uint16 len;
    kal_uint32 bits;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    bits = mcd_pack(structid, l4_pun_dest_buff, sizeof(l4_pun_dest_buff), msg);

    ASSERT(bits != MCD_ERROR);

    pdu_length = (bits + 0x7) >> 3;

    *peer_buff_ptr = construct_peer_buff(pdu_length, hdr_size, tlr_size, TD_UL);

    peer_packed_pdu_ptr = get_peer_buff_pdu(*peer_buff_ptr, &len);

    kal_mem_cpy(peer_packed_pdu_ptr, l4_pun_dest_buff, pdu_length);

}   /* end of smsal_mcd_pack */


/*****************************************************************************
 * FUNCTION
 *  smu_mcd_unpack
 * DESCRIPTION
 *  This function is used to unpack peer air messages
 * CALLS
 *  
 * PARAMETERS
 *  structid            [IN]        
 *  peer_buff_ptr       [?]         
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void smu_mcd_unpack(kal_uint16 structid, peer_buff_struct *peer_buff_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 *packed_peer_buff_ptr;
    kal_uint16 packed_peer_buff_len;
    kal_uint32 ret_val;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    packed_peer_buff_ptr = get_peer_buff_pdu(peer_buff_ptr, &packed_peer_buff_len);

    ret_val = mcd_unpack(
                structid,
                l4_pun_dest_buff,
                sizeof(l4_pun_dest_buff),
                (kal_uint32*) packed_peer_buff_ptr,
                packed_peer_buff_len * 8);

    ASSERT(ret_val != MCD_ERROR);

}   /* end of smu_mcd_unpack */
#endif // __SATCE__
//#endif /* __MCD__ */


/*****************************************************************************
 * FUNCTION
 *  smu_send_ilm
 * DESCRIPTION
 *  This function is to send ilm to external module.
 * PARAMETERS
 *  dest_id             [IN]        Type of security
 *  sap_id              [IN]        Sap id
 *  msg_id              [IN]        Message id
 *  local_param_ptr     [IN]        Pointer of local parameter
 *  peer_buf_ptr        [IN]        Pointer of peer buf
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_send_ilm(module_type dest_id, sap_type sap_id, kal_uint16 msg_id, void *local_param_ptr, void *peer_buf_ptr)
{
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (dest_id == MOD_SIM || dest_id == MOD_L4C)
    {
        dest_id = SMU_MODULE(dest_id, this_smu->smu_current_mod - MOD_SMU);
    }
    
    msg_send6(this_smu->smu_current_mod, dest_id, sap_id, msg_id, 
              (local_para_struct *)local_param_ptr, 
              (peer_buff_struct *)peer_buf_ptr);
}   /* End of sim_send_ilm */

#ifdef __WIFI_SUPPORT__
#define SUPC_RAND_SIZE 16
#define SUPC_SIM_BLOCK_EV_GSM_AUTH 0x1

smu_supc_sim_authenticate_response_struct *supl_ret_p = NULL;
int auth_result;

extern kal_eventgrpid supc_sim_block_ev_id;

#define SMU_WAIT_EVENT(_ev_id, _ev)                      \
{                                                        \
    kal_uint32 retrieved_events;                         \
    kal_retrieve_eg_events(_ev_id, _ev,                  \
    	    KAL_OR_CONSUME, &retrieved_events, KAL_SUSPEND);\
}

#define SMU_SET_EVENT(_ev_id, _ev) \
         kal_set_eg_events(_ev_id, _ev, KAL_OR);


/*****************************************************************************
 * FUNCTION
 *  smu_supc_cb_auth
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rand        [?]     
 *  ret        [?]     
 * RETURNS
 *  0       SUCCESS
 *  -1     ERROR
 *****************************************************************************/
int smu_supc_cb_auth(smu_supc_sim_authenticate_request_struct *req, smu_supc_sim_authenticate_response_struct *res)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /* Call back function preparted for MOD_SUPC */
    sim_authenticate_req_struct *local_para_ptr;
    module_type src, dest;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (req == NULL  || res == NULL)
    {
        return -1; // Should not be NULL
    }

    auth_result = 0;

    local_para_ptr = (sim_authenticate_req_struct*) construct_local_para(sizeof(sim_authenticate_req_struct), TD_CTRL);
    kal_mem_cpy(local_para_ptr->rand, req->rand, SUPC_RAND_SIZE);
    local_para_ptr->is_auth_present = req->is_auth_present;
    kal_mem_cpy(local_para_ptr->auth, req->auth, SUPC_RAND_SIZE);

    src = SMU_MODULE(MOD_SMU, req->sim_id);
    dest = SMU_MODULE(MOD_SIM, req->sim_id);

    msg_send5(src, dest, PS_SIM_SAP, MSG_ID_SIM_AUTHENTICATE_REQ, (local_para_struct *)local_para_ptr);

    supl_ret_p = res;
    
    //Suspend here and wait for response from SIM, before that, save the pointers of response
    SMU_WAIT_EVENT(supc_sim_block_ev_id, SUPC_SIM_BLOCK_EV_GSM_AUTH);

    return auth_result;
}

/*****************************************************************************
 * FUNCTION
 *  sim_authenticate_cnf_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void sim_authenticate_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sim_authenticate_cnf_struct *local_para_ptr = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /*
     * J: Things to do:
     * * 1. Fill the response into global var pointed to the parameters of call back functions
     * * 2. Set events to resume blocked function
     */
    local_para_ptr = (sim_authenticate_cnf_struct*) smu_ilm_ptr->local_para_ptr;

    supl_ret_p->result = local_para_ptr->result;

    if (local_para_ptr->result == SIM_CMD_SUCCESS)
    {
        kal_mem_cpy(supl_ret_p->kc, &(local_para_ptr->kc[0]), 8);
        kal_mem_cpy(supl_ret_p->sres, &(local_para_ptr->sres[0]), 4);
        kal_mem_cpy(supl_ret_p->ck, &(local_para_ptr->ck[0]), 16);
        kal_mem_cpy(supl_ret_p->ik, &(local_para_ptr->ik[0]), 16);
        kal_mem_cpy(supl_ret_p->res, &(local_para_ptr->res[0]), 16);
        supl_ret_p->res_len = local_para_ptr->res_len;
        kal_mem_cpy(supl_ret_p->auts, &(local_para_ptr->auts[0]), 16);
        supl_ret_p->auts_len = local_para_ptr->auts_len;
        
        auth_result = 0;
    }
    else
    {
        /***********************************************
          *  When SIM response ERROR, should notify WIFI task,
          *   return -1.
	   ***********************************************/
        auth_result = -1;
    }

    SMU_SET_EVENT(supc_sim_block_ev_id, SUPC_SIM_BLOCK_EV_GSM_AUTH);

    return;
}

#endif /* __WIFI_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  smu_nvram_read
 * DESCRIPTION
 *  
 * PARAMETERS
 *  file_idx        [IN]        
 *  access_id       [IN]        
 *  src_id(?)       [IN]        
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_nvram_read(nvram_lid_enum file_idx, kal_uint8 access_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_read_req_struct *nvram_read_req_ptr = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    nvram_read_req_ptr = (nvram_read_req_struct*) construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);

    nvram_read_req_ptr->file_idx = file_idx;
    nvram_read_req_ptr->access_id = access_id;
#ifdef __GEMINI_3G_SWITCH__
    nvram_read_req_ptr->para = 1 + l4c_gemini_get_actual_sim_id(this_smu->smu_current_mod - MOD_SMU);
#else
    nvram_read_req_ptr->para = 1 + (this_smu->smu_current_mod - MOD_SMU);
#endif

#ifdef __SIM_ME_LOCK__   
    if (file_idx == NVRAM_EF_SML_LID)
    {
        this_smu->is_sml_refresh = KAL_TRUE;
    }
#endif    
    smu_send_ilm(MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_READ_REQ, nvram_read_req_ptr, NULL);

}   /* End of smu_nvram_read */


/*****************************************************************************
 * FUNCTION
 *  smu_nvram_read_cnf_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]         
 *  src_id(?)       [IN]        
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_nvram_read_cnf_handler(ilm_struct *smu_ilm_ptr)
/* 20060530 Revised by PH */
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_read_cnf_struct *nvram_read_cnf_ptr = NULL;

    kal_uint16 length = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    nvram_read_cnf_ptr = (nvram_read_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);

    if (NVRAM_EF_MS_SECURITY_LID == nvram_read_cnf_ptr->file_idx)
    {
        smu_init_ms_security_obj(SMU_SELECT_SIM(this_smu->smu_current_mod));
        nvram_read_cnf_handler(smu_ilm_ptr);
    }
    else
    {
#ifdef __SIM_ME_LOCK__
        kal_uint8 *pdu_ptr = NULL;

        sml_init_sml_obj(SMU_SELECT_SIM(this_smu->smu_current_mod));

        /* Here load the SML context */
        if (smu_ilm_ptr->peer_buff_ptr != NULL)
        {

            pdu_ptr = get_peer_buff_pdu(smu_ilm_ptr->peer_buff_ptr, &length);

            /* Load the obj from NVRAM */

            sml_Load(pdu_ptr, SMU_SELECT_SIM(this_smu->smu_current_mod));

            //kal_sys_trace("SML: Load!");
            kal_brief_trace(TRACE_INFO, INFO_SML_LOAD);

        }
        this_smu->is_sml_refresh = KAL_FALSE;   
#endif
    }

}   /* End of smu_nvram_read_cnf_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_nvram_write
 * DESCRIPTION
 *  
 * PARAMETERS
 *  file_idx        [IN]        
 *  access_id       [IN]        
 *  src_id(?)       [IN]        
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_nvram_write(nvram_lid_enum file_idx, kal_uint8 access_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_write_req_struct *nvram_write_req_ptr = NULL;
    peer_buff_struct *peer_buf_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 pdu_length = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, SAVE_SECURITY_TO_NVRAM);
    nvram_write_req_ptr = (nvram_write_req_struct*) construct_local_para(sizeof(nvram_write_req_struct), TD_CTRL);

    nvram_write_req_ptr->file_idx = file_idx;

#ifdef __GEMINI_3G_SWITCH__
    nvram_write_req_ptr->para = 1 + l4c_gemini_get_actual_sim_id(this_smu->smu_current_mod - MOD_SMU);
#else
    nvram_write_req_ptr->para = 1 + (this_smu->smu_current_mod - MOD_SMU);
#endif

    nvram_write_req_ptr->access_id = access_id;

    pdu_length = sml_Nvram_get_lid_size(file_idx);
    /* Construct peer buffer */
    peer_buf_ptr = construct_peer_buff(pdu_length, 0, 0, TD_CTRL);

    pdu_ptr = get_peer_buff_pdu(peer_buf_ptr, &pdu_length);

    switch (file_idx)
    {
        case NVRAM_EF_MS_SECURITY_LID:
            (*pSmuSecurityInfog->update) (pdu_ptr, SMU_SELECT_SIM(this_smu->smu_current_mod));
            break;
#ifdef __SIM_ME_LOCK__   
        case NVRAM_EF_SML_LID:
            if (pdu_length != sml_Save(pdu_ptr, SMU_SELECT_SIM(this_smu->smu_current_mod)))
            {
                //kal_sys_trace("SML:Fatal Error!");
                kal_brief_trace(TRACE_ERROR, ERROR_SML_SAVE);
                free_peer_buff(peer_buf_ptr);
                ASSERT(0);
                return;
            }
            break;
#endif            
        default:
            break;
    }
    smu_send_ilm(MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_WRITE_REQ, nvram_write_req_ptr, peer_buf_ptr);
}   /* End of smu_nvram_write */


/*****************************************************************************
 * FUNCTION
 *  smu_nvram_write_cnf_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]         
 *  src_id(?)       [IN]        
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_nvram_write_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_write_cnf_struct *nvram_write_cnf_ptr = NULL;
    kal_uint16 length = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, NVRAM_WRITE_CNF_HANDLER);
    nvram_write_cnf_ptr = (nvram_write_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);
    if (NVRAM_EF_MS_SECURITY_LID == nvram_write_cnf_ptr->file_idx)
    {
        /* 
         * access id 0xFF is for normal update 
         * access id LMMI or RMMI is for power phone lock
         */
        /* nvram_write_cnf_handler(smu_ilm_ptr); */
        ;   /* Do notiong! */
    }
    else if (NVRAM_EF_SML_LID == nvram_write_cnf_ptr->file_idx) /* SML operation */
    {
#ifdef __SIM_ME_LOCK__
        /* 0xFF is for operation in Idle screen */
        if (0xFF == nvram_write_cnf_ptr->access_id)
        {
            l4csmu_set_personalization_cnf_struct *l4csmu_set_sml_cnf_ptr = NULL;

            ASSERT(this_smu->l4csmu_set_sml_cnf_ptr != NULL);
            l4csmu_set_sml_cnf_ptr = this_smu->l4csmu_set_sml_cnf_ptr;
            this_smu->l4csmu_set_sml_cnf_ptr = NULL;

            if (NVRAM_IO_ERRNO_OK != nvram_write_cnf_ptr->result)
            {
                l4csmu_set_sml_cnf_ptr->result = KAL_FALSE;
                //kal_sys_trace("SML: update fail!");
                kal_brief_trace(TRACE_WARNING, WARNING_SML_UPDATE);
                smu_nvram_read(NVRAM_EF_SML_LID, 0xFF);
            }

            sml_Status(
                l4csmu_set_sml_cnf_ptr->category,
                &(l4csmu_set_sml_cnf_ptr->state),
                &(l4csmu_set_sml_cnf_ptr->retry_count),
                &(l4csmu_set_sml_cnf_ptr->num_of_sets),
                &(l4csmu_set_sml_cnf_ptr->space_of_sets),
                NULL,
                NULL,
                SMU_SELECT_SIM(this_smu->smu_current_mod));

            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SET_PERSONALIZATION_CNF, l4csmu_set_sml_cnf_ptr, NULL);
        }
#ifdef __SMS_DEPERSONALIZATION__		
        else if(0xFE == nvram_write_cnf_ptr->access_id) /*Kinki: notify MMI for OTA update*/
        {
            if (NVRAM_IO_ERRNO_OK != nvram_write_cnf_ptr->result)
            {
                //kal_sys_trace("SML: update fail(OTA)!");
                kal_brief_trace(TRACE_WARNING, WARNING_SML_UPDATE_OTA);
                smu_nvram_read(NVRAM_EF_SML_LID, 0xFE);
            }
			
            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SML_STATUS_NOTIFY_IND, NULL, NULL);
	  }
#endif
#endif
    }
    else
    {
        ASSERT(0);
    }

}   /* End of smu_nvram_write_cnf_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_send_security_cnf
 * DESCRIPTION
 *  This function is to send smu_security_cnf to L4C.
 * PARAMETERS
 *  type                [IN]        Type of security
 *  remaining_count     [IN]        The remianing count of security retry
 *  src_id              [IN]        Source id of security request from upper layer
 *  res                 [IN]        The result will send back to upper layer
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_send_security_cnf( smu_security_type_enum type,kal_uint8 remaining_count, kal_uint8 src_id,l4c2smu_res_enum res, kal_uint16 rmmi_error_cause )
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    l4csmu_security_cnf_struct *l4csmu_security_cnf_ptr = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    l4csmu_security_cnf_ptr = (l4csmu_security_cnf_struct*)
        construct_local_para(sizeof(l4csmu_security_cnf_struct), TD_UL);
    kal_brief_trace(TRACE_INFO, SMU_SEND_SECURITY_CNF);
    /* l4csmu_security_cnf_ptr->remaining_count=remaining_count; */
    l4csmu_security_cnf_ptr->type = type;
    l4csmu_security_cnf_ptr->cphs_retry_count = remaining_count;
    l4csmu_security_cnf_ptr->src_id = src_id;
    l4csmu_security_cnf_ptr->response = res;
    l4csmu_security_cnf_ptr->cause_present = 0;
   l4csmu_security_cnf_ptr->rmmi_error_cause=rmmi_error_cause; //Benson 03172004 Initial for AT command //Kinki:SIM-ME lock RMMI_NO_ERR
    l4csmu_security_cnf_ptr->cause = 0;
    /* paul 031127 */
    kal_mem_cpy(&(l4csmu_security_cnf_ptr->chv_info), &(this_smu->chv_info), sizeof(sim_chv_info_struct));

    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SECURITY_CNF, l4csmu_security_cnf_ptr, NULL);
}   /* end of smu_send_security_cnf */


/*****************************************************************************
 * FUNCTION
 *  smu_send_security_req
 * DESCRIPTION
 *  This function is to send sim_security_req to SIM.
 * PARAMETERS
 *  which_chv                           [IN]        
 *  op                                  [IN]        
 *  key1                                [IN]        Pointer of key1
 *  key2                                [IN]        Pointer of key2
 *  access_id                           [IN]        
 *  sim_chv_type_enum(?)                [IN]        Type of security
 *  sim_security_operation_enum(?)      [IN]        Operation of security
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_send_security_req(
        sim_chv_type_enum which_chv,
        sim_security_operation_enum op,
        kal_uint8 *key1,
        kal_uint8 *key2,
        kal_uint8 access_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sim_security_req_struct *sim_security_req_ptr = NULL;
    smu_context_struct *smu_ptr = this_smu;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, SMU_SEND_SECURITY_REQ);
    sim_security_req_ptr = (sim_security_req_struct*) construct_local_para(sizeof(sim_security_req_struct), TD_UL);
    sim_security_req_ptr->which_chv = which_chv;
    sim_security_req_ptr->op = op;
    sim_security_req_ptr->access_id = access_id;
    kal_mem_cpy(sim_security_req_ptr->old_value, key1, 8);
    kal_mem_cpy(sim_security_req_ptr->new_value, key2, 8);

    /* Kinki: MAUI_00628366 *//* Don't verify or change CHV2 if its status is blocked. Refer to 11.11 */
    if (which_chv == SIM_CHV_2)
    {
        if ((op == VERIFY) || (op == CHANGE))
        {
            if (smu_ptr->chv_status.chv2_status == CHV_BLOCKED)
            {
                l4csmu_security_cnf_struct *l4csmu_security_cnf_ptr = NULL;

                l4csmu_security_cnf_ptr = (l4csmu_security_cnf_struct*)
                    construct_local_para(sizeof(l4csmu_security_cnf_struct), TD_UL);

                l4csmu_security_cnf_ptr->response = SMU_RES_FALSE;
                l4csmu_security_cnf_ptr->cause_present = KAL_TRUE;
                l4csmu_security_cnf_ptr->cause = SIM_CHV_BLOCK;

                if (smu_ptr->chv_status.ubchv2_status != CHV_BLOCKED)
                {
                    /* Kinki: If CHV2 is blocked but UBCHV2 still have trial counts left. */

                    l4csmu_security_cnf_ptr->type = TYPE_UBCHV2;
                    l4csmu_security_cnf_ptr->rmmi_error_cause = SIM_PUK2_REQUIRED;
                }
                else    /* UBCHV2 is blocked */
                {
                    /* Kinki: If UBCHV2 is already blocked. (ex. by sim operation string) */

                    smu_ptr->chv_status.ubchv2_status = CHV_BLOCKED;
                    smu_ptr->chv_status.chv2_status = CHV_DEAD;
                    l4csmu_security_cnf_ptr->type = TYPE_UBCHV2_BLOCKED;
                    l4csmu_security_cnf_ptr->rmmi_error_cause = SIM_WRONG;
                }

                kal_mem_cpy(&(l4csmu_security_cnf_ptr->chv_info), &(smu_ptr->chv_info), sizeof(sim_chv_info_struct));
                l4csmu_security_cnf_ptr->src_id = access_id;
                smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SECURITY_CNF, l4csmu_security_cnf_ptr, NULL);
                return;
            }
        }
    }

    /* save input PIN1 into context */
    if (which_chv == SIM_CHV_1)
    {
        if ((op == UNBLOCK) || (op == CHANGE))
        {
            kal_mem_cpy(smu_ptr->temp_pin_code, sim_security_req_ptr->new_value, 8);
        }
        else
        {
            kal_mem_cpy(smu_ptr->temp_pin_code, sim_security_req_ptr->old_value, 8);
        }
    }

    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_SECURITY_REQ, sim_security_req_ptr, NULL);
}   /* end of smu_send_security_req */

#ifdef __SIM_ME_LOCK__   

/*****************************************************************************
 * FUNCTION
 *  smu_erase_nck
 * DESCRIPTION
 *  This is for erasing the EF_NCK to 0xFF
 * PARAMETERS
 *  void
 *  src_id(?)       [IN]        
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_erase_nck(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sim_write_req_struct *sim_write_req_ptr = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    sim_write_req_ptr = (sim_write_req_struct*) construct_local_para(sizeof(sim_write_req_struct), TD_CTRL);

    sim_write_req_ptr->file_idx = FILE_DCK_IDX;
    kal_mem_set(&(sim_write_req_ptr->data[0]), 0xFF, 260);
    sim_write_req_ptr->para = 0;    /* offset = 0 */
    sim_write_req_ptr->length = 16;
    sim_write_req_ptr->access_id = SMU_WRITE_DCK;

    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_WRITE_REQ, (local_para_struct*) sim_write_req_ptr, NULL);

}


/*****************************************************************************
 * FUNCTION
 *  smu_sml_ota_process
 * DESCRIPTION
 *  This function is to process OTA procedures.
 * PARAMETERS
 *  void
 *  msg_id(?)               [IN]        Message id
 *  sap_id(?)               [IN]        Sap id
 *  dest_id(?)              [IN]        Type of security
 *  peer_buf_ptr(?)         [IN]        Pointer of peer buf
 *  local_param_ptr(?)      [IN]        Pointer of local parameter
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_sml_ota_process(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    sml_cat_enum cat = SML_CAT_N;
    kal_bool is_erase_dck = KAL_FALSE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (KAL_TRUE == smu_ptr->is_valid_dck)
    {
        for (cat = SML_CAT_N; cat < SML_CAT_SIZE; cat++)
        {
            switch (cat)
            {
                case SML_CAT_N:
                    if (KAL_TRUE == sml_Verify_OTA(
                                        SML_CAT_N,
                                        &(smu_ptr->n_dck[0]),
                                        4,
                                        SMU_SELECT_SIM(smu_ptr->smu_current_mod)))
                    {
                        //kal_sys_trace("SML OTA: N category unlocked!");
                        kal_brief_trace(TRACE_INFO, INFO_SML_OTA_N);
                        is_erase_dck = KAL_TRUE;
                    }
                    break;
                case SML_CAT_NS:
                    if (KAL_TRUE == sml_Verify_OTA(
                                        SML_CAT_NS,
                                        &(smu_ptr->ns_dck[0]),
                                        4,
                                        SMU_SELECT_SIM(smu_ptr->smu_current_mod)))
                    {
                        //kal_sys_trace("SML OTA: NS category unlocked!");
                        kal_brief_trace(TRACE_INFO, INFO_SML_OTA_NS);
                        is_erase_dck = KAL_TRUE;
                    }

                    break;
                case SML_CAT_SP:
                    if (KAL_TRUE == sml_Verify_OTA(
                                        SML_CAT_SP,
                                        &(smu_ptr->sp_dck[0]),
                                        4,
                                        SMU_SELECT_SIM(smu_ptr->smu_current_mod)))
                    {
                        //kal_sys_trace("SML OTA: SP category unlocked!");
                        kal_brief_trace(TRACE_INFO, INFO_SML_OTA_SP);
                        is_erase_dck = KAL_TRUE;
                    }

                    break;
                case SML_CAT_C:
                    if (KAL_TRUE == sml_Verify_OTA(
                                        SML_CAT_C,
                                        &(smu_ptr->cp_dck[0]),
                                        4,
                                        SMU_SELECT_SIM(smu_ptr->smu_current_mod)))
                    {
                        //kal_sys_trace("SML OTA: C category unlocked!");
                        kal_brief_trace(TRACE_INFO, INFO_SML_OTA_C);
                        is_erase_dck = KAL_TRUE;
                    }
                    break;
                default:
                    break;
            }
        }

        if (KAL_TRUE == is_erase_dck)
        {
            smu_erase_nck();
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  smu_sml_check_testsim
 * DESCRIPTION
 *  This function is to query if testsim shall be processed
 * PARAMETERS
 *  imsi        [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
#ifdef __GEMINI__
extern kal_bool is_test_sim(kal_uint8 simInterface);
#else 
extern kal_bool is_test_sim(void);
#endif 
kal_bool smu_sml_check_testsim(kal_uint8 *imsi)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 test_sim[3] = {0x00, 0x10, 0x1F};
    kal_uint8 code[3] = {0};
    kal_bool result = KAL_TRUE;
    kal_uint8 security_ind = 0;
    kal_bool is_test_sim_insert = KAL_FALSE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    code[0] = (imsi[1] & 0xF0) | (imsi[2] & 0x0F);
    code[1] = (imsi[2] & 0xF0) | (imsi[3] & 0x0F);
    code[2] = (imsi[3] & 0xF0) | 0x0F;

#ifdef __GEMINI__
    if (is_test_sim(SMU_SELECT_SIM(this_smu->smu_current_mod)) || (0 == kal_mem_cmp(code, test_sim, 3)))
#else 
    if (is_test_sim() || (0 == kal_mem_cmp(code, test_sim, 3)))
#endif 
    {
        is_test_sim_insert = KAL_TRUE;
    }

    security_ind = (*pSmuSecurityInfog->query_u8) (SMU_SECURITY_INDICATION_U8, SMU_SELECT_SIM(this_smu->smu_current_mod));

    // Here check the security_ind with 0x80 is for SML_TESTSIM_INI_ALLOW support,
    // After insert the very first normal SIM, should perform normal SML check even insert Test SIM
    if  (security_ind & 0x80)  
    {
        result = KAL_TRUE;
    }
    else
    {
        if (is_test_sim_insert)
        {
            result = KAL_FALSE;
            //kal_sys_trace("Test SIM Inserted!");
            kal_brief_trace(TRACE_INFO, INFO_SML_TEST_SIM);
        }
        else
        {
            security_ind = security_ind | 0x80;  // The 8th bit indicate Normal SIM

            (*pSmuSecurityInfog->assign_u8) (SMU_SECURITY_INDICATION_U8, security_ind, SMU_SELECT_SIM(this_smu->smu_current_mod));

            //smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, 0xFF);

            result = KAL_TRUE;
            //kal_sys_trace("Normal SIM Inserted!");
            kal_brief_trace(TRACE_INFO, INFO_SML_NORMAL_SIM);
        }
    }

    /* Do Test SIM handling procedures */
    switch (sml_Testsim_op_mode())
    {
        case SML_TESTSIM_ALW_REJECT:
            if (is_test_sim_insert)
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
            break;
        case SML_TESTSIM_ALW_ALLOW:
            if (is_test_sim_insert)
            {
                return KAL_FALSE;
            }
            else
            {
                return KAL_TRUE;
            }
            break;
        case SML_TESTSIM_INI_ALLOW:
            return result;
            break;
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  smu_check_sml
 * DESCRIPTION
 *  This function is to process SML procedure
 * PARAMETERS
 *  check_mask      [IN]        
 *  src_id          [IN]        
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
/*[MAUI_01634719] mtk01612*/
extern kal_bool is_mcc_mnc_matched(kal_uint8 *sim_code, kal_uint8 len);
extern kal_bool is_gid1_matched(kal_uint8 *sim_gid1);
void smu_check_sml(kal_uint8 check_mask, kal_uint8 src_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    kal_bool is_matched = KAL_TRUE;
    kal_uint8 mask = 1;
    sml_cat_enum cat = SML_CAT_N;
    kal_uint8 security_ind;  
    kal_uint8  *gid1=NULL;
    kal_uint8  *gid2=NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, SMU_CHECK_PERSONALIZATION);

    security_ind = (*pSmuSecurityInfog->query_u8) (SMU_SECURITY_INDICATION_U8, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

    if ((security_ind & 0x40) && smu_ptr->is_exception_reset==KAL_TRUE)
    {
    	check_mask = 0;  // bypass SML checking if exception reset and already passed during Normal power on
    }


    /* Check Test SIM handling */
    if (KAL_FALSE == smu_sml_check_testsim(&(smu_ptr->imsi[0])))
    {
        //kal_sys_trace("SML: By-Pass TEST SIM");
        kal_brief_trace(TRACE_INFO, INFO_SML_BY_PASS_TEST_SIM);
        check_mask = 0;
    }
    else if (KAL_TRUE == sml_is_Masterkey_enable())
    {
        if (KAL_TRUE == smu_ptr->is_masterkey_unlocked)
        {
            //kal_sys_trace("SML: Masterkey Unlocked!");
            kal_brief_trace(TRACE_INFO, INFO_SML_MASTERKEY);
            check_mask = 0;
        }
    }

    /* This is for Block list check */
    if (KAL_TRUE == sml_CheckVisa((const kal_uint8*)&(smu_ptr->imsi[0]),
                                  sim_query_mnc_num(SMU_SELECT_SIM(smu_ptr->smu_current_mod))))
    {

        //kal_sys_trace("SML: Find in Block List");
        kal_brief_trace(TRACE_INFO, INFO_SML_BLOCK_LIST);
        smu_send_security_cnf( TYPE_NP,
                       0,
                       src_id,
                       SMU_RES_OK, RMMI_ERR_NW_PERSON_PIN_REQUIRED); 
        
        smu_ptr->pending_password_id = ID_PH_NET_PIN;

        return;

    }
/*Check whether gid1 and gid2 is valid*/
   if(smu_ptr->sim_security_info.is_valid_gid1)
   {
       gid1=smu_ptr->sim_security_info.gid1;
    }

    if(smu_ptr->sim_security_info.is_valid_gid2)
	{
	     gid2=smu_ptr->sim_security_info.gid2;
	}
    /* Check Network Category */
    for (cat = SML_CAT_N; cat < SML_CAT_SIZE; cat++)
    {
        mask = (mask << 1);
        is_matched = KAL_TRUE;

        if ((check_mask & mask) && ((smu_ptr->security_status & mask) == 0))
        {
            is_matched = sml_Check(
                            cat,
                            (kal_uint8*) smu_ptr->imsi,
                            gid1,
                            gid2,
                            sim_query_mnc_num(SMU_SELECT_SIM(smu_ptr->smu_current_mod)),
                            &(smu_ptr->cphs_lock_count),
                            SMU_SELECT_SIM(smu_ptr->smu_current_mod));
                            
/*[MAUI_01634719] mtk01612: check GID1 only for some MCC/MNC*/
#ifdef __CHECK_GID1_WHEN_MCC_MNC_MATCHED__
            /* GID1 security check is performed when SML_CAT_N is enabled */
            if ((is_matched == KAL_TRUE) && (cat == SML_CAT_N) && (check_mask != 0))
            {
                if(is_mcc_mnc_matched(code, len) == KAL_TRUE)
                {
                    if(sml_query_state(cat, SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == SML_STATE_LOCK)
                    {
                        //kal_sys_trace("SML: N code matched, check GID1 now!");  			
                        kal_brief_trace(TRACE_INFO, INFO_SML_N_GID1);
                        is_matched = is_gid1_matched(smu_ptr->sim_security_info.gid1);                       
                    }
                }
            }
#endif
        }

        if (is_matched == KAL_FALSE)
        {
		
            switch (cat)
            {
                case SML_CAT_N:
	     	        if(smu_ptr->cphs_lock_count == 0)
			 {
	                    smu_send_security_cnf( TYPE_NP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_NW_PERSON_PUK_REQUIRED);  /* MAUI_00621168 */
	                                   
	                    smu_ptr->pending_password_id=ID_PH_NET_PUK;										
			 }
	               else
		        {
	                    smu_send_security_cnf( TYPE_NP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_NW_PERSON_PIN_REQUIRED); 
	        
	                    smu_ptr->pending_password_id=ID_PH_NET_PIN;						
		         }            
                    return;
					
                case SML_CAT_NS:
	     	         if(smu_ptr->cphs_lock_count == 0)
	     	         {                    
	                    smu_send_security_cnf( TYPE_NSP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_NW_SUB_PERSON_PUK_REQUIRED);
	        
		             smu_ptr->pending_password_id=ID_PH_NETSUB_PUK;
			   }
	                 else
			   {                           
	                    smu_send_security_cnf( TYPE_NSP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_NW_SUB_PERSON_PIN_REQUIRED);
	        
	                    smu_ptr->pending_password_id=ID_PH_NETSUB_PIN;
			    }				            
                    return;

                case SML_CAT_SP:
	     	          if(smu_ptr->cphs_lock_count == 0)
	     	          {                    
	                    smu_send_security_cnf( TYPE_SP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_SP_PERSON_PUK_REQUIRED); 
	        
		             smu_ptr->pending_password_id=ID_PH_SP_PUK;
			   }
			   else
			   {	                    
	                    smu_send_security_cnf( TYPE_SP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_SP_PERSON_PIN_REQUIRED); 
	        
	                    smu_ptr->pending_password_id=ID_PH_SP_PIN;						
			   }
                    return;

                case SML_CAT_C:
	     	         if(smu_ptr->cphs_lock_count == 0)
	     	         {                    
	                    smu_send_security_cnf( TYPE_CP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_CORP_PERSON_PUK_REQUIRED); 
	        
		             smu_ptr->pending_password_id=ID_PH_CORP_PUK;					
			  }
			  else
			  {                    
	                    smu_send_security_cnf( TYPE_CP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_CORP_PERSON_PIN_REQUIRED); 
	        
	                    smu_ptr->pending_password_id=ID_PH_CORP_PIN;		  
			  }            
                    return;

                case SML_CAT_SIM:
	     	         if(smu_ptr->cphs_lock_count == 0)
	     	         {                    
	                    smu_send_security_cnf( TYPE_IMSI_LOCK,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, PH_FSIM_PUK_REQUIRED); 
	        
		             smu_ptr->pending_password_id=ID_PH_FSIM_PUK;					
	     	         }
			  else
			  {                    
	                    smu_send_security_cnf( TYPE_IMSI_LOCK,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, PH_FSIM_PIN_REQUIRED); 
	        
	                    smu_ptr->pending_password_id=ID_PH_FSIM_PIN;					
			  }            
                    return;

                case SML_CAT_NS_SP:
	     	         if(smu_ptr->cphs_lock_count == 0)
	     	         {                    
	                    smu_send_security_cnf( TYPE_LINK_NS_SP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_LINK_NS_SP_PERSON_PUK_REQUIRED); 
	      
		             smu_ptr->pending_password_id=ID_PH_LINK_NS_SP_PUK;					
	     	         }
			  else
			  {                    
	                    smu_send_security_cnf( TYPE_LINK_NS_SP,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_LINK_NS_SP_PERSON_PIN_REQUIRED); 
	        
	                    smu_ptr->pending_password_id=ID_PH_LINK_NS_SP_PIN;					
			  }            
                    return;

                case SML_CAT_SIM_C:
	     	         if(smu_ptr->cphs_lock_count == 0)
	     	         {                    
	                    smu_send_security_cnf( TYPE_LINK_SIM_C,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_LINK_SIM_C_PERSON_PUK_REQUIRED);
	        
	                    smu_ptr->pending_password_id=ID_PH_LINK_SIM_C_PUK;	 
			   }
			  else
		    	  {                    
	                    smu_send_security_cnf( TYPE_LINK_SIM_C,
	                                   smu_ptr->cphs_lock_count,
	                                   src_id,
	                                   SMU_RES_OK, RMMI_ERR_LINK_SIM_C_PERSON_PIN_REQUIRED);
	        
	                    smu_ptr->pending_password_id=ID_PH_LINK_SIM_C_PIN;					
			  }		  
                    return;
		  default:
		      break;
            }

        }

    }

    if (smu_ptr->is_puk_unlock == KAL_FALSE)
    {
        smu_send_security_cnf(TYPE_NO_REQUIRED,0xFF,src_id,SMU_RES_OK, RMMI_NO_ERR);
    }
    else
    {
        l4csmu_security_cnf_struct *l4csmu_security_cnf_ptr = NULL;

        l4csmu_security_cnf_ptr = (l4csmu_security_cnf_struct*)
            construct_local_para(sizeof(l4csmu_security_cnf_struct), TD_UL);
        smu_ptr->is_puk_unlock = KAL_FALSE;
        l4csmu_security_cnf_ptr->type = TYPE_NO_REQUIRED;
        l4csmu_security_cnf_ptr->src_id = smu_ptr->smu_startup_src;
        l4csmu_security_cnf_ptr->response = SMU_RES_OK;
        l4csmu_security_cnf_ptr->cause_present = KAL_TRUE;
        l4csmu_security_cnf_ptr->cause = SIM_PUK_UNLOCK;
        l4csmu_security_cnf_ptr->rmmi_error_cause = SIM_PUK_REQUIRED;
        kal_mem_cpy(&(l4csmu_security_cnf_ptr->chv_info), &(smu_ptr->chv_info), sizeof(sim_chv_info_struct));
	
        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SECURITY_CNF, l4csmu_security_cnf_ptr, NULL);
    }

    smu_ptr->is_personalization_done = KAL_TRUE;
    smu_ptr->pending_password_id = ID_READY;
    smu_ptr->cphs_lock_count = 5;

    { 
	security_ind = security_ind | 0x40;  //The 7th bit,  for bypass Abnormal reset SML checking

        (*pSmuSecurityInfog->assign_u8)(SMU_SECURITY_INDICATION_U8, security_ind, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

        smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, 0xFF);
    }
 
    if (smu_ptr->is_mmrr_ready_ind_recv == KAL_TRUE)
    {
        smu_mmrr_ready_ind_handler(NULL);
    }

}


/*****************************************************************************
 * FUNCTION
 *  smu_sml_autolock
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void smu_sml_autolock(kal_uint8 src_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    kal_uint8 autolock_count = 0;

    kal_bool is_autolock = KAL_FALSE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (sml_Is_autolock(&(smu_ptr->imsi[0]), SMU_SELECT_SIM(smu_ptr->smu_current_mod)) > 0)
    {

        /* If autolock is enabled, keep processing! */

        smu_ptr->is_autolock_enable = KAL_TRUE;

    }
    else
    {

        /* If autolock is not enabled, return! */

        smu_ptr->is_autolock_enable = KAL_FALSE;

        smu_ptr->is_autolock_success = KAL_FALSE;

        smu_ptr->autolock_remain_count = 0;

        /* Process SML CHECK */
#if defined(__CUSTOMER_TC01_DISK__) && !defined(WISDOM_MMI)
        smu_tc01_check_sml(src_id);
#else
        smu_check_sml(0xFE, src_id);
#endif

        return;

    }

    /* Process Autolock */
    if (smu_sml_check_testsim(&(smu_ptr->imsi[0])))
    {
        kal_uint8  *gid1=NULL;
        kal_uint8  *gid2=NULL;

        if (smu_ptr->sim_security_info.is_valid_gid1)
        {
            gid1 = smu_ptr->sim_security_info.gid1;
        }

        if (smu_ptr->sim_security_info.is_valid_gid2)
        {
            gid2 = smu_ptr->sim_security_info.gid2;
        }

        is_autolock = sml_Process_autolock(
                        (kal_uint8*) smu_ptr->imsi,
                        gid1,
                        gid2,
                        sim_query_mnc_num(SMU_SELECT_SIM(smu_ptr->smu_current_mod)),
                        &autolock_count,
                        SMU_SELECT_SIM(smu_ptr->smu_current_mod));
    }
    else
    {
        is_autolock = KAL_FALSE;
        autolock_count = smu_ptr->autolock_remain_count;
        //kal_sys_trace("SML: By-Pass TEST SIM");
        kal_brief_trace(TRACE_INFO, INFO_SML_BY_PASS_TEST_SIM);
    }

    /* Save Autolock status in SMU context */
    smu_ptr->is_autolock_success = is_autolock;
    smu_ptr->autolock_remain_count = autolock_count;

    if (KAL_TRUE == is_autolock)
    {
        smu_nvram_write(NVRAM_EF_SML_LID, smu_ptr->smu_startup_src);
    }

    /* PASS SML CHECK Procedures */ 	
    
    smu_send_security_cnf( TYPE_NO_REQUIRED,
                           0xFF,
                           src_id,
                           SMU_RES_OK, RMMI_NO_ERR);//Kinki: SIM-ME lock

    smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, 0xFF);

#ifdef __SEARCH_NW_AFTER_AUTOLOCK__
    /*Kinki: camp on NW at the last autolock time [MAUI_01266718]*/	
    if(smu_ptr->autolock_remain_count == 0)
    {
        smu_ptr->is_personalization_done=KAL_TRUE;
	
        smu_ptr->pending_password_id=ID_READY;	

        smu_ptr->cphs_lock_count=5;

        if (smu_ptr->is_mmrr_ready_ind_recv==KAL_TRUE)
            smu_mmrr_ready_ind_handler(NULL);	

    }
#endif	

}

#ifdef __SMS_DEPERSONALIZATION__
void smu_sml_ota_query_state(kal_uint8 cat, kal_uint8 state_in_phone, kal_uint8 *state_to_nw) 
{

    kal_trace(TRACE_STATE, QUERY_SML_STATE, cat, state_in_phone);	
			
    switch(state_in_phone)
    {
        case SML_STATE_UNLOCK:

            //kal_sys_trace("SML OTA: unlocked!");
            kal_brief_trace(TRACE_INFO, INFO_SML_OTA_UNLOCKED);
            *state_to_nw = SML_NOT_PERSONALISED;					  	
                  
        break;		
				  
        case SML_STATE_DISABLE:
						  	
            //kal_sys_trace("SML OTA: disabled!");
            kal_brief_trace(TRACE_INFO, INFO_SML_OTA_DISABLED);
            *state_to_nw = SML_PERM_NOT_PERSONALISED;					  	
                  
        break;					  

        case SML_STATE_LOCK:
				  	
            //kal_sys_trace("SML OTA: locked!");
            kal_brief_trace(TRACE_INFO, INFO_SML_OTA_LOCKED);
            *state_to_nw = SML_PERSONALISED;				  	

        break;

        default: //shall not go to this case

	     ASSERT(0);
				
        break;				
     }

	return;

}

void l4csmu_sms_depersonalization_req_handler(ilm_struct *smu_ilm_ptr) //Kinki: [MAUI_01255000]
{
    l4csmu_sms_depersonalization_req_struct *req_local_para_ptr = NULL;
    l4csmu_sms_depersonalization_cnf_struct *cnf_local_para_ptr = NULL;

    kal_uint16 msg_len = 0;
    kal_uint16 pdu_len = 0;
    smu_sms_depersonalization_req_struct *req_pdu_ptr = NULL;

    peer_buff_struct *cnf_peer_buf_ptr = NULL;	
    smu_sms_depersonalization_cnf_struct *cnf_pdu_ptr = NULL;	

    kal_uint8 src_id = 0;	
    kal_uint8 imei[16] = {0};  	
    kal_uint8 imei_len = 0;
    kal_uint8 svn[3];
    kal_bool is_imei_matched = KAL_FALSE;

    kal_uint8 cat = 0;	
    kal_uint8 state = 0;


    smu_key_bcd_struct 	key[4];
    kal_uint8   unused_key[9] = "FFFFFFFF";
	
    kal_brief_trace(TRACE_INFO, L4CSMU_SMS_DEPERSONALIZATION_REQ_HANDLER);

    req_local_para_ptr = (l4csmu_sms_depersonalization_req_struct *) 
		                                       get_local_para_ptr( (smu_ilm_ptr->local_para_ptr),
		                                       &msg_len);
    cnf_local_para_ptr = (l4csmu_sms_depersonalization_cnf_struct *)
                          construct_local_para( sizeof(l4csmu_sms_depersonalization_cnf_struct),
                          TD_RESET 
                          );
	
    /* Construct CNF peer buffer */
    cnf_peer_buf_ptr = construct_peer_buff( 
                   sizeof(smu_sms_depersonalization_cnf_struct), 
                   0, 
                   0, 
                   TD_RESET
                   );



   cnf_local_para_ptr->access_id = req_local_para_ptr->access_id; //SMU piggy-back
   cnf_local_para_ptr->length = sizeof(smu_sms_depersonalization_cnf_struct);//peer buff size

   /*Get REQ peer buffer*/
    if(smu_ilm_ptr->peer_buff_ptr != NULL)
    {
        req_pdu_ptr = get_peer_buff_pdu(smu_ilm_ptr->peer_buff_ptr,
                            &pdu_len);

    }
    else
    {
        ASSERT(0);
     }
	
    /*Kinki: length comes from SMS header, and pdu_len is the actual NW SMS message length.
                Deal with the SMS content according to SMS header, so set a protection 
                to avoid handle the SMS content out of boundary.
    */
    if(req_local_para_ptr->length > pdu_len) 
    {
        //ASSERT(0);
        //Because NW sends the SMS violate spec(too short), return command fail
        //Fill in the cause_present and cause
        cnf_local_para_ptr->response = KAL_FALSE;  
	 cnf_local_para_ptr->cause_present = KAL_TRUE;
        cnf_local_para_ptr->cause = SMU_SML_LENGTH_TOO_SHORT;

        smu_send_ilm( MOD_L4C, 
                  SMU_L4C_SAP,
                  MSG_ID_L4CSMU_SMS_DEPERSONALIZATION_CNF, 
                  cnf_local_para_ptr, 
                  NULL
                  ); //shall not carry peer buffer if error occurs.
	
       return;               
    }
	

    /*Kinki: support R5, not R7. In R7, the key may have extention field.
    */
    if(req_local_para_ptr->length < LEN_OF_BYTE_SMS_DEPER)
    {
        //Because NW sends the SMS violate spec(too short), return command fail
        //Fill in the cause_present and cause
        cnf_local_para_ptr->response = KAL_FALSE;  
	 cnf_local_para_ptr->cause_present = KAL_TRUE;
        cnf_local_para_ptr->cause = SMU_SML_LENGTH_TOO_SHORT;

        smu_send_ilm( MOD_L4C, 
                  SMU_L4C_SAP,
                  MSG_ID_L4CSMU_SMS_DEPERSONALIZATION_CNF, 
                  cnf_local_para_ptr, 
                  NULL
                  ); //shall not carry peer buffer if error occurs.
	
       return;       
     }

    if(cnf_peer_buf_ptr != NULL)
    {
	 cnf_pdu_ptr = get_peer_buff_pdu(cnf_peer_buf_ptr, &pdu_len); 
    }
    else
    {
        ASSERT(0);
    }	

    //Compare IMEI(ascii to BCD) and assign returned IMEI  
    if(KAL_TRUE == l4c_nw_get_imei_req(src_id, imei, svn))
    {
        
        imei_len = strlen((kal_char *)imei);

	 if(imei_len != 15)
        {
            ASSERT(0);
	 }

	 kal_mem_cpy(cnf_pdu_ptr->imei, imei, sizeof(imei));
	 
        if(kal_mem_cmp(cnf_pdu_ptr->imei,req_pdu_ptr->imei, sizeof(imei)-1) == 0) //Equal //Ignore the 16th digit
        {
                is_imei_matched = KAL_TRUE;
	 }
	 else
	 {
               is_imei_matched = KAL_FALSE;
	 } 

    }
   else
   {

       ASSERT(0);
	   
       return;       
   }

    //Compare keys(ascii to BCD) and assign returned status
   for(cat = SML_CAT_N; cat <= SML_CAT_C; cat++)    
   {       
       convert_to_bcd(&(req_pdu_ptr->key[cat*8]), key[cat].key_bcd, 4);                 		  
    }
   
     if(is_imei_matched == KAL_TRUE)
     {
         kal_bool is_locked_state = KAL_FALSE;
		 
         cnf_local_para_ptr->response = KAL_TRUE;  
		
         for(cat = SML_CAT_N; cat <= SML_CAT_C; cat++)         
         {					 
	      state = sml_query_state(cat, SMU_SELECT_SIM(this_smu->smu_current_mod));

                if(kal_mem_cmp(&(req_pdu_ptr->key[cat*8]), unused_key, strlen((kal_char *)unused_key)) == 0)
                 {
                     smu_sml_ota_query_state(cat, state, &(cnf_pdu_ptr->status[cat]));  	
		       continue;
                 }
				
                  if(state != SML_STATE_LOCK)
                  {
                     smu_sml_ota_query_state(cat, state, &(cnf_pdu_ptr->status[cat]));  				  	
	            }
	           else
	           {		

                       is_locked_state = KAL_TRUE;	

                      if(KAL_TRUE == sml_Verify_OTA(cat, key[cat].key_bcd,
                                      4, SMU_SELECT_SIM(this_smu->smu_current_mod)))
                      {
                           //kal_sys_trace("SML OTA: N category unlocked by OTA ME-specific!");
                           kal_brief_trace(TRACE_INFO, INFO_SML_OTA_SMS_DEP_UNLOCKED);
                           cnf_pdu_ptr->status[cat] = SML_NOT_PERSONALISED;							
                      }
                      else
                      {
                           //kal_sys_trace("SML OTA: N category remain locked!");
                           kal_brief_trace(TRACE_INFO, INFO_SML_OTA_SMS_DEP_LOCKED);
                           cnf_pdu_ptr->status[cat] = SML_PERSONALISED;	
			  }										  				
	            }			 	   
             }

             if(is_locked_state == KAL_TRUE)
            {
                 smu_nvram_write(NVRAM_EF_SML_LID, 0xFE);
             }
	 
      }
     else
     {
         cnf_local_para_ptr->response = KAL_TRUE;  
		
         for(cat = SML_CAT_N; cat <= SML_CAT_C; cat++)         
         {         
             cnf_pdu_ptr->status[cat] = SML_IMEI_MISMATCH;
         }
      }

    //Build up the CNF	
    smu_send_ilm( MOD_L4C, 
                  SMU_L4C_SAP,
                  MSG_ID_L4CSMU_SMS_DEPERSONALIZATION_CNF, 
                  cnf_local_para_ptr, 
                  cnf_peer_buf_ptr
                  ); 
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4csmu_set_personalization_req_handler
 * DESCRIPTION
 *  This function is to set personalization data and depersonalization key to
 *  flash.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_set_personalization_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    l4csmu_set_personalization_req_struct *l4csmu_set_sml_req_ptr = NULL;
    l4csmu_set_personalization_cnf_struct *l4csmu_set_sml_cnf_ptr = NULL;
    kal_uint16 length = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    l4csmu_set_sml_req_ptr = (l4csmu_set_personalization_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);

    l4csmu_set_sml_cnf_ptr = (l4csmu_set_personalization_cnf_struct*)
        construct_local_para(sizeof(l4csmu_set_personalization_cnf_struct), TD_CTRL);

    l4csmu_set_sml_cnf_ptr->src_id = l4csmu_set_sml_req_ptr->src_id; //Kinki
    l4csmu_set_sml_cnf_ptr->result = KAL_FALSE;
    l4csmu_set_sml_cnf_ptr->category = l4csmu_set_sml_req_ptr->category;
    l4csmu_set_sml_cnf_ptr->op = l4csmu_set_sml_req_ptr->op;

    if (smu_ptr->is_sml_refresh == KAL_TRUE)
    {
        //kal_sys_trace("SML: SML is refreshing! Please try again!");
        kal_brief_trace(TRACE_WARNING, WARNING_SML_PERSONALIZE_WHILE_REFRESH);

        sml_Status(
            l4csmu_set_sml_req_ptr->category,
            &(l4csmu_set_sml_cnf_ptr->state),
            &(l4csmu_set_sml_cnf_ptr->retry_count),
            &(l4csmu_set_sml_cnf_ptr->num_of_sets),
            &(l4csmu_set_sml_cnf_ptr->space_of_sets),
            NULL,
            NULL,
            SMU_SELECT_SIM(smu_ptr->smu_current_mod));

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SET_PERSONALIZATION_CNF, l4csmu_set_sml_cnf_ptr, NULL);

        return;

    }

    switch (l4csmu_set_sml_req_ptr->op)
    {
        case SML_OP_UNLOCK:
            l4csmu_set_sml_cnf_ptr->result = sml_Unlock(
                                                l4csmu_set_sml_req_ptr->category,
                                                l4csmu_set_sml_req_ptr->key,
                                                SML_MAX_SUPPORT_KEY_LEN,
                                                SMU_SELECT_SIM(smu_ptr->smu_current_mod));
            break;
        case SML_OP_LOCK:
            l4csmu_set_sml_cnf_ptr->result = sml_Lock(
                                                l4csmu_set_sml_req_ptr->category,
                                                l4csmu_set_sml_req_ptr->key,
                                                SML_MAX_SUPPORT_KEY_LEN,
                                                SMU_SELECT_SIM(smu_ptr->smu_current_mod));
            break;
        case SML_OP_ADD:
            l4csmu_set_sml_cnf_ptr->result = sml_Add(
                                                l4csmu_set_sml_req_ptr->category,
                                                l4csmu_set_sml_req_ptr->data,
                                                l4csmu_set_sml_req_ptr->len,
                                                l4csmu_set_sml_req_ptr->key,
                                                SML_MAX_SUPPORT_KEY_LEN,
                                                &(l4csmu_set_sml_cnf_ptr->space_of_sets),
                                                SMU_SELECT_SIM(smu_ptr->smu_current_mod));
            break;
        case SML_OP_REMOVE:
            l4csmu_set_sml_cnf_ptr->result = sml_Remove(
                                                l4csmu_set_sml_req_ptr->category,
                                                SMU_SELECT_SIM(smu_ptr->smu_current_mod));
            break;
        case SML_OP_DISABLE:
            l4csmu_set_sml_cnf_ptr->result = sml_Disable(
                                                l4csmu_set_sml_req_ptr->category,
                                                SMU_SELECT_SIM(smu_ptr->smu_current_mod));
            break;
        default:
            break;
    }

    ASSERT(smu_ptr->l4csmu_set_sml_cnf_ptr == NULL);
    smu_ptr->l4csmu_set_sml_cnf_ptr = l4csmu_set_sml_cnf_ptr;
    smu_nvram_write(NVRAM_EF_SML_LID, 0xFF);

}   /* end of l4csmu_set_personalization_req_handler */

/*****************************************************************************
 * FUNCTION
 *  l4csmu_sml_status_req_handler
 * DESCRIPTION
 *  This function is to query the SIM-ME-Lock state of all categories.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_sml_status_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    l4csmu_sml_status_cnf_struct *sml_status_cnf_ptr = NULL;
    l4csmu_sml_status_req_struct *sml_status_req_ptr = NULL;
    sml_cat_enum cat = SML_CAT_N;
    kal_uint8 spaces = 0;
    kal_uint16 length = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    sml_status_cnf_ptr = (l4csmu_sml_status_cnf_struct*) construct_local_para(
                                                            sizeof(l4csmu_sml_status_cnf_struct),
                                                            TD_CTRL);

    sml_status_req_ptr = (l4csmu_sml_status_req_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);

    sml_status_cnf_ptr->src_id = sml_status_req_ptr->src_id;

    kal_mem_cpy(&(sml_status_cnf_ptr->ef_imsi[0]), &(smu_ptr->imsi[1]), 8);

    sml_status_cnf_ptr->is_valid_gid1 = smu_ptr->sim_security_info.is_valid_gid1;
    sml_status_cnf_ptr->is_valid_gid2 = smu_ptr->sim_security_info.is_valid_gid2;
    sml_status_cnf_ptr->ef_gid1 = smu_ptr->sim_security_info.gid1[0];
    sml_status_cnf_ptr->ef_gid2 = smu_ptr->sim_security_info.gid2[0];

    for (cat = SML_CAT_N; cat < SML_CAT_SIZE; cat++)
    {
        sml_Status(
            cat,
            &(sml_status_cnf_ptr->state[cat]),
            &(sml_status_cnf_ptr->retry_count[cat]),
            &(sml_status_cnf_ptr->num_of_sets[cat]),
            &spaces,
            &(sml_status_cnf_ptr->key_state[cat]),
            &(sml_status_cnf_ptr->autolock_count[cat]),
            SMU_SELECT_SIM(smu_ptr->smu_current_mod));
        sml_status_cnf_ptr->total_size_of_cat[cat] = sml_status_cnf_ptr->num_of_sets[cat] + spaces;
    }

    sml_status_cnf_ptr->digits_of_mnc = sim_query_mnc_num(SMU_SELECT_SIM(smu_ptr->smu_current_mod));

    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SML_STATUS_CNF, sml_status_cnf_ptr, NULL);

}   /* end of l4csmu_sml_status_req_handler */


#endif  /* __SIM_ME_LOCK__ */


/*****************************************************************************
 * FUNCTION
 *  convert_puct_str_to_sim
 * DESCRIPTION
 *  This function is to convert ths data string of PUCT to SIM format.
 * PARAMETERS
 *  sim_data        [OUT]       The pointer of SIM data
 *  puct_data       [IN]        The pointer of puct_data
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void convert_puct_str_to_sim(kal_uint8 *sim_data, kal_uint8 *puct_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 idx = 0;
    kal_uint8 ex = 0;
    kal_uint8 sign_of_ex = 0;
    kal_uint16 number = 0;
    kal_uint8 ov = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_FUNC, CONVERT_PUCT_STR_TO_SIM);
    for (idx = 0; idx < NUM_OF_PUCT_DIGIT; idx++)
    {
        if (*(puct_data + idx) != 0x30)
        {
            break;
        }
    }

   if (idx<=14)
   {
      number=(*(puct_data+idx)-48)*1000+(*(puct_data+idx+1)-48)*100+(*(puct_data+idx+2)-48)*10+(*(puct_data+idx+3)-48);	
      if (number>=4096)
      {
         number=(number-(*(puct_data+idx+3)-48))/10;
         ov=1;
      }
   }
    else if (idx == 15)
    {
        number = (*(puct_data + idx) - 48) * 100 + (*(puct_data + idx + 1) - 48) * 10 + *(puct_data + idx + 2) - 48;
    }
    else if (idx == 16)
    {
        number = (*(puct_data + idx) - 48) * 10 + *(puct_data + idx + 1) - 48;
    }
    else if (idx == 17)
    {
        number = *(puct_data + idx) - 48;
    }

    if (idx <= 7)
    {
        /* amanda change */
        ex = 7 - idx;   /* +7; */
        sign_of_ex = 0;
        if (ov == 1)
        {
            ex += 1;
        }
    }
    else if ((idx >= 8) && (idx <= 14))
    {
        ex = idx - 7;
        sign_of_ex = 1;
        if (ov == 1)
        {
            ex -= 1;
        }
    }
    else if ((idx >= 15) && (idx <= 17))
    {
        ex = 7;
        sign_of_ex = 1;
        if (ov == 1)
        {
            ex -= 1;
        }
    }

    *sim_data = (kal_uint8) ((number & 0x0FF0) >> 4);
    *(sim_data + 1) = (kal_uint8) (number & 0x000F);
    if (sign_of_ex == 1)
    {
        *(sim_data + 1) = *(sim_data + 1) | 0x10;
    }
    *(sim_data + 1) = *(sim_data + 1) | (ex << 5);

}   /* end of convert_puct_str_to_sim */


/*****************************************************************************
 * FUNCTION
 *  convert_puct_sim_to_str
 * DESCRIPTION
 *  This function is to convert ths data of PUCT from SIM format to string.
 * PARAMETERS
 *  puct_data       [OUT]       The pointer of puct_data
 *  sim_data        [IN]        The pointer of SIM data
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void convert_puct_sim_to_str(kal_uint8 *puct_data, kal_uint8 *sim_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint16 number = 0;
    kal_uint8 ex = 0;
    kal_uint8 sign_of_ex = 0;
    kal_uint8 idx = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_FUNC, CONVERT_PUCT_SIM_TO_STR);
    number = *sim_data;
    number = number << 4 | (*(sim_data + 1) & 0x0F);

    if (*(sim_data + 1) & 0x10)
    {
        sign_of_ex = 1;
    }
    else
    {
        sign_of_ex = 0;
    }

    ex = *(sim_data + 1) >> 5;
    kal_mem_set(puct_data, 0x30, 18);
    if ((ex <= 7) && (sign_of_ex == 0))
    {
        *(puct_data + (7 - ex)) = number / 1000;
        *(puct_data + (7 - ex) + 1) = (number - *(puct_data + (7 - ex)) * 1000) / 100;
      *(puct_data+(7-ex)+2)=(number-*(puct_data+(7-ex))*1000-*(puct_data+(7-ex)+1)*100)/10;
      *(puct_data+(7-ex)+3)=number-*(puct_data+(7-ex))*1000-*(puct_data+(7-ex)+1)*100-*(puct_data+(7-ex)+2)*10;
        for (idx = 0; idx < 4; idx++)
        {
            *(puct_data + (7 - ex) + idx) = *(puct_data + (7 - ex) + idx) + 48;
        }
    }
   else if ((ex<=7)&&(sign_of_ex==1))
   {
      *(puct_data+(7+ex))=number/1000;
      *(puct_data+(7+ex)+1)=(number-*(puct_data+(7+ex))*1000)/100;
      *(puct_data+(7+ex)+2)=(number-*(puct_data+(7+ex))*1000-*(puct_data+(7+ex)+1)*100)/10;
      *(puct_data+(7+ex)+3)=number-*(puct_data+(7+ex))*1000-*(puct_data+(7+ex)+1)*100-*(puct_data+(7+ex)+2)*10;   
        for (idx = 0; idx < 4; idx++)
        {
            *(puct_data + (7 + ex) + idx) = *(puct_data + (7 + ex) + idx) + 48;
        }
    }
}   /* end of convert_puct_sim_to_str */



/*****************************************************************************
 * FUNCTION
 *  l4csmu_start_req_handler
 * DESCRIPTION
 *  This function is to transmit nvram_read_req to NVRAM to read data in flash.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_start_req_handler(ilm_struct *smu_ilm_ptr)
/* 20060530 Revised by PH */
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    l4csmu_start_req_struct *l4csmu_start_req_ptr = NULL;

    kal_uint16 l4csmu_start_req_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, L4CSMU_START_REQ_HANDLER);

    l4csmu_start_req_ptr = (l4csmu_start_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_start_req_len);

    this_smu->smu_startup_src = l4csmu_start_req_ptr->src_id;

    /* normal bootup or exceptional reset? */
    if (l4csmu_start_req_ptr->poweron_mode == POWER_ON_EXCEPTION)

    {
        this_smu->is_exception_reset = KAL_TRUE;
    }

    else

    {
        this_smu->is_exception_reset = KAL_FALSE;
    }

    /* Load SIM-ME Lock from NVRAM first! */
    smu_nvram_read(NVRAM_EF_SML_LID, l4csmu_start_req_ptr->src_id);

    /* Load MS security setting from NVRAM */
    smu_nvram_read(NVRAM_EF_MS_SECURITY_LID, l4csmu_start_req_ptr->src_id);

}   /* end of l4csmu_start_req_handler */


/*****************************************************************************
 * FUNCTION
 *  nvram_read_cnf_handler
 * DESCRIPTION
 *  This function is to save data from flash to context of SMU and check
 *  whether phone lock is enabled. If phone lock is enabled, send L4SMU_SECURITY
 *  _IND to L4C to request phone lock password. If phone lock is disabled or phone
 *  lock is verified, send SIM_START_REQ to reset SIM card.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void nvram_read_cnf_handler(ilm_struct *smu_ilm_ptr)
/* 20060530 Revised by PH */
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    nvram_read_cnf_struct *nvram_read_cnf_ptr = NULL;

    kal_uint16 nvram_read_cnf_len = 0;

    sim_start_req_struct *sim_start_req_ptr = NULL;

    kal_uint8 *pdu_ptr = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, L4CSMU_START_REQ_HANDLER);

    nvram_read_cnf_ptr = (nvram_read_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &nvram_read_cnf_len);

    /* Load MS security data! */
    if (smu_ilm_ptr->peer_buff_ptr != NULL)
    {

        pdu_ptr = get_peer_buff_pdu(smu_ilm_ptr->peer_buff_ptr, &nvram_read_cnf_len);

        /* Load the obj from NVRAM */
        (*pSmuSecurityInfog->load) (pdu_ptr, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
    }

    /*
     * request SIM to reset SIM card.
     */
    sim_start_req_ptr = (sim_start_req_struct*) construct_local_para(sizeof(sim_start_req_struct), TD_UL);

    sim_start_req_ptr->mode = SIM_START_MODE_RESET;

    sim_start_req_ptr->access_id = nvram_read_cnf_ptr->access_id;

    if ((smu_ptr->is_exception_reset == KAL_TRUE) &&
        (*pSmuSecurityInfog->query_u8) (SMU_PIN1_VALID_U8, SMU_SELECT_SIM(smu_ptr->smu_current_mod)))
    {
        (*pSmuSecurityInfog->query_a) (SMU_PIN1_A, sim_start_req_ptr->pin1, 8, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
    }
    else
    {
        sim_start_req_ptr->pin1[0] = 0;
    }

    if ((smu_ptr->is_exception_reset == KAL_TRUE) &&
        (*pSmuSecurityInfog->query_u8) (SMU_PHONE_LOCK_VERIFIED_U8, SMU_SELECT_SIM(smu_ptr->smu_current_mod)))
    {
        smu_ptr->is_phone_lock_verified = KAL_TRUE;
    }

    if (smu_ptr->is_exception_reset == KAL_FALSE)
    {
    	kal_uint8 security_ind;  

	security_ind = (*pSmuSecurityInfog->query_u8) (SMU_SECURITY_INDICATION_U8, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

	security_ind = security_ind & 0xBF; // clear 6th bit

        (*pSmuSecurityInfog->assign_u8) (SMU_PHONE_LOCK_VERIFIED_U8,  0x0, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
        (*pSmuSecurityInfog->assign_u8) (SMU_PIN1_VALID_U8, KAL_FALSE, SMU_SELECT_SIM(smu_ptr->smu_current_mod));   	
        (*pSmuSecurityInfog->assign_u8) (SMU_SECURITY_INDICATION_U8, security_ind, SMU_SELECT_SIM(smu_ptr->smu_current_mod));  

	    smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, nvram_read_cnf_ptr->access_id);  
    }

    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_START_REQ, sim_start_req_ptr, NULL);

}   /* end of nvram_read_cnf_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_start_cnf_handler
 * DESCRIPTION
 *  This function is to save sim card data to SMU context and check whether CHV1
 *  or UBCHV1 is required. Send L4CSMU_START_CNF to inform L4C the SIM start
 *  result and whether CHV1 or UBCHV1 is required.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_start_cnf_handler(ilm_struct *smu_ilm_ptr)
/* 20060530 Revised by PH */
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    sim_start_cnf_struct *sim_start_cnf_ptr = NULL;

    l4csmu_start_cnf_struct *l4csmu_start_cnf_ptr = NULL;

    kal_uint16 sim_start_cnf_len = 0;

    kal_uint8 security_ind = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SMU_START_CNF_HANDLER);

    sim_start_cnf_ptr = (sim_start_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sim_start_cnf_len);

    l4csmu_start_cnf_ptr = (l4csmu_start_cnf_struct*) construct_local_para(sizeof(l4csmu_start_cnf_struct), TD_UL);

    /* tommy modify for phone_lock not init cause sim fail but still require phone lock */
    l4csmu_start_cnf_ptr->chv1_phonelock_status = SMU_CHV1_NOT_REQUIRED;

    l4csmu_start_cnf_ptr->cause_present = KAL_FALSE;

    l4csmu_start_cnf_ptr->cause = 0;

    l4csmu_start_cnf_ptr->rmmi_error_cause = RMMI_NO_ERR;

    smu_ptr->is_mmi_security_ind_recv = KAL_FALSE;

    security_ind = (*pSmuSecurityInfog->query_u8) (SMU_SECURITY_INDICATION_U8, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

    if ((*pSmuSecurityInfog->match) (SMU_ICCID_A,
                                     sim_start_cnf_ptr->iccid,
                                     NUM_OF_BYTE_ICCID,
                                     SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == KAL_FALSE)
    {
        (*pSmuSecurityInfog->assign_a) (SMU_ICCID_A,
                                        sim_start_cnf_ptr->iccid,
                                        NUM_OF_BYTE_ICCID, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

        //kal_sys_trace("SIM Card replaced!");
        kal_brief_trace(TRACE_INFO, INFO_SMU_SIM_REPLACED);
    }

    switch (sim_start_cnf_ptr->result)
    {
        case SIM_CMD_SUCCESS:

            smu_ptr->is_sim_card_inserted = SMU_SIM_INSERTED;  /* Kinki add for MAUI_00276095,MAUI_00276091 */

            l4csmu_start_cnf_ptr->response = SMU_RES_OK;

           // kal_mem_cpy((void*)&(smu_ptr->lp), (void*)&(sim_start_cnf_ptr->lp), sizeof(sim_lp_struct));  

            kal_mem_cpy((void*)&(l4csmu_start_cnf_ptr->lp), (void*)&(sim_start_cnf_ptr->lp), sizeof(sim_lp_struct)*2);
            //kal_mem_cpy((void*)&(smu_ptr->ecc), (void*)&(sim_start_cnf_ptr->ecc), sizeof(sim_ecc_struct));
            kal_mem_cpy(&(l4csmu_start_cnf_ptr->ecc), (void*)&(sim_start_cnf_ptr->ecc), sizeof(sim_ecc_struct));
            kal_mem_cpy(&(smu_ptr->chv_info), &(sim_start_cnf_ptr->chv_info), sizeof(sim_chv_info_struct));
            kal_mem_cpy(&(l4csmu_start_cnf_ptr->chv_info), &(sim_start_cnf_ptr->chv_info), sizeof(sim_chv_info_struct));

            l4csmu_start_cnf_ptr->is_valid_rat_mode = sim_start_cnf_ptr->is_valid_rat_mode;
            l4csmu_start_cnf_ptr->rat_mode = sim_start_cnf_ptr->rat_mode;

            /* Check CHV1 information */
            if (sim_start_cnf_ptr->chv_info.chv1_count == 255)
            {
                smu_ptr->chv_status.chv1_status = CHV_NOTINITED;
            }
            else if (sim_start_cnf_ptr->chv_info.chv1_count > 0)
            {
                if (sim_start_cnf_ptr->chv_info.is_chv1_enabled == KAL_TRUE)
                {
                    if (sim_start_cnf_ptr->chv_info.is_chv1_verified == KAL_TRUE)
                    {
                        smu_ptr->chv_status.chv1_status = CHV_VERIFIED;
                    }
                    else
                    {
                        smu_ptr->chv_status.chv1_status = CHV_RETRY_ALLOW;
                    }
                }
                else
                {
                    smu_ptr->chv_status.chv1_status = CHV_DISABLED;
                }
            }
            else if (sim_start_cnf_ptr->chv_info.chv1_count == 0)
            {
                smu_ptr->chv_status.chv1_status = CHV_BLOCKED;
            }

            /* Check CHV2 information */
            if (sim_start_cnf_ptr->chv_info.chv2_count == 255)
            {
                smu_ptr->chv_status.chv2_status = CHV_NOTINITED;
            }
            else if (sim_start_cnf_ptr->chv_info.chv2_count > 0)
            {
                smu_ptr->chv_status.chv2_status = CHV_RETRY_ALLOW;
            }
            else
            {
                smu_ptr->chv_status.chv2_status = CHV_BLOCKED;
            }

            /* Check PUK1 information */
            if (sim_start_cnf_ptr->chv_info.ubchv1_count == 255)
            {
                smu_ptr->chv_status.ubchv1_status = CHV_NOTINITED;
            }
            else if (sim_start_cnf_ptr->chv_info.ubchv1_count > 0)
            {
                smu_ptr->chv_status.ubchv1_status = CHV_RETRY_ALLOW;
            }
            else
            {
                smu_ptr->chv_status.ubchv1_status = CHV_BLOCKED;

                /* Try to allow PUK1 == 0 but CHV is in other state */
                if (smu_ptr->chv_status.chv1_status == CHV_BLOCKED)
                {
                    smu_ptr->chv_status.chv1_status = CHV_DEAD;
                    smu_ptr->sim_status = SMU_SIM_NO_IMSI; /* Kinki: No IMSI because it's a Block SIM inside. */
                }
            }

            /* Check PUK2 information */
            if (sim_start_cnf_ptr->chv_info.ubchv2_count == 255)
            {

                smu_ptr->chv_status.ubchv2_status = CHV_NOTINITED;

            }
            else if (sim_start_cnf_ptr->chv_info.ubchv2_count > 0)
            {

                smu_ptr->chv_status.ubchv2_status = CHV_RETRY_ALLOW;

            }
            else
            {

                smu_ptr->chv_status.ubchv2_status = CHV_BLOCKED;
                /* Try to allow PUK2 == 0 but CHV is in other state */
                if (smu_ptr->chv_status.chv2_status == CHV_BLOCKED)
                {
                    smu_ptr->chv_status.chv2_status = CHV_DEAD;
                }

            }

            if ((security_ind & 0x01) && (smu_ptr->is_phone_lock_verified != KAL_TRUE)) /* Check Phone lock unless it is SIM refresh (0xFF) */
            {
                l4csmu_start_cnf_ptr->chv1_phonelock_status = SMU_PHONELOCK_REQUIRED;
                smu_ptr->pending_password_id = ID_PHONELOCK;
            }
            else
            {
		        switch(smu_ptr->chv_status.chv1_status)
      		    {
        		  	case CHV_VERIFIED:
        			case CHV_DISABLED:
        			case CHV_NOTINITED:
                        l4csmu_start_cnf_ptr->chv1_phonelock_status = SMU_CHV1_NOT_REQUIRED;               
                        smu_ptr->pending_password_id = ID_SIM_BUSY;  /* PH modified for WM. We shall use ID_SIM_BUSY to wait SML check */				
        				break;
        			case CHV_RETRY_ALLOW:
                        l4csmu_start_cnf_ptr->chv1_phonelock_status = SMU_CHV1_REQUIRED;
                        smu_ptr->pending_password_id = ID_SIM_PIN1;				
        				break;
        			case CHV_BLOCKED:
                        l4csmu_start_cnf_ptr->chv1_phonelock_status = SMU_UBCHV1_REQUIRED;
                        smu_ptr->pending_password_id = ID_SIM_PUK1;				
        				break;
        			case CHV_DEAD:
                    {
                        /* reset IMSI stored in NVRAM
                           e.g there will be no SIM_MMI_SECURITY_IND later for blocked SIM
                        */
                        kal_uint8 empty_imsi[NUM_OF_BYTE_IMSI];

                        kal_mem_set(empty_imsi, 0, NUM_OF_BYTE_IMSI);
                        (*pSmuSecurityInfog->assign_a) (SMU_LAST_IMSI_A,
                                                        empty_imsi,
                                                        NUM_OF_BYTE_IMSI, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
                        smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, smu_ptr->smu_startup_src);
                        l4csmu_start_cnf_ptr->chv1_phonelock_status = SMU_SIM_BLOCKED;
                        smu_ptr->pending_password_id = ID_SIM_BLOCKED;
                        break;
                    }
        			default:
        				ASSERT(0);
        				break;
       		    }

            }
            break;  /* End of SIM_CMD_SUCCESS */

        case SIM_FATAL_ERROR:
        case SIM_NO_INSERTED:
            if (sim_start_cnf_ptr->result != SIM_NO_INSERTED)
            {
                /* reset IMSI stored in NVRAM except no SIM inserted
                   e.g there will be no SIM_MMI_SECURITY_IND later for blocked SIM
                */
                kal_uint8 empty_imsi[NUM_OF_BYTE_IMSI];

                kal_mem_set(empty_imsi, 0, NUM_OF_BYTE_IMSI);
                (*pSmuSecurityInfog->assign_a) (SMU_LAST_IMSI_A,
                                                empty_imsi,
                                                NUM_OF_BYTE_IMSI, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
            }

            smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, smu_ptr->smu_startup_src);

            smu_ptr->is_sim_card_inserted = SMU_SIM_NOT_INSERTED;      /* Kinki add for MAUI_00276095,MAUI_00276091 */

            smu_ptr->sim_status = SMU_SIM_NO_IMSI; /* Kinki add for MAUI_00632199 */
            l4csmu_start_cnf_ptr->response = SMU_RES_FALSE;

            l4csmu_start_cnf_ptr->cause_present = KAL_TRUE;

            l4csmu_start_cnf_ptr->cause = sim_start_cnf_ptr->result;

            l4csmu_start_cnf_ptr->lp[0].num_lp = 0;
            l4csmu_start_cnf_ptr->lp[1].num_lp = 0;

            /* PH add for WM */
            smu_ptr->pending_password_id = ID_SIM_BLOCKED;

            if ((security_ind & 0x01) && (smu_ptr->is_phone_lock_verified != KAL_TRUE))
            {
                /* Benson 20040318 Phone lock with no sim */
                smu_ptr->pending_password_id = ID_PHONELOCK;

                l4csmu_start_cnf_ptr->chv1_phonelock_status = SMU_PHONELOCK_REQUIRED;

            }

            break;

        default:

            break;

    }   /* End of switch(sim_start_cnf_ptr->result) */

    if (l4csmu_start_cnf_ptr->cause_present == 1) 
    {
	 if (l4csmu_start_cnf_ptr->cause == SIM_NO_INSERTED)
	 {
        	l4csmu_update_sim_status_ind(KAL_FALSE, SIM_NOT_INSERTED);       // NOT inserted SIM
        	l4csmu_start_cnf_ptr->rmmi_error_cause = SIM_NOT_INSERTED;
        }
        else
        {
        	l4csmu_update_sim_status_ind(KAL_FALSE, SIM_WRONG);     	      // other error
        	l4csmu_start_cnf_ptr->rmmi_error_cause = SIM_WRONG;                	
        }
    }
    else // if (l4csmu_start_cnf_ptr->cause_present == 0)
    {
	switch(l4csmu_start_cnf_ptr->chv1_phonelock_status)
	{
		case SMU_CHV1_REQUIRED:
			l4csmu_update_sim_status_ind(KAL_FALSE, SIM_PIN_REQUIRED);  // Require PIN1
            		l4csmu_start_cnf_ptr->rmmi_error_cause = SIM_PIN_REQUIRED;
			break;
		case SMU_UBCHV1_REQUIRED:
	              l4csmu_update_sim_status_ind(KAL_FALSE, SIM_PUK_REQUIRED);  // Require PUK1
	              l4csmu_start_cnf_ptr->rmmi_error_cause = SIM_PUK_REQUIRED;
			break;
		case SMU_SIM_BLOCKED:
  	              l4csmu_update_sim_status_ind(KAL_FALSE, SIM_FAILURE);	        // SIM blocked
            		l4csmu_start_cnf_ptr->rmmi_error_cause = SIM_FAILURE;
			break;
		default:
		       l4csmu_update_sim_status_ind(KAL_TRUE, RMMI_NO_ERR);	        // NO ERROR and NO passwd required
            		l4csmu_start_cnf_ptr->rmmi_error_cause = RMMI_NO_ERR;
			break;
	}
    }

    l4csmu_start_cnf_ptr->src_id = sim_start_cnf_ptr->access_id;

    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_START_CNF, l4csmu_start_cnf_ptr, NULL);

}   /* end of smu_start_cnf_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_security_cnf_handler
 * DESCRIPTION
 *  This function is to modify the context of SMU if necessary and pass the
 *  result to L4C.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_security_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    sim_security_cnf_struct *sim_security_cnf_ptr = NULL;
    l4csmu_security_cnf_struct *l4csmu_security_cnf_ptr = NULL;
    kal_uint16 sim_start_cnf_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SMU_START_CNF_HANDLER);

    sim_security_cnf_ptr = (sim_security_cnf_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sim_start_cnf_len);

    l4csmu_security_cnf_ptr = (l4csmu_security_cnf_struct*)
        construct_local_para(sizeof(l4csmu_security_cnf_struct), TD_UL);

    l4csmu_security_cnf_ptr->cause_present = 0;
    l4csmu_security_cnf_ptr->cause = 0;
    if ((SIM_FATAL_ERROR != sim_security_cnf_ptr->result) && (SIM_CMD_FAIL != sim_security_cnf_ptr->result))
    {
        kal_mem_cpy(&(smu_ptr->chv_info), &(sim_security_cnf_ptr->chv_info), sizeof(sim_chv_info_struct));
    }
    switch (sim_security_cnf_ptr->result)
    {
        case SIM_CMD_SUCCESS:
            l4csmu_security_cnf_ptr->response = SMU_RES_OK;
            l4csmu_security_cnf_ptr->type = TYPE_NO_REQUIRED;
            if (sim_security_cnf_ptr->which_chv == SIM_CHV_1)
            {
                /* update correct PIN1 value and store pin1_valid flag to NVRAM */
                (*pSmuSecurityInfog->assign_a) (SMU_PIN1_A, smu_ptr->temp_pin_code, 8, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
                (*pSmuSecurityInfog->assign_u8) (SMU_PIN1_VALID_U8, KAL_TRUE, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
                smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, 0xFF);

                smu_ptr->pending_password_id = ID_READY;  

		        switch(sim_security_cnf_ptr->op)
                {
                  	case VERIFY:				
                        smu_ptr->pending_password_id = ID_SIM_BUSY; /*mtk02480, before process SML, should set to SIM_BUSY*/
                        smu_ptr->chv_status.chv1_status = CHV_VERIFIED;										
                        l4csmu_security_cnf_ptr->type = TYPE_UNSPECIFIED;
                        break;
                    case CHANGE:
                    	// Kinki: CHANGE Shall remain previous status
                    	break;
                    case UNBLOCK:
                        if (smu_ptr->chv_status.chv1_status == CHV_BLOCKED || 
                            (smu_ptr->chv_status.chv1_status == CHV_RETRY_ALLOW &&  smu_ptr->is_mmrr_ready_ind_recv == KAL_FALSE))
                        {
                            sim_start_req_struct *sim_start_req_ptr = NULL;

                            /* MAUI_02159879 */
                            /*  After UNBLOCK successfully, send start_req to MOD_SIM only when CHV1 been blocked or CHV1 is not verified yet */

                            sim_start_req_ptr = (sim_start_req_struct*)construct_local_para(sizeof(sim_start_req_struct), TD_UL);
                            sim_start_req_ptr->mode = SIM_START_MODE_PUK1;
                            smu_ptr->pending_password_id = ID_SIM_BUSY;								
                            smu_ptr->chv_status.chv1_status = CHV_VERIFIED;
                            smu_ptr->is_puk_unlock = KAL_TRUE;

                            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_START_REQ, sim_start_req_ptr, NULL);
                            l4csmu_security_cnf_ptr->type = TYPE_UNSPECIFIED;
                        }
                        else
                        {
                        	smu_ptr->chv_status.chv1_status = CHV_VERIFIED;        /* Kinki:[MAUI_00833915] */
                        }
                    	break;			
                    case DISABLE:
                        smu_ptr->chv_status.chv1_status = CHV_DISABLED;
                    	break;
                    case ENABLE:
                        smu_ptr->chv_status.chv1_status = CHV_VERIFIED;
                    	break;
                    default:
                    	ASSERT(0);
                    	break;
                }				
            }
            else if (sim_security_cnf_ptr->which_chv == SIM_CHV_2)
            {
                if (sim_security_cnf_ptr->op == UNBLOCK)
                {
                    smu_ptr->chv_status.chv2_status = CHV_RETRY_ALLOW;
                }
            }

            break;

        case SIM_CMD_FAIL:
        case SIM_FATAL_ERROR:
        case SIM_NO_INSERTED:
	    case SIM_MEMORY_PROBLEM:
        case SIM_TECHNICAL_PROBLEM:
            if (sim_security_cnf_ptr->result != SIM_NO_INSERTED)
            {
                /* reset IMSI stored in NVRAM except no SIM inserted
                   e.g there will be no SIM_MMI_SECURITY_IND later for blocked SIM
                */
                kal_uint8 empty_imsi[NUM_OF_BYTE_IMSI];

                kal_mem_set(empty_imsi, 0, NUM_OF_BYTE_IMSI);
                (*pSmuSecurityInfog->assign_a) (SMU_LAST_IMSI_A,
                                                empty_imsi,
                                                NUM_OF_BYTE_IMSI, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
                smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, 0xFF);
            }
            smu_ptr->sim_status = SMU_SIM_NO_IMSI;
            l4csmu_security_cnf_ptr->type = TYPE_UNEXPECTED_ERROR;      /* Kinki: for stress test [MAUI_00859767] */
            l4csmu_security_cnf_ptr->response = SMU_RES_FALSE;
            l4csmu_security_cnf_ptr->cause_present = KAL_TRUE;
            l4csmu_security_cnf_ptr->cause = sim_security_cnf_ptr->result;
            break;

        case SIM_ACCESS_NOT_ALLOW:
        case SIM_CHV_NOT_INIT:			
            /* SIM should not return this value */
            ASSERT(0);  /* Kinki */
            break;

        case SIM_CHV_RETRY_ALLOW:
            l4csmu_security_cnf_ptr->response = SMU_RES_FALSE;
            l4csmu_security_cnf_ptr->cause_present = KAL_TRUE;
            l4csmu_security_cnf_ptr->cause = sim_security_cnf_ptr->result;
            if (sim_security_cnf_ptr->which_chv == SIM_CHV_1)
            {
                switch (sim_security_cnf_ptr->op)
                {
                    case VERIFY:
                    case DISABLE:
                    case ENABLE:
                    case CHANGE:

                        /* Check CHV1 information */
                        if (smu_ptr->chv_info.chv1_count == 255)       /* Kinki: revise MAUI_00635914 */
                        {

                            smu_ptr->chv_status.chv1_status = CHV_NOTINITED;

                        }
                        else if (smu_ptr->chv_info.chv1_count > 0)
                        {

                            if (smu_ptr->chv_info.is_chv1_enabled == KAL_TRUE)
                            {

                                smu_ptr->chv_status.chv1_status = CHV_RETRY_ALLOW;

                            }
                            else
                            {

                                smu_ptr->chv_status.chv1_status = CHV_DISABLED;

                            }
                        }
                        else if (smu_ptr->chv_info.chv1_count == 0)
                        {
                            if (smu_ptr->chv_info.ubchv1_count == 0)
                            {
                                smu_ptr->chv_status.chv1_status = CHV_DEAD;
                            }
			    else   
                                smu_ptr->chv_status.chv1_status = CHV_BLOCKED;

                        }

                        l4csmu_security_cnf_ptr->type = TYPE_CHV1;
                        break;
                    case UNBLOCK:
                        smu_ptr->chv_status.ubchv1_status = CHV_RETRY_ALLOW;
                        l4csmu_security_cnf_ptr->type = TYPE_UBCHV1;
                        break;
                    default:
                        l4csmu_security_cnf_ptr->type = TYPE_NO_REQUIRED;
                        break;
                }
            }
            else if (sim_security_cnf_ptr->which_chv == SIM_CHV_2)
            {
                switch (sim_security_cnf_ptr->op)
                {
                    case VERIFY:
                    case DISABLE:
                    case ENABLE:
                    case CHANGE:
                        smu_ptr->chv_status.chv2_status = CHV_RETRY_ALLOW;
                        l4csmu_security_cnf_ptr->type = TYPE_CHV2;
                        break;
                    case UNBLOCK:
                        smu_ptr->chv_status.ubchv2_status = CHV_RETRY_ALLOW;
                        l4csmu_security_cnf_ptr->type = TYPE_UBCHV2;
                        break;
                    default:
                        l4csmu_security_cnf_ptr->type = TYPE_NO_REQUIRED;
                        break;
                }
            }
            break;

        case SIM_CHV_BLOCK:
            l4csmu_security_cnf_ptr->response = SMU_RES_FALSE;
            l4csmu_security_cnf_ptr->cause_present = KAL_TRUE;
            l4csmu_security_cnf_ptr->cause = sim_security_cnf_ptr->result;
			
            if (sim_security_cnf_ptr->which_chv == SIM_CHV_1)
            {
                switch (sim_security_cnf_ptr->op)
                {
                    case VERIFY:
                    case DISABLE:
                    case ENABLE:
                    case CHANGE:
                        smu_ptr->chv_status.chv1_status = CHV_BLOCKED;
                        smu_ptr->pending_password_id = ID_SIM_PUK1;
                        if (smu_ptr->chv_status.ubchv1_status != CHV_BLOCKED)
                        {
                            l4csmu_security_cnf_ptr->type = TYPE_UBCHV1;
                        }
                        else    /* UBCHV1 is blocked */
                        {
                            l4csmu_security_cnf_ptr->type = TYPE_SIM_CARD_BLOCKED;
                            smu_ptr->chv_status.chv1_status = CHV_DEAD;
                            smu_ptr->pending_password_id = ID_SIM_BLOCKED;
                            smu_free_ctrl_buffer(smu_ptr->plmn_sel_info.plmn_ptr);
                            smu_free_ctrl_buffer(smu_ptr->uplmn_wact_info.plmn_ptr);
                            smu_free_ctrl_buffer(smu_ptr->oplmn_wact_info.plmn_ptr);
                            smu_free_ctrl_buffer(smu_ptr->hplmn_wact_info.plmn_ptr);
                            smu_ptr->plmn_sel_info.plmn_ptr = NULL;
                            smu_ptr->uplmn_wact_info.plmn_ptr = NULL;
                            smu_ptr->oplmn_wact_info.plmn_ptr = NULL;
                            smu_ptr->hplmn_wact_info.plmn_ptr = NULL;
                        }
                        break;
                    case UNBLOCK:
                        smu_ptr->chv_status.ubchv1_status = CHV_BLOCKED;
                        smu_ptr->chv_status.chv1_status = CHV_DEAD;
                        smu_ptr->pending_password_id = ID_SIM_BLOCKED;
                        smu_ptr->sim_status = SMU_SIM_NO_IMSI; // [MAUI_01208505]	
                        l4csmu_security_cnf_ptr->type = TYPE_SIM_CARD_BLOCKED;
                        smu_free_ctrl_buffer(smu_ptr->plmn_sel_info.plmn_ptr);
                        smu_free_ctrl_buffer(smu_ptr->uplmn_wact_info.plmn_ptr);
                        smu_free_ctrl_buffer(smu_ptr->oplmn_wact_info.plmn_ptr);
                        smu_free_ctrl_buffer(smu_ptr->hplmn_wact_info.plmn_ptr);
                        smu_ptr->plmn_sel_info.plmn_ptr = NULL;
                        smu_ptr->uplmn_wact_info.plmn_ptr = NULL;
                        smu_ptr->oplmn_wact_info.plmn_ptr = NULL;
                        smu_ptr->hplmn_wact_info.plmn_ptr = NULL;
                        break;
                    default:
                        l4csmu_security_cnf_ptr->type = TYPE_NO_REQUIRED;
                        break;
                }
                
                if (smu_ptr->chv_status.chv1_status == CHV_DEAD)
                {
                    /* reset IMSI stored in NVRAM
                    e.g there will be no SIM_MMI_SECURITY_IND later for blocked SIM
                    */
                    kal_uint8 empty_imsi[NUM_OF_BYTE_IMSI];

                    kal_mem_set(empty_imsi, 0, NUM_OF_BYTE_IMSI);
                    (*pSmuSecurityInfog->assign_a) (SMU_LAST_IMSI_A,
                                                    empty_imsi,
                                                    NUM_OF_BYTE_IMSI, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
                    smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, 0xFF);
                }
            }
            else if (sim_security_cnf_ptr->which_chv == SIM_CHV_2)
            {
                switch (sim_security_cnf_ptr->op)
                {
                    case VERIFY:
                    case DISABLE:
                    case ENABLE:
                    case CHANGE:
                        smu_ptr->chv_status.chv2_status = CHV_BLOCKED;
                        if (smu_ptr->chv_status.ubchv2_status != CHV_BLOCKED)
                        {
                            l4csmu_security_cnf_ptr->type = TYPE_UBCHV2;
                        }
                        else    /* UBCHV2 is blocked */
                        {
                            smu_ptr->chv_status.ubchv2_status = CHV_BLOCKED;
                            smu_ptr->chv_status.chv2_status = CHV_DEAD;
                            l4csmu_security_cnf_ptr->type = TYPE_UBCHV2_BLOCKED;
                        }
                        break;

                    case UNBLOCK:
                        smu_ptr->chv_status.ubchv2_status = CHV_BLOCKED;

                        if (smu_ptr->chv_status.chv2_status == CHV_BLOCKED)    /* Kinki: MAUI_00635319 */
                        {
                            smu_ptr->chv_status.chv2_status = CHV_DEAD;
                        }

                        l4csmu_security_cnf_ptr->type = TYPE_UBCHV2_BLOCKED;
                        break;
                    default:
                        l4csmu_security_cnf_ptr->type = TYPE_NO_REQUIRED;
                        break;
                }
            }
            break;

        default:
            l4csmu_security_cnf_ptr->type = TYPE_NO_REQUIRED;
            l4csmu_security_cnf_ptr->response = SMU_RES_OK;
            break;
    }


    if (l4csmu_security_cnf_ptr->cause_present == KAL_TRUE)
    {
    	switch(l4csmu_security_cnf_ptr->type)
    	{
		case TYPE_CHV1:  // Incorrect PIN1, can retry
			if (sim_security_cnf_ptr->op == VERIFY)    
				l4csmu_update_sim_status_ind(KAL_FALSE, INCORRECT_PASSWD);   	
			else 															    // [MAUI_01362281] mtk02480: During power on, If wrong PIN , Not allow SIM related AT command
				l4csmu_update_sim_status_ind(KAL_TRUE, INCORRECT_PASSWD);
		       l4csmu_security_cnf_ptr->rmmi_error_cause = INCORRECT_PASSWD;			
			break;
			
		case TYPE_UBCHV1:
			if (l4csmu_security_cnf_ptr->cause == SIM_CHV_RETRY_ALLOW)
			{
			       if (smu_ptr->chv_status.chv1_status == CHV_BLOCKED)    							
			           l4csmu_update_sim_status_ind(KAL_FALSE, INCORRECT_PASSWD);   // (PIN1 blocked) Incorrect PUK1, can retry   // Kinki: MAUI_00635023
			       else
			           l4csmu_update_sim_status_ind(KAL_TRUE, INCORRECT_PASSWD);   	// (PIN1 not blocked) Incorrect PUK1, can retry   // Kinki: MAUI_00635023 
			       l4csmu_security_cnf_ptr->rmmi_error_cause = INCORRECT_PASSWD;
			}
			else 
			{	// cause == SIM_CHV_BLOCK 
		        	l4csmu_update_sim_status_ind(KAL_FALSE, SIM_PUK_REQUIRED);   	// Incorrect PIN1, been blocked, required PUK1
		        	l4csmu_security_cnf_ptr->rmmi_error_cause = SIM_PUK_REQUIRED;			
			}
			break;			
			
		case TYPE_SIM_CARD_BLOCKED:
		       l4csmu_update_sim_status_ind(KAL_FALSE, SIM_FAILURE);				// Incorrect PUK1, been blocked/dead
		       l4csmu_security_cnf_ptr->rmmi_error_cause = SIM_FAILURE;			
			break;
			
		case TYPE_CHV2:															
		       l4csmu_security_cnf_ptr->rmmi_error_cause = INCORRECT_PASSWD;			// Incorrect PIN2, can retry
			break;			
			
		case TYPE_UBCHV2:
			if (l4csmu_security_cnf_ptr->cause == SIM_CHV_RETRY_ALLOW)
			{			  
			       l4csmu_security_cnf_ptr->rmmi_error_cause = INCORRECT_PASSWD; 		//Incorrect PUK2, can retry
			}
			else 
			{	// cause == SIM_CHV_BLOCK 
		        	l4csmu_security_cnf_ptr->rmmi_error_cause = SIM_PUK2_REQUIRED;   	// Incorrect PIN2, been blocked, required PUK2
			}			
			break;
			
		case TYPE_UBCHV2_BLOCKED:
		       l4csmu_security_cnf_ptr->rmmi_error_cause = RMMI_ERR_OPERATION_NOT_SUPPORTED;	 	// Incorrect PUK2, been blocked/dead
			break;
			
		case TYPE_UNEXPECTED_ERROR:
			if (sim_security_cnf_ptr->which_chv == SIM_CHV_1)
			{
		       	l4csmu_update_sim_status_ind(KAL_FALSE, SIM_FAILURE);  		 // CHV1 ERROR, should treat as abnormal SIM
		       	l4csmu_security_cnf_ptr->rmmi_error_cause = SIM_FAILURE;			
			}
			else 
			{
		       	l4csmu_security_cnf_ptr->rmmi_error_cause = RMMI_ERR_UNKNOWN;	  // CHV2 ERROR, won't
			}
			break;
		default:
			break;
    	}		
    }
    else 
    {		
        /*  [DUMA00122238], mtk02480
          *		PIN2/PUK2 status should not affect AT command_allow and rmmi_error_cause
	   */
	if (sim_security_cnf_ptr->which_chv == SIM_CHV_1)
	{
	 	l4csmu_update_sim_status_ind(KAL_TRUE, RMMI_NO_ERR);
	}
	
        l4csmu_security_cnf_ptr->rmmi_error_cause = RMMI_NO_ERR;    	
    }

    kal_mem_cpy(&(l4csmu_security_cnf_ptr->chv_info), &(smu_ptr->chv_info), sizeof(sim_chv_info_struct));

    l4csmu_security_cnf_ptr->src_id = sim_security_cnf_ptr->access_id;
    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SECURITY_CNF, l4csmu_security_cnf_ptr, NULL);
}   /* end of smu_security_cnf_handler */

/*****************************************************************************
 * FUNCTION
 *  smu_update_is_sim_replaced
 * DESCRIPTION
 *  This function
 * PARAMETERS
 *  imsi                [?]         
 *  simInterface        [IN]        
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
smu_sim_status_enum smu_update_is_sim_replaced(kal_uint8 *imsi, kal_uint8 simInterface)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (imsi == NULL)
    {
        smu_context_g[simInterface].sim_status = SMU_SIM_NO_IMSI;
    }
    else if ((*pSmuSecurityInfog->match) (SMU_LAST_IMSI_A, imsi, NUM_OF_BYTE_IMSI, simInterface) == KAL_FALSE)
    {
        smu_context_g[simInterface].sim_status = SMU_SIM_REPLACED;      /* MAUI_00632199 */
    }
    else
    {
        smu_context_g[simInterface].sim_status = SMU_SIM_NOT_REPLACED;  /* MAUI_00632199 */
    }

    kal_trace(TRACE_STATE, UPDATE_IS_SIM_REPLACED, smu_context_g[simInterface].sim_status);
    return smu_context_g[simInterface].sim_status;
}


/*****************************************************************************
 * FUNCTION
 *  smu_update_is_simcard_replaced
 * DESCRIPTION
 *  
 * PARAMETERS
 *  iccid               [?]         
 *  simInterface        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool smu_update_is_simcard_replaced(kal_uint8 *iccid, kal_uint8 simInterface)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if ((*pSmuSecurityInfog->match) (SMU_ICCID_A, iccid, NUM_OF_BYTE_ICCID, simInterface) == KAL_FALSE)
    {
        smu_context_g[simInterface].is_simcard_replaced = KAL_TRUE;
    }
    else
    {
        smu_context_g[simInterface].is_simcard_replaced = KAL_FALSE;
    }

    kal_trace(TRACE_STATE, UPDATE_IS_SIMCARD_REPLACED, smu_context_g[simInterface].is_simcard_replaced);
    return smu_context_g[simInterface].is_simcard_replaced;
}


#ifdef __GEMINI__

/*****************************************************************************
 * FUNCTION
 *  is_simcard_replaced
 * DESCRIPTION
 *  
 * PARAMETERS
 *  simInterface        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_simcard_replaced(kal_uint8 simInterface)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return smu_context_g[simInterface].is_simcard_replaced;
}

/* Kinki add for MAUI_00632199 */
/*****************************************************************************
* FUNCTION                                                            
*	check_sim_status
* DESCRIPTION                                                           
*   This function used to check if the present SIM card is the same as last inserted SIM. 
*
* CALLS  
*	
* PARAMETERS
*	none
* RETURNS
*     smu_sim_status_enum
*     SMU_SIM_NOT_READY,      //default value
*     SMU_SIM_NO_IMSI,           //if no IMSI will be got in this power-on sesssion (etc.  no SIM, block SIM, IMSI can't be got.)
*     SMU_SIM_REPLACED,        //IMSI is read and doesn't match with the previous IMSI.
*     SMU_SIM_NOT_REPLACED //IMSI is read and the same as the previous one.
* GLOBALS AFFECTED
*   
*****************************************************************************/
smu_sim_status_enum check_sim_status(kal_uint8 simInterface)
{
    kal_trace(TRACE_STATE, CHECK_SIM_STATUS, smu_context_g[simInterface].sim_status);
    return smu_context_g[simInterface].sim_status;
}

/* Kinki : revised ECC */
/*****************************************************************************
* FUNCTION                                                            
*	is_sim_inserted
* DESCRIPTION                                                           
*   This function is used to check whether the SIM card is inserted.
*
* CALLS  
*	
* PARAMETERS
*	kal_uint8 simInterface
* RETURNS
*     typedef enum
*     {
*         SMU_SIM_UNKNOWN,    //default value
*         SMU_SIM_NOT_INSERTED,         
*         SMU_SIM_INSERTED
*     }smu_sim_inserted_enum;
* GLOBALS AFFECTED
*   
*****************************************************************************/
smu_sim_inserted_enum is_sim_inserted(kal_uint8 simInterface)
{
    kal_trace(TRACE_STATE, IS_SIM_INSERTED, smu_context_g[simInterface].is_sim_card_inserted);
    return smu_context_g[simInterface].is_sim_card_inserted;
}

#else /* __GEMINI__ */ 

/*****************************************************************************
 * FUNCTION
 *  is_simcard_replaced
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_simcard_replaced(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return this_smu->is_simcard_replaced;
}

/* Kinki add for MAUI_00632199 */
/*****************************************************************************
* FUNCTION                                                            
*	check_sim_status
* DESCRIPTION                                                           
*   This function used to check if the present SIM card is the same as last inserted SIM. 
*
* CALLS  
*	
* PARAMETERS
*	none
* RETURNS
*     smu_sim_status_enum
*     SMU_SIM_NOT_READY,      //default value
*     SMU_SIM_NO_IMSI,           //if no IMSI will be got in this power-on sesssion (etc.  no SIM, block SIM, IMSI can't be got.)
*     SMU_SIM_REPLACED,        //IMSI is read and doesn't match with the previous IMSI.
*     SMU_SIM_NOT_REPLACED //IMSI is read and the same as the previous one.
* GLOBALS AFFECTED
*   
*****************************************************************************/
smu_sim_status_enum check_sim_status(void)
{
    kal_trace(TRACE_STATE, CHECK_SIM_STATUS, this_smu->sim_status);
    return this_smu->sim_status;    /* Kinki: should return smu_context_g[simInterface].sim_status */
}

/* Kinki : revised ECC */
/*****************************************************************************
* FUNCTION                                                            
*	is_sim_inserted
* DESCRIPTION                                                           
*   This function is used to check whether the SIM card is inserted.
*
* CALLS  
*	
* PARAMETERS
*	kal_uint8 simInterface
* RETURNS
*     typedef enum
*     {
*         SMU_SIM_UNKNOWN,    //default value
*         SMU_SIM_NOT_INSERTED,         
*         SMU_SIM_INSERTED
*     }smu_sim_inserted_enum;
* GLOBALS AFFECTED
*   
*****************************************************************************/
smu_sim_inserted_enum is_sim_inserted(void)
{
    kal_trace(TRACE_STATE, IS_SIM_INSERTED, this_smu->is_sim_card_inserted);
    return this_smu->is_sim_card_inserted;
}
#endif /* __GEMINI__ */ 

/*****************************************************************************
 * FUNCTION
 *  smu_mmi_security_ind_handler
 * DESCRIPTION
 *  This function is to save the SIM card data and check whether any personalization
 *  is required. Send L4CSMU_SECURITY_IND to inform whether personalization is
 *  required.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_mmi_security_ind_handler(ilm_struct *smu_ilm_ptr)
/* 20060530 Revised by PH */
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    sim_mmi_security_ind_struct *sim_mmi_security_ind_ptr = NULL;

    kal_uint16 sim_mmi_security_ind_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SMU_MMI_SECURITY_IND_HANDLER);

    /*
     * To avoid turbo SIM attack, make sure SML check will perform again after SIM refresh and power on
     */
    smu_ptr->is_personalization_done = KAL_FALSE;

    smu_ptr->security_status = 0x00;
    
    smu_ptr->is_mmrr_ready_ind_sent = KAL_FALSE;
    
    smu_ptr->is_mmrr_ready_ind_recv = KAL_FALSE;
    
    smu_ptr->is_mmi_security_ind_recv = KAL_TRUE;

    sim_mmi_security_ind_ptr = (sim_mmi_security_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sim_mmi_security_ind_len);

    /* Check new SIM status */
    if (sim_mmi_security_ind_ptr->result != KAL_TRUE)
    {
        smu_ptr->sim_status = SMU_SIM_NO_IMSI;   // [MAUI_02450359]
    }
    else
    {
        if (smu_update_is_sim_replaced(sim_mmi_security_ind_ptr->ef_imsi, SMU_SELECT_SIM(smu_ptr->smu_current_mod))
            == SMU_SIM_REPLACED)
        {
            // if SIM is replaced during power-off, 6th bit is reset in NVRAM after power-on to secure the handset in silent reboot mode
            kal_uint8 security_ind;

            security_ind = (*pSmuSecurityInfog->query_u8) (SMU_SECURITY_INDICATION_U8, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
            security_ind = security_ind & 0xBF;   // clear 6th bit
            (*pSmuSecurityInfog->assign_u8) (SMU_SECURITY_INDICATION_U8, security_ind, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
            smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, 0xFF);
        }
    }

    /* 
     * copy the inforamtion of imsi, gid1, gid2 to temperarily allocated memory
     */
    kal_mem_cpy((void*)(smu_ptr->imsi), (void*)(sim_mmi_security_ind_ptr->ef_imsi), NUM_OF_BYTE_IMSI);

#ifdef __SIM_ME_LOCK__
    kal_mem_cpy((void*)&(smu_ptr->sim_security_info.gid1), (void*)&(sim_mmi_security_ind_ptr->gid1), NUM_GID1);

    kal_mem_cpy((void*)&(smu_ptr->sim_security_info.gid2), (void*)&(sim_mmi_security_ind_ptr->gid2), NUM_GID2);

    smu_ptr->sim_security_info.is_valid_gid1 = sim_mmi_security_ind_ptr->is_valid_gid1;

    smu_ptr->sim_security_info.is_valid_gid2 = sim_mmi_security_ind_ptr->is_valid_gid2;

    /* Copy DCK to smu context if it is valid */
    smu_ptr->is_valid_dck = sim_mmi_security_ind_ptr->is_valid_dck;

    kal_mem_cpy(smu_ptr->n_dck, &(sim_mmi_security_ind_ptr->dck[0]), 4);

    kal_mem_cpy(smu_ptr->ns_dck, &(sim_mmi_security_ind_ptr->dck[4]), 4);

    kal_mem_cpy(smu_ptr->sp_dck, &(sim_mmi_security_ind_ptr->dck[8]), 4);

    kal_mem_cpy(smu_ptr->cp_dck, &(sim_mmi_security_ind_ptr->dck[12]), 4);
#endif

    /* Check if SIM is replaced & Save IMSI to NVRAM */

    (*pSmuSecurityInfog->assign_a) (SMU_LAST_IMSI_A,
                                    sim_mmi_security_ind_ptr->ef_imsi,
                                    NUM_OF_BYTE_IMSI, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

    /* UPDATE PLMN data */
    smu_free_ctrl_buffer(smu_ptr->plmn_sel_info.plmn_ptr);

    smu_ptr->plmn_sel_info.plmn_ptr = sim_mmi_security_ind_ptr->plmnsel_data;

    smu_ptr->plmn_sel_info.num = sim_mmi_security_ind_ptr->num_plmnsel_data;

    smu_free_ctrl_buffer(smu_ptr->uplmn_wact_info.plmn_ptr);

    smu_ptr->uplmn_wact_info.plmn_ptr = sim_mmi_security_ind_ptr->uplmnwact_data;

    smu_ptr->uplmn_wact_info.num = sim_mmi_security_ind_ptr->num_uplmnwact_data;

    smu_free_ctrl_buffer(smu_ptr->oplmn_wact_info.plmn_ptr);

    smu_ptr->oplmn_wact_info.plmn_ptr = sim_mmi_security_ind_ptr->oplmnwact_data;

    smu_ptr->oplmn_wact_info.num = sim_mmi_security_ind_ptr->num_oplmnwact_data;

    // HPLMNwact
    smu_free_ctrl_buffer(smu_ptr->hplmn_wact_info.plmn_ptr);

    smu_ptr->hplmn_wact_info.plmn_ptr = sim_mmi_security_ind_ptr->hplmnwact_data;

    smu_ptr->hplmn_wact_info.num = sim_mmi_security_ind_ptr->num_hplmnwact_data;

    /* Stop process if PHONE LOCK is set */
    if (smu_ptr->pending_password_id == ID_PHONELOCK)
    {
        return;
    }

#ifdef __SIM_ME_LOCK__
    /* Process OTA first! */
    smu_sml_ota_process();
    /* Process autolock */
    smu_sml_autolock(smu_ptr->smu_startup_src);
#else
    smu_ptr->is_personalization_done = KAL_TRUE;
    smu_ptr->pending_password_id = ID_READY;
    smu_send_security_cnf(TYPE_NO_REQUIRED, 0xFF, smu_ptr->smu_startup_src, SMU_RES_OK, RMMI_NO_ERR);    
    smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, 0xFF);
#endif

}   /* end of smu_mmi_security_ind_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_mmrr_ready_ind_handler
 * DESCRIPTION
 *  This function is to prompt l4c to notify rac to register network
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_mmrr_ready_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* 20031201 campon before unlock PhoneLock */
    if (smu_ilm_ptr != NULL)    /* only for first time */
    {
        sim_mmrr_ready_ind_struct *sim_mmrr_ready_ind_ptr = NULL;
        kal_uint16 length;

        sim_mmrr_ready_ind_ptr = (sim_mmrr_ready_ind_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);
        smu_ptr->is_mmrr_ready_ind_recv = KAL_TRUE;

        if (sim_mmrr_ready_ind_ptr->cipher_ind == KAL_TRUE)
        {
            smu_ptr->cipher_ind = SMU_CI_ENABLE;
        }
        else
        {
            smu_ptr->cipher_ind = SMU_CI_DISABLE;
        }

        if (smu_ptr->is_personalization_done == KAL_TRUE)
        {
     #ifndef __IMEI_LOCK_SUPPORT__
            l4csmu_mmrr_ready_ind_struct *l4csmu_mmrr_ready_ind_ptr = NULL;

            l4csmu_mmrr_ready_ind_ptr = (l4csmu_mmrr_ready_ind_struct*)
                construct_local_para(sizeof(l4csmu_mmrr_ready_ind_struct), TD_UL);
            l4csmu_mmrr_ready_ind_ptr->cipher_ind = smu_ptr->cipher_ind;
            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_MMRR_READY_IND, l4csmu_mmrr_ready_ind_ptr, NULL);
     #endif   
            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_READY_REQ, NULL, NULL);
            smu_ptr->is_mmrr_ready_ind_sent = KAL_TRUE;
        }
    }
    else    /* smu_ilm_ptr==NULL */
    {

        if (smu_ptr->is_mmrr_ready_ind_sent == KAL_FALSE)
        {
     #ifndef __IMEI_LOCK_SUPPORT__
            l4csmu_mmrr_ready_ind_struct *l4csmu_mmrr_ready_ind_ptr = NULL;

            l4csmu_mmrr_ready_ind_ptr = (l4csmu_mmrr_ready_ind_struct*)
                construct_local_para(sizeof(l4csmu_mmrr_ready_ind_struct), TD_UL);
            l4csmu_mmrr_ready_ind_ptr->cipher_ind = smu_ptr->cipher_ind;
            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_MMRR_READY_IND, l4csmu_mmrr_ready_ind_ptr, NULL);
     #endif           
            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_READY_REQ, NULL, NULL);
            smu_ptr->is_mmrr_ready_ind_sent = KAL_TRUE;
        }
    }
}   /* end of smu_mmrr_ready_ind_handler */

#ifdef __IMEI_LOCK_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  smu_imei_lock_verified_ind_handler
 * DESCRIPTION
 *  This function is to prompt l4c to notify rac to register network
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_imei_lock_verified_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*******************************************************
      * mtk02480, If support IMEI lock verify, we have to wait for verified 
      * indication then trigger L4C attach normal service     
      ********************************************************/

	l4csmu_mmrr_ready_ind_struct *l4csmu_mmrr_ready_ind_ptr = NULL;

	l4csmu_mmrr_ready_ind_ptr = (l4csmu_mmrr_ready_ind_struct*)
		construct_local_para(sizeof(l4csmu_mmrr_ready_ind_struct), TD_UL);

	l4csmu_mmrr_ready_ind_ptr->cipher_ind = this_smu->cipher_ind;
	smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_MMRR_READY_IND, l4csmu_mmrr_ready_ind_ptr, NULL);       
}  
#endif

/*****************************************************************************
 * FUNCTION
 *  smu_mmi_ready_ind_handler
 * DESCRIPTION
 *  This function is to save the SIM card data and check whether any personalization
 *  is required. Send L4CSMU_SECURITY_IND to inform whether personalization is
 *  required.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_mmi_ready_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    sim_mmi_ready_ind_struct *sim_mmi_ready_ind_ptr = NULL;
    l4csmu_mmi_info_ind_struct *l4csmu_mmi_info_ind_ptr = NULL;
    kal_uint16 sim_mmi_ready_ind_len = 0;
    kal_uint8 index;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SMU_MMI_READY_IND_HANDLER);
    sim_mmi_ready_ind_ptr = (sim_mmi_ready_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sim_mmi_ready_ind_len);
    if (sim_mmi_ready_ind_ptr->is_valid_puct == KAL_TRUE)
    {
        smu_ptr->is_puct_valid = KAL_TRUE;
        //kal_mem_cpy((void*)&(smu_ptr->puct_data.currency_code), (void*)&(sim_mmi_ready_ind_ptr->ef_puct[0]), 3);
       // kal_mem_cpy((void*)&(smu_ptr->puct_data.price_unit), (void*)&(sim_mmi_ready_ind_ptr->ef_puct[3]), 2);
       
       /*There is copying currency_code and price_unit together*/ 
       kal_mem_cpy((void*)&(smu_ptr->puct_data), (void*)(sim_mmi_ready_ind_ptr->ef_puct),5);
    }
    else
    {
        smu_ptr->is_puct_valid = KAL_FALSE;
        kal_mem_set(&smu_ptr->puct_data, 0x00, 5);
    }

    /* 
     * copy phase and dn_type to SMU context
     */

    smu_ptr->dn_type = sim_mmi_ready_ind_ptr->dn_type;
    /* smu_ptr->phase=sim_mmi_ready_ind_ptr->phase; //Kinki remove(useless field in context) */

    l4csmu_mmi_info_ind_ptr = (l4csmu_mmi_info_ind_struct*)
        construct_local_para(sizeof(l4csmu_mmi_info_ind_struct), TD_UL | TD_RESET);  // mtk02480, add TD_RESET

    /* acting HPLMN initialize */
    l4csmu_mmi_info_ind_ptr->is_valid_ef_acting_hplmn = KAL_FALSE;
#ifdef __ENS__  /* mtk01488 */
    l4csmu_mmi_info_ind_ptr->is_valid_ef_acting_hplmn = sim_mmi_ready_ind_ptr->is_valid_ef_acting_hplmn;
    if (KAL_TRUE == l4csmu_mmi_info_ind_ptr->is_valid_ef_acting_hplmn)
    {
        kal_mem_cpy(l4csmu_mmi_info_ind_ptr->ef_acting_hplmn, sim_mmi_ready_ind_ptr->ef_acting_hplmn, 3);
    }
#endif /* __ENS__ */ 

    /* SPN */
    l4csmu_mmi_info_ind_ptr->is_spn_valid = sim_mmi_ready_ind_ptr->is_spn_valid;
    if (sim_mmi_ready_ind_ptr->is_spn_valid == KAL_TRUE)
    {
        //if (sim_mmi_ready_ind_ptr->spn[0] & 0x01)
        //   l4csmu_mmi_info_ind_ptr->is_spn_RPLMN_required = KAL_TRUE;
        //else
        //   l4csmu_mmi_info_ind_ptr->is_spn_RPLMN_required = KAL_FALSE;
        l4csmu_mmi_info_ind_ptr->is_spn_RPLMN_required = sim_mmi_ready_ind_ptr->spn[0]; /* mtk01488: release 6 */

        kal_mem_cpy(l4csmu_mmi_info_ind_ptr->spn, sim_mmi_ready_ind_ptr->spn + 1, (LEN_OF_SPN - 1));    /* Kinki: just need to copy name part */

        for (index = 0; index < (LEN_OF_SPN - 1); index++)  /* Kinki: copy 16 bytes , name index 0~15 */
        {
            if (l4csmu_mmi_info_ind_ptr->spn[index] == 0xff)
            {
                //l4csmu_mmi_info_ind_ptr->spn[index] = '\0';
                break;
            }
        }

        if (index == (LEN_OF_SPN - 1))  /* Kinki: if index = 16, means the 0~15 bytes contain name, make it is null-terminate. */
        {
            //l4csmu_mmi_info_ind_ptr->spn[index] = '\0';
            l4csmu_mmi_info_ind_ptr->spn[index] = 0xff;
        }
    }

    /* OPNAME */
    l4csmu_mmi_info_ind_ptr->is_opname_valid = sim_mmi_ready_ind_ptr->is_opname_valid;
    kal_mem_set(l4csmu_mmi_info_ind_ptr->opname, 0, 21);
    if (sim_mmi_ready_ind_ptr->is_opname_valid == KAL_TRUE)
    {
        kal_mem_cpy(l4csmu_mmi_info_ind_ptr->opname, sim_mmi_ready_ind_ptr->opname, LEN_OF_OPNAME);
        for (index = 0; index < LEN_OF_OPNAME; index++)
        {
            if (l4csmu_mmi_info_ind_ptr->opname[index] == 0xff)
            {
                //l4csmu_mmi_info_ind_ptr->opname[index] = 0;
                break;
            }
        }
    }

    /* SOPNAME */
    l4csmu_mmi_info_ind_ptr->is_sopname_valid = sim_mmi_ready_ind_ptr->is_sopname_valid;
    kal_mem_set(l4csmu_mmi_info_ind_ptr->sopname, 0, 11);
    if (sim_mmi_ready_ind_ptr->is_sopname_valid == KAL_TRUE)
    {
        kal_mem_cpy(l4csmu_mmi_info_ind_ptr->sopname, sim_mmi_ready_ind_ptr->sopname, LEN_OF_SOPNAME);
        for (index = 0; index < LEN_OF_SOPNAME; index++)
        {
            if (l4csmu_mmi_info_ind_ptr->sopname[index] == 0xff)
            {
                //l4csmu_mmi_info_ind_ptr->sopname[index] = 0;
                break;
            }
        }
    }

    /* MSISDN */
    
        //kal_uint8 index;

        l4csmu_mmi_info_ind_ptr->no_msisdn = sim_mmi_ready_ind_ptr->no_msisdn;

        for (index = 0; index < 2 && index < l4csmu_mmi_info_ind_ptr->no_msisdn; index++)
        {
            kal_uint8 digit_size;
            istring_type istring;
            kal_uint8 alpha_id_size;

            istring.length = l4csmu_mmi_info_ind_ptr->msisdn[index].alpha_id_size = 20;
            istring.data = (kal_uint8*) l4csmu_mmi_info_ind_ptr->msisdn[index].alpha_id;

            alpha_id_size = istring_decode_from_sim(
                                sim_mmi_ready_ind_ptr->msisdn[index].alpha_id_size,
                                sim_mmi_ready_ind_ptr->msisdn[index].alpha_id,
                                &istring);

            alpha_id_size = (alpha_id_size<=30)?alpha_id_size:30;
            l4csmu_mmi_info_ind_ptr->msisdn[index].alpha_id_size = alpha_id_size;
            l4csmu_mmi_info_ind_ptr->msisdn[index].alpha_id_dcs = istring.charset;
            l4csmu_mmi_info_ind_ptr->msisdn[index].alpha_id[alpha_id_size] = 0;
            l4csmu_mmi_info_ind_ptr->msisdn[index].alpha_id[alpha_id_size + 1] = 0;

            l4csmu_mmi_info_ind_ptr->msisdn[index].ton_npi = sim_mmi_ready_ind_ptr->msisdn[index].bcd_digit[0];
            digit_size = convert_to_digit(
                            sim_mmi_ready_ind_ptr->msisdn[index].bcd_digit + 1,
                            l4csmu_mmi_info_ind_ptr->msisdn[index].digit);
            if (digit_size < 41)
            {
                l4csmu_mmi_info_ind_ptr->msisdn[index].digit[digit_size] = 0;
                l4csmu_mmi_info_ind_ptr->msisdn[index].digit_size = digit_size;
            }
            else
            {
                l4csmu_mmi_info_ind_ptr->msisdn[index].digit[40] = 0;
                l4csmu_mmi_info_ind_ptr->msisdn[index].digit_size = 40;
            }
        }
  

    /* Information Number */
    l4csmu_mmi_info_ind_ptr->no_info_num = sim_mmi_ready_ind_ptr->no_info_num;
    l4csmu_mmi_info_ind_ptr->info_num = (l4csmu_info_num_struct*) sim_mmi_ready_ind_ptr->info_num;

    /* CSP */
    l4csmu_mmi_info_ind_ptr->is_valid_csp = sim_mmi_ready_ind_ptr->is_valid_csp;
    kal_mem_cpy(l4csmu_mmi_info_ind_ptr->csp, sim_mmi_ready_ind_ptr->csp, 22);

    /* PUCT */
    l4csmu_mmi_info_ind_ptr->is_puct_valid = sim_mmi_ready_ind_ptr->is_valid_puct;
    kal_mem_cpy(l4csmu_mmi_info_ind_ptr->ef_puct, sim_mmi_ready_ind_ptr->ef_puct, 5);

#ifdef __SIM_ME_LOCK__
    /* SIM-ME-LOCK AUTO LOCK INFORMATION */
    l4csmu_mmi_info_ind_ptr->is_autolock_enable = smu_ptr->is_autolock_enable;
    l4csmu_mmi_info_ind_ptr->autolock_result = smu_ptr->is_autolock_success;
    l4csmu_mmi_info_ind_ptr->autolock_remain = smu_ptr->autolock_remain_count;
#endif
   
    l4csmu_mmi_info_ind_ptr->digits_of_mnc = sim_query_mnc_num(SMU_SELECT_SIM(smu_ptr->smu_current_mod));

    l4csmu_mmi_info_ind_ptr->is_usim = sim_mmi_ready_ind_ptr->is_usim; //kinki_wise

    // R7 EHPLMN
    l4csmu_mmi_info_ind_ptr->is_valid_ef_ehplmn = sim_mmi_ready_ind_ptr->is_valid_ef_ehplmn;
    l4csmu_mmi_info_ind_ptr->num_of_ehplmn = sim_mmi_ready_ind_ptr->num_of_ehplmn;
    kal_mem_cpy(l4csmu_mmi_info_ind_ptr->ef_ehplmn, sim_mmi_ready_ind_ptr->ef_ehplmn, sizeof(sim_mmi_ready_ind_ptr->ef_ehplmn));

    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_MMI_INFO_IND, l4csmu_mmi_info_ind_ptr, NULL);

}   /* end of smu_mmi_ready_ind_handler */


/*****************************************************************************
 * FUNCTION
 *  l4csmu_security_req_handler
 * DESCRIPTION
 *  This function is to parse the security request. If request is about CHV, pass
 *  the request to SIM. If not, process the request in the SMU module.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_security_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    l4csmu_security_req_struct *l4csmu_security_req_ptr = NULL;
    kal_uint16 l4csmu_security_req_len = 0;
    kal_uint8 security_ind = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, L4CSMU_SECURITY_REQ_HANDLER);
    l4csmu_security_req_ptr = (l4csmu_security_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_security_req_len);
	
    security_ind = (*pSmuSecurityInfog->query_u8) (SMU_SECURITY_INDICATION_U8, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

#if defined(__GEMINI__) && defined(__SIM_ME_LOCK__)
    /* link_SML */
    if (l4csmu_security_req_ptr->op == SUPER_VERIFY)
    {
        kal_brief_trace(TRACE_INFO, INFO_LINK_SML_SUPER_VERFY);
    #if defined(__CUSTOMER_TC01_DISK__) && !defined(WISDOM_MMI)
        smu_tc01_sml_Verify(l4csmu_security_req_ptr->src_id, l4csmu_security_req_ptr->type, l4csmu_security_req_ptr->key1);
    #else
        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
        smu_check_sml(0, l4csmu_security_req_ptr->src_id);
    #endif
        return;
    }
#endif
    
    if ((l4csmu_security_req_ptr->type != TYPE_CHV1) && (l4csmu_security_req_ptr->type != TYPE_CHV2))
    {
        /* PIN1 and PIN2 are saved in string format, othes are saved in BCD format
         * we add the padding "f" while saving the SML control keys, so also add padding for comparison
         */
        kal_uint8 idx = 0;

        for (idx = 0; idx < SML_MAX_SUPPORT_KEY_LEN; idx++)
        {
            if (((l4csmu_security_req_ptr->key1[idx]) & 0xF0) == 0xF0)
            {
                if (idx < SML_MAX_SUPPORT_KEY_LEN-1)
                {
                    kal_mem_set(&(l4csmu_security_req_ptr->key1[idx + 1]), 0xFF, (SML_MAX_SUPPORT_KEY_LEN-1) - idx);
                    break;
                }
            }
            else if (((l4csmu_security_req_ptr->key1[idx]) & 0x0F) == 0x0F)
            {
                l4csmu_security_req_ptr->key1[idx] = (l4csmu_security_req_ptr->key1[idx]) | 0xF0;
                if (idx < SML_MAX_SUPPORT_KEY_LEN-1)
                {
                    kal_mem_set(&(l4csmu_security_req_ptr->key1[idx + 1]), 0xFF, (SML_MAX_SUPPORT_KEY_LEN-1) - idx);
                    break;
                }
            }
        }
       // idx = 0;
        for (idx = 0; idx < SML_MAX_SUPPORT_KEY_LEN; idx++)
        {
            if (((l4csmu_security_req_ptr->key2[idx]) & 0xF0) == 0xF0)
            {
                if (idx < SML_MAX_SUPPORT_KEY_LEN-1)
                {
                    kal_mem_set(&(l4csmu_security_req_ptr->key2[idx + 1]), 0xFF, (SML_MAX_SUPPORT_KEY_LEN-1) - idx);
                    break;
                }
            }
            else if (((l4csmu_security_req_ptr->key2[idx]) & 0x0F) == 0x0F)
            {
                l4csmu_security_req_ptr->key2[idx] = (l4csmu_security_req_ptr->key2[idx]) | 0xF0;
                if (idx < SML_MAX_SUPPORT_KEY_LEN-1)
                {
                    kal_mem_set(&(l4csmu_security_req_ptr->key2[idx + 1]), 0xFF, (SML_MAX_SUPPORT_KEY_LEN-1) - idx);
                    break;
                }
            }
        }
    }

    switch (l4csmu_security_req_ptr->type)
    {
        case TYPE_CHV1:
        {
            smu_send_security_req(
                SIM_CHV_1,
                l4csmu_security_req_ptr->op,
                l4csmu_security_req_ptr->key1,
                l4csmu_security_req_ptr->key2,
                l4csmu_security_req_ptr->src_id);
                smu_ptr->smu_startup_src = l4csmu_security_req_ptr->src_id;
        }
            break;
        case TYPE_CHV2:
            smu_send_security_req(
                SIM_CHV_2,
                l4csmu_security_req_ptr->op,
                l4csmu_security_req_ptr->key1,
                l4csmu_security_req_ptr->key2,
                l4csmu_security_req_ptr->src_id);
            break;
        case TYPE_PHONELOCK:
        {
            smu_ptr->smu_startup_src = l4csmu_security_req_ptr->src_id;

            if ((*pSmuSecurityInfog->match) (SMU_PHONE_KEY_A,
                                             l4csmu_security_req_ptr->key1, NUM_OF_BYTE_KEY,
                                             SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == KAL_FALSE)
            {            
             	  smu_send_security_cnf(TYPE_PHONELOCK, 0xFF, 
				 	l4csmu_security_req_ptr->src_id, SMU_RES_FALSE, RMMI_NO_ERR);
            }
            else
            {
                switch (l4csmu_security_req_ptr->op)
                {
                    case VERIFY:

                        (*pSmuSecurityInfog->assign_u8) (SMU_PHONE_LOCK_VERIFIED_U8, KAL_TRUE, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

                        smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, l4csmu_security_req_ptr->src_id);     

                        smu_ptr->security_status |= 0x01;
                        smu_ptr->pending_password_id = ID_READY;
                        smu_ptr->is_phone_lock_verified = KAL_TRUE;

                        if ((smu_ptr->chv_status.chv1_status == CHV_RETRY_ALLOW)
                            && (L4C_PTR->smu_activated == L4C_SMU_INACTIVE))
                        {
                            smu_ptr->pending_password_id = ID_SIM_PIN1;
                     	l4csmu_update_sim_status_ind(KAL_FALSE, SIM_PIN_REQUIRED);
	                     smu_send_security_cnf( TYPE_CHV1,
                                            			smu_ptr->chv_info.chv1_count,
                                            			l4csmu_security_req_ptr->src_id,
                                            			SMU_RES_OK, SIM_PIN_REQUIRED); 
                        }
                        else if ((smu_ptr->chv_status.chv1_status == CHV_BLOCKED)
                                 && (smu_ptr->chv_status.ubchv1_status == CHV_RETRY_ALLOW))  
                        {
                            smu_ptr->pending_password_id = ID_SIM_PUK1;
                     	l4csmu_update_sim_status_ind(KAL_FALSE, SIM_PUK_REQUIRED);
	                     smu_send_security_cnf( TYPE_UBCHV1,
                                					smu_ptr->chv_info.ubchv1_count,
                                					l4csmu_security_req_ptr->src_id,
                                					SMU_RES_OK, SIM_PUK_REQUIRED); 
                        }                        
                        else if (smu_ptr->is_sim_card_inserted == SMU_SIM_NOT_INSERTED)        /* Kinki add for MAUI_00276095,MAUI_00276091 */
                        {
		              l4csmu_update_sim_status_ind(KAL_FALSE, SIM_NOT_INSERTED);
		              smu_send_security_cnf( TYPE_NO_REQUIRED, 0xFF,                                                   
	                                                   	l4csmu_security_req_ptr->src_id,
	                                                   	SMU_RES_OK, SIM_NOT_INSERTED); 
                        }
                        else if ((smu_ptr->chv_status.chv1_status == CHV_DEAD) 
					&& (smu_ptr->chv_status.ubchv1_status== CHV_BLOCKED)) 
                        {
                            smu_ptr->pending_password_id = ID_SIM_BLOCKED; 
                            l4csmu_update_sim_status_ind(KAL_FALSE, SIM_FAILURE);
                            smu_send_security_cnf(TYPE_SIM_CARD_BLOCKED,
                                                  		0,
                                                  		l4csmu_security_req_ptr->src_id,
                                                  		SMU_RES_OK, SIM_FAILURE); 
                        }
                        else
                        {
                            #ifdef __SIM_ME_LOCK__
                                if (smu_ptr->is_mmi_security_ind_recv == KAL_TRUE)
                                {
                                    smu_sml_ota_process();    /* Process OTA first! */                               
                                    smu_sml_autolock(l4csmu_security_req_ptr->src_id);  /* Check and Process autolock */
                                }
                            #else
                                smu_ptr->is_personalization_done = KAL_TRUE;
                                smu_ptr->pending_password_id = ID_READY;
                                smu_send_security_cnf(TYPE_NO_REQUIRED, 0xFF, smu_ptr->smu_startup_src, SMU_RES_OK, RMMI_NO_ERR);
                                if (smu_ptr->is_mmrr_ready_ind_recv == KAL_TRUE)
                                {
                                    smu_mmrr_ready_ind_handler(NULL);
                                }                                
                            #endif                                
                        }
                        break;
                    case DISABLE:

                        (*pSmuSecurityInfog->assign_u8) (SMU_SECURITY_INDICATION_U8, (kal_uint8) (security_ind & 0xFE), SMU_SELECT_SIM(smu_ptr->smu_current_mod));  

                        smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, l4csmu_security_req_ptr->src_id);   
                        smu_send_security_cnf(TYPE_NO_REQUIRED,
                                              0xFF,
                                              l4csmu_security_req_ptr->src_id,
                                              SMU_RES_OK, RMMI_NO_ERR);
                        break;
                    case ENABLE:

                        (*pSmuSecurityInfog->assign_u8) (SMU_SECURITY_INDICATION_U8, (kal_uint8) (security_ind | 0x01), SMU_SELECT_SIM(smu_ptr->smu_current_mod));

                        smu_ptr->is_phone_lock_verified = KAL_TRUE;
                        smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, l4csmu_security_req_ptr->src_id);    
                        smu_send_security_cnf(TYPE_NO_REQUIRED,
                                              0xFF,
                                              l4csmu_security_req_ptr->src_id,
                                              SMU_RES_OK, RMMI_NO_ERR);
                        break;
                    case CHANGE:

                        (*pSmuSecurityInfog->assign_a) (SMU_PHONE_KEY_A, l4csmu_security_req_ptr->key2, 8, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

                        smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, l4csmu_security_req_ptr->src_id);   
                  	   smu_send_security_cnf(TYPE_NO_REQUIRED,0xFF,
                        l4csmu_security_req_ptr->src_id,SMU_RES_OK, RMMI_NO_ERR);           
                        break;
                    default:
                        break;
                }
            }
        }
            break;
    #ifdef __SIM_ME_LOCK__                    
    #if defined(__CUSTOMER_TC01_DISK__) && !defined(WISDOM_MMI)
        case TYPE_NP:
        case TYPE_NSP:
        case TYPE_SP:
        case TYPE_CP:
            smu_tc01_sml_Verify(l4csmu_security_req_ptr->src_id, l4csmu_security_req_ptr->type, l4csmu_security_req_ptr->key1);
            break;
    #else		
        case TYPE_NP:
            switch(l4csmu_security_req_ptr->op)
            {
                case VERIFY:
                    if (sml_Verify(
                            SML_CAT_N,
                            l4csmu_security_req_ptr->key1,
                            SML_MAX_SUPPORT_KEY_LEN,
                            &(smu_ptr->cphs_lock_count),
                            SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);

                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf( TYPE_NP,
                                       smu_ptr->cphs_lock_count,
                                       l4csmu_security_req_ptr->src_id,
                                       SMU_RES_FALSE, RMMI_ERR_NW_PERSON_PUK_REQUIRED);                                   
                            smu_ptr->pending_password_id=ID_PH_NET_PUK;	          
                        }
                        else
                        {
                            smu_send_security_cnf( TYPE_NP,
                                       smu_ptr->cphs_lock_count,
                                       l4csmu_security_req_ptr->src_id,
                                       SMU_RES_FALSE, INCORRECT_PASSWD);
                        }
                    }
                    else
                    {
                        smu_ptr->security_status |= 0x02;
                        smu_ptr->pending_password_id = ID_SIM_BUSY;
                        smu_ptr->is_masterkey_unlocked = KAL_TRUE;
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_check_sml(0xFC, l4csmu_security_req_ptr->src_id);
                    }
                    break;
            #ifdef __CHANGE_SML_KEY__
                case CHANGE:
                    if (sml_ChangePW(SML_CAT_N, 
                                     &(smu_ptr->cphs_lock_count),
                                     l4csmu_security_req_ptr->key1,
                                     l4csmu_security_req_ptr->key2 ,
                                     SML_MAX_SUPPORT_KEY_LEN,
                                     SMU_SELECT_SIM(smu_ptr->smu_current_mod))==KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf(TYPE_NP,
                                                  smu_ptr->cphs_lock_count,
                                                  l4csmu_security_req_ptr->src_id,
                                                  SMU_RES_FALSE, RMMI_ERR_NW_PERSON_PUK_REQUIRED);                                   
                            smu_ptr->pending_password_id=ID_PH_NET_PUK;	          
                        }
                        else
                        {
                            smu_send_security_cnf(TYPE_NP,
                                                  smu_ptr->cphs_lock_count,
                                                  l4csmu_security_req_ptr->src_id,
                                                  SMU_RES_FALSE, INCORRECT_PASSWD);
                        }
                    }
                    else
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_send_security_cnf(TYPE_NO_REQUIRED,
                                              0XFF,
                                              l4csmu_security_req_ptr->src_id,
                                              SMU_RES_OK, RMMI_NO_ERR);
                    }
                    break;
            #endif
                default:
                    break;
            }
            break;
        case TYPE_NSP:
            switch(l4csmu_security_req_ptr->op)
            {
                case VERIFY:
                    if (sml_Verify(
                            SML_CAT_NS,
                            l4csmu_security_req_ptr->key1,
                            SML_MAX_SUPPORT_KEY_LEN,
                            &(smu_ptr->cphs_lock_count),
                            SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);

                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf(TYPE_NSP,
                                        smu_ptr->cphs_lock_count,
                                        l4csmu_security_req_ptr->src_id,
                                        SMU_RES_FALSE, RMMI_ERR_NW_SUB_PERSON_PUK_REQUIRED);
                            smu_ptr->pending_password_id=ID_PH_NETSUB_PUK;	                       
                        }
                        else
                        {    
                            smu_send_security_cnf(TYPE_NSP,
                                                  smu_ptr->cphs_lock_count,
                                                  l4csmu_security_req_ptr->src_id,
                                                  SMU_RES_FALSE, INCORRECT_PASSWD);
                        }
                    } 
                    else 
                    {
                        smu_ptr->security_status |= 0x04;
                        smu_ptr->pending_password_id = ID_SIM_BUSY;
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_check_sml(0xF8, l4csmu_security_req_ptr->src_id);
                    }
                    break;
        #ifdef __CHANGE_SML_KEY__
                case CHANGE:
                    if(sml_ChangePW(SML_CAT_NS,
                                    &(smu_ptr->cphs_lock_count),
                                    l4csmu_security_req_ptr->key1,
                                    l4csmu_security_req_ptr->key2 ,
                                    SML_MAX_SUPPORT_KEY_LEN,
                                    SMU_SELECT_SIM(smu_ptr->smu_current_mod))==KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf( TYPE_NSP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, RMMI_ERR_NW_SUB_PERSON_PUK_REQUIRED);                                   
                            smu_ptr->pending_password_id=ID_PH_NET_PUK;	          
                        }
                        else
                        {
                            smu_send_security_cnf( TYPE_NSP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, INCORRECT_PASSWD);
                        }
                    }
                    else
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_send_security_cnf( TYPE_NO_REQUIRED,
                                       0xFF,
                                       l4csmu_security_req_ptr->src_id,
                                       SMU_RES_OK, RMMI_NO_ERR);
                    }
                    break;
            #endif
	            default:
		            break;
            }
            break;
        case TYPE_SP:
            switch(l4csmu_security_req_ptr->op)
            {
                case VERIFY:
                    if (sml_Verify(
                            SML_CAT_SP,
                            l4csmu_security_req_ptr->key1,
                            SML_MAX_SUPPORT_KEY_LEN,
                            &(smu_ptr->cphs_lock_count),
                            SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);

                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf( TYPE_SP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, RMMI_ERR_SP_PERSON_PUK_REQUIRED);
                            smu_ptr->pending_password_id=ID_PH_SP_PUK;
                        }
                        else
                        {
                            smu_send_security_cnf( TYPE_SP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, INCORRECT_PASSWD);
                        }
                    }
                    else
                    {
                        smu_ptr->security_status |= 0x08;
                        smu_ptr->pending_password_id = ID_SIM_BUSY;
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_check_sml(0xF0, l4csmu_security_req_ptr->src_id);
                    }
                    break;
            #ifdef __CHANGE_SML_KEY__
                case CHANGE:
                    if (sml_ChangePW(SML_CAT_SP,
                                    &(smu_ptr->cphs_lock_count),
                                    l4csmu_security_req_ptr->key1,
                                    l4csmu_security_req_ptr->key2,
                                    SML_MAX_SUPPORT_KEY_LEN,
                                    SMU_SELECT_SIM(smu_ptr->smu_current_mod))==KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf( TYPE_SP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, RMMI_ERR_SP_PERSON_PUK_REQUIRED);                                   
                            smu_ptr->pending_password_id=ID_PH_NET_PUK;	          
                        }
                        else
                        {
                            smu_send_security_cnf( TYPE_SP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, INCORRECT_PASSWD);
                        }
                    }
                    else
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_send_security_cnf( TYPE_NO_REQUIRED,
                                          0xFF,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_OK, RMMI_NO_ERR);
                    }
                    break;
            #endif
                default:
                    break;
            }
	        break;
        case TYPE_CP:
            switch(l4csmu_security_req_ptr->op)
            {
                case VERIFY:
                    if (sml_Verify(
                            SML_CAT_C,
                            l4csmu_security_req_ptr->key1,
                            SML_MAX_SUPPORT_KEY_LEN,
                            &(smu_ptr->cphs_lock_count),
                            SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);

                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf( TYPE_CP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, RMMI_ERR_CORP_PERSON_PUK_REQUIRED);
                            smu_ptr->pending_password_id=ID_PH_CORP_PUK;	                                    
                        }
                        else 
                        {
                            smu_send_security_cnf( TYPE_CP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, INCORRECT_PASSWD);
                        } 
                    } 
                    else 
                    {
                        smu_ptr->security_status |= 0x10;
                        smu_ptr->pending_password_id = ID_SIM_BUSY;
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_check_sml(0xE0, l4csmu_security_req_ptr->src_id);
                    }
                    break;
            #ifdef __CHANGE_SML_KEY__
                case CHANGE:
                    if (sml_ChangePW(SML_CAT_C,
                                     &(smu_ptr->cphs_lock_count),
                                     l4csmu_security_req_ptr->key1,
                                     l4csmu_security_req_ptr->key2 ,
                                     SML_MAX_SUPPORT_KEY_LEN,
                                     SMU_SELECT_SIM(smu_ptr->smu_current_mod))==KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf( TYPE_CP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, RMMI_ERR_CORP_PERSON_PUK_REQUIRED);                                   
                            smu_ptr->pending_password_id=ID_PH_NET_PUK;	          
                        }
                        else
                        {
                            smu_send_security_cnf( TYPE_CP,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, INCORRECT_PASSWD);
                        }
                    }
                    else
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_send_security_cnf( TYPE_NO_REQUIRED,
                                           0xFF,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_OK, RMMI_NO_ERR);
                    }
                    break;
            #endif
                default:
                    break;
            }
            break;
        case TYPE_IMSI_LOCK:
            switch(l4csmu_security_req_ptr->op)
            {
                case VERIFY:
                    if (sml_Verify(
                            SML_CAT_SIM,
                            l4csmu_security_req_ptr->key1,
                            SML_MAX_SUPPORT_KEY_LEN,
                            &(smu_ptr->cphs_lock_count),
                            SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);

                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf( TYPE_IMSI_LOCK,
                                   smu_ptr->cphs_lock_count,
                                   l4csmu_security_req_ptr->src_id,
                                   SMU_RES_FALSE, PH_FSIM_PUK_REQUIRED);

                            smu_ptr->pending_password_id=ID_PH_FSIM_PUK;	                                             
                        }
                        else
                        {
                            smu_send_security_cnf( TYPE_IMSI_LOCK,
                                   smu_ptr->cphs_lock_count,
                                   l4csmu_security_req_ptr->src_id,
                                   SMU_RES_FALSE, INCORRECT_PASSWD);                                   
                        }
                    } 
                    else 
                    { 
                        smu_ptr->security_status |= 0x20;
                        smu_ptr->pending_password_id = ID_SIM_BUSY;
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_check_sml(0xC0, l4csmu_security_req_ptr->src_id);
                    }
                    break;
            #ifdef __CHANGE_SML_KEY__
                case CHANGE:
                    if (sml_ChangePW(SML_CAT_SIM,
                                     &(smu_ptr->cphs_lock_count),
                                     l4csmu_security_req_ptr->key1,
                                     l4csmu_security_req_ptr->key2 ,
                                     SML_MAX_SUPPORT_KEY_LEN,
                                     SMU_SELECT_SIM(smu_ptr->smu_current_mod))==KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf( TYPE_IMSI_LOCK,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, PH_FSIM_PUK_REQUIRED);                                   
                            smu_ptr->pending_password_id=ID_PH_NET_PUK;	          
                        }
                        else
                        {
                            smu_send_security_cnf( TYPE_IMSI_LOCK,
                                           smu_ptr->cphs_lock_count,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_FALSE, INCORRECT_PASSWD);
                        }
                    }
                    else
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_send_security_cnf( TYPE_NO_REQUIRED,
                                           0xFF,
                                           l4csmu_security_req_ptr->src_id,
                                           SMU_RES_OK, RMMI_NO_ERR);
                    }
                    break;
            #endif
                default:
                    break;
            }
		    break;
        case TYPE_PERSONALIZATION_KEY:
            ASSERT(0);
            break;
        case TYPE_LINK_NS_SP:
            switch(l4csmu_security_req_ptr->op)
            {
                case VERIFY:
                {
                    if (sml_Verify(SML_CAT_NS_SP,
                                   l4csmu_security_req_ptr->key1,
                                   SML_MAX_SUPPORT_KEY_LEN,
                                   &(smu_ptr->cphs_lock_count),
                                   SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);

                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf( TYPE_LINK_NS_SP,
                                   smu_ptr->cphs_lock_count,
                                   l4csmu_security_req_ptr->src_id,
                                   SMU_RES_FALSE, RMMI_ERR_LINK_NS_SP_PERSON_PUK_REQUIRED);
                            smu_ptr->pending_password_id=ID_PH_LINK_NS_SP_PUK;	                                                 
                        }	
                        else
                        {
                            smu_send_security_cnf( TYPE_LINK_NS_SP,
                                   smu_ptr->cphs_lock_count,
                                   l4csmu_security_req_ptr->src_id,
                                   SMU_RES_FALSE, INCORRECT_PASSWD);
                        }			
                    } 
                    else 
                    {
                        smu_ptr->security_status |= 0x40;
                        smu_ptr->pending_password_id = ID_SIM_BUSY;            
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_check_sml(0x80, l4csmu_security_req_ptr->src_id);
                    }
                    break;
                }
                default:
                    break;
            }
            break;
        case TYPE_LINK_SIM_C:
            switch(l4csmu_security_req_ptr->op)
            {
                case VERIFY:
                {
                    if (sml_Verify(SML_CAT_SIM_C,
                                   l4csmu_security_req_ptr->key1,
                                   SML_MAX_SUPPORT_KEY_LEN,
                                   &(smu_ptr->cphs_lock_count),
                                   SMU_SELECT_SIM(smu_ptr->smu_current_mod)) == KAL_FALSE)
                    {
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);

                        if (smu_ptr->cphs_lock_count == 0)
                        {
                            smu_send_security_cnf(TYPE_LINK_SIM_C,
                                                  smu_ptr->cphs_lock_count,
                                                  l4csmu_security_req_ptr->src_id,
                                                  SMU_RES_FALSE, RMMI_ERR_LINK_SIM_C_PERSON_PUK_REQUIRED);
                            smu_ptr->pending_password_id=ID_PH_LINK_SIM_C_PUK;	                                                           
                        }
                        else
                        {
                            smu_send_security_cnf(TYPE_LINK_SIM_C,
                                                  smu_ptr->cphs_lock_count,
                                                  l4csmu_security_req_ptr->src_id,
                                                  SMU_RES_FALSE, INCORRECT_PASSWD);
                        }
                    }
                    else
                    {
                        smu_ptr->security_status |= 0x80;
                        smu_ptr->pending_password_id = ID_SIM_BUSY;            
                        smu_nvram_write(NVRAM_EF_SML_LID, l4csmu_security_req_ptr->src_id);
                        smu_check_sml(0x00, l4csmu_security_req_ptr->src_id);
                    }
                    break;
                }
                default:
                    break;
            }
            break;
    #endif /* defined(__CUSTOMER_TC01_DISK__) && !defined(WISDOM_MMI) */
    #endif /* __SIM_ME_LOCK__ */	
        default:
            break;
    }
}   /* end of l4csmu_security_req_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_query_phone_lock_enabled
 * DESCRIPTION
 *  This function is used by MMI for querying phone lock status.
 * PARAMETERS
 *  void
 *  void(?)     [IN]        
 * RETURNS
 *  kal_bool
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
kal_bool smu_query_phone_lock_enabled(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 security_ind = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    security_ind = (*pSmuSecurityInfog->query_u8) (SMU_SECURITY_INDICATION_U8, SMU_SELECT_SIM(MOD_SMU));

    if (security_ind & 0x01)
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
 *  l4csmu_sim_access_req_handler
 * DESCRIPTION
 *  This function is to access SIM card as ETSI 07.07 +CRSM
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_sim_access_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    l4csmu_sim_access_req_struct *l4csmu_sim_access_req_ptr = NULL;
    kal_uint16 l4csmu_sim_access_req_len = 0;
    kal_uint16 idx=0, idx_start=0, idx_end=0;
    kal_bool is_usim;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, L4CSMU_SIM_ACCESS_REQ_HANDLER);
    l4csmu_sim_access_req_ptr = (l4csmu_sim_access_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_sim_access_req_len);
 
    this_smu->simaccess_src = l4csmu_sim_access_req_ptr->src_id;

    /* Get file index according to fileid */
    switch (l4csmu_sim_access_req_ptr->cmd)
    {
        case READ_BINARY:
        case READ_RECORD:
        case UPDATE_BINARY:
        case UPDATE_RECORD:		
        case GET_RESPONSE:
	 {
   	       /* Set idx to FILE_NONE then MOD_SIM will select file according pathid */	    	
	    	if (l4csmu_sim_access_req_ptr->pathid_length != 0)
	    	{
	           idx = FILE_NONE;
		    break;
	    	}

	#ifdef __USIM_SUPPORT__
          #ifdef __GEMINI__
              is_usim = is_usim_type(SMU_SELECT_SIM(this_smu->smu_current_mod));
          #else 
              is_usim = is_usim_type();	
          #endif 
	#else
              is_usim = KAL_FALSE;		
	#endif

	#ifdef __USIM_SUPPORT__
		if (is_usim == KAL_TRUE)
		{
	           /* Search global file index */		
		    idx_start = GLOBAL_FILES_START; 
		    idx_end = GLOBAL_FILES_END;
                  for (idx = idx_start; idx <= idx_end; idx++)
                      if (l4csmu_sim_access_req_ptr->fileid == usim_ef_info[idx].file_id)
                      {
                          break;
                      }	                  					  

	           /* Search USIM file index */
                  if (idx == idx_end + 1)
                  {
    		        idx_start = SIM_TOT_FILES; 
    		        idx_end = UICC_TOTAL_FILES - 1;
                      for (idx = idx_start; idx <= idx_end; idx++)
                          if (l4csmu_sim_access_req_ptr->fileid == usim_ef_info[idx].file_id)
                          {
                              break;
                          }	                  					  
                  }			  
		}
		else
	#endif			
		{
		    idx_start = 0;
		    idx_end = SIM_TOT_FILES-1;	
                  for (idx = idx_start; idx <= idx_end; idx++)
                	 if (l4csmu_sim_access_req_ptr->fileid == usim_ef_info[idx].file_id)  
                      {
                          break;
                      }						
		}

              /* File not found */
              if (idx == idx_end + 1)
              {
                  l4csmu_sim_access_cnf_struct *l4csmu_sim_access_cnf_ptr = NULL;
     
                  l4csmu_sim_access_cnf_ptr = (l4csmu_sim_access_cnf_struct*)construct_local_para(sizeof(l4csmu_sim_access_cnf_struct), TD_UL);
                  l4csmu_sim_access_cnf_ptr->src_id = l4csmu_sim_access_req_ptr->src_id;
                  l4csmu_sim_access_cnf_ptr->response = SMU_RES_OK;
    
 		    if (is_usim == KAL_TRUE)
    		    {
                      l4csmu_sim_access_cnf_ptr->sw1 = 0x6A;
                      l4csmu_sim_access_cnf_ptr->sw2 = 0x82;		    		    
    		    }
    		    else
    		    {
                      l4csmu_sim_access_cnf_ptr->sw1 = 0x94;
                      l4csmu_sim_access_cnf_ptr->sw2 = 0x04;		    
    		    }
    
                  l4csmu_sim_access_cnf_ptr->length = 0x00;
                  kal_mem_set(l4csmu_sim_access_cnf_ptr->res_data, 0x00, 256);
      
                  smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SIM_ACCESS_CNF, (local_para_struct*) l4csmu_sim_access_cnf_ptr, NULL);
                  return;
              }		
        }
		break;		
        case STATUS_CMD:
	 default:
	 	break;
    }

    /* Send request to MOD_SIM */
    switch (l4csmu_sim_access_req_ptr->cmd)
    {
        case READ_BINARY:
        case READ_RECORD:
        {
            sim_read_req_struct *sim_read_req_ptr = NULL;

            sim_read_req_ptr = (sim_read_req_struct*) construct_local_para(sizeof(sim_read_req_struct), TD_UL | TD_RESET);
            sim_read_req_ptr->access_id = SMU_SIM_ACCESS_CMD;
            sim_read_req_ptr->channel_id = l4csmu_sim_access_req_ptr->channel_id;
            sim_read_req_ptr->file_idx = idx;

            if (l4csmu_sim_access_req_ptr->cmd == READ_BINARY)
            {
                sim_read_req_ptr->para = l4csmu_sim_access_req_ptr->p1;
                sim_read_req_ptr->para = (sim_read_req_ptr->para << 8) | (l4csmu_sim_access_req_ptr->p2);
            }
            else
            {
                sim_read_req_ptr->para = l4csmu_sim_access_req_ptr->p1;
            }
            sim_read_req_ptr->length = (l4csmu_sim_access_req_ptr->p3==0?256:l4csmu_sim_access_req_ptr->p3); 			
            kal_mem_cpy(sim_read_req_ptr->path, l4csmu_sim_access_req_ptr->pathid, l4csmu_sim_access_req_ptr->pathid_length);
            sim_read_req_ptr->path[l4csmu_sim_access_req_ptr->pathid_length] = (kal_uint8)(l4csmu_sim_access_req_ptr->fileid >> 8);
            sim_read_req_ptr->path[l4csmu_sim_access_req_ptr->pathid_length+1] = (kal_uint8)(l4csmu_sim_access_req_ptr->fileid & 0x00FF);

            if (sim_read_req_ptr->channel_id == 0)
            {
                smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_READ_REQ, (local_para_struct*) sim_read_req_ptr, NULL);
            }
            else
            {
                smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_APP_READ_REQ, (local_para_struct*) sim_read_req_ptr, NULL);
            }
        }
            break;
        case UPDATE_BINARY:
        case UPDATE_RECORD:
        {
            sim_write_req_struct *sim_write_req_ptr = NULL;

            sim_write_req_ptr = (sim_write_req_struct*) construct_local_para(sizeof(sim_write_req_struct), TD_UL | TD_RESET);
            sim_write_req_ptr->access_id = SMU_SIM_ACCESS_CMD;
            sim_write_req_ptr->channel_id = l4csmu_sim_access_req_ptr->channel_id;
            sim_write_req_ptr->file_idx = idx;

            if (l4csmu_sim_access_req_ptr->cmd == UPDATE_BINARY)
            {
                sim_write_req_ptr->para = l4csmu_sim_access_req_ptr->p1;
                sim_write_req_ptr->para = (sim_write_req_ptr->para << 8) | (l4csmu_sim_access_req_ptr->p2);
            }
            else
            {
                sim_write_req_ptr->para = l4csmu_sim_access_req_ptr->p1;
            }
            sim_write_req_ptr->length = l4csmu_sim_access_req_ptr->p3;

	    if (l4csmu_sim_access_req_ptr->p3 > 255) ASSERT(0);  
            kal_mem_cpy(&(sim_write_req_ptr->data[5]), l4csmu_sim_access_req_ptr->data, l4csmu_sim_access_req_ptr->p3);

            kal_mem_cpy(sim_write_req_ptr->path, l4csmu_sim_access_req_ptr->pathid, l4csmu_sim_access_req_ptr->pathid_length);
            sim_write_req_ptr->path[l4csmu_sim_access_req_ptr->pathid_length] = (kal_uint8)(l4csmu_sim_access_req_ptr->fileid >> 8);
            sim_write_req_ptr->path[l4csmu_sim_access_req_ptr->pathid_length+1] = (kal_uint8)(l4csmu_sim_access_req_ptr->fileid & 0x00FF);

            if (sim_write_req_ptr->channel_id == 0)
            {
                smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_WRITE_REQ, (local_para_struct*) sim_write_req_ptr, NULL);
            }
            else
            {
                smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_APP_WRITE_REQ, (local_para_struct*) sim_write_req_ptr, NULL);
            }
        }
            break;
        case STATUS_CMD:
        {
            sim_status_req_struct *sim_status_req_ptr = NULL;

            sim_status_req_ptr = (sim_status_req_struct*) construct_local_para(sizeof(sim_status_req_struct), TD_UL);
            sim_status_req_ptr->access_id = l4csmu_sim_access_req_ptr->src_id;
            sim_status_req_ptr->channel_id = l4csmu_sim_access_req_ptr->channel_id;
            sim_status_req_ptr->length = (l4csmu_sim_access_req_ptr->p3==0?256:l4csmu_sim_access_req_ptr->p3);
            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_STATUS_REQ, (local_para_struct*) sim_status_req_ptr, NULL);
        }
            break;
        case GET_RESPONSE:
        {
            sim_file_info_req_struct *sim_file_info_req_ptr = NULL;

            sim_file_info_req_ptr = (sim_file_info_req_struct*)construct_local_para(sizeof(sim_file_info_req_struct), TD_UL | TD_RESET);
            sim_file_info_req_ptr->access_id = SMU_SIM_ACCESS_CMD;
            sim_file_info_req_ptr->channel_id = l4csmu_sim_access_req_ptr->channel_id;
            sim_file_info_req_ptr->file_idx = idx;
            sim_file_info_req_ptr->info_type = SIM_RES_DATA_LEN; /*[MAUI_01702417] mtk01612: WinMo_GEMINI : +crsm*/
            sim_file_info_req_ptr->length = (l4csmu_sim_access_req_ptr->p3==0?256:l4csmu_sim_access_req_ptr->p3);
            kal_mem_cpy(sim_file_info_req_ptr->path, l4csmu_sim_access_req_ptr->pathid, l4csmu_sim_access_req_ptr->pathid_length);
            sim_file_info_req_ptr->path[l4csmu_sim_access_req_ptr->pathid_length] = (kal_uint8)(l4csmu_sim_access_req_ptr->fileid >> 8);
            sim_file_info_req_ptr->path[l4csmu_sim_access_req_ptr->pathid_length+1] = (kal_uint8)(l4csmu_sim_access_req_ptr->fileid & 0x00FF);
            if (sim_file_info_req_ptr->channel_id == 0)
            {
                smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_FILE_INFO_REQ, (local_para_struct*) sim_file_info_req_ptr, NULL);
            }
            else
            {
                smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_APP_FILE_INFO_REQ, (local_para_struct*) sim_file_info_req_ptr, NULL);
            }
        }
            break;
        default:
        {
            /* not support: because this command does not make sence */
            l4csmu_sim_access_cnf_struct *l4csmu_sim_access_cnf_ptr = NULL;

            l4csmu_sim_access_cnf_ptr = (l4csmu_sim_access_cnf_struct*)
                construct_local_para(sizeof(l4csmu_sim_access_cnf_struct), TD_UL);
            l4csmu_sim_access_cnf_ptr->src_id = l4csmu_sim_access_req_ptr->src_id;
            l4csmu_sim_access_cnf_ptr->response = SMU_RES_FALSE;
            l4csmu_sim_access_cnf_ptr->cause_present = KAL_FALSE;

            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SIM_ACCESS_CNF, (local_para_struct*) l4csmu_sim_access_cnf_ptr, NULL);
            return;
        }
            break;
    }
}   /* end of l4csmu_sim_access_req_handler */


/*****************************************************************************
 * FUNCTION
 *  send_file_change_cnf
 * DESCRIPTION
 *  This function is to send file change response to SIM
 * PARAMETERS
 *  res         [IN]        The result of file change
 *  src_id      [IN]        
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void send_file_change_cnf(kal_bool res, kal_uint8 src_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sat_file_change_res_struct *local_ptr = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    local_ptr = (sat_file_change_res_struct*) construct_local_para(sizeof(sat_file_change_res_struct), TD_UL);
    local_ptr->is_successful = res;
    local_ptr->src_id = src_id;

    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_FILE_CHANGE_RES, local_ptr, NULL);
}   /* end of send_file_change_cnf */


/*****************************************************************************
 * FUNCTION
 *  smu_sim_read_cnf_handler
 * DESCRIPTION
 *  This function is to handle the read response from SIM
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_sim_read_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sim_read_cnf_struct *sim_read_cnf_ptr = NULL;
    kal_uint16 sim_read_cnf_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* ilm_struct                     *ilm_ptr                   = NULL; */

    kal_brief_trace(TRACE_INFO, SMU_SIM_READ_CNF_HANDLER);
    sim_read_cnf_ptr = (sim_read_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sim_read_cnf_len);

    switch (sim_read_cnf_ptr->access_id)
    {
        case SMU_SIM_ACCESS_CMD:
        {
            l4csmu_sim_access_cnf_struct *l4csmu_sim_access_cnf_ptr = NULL;

            l4csmu_sim_access_cnf_ptr = (l4csmu_sim_access_cnf_struct*)
                construct_local_para(sizeof(l4csmu_sim_access_cnf_struct), TD_UL);
            // mtk01488, temp_solution
            //  l4csmu_sim_access_cnf_ptr->src_id=RMMI_SRC;
            l4csmu_sim_access_cnf_ptr->src_id = this_smu->simaccess_src;

            /* N: AT+CRSM: if file not found, return 9404 in SMU_RES_OK state */
            if (sim_read_cnf_ptr->result == SIM_FILE_NOT_FOUND)
            {
                sim_read_cnf_ptr->result = SIM_CMD_SUCCESS;
                sim_read_cnf_ptr->status_word = 0x9404;
                sim_read_cnf_ptr->length = 0;
            }

            if (sim_read_cnf_ptr->result == SIM_CMD_SUCCESS)
            {
                l4csmu_sim_access_cnf_ptr->response = SMU_RES_OK;
                l4csmu_sim_access_cnf_ptr->sw1 = sim_read_cnf_ptr->status_word >> 8;
                l4csmu_sim_access_cnf_ptr->sw2 = sim_read_cnf_ptr->status_word & 0x00FF;
                l4csmu_sim_access_cnf_ptr->length = (sim_read_cnf_ptr->length<=256)?sim_read_cnf_ptr->length:256;  
                kal_mem_cpy(l4csmu_sim_access_cnf_ptr->res_data, sim_read_cnf_ptr->data, l4csmu_sim_access_cnf_ptr->length); 
            }
            else
            {
                l4csmu_sim_access_cnf_ptr->response = SMU_RES_FALSE;
                l4csmu_sim_access_cnf_ptr->sw1 = sim_read_cnf_ptr->status_word >> 8;
                l4csmu_sim_access_cnf_ptr->sw2 = sim_read_cnf_ptr->status_word & 0x00FF;
                l4csmu_sim_access_cnf_ptr->cause_present = KAL_TRUE;
                l4csmu_sim_access_cnf_ptr->cause = sim_read_cnf_ptr->result;
            }

            smu_send_ilm(
                MOD_L4C,
                SMU_L4C_SAP,
                MSG_ID_L4CSMU_SIM_ACCESS_CNF,
                (local_para_struct*) l4csmu_sim_access_cnf_ptr,
                NULL);

        }
            break;
        case SMU_READ_PUCT_RMI:
        case SMU_READ_PUCT_LMI:
        {
            l4csmu_puct_read_cnf_struct *l4csmu_puct_read_cnf_ptr = NULL;

            l4csmu_puct_read_cnf_ptr = (l4csmu_puct_read_cnf_struct*)
                construct_local_para(sizeof(l4csmu_puct_read_cnf_struct), TD_UL);
            l4csmu_puct_read_cnf_ptr->src_id = this_smu->puct_src;
            if (sim_read_cnf_ptr->result == SIM_CMD_SUCCESS)
            {
                l4csmu_puct_read_cnf_ptr->response = SMU_RES_OK;
                kal_mem_cpy(l4csmu_puct_read_cnf_ptr->currency_code, sim_read_cnf_ptr->data, 3);
                convert_puct_sim_to_str(l4csmu_puct_read_cnf_ptr->puct_data, &(sim_read_cnf_ptr->data[3]));
            }
            else
            {
                l4csmu_puct_read_cnf_ptr->response = SMU_RES_FALSE;
                l4csmu_puct_read_cnf_ptr->cause_present = KAL_TRUE;
                l4csmu_puct_read_cnf_ptr->cause = sim_read_cnf_ptr->result;
            }

            //mtk01488
            smu_send_ilm(
                MOD_L4C,
                SMU_L4C_SAP,
                MSG_ID_L4CSMU_PUCT_READ_CNF,
                (local_para_struct*) l4csmu_puct_read_cnf_ptr,
                NULL);

        }
            break;
        case SMU_READ_PLMN_SEL_RMI:
    	 {
	     smu_plmn_sel_struct *smu_plmn_sel_ptr = NULL;
	     kal_uint8 plmn_rec_len = 0;	    
            l4csmu_plmn_sel_write_cnf_struct *l4csmu_plmn_sel_write_cnf_ptr = NULL;

	     l4csmu_plmn_sel_write_cnf_ptr = ( l4csmu_plmn_sel_write_cnf_struct * )construct_local_para(sizeof(l4csmu_plmn_sel_write_cnf_struct), TD_UL);
    	     l4csmu_plmn_sel_write_cnf_ptr->cause_present = KAL_FALSE;
            l4csmu_plmn_sel_write_cnf_ptr->cause = 0;
            l4csmu_plmn_sel_write_cnf_ptr->src_id = sim_read_cnf_ptr->src_id;

	     if(sim_read_cnf_ptr->result== SIM_CMD_SUCCESS)
	     {
        	   l4csmu_plmn_sel_write_cnf_ptr->response = SMU_RES_OK;        
	
	    	   switch (sim_read_cnf_ptr->file_idx)
	    	   {
		        case FILE_PLMNSEL_IDX:
		            plmn_rec_len = 3;
		            smu_plmn_sel_ptr = &(this_smu->plmn_sel_info);
		            break;
		        case FILE_PLMNWACT_IDX:
		            plmn_rec_len = 5;
		            smu_plmn_sel_ptr = &(this_smu->uplmn_wact_info);
		            break;
		        case FILE_OPLMNWACT_IDX:
		            plmn_rec_len = 5;
		            smu_plmn_sel_ptr = &(this_smu->oplmn_wact_info);
		            break;
		        case FILE_HPLMNACT_IDX:
		            plmn_rec_len = 5;
                    smu_plmn_sel_ptr = &(this_smu->hplmn_wact_info);
		            break;                    
		        default:
		            ASSERT(0);
		            break;
		   }	      

         	   /* Update the current context !*/
                 kal_mem_cpy( smu_plmn_sel_ptr->plmn_ptr + sim_read_cnf_ptr->para, 
                                     &(sim_read_cnf_ptr->data[0]),
                                     plmn_rec_len );	
    		}
	       else
    		{
 		       l4csmu_plmn_sel_write_cnf_ptr->response = SMU_RES_FALSE;
		       l4csmu_plmn_sel_write_cnf_ptr->cause_present = KAL_TRUE;
		       l4csmu_plmn_sel_write_cnf_ptr->cause = sim_read_cnf_ptr->result;
		}

	    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_PLMN_SEL_WRITE_CNF, l4csmu_plmn_sel_write_cnf_ptr, NULL);
        }	
	     break;		
        default:
            break;
    }

}   /* end of smu_sim_read_cnf_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_sim_write_cnf_handler
 * DESCRIPTION
 *  This function is to handle the write response from SIM
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_sim_write_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sim_write_cnf_struct *sim_write_cnf_ptr = NULL;
    kal_uint16 sim_write_cnf_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* ilm_struct                     *ilm_ptr                   = NULL; */

    kal_brief_trace(TRACE_INFO, SMU_SIM_WRITE_CNF_HANDLER);

    sim_write_cnf_ptr = (sim_write_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sim_write_cnf_len);

    switch (sim_write_cnf_ptr->access_id)
    {
        case SMU_SIM_ACCESS_CMD:
        {
            l4csmu_sim_access_cnf_struct *l4csmu_sim_access_cnf_ptr = NULL;

            l4csmu_sim_access_cnf_ptr = (l4csmu_sim_access_cnf_struct*)
                construct_local_para(sizeof(l4csmu_sim_access_cnf_struct), TD_UL);

            // mtk01488, temp_solution
            // l4csmu_sim_access_cnf_ptr->src_id=RMMI_SRC;
            l4csmu_sim_access_cnf_ptr->src_id = this_smu->simaccess_src;

            /* N: AT+CRSM: if file not found, return 9404 in SMU_RES_OK state */
            if (sim_write_cnf_ptr->result == SIM_FILE_NOT_FOUND)
            {
                sim_write_cnf_ptr->result = SIM_CMD_SUCCESS;
                sim_write_cnf_ptr->status_word = 0x9404;
            }

            if (sim_write_cnf_ptr->result == SIM_CMD_SUCCESS)
            {
                l4csmu_sim_access_cnf_ptr->response = SMU_RES_OK;
                l4csmu_sim_access_cnf_ptr->sw1 = sim_write_cnf_ptr->status_word >> 8;
                l4csmu_sim_access_cnf_ptr->sw2 = sim_write_cnf_ptr->status_word & 0x00FF;
                l4csmu_sim_access_cnf_ptr->length = 0x00;
                kal_mem_set(l4csmu_sim_access_cnf_ptr->res_data, 0x00, 256);
            }
            else
            {
                l4csmu_sim_access_cnf_ptr->response = SMU_RES_FALSE;
                l4csmu_sim_access_cnf_ptr->cause_present = KAL_TRUE;
		  l4csmu_sim_access_cnf_ptr->sw1 = sim_write_cnf_ptr->status_word >> 8;
                l4csmu_sim_access_cnf_ptr->sw2 = sim_write_cnf_ptr->status_word & 0x00FF;				
                l4csmu_sim_access_cnf_ptr->cause = sim_write_cnf_ptr->result;
            }

            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SIM_ACCESS_CNF, (local_para_struct*) l4csmu_sim_access_cnf_ptr, NULL);
        }
            break;
        case SMU_WRITE_PUCT_RMI:
        case SMU_WRITE_PUCT_LMI:
        {
            l4csmu_puct_write_cnf_struct *l4csmu_puct_write_cnf_ptr = NULL;

            l4csmu_puct_write_cnf_ptr = (l4csmu_puct_write_cnf_struct*)
                construct_local_para(sizeof(l4csmu_puct_write_cnf_struct), TD_UL);
            /* PH 20070712 for multiple source */
            l4csmu_puct_write_cnf_ptr->src_id = this_smu->puct_src;
            if (sim_write_cnf_ptr->result == SIM_CMD_SUCCESS)
            {
                l4csmu_puct_write_cnf_ptr->response = SMU_RES_OK;
                kal_mem_cpy(&(this_smu->puct_data), this_smu->temp_puct_ptr, sizeof(smu_puct_struct));
            }
            else
            {
                l4csmu_puct_write_cnf_ptr->response = SMU_RES_FALSE;
                l4csmu_puct_write_cnf_ptr->cause_present = KAL_TRUE;
                l4csmu_puct_write_cnf_ptr->cause = sim_write_cnf_ptr->result;
            }
            smu_free_ctrl_buffer(this_smu->temp_puct_ptr);

            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_PUCT_WRITE_CNF, (local_para_struct*) l4csmu_puct_write_cnf_ptr, NULL);
        }
            break;
      case SMU_WRITE_PLMN_SEL_REPLACE_RMI:
 	{
            sim_read_req_struct *sim_read_req_ptr = NULL;

            sim_read_req_ptr = (sim_read_req_struct*) construct_local_para(sizeof(sim_read_req_struct), TD_UL | TD_RESET);
            sim_read_req_ptr->access_id = SMU_READ_PLMN_SEL_RMI;
            sim_read_req_ptr->file_idx = sim_write_cnf_ptr->file_idx;	
	     sim_read_req_ptr->para = sim_write_cnf_ptr->para;
	     sim_read_req_ptr->length = sim_write_cnf_ptr->length;	     
	     sim_read_req_ptr->src_id = sim_write_cnf_ptr->src_id;	  		 
            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_READ_REQ, (local_para_struct*) sim_read_req_ptr, NULL);		 
        }
	     break;			
        default:
            break;
    }

}   /* end of smu_sim_write_cnf_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_status_cnf_handler
 * DESCRIPTION
 *  This function is to handle the status response from SIM
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_status_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sim_status_cnf_struct *sim_status_cnf_ptr = NULL;
    l4csmu_sim_access_cnf_struct *l4csmu_sim_access_cnf_ptr = NULL;
    kal_uint16 sim_status_cnf_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, SMU_STATUS_CNF_HANDLER);
    sim_status_cnf_ptr = (sim_status_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sim_status_cnf_len);
    l4csmu_sim_access_cnf_ptr = (l4csmu_sim_access_cnf_struct*)
        construct_local_para(sizeof(l4csmu_sim_access_cnf_struct), TD_UL);
    l4csmu_sim_access_cnf_ptr->src_id = sim_status_cnf_ptr->access_id;

    if (sim_status_cnf_ptr->result == SIM_CMD_SUCCESS)
    {
        l4csmu_sim_access_cnf_ptr->response = SMU_RES_OK;
        l4csmu_sim_access_cnf_ptr->sw1 = sim_status_cnf_ptr->status_word >> 8;
        l4csmu_sim_access_cnf_ptr->sw2 = sim_status_cnf_ptr->status_word & 0x00FF;
        l4csmu_sim_access_cnf_ptr->length = sim_status_cnf_ptr->length;
        kal_mem_cpy(l4csmu_sim_access_cnf_ptr->res_data, sim_status_cnf_ptr->data, MAX_DF_HEADER_LEN);
    }
    else
    {
        l4csmu_sim_access_cnf_ptr->response = SMU_RES_FALSE;
        l4csmu_sim_access_cnf_ptr->sw1 = sim_status_cnf_ptr->status_word >> 8;
        l4csmu_sim_access_cnf_ptr->sw2 = sim_status_cnf_ptr->status_word & 0x00FF;		
        l4csmu_sim_access_cnf_ptr->cause_present = KAL_TRUE;
        l4csmu_sim_access_cnf_ptr->cause_present = sim_status_cnf_ptr->result;
    }

    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SIM_ACCESS_CNF, l4csmu_sim_access_cnf_ptr, NULL);
}   /* end of smu_status_cnf_handler */


/*****************************************************************************
 * FUNCTION
 *  l4csmu_plmn_sel_write_req_handler
 * DESCRIPTION
 *  This function is to write the EFplmnsel, EFuplmnwact or EFoplmnwact to SIM
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_plmn_sel_write_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    l4csmu_plmn_sel_write_req_struct *l4csmu_plmn_sel_write_req_ptr = NULL;
    sim_write_plmn_req_struct *sim_write_plmn_req_ptr = NULL;
    kal_uint16 length = 0;
    smu_plmn_sel_struct *smu_plmn_sel_ptr = NULL;
    kal_uint8 plmn_rec_len = 0, idx = 0;
    kal_uint8 empty[5] = {0xFF, 0xFF, 0xFF, 0x00, 0x00};

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, L4CSMU_PLMN_SEL_WRITE_REQ_HANDLER);
    l4csmu_plmn_sel_write_req_ptr = (l4csmu_plmn_sel_write_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);
    sim_write_plmn_req_ptr = (sim_write_plmn_req_struct*)
        construct_local_para(sizeof(sim_write_plmn_req_struct), TD_UL);

    sim_write_plmn_req_ptr->file_idx = l4csmu_plmn_sel_write_req_ptr->file_idx;
    sim_write_plmn_req_ptr->src_id = l4csmu_plmn_sel_write_req_ptr->src_id;     /* mtk01488 */
    sim_write_plmn_req_ptr->access_id = l4csmu_plmn_sel_write_req_ptr->src_id;  // mtk02480 , currently not used

    switch (l4csmu_plmn_sel_write_req_ptr->file_idx)
    {
        case FILE_PLMNSEL_IDX:
            plmn_rec_len = 3;
            smu_plmn_sel_ptr = &(this_smu->plmn_sel_info);
            break;
        case FILE_PLMNWACT_IDX:
            plmn_rec_len = 5;
            smu_plmn_sel_ptr = &(this_smu->uplmn_wact_info);
            break;
        case FILE_OPLMNWACT_IDX:
            plmn_rec_len = 5;
            smu_plmn_sel_ptr = &(this_smu->oplmn_wact_info);
            break;
        case FILE_HPLMNACT_IDX:
            plmn_rec_len = 5;
            smu_plmn_sel_ptr = &(this_smu->hplmn_wact_info);
            break;
        default:
            ASSERT(0);
            break;
    }

   // this_smu->plmn_src = l4csmu_plmn_sel_write_req_ptr->src_id;  
	
    sim_write_plmn_req_ptr->file_size = smu_plmn_sel_ptr->num * plmn_rec_len;

    if(sim_write_plmn_req_ptr->file_size > MAX_SUPPORT_PLMN_DATA_SIZE)
    {

         l4csmu_plmn_sel_write_cnf_struct  *l4csmu_plmn_sel_write_cnf_ptr = NULL;
         l4csmu_plmn_sel_write_cnf_ptr = ( l4csmu_plmn_sel_write_cnf_struct *)
                                                construct_local_para( sizeof( l4csmu_plmn_sel_write_cnf_struct ),
                                                TD_UL
                                                );  
         //kal_sys_trace("PLMN file size exceed MAX_SUPPORT_PLMN_DATA_SIZE!");
         kal_brief_trace(TRACE_WARNING, WARNING_SMU_PLMN_SIZE_EXCEED);
         l4csmu_plmn_sel_write_cnf_ptr->response=SMU_RES_FALSE; //No empty items        
         l4csmu_plmn_sel_write_cnf_ptr->cause_present=KAL_FALSE; // No sim access so no cause
         l4csmu_plmn_sel_write_cnf_ptr->cause=KAL_FALSE;
         l4csmu_plmn_sel_write_cnf_ptr->src_id=l4csmu_plmn_sel_write_req_ptr->src_id;
         free_local_para((local_para_struct *) sim_write_plmn_req_ptr);
         smu_send_ilm(MOD_L4C, SMU_L4C_SAP,MSG_ID_L4CSMU_PLMN_SEL_WRITE_CNF,l4csmu_plmn_sel_write_cnf_ptr , NULL);
         return;  
		 
     }	

    if (l4csmu_plmn_sel_write_req_ptr->file_idx == FILE_PLMNSEL_IDX)
    {
    	 kal_mem_set(&(sim_write_plmn_req_ptr->file[0]), 0xFF, MAX_SUPPORT_PLMN_DATA_SIZE);
    }
    else
    {
        kal_uint8 i;
    	 for (i=0; i<(MAX_SUPPORT_PLMN_DATA_SIZE/5); i++)
    	 {
    	 	kal_mem_cpy(&(sim_write_plmn_req_ptr->file[0 + i*5]), empty, 5);    
    	 }
    }

    if (l4csmu_plmn_sel_write_req_ptr->op != SMU_INSERT_EMPTY)
    {
        ASSERT(l4csmu_plmn_sel_write_req_ptr->idx <= smu_plmn_sel_ptr->num);
    }

    switch (l4csmu_plmn_sel_write_req_ptr->op)
    {
        case SMU_ADD_PLMNSEL:  /* Insert PLMN to index */
            kal_mem_cpy(
                &(sim_write_plmn_req_ptr->file[0]),
                smu_plmn_sel_ptr->plmn_ptr,
                plmn_rec_len * l4csmu_plmn_sel_write_req_ptr->idx);
            kal_mem_cpy(
                &(sim_write_plmn_req_ptr->file[plmn_rec_len * l4csmu_plmn_sel_write_req_ptr->idx]),
                &(l4csmu_plmn_sel_write_req_ptr->plmn_data[0]),
                plmn_rec_len);
            kal_mem_cpy(
                & (sim_write_plmn_req_ptr->file[plmn_rec_len * l4csmu_plmn_sel_write_req_ptr->idx + plmn_rec_len]),
                smu_plmn_sel_ptr->plmn_ptr + plmn_rec_len * l4csmu_plmn_sel_write_req_ptr->idx,
                plmn_rec_len * (smu_plmn_sel_ptr->num - l4csmu_plmn_sel_write_req_ptr->idx - 1));
            break;
        case SMU_REPLACE_PLMNSEL:   /* Replace PLMN with index */
	#if 0
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
            	  sim_write_req_struct *sim_write_req_ptr = NULL;
	         sim_write_req_ptr = (sim_write_req_struct*) construct_local_para(sizeof(sim_write_req_struct), TD_UL | TD_RESET);
        	  sim_write_req_ptr->access_id = SMU_WRITE_PLMN_SEL_REPLACE_RMI;
                sim_write_req_ptr->file_idx = l4csmu_plmn_sel_write_req_ptr->file_idx;
		  sim_write_req_ptr->para = l4csmu_plmn_sel_write_req_ptr->idx * plmn_rec_len;
		  sim_write_req_ptr->src_id = l4csmu_plmn_sel_write_req_ptr->src_id;
		  sim_write_req_ptr->length = plmn_rec_len;
                kal_mem_cpy(&(sim_write_req_ptr->data[5]), &(l4csmu_plmn_sel_write_req_ptr->plmn_data[0]), plmn_rec_len);
                smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_WRITE_REQ, (local_para_struct*) sim_write_req_ptr, NULL);
         	  free_local_para((local_para_struct *) sim_write_plmn_req_ptr);
		  return;		
	     }			
            break;
        case SMU_REMOVE_PLMNSEL:
            kal_mem_cpy(
                &(sim_write_plmn_req_ptr->file[0]),
                smu_plmn_sel_ptr->plmn_ptr,
                plmn_rec_len * l4csmu_plmn_sel_write_req_ptr->idx);
            kal_mem_cpy(
                &(sim_write_plmn_req_ptr->file[plmn_rec_len * l4csmu_plmn_sel_write_req_ptr->idx]),
                smu_plmn_sel_ptr->plmn_ptr + plmn_rec_len * (l4csmu_plmn_sel_write_req_ptr->idx + 1),
                plmn_rec_len * (smu_plmn_sel_ptr->num - l4csmu_plmn_sel_write_req_ptr->idx - 1));
            break;
        case SMU_INSERT_EMPTY:
            kal_mem_cpy(
                &(sim_write_plmn_req_ptr->file[0]),
                smu_plmn_sel_ptr->plmn_ptr,
                plmn_rec_len * smu_plmn_sel_ptr->num);
            while (kal_mem_cmp(smu_plmn_sel_ptr->plmn_ptr + idx * plmn_rec_len, empty, 3)   /* Compare PLMN id only */
                   && (idx < smu_plmn_sel_ptr->num))
            {
                idx++;
            }
            /* If find an empty item */
            if (idx < smu_plmn_sel_ptr->num)
            {
                kal_mem_cpy(
                    &(sim_write_plmn_req_ptr->file[plmn_rec_len * idx]),
                    &(l4csmu_plmn_sel_write_req_ptr->plmn_data[0]),
                    plmn_rec_len);			
            }
            else    /* No empty is found! */
            {
                l4csmu_plmn_sel_write_cnf_struct *l4csmu_plmn_sel_write_cnf_ptr = NULL;

                l4csmu_plmn_sel_write_cnf_ptr = (l4csmu_plmn_sel_write_cnf_struct*)
                    construct_local_para(sizeof(l4csmu_plmn_sel_write_cnf_struct), TD_UL);
                l4csmu_plmn_sel_write_cnf_ptr->response = SMU_RES_FALSE;        /* No empty items */
                l4csmu_plmn_sel_write_cnf_ptr->cause_present = KAL_FALSE;       /* No sim access so no cause */
                l4csmu_plmn_sel_write_cnf_ptr->cause = KAL_FALSE;
                l4csmu_plmn_sel_write_cnf_ptr->src_id = l4csmu_plmn_sel_write_req_ptr->src_id;
                free_local_para((local_para_struct*) sim_write_plmn_req_ptr);
                smu_send_ilm(
                    MOD_L4C,
                    SMU_L4C_SAP,
                    MSG_ID_L4CSMU_PLMN_SEL_WRITE_CNF,
                    l4csmu_plmn_sel_write_cnf_ptr,
                    NULL);
                return;
            }
            break;
        default:
            ASSERT(0);
            break;
    }
    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_WRITE_PLMN_REQ, sim_write_plmn_req_ptr, NULL);
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_puct_write_req_handler
 * DESCRIPTION
 *  This function is to write the puct to SIM
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_puct_write_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    l4csmu_puct_write_req_struct *l4csmu_puct_write_req_ptr = NULL;
    sim_write_req_struct *sim_write_req_ptr = NULL;
    kal_uint16 l4csmu_puct_write_req_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, L4CSMU_PUCT_WRITE_REQ_HANDLER);
    l4csmu_puct_write_req_ptr = (l4csmu_puct_write_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_puct_write_req_len);
    sim_write_req_ptr = (sim_write_req_struct*) construct_local_para(sizeof(sim_write_req_struct), TD_UL);

    this_smu->temp_puct_ptr = (smu_puct_struct*) get_ctrl_buffer((kal_uint16) sizeof(smu_puct_struct));
    sim_write_req_ptr->file_idx = FILE_PUCT_IDX;
    sim_write_req_ptr->para = 0;
    sim_write_req_ptr->length = 5;
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* 0 */ 
    if (l4csmu_puct_write_req_ptr->src_id == LMMI_SRC)
    {
        sim_write_req_ptr->access_id = SMU_WRITE_PUCT_LMI;
    }
    else
    {
        sim_write_req_ptr->access_id = SMU_WRITE_PUCT_RMI;
    }
    /* PH 20070712 multi source */
    this_smu->puct_src = l4csmu_puct_write_req_ptr->src_id;
    kal_mem_cpy(&(sim_write_req_ptr->data[5]), l4csmu_puct_write_req_ptr->currency_code, 3);
    convert_puct_str_to_sim(&(sim_write_req_ptr->data[8]), l4csmu_puct_write_req_ptr->puct_data);
    kal_mem_cpy(this_smu->temp_puct_ptr->currency_code, l4csmu_puct_write_req_ptr->currency_code, 3);
    kal_mem_cpy(this_smu->temp_puct_ptr->price_unit, &(sim_write_req_ptr->data[8]), 2);
    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_WRITE_REQ, sim_write_req_ptr, NULL);
}   /* end of l4csmu_puct_write_req_handler */



/*****************************************************************************
 * FUNCTION
 *  l4csmu_dial_mode_req_handler
 * DESCRIPTION
 *  This function is to switch on/off FDN/BDN
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_dial_mode_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    l4csmu_dial_mode_req_struct *l4csmu_dial_mode_req_ptr = NULL;
    sim_dial_mode_req_struct *sim_dial_mode_req_ptr = NULL;
    kal_uint16 l4csmu_dial_mode_req_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, L4CSMU_DIAL_MODE_REQ_HANDLER);
    l4csmu_dial_mode_req_ptr = (l4csmu_dial_mode_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_dial_mode_req_len);

    if (((((l4csmu_dial_mode_req_ptr->switch_on == 1) &&
           ((this_smu->dn_type & 0x04) != 0)) ||
          ((l4csmu_dial_mode_req_ptr->switch_on == 0) &&
           ((this_smu->dn_type & 0x04) == 0))) &&
         (l4csmu_dial_mode_req_ptr->dn_type == TYPE_FDN)) ||
        ((((l4csmu_dial_mode_req_ptr->switch_on == 1) &&
           ((this_smu->dn_type & 0x08) != 0)) ||
          ((l4csmu_dial_mode_req_ptr->switch_on == 0) &&
           ((this_smu->dn_type & 0x08) == 0))) && (l4csmu_dial_mode_req_ptr->dn_type == TYPE_BDN)))
    {
        l4csmu_dial_mode_cnf_struct *l4csmu_dial_mode_cnf_ptr = NULL;

        l4csmu_dial_mode_cnf_ptr = (l4csmu_dial_mode_cnf_struct*)
            construct_local_para(sizeof(l4csmu_dial_mode_cnf_struct), TD_UL);
        l4csmu_dial_mode_cnf_ptr->src_id = l4csmu_dial_mode_req_ptr->src_id;
        l4csmu_dial_mode_cnf_ptr->response = SMU_RES_OK;
        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_DIAL_MODE_CNF, l4csmu_dial_mode_cnf_ptr, NULL);
        return;
    }

    sim_dial_mode_req_ptr = (sim_dial_mode_req_struct*) construct_local_para(sizeof(sim_dial_mode_req_struct), TD_UL);

    sim_dial_mode_req_ptr->access_id = l4csmu_dial_mode_req_ptr->src_id;
    sim_dial_mode_req_ptr->dn_type = l4csmu_dial_mode_req_ptr->dn_type;
    sim_dial_mode_req_ptr->switch_on = l4csmu_dial_mode_req_ptr->switch_on;

    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_DIAL_MODE_REQ, sim_dial_mode_req_ptr, NULL);
}   /* end of l4csmu_dial_mode_req_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_dial_mode_cnf_handler
 * DESCRIPTION
 *  This function is to switch on/off FDN/BDN
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_dial_mode_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sim_dial_mode_cnf_struct *sim_dial_mode_cnf_ptr = NULL;
    l4csmu_dial_mode_cnf_struct *l4csmu_dial_mode_cnf_ptr = NULL;
    kal_uint16 sim_dial_mode_cnf_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, SMU_DIAL_MODE_CNF_HANDLER);
    sim_dial_mode_cnf_ptr = (sim_dial_mode_cnf_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sim_dial_mode_cnf_len);
    l4csmu_dial_mode_cnf_ptr = (l4csmu_dial_mode_cnf_struct*)
        construct_local_para(sizeof(l4csmu_dial_mode_cnf_struct), TD_UL);

    l4csmu_dial_mode_cnf_ptr->src_id = sim_dial_mode_cnf_ptr->access_id;
    if (sim_dial_mode_cnf_ptr->result == SIM_CMD_SUCCESS)
    {
        l4csmu_dial_mode_cnf_ptr->response = SMU_RES_OK;
        l4csmu_dial_mode_cnf_ptr->cause_present = KAL_FALSE;
        l4csmu_dial_mode_cnf_ptr->cause = 0;
        switch (sim_dial_mode_cnf_ptr->dn_type)
        {
            case TYPE_FDN:
                if (sim_dial_mode_cnf_ptr->switch_on == 1)
                {
                    this_smu->dn_type |= 0x04;
                    this_smu->dn_type &= ~(0x02);
                }
                else
                {
                    this_smu->dn_type &= ~(0x04);
                    this_smu->dn_type |= 0x02;
                }
                break;
            case TYPE_BDN:
                if (sim_dial_mode_cnf_ptr->switch_on == 1)
                {
                    this_smu->dn_type |= 0x08;
                }
                else
                {
                    this_smu->dn_type &= ~(0x08);
                }
                break;
            default:
                break;
        }
    }
    else
    {
        l4csmu_dial_mode_cnf_ptr->response = SMU_RES_FALSE;
        l4csmu_dial_mode_cnf_ptr->cause_present = KAL_TRUE;
        l4csmu_dial_mode_cnf_ptr->cause = sim_dial_mode_cnf_ptr->result;
    }

    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_DIAL_MODE_CNF, l4csmu_dial_mode_cnf_ptr, NULL);
}   /* end of l4csmu_dial_mode_req_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_file_info_cnf_handler
 * DESCRIPTION
 *  This function is to get the info from SIM file query.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_file_info_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sim_file_info_cnf_struct *local_ptr = NULL;

    /* sim_read_req_struct      *read_local_ptr = NULL; //Kinki remove(used in the else part) */
    kal_uint16 para_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* ilm_struct                        *ilm_ptr = NULL; */

    local_ptr = (sim_file_info_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &para_len);

    if (local_ptr->access_id == SMU_SIM_ACCESS_CMD)
    {
        l4csmu_sim_access_cnf_struct *l4csmu_sim_access_cnf_ptr = NULL;

        l4csmu_sim_access_cnf_ptr = (l4csmu_sim_access_cnf_struct*)
            construct_local_para(sizeof(l4csmu_sim_access_cnf_struct), TD_UL);

        // mtk01488, temp_solution
        // l4csmu_sim_access_cnf_ptr->src_id=RMMI_SRC;
        l4csmu_sim_access_cnf_ptr->src_id = this_smu->simaccess_src;

        /* N: AT+CRSM: if file not found, return 9404 in SMU_RES_OK state */
        if (local_ptr->result == SIM_FILE_NOT_FOUND)
        {
            local_ptr->result = SIM_CMD_SUCCESS;
            local_ptr->status_word = 0x9404;
            local_ptr->length = 0;
        }

        if (local_ptr->result == SIM_CMD_SUCCESS)
        {
            l4csmu_sim_access_cnf_ptr->response = SMU_RES_OK;
            l4csmu_sim_access_cnf_ptr->sw1 = local_ptr->status_word >> 8;
            l4csmu_sim_access_cnf_ptr->sw2 = local_ptr->status_word & 0x00FF;
            l4csmu_sim_access_cnf_ptr->length = (local_ptr->length<=256)?local_ptr->length:256;  
            kal_mem_cpy(l4csmu_sim_access_cnf_ptr->res_data, local_ptr->res_data, l4csmu_sim_access_cnf_ptr->length);  
        }
        else
        {
            l4csmu_sim_access_cnf_ptr->response = SMU_RES_FALSE;
            l4csmu_sim_access_cnf_ptr->sw1 = local_ptr->status_word >> 8;
            l4csmu_sim_access_cnf_ptr->sw2 = local_ptr->status_word & 0x00FF;			
            l4csmu_sim_access_cnf_ptr->cause_present = KAL_TRUE;
            l4csmu_sim_access_cnf_ptr->cause = local_ptr->result;
        }
        
        smu_send_ilm(
            MOD_L4C,
            SMU_L4C_SAP,
            MSG_ID_L4CSMU_SIM_ACCESS_CNF,
            (local_para_struct*) l4csmu_sim_access_cnf_ptr,
            NULL);

    }
    else
    {
        ASSERT(0);
    }

}   /* end of smu_file_info_cnf_handler */


/*****************************************************************************
 * FUNCTION
 *  smu_file_change_ind_handler
 * DESCRIPTION
 *  This function is to sync the file changed to SIM card.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_file_change_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    sat_file_change_ind_struct *sat_file_change_ind_ptr = NULL;
    kal_uint16 sat_file_change_ind_len = 0;
    kal_uint8 idx = 0, access_id = 0;
    sim_read_plmn_req_struct *sim_read_plmn_req_ptr = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, SMU_FILE_CHANGE_IND_HANDLER);
    sat_file_change_ind_ptr = (sat_file_change_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_file_change_ind_len);
    smu_free_ctrl_buffer(smu_ptr->file_change_info_ptr);   /* avoid memory leak! */
    /* smu_ptr->plmnsel_read_count = 0; //Kinki remove(useless field in context) */
    smu_ptr->file_change_info_ptr = get_ctrl_buffer(sizeof(smu_file_change_info_struct));
    kal_mem_set(smu_ptr->file_change_info_ptr, 0, sizeof(smu_file_change_info_struct));
    smu_ptr->dn_type = sim_dn_type_query(SMU_SELECT_SIM(smu_ptr->smu_current_mod));

    if (sat_file_change_ind_ptr->is_full_changed == KAL_TRUE)
    {
        smu_ptr->file_change_info_ptr->file_list[0] = FILE_PLMNSEL_IDX;
        smu_ptr->file_change_info_ptr->read_result[0] = KAL_FALSE;
        smu_ptr->file_change_info_ptr->file_list[1] = FILE_PUCT_IDX;
        smu_ptr->file_change_info_ptr->read_result[1] = KAL_FALSE;
        smu_ptr->file_change_info_ptr->file_list[2] = FILE_PLMNWACT_IDX;
        smu_ptr->file_change_info_ptr->read_result[2] = KAL_FALSE;
        smu_ptr->file_change_info_ptr->file_list[3] = FILE_OPLMNWACT_IDX;
        smu_ptr->file_change_info_ptr->read_result[3] = KAL_FALSE;
    }
    else
    {
        for (idx = 0; idx < sat_file_change_ind_ptr->num_of_file; idx++)
        {
            switch (sat_file_change_ind_ptr->file_list[idx])
            {
                case FILE_PLMNSEL_IDX:
                    smu_ptr->file_change_info_ptr->file_list[0] = FILE_PLMNSEL_IDX;
                    smu_ptr->file_change_info_ptr->read_result[0] = KAL_FALSE;
                    break;
                case FILE_PUCT_IDX:
                    smu_ptr->file_change_info_ptr->file_list[1] = FILE_PUCT_IDX;
                    smu_ptr->file_change_info_ptr->read_result[1] = KAL_FALSE;
                    break;
                case FILE_PLMNWACT_IDX:
                    smu_ptr->file_change_info_ptr->file_list[2] = FILE_PLMNWACT_IDX;
                    smu_ptr->file_change_info_ptr->read_result[2] = KAL_FALSE;
                    break;
                case FILE_OPLMNWACT_IDX:
                    smu_ptr->file_change_info_ptr->file_list[3] = FILE_OPLMNWACT_IDX;
                    smu_ptr->file_change_info_ptr->read_result[3] = KAL_FALSE;
                    break;
                default:
                    break;
            }
        }
    }

    /* N: scan file_list, if file_list[access_id] is not 0, break */
    for (access_id = 0; access_id < 4; access_id++)
    {
        if (smu_ptr->file_change_info_ptr->file_list[access_id] != 0)
        {
            break;
        }
    }

    if (access_id < 4)
    {
        sim_read_plmn_req_ptr = (sim_read_plmn_req_struct*)
            construct_local_para(sizeof(sim_read_plmn_req_struct), TD_UL);
        sim_read_plmn_req_ptr->state = 0x00;    /* mtk01488: read only */
        sim_read_plmn_req_ptr->file_idx = smu_ptr->file_change_info_ptr->file_list[access_id];
        access_id++;
        for (; access_id < 4; access_id++)
        {
            if (smu_ptr->file_change_info_ptr->file_list[access_id] != 0)
            {
                break;
            }
        }
        sim_read_plmn_req_ptr->access_id = access_id;   /* Next file to be read! The access_id == 4 means end of the operation */
        sim_read_plmn_req_ptr->src_id = sat_file_change_ind_ptr->src_id;           /* mtk01488: oxFF means file change indication */
        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_READ_PLMN_REQ, sim_read_plmn_req_ptr, NULL);
    }
    else
    {
        send_file_change_cnf(KAL_TRUE, sat_file_change_ind_ptr->src_id);
        smu_free_ctrl_buffer(smu_ptr->file_change_info_ptr);
        smu_ptr->file_change_info_ptr = NULL;
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
#endif /* 0 */ 
}   /* end of smu_file_change_ind_handler */


/*****************************************************************************
 * FUNCTION
 *  convert_plmn
 * DESCRIPTION
 *  This function is to convert plmn from sim format to mmi format
 * PARAMETERS
 *  in      [IN]        Pointer to sim format buffer
 *  out     [OUT]       Pointer to mmi format buffer
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void convert_plmn(kal_uint8 *in, smu_plmn_id_struct *out)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    out->mcc2 = (*in) >> 4;
    out->mcc1 = (*in) & 0x0F;
    out->mnc3 = (*(in + 1)) >> 4;
    out->mcc3 = (*(in + 1)) & 0x0F;
    out->mnc2 = (*(in + 2)) >> 4;
    out->mnc1 = (*(in + 2)) & 0x0F;
    out->access_tech[0] = 0;
    out->access_tech[1] = 0;
}


/*****************************************************************************
 * FUNCTION
 *  convert_plmnwact
 * DESCRIPTION
 *  This function is to convert plmn from sim format to mmi format
 * PARAMETERS
 *  in      [IN]        Pointer to sim format buffer
 *  out     [OUT]       Pointer to mmi format buffer
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void convert_plmnwact(kal_uint8 *in, smu_plmn_id_struct *out)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    out->mcc2 = (*in) >> 4;
    out->mcc1 = (*in) & 0x0F;
    out->mnc3 = (*(in + 1)) >> 4;
    out->mcc3 = (*(in + 1)) & 0x0F;
    out->mnc2 = (*(in + 2)) >> 4;
    out->mnc1 = (*(in + 2)) & 0x0F;
    out->access_tech[0] = *(in + 3);
    out->access_tech[1] = *(in + 4);
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_read_plmn_sel
 * DESCRIPTION
 *  This function is to read the EFplmnsel of SIM
 * PARAMETERS
 *  file_idx        [IN]        
 *  start_index     [IN]        
 *  num             [OUT]       The number of plmn
 *  plmn_ptr        [?]         
 *  data_ptr(?)     [OUT]       The pointer of plmn data (each has three bytes)
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
kal_bool l4csmu_read_plmn_sel(
        sim_file_index_enum file_idx,
        kal_uint8 start_index,
        kal_uint16 *num,
        smu_plmn_id_struct *plmn_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    kal_uint16 plmn_idx = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_FUNC, L4CSMU_READ_PLMN_SEL);

    if (plmn_ptr != NULL)
    {
        switch (file_idx)
        {
            case FILE_PLMNSEL_IDX:
                for (plmn_idx = 0; plmn_idx < (*num); plmn_idx++)
                {
                    if (start_index + plmn_idx < smu_ptr->plmn_sel_info.num)
                    {
                        convert_plmn(
                            smu_ptr->plmn_sel_info.plmn_ptr + (start_index + plmn_idx) * 3,
                            plmn_ptr + plmn_idx);
                    }
                    else
                    {
                        *num = plmn_idx;
                    }
                }
                break;
            case FILE_PLMNWACT_IDX:
                for (plmn_idx = 0; plmn_idx < (*num); plmn_idx++)
                {
                    if (start_index + plmn_idx < smu_ptr->uplmn_wact_info.num)
                    {
                        convert_plmnwact(
                            smu_ptr->uplmn_wact_info.plmn_ptr + (start_index + plmn_idx) * 5,
                            plmn_ptr + plmn_idx);
                    }
                    else
                    {
                        *num = plmn_idx;
                    }
                }
                break;
            case FILE_OPLMNWACT_IDX:
                for (plmn_idx = 0; plmn_idx < (*num); plmn_idx++)
                {
                    if (start_index + plmn_idx < smu_ptr->oplmn_wact_info.num)
                    {
                        convert_plmnwact(
                            smu_ptr->oplmn_wact_info.plmn_ptr + (start_index + plmn_idx) * 5,
                            plmn_ptr + plmn_idx);
                    }
                    else
                    {
                        *num = plmn_idx;
                    }
                }
                break;
            case FILE_HPLMNACT_IDX:
                for (plmn_idx = 0; plmn_idx < (*num); plmn_idx++)
                {
                    if (start_index + plmn_idx < smu_ptr->hplmn_wact_info.num)
                    {
                        convert_plmnwact(
                            smu_ptr->hplmn_wact_info.plmn_ptr + (start_index + plmn_idx) * 5,
                            plmn_ptr + plmn_idx);
                    }
                    else
                    {
                        *num = plmn_idx;
                    }
                }
                break;
            default:
                *num = 0;
                break;
        }
    }
    else    /* plmn_ptr == NULL to query record number */
    {
        switch (file_idx)
        {
            case FILE_PLMNSEL_IDX:
                *num = smu_ptr->plmn_sel_info.num;
                break;
            case FILE_PLMNWACT_IDX:
                *num = smu_ptr->uplmn_wact_info.num;
                break;
            case FILE_OPLMNWACT_IDX:
                *num = smu_ptr->oplmn_wact_info.num;
                break;
            case FILE_HPLMNACT_IDX:
                *num = smu_ptr->hplmn_wact_info.num;
                break;
            default:
                *num = 0;
                break;
        }
    }

    if (*num == 0)
    {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_get_chv_info_status
 * DESCRIPTION
 *  This function is to get the current chv1, chv2, ubchv1 or ubchv2 status
 * PARAMETERS
 *  chv_info        [?]     IN/OT      chv_info of smu context
 *  chv_status      [?]     IN/OT      chv_status of smu context
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_get_chv_info_status(sim_chv_info_struct *chv_info, sim_chv_status_struct *chv_status)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_FUNC, L4CSMU_GET_CHV_STATUS);

    if (chv_info!=NULL)  // mtk02480: prevent NULL case
    	kal_mem_cpy(chv_info, &(this_smu->chv_info), sizeof(sim_chv_info_struct));
    if (chv_status!=NULL)  
    	kal_mem_cpy(chv_status, &(this_smu->chv_status), sizeof(sim_chv_status_struct));
}   /* end of smu_get_chv_status */


/*****************************************************************************
 * FUNCTION
 *  l4csmu_puct_read_req_handler
 * DESCRIPTION
 *  This function is to read the EFpuct
 * PARAMETERS
 *  smu_ilm_ptr         [?]         
 *  puct_data(?)        [OUT]       The pointer of puct data
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_puct_read_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    l4csmu_puct_read_req_struct *l4csmu_puct_read_req_ptr = NULL;
    sim_read_req_struct *sim_read_req_ptr = NULL;
    kal_uint16 l4csmu_puct_read_req_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_INFO, L4CSMU_PUCT_READ_REQ_HANDLER);
    l4csmu_puct_read_req_ptr = (l4csmu_puct_read_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_puct_read_req_len);
    sim_read_req_ptr = (sim_read_req_struct*) construct_local_para(sizeof(sim_read_req_struct), TD_UL);

    sim_read_req_ptr->file_idx = FILE_PUCT_IDX;
    sim_read_req_ptr->para = 0;
    sim_read_req_ptr->length = 5;
    if (l4csmu_puct_read_req_ptr->src_id == LMMI_SRC)
    {
        sim_read_req_ptr->access_id = SMU_READ_PUCT_LMI;
    }
    else
    {
        sim_read_req_ptr->access_id = SMU_READ_PUCT_RMI;
    }
    this_smu->puct_src = l4csmu_puct_read_req_ptr->src_id;
    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_READ_REQ, sim_read_req_ptr, NULL);
}   /* end of l4csmu_get_puct_value */



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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*****************************************************************************
 * FUNCTION
 *  l4csmu_get_imsi
 * DESCRIPTION
 *  This function is to get the imsi
 * PARAMETERS
 *  imsi_data       [OUT]       The pointer of imsi data
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_get_imsi(kal_uint8 *imsi_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_FUNC, L4CSMU_GET_IMSI);
    kal_mem_cpy(imsi_data, &(this_smu->imsi[1]), 8);
}   /* end of l4csmu_get_imsi */



/*****************************************************************************
 * FUNCTION
 *  l4csmu_get_pending_password_id
 * DESCRIPTION
 *  This function is to get the present pending password id
 * PARAMETERS
 *  void
 * RETURNS
 *  condition to be accessed
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
smu_pending_password_id_enum l4csmu_get_pending_password_id(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_FUNC, L4CSMU_GET_PENDING_PASSWORD_ID, this_smu->pending_password_id);
    return this_smu->pending_password_id;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_get_pending_password_id_ext
 * DESCRIPTION
 *  This function is to get the present pending password id of sim_id
 * PARAMETERS
 *  sim_id the protocol stack ID
 * RETURNS
 *  the pending password ID
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
smu_pending_password_id_enum l4csmu_get_pending_password_id_ext(sim_interface_enum sim_id)
{
    kal_brief_trace(TRACE_FUNC, 
                    L4CSMU_GET_PENDING_PASSWORD_ID_EXT, 
                    sim_id, 
                    smu_context_g[sim_id].pending_password_id);
    return smu_context_g[sim_id].pending_password_id;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_get_pending_lock
 * DESCRIPTION
 *  This function is to mapping the pending password id to smu_security_type_enum
 * PARAMETERS
 *  password	[IN]
 *	type		[OUT]
 * RETURNS
 *  kal_bool
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
kal_bool l4csmu_get_pending_lock(smu_pending_password_id_enum password, smu_security_type_enum *type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (password)
    {
        case ID_PHONELOCK:
            *type = TYPE_PHONELOCK;
            break;
        case ID_SIM_PIN1:
            *type = TYPE_CHV1;
            break;
        case ID_SIM_PUK1:
            *type = TYPE_CHV1;
            break;
        case ID_PH_NET_PIN:
            *type = TYPE_NP;
            break;
        case ID_PH_NETSUB_PIN:
            *type = TYPE_NSP;
            break;
        case ID_PH_SP_PIN:
            *type = TYPE_SP;
            break;
        case ID_PH_CORP_PIN:
            *type = TYPE_CP;
            break;
        case ID_PH_FSIM_PIN:
            *type = TYPE_IMSI_LOCK;
            break;
        case ID_PH_LINK_NS_SP_PIN:
            *type = TYPE_LINK_NS_SP;
            break;
        case ID_PH_LINK_SIM_C_PIN:
            *type = TYPE_LINK_SIM_C;
            break;
        default:
            return KAL_FALSE;
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_get_puct_value
 * DESCRIPTION
 *  This function is to get the present puct data
 * PARAMETERS
 *  currency        [?]     
 *  ppu             [?]     
 * RETURNS
 *  puct data
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
kal_bool l4csmu_get_puct_value(kal_uint8 *currency, kal_uint8 *ppu)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_FUNC, L4CSMU_GET_PUCT_VALUE);
    if (this_smu->is_puct_valid == KAL_FALSE)
    {
        return KAL_FALSE;
    }
    else
    {
        kal_mem_cpy(currency, this_smu->puct_data.currency_code, 3);
        convert_puct_sim_to_str(ppu, this_smu->puct_data.price_unit);
        return KAL_TRUE;
    }
}   /* end of l4csmu_get_puct_value */


/*****************************************************************************
 * FUNCTION
 *  l4csmu_get_dial_mode
 * DESCRIPTION
 *  This function is to get the present dial mode
 * PARAMETERS
 *  void
 * RETURNS
 *  the present dial mode
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
sim_dn_enum l4csmu_get_dial_mode(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_brief_trace(TRACE_FUNC, L4CSMU_GET_DIAL_MODE, this_smu->dn_type);
    return this_smu->dn_type;
}

/*****************************************************************************
* FUNCTION                                                            
*	is_usim
* DESCRIPTION                                                           
*   This function used to check if the insertd SIM card is USIM. 
*	
* PARAMETERS
*	none
* RETURNS
* GLOBALS AFFECTED
*   
*****************************************************************************/
kal_bool check_is_usim()
{
#ifdef __USIM_SUPPORT__
  #ifdef __GEMINI__
     return is_usim_type(SMU_SELECT_SIM(this_smu->smu_current_mod));
  #else 
     return is_usim_type();
  #endif 
#else
     return KAL_FALSE;
#endif 
}   


/*****************************************************************************
 * FUNCTION
 *  is_chv1_enabled
 * DESCRIPTION
 *  This function used to check if the CHV1 is enabled.
 * CALLS
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  KAL_TRUE: CHV1 enable
 *  KAL_FALSE: CHV1 disable
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
kal_bool is_chv1_enabled()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* For AT cmd query */
    return this_smu->chv_info.is_chv1_enabled;
}   /* end of is_sim_replaced */



/*****************************************************************************
 * FUNCTION
 *  l4csmu_get_cipher_ind_status
 * DESCRIPTION
 *  This function is used by L4C to query the cipher indication status before MMRR_READY_IND
 * CALLS
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  smu_cipher_ind_enum
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
smu_cipher_ind_enum l4csmu_get_cipher_ind_status(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return this_smu->cipher_ind;
}


/*****************************************************************************
 * FUNCTION
 *  smu_sim_read_plmn_cnf_handler
 * DESCRIPTION
 *  This function is to handle reading plmn type of files.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_sim_read_plmn_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_context_struct *smu_ptr = this_smu;
    sim_read_plmn_cnf_struct *sim_read_plmn_cnf_ptr = NULL;
    sim_read_plmn_req_struct *sim_read_plmn_req_ptr = NULL;
    kal_uint16 length = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    sim_read_plmn_cnf_ptr = (sim_read_plmn_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);
    /* mtk01488: Update context */

    if (sim_read_plmn_cnf_ptr->file_size > MAX_SUPPORT_PLMN_DATA_SIZE) ASSERT(0);  
    switch (sim_read_plmn_cnf_ptr->file_idx)
    {
        case FILE_PLMNSEL_IDX:
            smu_free_ctrl_buffer(smu_ptr->plmn_sel_info.plmn_ptr);
            if (sim_read_plmn_cnf_ptr->file_size != 0)
            {
                smu_ptr->plmn_sel_info.plmn_ptr = get_ctrl_buffer(sim_read_plmn_cnf_ptr->file_size);
                smu_ptr->plmn_sel_info.num = sim_read_plmn_cnf_ptr->file_size / 3;
                kal_mem_cpy(
                    smu_ptr->plmn_sel_info.plmn_ptr,
                    sim_read_plmn_cnf_ptr->file,
                    sim_read_plmn_cnf_ptr->file_size);
            }
            else
            {
                smu_ptr->plmn_sel_info.plmn_ptr = NULL;
                smu_ptr->plmn_sel_info.num = 0;
            }
            break;
        case FILE_PUCT_IDX:
            if (sim_read_plmn_cnf_ptr->result == SIM_CMD_SUCCESS)
            {
                ASSERT(sim_read_plmn_cnf_ptr->file_size == 5);
                kal_mem_cpy(smu_ptr->puct_data.currency_code, sim_read_plmn_cnf_ptr->file, 3);
                kal_mem_cpy(smu_ptr->puct_data.price_unit, &(sim_read_plmn_cnf_ptr->file[3]), 2);
            }
            else
            {
                kal_mem_set(&(smu_ptr->puct_data), 0, sizeof(smu_puct_struct));
            }
            break;
        case FILE_PLMNWACT_IDX:
            smu_free_ctrl_buffer(smu_ptr->uplmn_wact_info.plmn_ptr);
            if (sim_read_plmn_cnf_ptr->file_size != 0)
            {
                smu_ptr->uplmn_wact_info.plmn_ptr = get_ctrl_buffer(sim_read_plmn_cnf_ptr->file_size);
                smu_ptr->uplmn_wact_info.num = sim_read_plmn_cnf_ptr->file_size / 5;
                kal_mem_cpy(
                    smu_ptr->uplmn_wact_info.plmn_ptr,
                    sim_read_plmn_cnf_ptr->file,
                    sim_read_plmn_cnf_ptr->file_size);
            }
            else
            {
                smu_ptr->uplmn_wact_info.plmn_ptr = NULL;
                smu_ptr->uplmn_wact_info.num = 0;
            }
            break;
        case FILE_OPLMNWACT_IDX:
            smu_free_ctrl_buffer(smu_ptr->oplmn_wact_info.plmn_ptr);
            if (sim_read_plmn_cnf_ptr->file_size != 0)
            {
                smu_ptr->oplmn_wact_info.plmn_ptr = get_ctrl_buffer(sim_read_plmn_cnf_ptr->file_size);
                smu_ptr->oplmn_wact_info.num = sim_read_plmn_cnf_ptr->file_size / 5;
                kal_mem_cpy(
                    smu_ptr->oplmn_wact_info.plmn_ptr,
                    sim_read_plmn_cnf_ptr->file,
                    sim_read_plmn_cnf_ptr->file_size);

            }
            else
            {
                smu_ptr->oplmn_wact_info.plmn_ptr = NULL;
                smu_ptr->oplmn_wact_info.num = 0;
            }
            break;
        case FILE_HPLMNACT_IDX:
            smu_free_ctrl_buffer(smu_ptr->hplmn_wact_info.plmn_ptr);
            if (sim_read_plmn_cnf_ptr->file_size != 0)
            {
                smu_ptr->hplmn_wact_info.plmn_ptr = get_ctrl_buffer(sim_read_plmn_cnf_ptr->file_size);
                smu_ptr->hplmn_wact_info.num = sim_read_plmn_cnf_ptr->file_size / 5;
                kal_mem_cpy(
                    smu_ptr->hplmn_wact_info.plmn_ptr,
                    sim_read_plmn_cnf_ptr->file,
                    sim_read_plmn_cnf_ptr->file_size);
            }
            else
            {
                smu_ptr->hplmn_wact_info.plmn_ptr = NULL;
                smu_ptr->hplmn_wact_info.num = 0;
            }
            break;
        default:
            ASSERT(0);
            break;
    }

    if (sim_read_plmn_cnf_ptr->state == 0x01)   /* mtk01488: read after update */
    {
        l4csmu_plmn_sel_write_cnf_struct *l4csmu_plmn_sel_write_cnf_ptr = NULL;

        l4csmu_plmn_sel_write_cnf_ptr = (l4csmu_plmn_sel_write_cnf_struct*)
            construct_local_para(sizeof(l4csmu_plmn_sel_write_cnf_struct), TD_UL);
        l4csmu_plmn_sel_write_cnf_ptr->cause_present = KAL_FALSE;
        l4csmu_plmn_sel_write_cnf_ptr->cause = 0;

        /* decide src_id by src_id */
        l4csmu_plmn_sel_write_cnf_ptr->src_id = sim_read_plmn_cnf_ptr->src_id;  /* mtk01488 */
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
#endif /* 0 */ 

     //   l4csmu_plmn_sel_write_cnf_ptr->src_id = smu_ptr->plmn_src;  
        if (sim_read_plmn_cnf_ptr->result == SIM_CMD_SUCCESS)
        {
            l4csmu_plmn_sel_write_cnf_ptr->response = SMU_RES_OK;
        }
        else
        {
            l4csmu_plmn_sel_write_cnf_ptr->response = SMU_RES_FALSE;
            l4csmu_plmn_sel_write_cnf_ptr->cause_present = KAL_TRUE;
            l4csmu_plmn_sel_write_cnf_ptr->cause = sim_read_plmn_cnf_ptr->result;
        }

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_PLMN_SEL_WRITE_CNF, l4csmu_plmn_sel_write_cnf_ptr, NULL);
    }
    else
    {
        if ((sim_read_plmn_cnf_ptr->access_id < 4) && (smu_ptr->file_change_info_ptr != NULL))
        {
            sim_read_plmn_req_ptr = (sim_read_plmn_req_struct*)
                construct_local_para(sizeof(sim_read_plmn_req_struct), TD_UL);
            sim_read_plmn_req_ptr->file_idx =
                smu_ptr->file_change_info_ptr->file_list[sim_read_plmn_cnf_ptr->access_id];
            sim_read_plmn_req_ptr->access_id = sim_read_plmn_cnf_ptr->access_id + 1;
            sim_read_plmn_req_ptr->src_id = sim_read_plmn_cnf_ptr->src_id;      /* mtk01488 */
            sim_read_plmn_req_ptr->state = 0x00;    /* mtk01488: read only */
            for (; sim_read_plmn_req_ptr->access_id < 4; (sim_read_plmn_req_ptr->access_id)++)
            {
                if (smu_ptr->file_change_info_ptr->file_list[sim_read_plmn_req_ptr->access_id] != 0)
                {
                    break;
                }
            }
            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_READ_PLMN_REQ, sim_read_plmn_req_ptr, NULL);
        }
        else    /* End of the operation */
        {
            if (smu_ptr->file_change_info_ptr != NULL)
            {
                send_file_change_cnf(KAL_TRUE, sim_read_plmn_cnf_ptr->src_id);  /* src_id = 0 -> SAT refresh */
                smu_free_ctrl_buffer(smu_ptr->file_change_info_ptr);
                smu_ptr->file_change_info_ptr = NULL;
            }
        }
    }

}


/*****************************************************************************
 * FUNCTION
 *  smu_sim_write_plmn_cnf_handler
 * DESCRIPTION
 *  This function is to handle reading plmn type of files.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_sim_write_plmn_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sim_write_plmn_cnf_struct *sim_write_plmn_cnf_ptr = NULL;
    sim_read_plmn_req_struct *sim_read_plmn_req_ptr = NULL;

    kal_uint16 length = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    sim_write_plmn_cnf_ptr = (sim_write_plmn_cnf_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);
    sim_read_plmn_req_ptr = (sim_read_plmn_req_struct*) construct_local_para(sizeof(sim_read_plmn_req_struct), TD_UL);
    sim_read_plmn_req_ptr->access_id = sim_write_plmn_cnf_ptr->access_id;
    sim_read_plmn_req_ptr->src_id = sim_write_plmn_cnf_ptr->src_id;     /* mtk01488 */
    sim_read_plmn_req_ptr->file_idx = sim_write_plmn_cnf_ptr->file_idx;
    sim_read_plmn_req_ptr->state = 0x01;    /* read after update */

    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SIM_READ_PLMN_REQ, sim_read_plmn_req_ptr, NULL);

}


/*****************************************************************************
 * FUNCTION
 *  smu_tst_handler
 * DESCRIPTION
 *  This function is to handle tst inject message.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_tst_handler(ilm_struct *smu_ilm_ptr)
{
#ifdef __SIM_ME_LOCK__   
#ifdef __SML_TEST__
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    tst_module_string_inject_struct *tst_ptr = NULL;
    kal_uint16 length = 0;

    sml_context_struct *p = NULL;
    sim_interface_enum simInterface = SMU_SELECT_SIM(this_smu->smu_current_mod);
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#ifdef UNIT_TEST
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    sml_Load(&NVRAM_EF_SML_DEFAULT, simInterface);
    kal_sys_trace("SML: UT initialized!");

#endif /* UNIT_TEST */ 

    ASSERT(pSMLg[simInterface].pObj);
    p = (sml_context_struct*) pSMLg[simInterface].pObj;
    tst_ptr = (tst_module_string_inject_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);

    switch (tst_ptr->index)
    {
        case 0x00:  /* Reset context */
            kal_mem_set((kal_uint8*) p, 0, sizeof(sml_context_struct));
            p->magic_head = SML_MAGIC_HEAD_VALUE;
            p->magic_tail = SML_MAGIC_TAIL_VALUE;
            smu_nvram_write(NVRAM_EF_SML_LID, 0x00);
            break;
        case 0x01:  /* Network Personalisation */
        {
            sml_category_meta_struct meta = {SML_STATE_LOCK, SML_MAX_RETRY_COUNT, 0, 1};
            sml_control_key_struct key = { {SML_KEY_SET}
            , 0x21, 0x43, 0x65, 0x87, 0xFF, 0xFF, 0xFF, 0xFF};
            kal_uint8 code[3] = {0x21, 0x40, 0x7F}; /* Telefornica 001 */
            kal_mem_cpy(&(p->cat[SML_CAT_N]), &meta, sizeof(sml_category_meta_struct));
            kal_mem_cpy(&(p->key[SML_CAT_N]), &key, sizeof(sml_control_key_struct));
            kal_mem_cpy(&(p->code_cat_n[0]), &(code[0]), 3);
            smu_nvram_write(NVRAM_EF_SML_LID, 0x00);
            break;
        }
        case 0x02:  /* Network Subset Personalisation */
        {
            sml_category_meta_struct meta = {SML_STATE_LOCK, SML_MAX_RETRY_COUNT, 0, 1};
            sml_control_key_struct key = { {SML_KEY_SET}
            , 0x65, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
            kal_uint8 code[4] = {0x21, 0x40, 0x7F, 0x06};   /* Telefornica 001 */
            kal_mem_cpy(&(p->cat[SML_CAT_NS]), &meta, sizeof(sml_category_meta_struct));
            kal_mem_cpy(&(p->key[SML_CAT_NS]), &key, sizeof(sml_control_key_struct));
            kal_mem_cpy(&(p->code_cat_ns[0]), &(code[0]), 4);
            smu_nvram_write(NVRAM_EF_SML_LID, 0x00);
            break;
        }
        case 0x03:  /* Service Provider Personalisation */
        {
            sml_category_meta_struct meta = {SML_STATE_LOCK, SML_MAX_RETRY_COUNT, 0, 1};
            sml_control_key_struct key = { {SML_KEY_SET}
            , 0x11, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
            kal_uint8 code[4] = {0x21, 0x40, 0x7F, 0x16};   /* Telefornica 001 */
            kal_mem_cpy(&(p->cat[SML_CAT_SP]), &meta, sizeof(sml_category_meta_struct));
            kal_mem_cpy(&(p->key[SML_CAT_SP]), &key, sizeof(sml_control_key_struct));
            kal_mem_cpy(&(p->code_cat_sp[0]), &(code[0]), 4);
            smu_nvram_write(NVRAM_EF_SML_LID, 0x00);
            break;
        }
        case 0x04:  /* Corporate Personalisation */
        {
            sml_category_meta_struct meta = {SML_STATE_LOCK, SML_MAX_RETRY_COUNT, 0, 1};
            sml_control_key_struct key = { {SML_KEY_SET}
            , 0x33, 0x44, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
            kal_uint8 code[5] = {0x21, 0x40, 0x7F, 0x16, 0x17};
            kal_mem_cpy(&(p->cat[SML_CAT_C]), &meta, sizeof(sml_category_meta_struct));
            kal_mem_cpy(&(p->key[SML_CAT_C]), &key, sizeof(sml_control_key_struct));
            kal_mem_cpy(&(p->code_cat_c[0]), &(code[0]), 5);
            smu_nvram_write(NVRAM_EF_SML_LID, 0x00);
            break;
        }
        case 0x05:  /* IMSI Personalisation */
        {
            sml_category_meta_struct meta = {SML_STATE_LOCK, SML_MAX_RETRY_COUNT, 0, 1};
            sml_control_key_struct key = { {SML_KEY_SET}
            , 0x55, 0x66, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
            kal_uint8 code[8] = {0x29, 0x41, 0x70, 0x60, 0x01, 0x30, 0x10, 0x37};     /* Telefornica 001 */
            kal_mem_cpy(&(p->cat[SML_CAT_SIM]), &meta, sizeof(sml_category_meta_struct));
            kal_mem_cpy(&(p->key[SML_CAT_SIM]), &key, sizeof(sml_control_key_struct));
            kal_mem_cpy(&(p->code_cat_sim[0]), &(code[0]), 8);
            smu_nvram_write(NVRAM_EF_SML_LID, 0x00);
            break;
        }
        case 0x06:  /* Link NS-SP Personalisation */
        {
            sml_category_meta_struct meta = {SML_STATE_LOCK, SML_MAX_RETRY_COUNT, 0, 1};
            sml_control_key_struct key = { {SML_KEY_SET}
            , 0x77, 0x88, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
            kal_uint8 code[5] = {0x21, 0x40, 0x7F, 0x06, 0x16};
            kal_mem_cpy(&(p->cat[SML_CAT_NS_SP]), &meta, sizeof(sml_category_meta_struct));
            kal_mem_cpy(&(p->key[SML_CAT_NS_SP]), &key, sizeof(sml_control_key_struct));
            kal_mem_cpy(&(p->code_cat_ns_sp[0]), &(code[0]), 5);
            smu_nvram_write(NVRAM_EF_SML_LID, 0x00);
            break;
        }
        case 0x07:  /* Link SIM-C Personalisation */
        {
            sml_category_meta_struct meta = {SML_STATE_LOCK, SML_MAX_RETRY_COUNT, 0, 1};
            sml_control_key_struct key = { {SML_KEY_SET}
            , 0x99, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
            kal_uint8 code[10] = {0x29, 0x41, 0x70, 0x60, 0x01, 0x30, 0x10, 0x37, 0x16, 0x17};
            kal_mem_cpy(&(p->cat[SML_CAT_SIM_C]), &meta, sizeof(sml_category_meta_struct));
            kal_mem_cpy(&(p->key[SML_CAT_SIM_C]), &key, sizeof(sml_control_key_struct));
            kal_mem_cpy(&(p->code_cat_sim_c[0]), &(code[0]), 10);
            smu_nvram_write(NVRAM_EF_SML_LID, 0x00);
            break;
        }
        case 0x08:  /* Auto lock */
        {
            sml_category_meta_struct meta = {SML_STATE_AUTOLOCK, SML_MAX_RETRY_COUNT, 5, 0};
            switch (tst_ptr->string[0])
            {
                case '0':
                    kal_mem_cpy(&(p->cat[SML_CAT_N]), &meta, sizeof(sml_category_meta_struct));
                    break;
                case '1':
                    kal_mem_cpy(&(p->cat[SML_CAT_NS]), &meta, sizeof(sml_category_meta_struct));
                    break;
                case '2':
                    kal_mem_cpy(&(p->cat[SML_CAT_SP]), &meta, sizeof(sml_category_meta_struct));
                    break;
                case '3':
                    kal_mem_cpy(&(p->cat[SML_CAT_C]), &meta, sizeof(sml_category_meta_struct));
                    break;
                case '4':
                    kal_mem_cpy(&(p->cat[SML_CAT_SIM]), &meta, sizeof(sml_category_meta_struct));
                    break;
                case '5':
                    kal_mem_cpy(&(p->cat[SML_CAT_NS_SP]), &meta, sizeof(sml_category_meta_struct));
                    break;
                case '6':
                    kal_mem_cpy(&(p->cat[SML_CAT_SIM_C]), &meta, sizeof(sml_category_meta_struct));
                    break;
            }
            smu_nvram_write(NVRAM_EF_SML_LID, 0x00);
        }
        default:
            break;
    }
#endif /* __SML_TEST__ */ 
#endif
}

/*****************************************************************************
 * FUNCTION
 *  smu_sim_error_ind_hdlr
 * DESCRIPTION
 *  handler for MSG_ID_SIM_ERROR_IND
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 *
 * RETURNS
 *  void
 *****************************************************************************/
void smu_sim_error_ind_hdlr(ilm_struct *smu_ilm_ptr)
{
    sim_error_ind_struct *msg_ptr = (sim_error_ind_struct*)smu_ilm_ptr->local_para_ptr;

    switch (msg_ptr->cause)
    {          
        case SIM_REFRESH:
        case SIM_ACCESS_PROFILE_OFF:
        case DUALSIM_CONNECTED:
        case SIM_PLUG_IN:
        case SIM_VSIM_ON:
        case SIM_RECOVERY_END:
        {
            /* While SIM present, SMU reset pending_password_id thus AT+CPIN?  will get +CME ERROR: 14 */
            this_smu->pending_password_id = ID_SIM_BUSY;
            this_smu->is_exception_reset = KAL_FALSE; //ALPS01009313, reset to report real SML status
            break;
        }

        // verify pin -> plug out -> power off -> user need to verify pin again when power on in silent reboot mode
        case SIM_PLUG_OUT:
        {
            if ((*pSmuSecurityInfog->assign_u8 != NULL) && (*pSmuSecurityInfog->query_u8 != NULL))
            {
                smu_context_struct *smu_ptr = this_smu;
                kal_uint8 security_ind;

                security_ind = (*pSmuSecurityInfog->query_u8) (SMU_SECURITY_INDICATION_U8, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
                security_ind = security_ind & 0xBF;   // clear 6th bit

                (*pSmuSecurityInfog->assign_u8) (SMU_PIN1_VALID_U8, KAL_FALSE, SMU_SELECT_SIM(smu_ptr->smu_current_mod));
                (*pSmuSecurityInfog->assign_u8) (SMU_SECURITY_INDICATION_U8, security_ind, SMU_SELECT_SIM(smu_ptr->smu_current_mod));

            smu_nvram_write(NVRAM_EF_MS_SECURITY_LID, 0xFF);
            }
            break;
        }
        default:
            // un-handle cause
            break;
    }
}

#if defined(__SATCE__) && !defined(__RSAT__)  //mtk02374
/*****************************************************************************
 * FUNCTION
 *  debug_show_channel_socket_table
 * DESCRIPTION
 *  This function is used to pass the request for the user's confirmation to open a CSD channel
 *  to MMI and to save the data account profile in smu_context_g.
 * CALLS
 *  
 * PARAMETERS
 *  void
 *  IN	ilm_struct * smu_ilm_ptr(?)
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
#define SAT_MAX_BUFFER_SIZE 1500
#define LINK_NOT_ESTABLISHED 0x00
#define LINK_ESTABLISHED 0x80
#define NO_FURTHER_INFO_CAN_BE_GIVEN 0x00
#define DEVICE_IDENTITY_CHANNEL 0x20
#define TCP_IN_ESTABLISHED_STATE 0x80
#define TCP_IN_LISTEN_STATE 0x40
#define TCP_IN_CLOSED_STATE 0x00

#define SATE_PROTOTYPE 1

void sat_set_account_profile(void);
void smu_free_account(kal_uint8);
void smu_start_timer(void);
void sat_open_server_mode_channel_handler(kal_bool);
void debug_show_channel_socket_table(void);
kal_bool sat_set_server_mode_socket(void);
kal_bool attemp_setup_tcp_link(smu_socket_context_struct *);
kal_bool attemp_setup_udp_link(smu_socket_context_struct *);
kal_bool attemp_setup_raw_socket(smu_socket_context_struct *);
kal_uint8 sate_get_available_channel(void);
kal_uint8 sate_channel_socket_table(kal_int8);
void sat_process_send_data(void);

#define SATE_MISC_FUN 1

void debug_show_channel_socket_table(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 i;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (i = 1; i < MAX_SUPPORT_SATE_CHANNEL + 1; i++)
    {
        kal_trace(
            TRACE_STATE,
            SOCTABLE,
            i,
            this_smu->sate_channel_socket_table[i],
            this_smu->sate_channel_child_socket_table[i]);
    }
}

/* search channel vs socket table to find the correct channel used by specific socket from msg */


/*****************************************************************************
 * FUNCTION
 *  sate_channel_socket_table
 * DESCRIPTION
 *  
 * PARAMETERS
 *  socket_id       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 sate_channel_socket_table(kal_int8 socket_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 CH;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    debug_show_channel_socket_table();

    for (CH = 1; CH < MAX_SUPPORT_SATE_CHANNEL + 1; CH++)
    {
        if (this_smu->sate_channel_socket_table[CH] == socket_id)
        {
            return CH;
        }
        if (this_smu->sate_channel_child_socket_table[CH] == socket_id)
        {
            return CH;
        }
    }

    kal_trace(TRACE_STATE, NO_SOC_MAP);    /* no socket and channel mapping relation */
    return 0xFF;                    /* no mapping relation exist */
}


/*****************************************************************************
 * FUNCTION
 *  sate_get_available_channel
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 sate_get_available_channel(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 i;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (i = 1; i < MAX_SUPPORT_SATE_CHANNEL + 1; i++)
        if (this_smu->sate_channel_usage_table[i] == 0x00)
        {
            this_smu->sate_channel_usage_table[i] = 0x01;   /* 0x01 means the channel is taken for use */
            this_smu->sate_current_channel = i;
            return i;                                       /* return the CH number which is available */
        }
    return 0xFF;    /* 0xFF means no channel is available */
}


/*****************************************************************************
 * FUNCTION
 *  check_retry_allowed
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void check_retry_allowed(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, CHECK_RETRY_ALLOWED);

    if (this_smu->sate_channel[CH].is_auto_reconnetion == KAL_TRUE)
    {
        if(this_smu->sate_channel[CH].duration1 == 0)
        {
            ASSERT(0);
        }			
        smu_start_timer();
        this_smu->sate_channel[CH].is_retry_allowed = KAL_TRUE;
        kal_trace(TRACE_STATE, RETRY_ALLOWED);
    }
    else
    {
        this_smu->sate_channel[CH].is_retry_allowed = KAL_FALSE;
        kal_trace(TRACE_STATE, RETRY_NOT_ALLOWED);
    }
}


/*****************************************************************************
 * FUNCTION
 *  timer_expiry_call_back_function
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void timer_expiry_call_back_function()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, TIMER_EXPIRY_CALL_BACK_FUNCTION);
    this_smu->sate_channel[CH].is_retry_allowed = KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  smu_start_timer
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void smu_start_timer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_timer_info_struct *timer_ptr;
    kal_timer_func_ptr timer_hdlr;
    kal_uint32 time_out;
    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SMU_START_TIMER);
    time_out = this_smu->sate_channel[CH].duration1 / 1000 * KAL_TICKS_1_SEC;

    timer_hdlr = (kal_timer_func_ptr) timer_expiry_call_back_function;
    timer_ptr = &(this_smu->sate_channel[CH].timer_pool[0]);
    timer_ptr->timer_id = 0;
    timer_ptr->timer_status = SMU_TIMER_RUNNING;
    timer_ptr->event_id = evshed_set_event(
                            this_smu->sate_channel[CH].smu_timer_context.smu_event_scheduler_ptr1,
                            timer_hdlr,
                            timer_ptr,
                            time_out);
}


/*****************************************************************************
 * FUNCTION
 *  smu_stop_timer
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void smu_stop_timer()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    smu_timer_info_struct *timer_ptr;
    kal_int32 rv;
    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SMU_STOP_TIMER);
    /* SIM_TIMING_ENTRY(FUNC_SIM_STOP_TIMER); */

    timer_ptr = &(this_smu->sate_channel[CH].timer_pool[0]);
    /* Check whether the timer is running or not */
    if (timer_ptr->timer_status != SMU_TIMER_RUNNING)
    {
        return;
    }

    rv = evshed_cancel_event(
            this_smu->sate_channel[CH].smu_timer_context.smu_event_scheduler_ptr1,
            &(timer_ptr->event_id));

    timer_ptr->timer_status = SMU_TIMER_STOPPED;
}


/*****************************************************************************
 * FUNCTION
 *  smu_timer_expiry_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void smu_timer_expiry_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SMU_TIMER_EXPIRY_HANDLER);

//    if (stack_is_time_out_valid(&(this_smu->sate_channel[CH].smu_timer_context.smu_base_timer1)))
//    {
        /* SIM_FUNC_ENTRY(FUNC_SIM_TIMER_EXPIRY_HANDLER); */
        /* Execute event's timeout handler */
        evshed_timer_handler(this_smu->sate_channel[CH].smu_timer_context.smu_event_scheduler_ptr1);
//    }
    /* Shoulbe be paired with stack_is_time_out_valid() */
//    stack_process_time_out(&(this_smu->sate_channel[CH].smu_timer_context.smu_base_timer1));
}


/*****************************************************************************
 * FUNCTION
 *  sat_app_soc_deactivate_cnf_handler
 * DESCRIPTION
 *  This function is used to confirm that GPRS channel has been closed successfully.
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void sat_app_soc_deactivate_cnf_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /* To L4C for MMI notify */
    l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;

    /* To SIM */
    sat_close_channel_res_struct *sat_close_channel_res_ptr;
    sat_evdl_channel_status_req_struct *sat_evdl_channel_status_req_ptr;

    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SAT_APP_SOC_DEACTIVATE_CNF_HANDLER);

    if (this_smu->sate_channel[CH].cmd_detail[3] == CMD_CLOSE_CHAN)
    {
        kal_trace(TRACE_STATE, CLOSE_CHV_RES);

        sat_close_channel_res_ptr = (sat_close_channel_res_struct*)
            construct_local_para(sizeof(sat_close_channel_res_struct), TD_DL);

        l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

        kal_mem_cpy(sat_close_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        sat_close_channel_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
        sat_close_channel_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

        l4csmu_sat_notify_mmi_ind_ptr->state = SAT_CLOSE_CHANNEL_FINISHED;

	/*
	  *  [MAUI_01629572] mtk02374 090212
	  *   For FTA 27.22.4.28.1/3, context should be cleaned before send terminal response of 
	  *   CLOSE_CHANNEL
	  */
        smu_free_account(CH);

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND, l4csmu_sat_notify_mmi_ind_ptr, NULL);

        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_CLOSE_CHANNEL_RES, sat_close_channel_res_ptr, NULL);

    }

    /* for disconnet event download request */
    else
    {
        if(this_smu->sate_channel[CH].is_immediate_link == KAL_FALSE 
          && this_smu->sate_channel[CH].cmd_detail[3] == CMD_SEND_DATA
          && this_smu->sate_channel[CH].protocol_type == SAT_UDP_PROTOCOL)
        {
            l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;
            /* Message to SIM */
            sat_send_data_res_struct *sat_send_data_res_ptr;  
            if (this_smu->sate_channel[CH].socket_context.socket_id > 0)
            {
                kal_trace(TRACE_STATE, SOCKET_GREATER_ZERO);
                soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                    /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */
            }
            /* Message to SIM */
            sat_send_data_res_ptr = (sat_send_data_res_struct*)
                construct_local_para(sizeof(sat_send_data_res_struct), TD_UL);

            kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);
  
            /* Message to L4C for MMI notify */
            l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
                construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

            l4csmu_sat_notify_mmi_ind_ptr->state = SAT_SEND_DATA_TERMINATED;
  
            /* Clean Tx Buffer */
            this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;
            sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
            sat_send_data_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
            sat_send_data_res_ptr->cause = SAT_BIP_CHANNEL_CLOSED;

            if (this_smu->sate_channel[CH].avail_buf_size >= 0xFF)
            {
                sat_send_data_res_ptr->ch_data_length = 0xFF;
            }
            else
            {
                sat_send_data_res_ptr->ch_data_length = this_smu->sate_channel[CH].avail_buf_size;
            }

            smu_free_account(CH);

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);

            smu_send_ilm(
                MOD_L4C,
                SMU_L4C_SAP,
                MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND,
                l4csmu_sat_notify_mmi_ind_ptr,
                NULL);
            return;
        }
        /*
          *  mtk02374 20090722 MAUI_1765491
          *  If bearer deactivated during OPEN_CHANNEL then we should not send evdl here
          *  We will send terminal response later when receiving soc_notify_ind with SOC_CONNECT fail
          */
        if (this_smu->sate_channel[CH].cmd_detail[3] == CMD_OPEN_CHAN) 
        {
            if(this_smu->sate_channel[CH].protocol_type == SAT_UDP_PROTOCOL)
            {
                sat_open_gprs_channel_res_struct *sat_open_gprs_channel_res_ptr;
                l4csmu_sat_open_channel_cnf_struct *l4csmu_sat_open_channel_cnf_ptr;
                /* close socket */
                /* build terminal response with
                   network currently unable to process command,
                   inform MMI setup link failed */
                sat_open_gprs_channel_res_ptr = (sat_open_gprs_channel_res_struct*)
                    construct_local_para(sizeof(sat_open_gprs_channel_res_struct), TD_UL);

                l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                    construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);
				
                soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */

                sat_open_gprs_channel_res_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;

                kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                sat_open_gprs_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;
              /* If link failed, channel status no need to bring back to SIM 
                   under NW currently unable to process command, 
                   but channel not available */
                sat_open_gprs_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
                sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

                kal_mem_cpy(
                    &(sat_open_gprs_channel_res_ptr->bearer_para),
                    &(this_smu->sate_channel[CH].gprs_bearer_para),
                    sizeof(sat_gprs_bearer_para_struct));

                sat_open_gprs_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

                    /* Save to context */
               /*
                 * this_smu->sate_channel[CH].channel_status[0] = 0x00;
                 * this_smu->sate_channel[CH].channel_status[1] = 0x00;
                 * this_smu->sate_channel[CH].channel_id = SAT_NO_CHANNEL;
                 */

                smu_free_account(CH);
                smu_send_ilm(
                    MOD_SIM,
                    PS_SIM_SAP,
                    MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES,
                    sat_open_gprs_channel_res_ptr,
                    NULL);

                /* Inform MMI setup link failed */
                /* To MMI notify *//* Send CNF message to MMI */
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;
                l4csmu_sat_open_channel_cnf_ptr->cause = 0; /* SAT_NO_SPECIFIC_CAUSE */

                smu_send_ilm(
                    MOD_L4C,
                    SMU_L4C_SAP,
                    MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                    l4csmu_sat_open_channel_cnf_ptr,
                    NULL);    
            }
            return;
        }
        else
        {
            kal_trace(TRACE_STATE, DISC_EVENT_DOWNLOAD);

            sat_evdl_channel_status_req_ptr = (sat_evdl_channel_status_req_struct*)
                construct_local_para(sizeof(sat_evdl_channel_status_req_struct), TD_DL);

	/*
	  *  [MAUI_01629569] mtk02374 090212
	  *   For FTA 27.22.4.31.1/3, if link drop we should send evdl with updated channel_status
	  */
            this_smu->sate_channel[CH].channel_status[0] = CH | LINK_NOT_ESTABLISHED;
            this_smu->sate_channel[CH].channel_status[1] = 0x05;        /* link drop */

            kal_mem_cpy(sat_evdl_channel_status_req_ptr->channel_status, this_smu->sate_channel[CH].channel_status, 2);

        /*
         *   [MAUI_01672803] mtk02374 090504
         *    We should clear context if the link is dropped
         */
            smu_free_account(CH);

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_EVDL_CHANNEL_STATUS_REQ, sat_evdl_channel_status_req_ptr, NULL);
        }
    }

    if ((this_smu->sate_channel[CH].bearer==SAT_SERVER_MODE_BEARER)&&(this_smu->is_sate_child_socket_closed != KAL_TRUE))
    {
        // mtk02374 this field should be set to TRUE here
        this_smu->is_sate_child_socket_closed = KAL_TRUE;
        smu_free_account(CH);
    }

}


/*****************************************************************************
 * FUNCTION
 *  sat_app_bearer_info_ind_req_handler
 * DESCRIPTION
 *  This function is used to pass the result of current CSD bearer parameters.
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/

void sat_app_bearer_info_ind_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* From SOC */
    app_cbm_bearer_info_ind_struct *sat_app_soc_bearer_info_ind_ptr;
    kal_uint16 sat_app_soc_bearer_info_ind_len;

    /* To L4C */
    /* for MMI display: open channel and send data notification */
    l4csmu_sat_open_channel_cnf_struct *l4csmu_sat_open_channel_cnf_ptr;

    /* l4csmu_sat_notify_mmi_ind_struct * l4csmu_sat_notify_mmi_ind_ptr; */

    /* To SIM */
    sat_open_csd_channel_res_struct *sat_open_csd_channel_res_ptr;
    sat_open_gprs_channel_res_struct *sat_open_gprs_channel_res_ptr;

    //      sat_send_data_res_struct * sat_send_data_res_ptr;
    //      sat_evdl_data_available_req_struct * sat_evdl_data_available_req_ptr;

    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Leona */
    sat_app_soc_bearer_info_ind_ptr = (app_cbm_bearer_info_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_app_soc_bearer_info_ind_len);

    if (sat_app_soc_bearer_info_ind_ptr->state == CBM_DEACTIVATED)
    {
        sat_app_soc_deactivate_cnf_handler(smu_ilm_ptr);
        return;
    }
    /* ~ Leona */

    kal_trace(TRACE_FUNC, SAT_APP_BEARER_INFO_IND_REQ_HANDLER);

    if (this_smu->sate_channel[CH].protocol_type == 0x02 )   /* TCP: 0x02 */
    {
        return;
    }
    /*ignore this indication if current command is neither OPEN CHANNEL nor ondemand link with SEND DATA*/
    if ((this_smu->sate_channel[CH].cmd_detail[3] != CMD_OPEN_CHAN)
    	&&(this_smu->sate_channel[CH].is_immediate_link == KAL_TRUE || this_smu->sate_channel[CH].cmd_detail[3] != CMD_SEND_DATA))
    {
        return;
    }

    if (this_smu->sate_channel[CH].bearer == SAT_CSD_BEARER)
    {
        /* link set up succeed */
        if (sat_app_soc_bearer_info_ind_ptr->state == CBM_ACTIVATED)
        {

            kal_trace(TRACE_STATE, CSD_SOC_ACTIVATE_UDP);

            /* if smu_timer not expired, then stop timer, and set is_retry as KAL_FASLE */
            smu_stop_timer();
            this_smu->sate_channel[CH].is_retry_allowed = KAL_FALSE;

            /* Allocate buffer and channel ID */
            this_smu->sate_channel[CH].satce_buffer = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
            this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;

            /* Allocate rx buffer and channel ID */
            this_smu->sate_channel[CH].satce_buffer_rx = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
            this_smu->sate_channel[CH].avail_buf_size_rx = this_smu->sate_channel[CH].buffer_size;

            /* Build terminal response */
            /* To SIM */
            sat_open_csd_channel_res_ptr = (sat_open_csd_channel_res_struct*)
                construct_local_para(sizeof(sat_open_csd_channel_res_struct), TD_DL);
            if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
            {
                sat_open_csd_channel_res_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
            }
            else
            {
                sat_open_csd_channel_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            }

            kal_mem_cpy(sat_open_csd_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

            sat_open_csd_channel_res_ptr->cause = 0x00; /* None */
            sat_open_csd_channel_res_ptr->ch_status[0] = CH | LINK_ESTABLISHED;
            sat_open_csd_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            kal_mem_cpy(
                &(sat_open_csd_channel_res_ptr->bearer_para),
                &(this_smu->sate_channel[CH].csd_bearer_para),
                sizeof(sat_csd_bearer_para_struct));

            sat_open_csd_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
            sat_open_csd_channel_res_ptr->bearer = this_smu->sate_channel[CH].bearer;

            /* Save to context */
            this_smu->sate_channel[CH].channel_status[0] = CH | LINK_ESTABLISHED;
            this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            this_smu->sate_channel[CH].channel_id = CH | DEVICE_IDENTITY_CHANNEL;

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_CSD_CHANNEL_RES, sat_open_csd_channel_res_ptr, NULL);

            /*
             *  mtk02374 20090724 MAUI_01765491
             *  Clean cmd_detail after sending respnose
             */
            kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);

            /* Inform MMI setup link success */
            /* To MMI notify */
            /* Send CNF message to MMI */
            l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);
            if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
            {
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
            }

            else
            {
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            }

            l4csmu_sat_open_channel_cnf_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

            smu_send_ilm(
                MOD_L4C,
                SMU_L4C_SAP,
                MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                l4csmu_sat_open_channel_cnf_ptr,
                NULL);
            kal_trace(TRACE_FUNC, CHANNEL_ID, this_smu->sate_channel[CH].channel_id);

        }
        /* link set up failed */

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
#endif /* 0 */ 

    }

    /* GPRS bearer */
    else if (this_smu->sate_channel[CH].bearer == SAT_GPRS_BEARER)
    {
        /* link setup succeed */
        if (sat_app_soc_bearer_info_ind_ptr->state == CBM_ACTIVATED)
        {
            kal_trace(TRACE_STATE, GPRS_SOC_ACTIVATE_UDP);

            if(this_smu->sate_channel[CH].is_immediate_link == KAL_FALSE 
              && this_smu->sate_channel[CH].cmd_detail[3] == CMD_SEND_DATA
              && this_smu->sate_channel[CH].protocol_type == SAT_UDP_PROTOCOL)
            {
                sat_process_send_data();
                return;
            }

            sat_open_gprs_channel_res_ptr = (sat_open_gprs_channel_res_struct*)
                construct_local_para(sizeof(sat_open_gprs_channel_res_struct), TD_UL);

            l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);

            /* Allocate buffer and channel ID */
            this_smu->sate_channel[CH].satce_buffer = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
            this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;

            /* Allocate rx buffer and channel ID */
            this_smu->sate_channel[CH].satce_buffer_rx = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
            this_smu->sate_channel[CH].avail_buf_size_rx = this_smu->sate_channel[CH].buffer_size;

            /* Build terminal response */
            /* To SIM */
            if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
            {
                sat_open_gprs_channel_res_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
            }
            else
            {
                sat_open_gprs_channel_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            }

            kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

            sat_open_gprs_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;
            sat_open_gprs_channel_res_ptr->ch_status[0] = CH | LINK_ESTABLISHED;
            sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            kal_mem_cpy(
                &(sat_open_gprs_channel_res_ptr->bearer_para),
                &(this_smu->sate_channel[CH].gprs_bearer_para),
                sizeof(sat_gprs_bearer_para_struct));

            sat_open_gprs_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
            sat_open_gprs_channel_res_ptr->bearer = this_smu->sate_channel[CH].bearer;

            /* Save to context */
            this_smu->sate_channel[CH].channel_status[0] = CH | LINK_ESTABLISHED;
            this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            this_smu->sate_channel[CH].channel_id = CH | DEVICE_IDENTITY_CHANNEL;

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES, sat_open_gprs_channel_res_ptr, NULL);

            /*
             *  mtk02374 20090724 MAUI_01765491
             *  Clean cmd_detail after sending respnose
             */
            kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);

            /* Inform MMI setup link success */
            /* To MMI notify *//* Send CNF message to MMI */
            if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
            {
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
            }
            else
            {
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            }

            l4csmu_sat_open_channel_cnf_ptr->cause = SAT_NO_SPECIFIC_CAUSE;     /* SAT_NO_SPECIFIC_CAUSE */

            smu_send_ilm(
                MOD_L4C,
                SMU_L4C_SAP,
                MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                l4csmu_sat_open_channel_cnf_ptr,
                NULL);

            kal_trace(TRACE_FUNC, CHANNEL_ID, this_smu->sate_channel[CH].channel_id);

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
#endif /* 0 */ 

    }

    /* Raw Socket */
    else
    {
        /* implement later */
        kal_trace(TRACE_STATE, RAW_SOCKET_CONNECT);
    }

}


/*****************************************************************************
 * FUNCTION
 *  smu_free_account
 * DESCRIPTION
 *  This function is used to free the ctrl buffer allocated in the smu_context_g
 * CALLS
 *  
 * PARAMETERS
 *  CH      [IN]        
 *  IN	kal_uint8 bearer(?)
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void smu_free_account(kal_uint8 CH)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SMU_FREE_ACCOUNT);

    this_smu->sate_channel_usage_table[CH] = 0x00;  /* release channel used */

    /*
      * [MAUI_01629572] mtk02374 090212
      *  set current_channel = 0 in free channel account
      */
    this_smu->sate_current_channel = 0;

    this_smu->sate_channel[CH].size_of_address = 0;
    kal_mem_set(this_smu->sate_channel[CH].addr, 0x00, MAX_SIM_ADDR_BCD_LEN);

    this_smu->sate_channel[CH].size_of_subaddr = 0;
    kal_mem_set(this_smu->sate_channel[CH].subaddr, 0x00, MAX_SIM_ADDR_BCD_LEN);

    this_smu->sate_channel[CH].duration1 = 0;
    this_smu->sate_channel[CH].duration2 = 0;

    kal_mem_set(&(this_smu->sate_channel[CH].csd_bearer_para), 0x00, sizeof(sat_csd_bearer_para_struct));

    this_smu->sate_channel[CH].no_apn = 0;
    smu_free_ctrl_buffer(this_smu->sate_channel[CH].apn);
    this_smu->sate_channel[CH].apn = NULL;

    this_smu->sate_channel[CH].no_local_addr = 0;
    smu_free_ctrl_buffer(this_smu->sate_channel[CH].local_addr);
    this_smu->sate_channel[CH].local_addr = NULL;

    this_smu->sate_channel[CH].no_username = 0;
    smu_free_ctrl_buffer(this_smu->sate_channel[CH].username);
    this_smu->sate_channel[CH].username = NULL;

    this_smu->sate_channel[CH].no_passwd = 0;
    smu_free_ctrl_buffer(this_smu->sate_channel[CH].passwd);
    this_smu->sate_channel[CH].passwd = NULL;

    this_smu->sate_channel[CH].protocol_type = 0;
    this_smu->sate_channel[CH].port_num = 0;

    this_smu->sate_channel[CH].no_dest_addr = 0;
    smu_free_ctrl_buffer(this_smu->sate_channel[CH].dest_addr);
    this_smu->sate_channel[CH].dest_addr = NULL;

    this_smu->sate_channel[CH].socket_context.account_id = 0;
    this_smu->sate_channel[CH].socket_context.socket_id = -1;

    kal_mem_set(&(this_smu->sate_channel[CH].gprs_bearer_para), 0x00, sizeof(sat_gprs_bearer_para_struct));

    this_smu->sate_channel[CH].buffer_size = 0;
    smu_free_ctrl_buffer(this_smu->sate_channel[CH].satce_buffer);
    this_smu->sate_channel[CH].satce_buffer = NULL;
    this_smu->sate_channel[CH].satce_buf_hd = 0;
    this_smu->sate_channel[CH].avail_buf_size = 0;

    /* rx buffer */
    smu_free_ctrl_buffer(this_smu->sate_channel[CH].satce_buffer_rx);
    this_smu->sate_channel[CH].satce_buffer_rx = NULL;
    this_smu->sate_channel[CH].satce_buf_hd_rx = 0;
    this_smu->sate_channel[CH].avail_buf_size_rx = 0;
    /* ~ rx buffer */

    this_smu->sate_channel[CH].channel_id = SAT_NO_CHANNEL;
    kal_mem_set(this_smu->sate_channel[CH].channel_status, 0x00, 2);
    kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);

    this_smu->sate_channel[CH].bearer = 0;
    this_smu->sate_channel[CH].is_cmd_modified = KAL_FALSE;
    this_smu->sate_channel[CH].channel_data_len = 0;
    this_smu->sate_channel[CH].is_ondemand_link_established = KAL_FALSE;   
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_bearer_para_req_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_bearer_para_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    l4csmu_sat_bearer_para_req_struct *l4csmu_sat_bearer_para_req_ptr;
    kal_uint16 l4csmu_sat_bearer_para_req_len = 0;
    kal_uint8 is_buffer_modified = 0;

    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, L4CSMU_SAT_BEARER_PARA_REQ_HANDLER);

    l4csmu_sat_bearer_para_req_ptr = (l4csmu_sat_bearer_para_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_sat_bearer_para_req_len);

    /* buffer is modified */
    if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
    {
        is_buffer_modified = 1;
    }

    if (l4csmu_sat_bearer_para_req_ptr->bearer_type == SAT_CSD_BEARER)
    {
        if (kal_mem_cmp(
                &(this_smu->sate_channel[CH].csd_bearer_para),
                &(l4csmu_sat_bearer_para_req_ptr->csd_bearer),
                3) != 0)
        {
            kal_trace(TRACE_STATE, BEARER_PARA_MODIFIED);
            this_smu->sate_channel[CH].is_cmd_modified = KAL_TRUE;
            kal_mem_cpy(
                &(this_smu->sate_channel[CH].csd_bearer_para),
                &(l4csmu_sat_bearer_para_req_ptr->csd_bearer),
                3);
        }
        else
        {
            kal_trace(TRACE_STATE, BEARER_PARA_NOT_MODIFIED);
            this_smu->sate_channel[CH].is_cmd_modified = KAL_FALSE;
        }
    }
    else    /* SAT_GPRS_BEARER */
    {
        if (kal_mem_cmp(
                &(this_smu->sate_channel[CH].gprs_bearer_para),
                &(l4csmu_sat_bearer_para_req_ptr->gprs_bearer),
                6) != 0)
        {
            kal_trace(TRACE_STATE, BEARER_PARA_MODIFIED);
            this_smu->sate_channel[CH].is_cmd_modified = KAL_TRUE;
            kal_mem_cpy(
                &(this_smu->sate_channel[CH].gprs_bearer_para),
                &(l4csmu_sat_bearer_para_req_ptr->gprs_bearer),
                6);
        }
        else
        {
            kal_trace(TRACE_STATE, BEARER_PARA_NOT_MODIFIED);
            this_smu->sate_channel[CH].is_cmd_modified = KAL_FALSE;
        }
    }

    if (is_buffer_modified == KAL_TRUE)
    {
        this_smu->sate_channel[CH].is_cmd_modified = KAL_TRUE;
    }
}

#define SATE_OPEN_CHANNEL_FLAG 1

void sat_register_sate_app_id()
{
    kal_int8 ret = 0;
    ret = cbm_register_app_id( &(this_smu->sate_app_id));
    if(ret != CBM_OK)
    {
        ASSERT(0);
    }
}

/*****************************************************************************
 * FUNCTION
 *  sat_open_csd_channel_ind_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void sat_open_csd_channel_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* Message from SIM */
    sat_open_csd_channel_ind_struct *sat_open_csd_channel_ind_ptr;
    sat_open_csd_channel_ind_peer_struct *sat_open_csd_channel_ind_peer_ptr;
    kal_uint16 sat_open_csd_channel_ind_len = 0;

    /* Message to L4C  */
    l4csmu_sat_open_channel_ind_struct *l4csmu_sat_open_channel_ind_ptr;
    l4csmu_sat_open_channel_ind_peer_struct l4csmu_sat_open_channel_ind_peer_data;
    peer_buff_struct *peer_ptr = NULL;

    kal_uint8 CH;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SAT_OPEN_CSD_CHANNEL_IND_HANDLER);

    CH = sate_get_available_channel();

    if(0 == this_smu->sate_app_id)
    {
        sat_register_sate_app_id();
    }

    sat_open_csd_channel_ind_ptr = (sat_open_csd_channel_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_open_csd_channel_ind_len);

    /* No channel is opened. ie. channel is available */
    if ( CH != 0xFF && this_smu->sate_channel[CH].channel_id == SAT_NO_CHANNEL)
    {

        kal_trace(TRACE_FUNC, CHANNEL_ID, this_smu->sate_channel[CH].channel_id);
        kal_trace(TRACE_STATE, CSD_CHANNEL_AVAILABLE);
        l4csmu_sat_open_channel_ind_ptr = (l4csmu_sat_open_channel_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_open_channel_ind_struct), TD_UL);

        kal_mem_cpy(l4csmu_sat_open_channel_ind_ptr->cmd_detail, sat_open_csd_channel_ind_ptr->cmd_detail, 5);

        l4csmu_sat_open_channel_ind_ptr->is_icon_available = sat_open_csd_channel_ind_ptr->is_icon_available;
        if (sat_open_csd_channel_ind_ptr->is_icon_available == KAL_TRUE)
        {
            kal_mem_cpy(
                &(l4csmu_sat_open_channel_ind_ptr->icon_info),
                &(sat_open_csd_channel_ind_ptr->icon_info),
                sizeof(sat_icon_struct));
        }

        l4csmu_sat_open_channel_ind_ptr->bearer_type = sat_open_csd_channel_ind_ptr->bearer;

        SMU_UNPACK(
            sat_open_csd_channel_ind_peer_struct_unpack,
            MCD_SAT_OPEN_CSD_CHANNEL_IND_PEER_STRUCT,
            sat_open_csd_channel_ind_peer_struct,
            sat_open_csd_channel_ind_peer_ptr,
            smu_ilm_ptr->peer_buff_ptr);

        l4csmu_sat_open_channel_ind_peer_data.no_alpha_id = sat_open_csd_channel_ind_peer_ptr->no_alpha_id;
        l4csmu_sat_open_channel_ind_peer_data.dcs_of_alpha_id = sat_open_csd_channel_ind_peer_ptr->dcs_of_alpha_id;
        l4csmu_sat_open_channel_ind_peer_data.is_alpha_id_present =
            sat_open_csd_channel_ind_peer_ptr->is_alpha_id_present;

        if (sat_open_csd_channel_ind_peer_ptr->is_alpha_id_present &&
            l4csmu_sat_open_channel_ind_peer_data.no_alpha_id == 0)
        {
            l4csmu_sat_open_channel_ind_peer_data.alpha_id = NULL;
        }
        else if (sat_open_csd_channel_ind_peer_ptr->is_alpha_id_present)
        {
            l4csmu_sat_open_channel_ind_peer_data.alpha_id = get_ctrl_buffer(sat_open_csd_channel_ind_peer_ptr->no_alpha_id);
            kal_mem_cpy(
                l4csmu_sat_open_channel_ind_peer_data.alpha_id,
                sat_open_csd_channel_ind_peer_ptr->alpha_id,
                sat_open_csd_channel_ind_peer_ptr->no_alpha_id);
        }
        else
        {
            l4csmu_sat_open_channel_ind_peer_data.alpha_id = NULL;
        }

        SMU_PACK(
            l4csmu_sat_open_channel_ind_peer_struct_pack,   /* ASN only */
            l4csmu_sat_open_channel_ind_peer_struct_bits,   /* ASN only */
            MCD_L4CSMU_SAT_OPEN_CHANNEL_IND_PEER_STRUCT,    /* MCD only */
            &l4csmu_sat_open_channel_ind_peer_data,
            &peer_ptr,
            0,
            0);

        smu_send_ilm(
            MOD_L4C,
            SMU_L4C_SAP,
            MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_IND,
            l4csmu_sat_open_channel_ind_ptr,
            peer_ptr);

        smu_free_ctrl_buffer(l4csmu_sat_open_channel_ind_peer_data.alpha_id);

        /* Save all info to context */
        kal_mem_cpy(this_smu->sate_channel[CH].cmd_detail, sat_open_csd_channel_ind_ptr->cmd_detail, 5);

        /* Immediate link */
        if ((this_smu->sate_channel[CH].cmd_detail[4] & 0x01) == 0x01)
        {
            this_smu->sate_channel[CH].is_immediate_link = KAL_TRUE;
        }
        else
        {
            this_smu->sate_channel[CH].is_immediate_link = KAL_FALSE;
        }

        /* auto reconnection */
        if ((this_smu->sate_channel[CH].cmd_detail[4] & 0x02) == 0x02)
        {
            this_smu->sate_channel[CH].is_auto_reconnetion = KAL_TRUE;
        }
        else
        {
            this_smu->sate_channel[CH].is_auto_reconnetion = KAL_FALSE;
        }

        this_smu->sate_channel[CH].bearer = sat_open_csd_channel_ind_ptr->bearer;

        kal_mem_cpy(
            &(this_smu->sate_channel[CH].csd_bearer_para),
            &(sat_open_csd_channel_ind_ptr->csd_bearer),
            sizeof(sat_csd_bearer_para_struct));

        if (sat_open_csd_channel_ind_ptr->buffer_size > SAT_MAX_BUFFER_SIZE)
        {
            sat_open_csd_channel_ind_ptr->buffer_size = SAT_MAX_BUFFER_SIZE;
            this_smu->sate_channel[CH].is_cmd_modified = KAL_TRUE;
        }
        this_smu->sate_channel[CH].buffer_size = sat_open_csd_channel_ind_ptr->buffer_size;

        this_smu->sate_channel[CH].size_of_address = sat_open_csd_channel_ind_ptr->size_of_address;
        kal_mem_cpy(
            this_smu->sate_channel[CH].addr,
            sat_open_csd_channel_ind_ptr->addr,
            sat_open_csd_channel_ind_ptr->size_of_address);

        this_smu->sate_channel[CH].size_of_subaddr = sat_open_csd_channel_ind_ptr->size_of_subaddr;
        kal_mem_cpy(
            this_smu->sate_channel[CH].subaddr,
            sat_open_csd_channel_ind_ptr->subaddr,
            sat_open_csd_channel_ind_ptr->size_of_subaddr);

        this_smu->sate_channel[CH].duration1 = sat_open_csd_channel_ind_ptr->duration1;
        this_smu->sate_channel[CH].duration2 = sat_open_csd_channel_ind_ptr->duration2;

        /* set username */
        smu_free_ctrl_buffer(this_smu->sate_channel[CH].username);      /* free mem before allocate mem */
        this_smu->sate_channel[CH].no_username = sat_open_csd_channel_ind_ptr->no_username;
        if (sat_open_csd_channel_ind_ptr->no_username != 0)
        {
            this_smu->sate_channel[CH].username = get_ctrl_buffer(sat_open_csd_channel_ind_ptr->no_username);
            kal_mem_cpy(
                this_smu->sate_channel[CH].username,
                sat_open_csd_channel_ind_ptr->username,
                sat_open_csd_channel_ind_ptr->no_username);
            this_smu->sate_channel[CH].dcs_of_username = sat_open_csd_channel_ind_ptr->dcs_of_username;
        }
        else
        {
            this_smu->sate_channel[CH].username = NULL;
        }

        /* set passwd */
        smu_free_ctrl_buffer(this_smu->sate_channel[CH].passwd);        /* free mem before allocate mem */
        this_smu->sate_channel[CH].no_passwd = sat_open_csd_channel_ind_ptr->no_passwd;
        if (sat_open_csd_channel_ind_ptr->no_passwd != 0)
        {
            this_smu->sate_channel[CH].passwd = get_ctrl_buffer(sat_open_csd_channel_ind_ptr->no_passwd);
            kal_mem_cpy(
                this_smu->sate_channel[CH].passwd,
                sat_open_csd_channel_ind_ptr->passwd,
                sat_open_csd_channel_ind_ptr->no_passwd);
            this_smu->sate_channel[CH].dcs_of_passwd = sat_open_csd_channel_ind_ptr->dcs_of_passwd;
        }
        else
        {
            this_smu->sate_channel[CH].passwd = NULL;
        }

        this_smu->sate_channel[CH].protocol_type = sat_open_csd_channel_ind_ptr->protocol_type;
        this_smu->sate_channel[CH].port_num = sat_open_csd_channel_ind_ptr->port_num;

        /* set local address */
        smu_free_ctrl_buffer(this_smu->sate_channel[CH].local_addr);
        this_smu->sate_channel[CH].no_local_addr = sat_open_csd_channel_ind_ptr->no_local_addr;
        if (sat_open_csd_channel_ind_ptr->no_local_addr != 0)
        {
            this_smu->sate_channel[CH].local_addr = get_ctrl_buffer(sat_open_csd_channel_ind_ptr->no_local_addr);
            kal_mem_cpy(
                this_smu->sate_channel[CH].local_addr,
                sat_open_csd_channel_ind_ptr->local_addr,
                sat_open_csd_channel_ind_ptr->no_local_addr);
        }
        else
        {
            this_smu->sate_channel[CH].local_addr = NULL;
        }

        /* set destination address */
        smu_free_ctrl_buffer(this_smu->sate_channel[CH].dest_addr);
        this_smu->sate_channel[CH].no_dest_addr = sat_open_csd_channel_ind_ptr->no_dest_addr;
        if (sat_open_csd_channel_ind_ptr->no_dest_addr != 0)
        {
            this_smu->sate_channel[CH].dest_addr = get_ctrl_buffer(sat_open_csd_channel_ind_ptr->no_dest_addr);
            kal_mem_cpy(
                this_smu->sate_channel[CH].dest_addr,
                sat_open_csd_channel_ind_ptr->dest_addr,
                sat_open_csd_channel_ind_ptr->no_dest_addr);
        }
        else
        {
            this_smu->sate_channel[CH].dest_addr = NULL;
        }

    }
    else    /* No Channel available */
    {
        sat_open_csd_channel_res_struct *sat_open_csd_channel_res_ptr;

        sat_open_csd_channel_res_ptr = (sat_open_csd_channel_res_struct*)
            construct_local_para(sizeof(sat_open_csd_channel_res_struct), TD_UL);

        kal_trace(TRACE_STATE, CSD_CHANNEL_NOT_AVAILABLE);
        kal_mem_cpy(sat_open_csd_channel_res_ptr->cmd_detail, sat_open_csd_channel_ind_ptr->cmd_detail, 5);
        sat_open_csd_channel_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
        sat_open_csd_channel_res_ptr->cause = SAT_BIP_NO_CHANNEL_AVAILABLE;
        kal_mem_cpy(
            &(sat_open_csd_channel_res_ptr->bearer_para),
            &(sat_open_csd_channel_ind_ptr->csd_bearer),
            sizeof(sat_csd_bearer_para_struct));
        sat_open_csd_channel_res_ptr->buffer_size = sat_open_csd_channel_ind_ptr->buffer_size;
        sat_open_csd_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
        sat_open_csd_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_CSD_CHANNEL_RES, sat_open_csd_channel_res_ptr, NULL);
    }
}


/*****************************************************************************
 * FUNCTION
 *  sat_open_gprs_channel_ind_handler
 * DESCRIPTION
 *  This function is used to pass the request for the user's confirmation to open a GPRS channel
 *  to MMI and to save the data account profile in smu_context_g.sate_channel[CH].
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void sat_open_gprs_channel_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* Message from SIM */
    sat_open_gprs_channel_ind_struct *sat_open_gprs_channel_ind_ptr;
    sat_open_gprs_channel_ind_peer_struct *sat_open_gprs_channel_ind_peer_ptr;
    kal_uint16 sat_open_gprs_channel_ind_len = 0;

    /* Message to L4C  */
    l4csmu_sat_open_channel_ind_struct *l4csmu_sat_open_channel_ind_ptr;
    l4csmu_sat_open_channel_ind_peer_struct l4csmu_sat_open_channel_ind_peer_data;
    peer_buff_struct *peer_ptr = NULL;

    kal_uint8 CH;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SAT_OPEN_GPRS_CHANNEL_IND_HANDLER);

    CH = sate_get_available_channel();

    if(0 == this_smu->sate_app_id)
    {
        sat_register_sate_app_id();
    }

    sat_open_gprs_channel_ind_ptr = (sat_open_gprs_channel_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_open_gprs_channel_ind_len);

    

    /* No channel is opened. ie. channel is available */
    if (CH != 0xFF && this_smu->sate_channel[CH].channel_id == SAT_NO_CHANNEL)
    {
        kal_trace(TRACE_FUNC, CHANNEL_ID, this_smu->sate_channel[CH].channel_id);
		
        kal_trace(TRACE_STATE, GPRS_CHANNEL_AVAILABLE);
        l4csmu_sat_open_channel_ind_ptr = (l4csmu_sat_open_channel_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_open_channel_ind_struct), TD_UL);

        kal_mem_cpy(l4csmu_sat_open_channel_ind_ptr->cmd_detail, sat_open_gprs_channel_ind_ptr->cmd_detail, 5);
        l4csmu_sat_open_channel_ind_ptr->is_icon_available = sat_open_gprs_channel_ind_ptr->is_icon_available;
        if (sat_open_gprs_channel_ind_ptr->is_icon_available == KAL_TRUE)
        {
            kal_mem_cpy(
                &(l4csmu_sat_open_channel_ind_ptr->icon_info),
                &(sat_open_gprs_channel_ind_ptr->icon_info),
                sizeof(sat_icon_struct));
        }

        l4csmu_sat_open_channel_ind_ptr->bearer_type = sat_open_gprs_channel_ind_ptr->bearer;

        SMU_UNPACK(
            sat_open_gprs_channel_ind_peer_struct_unpack,
            MCD_SAT_OPEN_GPRS_CHANNEL_IND_PEER_STRUCT,
            sat_open_gprs_channel_ind_peer_struct,
            sat_open_gprs_channel_ind_peer_ptr,
            smu_ilm_ptr->peer_buff_ptr);

        l4csmu_sat_open_channel_ind_peer_data.no_alpha_id = sat_open_gprs_channel_ind_peer_ptr->no_alpha_id;
        l4csmu_sat_open_channel_ind_peer_data.dcs_of_alpha_id = sat_open_gprs_channel_ind_peer_ptr->dcs_of_alpha_id;
        l4csmu_sat_open_channel_ind_peer_data.is_alpha_id_present =
            sat_open_gprs_channel_ind_peer_ptr->is_alpha_id_present;

        if (sat_open_gprs_channel_ind_peer_ptr->is_alpha_id_present &&
            l4csmu_sat_open_channel_ind_peer_data.no_alpha_id == 0)
        {
            l4csmu_sat_open_channel_ind_peer_data.alpha_id = NULL;
        }
        else if (sat_open_gprs_channel_ind_peer_ptr->is_alpha_id_present)
        {
            l4csmu_sat_open_channel_ind_peer_data.alpha_id = get_ctrl_buffer(sat_open_gprs_channel_ind_peer_ptr->no_alpha_id);
            kal_mem_cpy(
                l4csmu_sat_open_channel_ind_peer_data.alpha_id,
                sat_open_gprs_channel_ind_peer_ptr->alpha_id,
                sat_open_gprs_channel_ind_peer_ptr->no_alpha_id);
        }
        else
        {
            l4csmu_sat_open_channel_ind_peer_data.alpha_id = NULL;
        }

        SMU_PACK(
            l4csmu_sat_open_channel_ind_peer_struct_pack,   /* ASN only */
            l4csmu_sat_open_channel_ind_peer_struct_bits,   /* ASN only */
            MCD_L4CSMU_SAT_OPEN_CHANNEL_IND_PEER_STRUCT,    /* MCD only */
            &l4csmu_sat_open_channel_ind_peer_data,
            &peer_ptr,
            0,
            0);
        smu_send_ilm(
            MOD_L4C,
            SMU_L4C_SAP,
            MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_IND,
            l4csmu_sat_open_channel_ind_ptr,
            peer_ptr);
        smu_free_ctrl_buffer(l4csmu_sat_open_channel_ind_peer_data.alpha_id);

        /* Save all info to context */
        kal_mem_cpy(this_smu->sate_channel[CH].cmd_detail, sat_open_gprs_channel_ind_ptr->cmd_detail, 5);
        this_smu->sate_channel[CH].bearer = sat_open_gprs_channel_ind_ptr->bearer;
        kal_mem_cpy(
            &(this_smu->sate_channel[CH].gprs_bearer_para),
            &(sat_open_gprs_channel_ind_ptr->gprs_bearer),
            sizeof(sat_gprs_bearer_para_struct));

        /* Immediate link */
        if ((this_smu->sate_channel[CH].cmd_detail[4] & 0x01) == 0x01)
        {
            this_smu->sate_channel[CH].is_immediate_link = KAL_TRUE;
        }
        else
        {
            this_smu->sate_channel[CH].is_immediate_link = KAL_FALSE;
        }

        if (sat_open_gprs_channel_ind_ptr->buffer_size > SAT_MAX_BUFFER_SIZE)
        {
            sat_open_gprs_channel_ind_ptr->buffer_size = SAT_MAX_BUFFER_SIZE;
            this_smu->sate_channel[CH].is_cmd_modified = KAL_TRUE;
        }
        this_smu->sate_channel[CH].buffer_size = sat_open_gprs_channel_ind_ptr->buffer_size;

        /* set APN */
        smu_free_ctrl_buffer(this_smu->sate_channel[CH].apn);
        this_smu->sate_channel[CH].no_apn = sat_open_gprs_channel_ind_ptr->apn_length;
        if (sat_open_gprs_channel_ind_ptr->apn_length != 0)
        {
            this_smu->sate_channel[CH].apn = get_ctrl_buffer(sat_open_gprs_channel_ind_ptr->apn_length);
            kal_mem_cpy(
                this_smu->sate_channel[CH].apn,
                sat_open_gprs_channel_ind_ptr->apn,
                sat_open_gprs_channel_ind_ptr->apn_length);
        }
        else
        {
            this_smu->sate_channel[CH].apn = NULL;
        }

        /* set username */
        smu_free_ctrl_buffer(this_smu->sate_channel[CH].username);      /* free mem before allocate mem */
        this_smu->sate_channel[CH].no_username = sat_open_gprs_channel_ind_ptr->no_username;
        if (sat_open_gprs_channel_ind_ptr->no_username != 0)
        {
            this_smu->sate_channel[CH].username = get_ctrl_buffer(sat_open_gprs_channel_ind_ptr->no_username);
            kal_mem_cpy(
                this_smu->sate_channel[CH].username,
                sat_open_gprs_channel_ind_ptr->username,
                sat_open_gprs_channel_ind_ptr->no_username);
            this_smu->sate_channel[CH].dcs_of_username = sat_open_gprs_channel_ind_ptr->dcs_of_username;
        }
        else
        {
            this_smu->sate_channel[CH].username = NULL;
        }

        /* set passwd */
        smu_free_ctrl_buffer(this_smu->sate_channel[CH].passwd);        /* free mem before allocate mem */
        this_smu->sate_channel[CH].no_passwd = sat_open_gprs_channel_ind_ptr->no_passwd;
        if (sat_open_gprs_channel_ind_ptr->no_passwd != 0)
        {
            this_smu->sate_channel[CH].passwd = get_ctrl_buffer(sat_open_gprs_channel_ind_ptr->no_passwd);
            kal_mem_cpy(
                this_smu->sate_channel[CH].passwd,
                sat_open_gprs_channel_ind_ptr->passwd,
                sat_open_gprs_channel_ind_ptr->no_passwd);
            this_smu->sate_channel[CH].dcs_of_passwd = sat_open_gprs_channel_ind_ptr->dcs_of_passwd;
        }
        else
        {
            this_smu->sate_channel[CH].passwd = NULL;
        }

        this_smu->sate_channel[CH].protocol_type = sat_open_gprs_channel_ind_ptr->protocol_type;
        this_smu->sate_channel[CH].port_num = sat_open_gprs_channel_ind_ptr->port_num;

        /* set local address */
        smu_free_ctrl_buffer(this_smu->sate_channel[CH].local_addr);
        this_smu->sate_channel[CH].no_local_addr = sat_open_gprs_channel_ind_ptr->no_local_addr;
        if (sat_open_gprs_channel_ind_ptr->no_local_addr != 0)
        {
            this_smu->sate_channel[CH].local_addr = get_ctrl_buffer(sat_open_gprs_channel_ind_ptr->no_local_addr);
            kal_mem_cpy(
                this_smu->sate_channel[CH].local_addr,
                sat_open_gprs_channel_ind_ptr->local_addr,
                sat_open_gprs_channel_ind_ptr->no_local_addr);
        }
        else
        {
            this_smu->sate_channel[CH].local_addr = NULL;
        }

        /* set destination address */
        smu_free_ctrl_buffer(this_smu->sate_channel[CH].dest_addr);
        this_smu->sate_channel[CH].no_dest_addr = sat_open_gprs_channel_ind_ptr->no_dest_addr;
        if (sat_open_gprs_channel_ind_ptr->no_dest_addr != 0)
        {
            this_smu->sate_channel[CH].dest_addr = get_ctrl_buffer(sat_open_gprs_channel_ind_ptr->no_dest_addr);
            kal_mem_cpy(
                this_smu->sate_channel[CH].dest_addr,
                sat_open_gprs_channel_ind_ptr->dest_addr,
                sat_open_gprs_channel_ind_ptr->no_dest_addr);
        }
        else
        {
            this_smu->sate_channel[CH].dest_addr = NULL;
        }

    }
    else    /* No Channel available */
    {
        sat_open_gprs_channel_res_struct *sat_open_gprs_channel_res_ptr;

        sat_open_gprs_channel_res_ptr = (sat_open_gprs_channel_res_struct*)
            construct_local_para(sizeof(sat_open_gprs_channel_res_struct), TD_UL);
        kal_trace(TRACE_STATE, GPRS_CHANNEL_NOT_AVAILABLE);

        kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, sat_open_gprs_channel_ind_ptr->cmd_detail, 5);
        sat_open_gprs_channel_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
        sat_open_gprs_channel_res_ptr->cause = SAT_BIP_NO_CHANNEL_AVAILABLE;
        kal_mem_cpy(
            &(sat_open_gprs_channel_res_ptr->bearer_para),
            &(sat_open_gprs_channel_ind_ptr->gprs_bearer),
            sizeof(sat_gprs_bearer_para_struct));
        /* sat_open_gprs_channel_res_ptr->bearer = SAT_GPRS_BEARER; */
        sat_open_gprs_channel_res_ptr->buffer_size = sat_open_gprs_channel_ind_ptr->buffer_size;
        sat_open_gprs_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
        sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES, sat_open_gprs_channel_res_ptr, NULL);
    }
}


/*****************************************************************************
 * FUNCTION
 *  sat_open_server_mode_channel_ind_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void sat_open_server_mode_channel_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* Message from SIM */
    sat_open_server_mode_channel_ind_struct *sat_open_server_mode_channel_ind_ptr;
    sat_open_server_mode_channel_ind_peer_struct *sat_open_server_mode_channel_ind_peer_ptr;
    kal_uint16 sat_open_server_mode_channel_ind_len = 0;

    /* Message to L4C  */
    l4csmu_sat_open_channel_ind_struct *l4csmu_sat_open_channel_ind_ptr;
    l4csmu_sat_open_channel_ind_peer_struct l4csmu_sat_open_channel_ind_peer_data;
    peer_buff_struct *peer_ptr = NULL;

    kal_uint8 CH;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SAT_OPEN_SERVER_MODE_CHANNEL_IND_HANDLER);

    sat_open_server_mode_channel_ind_ptr = (sat_open_server_mode_channel_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_open_server_mode_channel_ind_len);

//    this_smu->sate_current_channel = CH = sate_get_available_channel();
    CH = sate_get_available_channel();

    if(0 == this_smu->sate_app_id)
    {
        sat_register_sate_app_id();
    }

    debug_show_channel_socket_table();

    kal_trace(TRACE_FUNC, CHANNEL_ID, CH);

    /* No channel is opened. ie. channel is available */
    if (CH != 0xFF && this_smu->sate_channel[CH].channel_id == SAT_NO_CHANNEL)
    {
        kal_trace(TRACE_STATE, SERVER_MODE_CHANNEL_AVAILABLE);
        l4csmu_sat_open_channel_ind_ptr = (l4csmu_sat_open_channel_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_open_channel_ind_struct), TD_UL);

        kal_mem_cpy(l4csmu_sat_open_channel_ind_ptr->cmd_detail, sat_open_server_mode_channel_ind_ptr->cmd_detail, 5);

        l4csmu_sat_open_channel_ind_ptr->is_icon_available = sat_open_server_mode_channel_ind_ptr->is_icon_available;
        if (sat_open_server_mode_channel_ind_ptr->is_icon_available == KAL_TRUE)
        {
            kal_mem_cpy(
                &(l4csmu_sat_open_channel_ind_ptr->icon_info),
                &(sat_open_server_mode_channel_ind_ptr->icon_info),
                sizeof(sat_icon_struct));
        }

        l4csmu_sat_open_channel_ind_ptr->bearer_type = sat_open_server_mode_channel_ind_ptr->bearer;

        SMU_UNPACK(
            sat_open_server_mode_channel_ind_peer_struct_unpack,
            MCD_SAT_OPEN_SERVER_MODE_CHANNEL_IND_PEER_STRUCT,
            sat_open_server_mode_channel_ind_peer_struct,
            sat_open_server_mode_channel_ind_peer_ptr,
            smu_ilm_ptr->peer_buff_ptr);

        l4csmu_sat_open_channel_ind_peer_data.no_alpha_id = sat_open_server_mode_channel_ind_peer_ptr->no_alpha_id;
        l4csmu_sat_open_channel_ind_peer_data.dcs_of_alpha_id =
            sat_open_server_mode_channel_ind_peer_ptr->dcs_of_alpha_id;
        l4csmu_sat_open_channel_ind_peer_data.is_alpha_id_present =
            sat_open_server_mode_channel_ind_peer_ptr->is_alpha_id_present;

        if (sat_open_server_mode_channel_ind_peer_ptr->is_alpha_id_present &&
            l4csmu_sat_open_channel_ind_peer_data.no_alpha_id == 0)
        {
            l4csmu_sat_open_channel_ind_peer_data.alpha_id = NULL;
        }
        else if (sat_open_server_mode_channel_ind_peer_ptr->is_alpha_id_present)
        {
            l4csmu_sat_open_channel_ind_peer_data.alpha_id = get_ctrl_buffer(sat_open_server_mode_channel_ind_peer_ptr->no_alpha_id);
            kal_mem_cpy(
                l4csmu_sat_open_channel_ind_peer_data.alpha_id,
                sat_open_server_mode_channel_ind_peer_ptr->alpha_id,
                sat_open_server_mode_channel_ind_peer_ptr->no_alpha_id);
        }
        else
        {
            l4csmu_sat_open_channel_ind_peer_data.alpha_id = NULL;
        }

        SMU_PACK(
            l4csmu_sat_open_channel_ind_peer_struct_pack,   /* ASN only */
            l4csmu_sat_open_channel_ind_peer_struct_bits,   /* ASN only */
            MCD_L4CSMU_SAT_OPEN_CHANNEL_IND_PEER_STRUCT,    /* MCD only */
            &l4csmu_sat_open_channel_ind_peer_data,
            &peer_ptr,
            0,
            0);

        smu_send_ilm(
            MOD_L4C,
            SMU_L4C_SAP,
            MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_IND,
            l4csmu_sat_open_channel_ind_ptr,
            peer_ptr);

        smu_free_ctrl_buffer(l4csmu_sat_open_channel_ind_peer_data.alpha_id);

        /* Save all info to context */
        kal_mem_cpy(this_smu->sate_channel[CH].cmd_detail, sat_open_server_mode_channel_ind_ptr->cmd_detail, 5);

        /* Immediate link */
        if ((this_smu->sate_channel[CH].cmd_detail[4] & 0x01) == 0x01)
        {
            this_smu->sate_channel[CH].is_immediate_link = KAL_TRUE;
        }
        else
        {
            this_smu->sate_channel[CH].is_immediate_link = KAL_FALSE;
        }

        /* auto reconnection */
        if ((this_smu->sate_channel[CH].cmd_detail[4] & 0x02) == 0x02)
        {
            this_smu->sate_channel[CH].is_auto_reconnetion = KAL_TRUE;
        }
        else
        {
            this_smu->sate_channel[CH].is_auto_reconnetion = KAL_FALSE;
        }

        this_smu->sate_channel[CH].bearer = sat_open_server_mode_channel_ind_ptr->bearer;

        if (sat_open_server_mode_channel_ind_ptr->buffer_size > SAT_MAX_BUFFER_SIZE)
        {
            sat_open_server_mode_channel_ind_ptr->buffer_size = SAT_MAX_BUFFER_SIZE;
            this_smu->sate_channel[CH].is_cmd_modified = KAL_TRUE;
        }
        this_smu->sate_channel[CH].buffer_size = sat_open_server_mode_channel_ind_ptr->buffer_size;
        this_smu->sate_channel[CH].port_num = sat_open_server_mode_channel_ind_ptr->port_num;

        /* for send_data_ind usage */
        this_smu->sate_channel[CH].is_immediate_link = KAL_TRUE;

    }
    else    /* No Channel available */
    {
        sat_open_server_mode_channel_res_struct *sat_open_server_mode_channel_res_ptr;

        sat_open_server_mode_channel_res_ptr = (sat_open_server_mode_channel_res_struct*)
            construct_local_para(sizeof(sat_open_server_mode_channel_res_struct), TD_UL);

        kal_trace(TRACE_STATE, SERVER_MODE_CHANNEL_NOT_AVAILABLE);
        kal_mem_cpy(
            sat_open_server_mode_channel_res_ptr->cmd_detail,
            sat_open_server_mode_channel_ind_ptr->cmd_detail,
            5);
        sat_open_server_mode_channel_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
        sat_open_server_mode_channel_res_ptr->cause = SAT_BIP_NO_CHANNEL_AVAILABLE;

        sat_open_server_mode_channel_res_ptr->bearer = SAT_SERVER_MODE_BEARER;
        sat_open_server_mode_channel_res_ptr->buffer_size = sat_open_server_mode_channel_ind_ptr->buffer_size;
        sat_open_server_mode_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
        sat_open_server_mode_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

        smu_send_ilm(
            MOD_SIM,
            PS_SIM_SAP,
            MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_RES,
            sat_open_server_mode_channel_res_ptr,
            NULL);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_open_channel_req_handler
 * DESCRIPTION
 *  
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void l4csmu_sat_open_channel_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* Message from L4C */
    l4csmu_sat_open_channel_req_struct *l4csmu_sat_open_channel_req_ptr;
    kal_uint16 l4csat_csm_open_csd_req_len = 0;

    /* Message back to L4C */
    l4csmu_sat_open_channel_cnf_struct *l4csmu_sat_open_channel_cnf_ptr;

    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    l4csmu_sat_open_channel_req_ptr = (l4csmu_sat_open_channel_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csat_csm_open_csd_req_len);

    kal_trace(TRACE_FUNC, L4CSMU_SAT_OPEN_CHANNEL_REQ_HANDLER);
    kal_trace(TRACE_FUNC, CHANNEL_ID, CH);
    debug_show_channel_socket_table();

    /* User denied the proactive command */
    if (l4csmu_sat_open_channel_req_ptr->res == SAT_USER_DID_NOT_ACCEPT_THE_PROACTIVE_CMD)
    {

        kal_trace(TRACE_STATE, USER_DENIED_PROACTIVE_CMD);
        /* Inform MMI that user denied the comand */
        l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
            construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);

        l4csmu_sat_open_channel_cnf_ptr->res = SAT_USER_DID_NOT_ACCEPT_THE_PROACTIVE_CMD;
        l4csmu_sat_open_channel_cnf_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF, l4csmu_sat_open_channel_cnf_ptr, NULL);

        if (this_smu->sate_channel[CH].bearer == SAT_CSD_BEARER)
        {
            /* Message to SIM */
            sat_open_csd_channel_res_struct *sat_open_csd_channel_res_ptr;

            sat_open_csd_channel_res_ptr = (sat_open_csd_channel_res_struct*)
                construct_local_para(sizeof(sat_open_csd_channel_res_struct), TD_DL);
            kal_mem_cpy(sat_open_csd_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);
            sat_open_csd_channel_res_ptr->res = SAT_USER_DID_NOT_ACCEPT_THE_PROACTIVE_CMD;
            sat_open_csd_channel_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;
            sat_open_csd_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
            sat_open_csd_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            sat_open_csd_channel_res_ptr->bearer = SAT_CSD_BEARER;
            sat_open_csd_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
            kal_mem_cpy(
                &(sat_open_csd_channel_res_ptr->bearer_para),
                &(this_smu->sate_channel[CH].csd_bearer_para),
                sizeof(sat_csd_bearer_para_struct));

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_CSD_CHANNEL_RES, sat_open_csd_channel_res_ptr, NULL);
        }
        else if (this_smu->sate_channel[CH].bearer == SAT_GPRS_BEARER)
        {
            /* Message to SIM */
            sat_open_gprs_channel_res_struct *sat_open_gprs_channel_res_ptr;

            sat_open_gprs_channel_res_ptr = (sat_open_gprs_channel_res_struct*)
                construct_local_para(sizeof(sat_open_gprs_channel_res_struct), TD_DL);
            kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);
            sat_open_gprs_channel_res_ptr->res = SAT_USER_DID_NOT_ACCEPT_THE_PROACTIVE_CMD;
            sat_open_gprs_channel_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;
            sat_open_gprs_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
            sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            sat_open_gprs_channel_res_ptr->bearer = SAT_GPRS_BEARER;
            sat_open_gprs_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
            kal_mem_cpy(
                &(sat_open_gprs_channel_res_ptr->bearer_para),
                &(this_smu->sate_channel[CH].gprs_bearer_para),
                sizeof(sat_gprs_bearer_para_struct));

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES, sat_open_gprs_channel_res_ptr, NULL);
        }
        else if (this_smu->sate_channel[CH].bearer == SAT_SERVER_MODE_BEARER)
        {
            /* Message to SIM */
            sat_open_server_mode_channel_res_struct *sat_open_server_mode_channel_res_ptr;

            sat_open_server_mode_channel_res_ptr = (sat_open_server_mode_channel_res_struct*)
                construct_local_para(sizeof(sat_open_server_mode_channel_res_struct), TD_DL);
            kal_mem_cpy(sat_open_server_mode_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);
            sat_open_server_mode_channel_res_ptr->res = SAT_USER_DID_NOT_ACCEPT_THE_PROACTIVE_CMD;
            sat_open_server_mode_channel_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;
            sat_open_server_mode_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
            sat_open_server_mode_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            sat_open_server_mode_channel_res_ptr->bearer = SAT_SERVER_MODE_BEARER;
            sat_open_server_mode_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

            smu_send_ilm(
                MOD_SIM,
                PS_SIM_SAP,
                MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_RES,
                sat_open_server_mode_channel_res_ptr,
                NULL);
        }
        else
        {
            ASSERT(0);  /* should be raw socket */
        }
        /*
         *  mtk02374 20090724 MAUI_01765491
         *  Clean cmd_detail after sending respnose
         */
        kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);		
    }
    else if (l4csmu_sat_open_channel_req_ptr->res == SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD)
    {

        /* Inform MMI */
        l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
            construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);

        l4csmu_sat_open_channel_cnf_ptr->res = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;
        l4csmu_sat_open_channel_cnf_ptr->cause = l4csmu_sat_open_channel_req_ptr->additional_info;

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF, l4csmu_sat_open_channel_cnf_ptr, NULL);

        if (this_smu->sate_channel[CH].bearer == SAT_CSD_BEARER)
        {
            /* Message to SIM */
            sat_open_csd_channel_res_struct *sat_open_csd_channel_res_ptr;

            sat_open_csd_channel_res_ptr = (sat_open_csd_channel_res_struct*)
                construct_local_para(sizeof(sat_open_csd_channel_res_struct), TD_DL);
            kal_mem_cpy(sat_open_csd_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);
            sat_open_csd_channel_res_ptr->res = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;
            sat_open_csd_channel_res_ptr->cause = l4csmu_sat_open_channel_req_ptr->additional_info;
            sat_open_csd_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
            sat_open_csd_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            sat_open_csd_channel_res_ptr->bearer = SAT_CSD_BEARER;
            sat_open_csd_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
            kal_mem_cpy(
                &(sat_open_csd_channel_res_ptr->bearer_para),
                &(this_smu->sate_channel[CH].csd_bearer_para),
                sizeof(sat_csd_bearer_para_struct));

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_CSD_CHANNEL_RES, sat_open_csd_channel_res_ptr, NULL);
        }
        else if (this_smu->sate_channel[CH].bearer == SAT_GPRS_BEARER)
        {
            /* Message to SIM */
            sat_open_gprs_channel_res_struct *sat_open_gprs_channel_res_ptr;

            sat_open_gprs_channel_res_ptr = (sat_open_gprs_channel_res_struct*)
                construct_local_para(sizeof(sat_open_gprs_channel_res_struct), TD_DL);
            kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);
            sat_open_gprs_channel_res_ptr->res = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;
            sat_open_gprs_channel_res_ptr->cause = l4csmu_sat_open_channel_req_ptr->additional_info;
            sat_open_gprs_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
            sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            sat_open_gprs_channel_res_ptr->bearer = SAT_GPRS_BEARER;
            sat_open_gprs_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
            kal_mem_cpy(
                &(sat_open_gprs_channel_res_ptr->bearer_para),
                &(this_smu->sate_channel[CH].gprs_bearer_para),
                sizeof(sat_gprs_bearer_para_struct));

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES, sat_open_gprs_channel_res_ptr, NULL);
        }
        else if (this_smu->sate_channel[CH].bearer == SAT_SERVER_MODE_BEARER)
        {
            /* Message to SIM */
            sat_open_server_mode_channel_res_struct *sat_open_server_mode_channel_res_ptr;

            sat_open_server_mode_channel_res_ptr = (sat_open_server_mode_channel_res_struct*)
                construct_local_para(sizeof(sat_open_server_mode_channel_res_struct), TD_DL);
            kal_mem_cpy(sat_open_server_mode_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);
            sat_open_server_mode_channel_res_ptr->res = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;
            sat_open_server_mode_channel_res_ptr->cause = l4csmu_sat_open_channel_req_ptr->additional_info;
            sat_open_server_mode_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
            sat_open_server_mode_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            sat_open_server_mode_channel_res_ptr->bearer = SAT_SERVER_MODE_BEARER;
            sat_open_server_mode_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

            smu_send_ilm(
                MOD_SIM,
                PS_SIM_SAP,
                MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_RES,
                sat_open_server_mode_channel_res_ptr,
                NULL);
        }
        else
        {
            ASSERT(0);  /* should be raw socket. */
        }
        /*
         *  mtk02374 20090724 MAUI_01765491
         *  Clean cmd_detail after sending respnose
         */
        kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);		
    }
    else    /* User accept the proactive command */
    {
        if (this_smu->sate_channel[CH].bearer == SAT_SERVER_MODE_BEARER)
        {
            sat_open_server_mode_channel_handler(sat_set_server_mode_socket());
        }
        else
        {
            sat_set_account_profile();
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  sat_open_server_mode_channel_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void sat_open_server_mode_channel_handler(kal_bool result)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sat_open_server_mode_channel_res_struct *sat_open_server_mode_channel_res_ptr;
    l4csmu_sat_open_channel_cnf_struct *l4csmu_sat_open_channel_cnf_ptr;
    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    sat_open_server_mode_channel_res_ptr = (sat_open_server_mode_channel_res_struct*)
        construct_local_para(sizeof(sat_open_server_mode_channel_res_struct), TD_UL);

    l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
        construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);

    kal_trace(TRACE_FUNC, SAT_OPEN_SERVER_MODE_CHANNEL_HANDLER);
    kal_trace(TRACE_FUNC, CHANNEL_ID, CH);
    debug_show_channel_socket_table();

    /* UICC server mode LISTEN state success */
    if (result == KAL_TRUE)
    {
        /* Allocate buffer and channel ID */
        this_smu->sate_channel[CH].satce_buffer = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
        this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;

        /* Allocate rx buffer and channel ID */
        this_smu->sate_channel[CH].satce_buffer_rx = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
        this_smu->sate_channel[CH].avail_buf_size_rx = this_smu->sate_channel[CH].buffer_size;

        /* Build terminal response */
        /* To SIM */
        sat_open_server_mode_channel_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;

        kal_mem_cpy(sat_open_server_mode_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        sat_open_server_mode_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;
        sat_open_server_mode_channel_res_ptr->ch_status[0] = CH | TCP_IN_LISTEN_STATE;   //mtk01488
        sat_open_server_mode_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
        sat_open_server_mode_channel_res_ptr->bearer = SAT_SERVER_MODE_BEARER;
        sat_open_server_mode_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

        /* Save to context */
        this_smu->sate_channel[CH].channel_status[0] = CH | TCP_IN_LISTEN_STATE;   //mtk01488
        this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
        this_smu->sate_channel[CH].channel_id = CH | DEVICE_IDENTITY_CHANNEL;

        smu_send_ilm(
            MOD_SIM,
            PS_SIM_SAP,
            MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_RES,
            sat_open_server_mode_channel_res_ptr,
            NULL);

        /*
         *  mtk02374 20090724 MAUI_01765491
         *  Clean cmd_detail after sending respnose
         */
        kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);	

        /* Inform MMI setup link success */
        /* To MMI notify *//* Send CNF message to MMI */
        l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
        l4csmu_sat_open_channel_cnf_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF, l4csmu_sat_open_channel_cnf_ptr, NULL);
    }

    /* UICC server mode LISTEN state falied */
    else
    {
        /* build terminal response with ME currently unable to process command, 
           and inform MMI setup link failed */
        /* //cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */

        sat_open_server_mode_channel_res_ptr->res = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;

        kal_mem_cpy(sat_open_server_mode_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        sat_open_server_mode_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

        /* If link failed, channel status no need to bring back to SIM 
           under NW currently unable to process command, 
           but channel not available */
        sat_open_server_mode_channel_res_ptr->ch_status[0] = TCP_IN_CLOSED_STATE;   //mtk01488
        sat_open_server_mode_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
        sat_open_server_mode_channel_res_ptr->bearer = SAT_SERVER_MODE_BEARER;
        sat_open_server_mode_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

        smu_free_account(CH);
        smu_send_ilm(
            MOD_SIM,
            PS_SIM_SAP,
            MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_RES,
            sat_open_server_mode_channel_res_ptr,
            NULL);

        /* Inform MMI setup link failed */
        /* To MMI notify *//* Send CNF message to MMI */
        l4csmu_sat_open_channel_cnf_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;
        l4csmu_sat_open_channel_cnf_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF, l4csmu_sat_open_channel_cnf_ptr, NULL);
    }
}


/*****************************************************************************
 * FUNCTION
 *  sat_set_account_profile
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void sat_set_account_profile(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SAT_SET_ACCOUNT_PROFILE);

    /* CSD */
    if (this_smu->sate_channel[CH].bearer == SAT_CSD_BEARER)
    {
        l4csmu_sat_set_csd_prof_ind_struct *l4csmu_sat_set_csd_prof_ind_ptr;

        l4csmu_sat_set_csd_prof_ind_ptr = (l4csmu_sat_set_csd_prof_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_set_csd_prof_ind_struct), TD_UL);

        l4csmu_sat_set_csd_prof_ind_ptr->nw_acct_id = CBM_SAT_CSD_ACCT_ID;

        l4csmu_sat_set_csd_prof_ind_ptr->size_of_address = this_smu->sate_channel[CH].size_of_address;
        if (this_smu->sate_channel[CH].size_of_address == 0)
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_addr_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_addr_valid = KAL_TRUE;
            if(this_smu->sate_channel[CH].size_of_address > MAX_SIM_ADDR_BCD_LEN)
            {
                ASSERT(0);
            }				
            kal_mem_cpy(
                l4csmu_sat_set_csd_prof_ind_ptr->addr,
                this_smu->sate_channel[CH].addr,
                this_smu->sate_channel[CH].size_of_address);
        }

        l4csmu_sat_set_csd_prof_ind_ptr->size_of_subaddr = this_smu->sate_channel[CH].size_of_subaddr;
        if (this_smu->sate_channel[CH].size_of_subaddr == 0)
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_subaddr_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_subaddr_valid = KAL_TRUE;
            if(this_smu->sate_channel[CH].size_of_subaddr > MAX_SIM_ADDR_BCD_LEN)                         
            {
                ASSERT(0);
            }				
            kal_mem_cpy(
                l4csmu_sat_set_csd_prof_ind_ptr->subaddr,
                this_smu->sate_channel[CH].subaddr,
                this_smu->sate_channel[CH].size_of_subaddr);
        }

        l4csmu_sat_set_csd_prof_ind_ptr->no_username = this_smu->sate_channel[CH].no_username;
        if (this_smu->sate_channel[CH].no_username == 0)
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_username_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_username_valid = KAL_TRUE;
            kal_mem_cpy(
                l4csmu_sat_set_csd_prof_ind_ptr->username,
                this_smu->sate_channel[CH].username,
                this_smu->sate_channel[CH].no_username);
            l4csmu_sat_set_csd_prof_ind_ptr->dcs_of_username = this_smu->sate_channel[CH].dcs_of_username;
        }

        l4csmu_sat_set_csd_prof_ind_ptr->no_passwd = this_smu->sate_channel[CH].no_passwd;
        if (this_smu->sate_channel[CH].no_passwd == 0)
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_passwd_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_passwd_valid = KAL_TRUE;
            kal_mem_cpy(
                l4csmu_sat_set_csd_prof_ind_ptr->passwd,
                this_smu->sate_channel[CH].passwd,
                this_smu->sate_channel[CH].no_passwd);
            l4csmu_sat_set_csd_prof_ind_ptr->dcs_of_passwd = this_smu->sate_channel[CH].dcs_of_passwd;
        }

        l4csmu_sat_set_csd_prof_ind_ptr->no_local_addr = this_smu->sate_channel[CH].no_local_addr;
        if (this_smu->sate_channel[CH].no_local_addr == 0)
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_local_addr_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_local_addr_valid = KAL_TRUE;
            kal_mem_cpy(
                l4csmu_sat_set_csd_prof_ind_ptr->local_addr,
                this_smu->sate_channel[CH].local_addr,
                this_smu->sate_channel[CH].no_local_addr);
        }

        l4csmu_sat_set_csd_prof_ind_ptr->no_dest_addr = this_smu->sate_channel[CH].no_dest_addr;
        if (this_smu->sate_channel[CH].no_dest_addr == 0)
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_dest_addr_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_csd_prof_ind_ptr->is_dest_addr_valid = KAL_TRUE;
            kal_mem_cpy(
                l4csmu_sat_set_csd_prof_ind_ptr->dest_addr,
                this_smu->sate_channel[CH].dest_addr,
                this_smu->sate_channel[CH].no_dest_addr);
        }

        kal_mem_cpy(
            &(l4csmu_sat_set_csd_prof_ind_ptr->csd_bearer),
            &(this_smu->sate_channel[CH].csd_bearer_para),
            sizeof(sat_csd_bearer_para_struct));

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_SET_CSD_PROF_IND, l4csmu_sat_set_csd_prof_ind_ptr, NULL);
    }
    /* GPRS */
    else if (this_smu->sate_channel[CH].bearer == SAT_GPRS_BEARER)
    {
        l4csmu_sat_set_gprs_prof_ind_struct *l4csmu_sat_set_gprs_prof_ind_ptr;

        l4csmu_sat_set_gprs_prof_ind_ptr = (l4csmu_sat_set_gprs_prof_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_set_gprs_prof_ind_struct), TD_UL);

        l4csmu_sat_set_gprs_prof_ind_ptr->nw_acct_id = CBM_SAT_PS_ACCT_ID;

        l4csmu_sat_set_gprs_prof_ind_ptr->apn_length = this_smu->sate_channel[CH].no_apn;
        if (this_smu->sate_channel[CH].no_apn == 0)
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_apn_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_apn_valid = KAL_TRUE;
            kal_mem_cpy(
                l4csmu_sat_set_gprs_prof_ind_ptr->apn,
                this_smu->sate_channel[CH].apn,
                this_smu->sate_channel[CH].no_apn);
        }

        l4csmu_sat_set_gprs_prof_ind_ptr->no_username = this_smu->sate_channel[CH].no_username;
        if (this_smu->sate_channel[CH].no_username == 0)
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_username_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_username_valid = KAL_TRUE;
            kal_mem_cpy(
                l4csmu_sat_set_gprs_prof_ind_ptr->username,
                this_smu->sate_channel[CH].username,
                this_smu->sate_channel[CH].no_username);
            l4csmu_sat_set_gprs_prof_ind_ptr->dcs_of_username = this_smu->sate_channel[CH].dcs_of_username;
        }

        l4csmu_sat_set_gprs_prof_ind_ptr->no_passwd = this_smu->sate_channel[CH].no_passwd;
        if (this_smu->sate_channel[CH].no_passwd == 0)
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_passwd_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_passwd_valid = KAL_TRUE;
            kal_mem_cpy(
                l4csmu_sat_set_gprs_prof_ind_ptr->passwd,
                this_smu->sate_channel[CH].passwd,
                this_smu->sate_channel[CH].no_passwd);
            l4csmu_sat_set_gprs_prof_ind_ptr->dcs_of_passwd = this_smu->sate_channel[CH].dcs_of_passwd;
        }

        l4csmu_sat_set_gprs_prof_ind_ptr->no_local_addr = this_smu->sate_channel[CH].no_local_addr;
        if (this_smu->sate_channel[CH].no_local_addr == 0)
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_local_addr_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_local_addr_valid = KAL_TRUE;
            kal_mem_cpy(
                l4csmu_sat_set_gprs_prof_ind_ptr->local_addr,
                this_smu->sate_channel[CH].local_addr,
                this_smu->sate_channel[CH].no_local_addr);
        }

        l4csmu_sat_set_gprs_prof_ind_ptr->no_dest_addr = this_smu->sate_channel[CH].no_dest_addr;
        if (this_smu->sate_channel[CH].no_dest_addr == 0)
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_dest_addr_valid = KAL_FALSE;
        }
        else
        {
            l4csmu_sat_set_gprs_prof_ind_ptr->is_dest_addr_valid = KAL_TRUE;
            kal_mem_cpy(
                l4csmu_sat_set_gprs_prof_ind_ptr->dest_addr,
                this_smu->sate_channel[CH].dest_addr,
                this_smu->sate_channel[CH].no_dest_addr);
        }

        kal_mem_cpy(
            &(l4csmu_sat_set_gprs_prof_ind_ptr->gprs_bearer),
            &(this_smu->sate_channel[CH].gprs_bearer_para),
            sizeof(sat_gprs_bearer_para_struct));

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_SET_GPRS_PROF_IND, l4csmu_sat_set_gprs_prof_ind_ptr, NULL);
    }
    else
    {
        ASSERT(0);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_set_csd_prof_res_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_set_csd_prof_res_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* Message from L4C */
    l4csmu_sat_set_csd_prof_res_struct *l4csmu_sat_set_csd_prof_res_ptr;

    /* Message to SIM */
    sat_open_csd_channel_res_struct *sat_open_csd_channel_res_ptr;

    /* Message to L4C */
    l4csmu_sat_open_channel_cnf_struct *l4csmu_sat_open_channel_cnf_ptr;

    kal_uint16 l4csmu_sat_set_csd_prof_res_len;
    kal_bool ret = KAL_FALSE;
    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    l4csmu_sat_set_csd_prof_res_ptr = (l4csmu_sat_set_csd_prof_res_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_sat_set_csd_prof_res_len);

    kal_trace(TRACE_FUNC, L4CSMU_SAT_SET_CSD_PROF_RES_HANDLER);

    this_smu->sate_channel[CH].socket_context.account_id = CBM_SAT_CSD_ACCT_ID;

    if (l4csmu_sat_set_csd_prof_res_ptr->res == KAL_TRUE)
    {
        /* Immediate Link */
        if (this_smu->sate_channel[CH].is_immediate_link == KAL_TRUE)
        {
            kal_trace(TRACE_STATE, IMMEDIATE_LINK);
            /* Check if is allowed retry */
            check_retry_allowed();

            /* [#] this_smu->sate_channel[CH].socket_context is global veraible, 
               dont need to call by reference, change it later */
            /* Set up the link */
            switch (this_smu->sate_channel[CH].protocol_type)
            {
                case SAT_UDP_PROTOCOL:
                    ret = attemp_setup_udp_link(&(this_smu->sate_channel[CH].socket_context));
                    break;
                case SAT_TCP_PROTOCOL:
                    ret = attemp_setup_tcp_link(&(this_smu->sate_channel[CH].socket_context));
                    break;
                default:    /* raw_socket */
                    ret = attemp_setup_raw_socket(&(this_smu->sate_channel[CH].socket_context));
                    break;
            }

            /* Socket configuration is error */
            if (ret == KAL_FALSE)
            {
                /* Build terminal response with network currently unable to process command */
                kal_trace(TRACE_STATE, CREATE_CSD_SOCKET_FAILED);

                if (this_smu->sate_channel[CH].socket_context.socket_id > 0)
                {
                    kal_trace(TRACE_STATE, SOCKET_GREATER_ZERO);
                    soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                    /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */
                }

                /* To SIM */
                sat_open_csd_channel_res_ptr = (sat_open_csd_channel_res_struct*)
                    construct_local_para(sizeof(sat_open_csd_channel_res_struct), TD_DL);

                sat_open_csd_channel_res_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;

                kal_mem_cpy(sat_open_csd_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                sat_open_csd_channel_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

                /* If link failed, channel status no need to bring back to SIM 
                   under NW currently unable to process command, but channel not available */
                sat_open_csd_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
                sat_open_csd_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

                kal_mem_cpy(
                    &(sat_open_csd_channel_res_ptr->bearer_para),
                    &(this_smu->sate_channel[CH].csd_bearer_para),
                    sizeof(sat_csd_bearer_para_struct));

                sat_open_csd_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

                smu_free_account(CH);

                /* terminal response with link not established */
                smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_CSD_CHANNEL_RES, sat_open_csd_channel_res_ptr, NULL);

                /* Inform MMI setup link failed */
                /* To MMI notify */
                l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                    construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;
                l4csmu_sat_open_channel_cnf_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

                smu_send_ilm(
                    MOD_L4C,
                    SMU_L4C_SAP,
                    MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                    l4csmu_sat_open_channel_cnf_ptr,
                    NULL);

            }

            /* Socket configuation is success and wait for SOC notify indication */
            else
            {
                kal_trace(TRACE_STATE, WAIT_CSD_SOCK_NOTIFY);
                /* Once the link is set up sucessfully, 
                   allocate BUFFER, assign channel ID and build terminal response (performed successfully) 
                   when handle app_soc_notify_ind with SOC_CONNECT */
            }

        }

        /* On Demand Link */
        else if (this_smu->sate_channel[CH].is_immediate_link == KAL_FALSE)
        {
            kal_trace(TRACE_STATE, ONDEMAND_LINK);

            /* Allocate buffer and channel ID */
            this_smu->sate_channel[CH].satce_buffer = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
            this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;

            /* Allocate rx buffer and channel ID */
            this_smu->sate_channel[CH].satce_buffer_rx = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
            this_smu->sate_channel[CH].avail_buf_size_rx = this_smu->sate_channel[CH].buffer_size;

            /* Build terminal response with link established */
            /* To SIM */
            sat_open_csd_channel_res_ptr = (sat_open_csd_channel_res_struct*)
                construct_local_para(sizeof(sat_open_csd_channel_res_struct), TD_DL);

            if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
            {
                sat_open_csd_channel_res_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
            }
            else
            {
                sat_open_csd_channel_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            }

            kal_mem_cpy(sat_open_csd_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

            sat_open_csd_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;
            sat_open_csd_channel_res_ptr->ch_status[0] = CH | LINK_ESTABLISHED;
            sat_open_csd_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            kal_mem_cpy(
                &(sat_open_csd_channel_res_ptr->bearer_para),
                &(this_smu->sate_channel[CH].csd_bearer_para),
                sizeof(sat_csd_bearer_para_struct));

            sat_open_csd_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

            /* Save to context */
            this_smu->sate_channel[CH].channel_status[0] = CH | LINK_ESTABLISHED;
            this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            this_smu->sate_channel[CH].channel_id = CH | DEVICE_IDENTITY_CHANNEL;

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_CSD_CHANNEL_RES, sat_open_csd_channel_res_ptr, NULL);

            /*
             *  mtk02374 20090724 MAUI_01765491
             *  Clean cmd_detail after sending respnose
             */
            kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);
            /* Inform MMI setup link success */
            /* To MMI notify */
            /* Send CNF message to MMI */
            l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);
            if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
            {
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
            }
            else
            {
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            }

            l4csmu_sat_open_channel_cnf_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

            smu_send_ilm(
                MOD_L4C,
                SMU_L4C_SAP,
                MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                l4csmu_sat_open_channel_cnf_ptr,
                NULL);
        }
    }

    /* Set CSD profile failed */
    else
    {

        /* Build terminal response with ME currently unable to process command */
        sat_open_csd_channel_res_ptr = (sat_open_csd_channel_res_struct*)
            construct_local_para(sizeof(sat_open_csd_channel_res_struct), TD_DL);

        sat_open_csd_channel_res_ptr->res = SAT_CMD_BEYOND_ME_CAP;

        kal_mem_cpy(sat_open_csd_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        sat_open_csd_channel_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;        /* None */

        /* If link failed, channel status no need to bring back to SIM 
           under NW currently unable to process command, but channel not available */
        sat_open_csd_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
        sat_open_csd_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

        kal_mem_cpy(
            &(sat_open_csd_channel_res_ptr->bearer_para),
            &(this_smu->sate_channel[CH].csd_bearer_para),
            sizeof(sat_csd_bearer_para_struct));

        sat_open_csd_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
        smu_free_account(CH);
        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_CSD_CHANNEL_RES, sat_open_csd_channel_res_ptr, NULL);

        /* Inform MMI setup link failed */
        /* To MMI notify */
        /* Send CNF message to MMI */
        l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
            construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);

        l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_BEYOND_ME_CAP;
        l4csmu_sat_open_channel_cnf_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF, l4csmu_sat_open_channel_cnf_ptr, NULL);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_set_gprs_prof_res_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_set_gprs_prof_res_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* Message from L4C */
    l4csmu_sat_set_gprs_prof_res_struct *l4csmu_sat_set_gprs_prof_res_ptr;

    /* Message to SIM */
    sat_open_gprs_channel_res_struct *sat_open_gprs_channel_res_ptr;

    /* Message to L4C */
    l4csmu_sat_open_channel_cnf_struct *l4csmu_sat_open_channel_cnf_ptr;

    kal_uint16 l4csmu_sat_set_gprs_prof_res_len;
    kal_bool ret = KAL_FALSE;
    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    l4csmu_sat_set_gprs_prof_res_ptr = (l4csmu_sat_set_gprs_prof_res_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_sat_set_gprs_prof_res_len);

    kal_trace(TRACE_FUNC, L4CSMU_SAT_SET_GPRS_PROF_RES_HANDLER);

    this_smu->sate_channel[CH].socket_context.account_id = CBM_SAT_PS_ACCT_ID;

    if (l4csmu_sat_set_gprs_prof_res_ptr->res == KAL_TRUE)
    {
        /* Immediate Link */
        if (this_smu->sate_channel[CH].is_immediate_link == KAL_TRUE)
        {
            kal_trace(TRACE_STATE, IMMEDIATE_LINK);
            /* Set up the link */
            switch (this_smu->sate_channel[CH].protocol_type)
            {
                case SAT_UDP_PROTOCOL:
                    ret = attemp_setup_udp_link(&(this_smu->sate_channel[CH].socket_context));
                    break;
                case SAT_TCP_PROTOCOL:
                    ret = attemp_setup_tcp_link(&(this_smu->sate_channel[CH].socket_context));
                    break;
                default:    /* raw_socket */
                    this_smu->sate_channel[CH].protocol_type = SAT_RAW_PROTOCOL;
                    ret = attemp_setup_raw_socket(&(this_smu->sate_channel[CH].socket_context));
                    break;
            }

            /* Socket configuration is error */
            if (ret == KAL_FALSE)
            {
                /* Build terminal response with network currently unable to process command */
                kal_trace(TRACE_STATE, CREATE_GPRS_SOCKET_FAILED);

                if (this_smu->sate_channel[CH].socket_context.socket_id > 0)
                {
                    kal_trace(TRACE_STATE, SOCKET_GREATER_ZERO);
                    soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                    /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */
                }

                /* To SIM */
                sat_open_gprs_channel_res_ptr = (sat_open_gprs_channel_res_struct*)
                    construct_local_para(sizeof(sat_open_gprs_channel_res_struct), TD_DL);

                sat_open_gprs_channel_res_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;

                kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                sat_open_gprs_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

                /* If link failed, channel status no need to bring back to SIM 
                   under NW currently unable to process command, but channel not available */
                sat_open_gprs_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
                sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

                kal_mem_cpy(
                    &(sat_open_gprs_channel_res_ptr->bearer_para),
                    &(this_smu->sate_channel[CH].gprs_bearer_para),
                    sizeof(sat_gprs_bearer_para_struct));

                sat_open_gprs_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
                smu_free_account(CH);
                smu_send_ilm(
                    MOD_SIM,
                    PS_SIM_SAP,
                    MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES,
                    sat_open_gprs_channel_res_ptr,
                    NULL);

                /* Inform MMI setup link failed */
                /* To MMI notify */
                l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                    construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;
                l4csmu_sat_open_channel_cnf_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

                smu_send_ilm(
                    MOD_L4C,
                    SMU_L4C_SAP,
                    MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                    l4csmu_sat_open_channel_cnf_ptr,
                    NULL);

            }

            /* Socket configuation is success and wait for SOC notify indication */
            else
            {
                kal_trace(TRACE_STATE, WAIT_GPRS_SOCK_NOTIFY);
                /* Once the link is set up sucessfully, 
                   allocate BUFFER, assign channel ID, and build terminal response (performed successfully)
                   in app_soc_notify_ind_handler */
            }
        }

        /* On Demand Link */
        else if (this_smu->sate_channel[CH].is_immediate_link == KAL_FALSE)
        {
            kal_trace(TRACE_STATE, ONDEMAND_LINK);
            /* Allocate buffer and channel ID */
            this_smu->sate_channel[CH].satce_buffer = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
            this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;

            /* Allocate rx buffer and channel ID */
            this_smu->sate_channel[CH].satce_buffer_rx = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
            this_smu->sate_channel[CH].avail_buf_size_rx = this_smu->sate_channel[CH].buffer_size;

            /* Build terminal response with link established */
            /* To SIM */
            sat_open_gprs_channel_res_ptr = (sat_open_gprs_channel_res_struct*)
                construct_local_para(sizeof(sat_open_gprs_channel_res_struct), TD_DL);

            if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
            {
                sat_open_gprs_channel_res_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
            }
            else
            {
                sat_open_gprs_channel_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            }

            kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

            sat_open_gprs_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;
            sat_open_gprs_channel_res_ptr->ch_status[0] = CH | LINK_ESTABLISHED;
            sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            kal_mem_cpy(
                &(sat_open_gprs_channel_res_ptr->bearer_para),
                &(this_smu->sate_channel[CH].gprs_bearer_para),
                sizeof(sat_gprs_bearer_para_struct));

            sat_open_gprs_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

            /* Save to context */
            this_smu->sate_channel[CH].channel_status[0] = CH | LINK_ESTABLISHED;
            this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
            this_smu->sate_channel[CH].channel_id = CH | DEVICE_IDENTITY_CHANNEL;

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES, sat_open_gprs_channel_res_ptr, NULL);
			
            /*
             *  mtk02374 20090724 MAUI_01765491
             *  Clean cmd_detail after sending respnose
             */
            kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);			

            /* Inform MMI setup link success */
            /* To MMI notify */
            /* Send CNF message to MMI */
            l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);
            if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
            {
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
            }
            else
            {
                l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            }

            l4csmu_sat_open_channel_cnf_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

            smu_send_ilm(
                MOD_L4C,
                SMU_L4C_SAP,
                MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                l4csmu_sat_open_channel_cnf_ptr,
                NULL);

        }
    }

    /* Set GPRS profile failed */
    else
    {
        /* Build terminal response with ME currently unable to process command */
        sat_open_gprs_channel_res_ptr = (sat_open_gprs_channel_res_struct*)
            construct_local_para(sizeof(sat_open_gprs_channel_res_struct), TD_DL);

        sat_open_gprs_channel_res_ptr->res = SAT_CMD_BEYOND_ME_CAP;

        kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        sat_open_gprs_channel_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

        /* If link failed, channel status no need to bring back to SIM 
           under NW currently unable to process command, but channel not available */
        sat_open_gprs_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
        sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

        kal_mem_cpy(
            &(sat_open_gprs_channel_res_ptr->bearer_para),
            &(this_smu->sate_channel[CH].gprs_bearer_para),
            sizeof(sat_gprs_bearer_para_struct));

        sat_open_gprs_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
        smu_free_account(CH);
        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES, sat_open_gprs_channel_res_ptr, NULL);

        /* Inform MMI setup link failed */
        /* To MMI notify */
        /* Send CNF message to MMI */
        l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
            construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);
        l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_BEYOND_ME_CAP;
        l4csmu_sat_open_channel_cnf_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF, l4csmu_sat_open_channel_cnf_ptr, NULL);

    }
}


/*****************************************************************************
 * FUNCTION
 *  attemp_setup_tcp_link
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sc      [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool attemp_setup_tcp_link(smu_socket_context_struct *sc)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_int8 ret;
    kal_uint8 val = KAL_TRUE;
    kal_uint8 CH = this_smu->sate_current_channel;
    kal_uint8 sim_id = CBM_SIM_ID_SIM1;
    sockaddr_struct dest;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, ATTEMP_SETUP_TCP_LINK);

    kal_mem_set(&dest, 0x00, sizeof(dest));
    dest.addr_len = this_smu->sate_channel[CH].no_dest_addr;
    kal_mem_cpy(dest.addr, this_smu->sate_channel[CH].dest_addr, this_smu->sate_channel[CH].no_dest_addr);
    dest.port = this_smu->sate_channel[CH].port_num;

    sim_id += (this_smu->smu_current_mod - MOD_SMU);
    sc->account_id = cbm_encode_data_account_id(sc->account_id, sim_id, this_smu->sate_app_id, 0);

#ifdef __GEMINI__
    //MAUI_02018054 mtk02374 20091218 MOD_SMU should be replaced as this_smu->smu_current_mod
    if ((sc->socket_id = soc_create(SOC_PF_INET, SOC_SOCK_STREAM, 0, this_smu->smu_current_mod, sc->account_id)) < 0)
#else
    if ((sc->socket_id = soc_create(SOC_PF_INET, SOC_SOCK_STREAM, 0, MOD_SMU, sc->account_id)) < 0)
#endif
    {
        kal_trace(TRACE_STATE, SOC_CREATE_FAILED);
        return KAL_FALSE;
    }

    ret = soc_setsockopt(sc->socket_id, SOC_NBIO, &val, sizeof(val));
    if (ret < 0)
    {
        soc_close(sc->socket_id);
        kal_trace(TRACE_STATE, SETSOCKOPT_NBIO_FAILED);
        return KAL_FALSE;
    }

    val = SOC_READ | SOC_WRITE | SOC_CLOSE | SOC_CONNECT;
    ret = soc_setsockopt(sc->socket_id, SOC_ASYNC, &val, sizeof(val));
    if (ret < 0)
    {
        soc_close(sc->socket_id);
        kal_trace(TRACE_STATE, SETSOCKOPT_ASYNC_FAILED);
        return KAL_FALSE;
    }

    /* Only CSD bearer */
    if ((this_smu->sate_channel[CH].bearer == SAT_CSD_BEARER) &&
        (this_smu->sate_channel[CH].duration1 != 0) && (this_smu->sate_channel[CH].duration2 != 0))
    {
        ret = soc_set_csd_auto_disconnect_timer(this_smu->sate_channel[CH].duration2 / 1000);
        if (ret != KAL_TRUE)
        {
            kal_trace(TRACE_STATE, AUTO_DISC_TIMER_SETUP_FAILED);
            return KAL_FALSE;
        }
    }

    soc_connect(sc->socket_id, &dest);

    /* fill in the channel vs. socket table */
    this_smu->sate_channel_socket_table[CH] = this_smu->sate_channel[CH].socket_context.socket_id;

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  attemp_setup_udp_link
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sc      [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool attemp_setup_udp_link(smu_socket_context_struct *sc)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_int8 ret;
    kal_uint8 val = KAL_TRUE;
    kal_uint8 CH = this_smu->sate_current_channel;
    kal_uint8 sim_id = CBM_SIM_ID_SIM1;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, ATTEMP_SETUP_UDP_LINK);

    sim_id += (this_smu->smu_current_mod - MOD_SMU);
    sc->account_id = cbm_encode_data_account_id(sc->account_id, sim_id, this_smu->sate_app_id, 0);

#ifdef __GEMINI__
    //MAUI_02018054 mtk02374 20091218 MOD_SMU should be replaced as this_smu->smu_current_mod
    if ((sc->socket_id = soc_create(SOC_PF_INET, SOC_SOCK_DGRAM, 0, this_smu->smu_current_mod, sc->account_id)) < 0)
#else
    if ((sc->socket_id = soc_create(SOC_PF_INET, SOC_SOCK_DGRAM, 0, MOD_SMU, sc->account_id)) < 0)
#endif		
    {
        kal_trace(TRACE_STATE, SOC_CREATE_FAILED);
        return KAL_FALSE;
    }

    ret = soc_setsockopt(sc->socket_id, SOC_NBIO, &val, sizeof(val));
    if (ret < 0)
    {
        soc_close(sc->socket_id);
        kal_trace(TRACE_STATE, SETSOCKOPT_NBIO_FAILED);
        return KAL_FALSE;
    }

    val = SOC_READ | SOC_WRITE | SOC_CLOSE | SOC_CONNECT;
    ret = soc_setsockopt(sc->socket_id, SOC_ASYNC, &val, sizeof(val));
    if (ret < 0)
    {
        soc_close(sc->socket_id);
        kal_trace(TRACE_STATE, SETSOCKOPT_ASYNC_FAILED);
        return KAL_FALSE;
    }

    /* CSD bearer Only */
    if ((this_smu->sate_channel[CH].bearer == SAT_CSD_BEARER) &&
        (this_smu->sate_channel[CH].duration1 != 0) && (this_smu->sate_channel[CH].duration2 != 0))
    {
        ret = soc_set_csd_auto_disconnect_timer(this_smu->sate_channel[CH].duration2 / 1000);
        if (ret != KAL_TRUE)
        {
            kal_trace(TRACE_STATE, AUTO_DISC_TIMER_SETUP_FAILED);
            return KAL_FALSE;
        }
    }

    cbm_open_bearer(sc->account_id);

    /* fill in the channel vs. socket table */
    this_smu->sate_channel_socket_table[CH] = this_smu->sate_channel[CH].socket_context.socket_id;

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  attemp_setup_raw_socket
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sc      [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool attemp_setup_raw_socket(smu_socket_context_struct *sc)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_int8 ret;
    kal_uint8 val = KAL_TRUE;
    kal_uint8 CH = this_smu->sate_current_channel;
    kal_uint8 sim_id = CBM_SIM_ID_SIM1;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, ATTEMP_SETUP_RAW_SOCKET);

    sim_id += (this_smu->smu_current_mod - MOD_SMU);
    sc->account_id = cbm_encode_data_account_id(sc->account_id, sim_id, this_smu->sate_app_id, 0);

#ifdef __GEMINI__	
    //MAUI_02018054 mtk02374 20091218 MOD_SMU should be replaced as this_smu->smu_current_mod
    if ((sc->socket_id = soc_create(SOC_PF_INET, SOC_SOCK_RAW, 0, this_smu->smu_current_mod, sc->account_id)) < 0)
#else
    if ((sc->socket_id = soc_create(SOC_PF_INET, SOC_SOCK_RAW, 0, MOD_SMU, sc->account_id)) < 0)
#endif			
    {
        kal_trace(TRACE_STATE, SOC_CREATE_FAILED);
        return KAL_FALSE;
    }

    ret = soc_setsockopt(sc->socket_id, SOC_NBIO, &val, sizeof(val));
    if (ret < 0)
    {
        kal_trace(TRACE_STATE, SETSOCKOPT_NBIO_FAILED);
        soc_close(sc->socket_id);
        return KAL_FALSE;
    }

    ret = soc_setsockopt(sc->socket_id, SOC_IP_HDRINCL, &val, sizeof(val));
    if (ret < 0)
    {
        kal_trace(TRACE_STATE, SETSOCKOPT_SOC_IP_HDRINCL_FAILED);
        soc_close(sc->socket_id);
        return KAL_FALSE;
    }

    val = SOC_READ | SOC_WRITE | SOC_CLOSE | SOC_CONNECT;
    ret = soc_setsockopt(sc->socket_id, SOC_ASYNC, &val, sizeof(val));
    if (ret < 0)
    {
        kal_trace(TRACE_STATE, SETSOCKOPT_ASYNC_FAILED);
        soc_close(sc->socket_id);
        return KAL_FALSE;
    }

    /* CSD bearer Only */
    if ((this_smu->sate_channel[CH].bearer == SAT_CSD_BEARER) &&
        (this_smu->sate_channel[CH].duration1 != 0) && (this_smu->sate_channel[CH].duration2 != 0))
    {
        ret = soc_set_csd_auto_disconnect_timer(this_smu->sate_channel[CH].duration2 / 1000);
        if (ret != KAL_TRUE)
        {
            kal_trace(TRACE_STATE, AUTO_DISC_TIMER_SETUP_FAILED);
            return KAL_FALSE;
        }
    }

    cbm_open_bearer(sc->account_id);
	
    /* fill in the channel vs. socket table */
    this_smu->sate_channel_socket_table[CH] = this_smu->sate_channel[CH].socket_context.socket_id;

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  sat_set_server_mode_socket
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool sat_set_server_mode_socket(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_int8 ret;
    kal_uint8 val = 0;
    kal_uint8 CH = this_smu->sate_current_channel;
    kal_uint8 local_address[4] = {127, 0, 0, 1};
    kal_uint8 sim_id = CBM_SIM_ID_SIM1;	
    sockaddr_struct local;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, ATTEMP_SETUP_TCP_LINK);
    kal_trace(TRACE_FUNC, CHANNEL_ID, CH);
    debug_show_channel_socket_table();

    /* fill the local host and port number */
    kal_mem_set(&local, 0x00, sizeof(local));
    local.addr_len = 0x04;
    if(local.addr_len > MAX_SOCK_ADDR_LEN)
    {
        ASSERT(0);
    }		
    kal_mem_cpy(local.addr, local_address, local.addr_len);
    local.port = this_smu->sate_channel[CH].port_num;

    /* for send_data_ind usage */
    this_smu->sate_channel[CH].protocol_type = SAT_TCP_PROTOCOL;

    /* mtk01488 */
    /* decide if this is the first time to bind the local host and the same port number */
    /* if the mother socket is closed, then reset the flag */
    if (this_smu->is_server_mode_multi_channel_existed == KAL_TRUE)
    {
        // keep the current channel ID, but the socket ID is not assigned yet;
        // socket ID will be assigned to the child socket created when the coming request from client, 

        // put a special charater "0xFE" as a mark to present the channel is used, but the socket is not assigned
        this_smu->sate_channel_socket_table[CH] = 0xFE;
        return KAL_TRUE;
    }

    sim_id += (this_smu->smu_current_mod - MOD_SMU);
    this_smu->sate_channel[CH].socket_context.account_id = 
                cbm_encode_data_account_id(CBM_LOOPBACK_ACCT_ID, sim_id, this_smu->sate_app_id, 0);

#ifdef __GEMINI__
    //MAUI_02018054 mtk02374 20091218 MOD_SMU should be replaced as this_smu->smu_current_mod
    if ((this_smu->sate_channel[CH].socket_context.socket_id = soc_create(SOC_PF_INET, SOC_SOCK_STREAM, 0, this_smu->smu_current_mod, this_smu->sate_channel[CH].socket_context.account_id)) < 0)
#else
    if ((this_smu->sate_channel[CH].socket_context.socket_id = soc_create(SOC_PF_INET, SOC_SOCK_STREAM, 0, MOD_SMU, this_smu->sate_channel[CH].socket_context.account_id)) < 0)
#endif			
    {
        kal_trace(TRACE_STATE, SOC_CREATE_FAILED);
        return KAL_FALSE;
    }

    val = KAL_TRUE;
    ret = soc_setsockopt(this_smu->sate_channel[CH].socket_context.socket_id, SOC_NBIO, &val, sizeof(val));
    if (ret < 0)
    {
        kal_trace(TRACE_STATE, SETSOCKOPT_ASYNC_FAILED);
        soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
        return KAL_FALSE;
    }

    val = SOC_READ | SOC_WRITE | SOC_CLOSE | SOC_ACCEPT;
    ret = soc_setsockopt(this_smu->sate_channel[CH].socket_context.socket_id, SOC_ASYNC, &val, sizeof(val));
    if (ret < 0)
    {
        kal_trace(TRACE_STATE, SETSOCKOPT_ASYNC_FAILED);
        soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
        return KAL_FALSE;
    }

    ret = soc_bind(this_smu->sate_channel[CH].socket_context.socket_id, &local);
    if (ret < 0)
    {
        kal_trace(TRACE_STATE, SOCKET_BIND_FAILED);
        soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
        return KAL_FALSE;
    }

    ret = soc_listen(this_smu->sate_channel[CH].socket_context.socket_id, 5);
    if (ret < 0)
    {
        kal_trace(TRACE_STATE, SOCKET_LISTEN_FAILED);
        soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
        return KAL_FALSE;
    }

    /* fill the channel vs. socket table */
    /* 
     * CH[0]   not use
     * CH[1]   socket 1
     * .....
     * CH[3]   socket 2
     */
    this_smu->sate_channel_socket_table[CH] = this_smu->sate_channel[CH].socket_context.socket_id;

    debug_show_channel_socket_table();

    /* mtk01488: multiple channel */
    this_smu->is_server_mode_multi_channel_existed = KAL_TRUE;

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  sat_app_soc_notify_ind_handler
 * DESCRIPTION
 *  This function is used to notify SMU the event happened in SOC.
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void sat_app_soc_notify_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* From SOC */
    app_soc_notify_ind_struct *sat_app_soc_notify_ind_ptr;
    kal_uint16 sat_app_soc_notify_ind_len;
    kal_int32 soc_return = 0;

    /* To L4C */
    /* for MMI display: open channel and send data notification */
    l4csmu_sat_open_channel_cnf_struct *l4csmu_sat_open_channel_cnf_ptr;
    l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;

    /* To SIM */
    sat_open_csd_channel_res_struct *sat_open_csd_channel_res_ptr;
    sat_open_gprs_channel_res_struct *sat_open_gprs_channel_res_ptr;

    /* sat_open_server_mode_channel_res_struct * sat_open_server_mode_channel_res_ptr; */
    sat_send_data_res_struct *sat_send_data_res_ptr;
    sat_evdl_data_available_req_struct *sat_evdl_data_available_req_ptr;
    sat_evdl_channel_status_req_struct *sat_evdl_channel_status_req_ptr;

    kal_uint8 CH;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SAT_APP_SOC_NOTIFY_IND_HANDLER);

    sat_app_soc_notify_ind_ptr = (app_soc_notify_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_app_soc_notify_ind_len);

    /* The CH is determined from socket_id brought from SOC */
    CH = sate_channel_socket_table(sat_app_soc_notify_ind_ptr->socket_id);
    kal_trace(TRACE_FUNC, CHANNEL_ID, CH);

    if (CH == 0xFF)
    {
        return;
    }

    switch (sat_app_soc_notify_ind_ptr->event_type)
    {
        case SOC_ACCEPT:

            if (this_smu->sate_channel_child_socket_table[CH] == 0x00 ||
                this_smu->sate_channel_child_socket_table[CH] == 0xFF)
            {
                /* Here, once accept, use child socket as current socket */
                this_smu->sate_channel_child_socket_table[CH] = soc_accept(sat_app_soc_notify_ind_ptr->socket_id, NULL);
#ifdef __SATE_UNIT_TEST__                
                kal_prompt_trace(MOD_SMU, "1 is: %d", this_smu->sate_channel_child_socket_table[CH]);
                this_smu->sate_channel_child_socket_table[CH] = 2;
#endif
                this_smu->sate_channel[CH].socket_context.socket_id = this_smu->sate_channel_child_socket_table[CH];
                debug_show_channel_socket_table();

                /* create channel status event to UICC */
                sat_evdl_channel_status_req_ptr = (sat_evdl_channel_status_req_struct*)
                    construct_local_para(sizeof(sat_evdl_channel_status_req_struct), TD_UL);

                sat_evdl_channel_status_req_ptr->channel_status[0] = CH | TCP_IN_ESTABLISHED_STATE;
                sat_evdl_channel_status_req_ptr->channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
                this_smu->sate_channel[CH].channel_status[0] = CH | TCP_IN_ESTABLISHED_STATE;
                this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

                /* mtk01488: previous data in buffer shall be dropped here */
                this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;
                this_smu->sate_channel[CH].satce_buf_hd = 0;
                /* rx buffer */
                this_smu->sate_channel[CH].avail_buf_size_rx = this_smu->sate_channel[CH].buffer_size;
                this_smu->sate_channel[CH].satce_buf_hd_rx = 0;
                /* ~mtk01488 */

                this_smu->is_drop_data[CH] = KAL_TRUE;

                smu_send_ilm(
                    MOD_SIM,
                    PS_SIM_SAP,
                    MSG_ID_SAT_EVDL_CHANNEL_STATUS_REQ,
                    sat_evdl_channel_status_req_ptr,
                    NULL);
            }
            else /* for multiple channel connection */
            {
                if (this_smu->is_server_mode_multi_channel_existed == KAL_TRUE)
                {
                    kal_uint8 temp_CH;
//                    kal_prompt_trace(MOD_SMU, "multi_channel_existed");
                    
                    /* search special pattern "0xFE" from channel vs socket table, */
                    /* find out the proper channel and assign the temp child socket to the channel */
                    temp_CH = sate_channel_socket_table((kal_int8)0xFE);

                    if (temp_CH == 0xFF)
                    {
                        kal_int8 discard_socket;
//                        kal_prompt_trace(MOD_SMU, "take and drop unexpected request");

                        discard_socket = soc_accept(sat_app_soc_notify_ind_ptr->socket_id, NULL);
                        soc_close(discard_socket);
                    }
                    else /* temp_CH is not 0xFF */
                    {
                        kal_int8 temp_child_socket;
//                        kal_prompt_trace(MOD_SMU, "multi channel in create child socket state");
                        
                        /* mother accept the new request, and the child socket is return */
                        temp_child_socket = soc_accept(sat_app_soc_notify_ind_ptr->socket_id, NULL);

#ifdef __SATE_UNIT_TEST__                                        
                        kal_prompt_trace(MOD_SMU, "2 is: %d", temp_child_socket);
                        temp_child_socket = 3;
#endif                        

                        this_smu->sate_channel[temp_CH].socket_context.socket_id = temp_child_socket;
                        this_smu->sate_channel_socket_table[temp_CH] = temp_child_socket;
                        debug_show_channel_socket_table();

                        /* create channel status event to UICC */
                        sat_evdl_channel_status_req_ptr = (sat_evdl_channel_status_req_struct*)
                            construct_local_para(sizeof(sat_evdl_channel_status_req_struct), TD_UL);

                        sat_evdl_channel_status_req_ptr->channel_status[0] = temp_CH | TCP_IN_ESTABLISHED_STATE;
                        sat_evdl_channel_status_req_ptr->channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
                        this_smu->sate_channel[temp_CH].channel_status[0] = temp_CH | TCP_IN_ESTABLISHED_STATE;
                        this_smu->sate_channel[temp_CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

                        /* mtk01488: previous data in buffer shall be dropped here */
                        this_smu->sate_channel[temp_CH].avail_buf_size = this_smu->sate_channel[temp_CH].buffer_size;
                        this_smu->sate_channel[temp_CH].satce_buf_hd = 0;
                        /* rx buffer */
                        this_smu->sate_channel[temp_CH].avail_buf_size_rx = this_smu->sate_channel[temp_CH].buffer_size;
                        this_smu->sate_channel[temp_CH].satce_buf_hd_rx = 0;
                        /* ~mtk01488 */

                        this_smu->is_drop_data[temp_CH] = KAL_TRUE;

                smu_send_ilm(
                    MOD_SIM,
                    PS_SIM_SAP,
                    MSG_ID_SAT_EVDL_CHANNEL_STATUS_REQ,
                    sat_evdl_channel_status_req_ptr,
                    NULL);
            }
            }
            else
            {
                /* mtk01488: current connection is used ,thus, ignore the SOC_ACCEPT event */
                kal_int8 discard_socket;

//                kal_prompt_trace(MOD_SMU, "take and drop unexpected request");
                discard_socket = soc_accept(sat_app_soc_notify_ind_ptr->socket_id, NULL);
                soc_close(discard_socket);
                /* ~mtk01488 */
            }
            }
            break;
        case SOC_READ:
            sat_evdl_data_available_req_ptr = (sat_evdl_data_available_req_struct*)
                construct_local_para(sizeof(sat_evdl_data_available_req_struct), TD_UL);
            kal_mem_cpy(sat_evdl_data_available_req_ptr->channel_status, this_smu->sate_channel[CH].channel_status, 2);

            /* may add error handler if return error */
            //            soc_getsockopt(this_smu->sate_channel[CH].smu_socket_context.socket_id,
            //                                        SOC_NREAD, &soc_return, sizeof(soc_return));

            /* store to rx buffer */
             /*
              *  [MAUI_01681482] mtk02374 20090526
              *  Move the data in rx buffer forward before receiving data from socket
              */
            if(this_smu->sate_channel[CH].satce_buf_hd_rx != 0)
            {
                kal_mem_cpy(
                    this_smu->sate_channel[CH].satce_buffer_rx, 
                    this_smu->sate_channel[CH].satce_buffer_rx + this_smu->sate_channel[CH].satce_buf_hd_rx, 
                    this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size_rx
                    );
                this_smu->sate_channel[CH].satce_buf_hd_rx = 0;
            }
            kal_trace(TRACE_FUNC, BEFORE_BUFF_SIZE, this_smu->sate_channel[CH].avail_buf_size_rx);
            soc_return = soc_recv(
                            this_smu->sate_channel[CH].socket_context.socket_id,
                            this_smu->sate_channel[CH].satce_buffer_rx + (this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size_rx),
                            (kal_int32) this_smu->sate_channel[CH].avail_buf_size_rx,
                            0);

            /* Number of bytes expected to be received */
            if (soc_return > 0)
            {
                kal_trace(TRACE_FUNC, SOC_RETURN, soc_return);

                /* rx buffer */
                this_smu->sate_channel[CH].avail_buf_size_rx =
                    this_smu->sate_channel[CH].avail_buf_size_rx - soc_return;

                kal_trace(TRACE_FUNC, AFTER_BUFF_SIZE, this_smu->sate_channel[CH].avail_buf_size_rx);

                if (soc_return >= 0xFF)
                {
                    sat_evdl_data_available_req_ptr->channel_data_length = 0xFF;
                }
                else
                {
                    sat_evdl_data_available_req_ptr->channel_data_length = soc_return;
                }

                smu_send_ilm(
                    MOD_SIM,
                    PS_SIM_SAP,
                    MSG_ID_SAT_EVDL_DATA_AVAILABLE_REQ,
                    sat_evdl_data_available_req_ptr,
                    NULL);
            }
            else
            {
                /* error */
                smu_free_ctrl_buffer(sat_evdl_data_available_req_ptr);
            }

            break;
        case SOC_WRITE:
            if (this_smu->sate_channel[CH].avail_buf_size == this_smu->sate_channel[CH].buffer_size)
            {
                kal_trace(TRACE_STATE, NOTHING_TO_SEND);
                break;  /* Nothing to send! */
            }
            else
            {
                sockaddr_struct dest;

                kal_mem_set(&dest, 0x00, sizeof(dest));

                if (this_smu->sate_channel[CH].protocol_type == SAT_UDP_PROTOCOL)
                {
                    dest.sock_type = SOC_SOCK_DGRAM;
                    dest.addr_len = this_smu->sate_channel[CH].no_dest_addr;
                    if(this_smu->sate_channel[CH].no_dest_addr >MAX_SOCK_ADDR_LEN)
                    {
                        ASSERT(0);
                    }						
                    kal_mem_cpy(
                        dest.addr,
                        this_smu->sate_channel[CH].dest_addr,
                        this_smu->sate_channel[CH].no_dest_addr);
                    dest.port = this_smu->sate_channel[CH].port_num;

                    soc_return = soc_sendto(
                                    this_smu->sate_channel[CH].socket_context.socket_id,
                                    this_smu->sate_channel[CH].satce_buffer,
                                    (this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size),
                                    0,
                                    &dest);

                }
                else if (this_smu->sate_channel[CH].protocol_type == SAT_TCP_PROTOCOL)
                {
                    soc_return = soc_send(
                                    this_smu->sate_channel[CH].socket_context.socket_id,
                                    this_smu->sate_channel[CH].satce_buffer,
                                    (this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size),
                                    0);
                }

                if (soc_return == (this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size)) /* SUCCESS! */
                {
                    kal_trace(TRACE_STATE, SENT_SUCCESS);

                    /* To SIM */
                    sat_send_data_res_ptr = (sat_send_data_res_struct*)
                        construct_local_para(sizeof(sat_send_data_res_struct), TD_UL);

                    /* To L4C for MMI notify */
                    l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
                        construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

                    l4csmu_sat_notify_mmi_ind_ptr->state = SAT_SEND_DATA_FINISHED;

                    kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                    this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size; /* Clean Tx Buffer */
                    sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
                    sat_send_data_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
                    sat_send_data_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

                    if (this_smu->sate_channel[CH].avail_buf_size >= 0xFF)
                    {
                        sat_send_data_res_ptr->ch_data_length = 0xFF;
                    }
                    else
                    {
                        sat_send_data_res_ptr->ch_data_length = this_smu->sate_channel[CH].avail_buf_size;
                    }

                    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);

                    kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);

                    smu_send_ilm(
                        MOD_L4C,
                        SMU_L4C_SAP,
                        MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND,
                        l4csmu_sat_notify_mmi_ind_ptr,
                        NULL);

                }
                else if (soc_return == SOC_WOULDBLOCK)
                {
                    /* Do nothing */
                    kal_trace(TRACE_STATE, SAT_SEND_DATA_WB);
                }
                else
                {
                    /* Should be some error handler */
                    kal_trace(TRACE_STATE, SAT_SEND_DATA_OTHERS);
                }
            }
            break;
        case SOC_CONNECT:
            /* CSD bearer *//* Event_type: SOC_CONNECT (TCP) */
            if (this_smu->sate_channel[CH].bearer == SAT_CSD_BEARER)
            {
                /* link set up succeed */
                if (sat_app_soc_notify_ind_ptr->result == KAL_TRUE)
                {
                    /* if smu_timer not expired, then stop timer, and set is_retry as KAL_FASLE */
                    smu_stop_timer();
                    this_smu->sate_channel[CH].is_retry_allowed = KAL_FALSE;

                    /* Allocate buffer and channel ID */
                    this_smu->sate_channel[CH].satce_buffer = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
                    this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;

                    /* Allocate rx buffer and channel ID */
                    this_smu->sate_channel[CH].satce_buffer_rx = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
                    this_smu->sate_channel[CH].avail_buf_size_rx = this_smu->sate_channel[CH].buffer_size;

                    /* Build terminal response */
                    /* To SIM */
                    sat_open_csd_channel_res_ptr = (sat_open_csd_channel_res_struct*)
                        construct_local_para(sizeof(sat_open_csd_channel_res_struct), TD_DL);
                    if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
                    {
                        sat_open_csd_channel_res_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
                    }
                    else
                    {
                        sat_open_csd_channel_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
                    }

                    kal_mem_cpy(sat_open_csd_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                    sat_open_csd_channel_res_ptr->cause = 0x00; /* None */
                    sat_open_csd_channel_res_ptr->ch_status[0] = 0x81;  /* Channel id 1 and link established */
                    sat_open_csd_channel_res_ptr->ch_status[1] = 0x00;  /* No furthur info can be given */
                    kal_mem_cpy(
                        &(sat_open_csd_channel_res_ptr->bearer_para),
                        &(this_smu->sate_channel[CH].csd_bearer_para),
                        sizeof(sat_csd_bearer_para_struct));

                    sat_open_csd_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

                    /* Save to context */
                    this_smu->sate_channel[CH].channel_status[0] = 0x81;
                    this_smu->sate_channel[CH].channel_status[1] = 0x00;
                    this_smu->sate_channel[CH].channel_id = SAT_CH1;

                    smu_send_ilm(
                        MOD_SIM,
                        PS_SIM_SAP,
                        MSG_ID_SAT_OPEN_CSD_CHANNEL_RES,
                        sat_open_csd_channel_res_ptr,
                        NULL);

                   /*
                     *  mtk02374 20090724 MAUI_01765491
                     *  Clean cmd_detail after sending respnose
                     */
                    kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);
                    /* Inform MMI setup link success */
                    /* To MMI notify */
                    /* Send CNF message to MMI */
                    l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                        construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);
                    if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
                    {
                        l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
                    }

                    else
                    {
                        l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
                    }

                    l4csmu_sat_open_channel_cnf_ptr->cause = 0; /* SAT_NO_SPECIFIC_CAUSE */

                    smu_send_ilm(
                        MOD_L4C,
                        SMU_L4C_SAP,
                        MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                        l4csmu_sat_open_channel_cnf_ptr,
                        NULL);

                }
                /* link set up failed */
                else
                {
                    kal_trace(TRACE_STATE, CSD_BEARER_CONNECT_FAILED);
                    /* check if going to retry setup link */

                    /* if retry allowed, close socket first, then call attemp_setup_tcp_call or attemp_setup_udp_call
                       in above funciton, socket id will be assigned again */
                    if (this_smu->sate_channel[CH].is_retry_allowed == KAL_TRUE)
                    {
                        kal_trace(TRACE_STATE, RETRY_ALLOWED);
                        soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                        /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */

                        if (this_smu->sate_channel[CH].protocol_type == SAT_UDP_PROTOCOL)
                        {
                            attemp_setup_udp_link(&(this_smu->sate_channel[CH].socket_context));
                        }
                        else if (this_smu->sate_channel[CH].protocol_type == SAT_TCP_PROTOCOL)
                        {
                            attemp_setup_tcp_link(&(this_smu->sate_channel[CH].socket_context));
                        }
                        else
                        {
                            ASSERT(0);
                        }
                    }

                    /* If retry not allowd,close socket first, then build terminal response with
                       network currently unable to process command, inform MMI setup link failed */
                    else
                    {
                        kal_trace(TRACE_STATE, RETRY_NOT_ALLOWED);
                        soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                        /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */

                        sat_open_csd_channel_res_ptr = (sat_open_csd_channel_res_struct*)
                            construct_local_para(sizeof(sat_open_csd_channel_res_struct), TD_DL);

                        sat_open_csd_channel_res_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;

                        kal_mem_cpy(sat_open_csd_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                        sat_open_csd_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;    /* None */

                        /* If link failed, channel status no need to bring back to SIM 
                           under NW currently unable to process command, but channel not available */
                        sat_open_csd_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
                        sat_open_csd_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

                        kal_mem_cpy(
                            &(sat_open_csd_channel_res_ptr->bearer_para),
                            &(this_smu->sate_channel[CH].csd_bearer_para),
                            sizeof(sat_csd_bearer_para_struct));

                        sat_open_csd_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;
                        smu_free_account(CH);
                        smu_send_ilm(
                            MOD_SIM,
                            PS_SIM_SAP,
                            MSG_ID_SAT_OPEN_CSD_CHANNEL_RES,
                            sat_open_csd_channel_res_ptr,
                            NULL);

                        /* Inform MMI setup link failed */
                        /* To MMI notify */
                        /* Send CNF message to MMI */
                        l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                            construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);
                        l4csmu_sat_open_channel_cnf_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;

                        l4csmu_sat_open_channel_cnf_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

                        smu_send_ilm(
                            MOD_L4C,
                            SMU_L4C_SAP,
                            MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                            l4csmu_sat_open_channel_cnf_ptr,
                            NULL);
                    }
                }
            }

            /* GPRS bearer */
            else if (this_smu->sate_channel[CH].bearer == SAT_GPRS_BEARER)
            {
                sat_open_gprs_channel_res_ptr = (sat_open_gprs_channel_res_struct*)
                    construct_local_para(sizeof(sat_open_gprs_channel_res_struct), TD_UL);

                l4csmu_sat_open_channel_cnf_ptr = (l4csmu_sat_open_channel_cnf_struct*)
                    construct_local_para(sizeof(l4csmu_sat_open_channel_cnf_struct), TD_UL);

                /* link setup succeed */
                if (sat_app_soc_notify_ind_ptr->result == KAL_TRUE)
                {

                    if(this_smu->sate_channel[CH].is_immediate_link == KAL_FALSE 
                      && this_smu->sate_channel[CH].cmd_detail[3] == CMD_SEND_DATA)
                    {
                        sat_process_send_data();
                        free_local_para((local_para_struct*)sat_open_gprs_channel_res_ptr);
                        free_local_para((local_para_struct*)l4csmu_sat_open_channel_cnf_ptr);
                        return;
                    }
                
                    /* Allocate buffer and channel ID */
                    this_smu->sate_channel[CH].satce_buffer = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
                    this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;

                    /* Allocate rx buffer and channel ID */
                    this_smu->sate_channel[CH].satce_buffer_rx = get_ctrl_buffer(this_smu->sate_channel[CH].buffer_size);
                    this_smu->sate_channel[CH].avail_buf_size_rx = this_smu->sate_channel[CH].buffer_size;

                    /* Build terminal response */
                    /* To SIM */
                    if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
                    {
                        sat_open_gprs_channel_res_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
                    }
                    else
                    {
                        sat_open_gprs_channel_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
                    }

                    kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                    sat_open_gprs_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;
                    sat_open_gprs_channel_res_ptr->ch_status[0] = CH | LINK_ESTABLISHED;
                    sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
                    kal_mem_cpy(
                        &(sat_open_gprs_channel_res_ptr->bearer_para),
                        &(this_smu->sate_channel[CH].gprs_bearer_para),
                        sizeof(sat_gprs_bearer_para_struct));

                    sat_open_gprs_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

                    /* Save to context */
                    this_smu->sate_channel[CH].channel_status[0] = CH | LINK_ESTABLISHED;
                    this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
                    this_smu->sate_channel[CH].channel_id = CH | DEVICE_IDENTITY_CHANNEL;

                    smu_send_ilm(
                        MOD_SIM,
                        PS_SIM_SAP,
                        MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES,
                        sat_open_gprs_channel_res_ptr,
                        NULL);

                    /*
                     *  mtk02374 20090724 MAUI_01765491
                     *  Clean cmd_detail after sending respnose
                     */
                    kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);
                    /* Inform MMI setup link success */
                    /* To MMI notify *//* Send CNF message to MMI */
                    if (this_smu->sate_channel[CH].is_cmd_modified == KAL_TRUE)
                    {
                        l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_WITH_MODIFIED;
                    }
                    else
                    {
                        l4csmu_sat_open_channel_cnf_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
                    }

                    l4csmu_sat_open_channel_cnf_ptr->cause = 0; /* SAT_NO_SPECIFIC_CAUSE */

                    smu_send_ilm(
                        MOD_L4C,
                        SMU_L4C_SAP,
                        MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                        l4csmu_sat_open_channel_cnf_ptr,
                        NULL);
                }

                /* link setup failed */
                else
                {

                    if(this_smu->sate_channel[CH].is_immediate_link == KAL_FALSE 
                      && this_smu->sate_channel[CH].cmd_detail[3] == CMD_SEND_DATA)
                    {
                        l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;
                        /* Message to SIM */
                        sat_send_data_res_struct *sat_send_data_res_ptr;

                        if (this_smu->sate_channel[CH].socket_context.socket_id > 0)
                        {
                            kal_trace(TRACE_STATE, SOCKET_GREATER_ZERO);
                            soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                            /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */
                        }
                        /* Message to SIM */
                        sat_send_data_res_ptr = (sat_send_data_res_struct*)
                            construct_local_para(sizeof(sat_send_data_res_struct), TD_UL);

                        kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                        /* Message to L4C for MMI notify */
                        l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
                            construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

                        l4csmu_sat_notify_mmi_ind_ptr->state = SAT_SEND_DATA_TERMINATED;

                        /* Clean Tx Buffer */
                        this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;
                        sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
                        sat_send_data_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
                        sat_send_data_res_ptr->cause = SAT_BIP_CHANNEL_CLOSED;

                        if (this_smu->sate_channel[CH].avail_buf_size >= 0xFF)
                        {
                            sat_send_data_res_ptr->ch_data_length = 0xFF;
                        }
                        else
                        {
                            sat_send_data_res_ptr->ch_data_length = this_smu->sate_channel[CH].avail_buf_size;
                        }

                        smu_free_account(CH);

                        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);

                        smu_send_ilm(
                            MOD_L4C,
                            SMU_L4C_SAP,
                            MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND,
                            l4csmu_sat_notify_mmi_ind_ptr,
                            NULL);
                        return;
                    }				
                    /* close socket */
                    /* build terminal response with
                       network currently unable to process command,
                       inform MMI setup link failed */
                    soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                    /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */

                    sat_open_gprs_channel_res_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;

                    kal_mem_cpy(sat_open_gprs_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                    sat_open_gprs_channel_res_ptr->cause = SAT_NO_SPECIFIC_CAUSE;

                    /* If link failed, channel status no need to bring back to SIM 
                       under NW currently unable to process command, 
                       but channel not available */
                    sat_open_gprs_channel_res_ptr->ch_status[0] = LINK_NOT_ESTABLISHED;
                    sat_open_gprs_channel_res_ptr->ch_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

                    kal_mem_cpy(
                        &(sat_open_gprs_channel_res_ptr->bearer_para),
                        &(this_smu->sate_channel[CH].gprs_bearer_para),
                        sizeof(sat_gprs_bearer_para_struct));

                    sat_open_gprs_channel_res_ptr->buffer_size = this_smu->sate_channel[CH].buffer_size;

                    /* Save to context */
                    /*
                     * this_smu->sate_channel[CH].channel_status[0] = 0x00;
                     * this_smu->sate_channel[CH].channel_status[1] = 0x00;
                     * this_smu->sate_channel[CH].channel_id = SAT_NO_CHANNEL;
                     */

                    smu_free_account(CH);
                    smu_send_ilm(
                        MOD_SIM,
                        PS_SIM_SAP,
                        MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES,
                        sat_open_gprs_channel_res_ptr,
                        NULL);

                    /* Inform MMI setup link failed */
                    /* To MMI notify *//* Send CNF message to MMI */
                    l4csmu_sat_open_channel_cnf_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;
                    l4csmu_sat_open_channel_cnf_ptr->cause = 0; /* SAT_NO_SPECIFIC_CAUSE */

                    smu_send_ilm(
                        MOD_L4C,
                        SMU_L4C_SAP,
                        MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_CNF,
                        l4csmu_sat_open_channel_cnf_ptr,
                        NULL);
                }

            }

            /* Raw Socket */
            else
            {
                /* implement later */
                kal_trace(TRACE_STATE, RAW_SOCKET_CONNECT);
            }

            break;
        case SOC_CLOSE:

            /* socket is already closed and nw acct is closed as well */

            if (this_smu->sate_channel[CH].cmd_detail[3] != CMD_CLOSE_CHAN)
            {
                /* Link Drop */
                kal_trace(TRACE_STATE, LINK_DROP);

                if (this_smu->sate_channel[CH].bearer == SAT_SERVER_MODE_BEARER &&
                    this_smu->sate_channel_child_socket_table[CH] == sat_app_soc_notify_ind_ptr->socket_id)
                {
                    this_smu->is_sate_child_socket_closed = KAL_TRUE;
                    this_smu->sate_channel[CH].channel_status[0] = CH | TCP_IN_LISTEN_STATE;
                    this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

                    /* mtk01488: mark to represent the child socket already closed, and ready to accept new request */
                    this_smu->sate_channel_child_socket_table[CH] = 0xFF;
                    /* ~mtk01488 */
                }
                else
                {
                    this_smu->sate_channel[CH].channel_status[0] = CH | LINK_NOT_ESTABLISHED;
                    this_smu->sate_channel[CH].channel_status[1] = 0x05;        /* link drop */
                }

                soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */
                				
            }

            break;
        default:
            break;
    }
}

#define SATE_CLOSE_CHANNEL_FLAG 1


/*****************************************************************************
 * FUNCTION
 *  sat_close_channel_ind_handler
 * DESCRIPTION
 *  This function is used to pass the request for the user's confirmation to close a channel
 *  to MMI.
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void sat_close_channel_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* Message from SIM */
    sat_close_channel_ind_struct *sat_close_channel_ind_ptr;
    sat_close_channel_ind_peer_struct *sat_close_channel_ind_peer_ptr;
    kal_uint16 sat_close_channel_ind_len = 0;

    /* Message to L4C *//* Notify MMI */
    l4csmu_sat_close_channel_ind_struct *l4csmu_sat_close_channel_ind_ptr;
    l4csmu_sat_close_channel_ind_peer_struct l4csmu_sat_close_channel_ind_peer_data;
    peer_buff_struct *peer_ptr = NULL;

    /* Message to L4C *//* Notify MMI (finished) */
    l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;

    /* To SIM */
    sat_close_channel_res_struct *sat_close_channel_res_ptr;

    kal_uint8 CH;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    sat_close_channel_ind_ptr = (sat_close_channel_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_close_channel_ind_len);

    CH = sat_close_channel_ind_ptr->ch_id & 0x07;

    kal_trace(TRACE_FUNC, SAT_CLOSE_CHANNEL_IND_HANDLER);
    /* kal_trace(TRACE_FUNC, CHANNEL_ID, this_smu->sate_channel[CH].channel_id); */

    if (this_smu->sate_channel[CH].channel_id && (sat_close_channel_ind_ptr->ch_id == this_smu->sate_channel[CH].channel_id))   /* Channel ID is found */
    {
        kal_trace(TRACE_STATE, CHANNEL_ID_FOUND);
        l4csmu_sat_close_channel_ind_ptr = (l4csmu_sat_close_channel_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_close_channel_ind_struct), TD_UL);

        kal_mem_cpy(this_smu->sate_channel[CH].cmd_detail, sat_close_channel_ind_ptr->cmd_detail, 5);

        l4csmu_sat_close_channel_ind_ptr->is_icon_available = sat_close_channel_ind_ptr->is_icon_available;
        if (sat_close_channel_ind_ptr->is_icon_available == KAL_TRUE)
        {
            kal_mem_cpy(
                &(l4csmu_sat_close_channel_ind_ptr->icon_info),
                &(sat_close_channel_ind_ptr->icon_info),
                sizeof(sat_icon_struct));
        }

        /* Process peer data from SIM to MMI */
        SMU_UNPACK(
            sat_close_channel_ind_peer_struct_unpack,
            MCD_SAT_CLOSE_CHANNEL_IND_PEER_STRUCT,
            sat_close_channel_ind_peer_struct,
            sat_close_channel_ind_peer_ptr,
            smu_ilm_ptr->peer_buff_ptr);

        l4csmu_sat_close_channel_ind_peer_data.no_alpha_id = sat_close_channel_ind_peer_ptr->no_alpha_id;
        l4csmu_sat_close_channel_ind_peer_data.is_alpha_id_present =
            sat_close_channel_ind_peer_ptr->is_alpha_id_present;
        l4csmu_sat_close_channel_ind_peer_data.dcs_of_alpha_id = sat_close_channel_ind_peer_ptr->dcs_of_alpha_id;

        if (sat_close_channel_ind_peer_ptr->is_alpha_id_present &&
            l4csmu_sat_close_channel_ind_peer_data.no_alpha_id == 0)
        {
            l4csmu_sat_close_channel_ind_peer_data.alpha_id = NULL;
        }
        else if (sat_close_channel_ind_peer_ptr->is_alpha_id_present)
        {
            l4csmu_sat_close_channel_ind_peer_data.alpha_id = get_ctrl_buffer(sat_close_channel_ind_peer_ptr->no_alpha_id);
            kal_mem_cpy(
                l4csmu_sat_close_channel_ind_peer_data.alpha_id,
                sat_close_channel_ind_peer_ptr->alpha_id,
                sat_close_channel_ind_peer_ptr->no_alpha_id);
        }
        else
        {
            l4csmu_sat_close_channel_ind_peer_data.alpha_id = NULL;
        }

        SMU_PACK(
            l4csmu_sat_close_channel_ind_peer_struct_pack,  /* ASN only */
            l4csmu_sat_close_channel_ind_peer_struct_bits,  /* ASN only */
            MCD_L4CSMU_SAT_CLOSE_CHANNEL_IND_PEER_STRUCT,   /* MCD only */
            &l4csmu_sat_close_channel_ind_peer_data,
            &peer_ptr,
            0,
            0);

        smu_send_ilm(
            MOD_L4C,
            SMU_L4C_SAP,
            MSG_ID_L4CSMU_SAT_CLOSE_CHANNEL_IND,
            l4csmu_sat_close_channel_ind_ptr,
            peer_ptr);

        smu_free_ctrl_buffer(l4csmu_sat_close_channel_ind_peer_data.alpha_id);

        /* Start to close channel procdure */
        if ( ( (this_smu->sate_channel[CH].channel_status[0] & LINK_ESTABLISHED)  /* Link is existed */
                || (this_smu->sate_channel[CH].channel_status[0] & TCP_IN_LISTEN_STATE)) /* Link is established */
            && (((sat_close_channel_ind_ptr->ch_id) & 0x07) == ((this_smu->sate_channel[CH].channel_status[0]) & 0x07)))
        {
            kal_trace(TRACE_STATE, LINK_EXISTED);

            if (this_smu->sate_channel[CH].bearer == SAT_CSD_BEARER ||
                this_smu->sate_channel[CH].bearer == SAT_GPRS_BEARER)
            {

                soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                //cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID);
                //                    smu_free_account(CH);
            }
                /*
                 *  [MAUI_01672803] mtk02374 20090427
                 *  implement close_channel when bearer is SERVER_MODE
                 */
            else if (this_smu->sate_channel[CH].bearer == SAT_SERVER_MODE_BEARER)
            {
                sat_close_channel_res_ptr = (sat_close_channel_res_struct*)
                    construct_local_para(sizeof(sat_close_channel_res_struct), TD_DL);
                                   
                l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
                    construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);
                    
                kal_mem_cpy(sat_close_channel_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

                /* multiple channels */
                if (this_smu->is_server_mode_multi_channel_existed == KAL_TRUE)
                {

                    /* mtk01488: If channel 1 is intended to be closed, we should close the child_socket_1, 
                         otherwise, we should close child_socket_2, or child_socket_3 etc as specified by CH
                         
                                                   soccket                 child_socket
                         ----------------------------------------------
                         channel 1         mother_socket        child_socket_1
                         channel 2         child_socket_2
                         channel 3         child_socket_3
                    */

                    if (CH == 0x01)   
                    {
                        soc_close(this_smu->sate_channel_child_socket_table[CH]);
                        this_smu->sate_channel_child_socket_table[CH] = 0xFF;
                    }
                    else 
                    {
                        soc_close(this_smu->sate_channel_socket_table[CH]);
                        this_smu->sate_channel_socket_table[CH] = 0xFF;
                        smu_free_account(CH);                        
                    }

                    if(this_smu->sate_channel[CH].cmd_detail[4] == 0x00)
                        this_smu->sate_channel[CH].channel_status[0] = CH | TCP_IN_CLOSED_STATE;
                    else if (this_smu->sate_channel[CH].cmd_detail[4] == 0x01)
                        this_smu->sate_channel[CH].channel_status[0] = CH | TCP_IN_LISTEN_STATE;

                    this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;
                    
                }
                /* single channel */
                else  
                {
                /* close channel shall close server mode mother child */
                soc_close(this_smu->sate_channel_child_socket_table[CH]);
                
                this_smu->is_sate_child_socket_closed = KAL_TRUE;
                this_smu->sate_channel_child_socket_table[CH] = 0xFF;
                /*
                 *  [MAUI_01672803] mtk02374 20090427
                 *  If cmd_detail[4] == 0x00, then we should close mother socket
                 */                
                if(this_smu->sate_channel[CH].cmd_detail[4] == 0x00)
                {                	
                    soc_close(this_smu->sate_channel_socket_table[CH]);
                    smu_free_account(CH);
                }                    
                else if (this_smu->sate_channel[CH].cmd_detail[4] == 0x01)
                {
                    kal_trace(TRACE_STATE, CLOSE_CHV_RES);
  
                    this_smu->sate_channel[CH].channel_status[0] = CH | TCP_IN_LISTEN_STATE;
                    this_smu->sate_channel[CH].channel_status[1] = NO_FURTHER_INFO_CAN_BE_GIVEN;

                }  
                }
      
                sat_close_channel_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
                sat_close_channel_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;
                
                l4csmu_sat_notify_mmi_ind_ptr->state = SAT_CLOSE_CHANNEL_FINISHED;
                
                smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND, l4csmu_sat_notify_mmi_ind_ptr, NULL);
                    
                smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_CLOSE_CHANNEL_RES, sat_close_channel_res_ptr, NULL);
                
            }
            else
            {
                kal_sys_trace("Close: No Bearer Specified!");
                ASSERT(0);
            }
        }
        else
        {
            kal_trace(TRACE_STATE, CHV_ID_STATUS_NOT_SYNC);
            ASSERT(0);
        }

    }
    /* End of Channel is found */

    else    /* Invalid Channel ID */
    {
        kal_trace(TRACE_STATE, INVALID_CHV_ID);
        sat_close_channel_res_ptr = (sat_close_channel_res_struct*)
            construct_local_para(sizeof(sat_close_channel_res_struct), TD_UL);

        l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

        kal_mem_cpy(sat_close_channel_res_ptr->cmd_detail, sat_close_channel_ind_ptr->cmd_detail, 5);

        l4csmu_sat_notify_mmi_ind_ptr->state = SAT_CLOSE_CHANNEL_FINISHED;

	/*
	  *  [MAUI_01629572] mtk02374 090212
	  *   For FTA 27.22.4.28.1/2, when closing ch 2 after open ch 1, then it will result in 
	  *   SAT_BIP_CHANNEL_CLOSED but it should result in SAT_BIP_CHANNEL_IDENTIFIER_NOT_VALID
	  */
#if 0
/* under construction !*/
#endif
        if (CH != this_smu->sate_current_channel)
        {
            sat_close_channel_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
            sat_close_channel_res_ptr->cause = SAT_BIP_CHANNEL_IDENTIFIER_NOT_VALID;
        }
#if 0		
/* under construction !*/
#endif   
        else if(this_smu->sate_current_channel == 0)
        {
            sat_close_channel_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
            sat_close_channel_res_ptr->cause = SAT_BIP_CHANNEL_CLOSED;
        }

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND, l4csmu_sat_notify_mmi_ind_ptr, NULL);

        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_CLOSE_CHANNEL_RES, sat_close_channel_res_ptr, NULL);
    }
}


/*****************************************************************************
 * FUNCTION
 *  create_link_to_send_data
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void create_link_to_send_data(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;
    /* Message to SIM */
    sat_send_data_res_struct *sat_send_data_res_ptr;
    kal_uint8 CH = this_smu->sate_current_channel;
    kal_bool ret;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, CREATE_LINK_TO_SEND_DATA);

    switch (this_smu->sate_channel[CH].protocol_type)
    {
        case SAT_UDP_PROTOCOL:
            ret = attemp_setup_udp_link(&(this_smu->sate_channel[CH].socket_context));
            break;
        case SAT_TCP_PROTOCOL:
            ret = attemp_setup_tcp_link(&(this_smu->sate_channel[CH].socket_context));
            break;
        default:    /* raw_socket */
            this_smu->sate_channel[CH].protocol_type = SAT_RAW_PROTOCOL;
            ret = attemp_setup_raw_socket(&(this_smu->sate_channel[CH].socket_context));
            break;
    }
    /* Socket configuration is error */
    if (ret == KAL_FALSE)
    {

        if (this_smu->sate_channel[CH].socket_context.socket_id > 0)
        {
            kal_trace(TRACE_STATE, SOCKET_GREATER_ZERO);
            soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
                /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */
        }
        /* Message to SIM */
        sat_send_data_res_ptr = (sat_send_data_res_struct*)
            construct_local_para(sizeof(sat_send_data_res_struct), TD_UL);

        kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        /* Message to L4C for MMI notify */
        l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

        l4csmu_sat_notify_mmi_ind_ptr->state = SAT_SEND_DATA_TERMINATED;

        /* Clean Tx Buffer */
        this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;
        sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
        sat_send_data_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
        sat_send_data_res_ptr->cause = SAT_BIP_CHANNEL_CLOSED;

        if (this_smu->sate_channel[CH].avail_buf_size >= 0xFF)
        {
            sat_send_data_res_ptr->ch_data_length = 0xFF;
        }
        else
        {
            sat_send_data_res_ptr->ch_data_length = this_smu->sate_channel[CH].avail_buf_size;
        }

	smu_free_account(CH);
        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);

        smu_send_ilm(
            MOD_L4C,
            SMU_L4C_SAP,
            MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND,
            l4csmu_sat_notify_mmi_ind_ptr,
            NULL);
    }	

}

void sat_process_send_data()
{
    l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;

    sat_send_data_res_struct *sat_send_data_res_ptr;    
                /* -------- START to SEND DATA -------- */
    sockaddr_struct dest;

    kal_uint8 CH = this_smu->sate_current_channel;    

    kal_int32 soc_return = 0;

    kal_mem_set(&dest, 0x00, sizeof(dest));
    kal_trace(TRACE_STATE, START_TO_SEND);

    if (this_smu->sate_channel[CH].protocol_type == SAT_UDP_PROTOCOL)
    {
        dest.sock_type = SOC_SOCK_DGRAM;
        dest.addr_len = this_smu->sate_channel[CH].no_dest_addr;
        kal_mem_cpy(
            dest.addr,
            this_smu->sate_channel[CH].dest_addr,
            this_smu->sate_channel[CH].no_dest_addr);
        dest.port = this_smu->sate_channel[CH].port_num;

        soc_return = soc_sendto(
                        this_smu->sate_channel[CH].socket_context.socket_id,
                        this_smu->sate_channel[CH].satce_buffer,
                        (this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size),
                        0,
                        &dest);

    }
    else if (this_smu->sate_channel[CH].protocol_type == SAT_TCP_PROTOCOL)
    {
        soc_return = soc_send(
                        this_smu->sate_channel[CH].socket_context.socket_id,
                        this_smu->sate_channel[CH].satce_buffer,
                        (this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size),
                        0);
    }

    /* Send Data Succeed */
    if (soc_return == (this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size))
    {
        kal_trace(TRACE_STATE, SENT_SUCCESS);

        /* Message to SIM */
        sat_send_data_res_ptr = (sat_send_data_res_struct*)
            construct_local_para(sizeof(sat_send_data_res_struct), TD_UL);

        kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);
         /* Message to L4C for MMI notify */
        l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

        l4csmu_sat_notify_mmi_ind_ptr->state = SAT_SEND_DATA_FINISHED;

        /* Clean Tx Buffer */
        this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;
        sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
        sat_send_data_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
        sat_send_data_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

        if (this_smu->sate_channel[CH].avail_buf_size >= 0xFF)
        {
            sat_send_data_res_ptr->ch_data_length = 0xFF;
        }
        else
        {
            sat_send_data_res_ptr->ch_data_length = this_smu->sate_channel[CH].avail_buf_size;
        }

        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);

        kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);

        smu_send_ilm(
            MOD_L4C,
            SMU_L4C_SAP,
            MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND,
            l4csmu_sat_notify_mmi_ind_ptr,
            NULL);

    }
    else if (soc_return == SOC_WOULDBLOCK)
    {
        /* DO Nothing */
        kal_trace(TRACE_STATE, SAT_SEND_DATA_WB);
    }
    else
    {
        /* Should be some error handlers */
        kal_trace(TRACE_STATE, SAT_SEND_DATA_OTHERS);
//        kal_prompt_trace(MOD_SMU, "send data failed");

        /* Message to SIM */
        sat_send_data_res_ptr = (sat_send_data_res_struct*)
            construct_local_para(sizeof(sat_send_data_res_struct), TD_UL);

        kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        /* Message to L4C for MMI notify */
        l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

        l4csmu_sat_notify_mmi_ind_ptr->state = SAT_SEND_DATA_TERMINATED;

        /* Clean Tx Buffer */
        this_smu->sate_channel[CH].avail_buf_size = this_smu->sate_channel[CH].buffer_size;
        sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
        sat_send_data_res_ptr->res = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;
        sat_send_data_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

        if (this_smu->sate_channel[CH].avail_buf_size >= 0xFF)
        {
            sat_send_data_res_ptr->ch_data_length = 0xFF;
        }
        else
        {
            sat_send_data_res_ptr->ch_data_length = this_smu->sate_channel[CH].avail_buf_size;
        }

        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);

        kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);

        smu_send_ilm(
            MOD_L4C,
            SMU_L4C_SAP,
            MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND,
            l4csmu_sat_notify_mmi_ind_ptr,
            NULL);
    }

}

#define SATE_SEND_DATA_FLAG 1


/*****************************************************************************
 * FUNCTION
 *  sat_send_data_ind_handler
 * DESCRIPTION
 *  This function is used to pass the request for the user's confirmation to send datato MMI.
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void sat_send_data_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* Message from SIM */
    sat_send_data_ind_struct *sat_send_data_ind_ptr;
    sat_send_data_ind_peer_struct *sat_send_data_ind_peer_ptr;
    kal_uint16 sat_send_data_ind_len = 0;
    kal_uint16 buffed_data_size = 0;

    /* Message to L4C */
    l4csmu_sat_send_data_ind_struct *l4csmu_sat_send_data_ind_ptr;
    l4csmu_sat_send_data_ind_peer_struct l4csmu_sat_send_data_ind_peer_data;
    peer_buff_struct *peer_ptr = NULL;
    l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;

    /* Message to SIM */
    sat_send_data_res_struct *sat_send_data_res_ptr;

    kal_uint8 CH;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SAT_SEND_DATA_IND_HANDLER);

    sat_send_data_ind_ptr = (sat_send_data_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_send_data_ind_len);

    CH = sat_send_data_ind_ptr->ch_id & 0x07;

    /* If positive, channel is existed */
    if (this_smu->sate_channel[CH].channel_id &&
        (sat_send_data_ind_ptr->ch_id == this_smu->sate_channel[CH].channel_id))
    {

        /* mtk01488: drop data until SIM issue SAT_RECV_DATA cmd */
        if ((this_smu->sate_channel[CH].bearer == SAT_SERVER_MODE_BEARER) && (this_smu->is_drop_data[CH] == KAL_TRUE))
        {
//            kal_prompt_trace(MOD_SMU, "sm_drop_data");

            sat_send_data_res_ptr = (sat_send_data_res_struct*)
                construct_local_para(sizeof(sat_send_data_res_struct), TD_UL);

            kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, sat_send_data_ind_ptr->cmd_detail, 5);

            sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
            sat_send_data_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            sat_send_data_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;
            sat_send_data_res_ptr->ch_data_length = 0xFF;

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);

            kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);
			
            return;
        }
        /* ~mtk01488 drop data until SIM issue SAT_RECV_DATA cmd */

        if (sat_send_data_ind_ptr->cmd_detail[4] & 0x01)    /* Send data immediately */
        {
            /* To L4C for MMI notification */
            l4csmu_sat_send_data_ind_ptr = (l4csmu_sat_send_data_ind_struct*)
                construct_local_para(sizeof(l4csmu_sat_send_data_ind_struct), TD_UL);

            kal_mem_cpy(this_smu->sate_channel[CH].cmd_detail, sat_send_data_ind_ptr->cmd_detail, 5);

            l4csmu_sat_send_data_ind_ptr->is_icon_available = sat_send_data_ind_ptr->is_icon_available;
            if (sat_send_data_ind_ptr->is_icon_available == KAL_TRUE)
            {
                kal_mem_cpy(
                    &(l4csmu_sat_send_data_ind_ptr->icon_info),
                    &(sat_send_data_ind_ptr->icon_info),
                    sizeof(sat_icon_struct));
            }

            SMU_UNPACK(
                sat_send_data_ind_peer_struct_unpack,
                MCD_SAT_SEND_DATA_IND_PEER_STRUCT,
                sat_send_data_ind_peer_struct,
                sat_send_data_ind_peer_ptr,
                smu_ilm_ptr->peer_buff_ptr);

            l4csmu_sat_send_data_ind_peer_data.no_alpha_id = sat_send_data_ind_peer_ptr->no_alpha_id;
            l4csmu_sat_send_data_ind_peer_data.is_alpha_id_present = sat_send_data_ind_peer_ptr->is_alpha_id_present;
            l4csmu_sat_send_data_ind_peer_data.dcs_of_alpha_id = sat_send_data_ind_peer_ptr->dcs_of_alpha_id;

            if (sat_send_data_ind_peer_ptr->is_alpha_id_present && l4csmu_sat_send_data_ind_peer_data.no_alpha_id == 0)
            {
                l4csmu_sat_send_data_ind_peer_data.alpha_id = NULL;
            }
            else if (sat_send_data_ind_peer_ptr->is_alpha_id_present)
            {
                l4csmu_sat_send_data_ind_peer_data.alpha_id = get_ctrl_buffer(sat_send_data_ind_peer_ptr->no_alpha_id);
                kal_mem_cpy(
                    l4csmu_sat_send_data_ind_peer_data.alpha_id,
                    sat_send_data_ind_peer_ptr->alpha_id,
                    sat_send_data_ind_peer_ptr->no_alpha_id);
            }
            else
            {
                l4csmu_sat_send_data_ind_peer_data.alpha_id = NULL;
            }

            kal_trace(TRACE_FUNC, BEFORE_BUFF_SIZE, this_smu->sate_channel[CH].avail_buf_size);

            /* Store data in tx buffer first no matter in immdeate or ondemand link */
            /* Copy data to Tx buffer */

            /* buffed_data_size: data already stored in buffer */
            buffed_data_size = this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size;

            kal_trace(TRACE_FUNC, NUM_DATA, sat_send_data_ind_peer_ptr->no_data);
            if(sat_send_data_ind_peer_ptr->no_data > (this_smu->sate_channel[CH].buffer_size-buffed_data_size))
            {
                ASSERT(0);
            }				

            kal_mem_cpy(
                (this_smu->sate_channel[CH].satce_buffer + buffed_data_size),
                sat_send_data_ind_peer_ptr->data,
                sat_send_data_ind_peer_ptr->no_data);

            this_smu->sate_channel[CH].avail_buf_size =
                this_smu->sate_channel[CH].avail_buf_size - sat_send_data_ind_peer_ptr->no_data;
            /* End of Copy data to Tx buffer */

            kal_trace(TRACE_FUNC, AFTER_BUFF_SIZE, this_smu->sate_channel[CH].avail_buf_size);

            SMU_PACK(
                l4csmu_sat_send_data_ind_peer_struct_pack,  /* ASN only */
                l4csmu_sat_send_data_ind_peer_struct_bits,  /* ASN only */
                MCD_L4CSMU_SAT_SEND_DATA_IND_PEER_STRUCT,   /* MCD only */
                &l4csmu_sat_send_data_ind_peer_data,
                &peer_ptr,
                0,
                0);

            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_SEND_DATA_IND, l4csmu_sat_send_data_ind_ptr, peer_ptr);

            smu_free_ctrl_buffer(l4csmu_sat_send_data_ind_peer_data.alpha_id);

            /* Send Data from here */

            /* Channel existed, so need to create link before sending data */
            /* If the link is not set up, should setup first, then send data immediately */

            /* should check first when entering this function */
            /* On Demand Link */
            if (this_smu->sate_channel[CH].is_immediate_link == KAL_FALSE
                    && this_smu->sate_channel[CH].is_ondemand_link_established == KAL_FALSE)
            {
                create_link_to_send_data();
                this_smu->sate_channel[CH].is_ondemand_link_established = KAL_TRUE;                
                return;
                /* Setup bearer before sending data */
                /* Once the bearer is connetec, then send data */
            }

            /* Immediate Link */
            else
            {
                sat_process_send_data();
            }   /* end of START to SEND DATA */

        }
        /* End of send data immediately */
        else    /* STORE Mode */
        {
            /* add new trace for store mode later */

            /* To L4C for MMI notification */
            l4csmu_sat_send_data_ind_ptr = (l4csmu_sat_send_data_ind_struct*)
                construct_local_para(sizeof(l4csmu_sat_send_data_ind_struct), TD_UL);

            kal_mem_cpy(this_smu->sate_channel[CH].cmd_detail, sat_send_data_ind_ptr->cmd_detail, 5);

            l4csmu_sat_send_data_ind_ptr->is_icon_available = sat_send_data_ind_ptr->is_icon_available;
            if (sat_send_data_ind_ptr->is_icon_available == KAL_TRUE)
            {
                kal_mem_cpy(
                    &(l4csmu_sat_send_data_ind_ptr->icon_info),
                    &(sat_send_data_ind_ptr->icon_info),
                    sizeof(sat_icon_struct));
            }

            /* Unpack for alpha id from SIM */
            SMU_UNPACK(
                sat_send_data_ind_peer_struct_unpack,
                MCD_SAT_SEND_DATA_IND_PEER_STRUCT,
                sat_send_data_ind_peer_struct,
                sat_send_data_ind_peer_ptr,
                smu_ilm_ptr->peer_buff_ptr);

            l4csmu_sat_send_data_ind_peer_data.no_alpha_id = sat_send_data_ind_peer_ptr->no_alpha_id;
            l4csmu_sat_send_data_ind_peer_data.is_alpha_id_present = sat_send_data_ind_peer_ptr->is_alpha_id_present;
            l4csmu_sat_send_data_ind_peer_data.dcs_of_alpha_id = sat_send_data_ind_peer_ptr->dcs_of_alpha_id;

            if (sat_send_data_ind_peer_ptr->is_alpha_id_present && l4csmu_sat_send_data_ind_peer_data.no_alpha_id == 0)
            {
                l4csmu_sat_send_data_ind_peer_data.alpha_id = NULL;
            }
            else if (sat_send_data_ind_peer_ptr->is_alpha_id_present)
            {
                l4csmu_sat_send_data_ind_peer_data.alpha_id = get_ctrl_buffer(sat_send_data_ind_peer_ptr->no_alpha_id);
                kal_mem_cpy(
                    l4csmu_sat_send_data_ind_peer_data.alpha_id,
                    sat_send_data_ind_peer_ptr->alpha_id,
                    sat_send_data_ind_peer_ptr->no_alpha_id);
            }
            else
            {
                l4csmu_sat_send_data_ind_peer_data.alpha_id = NULL;
            }

            kal_trace(TRACE_FUNC, BEFORE_BUFF_SIZE, this_smu->sate_channel[CH].avail_buf_size);

            /* Copy data to Tx buffer */
            buffed_data_size = this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size;

            kal_trace(TRACE_FUNC, NUM_DATA, sat_send_data_ind_peer_ptr->no_data);
            /* kal_trace(TRACE_STATE, NUM_DATA); */
            if(sat_send_data_ind_peer_ptr->no_data > (this_smu->sate_channel[CH].buffer_size-buffed_data_size))
            {
                ASSERT(0);
            }				
            kal_mem_cpy(
                (this_smu->sate_channel[CH].satce_buffer + buffed_data_size),
                sat_send_data_ind_peer_ptr->data,
                sat_send_data_ind_peer_ptr->no_data);
            this_smu->sate_channel[CH].avail_buf_size =
                this_smu->sate_channel[CH].avail_buf_size - sat_send_data_ind_peer_ptr->no_data;
            /* End of Copy data to Tx buffer */

            kal_trace(TRACE_FUNC, AFTER_BUFF_SIZE, this_smu->sate_channel[CH].avail_buf_size);

            /* Pack the peer to L4C */
            SMU_PACK(
                l4csmu_sat_send_data_ind_peer_struct_pack,  /* ASN only */
                l4csmu_sat_send_data_ind_peer_struct_bits,  /* ASN only */
                MCD_L4CSMU_SAT_SEND_DATA_IND_PEER_STRUCT,   /* MCD only */
                &l4csmu_sat_send_data_ind_peer_data,
                &peer_ptr,
                0,
                0);

            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_SEND_DATA_IND, l4csmu_sat_send_data_ind_ptr, peer_ptr);

            smu_free_ctrl_buffer(l4csmu_sat_send_data_ind_peer_data.alpha_id);

            /* Stored is completed, then response to SIM and L4C */
            kal_trace(TRACE_STATE, SENT_SUCCESS);

            /* Message to SIM */
            sat_send_data_res_ptr = (sat_send_data_res_struct*)
                construct_local_para(sizeof(sat_send_data_res_struct), TD_UL);

            kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, sat_send_data_ind_ptr->cmd_detail, 5);

            /* Message to L4C for MMI notify */
            l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
                construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

            l4csmu_sat_notify_mmi_ind_ptr->state = SAT_SEND_DATA_FINISHED;

            sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
            sat_send_data_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            sat_send_data_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;

            if (this_smu->sate_channel[CH].avail_buf_size >= 0xFF)
            {
                sat_send_data_res_ptr->ch_data_length = 0xFF;
            }
            else
            {
                sat_send_data_res_ptr->ch_data_length = this_smu->sate_channel[CH].avail_buf_size;
            }

            smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);

            kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);

            smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND, l4csmu_sat_notify_mmi_ind_ptr, NULL);

        }   /* End of STORE MODE */
    }
    else    /* NO Channel or Invalid Channel ID */
    {
        kal_trace(TRACE_STATE, INVALID_CHV_ID);

        sat_send_data_res_ptr = (sat_send_data_res_struct*)
            construct_local_para(sizeof(sat_send_data_res_struct), TD_UL);
        kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, sat_send_data_ind_ptr->cmd_detail, 5);

	/*
	  *  [MAUI_01629572] mtk02374 090212
	  *   For FTA 27.22.4.30.1/5, when asking send_data on ch 2 after open ch 1, then it will result in 
	  *   SAT_BIP_CHANNEL_CLOSED but it should result in SAT_BIP_CHANNEL_IDENTIFIER_NOT_VALID
	  */ 	
#if 0   
/* under construction !*/
#endif
        if (CH != this_smu->sate_current_channel)
        {
            sat_send_data_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
            sat_send_data_res_ptr->cause = SAT_BIP_CHANNEL_IDENTIFIER_NOT_VALID;
        }
#if 0		
/* under construction !*/
#endif   
        else if(this_smu->sate_current_channel == 0)
        {
            sat_send_data_res_ptr->res = SAT_BEARER_INDEPENDENT_PROTOCOL_ERROR;
            sat_send_data_res_ptr->cause = SAT_BIP_CHANNEL_CLOSED;
        }

        /* May think about if channel is temportarily unavailabe, ie. all channels are used */
        /* Implement later */

        sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
        sat_send_data_res_ptr->ch_data_length = 0xFF;
        smu_free_account(CH);
        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_send_data_req_handler
 * DESCRIPTION
 *  This function is used to pass the user's termination .
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void l4csmu_sat_send_data_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* From L4C */
    l4csmu_sat_send_data_req_struct *l4csmu_sat_send_data_req_ptr;
    kal_uint16 l4csmu_sat_send_data_req_len = 0;

    /* To L4C */
    l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;

    /* To SIM */
    sat_send_data_res_struct *sat_send_data_res_ptr;

    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    l4csmu_sat_send_data_req_ptr = (l4csmu_sat_send_data_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_sat_send_data_req_len);

    kal_trace(TRACE_FUNC, L4CSMU_SAT_SEND_DATA_REQ_HANDLER);

    if (l4csmu_sat_send_data_req_ptr->res == SAT_PROACTIVE_CMD_TERMINATED_BY_USER)
    {
        soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
        /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */
        smu_free_account(CH);

        l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

        sat_send_data_res_ptr = (sat_send_data_res_struct*)
            construct_local_para(sizeof(sat_send_data_res_struct), TD_DL);

        l4csmu_sat_notify_mmi_ind_ptr->state = SAT_SEND_DATA_TERMINATED;

        kal_mem_cpy(sat_send_data_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        sat_send_data_res_ptr->res = SAT_PROACTIVE_CMD_TERMINATED_BY_USER;
        sat_send_data_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;
        sat_send_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
        sat_send_data_res_ptr->ch_data_length = 0xFF;

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND, l4csmu_sat_notify_mmi_ind_ptr, NULL);

        smu_send_ilm(MOD_SIM, SMU_L4C_SAP, MSG_ID_SAT_SEND_DATA_RES, sat_send_data_res_ptr, NULL);

        kal_mem_set(this_smu->sate_channel[CH].cmd_detail, 0x00, 5);

    }
}

#define SATE_RECV_DATA_FLAG 1


/*****************************************************************************
 * FUNCTION
 *  sat_recv_data_ind_handler
 * DESCRIPTION
 *  This function is used to pass the request for the user's confirmation to receive data
 *  to MMI and to save the data account profile in smu_context_g.sate_channel[CH].
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void sat_recv_data_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* From SIM */
    sat_recv_data_ind_struct *sat_recv_data_ind_ptr;
    sat_recv_data_ind_peer_struct *sat_recv_data_ind_peer_ptr;
    kal_uint16 sat_recv_data_ind_len = 0;
    kal_uint16 remain_data_len = 0;

    /* To L4C */
    l4csmu_sat_recv_data_ind_struct *l4csmu_sat_recv_data_ind_ptr;
    l4csmu_sat_recv_data_ind_peer_struct l4csmu_sat_recv_data_ind_peer_data;

    /* l4csat_recv_data_cnf_struct * l4csat_recv_data_cnf_ptr; */
    l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;
    peer_buff_struct *peer_ptr = NULL;

    /* To SIM */
    sat_recv_data_res_struct *sat_recv_data_res_ptr;
    sat_recv_data_res_peer_struct sat_recv_data_res_peer_data;

    kal_int32 soc_return;
    kal_uint8 CH;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SAT_RECV_DATA_IND_HANDLER);

    sat_recv_data_ind_ptr = (sat_recv_data_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_recv_data_ind_len);

    CH = sat_recv_data_ind_ptr->ch_id & 0x07;

    /* mtk01488_CR789921 */
    this_smu->is_drop_data[CH] = KAL_FALSE;
    /* ~mtk01488 */

    /* Data size requested from SIM */
    /* 255 - command_detail(5) - device_identity(4) - result(3) - channel_data_length(3) = 240 */
    /* 240 - channel_data(T(1)_L(2)) = 237 */
    if (sat_recv_data_ind_ptr->ch_data_length > 237)
    {
        this_smu->sate_channel[CH].channel_data_len = 237;
    }
    else
    {
        this_smu->sate_channel[CH].channel_data_len = sat_recv_data_ind_ptr->ch_data_length;
    }

    kal_mem_cpy(this_smu->sate_channel[CH].cmd_detail, sat_recv_data_ind_ptr->cmd_detail, 5);

    /* when SAT com is coming, each time MMI shows "receiving data" is considered */

    /* Message to MMI for notification */
    l4csmu_sat_recv_data_ind_ptr = (l4csmu_sat_recv_data_ind_struct*)
        construct_local_para(sizeof(l4csmu_sat_recv_data_ind_struct), TD_UL);

    /* Process local prameter from SIM */
    l4csmu_sat_recv_data_ind_ptr->is_icon_available = sat_recv_data_ind_ptr->is_icon_available;
    if (sat_recv_data_ind_ptr->is_icon_available == KAL_TRUE)
    {
        kal_mem_cpy(
            &(l4csmu_sat_recv_data_ind_ptr->icon_info),
            &(sat_recv_data_ind_ptr->icon_info),
            sizeof(sat_icon_struct));
    }
    /* End of process local parameter from SIM */

    /* Process peer data from SIM to MMI */
    SMU_UNPACK(
        sat_recv_data_ind_peer_struct_unpack,
        MCD_SAT_RECV_DATA_IND_PEER_STRUCT,
        sat_recv_data_ind_peer_struct,
        sat_recv_data_ind_peer_ptr,
        smu_ilm_ptr->peer_buff_ptr);

    l4csmu_sat_recv_data_ind_peer_data.no_alpha_id = sat_recv_data_ind_peer_ptr->no_alpha_id;
    l4csmu_sat_recv_data_ind_peer_data.is_alpha_id_present = sat_recv_data_ind_peer_ptr->is_alpha_id_present;
    l4csmu_sat_recv_data_ind_peer_data.dcs_of_alpha_id = sat_recv_data_ind_peer_ptr->dcs_of_alpha_id;

    if (sat_recv_data_ind_peer_ptr->is_alpha_id_present && l4csmu_sat_recv_data_ind_peer_data.no_alpha_id == 0)
    {
        l4csmu_sat_recv_data_ind_peer_data.alpha_id = NULL;
    }
    else if (sat_recv_data_ind_peer_ptr->is_alpha_id_present)
    {
        l4csmu_sat_recv_data_ind_peer_data.alpha_id = get_ctrl_buffer(sat_recv_data_ind_peer_ptr->no_alpha_id);
        kal_mem_cpy(
            l4csmu_sat_recv_data_ind_peer_data.alpha_id,
            sat_recv_data_ind_peer_ptr->alpha_id,
            sat_recv_data_ind_peer_ptr->no_alpha_id);
    }
    else
    {
        l4csmu_sat_recv_data_ind_peer_data.alpha_id = NULL;
    }

    SMU_PACK(
        l4csmu_sat_recv_data_ind_peer_struct_pack,  /* ASN only */
        l4csmu_sat_recv_data_ind_peer_struct_bits,  /* ASN only */
        MCD_L4CSMU_SAT_RECV_DATA_IND_PEER_STRUCT,   /* MCD only */
        &l4csmu_sat_recv_data_ind_peer_data,
        &peer_ptr,
        0,
        0);

    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_RECV_DATA_IND, l4csmu_sat_recv_data_ind_ptr, peer_ptr);

    smu_free_ctrl_buffer(l4csmu_sat_recv_data_ind_peer_data.alpha_id);

    /* end of MMI presentation */

    /* Start to move data from Rx buffer to SIM */
    /* Check if the Rx buffer each time when data is taken from Rx buffer, 
       once the buffer is empty, get new data from SOC until the SOC return WouldBlock */
    {

        sat_recv_data_res_ptr = (sat_recv_data_res_struct*)
            construct_local_para(sizeof(sat_recv_data_res_struct), TD_UL);

        kal_mem_cpy(sat_recv_data_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        kal_trace(TRACE_FUNC, BEFORE_BUFF_SIZE, this_smu->sate_channel[CH].avail_buf_size_rx);
        kal_trace(TRACE_FUNC, BUFF_HEAD, this_smu->sate_channel[CH].satce_buf_hd_rx);

        sat_recv_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
        sat_recv_data_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
        sat_recv_data_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;
        sat_recv_data_res_peer_data.no_data = this_smu->sate_channel[CH].channel_data_len;
        sat_recv_data_res_peer_data.data = get_ctrl_buffer(this_smu->sate_channel[CH].channel_data_len);

        kal_mem_cpy(
            sat_recv_data_res_peer_data.data,
            this_smu->sate_channel[CH].satce_buffer_rx + this_smu->sate_channel[CH].satce_buf_hd_rx,
            this_smu->sate_channel[CH].channel_data_len);

        remain_data_len =
            this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size_rx -
            this_smu->sate_channel[CH].channel_data_len;
        this_smu->sate_channel[CH].avail_buf_size_rx =
            this_smu->sate_channel[CH].avail_buf_size_rx + this_smu->sate_channel[CH].channel_data_len;
        this_smu->sate_channel[CH].satce_buf_hd_rx =
            this_smu->sate_channel[CH].satce_buf_hd_rx + this_smu->sate_channel[CH].channel_data_len;

        /* AFTER_BUFF_SIZE: buffer available after data is copied to SIM */
        kal_trace(TRACE_FUNC, AFTER_BUFF_SIZE, this_smu->sate_channel[CH].avail_buf_size_rx);
        /* REMAIN_DATA_LEN: remaining data kept in SMU when data is taken from rx buffer */
        kal_trace(TRACE_FUNC, REMAIN_DATA_LEN, remain_data_len);
        /* Head  to the begining of data */
        kal_trace(TRACE_FUNC, BUFF_HEAD, this_smu->sate_channel[CH].satce_buf_hd_rx);

        if (remain_data_len < 0xFF)
        {
            sat_recv_data_res_ptr->ch_data_length = remain_data_len;
        }
        else
        {
            sat_recv_data_res_ptr->ch_data_length = 0xFF;
        }

        /* check if the next data is availabe in SOC buffer */
        if (remain_data_len == 0)
        {
            kal_trace(TRACE_STATE, REMAIN_DATA_LEN_ZERO_SOC_RECV_AGAIN);

            /* reset buffer size, and reset buffer head */
            this_smu->sate_channel[CH].avail_buf_size_rx = this_smu->sate_channel[CH].buffer_size;
            this_smu->sate_channel[CH].satce_buf_hd_rx = 0;

            soc_return = soc_recv(
                            this_smu->sate_channel[CH].socket_context.socket_id,
                            this_smu->sate_channel[CH].satce_buffer_rx + (this_smu->sate_channel[CH].buffer_size - this_smu->sate_channel[CH].avail_buf_size_rx),
                            (kal_int32) this_smu->sate_channel[CH].avail_buf_size_rx,
                            0);

            if (soc_return > 0)
            {
                kal_trace(TRACE_STATE, DATA_AVAILABLE_IN_RX_BUFF);
                this_smu->sate_channel[CH].avail_buf_size_rx =
                    this_smu->sate_channel[CH].avail_buf_size_rx - soc_return;
                if (soc_return >= 0xFF)
                {
                    sat_recv_data_res_ptr->ch_data_length = 0xFF;
                }
                else
                {
                    sat_recv_data_res_ptr->ch_data_length = soc_return;
                }
            }
            else
            {
                kal_trace(TRACE_STATE, NO_DATA_IN_SOC);
            }

        }

        SMU_PACK(
            sat_recv_data_res_peer_struct_pack, /* ASN only */
            sat_recv_data_res_peer_struct_bits, /* ASN only */
            MCD_SAT_RECV_DATA_IND_PEER_STRUCT,  /* MCD only */
            &sat_recv_data_res_peer_data,
            &peer_ptr,
            0,
            0);

        /* Mesage to MMI for complete ReceiveDataCmd */
        l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

        l4csmu_sat_notify_mmi_ind_ptr->state = SAT_RECEIVE_DATA_FINISHED;

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND, l4csmu_sat_notify_mmi_ind_ptr, NULL);

        smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_RECV_DATA_RES, sat_recv_data_res_ptr, peer_ptr);

        smu_free_ctrl_buffer(sat_recv_data_res_peer_data.data);

    }
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_recv_data_req_handler
 * DESCRIPTION
 *  This function is used to pass the user's termination.
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void l4csmu_sat_recv_data_req_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /* From L4C */
    l4csmu_sat_recv_data_req_struct *l4csmu_sat_recv_data_req_ptr;
    kal_uint16 l4csmu_sat_recv_data_req_len;

    /* To L4C */
    l4csmu_sat_notify_mmi_ind_struct *l4csmu_sat_notify_mmi_ind_ptr;

    /* To SIM */
    sat_recv_data_res_struct *sat_recv_data_res_ptr;

    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    l4csmu_sat_recv_data_req_ptr = (l4csmu_sat_recv_data_req_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &l4csmu_sat_recv_data_req_len);

    kal_trace(TRACE_FUNC, L4CSMU_SAT_RECV_DATA_REQ_HANDLER);

    if (l4csmu_sat_recv_data_req_ptr->res == SAT_PROACTIVE_CMD_TERMINATED_BY_USER)
    {
        soc_close(this_smu->sate_channel[CH].socket_context.socket_id);
        /* cbm_release_bearer(MOD_SMU, CBM_INVALID_APP_ID); */
        smu_free_account(CH);

        l4csmu_sat_notify_mmi_ind_ptr = (l4csmu_sat_notify_mmi_ind_struct*)
            construct_local_para(sizeof(l4csmu_sat_notify_mmi_ind_struct), TD_UL);

        sat_recv_data_res_ptr = (sat_recv_data_res_struct*)
            construct_local_para(sizeof(sat_recv_data_res_struct), TD_DL);

        l4csmu_sat_notify_mmi_ind_ptr->state = SAT_RECEIVE_DATA_TERMINATED;

        kal_mem_cpy(sat_recv_data_res_ptr->cmd_detail, this_smu->sate_channel[CH].cmd_detail, 5);

        sat_recv_data_res_ptr->res = SAT_PROACTIVE_CMD_TERMINATED_BY_USER;
        sat_recv_data_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;
        sat_recv_data_res_ptr->ch_type = this_smu->sate_channel[CH].bearer;
        sat_recv_data_res_ptr->ch_data_length = 0xFF;

        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SAT_NOTIFY_MMI_IND, l4csmu_sat_notify_mmi_ind_ptr, NULL);

        smu_send_ilm(MOD_SIM, SMU_L4C_SAP, MSG_ID_SAT_RECV_DATA_RES, sat_recv_data_res_ptr, NULL);

    }

}

#define SATE_CHANNEL_STATUS_FLAG 1


/*****************************************************************************
 * FUNCTION
 *  sat_ch_status_ind_handler
 * DESCRIPTION
 *  This function is used to request for the channel status.
 * CALLS
 *  
 * PARAMETERS
 *  smu_ilm_ptr     [?]     
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  
 *****************************************************************************/
void sat_ch_status_ind_handler(ilm_struct *smu_ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sat_ch_status_ind_struct *sat_ch_status_ind_ptr;
    kal_uint16 sat_ch_status_ind_len = 0;

    sat_ch_status_res_struct *sat_ch_status_res_ptr;

    kal_uint8 CH = this_smu->sate_current_channel;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, SAT_CH_STATUS_IND_HANDLER);

    sat_ch_status_ind_ptr = (sat_ch_status_ind_struct*)
        get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &sat_ch_status_ind_len);

    sat_ch_status_res_ptr = (sat_ch_status_res_struct*) construct_local_para(sizeof(sat_ch_status_res_struct), TD_DL);

    kal_mem_cpy(sat_ch_status_res_ptr->cmd_detail, sat_ch_status_ind_ptr->cmd_detail, 5);

    sat_ch_status_res_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
    sat_ch_status_res_ptr->cause = SAT_BIP_NO_SPECIFIC_CAUSE;
    sat_ch_status_res_ptr->channel_status[0] = this_smu->sate_channel[CH].channel_status[0];
    sat_ch_status_res_ptr->channel_status[1] = this_smu->sate_channel[CH].channel_status[1];

    smu_send_ilm(MOD_SIM, PS_SIM_SAP, MSG_ID_SAT_CH_STATUS_RES, sat_ch_status_res_ptr, NULL);

}

#endif /* __SATCE__ */ 

