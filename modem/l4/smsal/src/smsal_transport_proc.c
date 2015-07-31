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
 * smsal_transport_proc.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions related to transportation.
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

#ifndef __SMSAL_XXX_C
#define __SMSAL_XXX_C
#endif

/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "md_mw_sap.h"
#include "sms_msgid.h"
#include "l4_msgid.h"
#include "sim_ps_msgid.h"
//#include "soc_msgid.h"

/* Task Management */
#include "task_config.h"

/* SMSAL <--> L4C */
#include "l4c_common_enum.h"            /* For src id */
#include "l4_ps_api.h"
#include "mcd_l4_common.h"


#include "l4c_common_enum.h"
#include "l4c2smsal_struct.h"
#include "smsal_l4c_defs.h"
#include "smsal_l4c_funcs.h"

#include "smsal_l4c_enum.h"

/* SMS Peer Messsages */
#include "smsal_peer_pun.h"
#include "smsal_peer_struct.h"

/* SMS <--> SMSAL */
#include "mnsms_struct.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "l3_inc_enums.h"
#include "smsal_enums.h"
#include "smsal_timer.h"
#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_msgbox.h"
#include "smsal_context.h"
#include "smsal_checks.h"
#include "smsal_transport_proc.h"
#include "smsal_msg_proc.h"
#include "smsal_other_funcs.h"
#include "smsal_l4c_msgs.h"
#include "smsal_sms.h"
#include "smsal_utils.h"
#include "smsal_storage.h"
#include "smsal_parameter.h"
#include "smsal2soc_struct.h"

/* SIM */
#include "ps2sim_struct.h"
#include "sim_common_enums.h"

/* SAT */
#if defined (__SAT__)
#include "sat_def.h"
#include "ps2sat_struct.h"
#endif

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "smslib_def.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "smslib_others.h"
#include "smslib_enum.h"
#include "smslib_decode.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"
#include "ps_public_struct.h"
#include "kal_public_defs.h"

#undef  _FILE_CODE_
#define _FILE_CODE_ _SMSAL_TRANSPORT_PROC_C_

#ifdef __SMSAL_DISCARD_PATENT__
/* MAUI_00733041 [SMSAL][Revise] discard incoming message if there exists discard patent in OA */
#include "custom_sms_config.h"
#endif

/*****************************************************************************
 * 
 * Functions & tables for MT SMS
 *
 ****************************************************************************/

/*------------------------------------------------------------- 
 * The following three tables are used when receive a MT SMS,
 * pls refer SMSAL Detailed Design Document 6.10 
 *-------------------------------------------------------------*/

/*------------------------------------------------------------- 
 * Use __MODEM_CARD__ to distinguish if it is Data Card Project(No display device).
 * Because we need to have special handling for Data Card Project in order to 
 * meet 3GPP 27.005 +CNMI NOTE 5 define:
 * NOTE 5: If AT command interface is acting as the only display device, 
 *         the ME must support storing of class 0 messages and messages 
 *         in the message waiting indication group (discard message); refer table 2)
 *
 * PS: We can't use EMPTY_MMI to be the criterion.
 *     ex: SmartPhone Project also define EMPTY_MMI, but in fact,
 *         SmartPhone Project has display devise.
 *-------------------------------------------------------------*/

/*----------------------------------------
 * Table1 determine :
 * bit 0 (0x01): need to store or not
 * bit 1 (0x02): need CNMA or not
 *----------------------------------------*/
const kal_uint8 SMSAL_NMI_TABLE1[4][NUM_OF_NMI_MSG_ENUM] =
{
    /* class0 class1 class2 class3 NoClass MW_D MW_S */

    /* mt = 0 */
#ifndef __MODEM_CARD__
    {0, 1, 1, 1, 1, 0, 1},
#else
    {1, 1, 1, 1, 1, 1, 1},
#endif

    /* mt = 1 */
#ifndef __MODEM_CARD__
    {0, 1, 1, 1, 1, 0, 1},
#else
    {1, 1, 1, 1, 1, 1, 1},
#endif

    /* mt = 2 */
#ifndef __MODEM_CARD__
    {0, 2, 1, 2, 2, 0, 1},
#else
    {2, 2, 1, 2, 2, 2, 1},
#endif

    /* mt = 3 */
#ifndef __MODEM_CARD__
    {0, 1, 1, 2, 1, 0, 1}
#else
    {1, 1, 1, 2, 1, 1, 1}
#endif
};

/*--------------------------------------------------------
 * Table2 determine :
 * 1) need to send indication to LMI or not
 * 2) if needed, what kind of indication shall be sent
 *
 *       (0x00): no indication is needed (update msgbox only)
 * bit 0 (0x01): index indication (normal message)
 * bit 1 (0x02): display immediately indication (Class 0)
 * bit 2 (0x04): message waiting indication
 *--------------------------------------------------------*/
const kal_uint8 SMSAL_NMI_TABLE2[4][NUM_OF_NMI_MSG_ENUM] =
{
    /* class0 class1 class2 class3 NoClass MW_D MW_S */

    /* mt = 0 */
#ifndef __MODEM_CARD__
    {2, 1, 1, 1, 1, 6, 5},
#else
    {3, 1, 1, 1, 1, 7, 5},
#endif

    /* mt = 1 */
#ifndef __MODEM_CARD__
    {2, 1, 1, 1, 1, 6, 5},
#else
    {3, 1, 1, 1, 1, 7, 5},
#endif

    /* mt = 2 */
    {2, 0, 1, 0, 0, 6, 5},

    /* mt = 3 */
#ifndef __MODEM_CARD__
    {2, 1, 1, 0, 1, 6, 5}
#else
    {3, 1, 1, 0, 1, 7, 5}
#endif
};

/*--------------------------------------------------------
 * Table3 determine :
 * 1) need to send indication to RMI or not
 * 2) if needed, what kind of indication shall be sent
 *
 *       (0x00): no indication is needed 
 * bit 0 (0x01): send index indication (+CMTI)
 * bit 1 (0x02): send full SMS (+CMT)
 *--------------------------------------------------------*/
const kal_uint8 SMSAL_NMI_TABLE3[4][NUM_OF_NMI_MSG_ENUM] =
{
    /* class0 class1 class2 class3 NoClass MW_D MW_S */

    /* mt = 0 */
    {0, 0, 0, 0, 0, 0, 0},

    /* mt = 1 */
#ifndef __MODEM_CARD__
    {0, 1, 1, 1, 1, 0, 1},
#else
    {1, 1, 1, 1, 1, 1, 1},
#endif

    /* mt = 2 */
    {2, 2, 1, 2, 2, 2, 1},

    /* mt = 3 */
#ifndef __MODEM_CARD__
    {0, 1, 1, 2, 1, 0, 1}
#else
    {1, 1, 1, 2, 1, 1, 1}
#endif
};

#ifndef __SMS_STORAGE_BY_MMI__
const smsal_type_of_msg_waiting_enum SMSAL_MESSAGE_WAITING_PRIORITY[2][SMSAL_MAX_MW_SOURCE] = 
{

    /* t_mode=0: Normal case */
    {
        
        /* 0 (High) */    
        SMSAL_MSG_WAIT_CPHS,
        
    #ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
        /* 1 */
        SMSAL_MSG_WAIT_UDH_EVM,
    #endif
        
        /* 2 */    
        SMSAL_MSG_WAIT_UDH,
        
        /* 3 (Low) */    
        SMSAL_MSG_WAIT_DCS
    },

    /* t_mode=1: OPERATOR_TEST_ATNT */
    {
    #ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
        /* 0 (High) */
        SMSAL_MSG_WAIT_UDH_EVM,
    #endif
        /* 1 */    
        SMSAL_MSG_WAIT_UDH,
        
        /* 2 */    
        SMSAL_MSG_WAIT_CPHS,

        /* 3 (Low) */    
        SMSAL_MSG_WAIT_DCS
    }
};
#endif

void smsal_consult_nmi_table(smsal_msg_class_enum mclass,
                             kal_uint8 *table1,                             
                             kal_uint8 *table2,
                             kal_uint8 *table3)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
 
    *table1 = SMSAL_NMI_TABLE1[smsal_para_ptr->rmi.nmi_para.mt][mclass];

    *table2 = SMSAL_NMI_TABLE2[smsal_para_ptr->rmi.nmi_para.mt][mclass];

    *table3 = SMSAL_NMI_TABLE3[smsal_para_ptr->rmi.nmi_para.mt][mclass];
}

#ifndef __SMS_STORAGE_BY_MMI__
void smsal_message_waiting_handler(smsal_pdu_decode_struct *pdu_decode)
{
    smsal_tpdu_decode_struct   *tpdu_decode_ptr;
    smsal_msg_waiting_struct   *msg_wait;
    smsal_msg_class_enum       *msg_class;
    smsal_deliver_peer_struct  *deliver_ptr;
    peer_buff_struct           *peer_ptr;
    smsal_mwis_struct          *mwis;
    kal_uint8                  *data, *pdu_ptr;
    smsal_header_info_union    msg_header;
    kal_uint16                 message_len, pdu_len;
    kal_uint8                  i, ind_type, ind_num, coding_group, dcs;
    kal_uint8                  udhl, read_byte = 0, iei, ie_len;
    kal_bool                   udh_needstore = KAL_FALSE, dcs_needstore = KAL_FALSE;
    kal_uint8                  t_mode = 0;

    if (pdu_decode->tpdu.mti == SMSAL_MTI_SUBMIT)
    {
        data = pdu_decode->tpdu.data.submit_tpdu.user_data;
        dcs = pdu_decode->tpdu.data.submit_tpdu.dcs;
    }
    else if (pdu_decode->tpdu.mti == SMSAL_MTI_STATUS_REPORT)
    {
        data = pdu_decode->tpdu.data.report_tpdu.user_data;
        dcs = pdu_decode->tpdu.data.report_tpdu.dcs;
    }
    else
    {
        data = pdu_decode->tpdu.data.deliver_tpdu.user_data;
        dcs = pdu_decode->tpdu.data.deliver_tpdu.dcs;
    }

    tpdu_decode_ptr = (smsal_tpdu_decode_struct *)&(pdu_decode->tpdu);
    msg_wait = (smsal_msg_waiting_struct *)&(pdu_decode->tpdu.msg_wait);
    msg_class = (smsal_msg_class_enum *)&(pdu_decode->tpdu.msg_class);
    mwis = (smsal_mwis_struct *)&(pdu_decode->tpdu.msg_wait.mwis);

    deliver_ptr = (smsal_deliver_peer_struct *)&(pdu_decode->tpdu.data.deliver_tpdu);

    msg_wait->line_no = SMSAL_LINE_1;



    /* test mode query*/
    if( (query_ps_conf_test_mode() == PS_CONF_TEST_OPERATOR) &&
        (query_ps_conf_test_profile_setting() == OPERATOR_TEST_ATNT))
    {
        t_mode = 1;
    }

    
    /* Start handle message waiting */
    for ( i = SMSAL_MAX_MW_SOURCE ; i > 0 ; i-- )
    {
        switch (SMSAL_MESSAGE_WAITING_PRIORITY[t_mode][i-1])
        {
            case SMSAL_MSG_WAIT_UDH:
            {
                if ((msg_wait->type_of_info & SMSAL_MSG_WAIT_UDH) == SMSAL_MSG_WAIT_UDH)
                {
                    udhl = *data;
                    
                    read_byte += 1;
                    
                    while (read_byte < udhl)
                    {
                        /* Get IEI */
                        iei = *(data + read_byte);
                    
                        /* Get IE Length */
                        ie_len = *(data + read_byte + 1);
                    
                        read_byte += 2;
                    
                        if (iei == SMSAL_SPECIAL_MSG_IND_IEI)
                        {
                            if (msg_wait != NULL)
                            {
                                /*---------------------------------------------- 
                                 * Special SMS Message Indication 
                                 *----------------------------------------------*/
                                ind_type = *(data + read_byte) & 0x03;
                                
#ifdef __REL6__
                                /* Bits 432 indicate the extended message indication type.
                                        000 No extended message indication type.
                                        001 Video Message Waiting
                                   Other values of bits 432 where bits 0 and 1 are ��11�� 
                                   are Reserved for future use */
                                if( ind_type == 0x03 )
                                {
                                    if( ((*(data + read_byte) & 0x1c) >> 2) > 0x01 )
                                    {
                                        // reserved value
                                        break;
                                    }                    
                                }
                                /* Values of bits 432 where bits 0 and 1 are 
                                   ��00��, ��01�� or ��10�� are Reserved for future use */
                                else
                                {
                                    if( (*(data + read_byte) & 0x1c) != 0x00 )
                                    {
                                        // reserved value
                                        break;
                                    }
                                }
            
                                if( (*(data + read_byte) & 0x1f) == 0x07 )
                                {
                                    ind_type = SMSAL_MW_VIDEO_MSG;
                                }
                                                    
                                #ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
                                /* Enhanced Voice Mail with high priority */
                                if( msg_wait->type_of_info & SMSAL_MSG_WAIT_UDH_EVM )
                                {
                                    if( ind_type == SMSAL_MW_VM )
                                        break;
                                }
                                #endif
#endif

                                if ((*(data + read_byte) & 0x80) == 0x80)
                                {
                                    msg_wait->need_store = KAL_TRUE;
                                    udh_needstore = KAL_TRUE;
                                }
                                else
                                {
                                    /* If DCS want to store, don't overwrite */
                                    if (dcs_needstore == KAL_FALSE)
                                        msg_wait->need_store = KAL_FALSE;
                                }
                
                                /* Msg count here will override the indication in DCS. */
                                ind_num = *(data + read_byte + 1);

#ifdef __REL6__
                                msg_wait->msp = (*(data + read_byte) & 0x60) >> 5;
#else
                                msg_wait->msp = 0; //smsal_para_ptr_g->common.selected_msp;
#endif

                                if( msg_wait->msp >= SMSAL_MAX_MSP_NUM )
                                {
                                    msg_wait->msp = 0;
                                }
                                
                                if (ind_type < NUM_OF_MSG_WAITING_TYPE)
                                {
                                    msg_wait->ind_flag[ind_type] = KAL_TRUE;
                
                                    if (ind_num == 0)
                                    {
                                        msg_wait->is_show_num[ind_type] = KAL_FALSE;
                                        msg_wait->is_clear[ind_type] = KAL_TRUE;
                                    }
                                    else
                                    {
                                        msg_wait->is_show_num[ind_type] = KAL_TRUE;
                                        msg_wait->is_clear[ind_type] = KAL_FALSE;
                                    }
           
                                    mwis->waiting_num[ind_type] = ind_num;
                                }
                    
                            }
                        }
                        read_byte += ie_len;
                    }  

                }
                break;
            }

#ifdef __REL6__
            #ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
            case SMSAL_MSG_WAIT_UDH_EVM:
            {
                if ((msg_wait->type_of_info & SMSAL_MSG_WAIT_UDH_EVM) == SMSAL_MSG_WAIT_UDH_EVM)
                {
                    udhl = *data;
                    
                    read_byte += 1;
                    
                    while (read_byte < udhl)
                    {
                        /* Get IEI */
                        iei = *(data + read_byte);
                    
                        /* Get IE Length */
                        ie_len = *(data + read_byte + 1);
                    
                        read_byte += 2;
                    
                        if (iei == SMSAL_ENHANCED_VM_INFO_IEI)
                        {
                            if (msg_wait != NULL)
                            {
                                ind_num = smsal_decode_evmi(data+read_byte-2, (kal_uint16)(ie_len+2), (smsal_evmi_struct *)&(msg_wait->evmi));
                                    
                                if( ind_num != 0 )
                                {   
                                    if ( msg_wait->evmi.is_store )
                                    {
                                        msg_wait->need_store = KAL_TRUE;
                                    }
            
                                    /* Don't set store to false. */
                                    /* It will override the setting in DCS. */
            
                                    /* Msg count here will override the indication in DCS. */
                                    msg_wait->msp = msg_wait->evmi.multi_sub_profile;
                                    ind_num = msg_wait->evmi.number_of_vm_unread;
                                    
                                    msg_wait->ind_flag[SMSAL_MW_VM] = KAL_TRUE;
            
                                    if (ind_num == 0)
                                    {
                                        msg_wait->is_show_num[SMSAL_MW_VM] = KAL_FALSE;
                                        msg_wait->is_clear[SMSAL_MW_VM] = KAL_TRUE;
                                    }
                                    else
                                    {
                                        msg_wait->is_show_num[SMSAL_MW_VM] = KAL_TRUE;
                                        msg_wait->is_clear[SMSAL_MW_VM] = KAL_FALSE;
                                    }
            
                                    mwis->waiting_num[SMSAL_MW_VM] = ind_num;
            
                                }
            
                            }

                        }
                        read_byte += ie_len;
                    }  

                }
                break;
            }
            #endif
#endif

#if defined (__CPHS__)   
            case SMSAL_MSG_WAIT_CPHS:
            {
                if (((msg_wait->type_of_info & SMSAL_MSG_WAIT_CPHS) == SMSAL_MSG_WAIT_CPHS) &&
                    ((pdu_decode->tpdu.mti == SMSAL_MTI_DELIVER) || 
                    (pdu_decode->tpdu.mti == SMSAL_MTI_UNSPECIFIED)))
                {
                    peer_ptr = smsal_get_msg_content(KAL_FALSE, pdu_decode, &(message_len), &msg_header);
                    
                    if (peer_ptr != NULL)
                    {
                        pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);
                    
                        if ((message_len - tpdu_decode_ptr->udhl) == 1 &&
                            *(pdu_ptr + tpdu_decode_ptr->udhl) == 0x20)   /* a space */
                        {
                            /* not store. */
                            msg_wait->need_store = KAL_FALSE;
                        }
                        else
                            msg_wait->need_store = KAL_TRUE;
                    
                        free_ctrl_buffer(peer_ptr);
                    }
                    else
                        msg_wait->need_store = KAL_FALSE;
                
                    if ((deliver_ptr->orig_addr[2] & SMSAL_CPHS_VM_LINE_BITS) == SMSAL_CPHS_VM_LINE_BITS)
                        msg_wait->line_no = SMSAL_LINE_2;
                    
                    msg_wait->ind_flag[SMSAL_MW_VM] = KAL_TRUE;
                    
                    /* Extract message waiting data from first two octets of TP-OA */
                    /* Override the voice msg waiting count of DCS and UDH. */
                    if ((deliver_ptr->orig_addr[2] & SMSAL_CPHS_VM_SET_BITS) == SMSAL_CPHS_VM_SET_BITS)
                    {
                        /* Set VM Waiting */
                        if (mwis->waiting_num[SMSAL_MW_VM] == 0)
                        {
                            /* According AT&T requirement, write 0xFF */
                            mwis->waiting_num[SMSAL_MW_VM] = 0xFF;
                            msg_wait->is_show_num[SMSAL_MW_VM] = KAL_FALSE;
                        }
                        msg_wait->is_clear[SMSAL_MW_VM] = KAL_FALSE;
                    }
                    else
                    {
                        /* Clear VM Waiting */
                        mwis->waiting_num[SMSAL_MW_VM] = 0;
                        msg_wait->is_clear[SMSAL_MW_VM] = KAL_TRUE;
                    }
                }
                break;
            }
#endif

            case SMSAL_MSG_WAIT_DCS:
            {
                if ((msg_wait->type_of_info & SMSAL_MSG_WAIT_DCS) == SMSAL_MSG_WAIT_DCS)
                {
                    if (msg_wait != NULL)
                    {
                        coding_group = dcs >> 4;
                        ind_type = dcs & 0x03;

                        /* 1101: msg wait ind (store) */
                        /* 1110: msg wait ind (store) */
                        if (((coding_group & 0x0f) == 0x0d) ||
                            ((coding_group & 0x0f) == 0x0e))
                        {
                            msg_wait->need_store = KAL_TRUE;
                            *msg_class = SMSAL_MW_STORE;
                            dcs_needstore = KAL_TRUE;
                        }
                        else
                        {
                            *msg_class = SMSAL_MW_DISCARD;
                            
                            /* If UDH want to store, don't overwrite */
                            if (udh_needstore == KAL_FALSE)
                            {
                                msg_wait->need_store = KAL_FALSE;
                            }
                        }
            
                        switch (ind_type)
                        {
                            
                            case SMSAL_MW_VM:
                            case SMSAL_MW_FAX:
                            case SMSAL_MW_EMAIL:
                            case SMSAL_MW_OTHER:
                            {
                                msg_wait->ind_flag[ind_type] = KAL_TRUE;
                                msg_wait->is_show_num[ind_type] = KAL_FALSE;
                                
                                if ((dcs & 0x08) == 0x08)
                                {
                                    mwis->waiting_num[ind_type] = 0xFF;
                                    msg_wait->is_clear[ind_type] = KAL_FALSE;
                                }
                                else
                                {
                                    mwis->waiting_num[ind_type] = 0;
                                    msg_wait->is_clear[ind_type] = KAL_TRUE;
                                }
                                break;
                            }
                            default:
                                break;
                        }                           /* switch */
                    }
                }
                break;
            }
           
            default:
                break;
        }
    }
}
#endif

/*****************************************************************************
* FUNCTION
*  smsal_mt_msg_hdlr
* DESCRIPTION
*   This function handles normal MT short message.
*
* PARAMETERS
*  a  IN       deliver_ptr, contain the unpack SMS-DELIVER peer message
*  b  IN       peer_buff_ptr
*  c  IN       local_ptr
* RETURNS
*  KAL_TRUE:  free deliver_ptr
*  KAL_FALSE: postpone freeing  
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_mt_msg_hdlr(smsal_pdu_decode_struct *pdu_decode,
                           peer_buff_struct        *peer_buff_ptr,
                           sms_deliver_struct      *local_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
#endif	
    smsal_tpdu_decode_struct    *tpdu_decode;
    kal_uint8                   *pdu_ptr;
    kal_uint16                  pdu_len;
    kal_uint8                   need_store, ind1, ind2;
    kal_bool                    free_flag = KAL_TRUE;
#if defined(__SMS_STORAGE_BY_MMI__)
    //NA
#else
    smsal_mt_msg_aux_info_struct *aux_info;
    kal_uint8                   id;
    kal_bool                    ret_val = KAL_TRUE;
#endif    

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_MT_MSG_HDLR);

    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    ASSERT(pdu_decode != NULL);

    tpdu_decode = &(pdu_decode->tpdu);

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#else
    /* Robert remove. 06-16-2004                       */
    /* Not only these two APP would use port function. */
    /* Example : vCard                                 */
    /* if(is_app_present(APP_WAP)|| is_app_present(APP_JAVA)) */
    {
        module_type dest_mod;

        if (tpdu_decode->port.dest_port != SMSAL_INVALID_PORT_NUM)
        {
            dest_mod = smsal_dispatcher(tpdu_decode->port.dest_port);

            switch (dest_mod)
            {
#if defined (__TCPIP__)
                case MOD_SOC:
                {
                    smsal_deliver_ack_post(local_ptr->smi, 0, 0, 0, 0, NULL);

                    /* exclude header of TPDU, leave only user data only */
                    remove_head_of_peer_buff(peer_buff_ptr, tpdu_decode->offset);

                    hold_peer_buff(peer_buff_ptr);

                    smsal_forward_to_socket(peer_buff_ptr, tpdu_decode, &local_ptr->sc_addr);

                    return free_flag;
                }
#endif

                case MOD_SMSAL:
                    /* default destination. */
#ifdef __SMS_DISCARD_UNREG_APP_PORT_MTSMS__
                    kal_brief_trace(TRACE_WARNING, SMSAL_DISCARD_UNREG_APP_PORT, tpdu_decode->port.dest_port);
                    smsal_deliver_ack_post(local_ptr->smi, 0, 0, 0, 0, NULL);
                    return free_flag;
#endif
                    break;

                default:
                {
                    smsal_deliver_ack_post(local_ptr->smi, 0, 0, 0, 0, NULL);

                    smsal_new_app_data_ind(tpdu_decode, (kal_uint16) dest_mod);

                    return free_flag;
                }
                    break;
            }
        }
    }
#endif //__SMS_STORAGE_BY_MMI__ WISDOM_MMI

   /*---------------------------------------------------
    * 23.040 9.2.3.24
    * In the event of a conflict between UDH setting and the setting of the Data Coding Scheme 
    * (see 3GPP TS 23.038]) then the message shall be stored
    *---------------------------------------------------*/
   if ((tpdu_decode->msg_class != SMSAL_CLASS0) &&
       (tpdu_decode->msg_wait.is_msg_wait == KAL_TRUE) &&
       (tpdu_decode->msg_wait.need_store == KAL_TRUE) &&
       (tpdu_decode->msg_class == SMSAL_MW_DISCARD))
   {
        tpdu_decode->msg_class = SMSAL_MW_STORE;
   }
   /* [MAUI_00818512] Special SMS Message Indication, discard message can't be stored */
   else if (((tpdu_decode->msg_class == SMSAL_CLASS_UNSPECIFIED) ||
            (tpdu_decode->msg_class == SMSAL_MW_STORE)) &&
            (tpdu_decode->msg_wait.is_msg_wait == KAL_TRUE) &&
            (tpdu_decode->msg_wait.need_store == KAL_FALSE) )
   {
        tpdu_decode->msg_class = SMSAL_MW_DISCARD;
   }


#if defined( __SMS_SOFTBANK__)
    if(tpdu_decode->msg_class == SMSAL_CLASS2)
    {
        tpdu_decode->msg_class = SMSAL_CLASS_UNSPECIFIED;
		/* SMS class0/class2 is not supported. 
		     SMS class0/class2 messages will be stored on UE except 
                   - class2 TP-PID�G01111100(ANSI-136R-DATA)
                   - calss2 TP-PID�G01111111((U)SIM Data Download)
              */
    }
#endif

   /*---------------------------------------------------
    * Check whether this message need to store or not
    * if no need to store, check wheter expect +CNMA
    *---------------------------------------------------*/
    smsal_consult_nmi_table(tpdu_decode->msg_class, &need_store, &ind1, &ind2);

#ifndef __SMS_STORAGE_BY_MMI__
    if ((need_store & SMSAL_MSG_STORE_BITS) == SMSAL_MSG_STORE_BITS)
    {
        /*
         * Need to store this message which includes
         * * status byte + SCA + MT message 
         */
        if ((ret_val = smsal_get_pending_act_id(&id)) == KAL_TRUE)
        {
            (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_DELIVER;
            (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_MT_MSG;

            aux_info = (smsal_mt_msg_aux_info_struct *)
                        get_ctrl_buffer(sizeof(smsal_mt_msg_aux_info_struct));
            (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

            aux_info->smi = local_ptr->smi;
            aux_info->pdu_decode = pdu_decode;
            aux_info->is_msg_writing = KAL_FALSE;

            (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = (local_para_struct *) local_ptr;
            (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = peer_buff_ptr;
            hold_local_para((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);
            hold_peer_buff(peer_buff_ptr);

            ret_val = smsal_store_new_msg(id, pdu_ptr, pdu_len, local_ptr);

            /*
             * ---------------------------------------------------------------
             * *  if ret_val == KAL_TRUE:
             * *      wait storage cnf , thus postpond to free resource,
             * *  else:
             * *      corresponding resources are free in smsal_free_pending_act
             * * --------------------------------------------------------------- 
             */
            free_flag = KAL_FALSE;

            if (ret_val == KAL_FALSE)
            {
                /*
                 * if there is no space to store and the necessary files 
                 * * are not read yet. We shall hold this request and
                 * * wait until there is a space to store 
                 */
                if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE)
                {
                    SET_FLAGS(MTSMS_WAIT_FLAG);
                    return KAL_FALSE;   /* postpond to free resource */
                }

                smsal_free_pending_act(id);
            }
        }
        else
        {
            smsal_deliver_nack_post(local_ptr->smi, UNSPECIFIED_TP_FCS, 0, 0, 0, 0, NULL);

        }                               /* if smsal_get_pending_act_id */
    }
    else
#endif // __SMS_STORAGE_BY_MMI__
    {
      /*------------------------------------------------------------------
       * No storing action is needed!!
       *
       * Check whether send New Message Indication (NMI) to MMI
       *------------------------------------------------------------------*/
        smsal_new_msg_ind(pdu_decode, local_ptr->smi, peer_buff_ptr);

    }                                   /* if (action == 1) */

    return free_flag;

}                                       /* end of smsal_mt_msg_hdlr */

#if !defined(__SMS_STORAGE_BY_MMI__)
/*****************************************************************************
* FUNCTION
*  smsal_decode_mt_msg
* DESCRIPTION
*   This function decodes the MT message and put result in SMS PDU struct.
*
* PARAMETERS
*  a  IN       deliver_ptr, contain the unpack SMS-DELIVER peer message
*  b  IN       local_ptr
*  c  IN       *pdu_ptr
*  d  IN       pdu_len
* RETURNS
*  pointer of SMS PDU 
* GLOBALS AFFECTED
*  none
*****************************************************************************/
smsal_pdu_decode_struct *smsal_decode_mt_msg(smsal_deliver_peer_struct *deliver_ptr,
                                             sms_deliver_struct        *local_ptr,
                                             kal_uint8                 *pdu_ptr,
                                             kal_uint16                pdu_len)
{
    smsal_pdu_decode_struct *pdu_decode_ptr;

    pdu_decode_ptr = (smsal_pdu_decode_struct *)
                      get_ctrl_buffer(sizeof(smsal_pdu_decode_struct));

    smsal_reset_tpdu_decode_struct(&pdu_decode_ptr->tpdu);

    pdu_decode_ptr->tpdu.mti = SMSAL_MTI_DELIVER;
    if (deliver_ptr != NULL)
        pdu_decode_ptr->tpdu.data.deliver_tpdu = *deliver_ptr;
    else
        pdu_decode_ptr->tpdu.data.deliver_tpdu.user_data_size = 0;

    /* Save SCA */
    pdu_decode_ptr->sca = local_ptr->sc_addr;

    if (smsal_decode_tpdu(&pdu_decode_ptr->tpdu,
                          pdu_ptr,
                          (kal_uint8) pdu_len) == KAL_FALSE)

    {
        free_ctrl_buffer(pdu_decode_ptr);
        return NULL;
    }

    if (pdu_decode_ptr->tpdu.msg_wait.is_msg_wait == KAL_TRUE)
    {
        smsal_message_waiting_handler(pdu_decode_ptr);
    }

    return pdu_decode_ptr;
}                                       /* end of smsal_decode_mt_msg */
#endif // __SMS_STORAGE_BY_MMI__

/*****************************************************************************
* FUNCTION
*  smsal_deliver_ack_post
* DESCRIPTION
*   This function send DELIVER REPORT ACK.
*
* PARAMETERS
*  a  IN          smi
*  b  IN          failure_cause
*  c  IN          para_ind, parameter indicator, if this is set to zero
*                 following arguments shall are ignored
*  d  IN          pid
*  e  IN          dcs
*  f  IN          data_len, number of octets of TP-User-Data
*  g  IN          data, pointer to TP-User-Data
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_deliver_nack_post(kal_uint8               smi,
                             smsal_error_cause_enum  failure_cause,
                             kal_uint8               para_ind,
                             kal_uint8               pid,
                             kal_uint8               dcs,
                             kal_uint8               data_len,
                             kal_uint8               *data
                             )
{
    smsal_deliver_report_nack_peer_struct deliver_nack_struct;
    peer_buff_struct *peer_ptr = NULL;
    sms_deliver_report_nack_struct *local_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_DELIVER_NACK_POST, smi, failure_cause);

    if( smi >= 7 /* SMS_MAX_TL_SEG */ )
    {
        return;
    }

    if (failure_cause != CM_INVALID_MANDATORY_INF)
    {
        smsal_deliver_report_nack_peer_struct_alloc(&deliver_nack_struct);

        deliver_nack_struct.fill_bits2 = 0;
        deliver_nack_struct.udh_p = KAL_FALSE;
        deliver_nack_struct.fill_bits1 = 0;
        deliver_nack_struct.msg_type = SMSAL_MTI_DELIVER_REPORT;
        deliver_nack_struct.fail_cause = failure_cause;
        deliver_nack_struct.params_p = para_ind;

        if ((para_ind & 0x01) == 0x01)      /* pid present */
            deliver_nack_struct.pid = pid;

        if ((para_ind & 0x02) == 0x02)      /* dcs present */
            deliver_nack_struct.dcs = dcs;

        /* User Data present */
        if (((para_ind & 0x04) == 0x04) && (data_len > 0))
        {
            deliver_nack_struct.user_data_len =
                (kal_uint8) smsal_msg_len_in_character(dcs,
                                                       data_len,       /* in octet */
                                                       *(data + data_len - 1));
            deliver_nack_struct.no_user_data = data_len;
            kal_mem_cpy(deliver_nack_struct.user_data, data, data_len);
        }

        pdu_len = (kal_uint16) ((smsal_deliver_report_nack_peer_struct_bits(&deliver_nack_struct) + 7) / 8);

        peer_ptr = (peer_buff_struct *) construct_peer_buff(pdu_len, 0, 0, TD_UL);
        pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);

        /* Pack the peer structure */
        smsal_deliver_report_nack_peer_struct_pack(pdu_ptr, &deliver_nack_struct, 0);

    }

    /* Allocate memory for local strucutre */
    local_ptr = (sms_deliver_report_nack_struct *)
                 construct_local_para(sizeof(sms_deliver_report_nack_struct), TD_UL);

    local_ptr->smi = smi;

    smsal_send_msg_to_sms(MSG_ID_SMS_DELIVER_REPORT_NACK,
                          (local_para_struct *) local_ptr,
                          peer_ptr);

    if (failure_cause != CM_INVALID_MANDATORY_INF)
    {
        smsal_deliver_report_nack_peer_struct_dealloc(&deliver_nack_struct);
    }
    
    kal_brief_trace(TRACE_PEER, SMSAL_MS_TO_NW_PEER_MSG, SMSAL__DELIVER_REPORT);

}                                       /* end of function smsal_deliver_nack_post */


/*****************************************************************************
* FUNCTION
*  smsal_deliver_ack_post
* DESCRIPTION
*   This function send DELIVER REPORT ACK.
*
* PARAMETERS
*  a  IN          smi
*  b  IN          para_ind, parameter indicator, if this is set to zero
*                 following arguments shall are ignored
*  c  IN          pid
*  d  IN          dcs
*  e  IN          data_len, number of octets of TP-User-Data
*  f  IN          data, pointer to TP-User-Data
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_deliver_ack_post(kal_uint8   smi,
                            kal_uint8   para_ind,
                            kal_uint8   pid,
                            kal_uint8   dcs,
                            kal_uint8   data_len, 
                            kal_uint8   *data
                           )
{
    smsal_deliver_report_ack_peer_struct deliver_ack_struct;
    peer_buff_struct *peer_ptr;
    sms_deliver_report_ack_struct *local_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_DELIVER_ACK_POST, smi);

    if( smi >= 7 /* SMS_MAX_TL_SEG */ )
    {
        return;
    }

    smsal_deliver_report_ack_peer_struct_alloc(&deliver_ack_struct);

    deliver_ack_struct.fill_bits2 = 0;
    deliver_ack_struct.udh_p = KAL_FALSE;
    deliver_ack_struct.fill_bits1 = 0;
    deliver_ack_struct.msg_type = SMSAL_MTI_DELIVER_REPORT;
    deliver_ack_struct.params_p = para_ind;

    if ((para_ind & 0x01) == 0x01)      /* pid present */
        deliver_ack_struct.pid = pid;

    if ((para_ind & 0x02) == 0x02)      /* dcs present */
        deliver_ack_struct.dcs = dcs;

    /* User Data present */
    if (((para_ind & 0x04) == 0x04) && (data_len > 0))
    {
        deliver_ack_struct.user_data_len =
            (kal_uint8) smsal_msg_len_in_character(dcs,
                                                   data_len,        /* in octet */
                                                   *(data + data_len - 1));
        deliver_ack_struct.no_user_data = data_len;
        kal_mem_cpy(deliver_ack_struct.user_data, data, data_len);
    }

    pdu_len = (kal_uint16) ((smsal_deliver_report_ack_peer_struct_bits(&deliver_ack_struct) + 7) / 8);

    peer_ptr = (peer_buff_struct *) construct_peer_buff(pdu_len, 0, 0, TD_UL);
    pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);

    /* Pack the peer structure */
    smsal_deliver_report_ack_peer_struct_pack(pdu_ptr, &deliver_ack_struct, 0);

    /* Allocate memory for local strucutre */
    local_ptr = (sms_deliver_report_ack_struct *)
                 construct_local_para(sizeof(sms_deliver_report_ack_struct), TD_UL);

    local_ptr->smi = smi;

    smsal_send_msg_to_sms(MSG_ID_SMS_DELIVER_REPORT_ACK,
                          (local_para_struct *) local_ptr,
                          peer_ptr);

    smsal_deliver_report_ack_peer_struct_dealloc(&deliver_ack_struct);

    kal_brief_trace(TRACE_PEER, SMSAL_MS_TO_NW_PEER_MSG, SMSAL__DELIVER_REPORT);
}                                       /* end of function smsal_deliver_ack_post */

#ifndef __SMS_STORAGE_BY_MMI__

/*---------------------------------------------------
 *
 * Main SMS-Deliver Handlers 
 * for storing new messages or replacing messages
 *
 *---------------------------------------------------*/
void smsal_deliver_cnf(kal_uint8   old_id,
                       kal_uint8   sub_act_code,
                       ilm_struct  *ilm_ptr,
                       kal_bool    is_from_sim)
{
    switch (sub_act_code)
    {
        case SMSAL_MT_MSG:
            smsal_store_new_msg_cnf(old_id);
            break;

        case SMSAL_REPLACE_READ_MSG:
            smsal_replace_read_msg_cnf(old_id, ilm_ptr, is_from_sim);
            break;

        case SMSAL_REPLACE_WRITE_MSG:
            smsal_replace_write_msg_cnf(old_id);
            break;

    #ifdef __SMSAL_DISCARD_PATENT__
    /* MAUI_00733041 [SMSAL][Revise] discard incoming message if there exists discard patent in OA */
        case SMSAL_DELETE_INDEX:
            smsal_delete_by_patent_cnf(old_id);
            break;
    #endif

        default:
            smsal_free_pending_act(old_id);
            break;
    }
}                                       /* end of smsal_deliver_cnf */


void smsal_deliver_rej(kal_uint8 old_id, kal_uint8 sub_act_code)
{
    switch (sub_act_code)
    {
        case SMSAL_MT_MSG:
            smsal_store_new_msg_rej(old_id);
            break;

        case SMSAL_REPLACE_WRITE_MSG:
        case SMSAL_REPLACE_READ_MSG:
            smsal_replace_msg_rej(old_id);
            break;

    #ifdef __SMSAL_DISCARD_PATENT__
    /* MAUI_00733041 [SMSAL][Revise] discard incoming message if there exists discard patent in OA */
        case SMSAL_DELETE_INDEX:
            smsal_delete_by_patent_rej(old_id);
            break;
    #endif

        default:
            smsal_free_pending_act(old_id);
            break;
    }
}                                       /* end of smsal_deliver_rej */


void smsal_replace_write_one_msg(kal_uint8 act_id,
                                 kal_uint16 index,
                                 peer_buff_struct * peer_buff_ptr,
                                 sms_addr_struct * sc_addr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    kal_uint8 data[SMSAL_SMS_LEN];

    (&(smsal_cntx_ptr->pending_act[act_id]))->sub_act_code = SMSAL_REPLACE_WRITE_MSG;

    /* Replace next message */
    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    smsal_prepare_stored_data(data, SMSAL_UNREAD_MSG, pdu_ptr, pdu_len, sc_addr);

    smsal_write_short_msg(act_id,
                          (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[index]))->storage_type,
                          (&(smsal_cntx_ptr->message_box[index]))->record_no, data, NULL, SMSAL_SMS_LEN);
}


void smsal_replace_read_one_msg(kal_uint8 act_id, kal_uint16 index)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    (&(smsal_cntx_ptr->pending_act[act_id]))->sub_act_code = SMSAL_REPLACE_READ_MSG;

    smsal_read_short_msg(act_id,
                         (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[index]))->storage_type,
                         (&(smsal_cntx_ptr->message_box[index]))->record_no);
}


#ifdef __SMS_DELAY_MTSMS_REPLACE_TYPE__
/*****************************************************************************
* FUNCTION
*  smsal_msg_replace_pending_hdlr
* DESCRIPTION
*   This function handles the replacement of MT short message during 
*   initialization
*
* PARAMETERS
*  a  IN       local_para_ptr
*  b  IN       peer_buff_ptr
* RETURNS
*  KAL_TRUE:  pending
*  KAL_FALSE: NACK to network 
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_msg_replace_pending_hdlr(local_para_struct *local_para_ptr,
                                        peer_buff_struct  *peer_buff_ptr,
                                        smsal_pdu_decode_struct  *pdu_decode)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool ret_val;
    kal_uint8 id;

    ret_val = smsal_get_pending_act_id(&id);
    
    if (ret_val == KAL_FALSE)
    {
        return KAL_FALSE;
    }
    
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_DELIVER;
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_REPLACE_PENDING_MSG;
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)pdu_decode;
    
    /* Replace the message */
    (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = peer_buff_ptr;
    hold_peer_buff(peer_buff_ptr);
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = local_para_ptr;
    hold_local_para(local_para_ptr);

    //(&(smsal_cntx_ptr->pending_act[id]))->is_processed = KAL_FALSE;
    (&(smsal_cntx_ptr->pending_act[id]))->action_status &= 0x7f;

    SET_FLAGS(MTSMS_WAIT_FLAG);
    // only one replace MT-SMS allowed
   
    return KAL_TRUE;
}
#endif

// MAUI_01925380 when storage size > 255, the repalce type index would be truncated
kal_uint16 smsal_msg_replace_find_next_test_index_type(kal_uint8 *search_status, 
                                                      kal_uint8 which_first)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8  first_storage_mask, second_storage_mask;
    kal_uint8  first_storage, second_storage;
    kal_uint16 begin = 0, end = SMSAL_MAX_MSG_NUM, used, i=0, first_index = SMSAL_MAX_MSG_NUM;

    if( which_first == SMSAL_SM )
    {
        first_storage_mask = 0x01;
        second_storage_mask = 0x02;
        first_storage = SMSAL_SM;
        second_storage = SMSAL_ME;
    }
    else
    {
        first_storage_mask = 0x02;
        second_storage_mask = 0x01;
        first_storage = SMSAL_ME;
        second_storage = SMSAL_SM;
    }


    // Find in first storage
    if( ((*search_status) & first_storage_mask) == 0x00 )
    {
        smsal_eqsi_query(first_storage, &begin,  &end, &used);
        for (i = begin ; i < end ; i++)
        {
            if (((&(smsal_cntx_ptr->message_box[i]))->state & SMSAL_MB_ENTRY_REPLACE_PENDING) ==
                SMSAL_MB_ENTRY_REPLACE_PENDING)
                break;
        }
    }
    
    if( i >= end || (((*search_status) & first_storage_mask) != 0x00))
    {
        (*search_status) |= first_storage_mask; // cancel first storage search
    
        // Find in second storage
        if( ((*search_status) & second_storage_mask) == 0x00 )
        {
            smsal_eqsi_query(second_storage, &begin,  &end, &used);
            for (i = begin ; i < end ; i++)
            {
                if (((&(smsal_cntx_ptr->message_box[i]))->state & SMSAL_MB_ENTRY_REPLACE_PENDING) ==
                    SMSAL_MB_ENTRY_REPLACE_PENDING)
                    break;
            }
        }
    
        if( i >= end || (((*search_status) & second_storage_mask) != 0x00))
        {
            (*search_status) |= second_storage_mask; // cancel second storage search
            first_index = SMSAL_MAX_MSG_NUM;
        }
        else
        {
            first_index = i;
        }
    }
    else
    {
        first_index = i;
    }

    return first_index;
}


// return index
// MAUI_01925380 when storage size > 255, the repalce type index would be truncated
kal_uint16 smsal_msg_replace_find_next_test_index(kal_uint8 *search_status,
                                                 kal_uint8 storage_type)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index = SMSAL_MAX_MSG_NUM;

    // search_status
    // bit0: SIM, bit1: NVRAM
    // 1:search done, 0: not yet

    if ( smsal_cntx_ptr->sms_prefer_order == SMSAL_SM_FIRST )
    {
        if( storage_type == SMSAL_ME_PREFER || storage_type == SMSAL_ME )
        {
            index = smsal_msg_replace_find_next_test_index_type(search_status, SMSAL_ME);
        }
        else
        {
            index = smsal_msg_replace_find_next_test_index_type(search_status, SMSAL_SM);
        }
    }
    else
    {
        if( storage_type == SMSAL_SM_PREFER || storage_type == SMSAL_SM )
        {
            index = smsal_msg_replace_find_next_test_index_type(search_status, SMSAL_SM);
        }
        else
        {
            index = smsal_msg_replace_find_next_test_index_type(search_status, SMSAL_ME);
        }
    }

    return index;

}


/*****************************************************************************
* FUNCTION
*  smsal_msg_replace_hdlr
* DESCRIPTION
*   This function handles the replacement of MT short message.
*
* PARAMETERS
*  a  IN       deliver_ptr, contain the unpack SMS-DELIVER peer message
*  b  IN       peer_buff_ptr
*  c  IN       local_ptr
* RETURNS
*  KAL_TRUE:  free deliver_ptr
*  KAL_FALSE: postpone freeing  
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_msg_replace_hdlr(smsal_pdu_decode_struct  *pdu_decode,
                                peer_buff_struct         *peer_buff_ptr,
                                sms_deliver_struct       *local_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool free_flag = KAL_TRUE;
    kal_bool ret_val;
    kal_uint16 first_index = SMSAL_INVALID_INDEX, num_rep = 0;
    kal_uint8 pid_type;                 /* Replace type or Return Call Message */
    kal_uint16 i;
    kal_uint8 id;
    kal_uint8 search_status = 0;
    kal_uint16 begin = 0, end = SMSAL_MAX_MSG_NUM, used;
    smsal_deliver_peer_struct *deliver_ptr;
    smsal_mt_msg_aux_info_struct *aux_info;

    deliver_ptr = &(pdu_decode->tpdu.data.deliver_tpdu);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_MSG_REPLACE_HDLR, deliver_ptr->pid);

    if (deliver_ptr->pid == SMSAL_PID_RCM)
        pid_type = SMSAL_MB_TYPE_RCM;
    else
        pid_type = SMSAL_MB_TYPE_REPLACE_MSG;

    /* Save PDU Decode Struct */
    /* Don't use the *deliver_ptr. Always set free_flag = KAL_TRUE; */

    if (pdu_decode->tpdu.msg_class != SMSAL_MW_DISCARD)
    {
        if( pdu_decode->tpdu.msg_class == SMSAL_CLASS2 )
        {
            smsal_eqsi_query(SMSAL_SM, &begin,  &end, &used);
            search_status = 0x02; // clean NVRAM search
        }
        
        /* Find the message which has the same PID & TP-OA */
        for (i = begin ; i < end ; i++)
        {
            if ((&(smsal_cntx_ptr->message_box[i]))->state == SMSAL_MB_ENTRY_VALID &&
                (&(smsal_cntx_ptr->message_box[i]))->mti == SMSAL_MTI_DELIVER)
            {
                /* Check PID is the REPLACE TYPE */
                if (((&(smsal_cntx_ptr->message_box[i]))->mb_type_ind & pid_type) != pid_type)
                {
                    continue;
                }

                num_rep++;

                /* mark the entry. */
                (&(smsal_cntx_ptr->message_box[i]))->state |= SMSAL_MB_ENTRY_REPLACE_PENDING;

                if (first_index == SMSAL_INVALID_INDEX)
                    first_index = i;

                /* [SMSAL][Revise] Remove SMSAL_MAX_REPLACE_MSG limitation, original is 5 */
                // limitation in read write cnf
                //if (num_rep >= SMSAL_MAX_REPLACE_MSG)
                //{
                //        break;
                //}
            }
        }                               /* for */

        first_index = smsal_msg_replace_find_next_test_index(&search_status, (smsal_storage_enum) smsal_cntx_ptr->sms_parameter.rmi.prefer_mem3 );

        if (first_index >= SMSAL_MAX_MSG_NUM)
        {
            for (i = 0; i < SMSAL_MAX_MSG_NUM; i++)
            {
                (&(smsal_cntx_ptr->message_box[i]))->state &= (~SMSAL_MB_ENTRY_REPLACE_PENDING);
            }
            num_rep = 0;
        }
        else
        {
            if (((&(smsal_cntx_ptr->message_box[first_index]))->state & SMSAL_MB_ENTRY_REPLACE_PENDING) !=
                 SMSAL_MB_ENTRY_REPLACE_PENDING)
            {
                /*
                 * The finded index has problem, the value was wrong. Handle it as normal MT SMS
                 * to avoid recursive reading. (customer issue MAUI_02608431)
                 */
                free_flag = smsal_mt_msg_hdlr(pdu_decode, peer_buff_ptr, local_ptr);
                return free_flag;
            }
        }
            
    }

    if (num_rep == 0)
    {

        /*
         * No message to be replaced,
         * * handle the message in the normal way 
         */
        free_flag = smsal_mt_msg_hdlr(pdu_decode, peer_buff_ptr, local_ptr);
        return free_flag;

    }
    else
    {
        ret_val = smsal_get_pending_act_id(&id);

        if (ret_val == KAL_FALSE)
        {
            smsal_deliver_nack_post(local_ptr->smi, CANNOT_REPLACE_MSG, 0, 0, 0, 0, NULL);
            return free_flag;
        }

        (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_DELIVER;
        aux_info = (smsal_mt_msg_aux_info_struct *)
                    get_ctrl_buffer(sizeof(smsal_mt_msg_aux_info_struct));
        (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

        /* Replace the message */
        (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = peer_buff_ptr;
        hold_peer_buff(peer_buff_ptr);
        (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = (local_para_struct *) local_ptr;
        hold_local_para((local_para_struct *) local_ptr);

        aux_info->replace_count = 0;
        aux_info->pid_type = pid_type;
        aux_info->smi = local_ptr->smi;
        aux_info->search_status = search_status;
        aux_info->index = first_index;

        aux_info->pdu_decode = pdu_decode;

        /* Save PDU Decode Struct. Don't free the PDU info. */
        free_flag = KAL_FALSE;

        /* Read first message from storage. */
        smsal_replace_read_one_msg(id, first_index);

    }                                   /* if(num_rep == 0) */

    return free_flag;
}                                       /* end of smsal_msg_replace_hdlr */

void smsal_replace_read_msg_cnf(kal_uint8 old_id, ilm_struct *ilm_ptr, kal_bool is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool retval;
    kal_uint16 data_len;
    kal_uint8 *data_ptr;
    sim_read_cnf_struct *read_cnf;
    smsal_pdu_decode_struct sms_pdu;    /* for msg read from storage */
    sms_addr_struct old_orig_addr;

    kal_uint16 index;
    smsal_mt_msg_aux_info_struct *aux_info;
    smsal_deliver_peer_struct *deliver_ptr;     /* for new MT SMS */

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_REPLACE_MSG_CNF);

    aux_info = (smsal_mt_msg_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;
    deliver_ptr = &aux_info->pdu_decode->tpdu.data.deliver_tpdu;

    if (is_from_sim == KAL_TRUE)
    {
        read_cnf = (sim_read_cnf_struct *) ilm_ptr->local_para_ptr;
        data_ptr = read_cnf->data;
        data_len = read_cnf->length;
    }
    else
    {
        data_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &data_len);

        if (data_len == SMSAL_SMS_ME_LEN)
        {
            data_len = SMSAL_SMS_LEN;

            remove_tail_of_peer_buff(ilm_ptr->peer_buff_ptr, SMSAL_SMS_ME_LEN - SMSAL_SMS_LEN);
        }
        else
        {
            kal_brief_trace(TRACE_WARNING, GET_NVRAM_SIZE_ERROR, data_len);
            SMSALDBG_(printf("GET_NVRAM_SIZE_ERROR %d\n", data_len);
                );
            data_len = SMSAL_SMS_LEN;
        }
    }

    /* Decode SMS PDU (SCA + TPDU) */
    retval = smsal_decode_sms_pdu(data_ptr + 1, (kal_uint8) (data_len - 1), &sms_pdu);

    if (retval == KAL_TRUE)
    {
        /* get DA address in stored message. */
        sms_tpdu_addr2_sms_tp_addr(sms_pdu.tpdu.data.deliver_tpdu.orig_addr, &old_orig_addr);

        /* Check Originating Address is the same or not */

        /* althrough 23.040 (9.2.3.9) state: "it is recommended that      */
        /* SC address should not be checked by the MS unless application  */
        /* specifically require", the checking is required in TEST CASE,  */
        /* thus we shall Check SC Address as well                         */
        if ((sms_pdu.tpdu.data.deliver_tpdu.pid == deliver_ptr->pid) &&
            (smsal_tp_addr_cmp(&(old_orig_addr), deliver_ptr->orig_addr) == KAL_TRUE) &&
            (smsal_rp_addr_cmp(&sms_pdu.sca, &aux_info->pdu_decode->sca) == KAL_TRUE))
        {

            smsal_replace_write_one_msg(old_id, aux_info->index,
                                        (&(smsal_cntx_ptr->pending_act[old_id]))->peer_buff_ptr,
                                        &(aux_info->pdu_decode->sca));

            /* Free resources */
            smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);
            return;
        }
    }

    /* Make the state of MB's entry to original value */
    (&(smsal_cntx_ptr->message_box[aux_info->index]))->state &= (~SMSAL_MB_ENTRY_REPLACE_PENDING);

    /* Free resources */
    smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);

    if (aux_info->replace_count >= SMSAL_MAX_REPLACE_MSG)
    {
        /* clean all replace pending */
        for (index = 0 ; index < SMSAL_MAX_MSG_NUM ; index++)
        {
            (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_REPLACE_PENDING);
        }
    }
    else
    {
        index = smsal_msg_replace_find_next_test_index(&(aux_info->search_status), (smsal_storage_enum) smsal_cntx_ptr->sms_parameter.rmi.prefer_mem3 );
    }

    if (index >= SMSAL_MAX_MSG_NUM)
    {

        /* if there is no message replaced, handle the message in the normal way */
        if (aux_info->replace_count == 0)
        {
            kal_bool free_flag;

            free_flag = smsal_mt_msg_hdlr(aux_info->pdu_decode,
                                          (&(smsal_cntx_ptr->pending_act[old_id]))->peer_buff_ptr,
                                          (sms_deliver_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr);

            if (free_flag == KAL_FALSE)
            {
                aux_info->pdu_decode = NULL;
            }
        }
        else
        {
            /* Replaced all messages, send deliver ack to SC */
            smsal_deliver_ack_post(aux_info->smi, 0, 0, 0, 0, NULL);
        }

        smsal_free_pending_act(old_id);
    }
    else
    {
        /* Replace next message */

        /* Save msg index. */
        aux_info->index = index;

        smsal_replace_read_one_msg(old_id, index);

    }

}                                       /* end of smsal_replace_msg_cnf */

void smsal_replace_write_msg_cnf(kal_uint8 old_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    smsal_mt_msg_aux_info_struct *aux_info;
    smsal_tpdu_decode_struct *tpdu;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_REPLACE_MSG_CNF);

    aux_info = (smsal_mt_msg_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    tpdu = &aux_info->pdu_decode->tpdu;
    index = aux_info->index;

    /* Update Message Box */
    smsal_update_msgbox_from_tpdu((&(smsal_cntx_ptr->message_box[index])), tpdu);

    /* Make the state of MB's entry to original value */
    (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_REPLACE_PENDING);

    /*
     * Update message box: status
     */
    (&(smsal_cntx_ptr->message_box[index]))->status = SMSAL_STATUS_UNREAD;

    aux_info->replace_count++;

    /* send indication to RMI and LMI if need. */
    smsal_dispatch_stored_new_msg(aux_info, (&(smsal_cntx_ptr->pending_act[old_id]))->peer_buff_ptr);


    if (aux_info->replace_count >= SMSAL_MAX_REPLACE_MSG)
    {
        /* clean all replace pending */
        for (index = 0; index < SMSAL_MAX_MSG_NUM; index++)
        {
            (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_REPLACE_PENDING);
        }
    }
    else
    {     
        index = smsal_msg_replace_find_next_test_index(&(aux_info->search_status), (smsal_storage_enum) smsal_cntx_ptr->sms_parameter.rmi.prefer_mem3 );
    }

    if (index >= SMSAL_MAX_MSG_NUM)
    {
        /* Replaced all messages, send deliver ack to SC */
        smsal_deliver_ack_post(aux_info->smi, 0, 0, 0, 0, NULL);
        smsal_free_pending_act(old_id);
    }
    else
    {
        /* Replace next message */

        /* Save msg index. */
        aux_info->index = index;

        smsal_replace_read_one_msg(old_id, index);

    }

}                                       /* end of smsal_replace_msg_cnf */

void smsal_replace_msg_rej(kal_uint8 old_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    smsal_mt_msg_aux_info_struct *aux_info;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_REPLACE_MSG_REJ);

    aux_info = (smsal_mt_msg_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    /*
     * Make the state of MB's entries which marked to REPLACE PENDING
     * * previously to original value 
     */
    for (index = 0; index < SMSAL_MAX_MSG_NUM; index++)
    {
        (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_REPLACE_PENDING);
    }

    smsal_deliver_nack_post(aux_info->smi, CANNOT_REPLACE_MSG, 0, 0, 0, 0, NULL);

    smsal_free_pending_act(old_id);

}                                       /* end of smsal_replace_msg_rej */
#endif //__SMS_STORAGE_BY_MMI__


/*****************************************************************************
 * 
 * Functions for MO SMS
 *
 ****************************************************************************/
kal_bool smsal_get_mo_sms_info(l4csmsal_send_req_struct        *send_req,
                               peer_buff_struct                *peer_buff_ptr,
                               smsal_send_sms_aux_info_struct  *sms_info,
                               smsal_error_cause_enum          *error_cause)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_command_msg_hdr_struct *cmd_msg_ptr;
    smsal_send_msg_req_hdr_struct *send_msg_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    kal_bool retval = KAL_TRUE;

    send_msg_ptr = NULL;

    sms_info->req_type = send_req->req_type;
    sms_info->src_id = send_req->src_id;

    if (smsal_get_msg_format(send_req->src_id) == SMSAL_TEXT_MODE)
    {
        if (send_req->req_type == SMSAL_SEND_MSG)
        {
            /*
             * SUBMIT 
             */
            send_msg_ptr = &(send_req->msg_header.submit);

            /* Get SC address & Destination address */
            smsal_get_msg_sc_addr(send_req->src_id,
                                  send_req->reply_index,
                                  send_msg_ptr,
                                  NULL,
                                  &sms_info->sat_addr.sc_addr);

            smsal_get_msg_dest_addr(send_req->reply_index,
                                    (kal_bool) send_msg_ptr->da_tag,
                                    &(send_msg_ptr->da),
                                    &sms_info->sat_addr.dest_addr);

            retval = smsal_check_send_msg(send_req->src_id,
                                          send_req->message_len,
                                          send_req->req_type,
                                          (void *)send_msg_ptr,
                                          peer_buff_ptr,
                                          error_cause);

        }
        else
        {
            /*
             *  COMMAND 
             */

            cmd_msg_ptr = &(send_req->msg_header.command);

            sms_info->sat_addr.sc_addr = smsal_para_ptr->profile.profile[0].sca;
            l4_addr2_sms_tp_addr(&(cmd_msg_ptr->da), &sms_info->sat_addr.dest_addr);

            retval = smsal_check_send_msg(send_req->src_id,
                                          send_req->message_len,
                                          send_req->req_type,
                                          (void *)cmd_msg_ptr,
                                          peer_buff_ptr,
                                          error_cause);
        }                               /* req_type */
    }                                   /* TEXT mode */
    else
    {
        ASSERT(peer_buff_ptr != NULL);

        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        retval = smsal_get_sc_addr_from_pdu(pdu_ptr, &sms_info->sat_addr.sc_addr);

        if (retval == KAL_TRUE)
        {
            if (send_req->req_type == SMSAL_SEND_MSG)
            {
                retval = smsal_get_msg_dest_addr_from_pdu(pdu_ptr,
                                                          &sms_info->sat_addr.dest_addr);

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#elif defined(__SMS_STORAGE_BY_MMI__)
                // MAUI_01913910 AT+CMSS with modified DA
                // modify DA with +CMSS
                if (sms_info->is_da_modified == KAL_FALSE)
                {
                    // There is no Reply index message.
                    // modify DA address.
                    if ( (send_req->src_id >= RMMI_SRC) && (send_req->msg_header.submit.da_tag == KAL_TRUE) )
                    {
                        l4_addr2_sms_tp_addr(&(send_req->msg_header.submit.da), &(sms_info->sat_addr.dest_addr));
                        sms_info->is_da_modified = KAL_TRUE;
                    }
                }
#endif
            }
            else
            {
                retval = smsal_get_cmd_dest_addr_from_pdu(pdu_ptr,
                                                          &sms_info->sat_addr.dest_addr);
            }
        }

        if (retval == KAL_TRUE)
            retval = smsal_check_send_msg(send_req->src_id, send_req->message_len,
                                          (smsal_send_type_enum) send_req->req_type, (void *)send_msg_ptr,
                                          peer_buff_ptr, error_cause);

    }                                   /* PDU mode */

    return retval;
}                                       /* end of smsal_get_mo_sms_info */

#ifndef __SMS_STORAGE_BY_MMI__
kal_bool smsal_reply_index_hdlr(kal_uint8 id, kal_uint16 reply_index)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool ret_val = KAL_FALSE;

    if (reply_index != SMSAL_INVALID_INDEX)
    {
        /* Check whether REPLY PATH exist or not. */
        /* If exist, read out SM from storage to get SC and DA. */
        if (((&(smsal_cntx_ptr->message_box[reply_index]))->mb_type_ind & SMSAL_MB_TYPE_REPLY_PATH) ==
            SMSAL_MB_TYPE_REPLY_PATH)
        {

            smsal_read_short_msg(id,
                                 (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[reply_index]))->storage_type,
                                 (&(smsal_cntx_ptr->message_box[reply_index]))->record_no);

            ret_val = KAL_TRUE;
        }
    }

    return ret_val;
}
#endif

void smsal_fdn_check_hdlr(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    l4csmsal_fdn_check_ind_struct *fdn_check_ind;
    smsal_send_sms_aux_info_struct *aux_info;

    aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    SMSAL_ASSERT(smsal_para_ptr->common.sms_fdn_off != KAL_TRUE);
    if (IS_FLAG_SET(FDN_PENDING_FLAG) == KAL_FALSE)
    {

        fdn_check_ind = (l4csmsal_fdn_check_ind_struct *) construct_local_para
            (sizeof(l4csmsal_fdn_check_ind_struct), TD_CTRL);

        sms_rp_addr2_l4_addr(&(aux_info->sat_addr.sc_addr), &(fdn_check_ind->sc_addr));
        sms_tp_addr2_l4_addr(&(aux_info->sat_addr.dest_addr), &(fdn_check_ind->da));

        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_FDN_CHECK_IND,
                              (local_para_struct *) fdn_check_ind,
                              NULL);
        (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_FDN_CHECK;
        SET_FLAGS(FDN_PENDING_FLAG);

    }
    else
    {
        (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_FDN_CHECK_PENDING;
    }

    return;
}

void smsal_mo_sms_hdlr(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_send_req_struct *send_req;
    smsal_send_sms_aux_info_struct *mo_aux_info;
    peer_buff_struct *peer_buff_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    smsal_mti_enum mti;

    send_req = (l4csmsal_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    mo_aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    if (smsal_get_msg_format(send_req->src_id) == SMSAL_TEXT_MODE)
    {
        if (send_req->req_type == SMSAL_SEND_MSG)
        {
            /* 
             * SUBMIT, text mode
             */

            /* update DA if it is modified. */
            if (mo_aux_info->is_da_modified == KAL_TRUE)
            {
                send_req->msg_header.submit.da_tag = KAL_TRUE;

                sms_tp_addr2_l4_addr(&(mo_aux_info->sat_addr.dest_addr),
                                     &(send_req->msg_header.submit.da));
            }

            smsal_send_msg_text_mode(send_req,
                                     mo_aux_info->msg_ref,
                                     &(mo_aux_info->sat_addr.sc_addr),
                                     (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr);

        }
        else
        {
            /* 
             * COMMAND, text mode
             */
            smsal_send_cmd_text_mode(send_req,
                                     mo_aux_info->msg_ref,
                                     &mo_aux_info->sat_addr,
                                     (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr);
        }

    }                                   /* Text mode */
    else
    {
        if (send_req->req_type == SMSAL_SEND_MSG)
        {
            /* SUBMIT, pdu mode */
            mti = SMSAL_MTI_SUBMIT;
        }
        else
        {
            /* COMMAND, pdu mode */
            mti = SMSAL_MTI_COMMAND;
        }

        /* modify DA in PDU */
        if (mo_aux_info->is_da_modified == KAL_TRUE)
        {
            pdu_ptr = get_peer_buff_pdu((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr, &pdu_len);

            peer_buff_ptr = smsal_modify_da_in_pdu(mti, pdu_ptr, pdu_len,
                                                   mo_aux_info->sat_addr.dest_addr.addr_length,
                                                   mo_aux_info->sat_addr.dest_addr.addr_bcd);

            if (peer_buff_ptr != NULL)
            {
                free_peer_buff((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr);
                (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = peer_buff_ptr;
            }
        }

        /*
         * because we use peer_buff_ptr (send to SMS) passed by L4C directly,
         * * we need to hold this buffer !!  
         */
        /* MAUI_00595204 [SMSAL][Fixbug] revise the L4 peer_buff_ptr hold to smsal send pdu mode */
        if ((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr != NULL)
        {
            hold_peer_buff((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr);
        }

#if defined(__SMS_STORAGE_BY_MMI__)
        if (send_req->src_id >= RMMI_SRC)   // for AT Command
        {
            smsal_send_pdu_mode(mo_aux_info->msg_ref,
                                send_req->src_id,
                                send_req->seq_num,
                                smsal_cntx_ptr->sms_parameter.rmi.mms,
                                mti,
                                (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr,
                                &mo_aux_info->sat_addr.sc_addr);
        }
        else
        {
            smsal_send_pdu_mode(mo_aux_info->msg_ref,
                                send_req->src_id,
                                send_req->seq_num,
                                send_req->mms_mode,
                                mti,
                                (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr,
                                &mo_aux_info->sat_addr.sc_addr);
        }
#else
        smsal_send_pdu_mode(mo_aux_info->msg_ref,
                            send_req->src_id,
                            send_req->seq_num,
                            smsal_cntx_ptr->sms_parameter.rmi.mms,
                            mti,
                            (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr,
                            &mo_aux_info->sat_addr.sc_addr);
#endif // __SMS_STORAGE_BY_MMI__



    }                                   /* PDU mode */

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SEND_MO_SMS;
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_SEND_SINGLE;

}                                       /* end of smsal_mo_sms_hdlr */

void smsal_send_cmd_text_mode(l4csmsal_send_req_struct  *send_req,
                              kal_uint8                 msg_ref,
                              smsal_sat_addr_struct     *sat_addr,
                              peer_buff_struct          *peer_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 *pdu_ptr;
    kal_uint8 *msg_data = NULL;
    kal_uint16 pdu_length;
    peer_buff_struct *packed_peer_ptr;
    smsal_command_peer_struct cmd_peer;
    smsal_command_msg_hdr_struct *cmd_msg_ptr;
    kal_uint8 mms_mode;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SEND_CMD_TEXT_MODE);

    cmd_msg_ptr = &(send_req->msg_header.command);
    if (send_req->message_len > 0)
        msg_data = (kal_uint8 *) get_peer_buff_pdu(peer_ptr, &pdu_length);

    smsal_command_peer_struct_alloc(&cmd_peer);

    cmd_peer.fill_bits1 = 0;
    cmd_peer.udh_p = (cmd_msg_ptr->fo & 0x40) >> 6;

    if (cmd_msg_ptr->ct == SMSAL_ENQUIRY_CMD)
    {
        cmd_peer.status_rep_req = 1;
    }
    else
    {
        cmd_peer.status_rep_req = 0;
    }

    /*
     * 12/21/2002, kevin
     * * value of SRR depends on command type 
     * cmd_peer.status_rep_req = (cmd_msg_ptr->fo & 0x20) >> 5; //wrong
     */

    cmd_peer.fill_bits3 = 0;
    cmd_peer.msg_type = SMSAL_MTI_COMMAND;

    cmd_peer.pid = cmd_msg_ptr->pid;
    cmd_peer.cmd_type = cmd_msg_ptr->ct;
    cmd_peer.msg_num = cmd_msg_ptr->mn;

    cmd_peer.msg_ref = msg_ref;
    cmd_peer.no_dest_addr = (sat_addr->dest_addr.addr_length + 1) / 2 + 2;      /* +2:len/type */

    cmd_peer.dest_addr[0] = sat_addr->dest_addr.addr_length;    /* DA length */
    cmd_peer.dest_addr[1] = sat_addr->dest_addr.addr_bcd[0];    /* DA type */
    if (((sat_addr->dest_addr.addr_length + 1) / 2) > 0)
    {
        kal_mem_cpy(&cmd_peer.dest_addr[2],
                    &sat_addr->dest_addr.addr_bcd[1],
                    ((sat_addr->dest_addr.addr_length + 1) / 2));
    }

    cmd_peer.cmd_data_len = (kal_uint8)send_req->message_len;
    cmd_peer.no_cmd_data = (kal_uint8)send_req->message_len;
    if (send_req->message_len > 0)
        kal_mem_cpy(cmd_peer.cmd_data, msg_data, send_req->message_len);

    packed_peer_ptr =
        construct_peer_buff((kal_uint16) (smsal_command_peer_struct_bits(&cmd_peer) / 8),
                            0, 0, TD_UL);

    pdu_ptr = get_peer_buff_pdu(packed_peer_ptr, &pdu_length);
    smsal_command_peer_struct_pack(pdu_ptr, &cmd_peer, 0);

    if (send_req->src_id >= RMMI_SRC)
        mms_mode = smsal_cntx_ptr->sms_parameter.rmi.mms;
    else
        mms_mode = send_req->mms_mode;

    smsal_send_command_to_sms(msg_ref, send_req->src_id, send_req->seq_num, mms_mode, packed_peer_ptr, &(sat_addr->sc_addr));

    smsal_command_peer_struct_dealloc(&cmd_peer);

}                                       /* end of smsal_send_cmd_text_mode */

#ifndef __SMS_STORAGE_BY_MMI__

kal_bool smsal_is_avl_for_new_msg(smsal_tpdu_decode_struct  *tpdu_decode,
                                  smsal_storage_enum        *storage_type_out,
                                  kal_uint8                 *error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;

    kal_bool ret_val;
    smsal_storage_enum storage_type = SMSAL_SM;

#ifdef __SMS_ME_STORAGE__
    kal_uint16 sim_num = 0;
    kal_uint16 me_num = 0;
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_IS_AVL_FOR_NEW_MSG);

    /* 
     * Determine the storage type according to the message class and
     * pre-specified preferred storage for MT short messages
     */
    storage_type = (smsal_storage_enum) smsal_cntx_ptr->sms_parameter.rmi.prefer_mem3;
    
    /*
     * class 2 message shall be stored in SIM whether __UNIFIED_MESSAGE_SIMBOX_SUPPORT__ works or not
     *
    if ((tpdu_decode->msg_class == SMSAL_CLASS2) &&
        ((KAL_TRUE == is_test_sim(SMSAL_SIM_ID)) || ((KAL_TRUE != is_test_sim(SMSAL_SIM_ID)) && (storage_type != SMSAL_ME))))
    */
    if (tpdu_decode->msg_class == SMSAL_CLASS2)
    {
        storage_type = SMSAL_SM;
        kal_brief_trace(TRACE_INFO, INFO_RECV_CLASS2_MSG);
    }
    else
    {
#ifdef __SMS_ME_STORAGE__
        if ((storage_type == SMSAL_STORAGE_UNSPECIFIED) &&
            (tpdu_decode->msg_class == SMSAL_CLASS1))
        {
            storage_type = SMSAL_ME;
            kal_brief_trace(TRACE_INFO, INFO_RECV_CLASS1_MSG);
        }
#endif
    }

#ifdef __SMS_ME_STORAGE__

    /*
     * if message is not CLASS1/2 and is a concatenated message 
     * * we will try to save the whole sms to the same storage type 
     */
    if (tpdu_decode->msg_class != SMSAL_CLASS2 &&
        tpdu_decode->msg_class != SMSAL_CLASS1 && tpdu_decode->concat_info.total_seg > 1)
    {
        kal_uint8 i;
        kal_uint16 hash = 0;
        smsal_deliver_peer_struct *deliver_ptr = &tpdu_decode->data.deliver_tpdu;

        for (i = 0; i < TP_ADDR2_L4_ADDR_LEN(deliver_ptr->orig_addr[0]); i++)
            hash += deliver_ptr->orig_addr[1 + i];

        ret_val = smsal_where_to_save_concat_msg(&tpdu_decode->concat_info,
                                                 hash,
                                                 smsal_cntx_ptr->sms_parameter.rmi.prefer_mem3,
                                                 &storage_type);

        if (ret_val == KAL_TRUE)
            ret_val = smsal_is_storage_available(storage_type, 1, &sim_num, &me_num);

        /*
         * we need to ensure that whenever there is any room we can't reject
         * * the save operation unless the prefer memory is ONLY mode, ie, SIM/ME only
         * *
         * * at this point, if ret_val is FALSE, 
         * * we need to use the prefer memory to save!!
         */
        if (ret_val == KAL_FALSE)
            storage_type = (smsal_storage_enum) smsal_cntx_ptr->sms_parameter.rmi.prefer_mem3;
    }
    else
    {
        /* just follow the prefer memory to save */
        ret_val = KAL_FALSE;
    }

    if (ret_val == KAL_FALSE)
    {
        ret_val = smsal_is_storage_available(storage_type, 1, &sim_num, &me_num);
    }

    if (ret_val == KAL_FALSE)
    {
        /*
         * If the message class is CLASS2 and SIM has no capacity to store and
         * * there is other short storages (eg. ME) available, 
         * * the error cause SHALL be "protocol error, unspecified",
         * * NOT the "memory capacity exceeded" 
         */
        if (tpdu_decode->msg_class == SMSAL_CLASS2)
        {
            ret_val = smsal_is_storage_available(SMSAL_ME, 1, &sim_num, &me_num);
            if (ret_val == KAL_TRUE)
            {
                /* Other storages have capacities to storage this message */
                *error_cause = UNSPECIFIED_TP_FCS;
                kal_brief_trace(TRACE_WARNING, NO_SPACE_FOR_MT_SMS, UNSPECIFIED_TP_FCS);

                smsal_mem_exceed_ind(SMSAL_SM_EXCEED_WITH_CLASS2);

                return KAL_FALSE;
            }
        }
        else
        {
            /*
             * If the message class is not CLASS2 and 
             * * the default preferred storage has no space to store this message,
             * * try another storage !! 
             */

            /*
             * [34.2.5.2]
             *
             * if message is class 1 and there is no storages in NVRAM "now"
             * and SMSAL does not finish the reading process, we shall wait until all files read. 
             * If we choose to save in SIM then test case 34.2.5.2 will failed.
             */
            if (tpdu_decode->msg_class == SMSAL_CLASS1 && IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE)
            {
                kal_brief_trace(TRACE_INFO, INFO_RECV_CLASS1_BUT_NVRAM_NOT_READ);
                return KAL_FALSE;
            }

            if (((smsal_storage_enum) smsal_cntx_ptr->sms_parameter.rmi.prefer_mem3 != SMSAL_SM) &&
                ((smsal_storage_enum) smsal_cntx_ptr->sms_parameter.rmi.prefer_mem3 != SMSAL_ME))
            {
                if (storage_type == SMSAL_SM || storage_type == SMSAL_ME)
                {
                    if (storage_type == SMSAL_SM)
                        storage_type = SMSAL_ME;
                    else
                        storage_type = SMSAL_SM;

                    ret_val = smsal_is_storage_available(storage_type, 1, &sim_num, &me_num);
                }
            }            
        }                               /* class 2 ? */
    }                                   /* storage available ? */
    else
    {
        if (storage_type != SMSAL_SM && storage_type != SMSAL_ME)
        {
            if (sim_num > 0)
                storage_type = SMSAL_SM;
            else
                storage_type = SMSAL_ME;
        }
    }
#else
    ret_val = smsal_is_storage_available(1);
#endif /* __SMS_ME_STORAGE__ */

    if (ret_val == KAL_FALSE)
    {
#if defined (DELAY_PENDING_MT_UNTIL_READY)
        /* SIM not ready. Don't try to store in ME. */
        if ((IS_FLAG_SET(SMSAL_FINISH_SIM_LOAD_FLAG) == KAL_FALSE) ||
            (IS_FLAG_SET(SMSAL_FINISH_NVM_LOAD_FLAG) == KAL_FALSE))
        return KAL_FALSE;
#endif
        *error_cause = MEM_CAP_EXCEEDED;
        kal_brief_trace(TRACE_WARNING, NO_SPACE_FOR_MT_SMS, MEM_CAP_EXCEEDED);
        return KAL_FALSE;
    }
    else if (IS_FLAG_SET(MTSMS_WAIT_FLAG) == KAL_TRUE)
    {
        CLR_FLAGS(MTSMS_WAIT_FLAG);
    }

#ifdef __SMS_ME_STORAGE__
    ASSERT(storage_type == SMSAL_SM || storage_type == SMSAL_ME);
#else
    ASSERT(storage_type == SMSAL_SM);
#endif

    *storage_type_out = storage_type;
    return KAL_TRUE;
}                                       /* end of smsal_is_avl_for_new_msg */


/*****************************************************************************
* FUNCTION
*  smsal_store_new_msg
* DESCRIPTION
*   This function stores the MT short message.
*
* PARAMETERS
*  a  IN       id, index of pending action struct
*  b  IN       *pdu_ptr
*  c  IN       pdu_len
*  d  IN       *local_ptr
* RETURNS
*  KAL_TRUE:  ok
*  KAL_FALSE: fail
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_store_new_msg(kal_uint8                id,
                             kal_uint8                *pdu_ptr,
                             kal_uint16               pdu_len,
                             sms_deliver_struct       *local_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 entry_id;
    kal_uint8 error_cause;
    kal_uint8 data[SMSAL_SMS_LEN];
    kal_bool ret_val;
    smsal_storage_enum storage_type = SMSAL_SM;
    smsal_mt_msg_aux_info_struct *aux_info;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_STORE_NEW_MSG);

    /* Make copies so that indirections are reduced */
    aux_info = (smsal_mt_msg_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    /*
     * check whether storage is available for this new msg
     * * according to preferred MT SMS storage 
     */
    ret_val = smsal_is_avl_for_new_msg(&aux_info->pdu_decode->tpdu, &storage_type, &error_cause);

    if (ret_val == KAL_TRUE)
    {
        /*
         * Find a free message box entry which allocated for the
         * * storage which specified by 'storage_type' 
         * *
         * * If failed , 
         * * that means the sync of space management 
         * * for message box is problematic!! 
         */
        ret_val = smsal_get_free_mb_entry(storage_type, &entry_id);

        ASSERT(ret_val == KAL_TRUE);

        aux_info->index = entry_id;

    #ifdef __SMS_ME_STORAGE__
        aux_info->storage_type = (&(smsal_cntx_ptr->message_box[entry_id]))->storage_type;
    #endif

        aux_info->is_msg_writing = KAL_TRUE;

        smsal_prepare_stored_data(data, SMSAL_UNREAD_MSG, pdu_ptr, pdu_len, &local_ptr->sc_addr);

        smsal_write_short_msg(id,
                              (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[entry_id]))->storage_type,
                              (&(smsal_cntx_ptr->message_box[entry_id]))->record_no, data, NULL, SMSAL_SMS_LEN);

        /* Mark the state of the message box's entry to PENDING */
        (&(smsal_cntx_ptr->message_box[entry_id]))->state |= SMSAL_MB_ENTRY_PENDING;

        INCR_USED_MSG_NUM((&(smsal_cntx_ptr->message_box[entry_id]))->storage_type);

    }

    if (ret_val == KAL_FALSE)
    {
        if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_TRUE)
        {
            smsal_deliver_nack_post(local_ptr->smi, (smsal_error_cause_enum) error_cause,
                                    0, 0, 0, 0, NULL);

            /*
             * NO rooms for the new message, two actions shall be performed:
             * 1) send a Deliver Report with cause of MEM_CAP_EXCEEDED to network
             * 2) send an indication to LMI
             */
            if (error_cause == MEM_CAP_EXCEEDED)
                smsal_mem_exceed_ind(SMSAL_MEM_EXCEED_NORMAL);
        }
    }
    else
    {
        if (aux_info->pdu_decode->tpdu.msg_class != SMSAL_CLASS2)
        {
            /*
             * Spec 03.38 states when receive a Class 2 message,
             * * MS shall ensure this message has been stored in SIM 
             * * before sending acknowledgement to SC 
             */
            kal_bool sent_ack = KAL_FALSE;
            
            smsal_check_cnma_sent_ack_hdlr((kal_uint8)aux_info->pdu_decode->tpdu.msg_class,
                                           local_ptr->smi,
                                           &sent_ack);
            if (sent_ack == KAL_TRUE)
            {
                smsal_deliver_ack_post(local_ptr->smi, 0, 0, 0, 0, NULL);
            }
        }
    }

    return ret_val;
}                                       /* end of smsal_store_new_msg */


/*****************************************************************************
* FUNCTION
*  smsal_store_new_msg_cnf
* DESCRIPTION
*   This function handles the storage (SIM/NVRAM) confirm (success) for 
*   storing the MT short message.
*
* PARAMETERS
*  a  IN       old_id, index of pending action struct
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_store_new_msg_cnf(kal_uint8 old_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_mb_entry_struct *entry;
    smsal_mt_msg_aux_info_struct *aux_info;
    smsal_tpdu_decode_struct *tpdu;

    /* copy the pointers so that indirections can be reduced */
    aux_info = (smsal_mt_msg_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;
    tpdu = &aux_info->pdu_decode->tpdu;
    entry = (&(smsal_cntx_ptr->message_box[aux_info->index]));

    kal_brief_trace(TRACE_INFO, STORE_MT_MSG_SUCC_INFO, aux_info->index, entry->storage_type);

    if (tpdu->msg_class == SMSAL_CLASS2)
    {
        kal_bool sent_ack = KAL_FALSE;

        smsal_check_cnma_sent_ack_hdlr((kal_uint8)aux_info->pdu_decode->tpdu.msg_class,
                                       aux_info->smi,
                                       &sent_ack);
        if (sent_ack == KAL_TRUE)
        {
            smsal_deliver_ack_post(aux_info->smi, 0, 0, 0, 0, NULL);
        }
    }

    /* Mark the state of MB's entry to original value */
    (&(smsal_cntx_ptr->message_box[aux_info->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

   /*------------------------------------------- 
    * Update Message Box Entry :
    *-------------------------------------------*/
    smsal_update_msgbox_from_tpdu(entry, tpdu);

    /*
     * Update message box: state, status, no of used msg
     */
    entry->state = SMSAL_MB_ENTRY_VALID;
    entry->status = SMSAL_STATUS_UNREAD;

    INCR_MSGBOX_NUM(entry->status, entry->storage_type);

    #ifdef __SMSAL_DISCARD_PATENT__
    /* MAUI_00733041 [SMSAL][Revise] discard incoming message if there exists discard patent in OA */
    /* Note: To turn on this feature, make sure mcu\custom\ps\[Project]\customer_sms_discard_patent.c is present */
    {
        kal_uint8  *discard_str;
        kal_uint16  discard_str_len;
        l4_addr_bcd_struct check_oa;

        kal_uint8 *orig_addr = NULL;
        kal_int8 matchcount = 0;
        
        orig_addr = tpdu->data.deliver_tpdu.orig_addr;

        if ((tpdu->msg_class == SMSAL_CLASS2) &&
            (orig_addr[0] != 0) &&
            (orig_addr[1] & 0xf0) == 0xd0)
        {
            check_oa.addr_length = ((orig_addr[0]*4)/7)+1;
            smsal_gsm7_unpack((kal_uint8 *)&(orig_addr[2]),
                              &check_oa.addr_bcd[1],
                              (kal_uint16)check_oa.addr_length,
                              (kal_uint16)0);
            check_oa.addr_bcd[0] = orig_addr[1];

            discard_str = smsal_get_discard_patent_str (&discard_str_len);

            if ((discard_str != NULL) &&
                (discard_str_len > 0) &&
                (discard_str_len <= (check_oa.addr_length-1)))
            {
                for(; matchcount < discard_str_len ; matchcount++)      
                {
                    if (*(discard_str + matchcount) != check_oa.addr_bcd[1+matchcount])
                        break;
                }

                if (matchcount >=  discard_str_len)
                {
                    (&(smsal_cntx_ptr->pending_act[old_id]))->sub_act_code = SMSAL_DELETE_INDEX;
                    smsal_reset_short_msg(old_id,
                                          (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[aux_info->index]))->storage_type,
                                          (&(smsal_cntx_ptr->message_box[aux_info->index]))->record_no);

                    /* Mark the state of the message box's entry to PENDING */
                    (&(smsal_cntx_ptr->message_box[aux_info->index]))->state |= SMSAL_MB_ENTRY_PENDING;

                    return;
                }
            }
        }
    }
    #endif

    /* send indication to RMI and LMI if need. */
    smsal_dispatch_stored_new_msg(aux_info, (&(smsal_cntx_ptr->pending_act[old_id]))->peer_buff_ptr);

    smsal_free_pending_act(old_id);

    /* Store the new message successfully. Check whether memory is full, */
    /* If yes, send Mem. Full Indication to MMI.                         */
    smsal_check_mem_full_status();

}                                       /* end of smsal_store_new_msg_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_store_new_msg_rej
* DESCRIPTION
*   This function handles the storage (SIM/NVRAM) confirm (failure) for 
*   storing the MT short message.
*
* PARAMETERS
*  a  IN       old_id, index of pending action struct
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_store_new_msg_rej(kal_uint8 old_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_mt_msg_aux_info_struct *aux_info;
    
#if defined (__SMS_ME_STORAGE__)
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    kal_uint8 data[SMSAL_SMS_LEN];

    kal_uint16 sim_num = 0;
    kal_uint16 me_num = 0;
#endif

    aux_info = (smsal_mt_msg_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    DECR_USED_MSG_NUM(aux_info->storage_type);

    /* Mark the state of MB's entry to original value */
    (&(smsal_cntx_ptr->message_box[aux_info->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

    if (aux_info->pdu_decode->tpdu.msg_class == SMSAL_CLASS2)
    {
        /*
         * In statement of 03.38 :
         * * error cause shall be "protocol error, unspecified (0xff)"
         */
        smsal_deliver_nack_post(aux_info->smi, UNSPECIFIED_TP_FCS, 0, 0, 0, 0, NULL);
        kal_brief_trace(TRACE_WARNING, WRITE_SIM_ERROR_FOR_STORE_C2_MSG);
    }
#if defined (__SMS_ME_STORAGE__)
    /*
     * store to another storage, ie, if previous attemped storage is SIM,
     * * try ME storage now, vice versa. 
     */
    else if (aux_info->storage_type != SMSAL_STORAGE_UNSPECIFIED)
    {
        if (aux_info->storage_type == SMSAL_SM)
            aux_info->storage_type = SMSAL_ME;
        else
            aux_info->storage_type = SMSAL_SM;

        if (smsal_is_storage_available((smsal_storage_enum) aux_info->storage_type,
                                       1, &sim_num, &me_num) == KAL_TRUE)
        {
            kal_bool ret;

            ret = smsal_get_free_mb_entry((smsal_storage_enum) aux_info->storage_type,
                                          &aux_info->index);

            ASSERT(ret == KAL_TRUE);

            (&(smsal_cntx_ptr->message_box[aux_info->index]))->state |= SMSAL_MB_ENTRY_PENDING;

            INCR_USED_MSG_NUM(aux_info->storage_type);

            pdu_ptr = get_peer_buff_pdu((&(smsal_cntx_ptr->pending_act[old_id]))->peer_buff_ptr, &pdu_len);

            smsal_prepare_stored_data(data,
                                      SMSAL_UNREAD_MSG,
                                      pdu_ptr,
                                      pdu_len,
                                      &((sms_deliver_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr)->sc_addr);

            smsal_write_short_msg(old_id,
                                  (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[aux_info->index]))->storage_type,
                                  (&(smsal_cntx_ptr->message_box[aux_info->index]))->record_no,
                                  data,
                                  NULL,
                                  SMSAL_SMS_LEN);

            /* only retry once */
            aux_info->storage_type = SMSAL_STORAGE_UNSPECIFIED;

            return;                     /* wait storage confirm */
        }
    }
#endif /* __SMS_ME_STORAGE__ */

    smsal_free_pending_act(old_id);

}                                       /* end of smsal_store_new_msg_rej */
#endif //__SMS_STORAGE_BY_MMI__


/* this function also used by SEND BY STORAGE */
void smsal_send_pdu_mode(kal_uint8        msg_ref,
                         kal_uint8        src_id,
                         kal_uint8        seq_num,
                         kal_uint8        mms_mode,
                         smsal_mti_enum   mti,
                         peer_buff_struct *peer_buff_ptr,
                         sms_addr_struct  *sc_addr)
{
    kal_uint8 *pdu_ptr;
    kal_uint8 sca_len;
    kal_uint16 pdu_len;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SEND_PDU_MODE);

    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    sca_len = *pdu_ptr;                 /* sca length */

    *(pdu_ptr + 2 + sca_len) = msg_ref;

    /* Skip sc address */
    update_peer_buff_header(peer_buff_ptr,
                            (kal_uint8) (peer_buff_ptr->free_header_space + 1 + sca_len),
                            (kal_uint16) (pdu_len - (1 + sca_len)),   /* new pdu len */
                            0              /* new tail len */
        );

    if (mti == SMSAL_MTI_SUBMIT)
    {
        smsal_send_submit_to_sms(msg_ref, src_id, seq_num, mms_mode, peer_buff_ptr, sc_addr);
    }
    else
    {
        smsal_send_command_to_sms(msg_ref, src_id, seq_num, mms_mode, peer_buff_ptr, sc_addr);
    }

}                                       /* end of smsal_send_msg_pdu */


/*****************************************************************************
* FUNCTION
*  smsal_send_msg_text_mode
* DESCRIPTION
*   This function submits a MO short message to SMS module.
*
* PARAMETERS
*  a  IN       *send_msg_ptr
*  b  IN/OUT   msg_ref
*  d  IN       *sc_addr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_send_msg_text_mode(l4csmsal_send_req_struct *send_req,
                              kal_uint8                msg_ref,
                              sms_addr_struct          *sc_addr,
                              peer_buff_struct         *peer_buff_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_send_msg_req_hdr_struct *send_msg_ptr;
    smsal_submit_peer_struct submit_struct;
    peer_buff_struct *peer_ptr;
    kal_uint8 *msg_data, *pdu_ptr;
    kal_uint16 pdu_len;
    kal_uint8 mms_mode;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SEND_MSG_TEXT_MODE);

    send_msg_ptr = &(send_req->msg_header.submit);

    if (send_req->message_len > 0 && peer_buff_ptr != NULL)
        msg_data = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &pdu_len);
    else
    {
        msg_data = NULL;
        send_req->message_len = 0;
    }

    smsal_submit_peer_struct_alloc(&submit_struct);

    /*
     * This function assigns all the header information
     * * required for sending Short Message. 
     */

    smsal_construct_tpdu(send_msg_ptr, &submit_struct, send_req->message_len, msg_data, send_req->src_id);

    /*
     * Assign message reference, unique number associated with each
     * *  message shared between SMSAL, SMSTL and Service Centre 
     */
    submit_struct.msg_ref = msg_ref;

    pdu_len = (kal_uint16) ((smsal_submit_peer_struct_bits(&submit_struct) + 7) / 8);

    peer_ptr = (peer_buff_struct *) construct_peer_buff(pdu_len, 0, 0, TD_CTRL);

    /* Get the pdu pointer */
    pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);

    /* Pack the peer pointer with message contents */
    smsal_submit_peer_struct_pack((kal_uint8 *) pdu_ptr, &submit_struct, 0);

    smsal_submit_peer_struct_dealloc(&submit_struct);

    if (send_req->src_id >= RMMI_SRC)
        mms_mode = smsal_cntx_ptr->sms_parameter.rmi.mms;
    else
        mms_mode = send_req->mms_mode;

    smsal_send_submit_to_sms(msg_ref, send_req->src_id, send_req->seq_num, mms_mode, peer_ptr, sc_addr);

    smsal_submit_peer_struct_dealloc(&submit_struct);

}                                       /* end of smsal_send_msg_text_mode */


/*****************************************************************************
* FUNCTION
*  smsal_check_cnma_sent_ack_hdlr
* DESCRIPTION
*   This function check if deliver report is necessary for MT short message
*
* PARAMETERS
*  a  IN       *pdu_decode
*  b  IN       smi
*  c  IN       *peer_buff_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_check_cnma_sent_ack_hdlr(kal_uint8           msg_class,
                                    kal_uint8           smi,
                                    kal_bool            *sent_ack)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 lmi_ind, rmi_ind, dest_id = 0;
    kal_uint8 cnmi_id = SMSAL_INVALID_CNMI_ID;
    kal_uint8 need_cnma;

    *sent_ack = KAL_FALSE;

    smsal_consult_nmi_table((smsal_msg_class_enum)msg_class, &need_cnma, &lmi_ind, &rmi_ind);

    /* No need to store. */
    /* Both LMI and RMI check SMSAL_MSG_NMI_BITS only. */

    if ((lmi_ind & SMSAL_MSG_NMI_BITS) == SMSAL_MSG_NMI_BITS)
        dest_id |= SMSAL_TO_LMI;

    if ((rmi_ind & SMSAL_MSG_NMI_BITS) == SMSAL_MSG_NMI_BITS)
        dest_id |= SMSAL_TO_RMI;

    if (((dest_id & SMSAL_TO_RMI) == SMSAL_TO_RMI) &&
        ((need_cnma & SMSAL_MSG_CNMA_BITS) == SMSAL_MSG_CNMA_BITS))
    {
        cnmi_id = smsal_get_free_cnmi_id();
    }


    /* Start a timer to wait +CNMA from RMI */
    if ((cnmi_id != SMSAL_INVALID_CNMI_ID) &&
        (smsal_para_ptr->rmi.service_mode == SMSAL_SERVICE1))
    {
        /*
         * When mode=0 or 2, the L4C may buffer the CNMI, 
         * * thus Deliver Report must be sent without waiting CNMA 
         */        
        if ((smsal_para_ptr->rmi.nmi_para.mode == 0) || (smsal_para_ptr->rmi.nmi_para.mode == 2))
        {
            *sent_ack = KAL_TRUE;
        }
        else
        {
            smsal_cntx_ptr->cnmi[cnmi_id].is_used = KAL_TRUE;
            smsal_cntx_ptr->cnmi[cnmi_id].smi = smi;
            smsal_cntx_ptr->cnmi[cnmi_id].sent_report = KAL_FALSE;
            smsal_start_timer(SMSAL_CNMA_TIMER, cnmi_id, SMSAL_CNMA_TIMEOUT_TICK);
        }
    }
    else
    {
        *sent_ack = KAL_TRUE;
    }
} 

/*****************************************************************************
* FUNCTION
*  smsal_new_msg_ind
* DESCRIPTION
*   This function sends indications for MT short message, eg,
*   class 0 msg, waiting message indication.
*
* PARAMETERS
*  a  IN       *pdu_decode
*  b  IN       smi
*  c  IN       *peer_buff_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_new_msg_ind(smsal_pdu_decode_struct  *pdu_decode,
                       kal_uint8                smi,
                       peer_buff_struct         *peer_buff_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 lmi_ind, rmi_ind, dest_id = 0;
    kal_uint8 cnmi_id = SMSAL_INVALID_CNMI_ID;
    kal_uint8 need_cnma, msg_class;
    kal_bool sent_ack = KAL_FALSE;
    smsal_tpdu_decode_struct *tpdu_decode = &pdu_decode->tpdu;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_NEW_MSG_IND, smi);

    msg_class = tpdu_decode->msg_class;

    smsal_consult_nmi_table(msg_class, &need_cnma, &lmi_ind, &rmi_ind);

    /* No need to store. */
    /* Both LMI and RMI check SMSAL_MSG_NMI_BITS only. */

    /* [MAUI_01095717]
     * if text is empty and discard message, no indicate to MMI
     */
    if( msg_class == SMSAL_MW_DISCARD &&
        (tpdu_decode->data.deliver_tpdu.no_user_data - tpdu_decode->udhl - tpdu_decode->data.deliver_tpdu.udh_p) <= 0 )
    {
        lmi_ind &= ~SMSAL_MSG_NMI_BITS;
    }

#ifndef __SMS_STORAGE_BY_MMI__
    // (pretended me full by AT command)
    if( smsal_check_is_me_full() )
    {
        // based on table1
        if( (msg_class == SMSAL_CLASS1 || msg_class == SMSAL_CLASS3) ||
            (msg_class == SMSAL_CLASS_UNSPECIFIED) )
        {
            smsal_deliver_nack_post(smi, MEM_CAP_EXCEEDED, 0, 0, 0, 0, NULL);
            smsal_mem_exceed_ind(SMSAL_MEM_EXCEED_NORMAL);
            return;
        }
    }
#endif

    if ((lmi_ind & SMSAL_MSG_NMI_BITS) == SMSAL_MSG_NMI_BITS)
        dest_id |= SMSAL_TO_LMI;

#if defined (EMPTY_MMI)
    if ((rmi_ind & SMSAL_INDEX_NMI_BITS) == SMSAL_INDEX_NMI_BITS)
        dest_id |= SMSAL_TO_RMI;
#endif

    if ((rmi_ind & SMSAL_MSG_NMI_BITS) == SMSAL_MSG_NMI_BITS)
        dest_id |= SMSAL_TO_RMI;

    if (((dest_id & SMSAL_TO_RMI) == SMSAL_TO_RMI) &&
        ((need_cnma & SMSAL_MSG_CNMA_BITS) == SMSAL_MSG_CNMA_BITS))
    {
        cnmi_id = smsal_get_free_cnmi_id();
    }

#ifdef __SMS_STORAGE_BY_MMI__
    // bypass to MMI
    dest_id |= SMSAL_TO_LMI;

    if( IS_FLAG_SET(MEM_FULL_FLAG) )
    {
        dest_id &= ~SMSAL_TO_RMI;        
    }
#endif

    /* 
     * if this indication will be sent to both LMI & RMI, 
     * we shall consider two cases: 
     * 1) RMI requests PDU mode,
     * 2) RMI requests TEXT mode and this message contains User Data Header
     *    or this message is coded by 8bit/UCS2.
     * In both cases, the indication shall be sent separately 
     */
    if (dest_id > 0)
    {
        if ((dest_id & SMSAL_TO_RMI) == SMSAL_TO_RMI)
        {
            if (smsal_para_ptr->rmi.message_format == SMSAL_PDU_MODE)
            {
                /* Send PDU to RMI */
                smsal_new_msg_pdu_ind(pdu_decode, SMSAL_TO_RMI, peer_buff_ptr, cnmi_id);
            }
            else
            {
                /* Send TEXT to RMI. */
                smsal_new_msg_text_ind(pdu_decode, SMSAL_TO_RMI, cnmi_id, lmi_ind, SMSAL_INVALID_INDEX);
            }
        }

        if ((dest_id & SMSAL_TO_LMI) == SMSAL_TO_LMI)
        {
#ifndef __SMS_STORAGE_BY_MMI__
            /* Send TEXT to LMI */
            smsal_new_msg_text_ind(pdu_decode, SMSAL_TO_LMI,    /* TEXT */
                                   cnmi_id, lmi_ind, SMSAL_INVALID_INDEX);
#else
            kal_uint8 act_id;
            if( smsal_get_pending_act_id(&act_id) == KAL_TRUE )
            {
                /* Send PDU to LMI */
                smsal_new_msg_pdu_ind(pdu_decode, SMSAL_TO_LMI, peer_buff_ptr, cnmi_id);

                (&(smsal_cntx_ptr->pending_act[act_id]))->act_code = SMSAL_SEND_DELIVER_REPORT;
                (&(smsal_cntx_ptr->pending_act[act_id]))->sub_act_code = smi;  // store smi
            }
            else
            {
                smsal_deliver_nack_post(smi, UNSPECIFIED_TP_FCS, 0, 0, 0, 0, NULL);
                return;
            }
#endif
        }
    }                                   /* if dest > 0 */

    /* Start a timer to wait +CNMA from RMI */
    if ((cnmi_id != SMSAL_INVALID_CNMI_ID) &&
        (smsal_para_ptr->rmi.service_mode == SMSAL_SERVICE1))
    {
        /*
         * When mode=0 or 2, the L4C may buffer the CNMI, 
         * * thus Deliver Report must be sent without waiting CNMA 
         */
        if ((smsal_para_ptr->rmi.nmi_para.mode == 0) || (smsal_para_ptr->rmi.nmi_para.mode == 2))
        {
#if defined(__SMS_STORAGE_BY_MMI__)
            sent_ack = KAL_FALSE;
#else   
            sent_ack = KAL_TRUE;
#endif
        }
        else
        {
            smsal_cntx_ptr->cnmi[cnmi_id].is_used = KAL_TRUE;
            smsal_cntx_ptr->cnmi[cnmi_id].smi = smi;
            smsal_cntx_ptr->cnmi[cnmi_id].sent_report = KAL_FALSE;
            smsal_start_timer(SMSAL_CNMA_TIMER, cnmi_id, SMSAL_CNMA_TIMEOUT_TICK);
        }
    }
    else
    {
#if defined(__SMS_STORAGE_BY_MMI__)
        sent_ack = KAL_FALSE;
#else 
        sent_ack = KAL_TRUE;
#endif
    }

    if (sent_ack == KAL_TRUE)
    {
        smsal_deliver_ack_post(smi, 0, 0, 0, 0, NULL);
    }


#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#else
    /* Send message waiting indication (MWI) to MMI if present */
    if (tpdu_decode->msg_wait.is_msg_wait == KAL_TRUE)
    {
        kal_uint8 i = 0;
        smsal_msg_waiting_struct *msg_ptr = (smsal_msg_waiting_struct *)(&tpdu_decode->msg_wait);

        for (i = 0; i < NUM_OF_MSG_WAITING_TYPE; i++)
        {
            if (msg_ptr->ind_flag[i] == KAL_TRUE)
            {
                smsal_msg_waiting_ind(msg_ptr->line_no,
                                      #ifdef __REL4__
                                      //smsal_para_ptr_g->common.selected_msp,
                                      msg_ptr->msp,
                                      #endif
                                      i,
                                      msg_ptr,
                                      KAL_FALSE);
            }
        }

    #ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
        if( msg_ptr->type_of_info & SMSAL_MSG_WAIT_UDH_EVM )
        {
            smsal_evm_ind(msg_ptr);
        }
    #endif

        smsal_update_mwis(msg_ptr->msp, msg_ptr->line_no, (smsal_mwis_struct *)(&tpdu_decode->msg_wait.mwis));
    }
#endif

}                                       /* end of smsal_new_msg_ind */

void smsal_send_submit_to_sms(kal_uint8        msg_ref,
                              kal_uint8        src_id,
                              kal_uint8        seq_num,
                              kal_uint8        mms_mode,
                              peer_buff_struct *peer_buff_ptr,
                              sms_addr_struct  *sc_addr)
{
    sms_submit_struct *local_ptr;

    local_ptr = (sms_submit_struct *) construct_local_para(sizeof(sms_submit_struct), TD_CTRL);

    local_ptr->sc_addr = *sc_addr;
    local_ptr->smi = msg_ref;
    local_ptr->src_id   = src_id;
    local_ptr->seq_num  = seq_num;
    local_ptr->mms_mode = mms_mode;

    smsal_send_msg_to_sms(MSG_ID_SMS_SUBMIT, (local_para_struct *) local_ptr, peer_buff_ptr);

    kal_brief_trace(TRACE_PEER, SMSAL_MS_TO_NW_PEER_MSG, SMSAL__SUBMIT);

}                                       /* end of smsal_send_submit_to_sms */


void smsal_send_command_to_sms(kal_uint8        msg_ref,
                               kal_uint8        src_id,
                               kal_uint8        seq_num,
                               kal_uint8        mms_mode,
                               peer_buff_struct *peer_buff_ptr,
                               sms_addr_struct  *sc_addr)
{
    sms_command_struct *local_ptr;

    local_ptr = (sms_command_struct *)
                 construct_local_para(sizeof(sms_command_struct), TD_CTRL);

    local_ptr->sc_addr = *sc_addr;
    local_ptr->smi = msg_ref;
    local_ptr->src_id   = src_id;
    local_ptr->seq_num  = seq_num;
    local_ptr->mms_mode = mms_mode;

    smsal_send_msg_to_sms(MSG_ID_SMS_COMMAND, (local_para_struct *) local_ptr, peer_buff_ptr);

    kal_brief_trace(TRACE_PEER, SMSAL_MS_TO_NW_PEER_MSG, SMSAL__COMMAND);

}                                       /* end of smsal_msg_command_post */


void smsal_update_submit_report(kal_uint8  result,
                                kal_uint8  smi,
                                kal_uint8  udh_p,
                                kal_uint8  *user_data,
                                kal_uint8  *scts,
                                kal_uint16 cause,
                                #ifdef __SAT__
                                kal_uint8  sat_res_code,
                                kal_uint8  sat_cause,
                                #endif
                                peer_buff_struct * peer_buff_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
#if defined(__SMS_STORAGE_BY_MMI__)
    smslib_general_struct smslib_general_temp;
#else
    smsal_pdu_decode_struct pdu_decode_temp;
#endif
    kal_uint8 src_id;
    kal_uint8 access_id;
    kal_uint8 seq_num;
    smsal_msg_waiting_struct msg_wait;
    smsal_send_sms_aux_info_struct *aux_info;

    msg_wait.is_msg_wait = KAL_FALSE;   /* reset */
    msg_wait.type_of_info = 0;
    
    /* Check for user data header field */
    if ((user_data != NULL) && (udh_p == KAL_TRUE))
    {
        msg_wait.need_store = KAL_FALSE;
        msg_wait.mwis = smsal_para_ptr->mailbox.mwis[0];
#if defined(__SMS_STORAGE_BY_MMI__)
        smslib_decode_udh(user_data, NULL, (smslib_msg_waiting_struct *)&msg_wait, NULL);
        if (msg_wait.is_msg_wait == KAL_TRUE)
        {
            smslib_general_temp.tpdu.data.submit_tpdu.user_data = user_data;
            kal_mem_cpy(&(smslib_general_temp.tpdu.msg_wait),&msg_wait,sizeof(smslib_msg_waiting_struct));
            smslib_general_temp.tpdu.mti = SMSLIB_MTI_SUBMIT_REPORT;
            smslib_message_waiting_handler(&smslib_general_temp);
            kal_mem_cpy(&msg_wait,&(smslib_general_temp.tpdu.msg_wait),sizeof(smslib_msg_waiting_struct)); 
        }
#else
        smsal_decode_udh(user_data, NULL, &msg_wait, NULL);
        if (msg_wait.is_msg_wait == KAL_TRUE)
        {
            pdu_decode_temp.tpdu.data.submit_tpdu.user_data = user_data;
            kal_mem_cpy(&(pdu_decode_temp.tpdu.msg_wait),&msg_wait,sizeof(smsal_msg_waiting_struct));
            pdu_decode_temp.tpdu.mti = SMSAL_MTI_SUBMIT_REPORT;
            smsal_message_waiting_handler(&pdu_decode_temp);
            kal_mem_cpy(&msg_wait,&(pdu_decode_temp.tpdu.msg_wait),sizeof(smsal_msg_waiting_struct));
        }
#endif
    }

    if (smsal_find_pending_send(smi, &src_id, &access_id, &seq_num) == KAL_TRUE)
    {
        if (msg_wait.is_msg_wait != 0)
        {
            kal_uint8 i = 0;

            for (i = 0; i < NUM_OF_MSG_WAITING_TYPE; i++)
            {
                if (msg_wait.ind_flag[i] == KAL_TRUE)
                {
                    smsal_msg_waiting_ind(msg_wait.line_no,
                                          #ifdef __REL4__
                                          //smsal_para_ptr_g->common.selected_msp,
                                          msg_wait.msp,
                                          #endif
                                          i,
                                          &msg_wait,
                                          KAL_FALSE);
                }
            }

#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
            if( msg_wait.type_of_info & SMSAL_MSG_WAIT_UDH_EVM )
            {
                smsal_evm_ind(&msg_wait);
            }
#endif

            smsal_update_mwis(msg_wait.msp, msg_wait.line_no, &msg_wait.mwis);
        }

        aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[access_id]))->aux_info;
    #if !defined (__SAT__)

        smsal_send_service1_cnf(result, src_id, smi,    /* message reference */
                                scts,   /* sc timestamp */
                                peer_buff_ptr, cause, seq_num, aux_info->concat_info);

    #else

        /* Remove for CRTUGW
        if ((L4C_OK == result) &&
            (SAT_ALLOWED_WITH_MODIFICATION == ((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[access_id]))->aux_info)->sat_res_type))
        {
            sat_res_code = SAT_CMD_PERFORMED_BUT_MODIFIED_CC_BY_SIM;
        }
        */

        if (src_id == SAT_SRC)
        {
            smsal_sat_send_cnf(((l4csmsal_sat_send_req_struct *)
                                (&(smsal_cntx_ptr->pending_act[access_id]))->local_para_ptr)->src_id,
                                sat_res_code,
                                sat_cause);

        }
        else
        {
            smsal_send_service1_cnf(result,
                                    src_id,
                                    smi,        /* message reference */
                                    scts,       /* sc timestamp */
                                    peer_buff_ptr,
                                    cause,
                                    seq_num,
                                    aux_info->concat_info);
        }
    #endif /* ! __SAT__ */

        if (result == L4C_OK)
        {
            /* submit report - ack */

#ifndef __SMS_STORAGE_BY_MMI__
            /*
             * if SMS-SUBMIT is SEND FROM STORAGE, then update msgbox and 
             * * the msg in storage 
             */
            if ((&(smsal_cntx_ptr->pending_act[access_id]))->act_code == SMSAL_SEND_FROM_STORAGE)
                smsal_update_for_send_fr_succ(access_id);
#endif

        }

        smsal_free_pending_act(access_id);

    }                                   /* smsal_find_pending_send */

}                                       /* end of smsal_update_submit_report */


#if defined (__SAT__)
/*****************************************************************************
* FUNCTION
*  smsal_sat_send_msg
* DESCRIPTION
*   This function sends SMS-SUBMIT triggered by SAT.
*
* PARAMETERS
*  a  IN          seg_req
*  b  IN/OUT      msg_ref
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_sat_send_msg(l4csmsal_sat_send_req_struct *send_req, kal_uint8 msg_ref)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    sms_submit_struct *local_para_ptr;
    peer_buff_struct *peer_buff_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    kal_uint8 vpf;

    /*
     * offset to User Data:
     * * fo(1), mr(1), da_len(1), da_type(1), pid(1), dcs(1), udl(1) 
     */
    kal_uint8 offset = 7;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SAT_SEND_MSG);

    /* if the packed is required, SMSAL shall pack the text string */
    if (send_req->is_sms_packed_required == KAL_TRUE)
    {
        local_para_ptr = (sms_submit_struct *)
                          construct_local_para(sizeof(sms_submit_struct), TD_UL);

        /* fill sms_submit_struct: smi, sca */

        /*
         * SCR: 806
         * * in 11.14 6.6.9: if no SCA, then ME shall use default SCA 
         */
        if (send_req->sc_addr.addr_length > 0)
        {
            l4_addr2_sms_rp_addr(&send_req->sc_addr, &local_para_ptr->sc_addr);
        }
        else
        {
            local_para_ptr->sc_addr = smsal_para_ptr->profile.profile[0].sca;
        }

        local_para_ptr->smi = msg_ref;
        local_para_ptr->src_id = send_req->src_id;
        local_para_ptr->seq_num = send_req->seq_num;
        local_para_ptr->mms_mode = SMSAL_MMS_DISABLE;

        send_req->tpdu[1] = msg_ref;    /* fill the msg reference */

        offset = offset + (send_req->tpdu[2] + 1) / 2;  /* da */

        /* set dcs to default GSM 7-bit based on original dcs */
        send_req->tpdu[(send_req->tpdu[2] + 1) / 2 + 5] =
            smsal_set_dcs(send_req->tpdu[(send_req->tpdu[2] + 1) / 2 + 5], SMSAL_GSM7_BIT);

        vpf = (send_req->tpdu[0] & SMSAL_FO_VPF_BITS) >> 3;

        if ((vpf == 1) || (vpf == 3))
            offset = offset + 7;        /* absolute/enhanced format */
        else if (vpf == 2)
            offset = offset + 1;

        peer_buff_ptr = (peer_buff_struct *)
            construct_peer_buff((kal_uint16) (offset + (send_req->tpdu[offset - 1] * 7 + 7) / 8),
                                0, 0, TD_UL);

        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        /*
         * SCR: 558 
         * * pack only TP-UD present 
         */
        if (send_req->tpdu[offset - 1] > 0)
        {
            smsal_gsm7_pack(&send_req->tpdu[offset],
                            pdu_ptr + offset, send_req->tpdu[offset - 1] /* udl */ ,
                            0);
        }

        kal_mem_cpy(pdu_ptr, send_req->tpdu, offset);

        smsal_send_msg_to_sms(MSG_ID_SMS_SUBMIT,
                              (local_para_struct *) local_para_ptr,
                              peer_buff_ptr);

        kal_brief_trace(TRACE_PEER, SMSAL_MS_TO_NW_PEER_MSG, SMSAL__SUBMIT);

    }
    else
    {
        smsal_sat_send(MSG_ID_SMS_SUBMIT, send_req, msg_ref);

        kal_brief_trace(TRACE_PEER, SMSAL_MS_TO_NW_PEER_MSG, SMSAL__SUBMIT);
    }

}                                       /* end of smsal_sat_send_msg */


/*****************************************************************************
* FUNCTION
*  smsal_sat_send
* DESCRIPTION
*   This function sends SMS-SUBMIT (no pack required) or 
*   SMS-COMMAND triggered by SAT.
*
* PARAMETERS
*  a  IN          msg_type, indicate SUBMIT or COMMAND
*  b  IN          seg_req
*  c  IN/OUT      msg_ref
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_sat_send(msg_type                     msg_type,
                    l4csmsal_sat_send_req_struct *send_req,
                    kal_uint8                    msg_ref)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    sms_submit_struct *submit_ptr;
    peer_buff_struct *peer_buff_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    if (msg_type == MSG_ID_SMS_COMMAND)
    {
        kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SAT_SEND_CMD);
    }

    /* NOTE : sms_submit_struct is identical with sms_command_struct */
    submit_ptr = (sms_submit_struct *) construct_local_para(sizeof(sms_submit_struct), TD_UL);

    /* fill sms_submit_struct: smi, sca */
    /*
     * SCR: 806
     * * in 11.14 6.6.9: if no SCA, then ME shall use default SCA 
     */
    if (send_req->sc_addr.addr_length > 0)
    {
        l4_addr2_sms_rp_addr(&send_req->sc_addr, &submit_ptr->sc_addr);
    }
    else
    {
        submit_ptr->sc_addr = smsal_para_ptr->profile.profile[0].sca;
    }

    submit_ptr->smi = msg_ref;
    submit_ptr->src_id = send_req->src_id;
    submit_ptr->seq_num = send_req->seq_num;
    submit_ptr->mms_mode = SMSAL_MMS_DISABLE;

    peer_buff_ptr = (peer_buff_struct *) construct_peer_buff(send_req->tpdu_length, 0, 0, TD_UL);

    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    send_req->tpdu[1] = msg_ref;        /* fill the msg reference */

    kal_mem_cpy(pdu_ptr, send_req->tpdu, send_req->tpdu_length);

    smsal_send_msg_to_sms(msg_type, (local_para_struct *) submit_ptr, peer_buff_ptr);

}                                       /* end of smsal_sat_send */


/*****************************************************************************
* FUNCTION
*  smsal_sat_mo_msg_ctrl
* DESCRIPTION
*   This function handles MO SMS control.
*
* PARAMETERS
*  a  IN          *sat_addr
* RETURNS
*  KAL_TRUE : no control needed, send directly
*  KAL_FALSE: query SIM before send 
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_sat_mo_msg_ctrl(kal_uint8 id, smsal_sat_addr_struct *sat_addr)
{
#if defined (__DISABLE_SMS_CONTROLLED_BY_SIM__)
    return KAL_TRUE;

#else

    sat_send_sms_ctrl_by_sim_req_struct *ctrl_req;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SAT_MO_MSG_CTRL);

    /* CR336607 only SERVICE_SUPPORT can send sms ctrl by sim req */
    //if (sim_service_table_query(SERVICE_MO_SMS) != SERVICE_SUPPORT)
    #ifdef __GEMINI__
    if (sim_service_table_query(SERVICE_MO_SMS, SMSAL_SIM_ID) != SERVICE_SUPPORT)
    #else
    if (sim_service_table_query(SERVICE_MO_SMS) != SERVICE_SUPPORT)
    #endif
    {
        kal_brief_trace(TRACE_INFO, INFO_SMSAL_SAT_MO_MSG_CTRL_NOT_SUPPORT);
        return KAL_TRUE;
    }

    ctrl_req = (sat_send_sms_ctrl_by_sim_req_struct *)
                construct_local_para(sizeof(sat_send_sms_ctrl_by_sim_req_struct), TD_CTRL);

    ctrl_req->access_id = id;

    /* Fill SC address */
    ctrl_req->size_of_addr1 = sat_addr->sc_addr.addr_length;
    if (sat_addr->sc_addr.addr_length > 0)
    {
        kal_mem_cpy(ctrl_req->addr1, sat_addr->sc_addr.addr_bcd, sat_addr->sc_addr.addr_length);
    }

    /* Fill TP-DA */
    ctrl_req->size_of_addr2 = ((sat_addr->dest_addr.addr_length + 1) / 2) + 1;
    ctrl_req->addr2[0] = sat_addr->dest_addr.addr_bcd[0];       /* addr type */
    if (((sat_addr->dest_addr.addr_length + 1) / 2) > 0)
    {
        kal_mem_cpy(&ctrl_req->addr2[1],
                    &sat_addr->dest_addr.addr_bcd[1],
                    ((sat_addr->dest_addr.addr_length + 1) / 2));
    }

    smsal_send_msg_to_sim(MSG_ID_SAT_SEND_SMS_CTRL_BY_SIM_REQ,
                          (local_para_struct *) ctrl_req,
                          NULL);

    return KAL_FALSE;
#endif
}                                       /* end of smsal_sat_mo_msg_ctrl */


void smsal_sat_send_mo_sms_cnf(kal_uint8 access_id, kal_uint8 sub_act_code)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    switch (sub_act_code)
    {
        case SMSAL_GET_MSG_REF:
            smsal_process_sat_send_msg(access_id);
            // [MAUI_01422850] Abort Sending, delay free pending_act until storage confirmation
            (&(smsal_cntx_ptr->pending_act[access_id]))->action_status |= 0x02;
            break;

        default:
            smsal_free_pending_act(access_id);
            break;
    }

}


void smsal_sat_send_mo_sms_rej(kal_uint8 access_id, kal_uint8 sub_act_code, kal_uint16 cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    switch (sub_act_code)
    {
        case SMSAL_GET_MSG_REF:
            // MAUI_01748085 only one storage updated and send no-matter SIM reject
            // the same as cnf true
            smsal_process_sat_send_msg(access_id);
            (&(smsal_cntx_ptr->pending_act[access_id]))->action_status |= 0x02;
            return;

        default:
            break;
    }

    smsal_free_pending_act(access_id);
}

void smsal_sat_mo_sms_ctrl_rej(kal_uint8         id,
                               kal_uint8         sub_act_code,
                               kal_uint16        cause                                 
                              )
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_send_from_storage_req_struct *send_fr_req;
    l4csmsal_send_req_struct *send_req;
    l4csmsal_sat_send_req_struct *sat_send_req;
    kal_uint8 seq_num, src_id;

    switch (sub_act_code)
    {
        case SMSAL_SAT_SEND_MSG:
            send_req = (l4csmsal_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            seq_num = send_req->seq_num;
            src_id = send_req->src_id;

            smsal_send_error(src_id, seq_num, NULL, (smsal_error_cause_enum) cause);
                break;
            
        case SMSAL_SAT_SEND_FROM_STORAGE:
            send_fr_req = (l4csmsal_send_from_storage_req_struct *)
                           (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
            seq_num = send_fr_req->seq_num;
            src_id = send_fr_req->src_id;

            smsal_send_error(src_id, seq_num, NULL, (smsal_error_cause_enum) cause);
                break;

        case SMSAL_SAT_SEND_FROM_SAT:
            sat_send_req = (l4csmsal_sat_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
            src_id = sat_send_req->src_id;
            smsal_sat_send_cnf(src_id, SAT_INTERACTION_WITH_CALL_CTRL_BY_SIM_PERMANENT_ERROR, SAT_NOT_ALLOWED);
            break;
        
        default:
            break;
    } /* switch */
            
    smsal_free_pending_act(id);
    kal_brief_trace(TRACE_WARNING, SMSAL_SAT_MO_SMS_ERROR);
}

void smsal_sat_mo_sms_ctrl_cnf(kal_uint8         id,
                               kal_uint8         sub_act_code,
                               local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    sat_send_sms_ctrl_by_sim_cnf_struct *sim_cnf;
    smsal_sat_addr_struct *sat_addr;
    kal_uint8 seq_num, src_id, *msg_ref, *sat_res_type;
    kal_uint8 ret = KAL_TRUE;
    kal_uint16 err_cause=0xffff;

    l4csmsal_send_from_storage_req_struct *send_fr_req;
    l4csmsal_send_req_struct *send_req;
    l4csmsal_sat_send_req_struct *sat_send_req;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SAT_MO_SMS_CTRL_CNF);

    sat_addr = &((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->sat_addr;
    msg_ref = &((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->msg_ref;
    sat_res_type = &((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->sat_res_type;

    *sat_res_type = SAT_ALLOWED_NO_MODIFICATION;

    switch (sub_act_code)
    {
        case SMSAL_SAT_SEND_MSG:

            send_req = (l4csmsal_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            seq_num = send_req->seq_num;
            src_id = send_req->src_id;

            /* because we already query SIM, rest operations are just like normal mo sms */
            (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SEND_MO_SMS;
            break;

        case SMSAL_SAT_SEND_FROM_STORAGE:

            send_fr_req = (l4csmsal_send_from_storage_req_struct *)
                           (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
            seq_num = send_fr_req->seq_num;
            src_id = send_fr_req->src_id;

            /* because we already query SIM, rest operations are just like normal mo sms */
            (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SEND_FROM_STORAGE;
            break;

        case SMSAL_SAT_SEND_FROM_SAT:

            sat_send_req = (l4csmsal_sat_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            seq_num = sat_send_req->seq_num;
            src_id = sat_send_req->src_id;

            /* because we already query SIM, rest operations are just like normal SAT mo sms */
            (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SAT_SEND;
            break;

        default:
            smsal_free_pending_act(id);
            return;

    }

    sim_cnf = (sat_send_sms_ctrl_by_sim_cnf_struct *) local_para_ptr;

    switch (sim_cnf->res)
    {
        case SAT_ALLOWED_WITH_MODIFICATION:

            kal_brief_trace(TRACE_INFO,
                      INFO_SAT_MO_SMS_ALLOW_WITH_MODIFY,
                      sim_cnf->size_of_addr1,
                      sim_cnf->size_of_addr2);

            if (sim_cnf->size_of_addr1 != 0)
            {
                /* SC address is modified */
                sat_addr->sc_addr.addr_length = sim_cnf->size_of_addr1;
                kal_mem_cpy(sat_addr->sc_addr.addr_bcd,
                            sim_cnf->addr1,
                            sim_cnf->size_of_addr1);

            }

            if (sim_cnf->size_of_addr2 != 0)
            {
                /* Destination address is modified */
                ((smsal_send_sms_aux_info_struct *)
                 (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->is_da_modified = KAL_TRUE;

                sat_addr->dest_addr.addr_length =
                compute_tp_addr_len(sim_cnf->size_of_addr2, sim_cnf->addr2);

                kal_mem_cpy(sat_addr->dest_addr.addr_bcd,
                            sim_cnf->addr2,
                            sim_cnf->size_of_addr2);

            }                           /* if addr2 is modified or not */

            *sat_res_type = SAT_ALLOWED_WITH_MODIFICATION;
            
            /* 
             * NO break , go through !! 
             */

        case SAT_ALLOWED_NO_MODIFICATION:

            if ((sat_res_type != NULL) &&
                (*sat_res_type != SAT_ALLOWED_WITH_MODIFICATION))
                kal_brief_trace(TRACE_INFO, INFO_SAT_MO_SMS_ALLOW_WITHOUT_MODIFY);

            smsal_get_msg_ref_hdlr(id, msg_ref);
            break;

        case SAT_NOT_ALLOWED:
            err_cause = SMS_MO_SMS_NOT_ALLOW;
            ret = KAL_FALSE;
            break;

        case SAT_SIM_ERROR:            /* the same for THREE */
        default:
            err_cause = SMS_SIM_FAILURE;
            ret = KAL_FALSE;
            break;
    }                                   /* switch */

    if (ret == KAL_FALSE)
    {
        switch (sub_act_code)
        {
            case SMSAL_SAT_SEND_MSG:
            case SMSAL_SAT_SEND_FROM_STORAGE:
                smsal_send_error(src_id, seq_num, NULL, (smsal_error_cause_enum) err_cause);
                break;

            case SMSAL_SAT_SEND_FROM_SAT:
                smsal_sat_send_cnf(((l4csmsal_sat_send_req_struct *)
                                    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->src_id,
                                    SAT_INTERACTION_WITH_CALL_CTRL_BY_SIM_PERMANENT_ERROR, SAT_NOT_ALLOWED);
                break;
            default:
                break;
        }
        
        smsal_free_pending_act(id);
        kal_brief_trace(TRACE_WARNING, SMSAL_SAT_MO_SMS_ERROR);
    }
}                                       /* end of smsal_sat_cnf */

#if defined(__SMS_STORAGE_BY_MMI__)
kal_bool smsal_sim_data_dl_hdlr(smslib_deliver_peer_struct  *deliver_ptr,
                                peer_buff_struct            *peer_buff_ptr,
                                sms_addr_struct             *sc_addr,
                                kal_uint8                   smi)
#else
kal_bool smsal_sim_data_dl_hdlr(smsal_deliver_peer_struct  *deliver_ptr,
                                peer_buff_struct           *peer_buff_ptr,
                                sms_addr_struct            *sc_addr,
                                kal_uint8                  smi)
#endif
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    sat_sms_dl_req_struct *dl_req;
    smsal_alphabet_enum alphabet_type;
    smsal_msg_class_enum mclass;
    kal_bool is_compress;

    smsal_sim_dl_aux_info_struct *aux_info;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SIM_DATA_DL_HDLR, smi);

    if (deliver_ptr->msg_type == SMSAL_MTI_UNSPECIFIED)
    {
        return KAL_FALSE;
    }

    smsal_decode_dcs(deliver_ptr->dcs, &alphabet_type, &mclass, &is_compress, NULL);

    /*
     * if this message is not class 2 or sim not support data download
     * * or the pending action struct can not be obtained, 
     * * save this message as normal way 
     */
    if ((mclass != SMSAL_CLASS2) ||
        #ifdef __GEMINI__
        (sim_service_table_query(SERVICE_DATA_DOWNLOAD_SMS_PP, SMSAL_SIM_ID) != SERVICE_SUPPORT) ||
        #else
        (sim_service_table_query(SERVICE_DATA_DOWNLOAD_SMS_PP) != SERVICE_SUPPORT) ||
        #endif
        (smsal_get_pending_act_id(&id) == KAL_FALSE))
    {
        return KAL_FALSE;
    }

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SIM_DOWNLOAD;
    aux_info = (smsal_sim_dl_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_sim_dl_aux_info_struct));
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

    aux_info->smi = smi;
    aux_info->dcs = deliver_ptr->dcs;
    aux_info->pid = deliver_ptr->pid;

    dl_req = (sat_sms_dl_req_struct *)
              construct_local_para(sizeof(sat_sms_dl_req_struct), TD_CTRL);

    dl_req->access_id = id;

    /* fill SC address in local parameter */
    dl_req->size_of_addr = sc_addr->addr_length;
    kal_mem_cpy(dl_req->addr, sc_addr->addr_bcd, sc_addr->addr_length);

    /* hold this peer buffer to SIM */
    hold_peer_buff(peer_buff_ptr);

    smsal_send_msg_to_sim(MSG_ID_SAT_SMS_DL_REQ, (local_para_struct *) dl_req, peer_buff_ptr);

    return KAL_TRUE;
}                                       /* end of smsal_sim_data_dl_hdlr */

void smsal_sim_data_download_cnf(kal_uint8 id, local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    sat_sms_dl_cnf_struct *dl_cnf;
    smsal_sim_dl_aux_info_struct *aux_info;
    kal_uint8 cause;

    dl_cnf = (sat_sms_dl_cnf_struct *) local_para_ptr;
    aux_info = (smsal_sim_dl_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    if (dl_cnf->is_successful == KAL_TRUE)
    {
        /* Send Deliver Report (ACK) */
        /* ALPS00095689, when test 8470 case 27.22.5.1.9 if not send TPDU to machine, it will fail.
           According to SAT spec, USIM need send TPDU back to network when success.
           But for SIM, if cause is 90 00, spec only require RP_ACK to network, but here we also send TPDU */
        /*if (dl_cnf->size_of_sim_ack_data == 0 || dl_cnf->size_of_sim_ack_data > 159)
        {
            smsal_deliver_ack_post(aux_info->smi, 0, 0, 0, 0, NULL);
        }
        else*/
        {
            smsal_deliver_ack_post(aux_info->smi,
                                   7,    /* parameter indicator */
                                   aux_info->pid,
                                   aux_info->dcs,
                                   (kal_uint8) dl_cnf->size_of_sim_ack_data,
                                   dl_cnf->sim_ack_data);
        }
    }
    else
    {
        /* Send Deliver Report (NACK) */
        if (dl_cnf->cause == SAT_DL_BUSY)
            cause = SMS_SAT_BUSY;
        else
            cause = SMS_SAT_DL_ERROR;

        /* ALPS00095689, according to SAT spec, when the cause is SAT_BUSY, we also send TPDU to network */
        if ((dl_cnf->size_of_sim_ack_data == 0 || dl_cnf->size_of_sim_ack_data > 158) &&
            (cause == SMS_SAT_BUSY))
        {
            smsal_deliver_nack_post(aux_info->smi, (smsal_error_cause_enum) cause,
                                    0, 0, 0, 0, NULL);
        }
        else
        {
            smsal_deliver_nack_post(aux_info->smi,
                                    (smsal_error_cause_enum) cause,
                                    7,   /* parameter indicator */
                                    aux_info->pid,
                                    aux_info->dcs,
                                    (kal_uint8) dl_cnf->size_of_sim_ack_data,
                                    dl_cnf->sim_ack_data);
        }
    }                                   /* is_successful */

    /*
     * [MAUI_SW SCR: 3536]
     * * 12/15/2003 Kevin: fix pending action slot leak 
     */
    smsal_free_pending_act(id);

}                                       /* end of smsal_sim_data_download_cnf */
#endif /* __SAT__ */


#if defined (__TCPIP__)
/*****************************************************************************
* FUNCTION
*  smsal_send_msg_to_soc
* DESCRIPTION
*   This function sends message to SOC
*
* PARAMETERS
*  a  IN       msg_id
*  b  IN       local_para_ptr
*  c  IN       peer_buff_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_send_msg_to_soc(msg_type          msg_id,
                           local_para_struct *local_para_ptr,
                           peer_buff_struct  *peer_buff_ptr)
{
#ifdef __GEMINI__
    if ((0 <= (smsal_cur_mod - MOD_SMSAL)) && ((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM))
    {
        msg_send6(smsal_cur_mod, 
                  MOD_SOC, 
                  SMSAL_SOC_SAP, 
                  msg_id, 
                  local_para_ptr,
                  peer_buff_ptr);
    }
#else
    {
        msg_send6(MOD_SMSAL, 
                  MOD_SOC, 
                  SMSAL_SOC_SAP, 
                  msg_id, 
                  local_para_ptr,
                  peer_buff_ptr);
    }
#endif

#ifdef __GEMINI__
    if ((smsal_cur_mod < MOD_SMSAL) || (smsal_cur_mod >= MOD_SMSAL + SMSAL_MAX_SIM_NUM))
        SMSAL_ASSERT(KAL_FALSE);
#endif
}                                       /* end of smsal_send_msg_to_soc */

void smsal_forward_to_socket(peer_buff_struct *peer_buff_ptr, smsal_tpdu_decode_struct *tpdu, sms_addr_struct *sc_addr)
{
    smsal_soc_data_ind_struct *data_ind;

    data_ind = (smsal_soc_data_ind_struct *)
                construct_local_para(sizeof(smsal_soc_data_ind_struct), TD_DL);

    data_ind->sc_addr = *sc_addr;

    /* for MMI to display Originating Address or Name */
    /* MAUI_00376552 Revise to add OA for Wap push */
    data_ind->oa_addr.addr_length = tpdu->data.deliver_tpdu.orig_addr[0];
    data_ind->oa_addr.addr_bcd[0] = tpdu->data.deliver_tpdu.orig_addr[1];

    if (data_ind->oa_addr.addr_length > 0)
    {
        kal_mem_cpy(&data_ind->oa_addr.addr_bcd[1],
                    &tpdu->data.deliver_tpdu.orig_addr[2],
                    (tpdu->data.deliver_tpdu.orig_addr[0] + 1) / 2);
    }
    
    data_ind->dest_port = tpdu->port.dest_port;
    data_ind->src_port = tpdu->port.src_port;
    data_ind->seg = tpdu->concat_info.seg;
    data_ind->total_seg = tpdu->concat_info.total_seg;
    data_ind->concat_ref = tpdu->concat_info.ref;
    data_ind->dcs = smsal_dcs_to_mmi(tpdu->data.deliver_tpdu.dcs);

    smsal_send_msg_to_soc(MSG_ID_SMSAL_SOC_DATA_IND,
                          (local_para_struct *) data_ind,
                          peer_buff_ptr);

}                                       /* end of smsal_forward_to_socket */

void smsal_reg_port_req_hdlr(smsal_soc_reg_port_req_struct *req_ptr)
{
    smsal_soc_reg_port_cnf_struct *cnf_ptr;
    kal_uint16 cause;

    cnf_ptr = (smsal_soc_reg_port_cnf_struct *)
               construct_local_para(sizeof(smsal_soc_reg_port_cnf_struct), TD_CTRL);

    cnf_ptr->result = smsal_reg_port_num((kal_uint8) req_ptr->is_reg, &cause, req_ptr->port, req_ptr->mod_id);
    cnf_ptr->cause = cause;
    cnf_ptr->is_reg = req_ptr->is_reg;
    cnf_ptr->access_id = req_ptr->access_id;

    smsal_send_msg_to_soc(MSG_ID_SMSAL_SOC_REG_PORT_CNF, (local_para_struct *) cnf_ptr, NULL);

}                                       /* end of smsal_reg_port_req_hdlr */

void smsal_soc_entry_func(ilm_struct *ilm_ptr)
{
    if (ilm_ptr->msg_id == MSG_ID_SMSAL_SOC_REG_PORT_REQ)
    {
        if (ilm_ptr->local_para_ptr != NULL)
            smsal_reg_port_req_hdlr((smsal_soc_reg_port_req_struct *) ilm_ptr->local_para_ptr);
        else
            SMSAL_ASSERT(KAL_FALSE);
    }
}
#endif  /* __TCPIP__ */

module_type smsal_dispatcher(kal_int32 port)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 i;

    /*
     * Narrow-Band Socket (NBS) port (5501~5514), controlled by Nokia 
     *
     * unknown port is dispatched to MMI 
     */
    module_type dest = MOD_SMSAL;

    /* 
     * static check
     *
     * 49999: OTA browser setting 
     * 49996: OTA SyncML setting
     */
    if (port == 49999 || port == 49996)
    {
        /* if port 2948 is registerred, dispatch these two port to SOC, too. */
        for (i = 0; i < SMSAL_MAX_REG_PORT_NUM; i++)
        {
            if (smsal_cntx_ptr->reg_port.port[i] == 2948)
            {
                dest = (module_type) (smsal_cntx_ptr->reg_port.mod_id[i]);
                break;
            }
        }
    }

    /* 
     * dynamic check 
     */
    if (dest == MOD_SMSAL)
    {
        /* find from registered pool */
        for (i = 0; i < SMSAL_MAX_REG_PORT_NUM; i++)
        {
            if (smsal_cntx_ptr->reg_port.port[i] == port)
            {
                dest = (module_type) (smsal_cntx_ptr->reg_port.mod_id[i]);
                break;
            }
        }                               /* for */
    }

    return dest;
}

