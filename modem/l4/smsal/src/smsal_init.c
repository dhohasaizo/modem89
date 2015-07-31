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
 * smsal_init.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions related to initialization of SMSAL module.
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
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

/* KAL - RTOS Abstraction Layer */

/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "md_sap.h"
#include "l4_msgid.h"

#include "l3_inc_enums.h"
#include "smsal_enums.h"
#include "smsal_timer.h"


/* SMSAL <--> L4C */
#include "l4c_common_enum.h"            /* For src id */

#include "mcd_l4_common.h"

#include "l4c2smsal_struct.h"


#include "smsal_l4c_defs.h"
#include "smsal_l4c_enum.h"
#include "smsal_l4c_funcs.h"
#include "l4_defs.h"

/* SMS <--> SMSAL */
#include "mnsms_struct.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_context.h"
#include "smsal_other_funcs.h"
#include "smsal_l4c_msgs.h"
#include "smsal_transport_proc.h"
#include "smsal_sms.h"
#include "smsal_reset.h"
#include "smsal_msg_proc.h"

#include "custom_sms_config.h"

#ifdef __CB__
#include "smsal_cb.h"
#endif

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#ifdef EMS_UT
#include "ems.h"
#endif

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"
#include "ps_public_struct.h"

#undef _FILE_CODE_
#define _FILE_CODE_ _SMSAL_INIT_C_

/*
 * use static global variable, instead of pointer so that the memory usage
 * * is easy to estimate and can save the memory, kevin, 11/14/2002
 */
void smsal_init_cnf(kal_uint8 result)
{
    l4csmsal_init_cnf_struct *init_cnf;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_INIT_CNF, result);

    init_cnf = (l4csmsal_init_cnf_struct *) construct_local_para
                                            (sizeof(l4csmsal_init_cnf_struct), TD_CTRL);

    init_cnf->src_id = LMMI_SRC;
    init_cnf->result = result;
    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_INIT_CNF,
                          (local_para_struct *) init_cnf,
                          NULL);

}                                       /* end of smsal_init_cnf */

#if defined(__CANCEL_LOCK_POWERON__)

void smsal_init_me_only_cnf(kal_uint8 result)
{
    l4csmsal_init_cnf_struct *init_cnf;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_INIT_ME_ONLY_CNF, result);

    init_cnf = (l4csmsal_init_cnf_struct *) construct_local_para
                                            (sizeof(l4csmsal_init_cnf_struct), TD_CTRL);

    init_cnf->src_id = LMMI_SRC;
    init_cnf->result = result;
    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_INIT_ME_SMS_CNF,
                          (local_para_struct *) init_cnf,
                          NULL);

}                                       /* end of smsal_init_me_only_cnf */
#endif

#ifndef __SMS_STORAGE_BY_MMI__

void smsal_init_pending_act_hdlr(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8           id;
    kal_uint8           *pdu_ptr;
    kal_uint16          pdu_len;
#ifdef __SMS_DELAY_MTSMS_REPLACE_TYPE__
    smsal_storage_enum  storage_type;
    kal_uint8           error_cause;
    kal_uint8           ret_val;
    smsal_pdu_decode_struct *pdu_decode;
    sms_deliver_struct  *local_ptr;
#endif

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if (smsal_cntx_ptr->pending_act[id].in_use == KAL_TRUE)
        {
            switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
            {
                case SMSAL_WRITE:
                    if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_TRUE)
                    {

                        pdu_ptr = (kal_uint8 *) get_peer_buff_pdu((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr,
                                                            &pdu_len);
                        smsal_write_single(id, 
                                           (l4csmsal_write_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr,
                                           (void *)pdu_ptr);
                    }
                    else
                    {
                        smsal_write_cnf(L4C_ERROR,
                                        ((l4csmsal_write_req_struct *)
                                         (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->src_id,
                                        SMSAL_UNSPECIFIED_ERROR_CAUSE, SMSAL_INVALID_INDEX, 0);
                    }
                    break;

                case SMSAL_DELIVER:
                    if ((&(smsal_cntx_ptr->pending_act[id]))->sub_act_code == SMSAL_MT_MSG)
                    {
                        smsal_mt_msg_aux_info_struct *aux_info;

                        aux_info = (smsal_mt_msg_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

                        pdu_ptr = get_peer_buff_pdu((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr,
                                              &pdu_len);

                        /* The entry is already processing. */
                        if (aux_info->is_msg_writing == KAL_TRUE)
                            break;

                        if (smsal_store_new_msg(id,
                                                pdu_ptr,
                                                pdu_len,
                                                (sms_deliver_struct *)
                                                (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr) == KAL_FALSE)
                        {
                            if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE)       /* still not finish reading process */
                                break;

                            smsal_free_pending_act(id);
                        }

                    }
#ifdef __SMS_DELAY_MTSMS_REPLACE_TYPE__
                    else if((&(smsal_cntx_ptr->pending_act[id]))->sub_act_code == SMSAL_REPLACE_PENDING_MSG)
                    {
                        pdu_decode = (smsal_pdu_decode_struct *)(&(smsal_cntx_ptr->pending_act[id]))->aux_info;
                        SMSAL_ASSERT( pdu_decode != NULL );

                        local_ptr = (sms_deliver_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

                        if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_TRUE)
                        {                            
                            msg_send6(smsal_cur_mod, 
                                      smsal_cur_mod, 
                                      MNSMS_SAP, 
                                      MSG_ID_SMS_DELIVER, 
                                      (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr, 
                                      (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr);
                            
                            // avoid to be freeed in smsal_free_pending_act()
                            (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = NULL;
                            (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = NULL;

                    #ifdef __GEMINI__
                            if ((smsal_cur_mod < MOD_SMSAL) || (smsal_cur_mod >= MOD_SMSAL + SMSAL_MAX_SIM_NUM))
                                SMSAL_ASSERT(KAL_FALSE);
                    #endif

                            smsal_free_pending_act(id);
                        }
                        else
                        {
                            ret_val = smsal_is_avl_for_new_msg(&(pdu_decode->tpdu), &storage_type, &error_cause);
                            if( ret_val == KAL_TRUE )
                            {
                                if ( ((&(smsal_cntx_ptr->pending_act[id]))->action_status & 0x80) == 0x00 )
                                {
                                    smsal_deliver_ack_post(local_ptr->smi, 0, 0, 0, 0, NULL);
                                    (&(smsal_cntx_ptr->pending_act[id]))->action_status |= 0x80;

                                    // set the next ACK failed,  because
                                    // we have already sent ACK to NW if finding available memory space
                                    local_ptr->smi = 0xEF;
                                }
                            }
                        }
                    }
#endif
                    break;

                default:
                    break;
            }                           /* switch */
        }                               /* if (in_use) */
    }                                   /* for */

}                                       /* end of smsal_init_pending_act_hdlr */
#endif //__SMS_STORAGE_BY_MMI__

/*****************************************************************************
* FUNCTION
*  smsal_parameter_init
* DESCRIPTION
*   This function initializes the SMS parameters.
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_parameter_init(void)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 id, j;
    smsal_parameter_struct *param_ptr = smsal_para_ptr;

    /*
     * Initialize RMI Parameters
     */
    param_ptr->rmi.service_mode = SMSAL_SERVICE0;

    param_ptr->rmi.message_format = SMSAL_PDU_MODE;

#if defined(__SMS_STORAGE_BY_MMI__)
    param_ptr->rmi.force_msg_mode = NUM_OF_SMSAL_MSG_FORMAT;
#endif

    /* param_ptr->rmi.sdh               = 0; */
    param_ptr->rmi.mms = SMSAL_MMS_ENALBE;

    param_ptr->rmi.service_info.mo = KAL_FALSE;
    param_ptr->rmi.service_info.mt = KAL_TRUE;
    param_ptr->rmi.service_info.bm = KAL_TRUE;

    param_ptr->rmi.nmi_para.mode = sms_cnmi_para_mode();
    param_ptr->rmi.nmi_para.mt = sms_cnmi_para_mt();
    param_ptr->rmi.nmi_para.ds = sms_cnmi_para_ds();
    param_ptr->rmi.nmi_para.bm = sms_cnmi_para_bm();

#if defined(__SMS_ME_STORAGE__) || defined(__SMS_STORAGE_BY_MMI__)
    /*
     * default preferred storage is any storage associated with ME, ie,
     * * SIM or ME, the access policy is SIM first, then ME
     */
    param_ptr->rmi.prefer_mem1 = SMSAL_STORAGE_UNSPECIFIED;     /* any */
    param_ptr->rmi.prefer_mem2 = SMSAL_SM_PREFER;       /* prefer SIM */
    param_ptr->rmi.prefer_mem3 = SMSAL_STORAGE_UNSPECIFIED;     /* any */
#else
    param_ptr->rmi.prefer_mem1 = SMSAL_SM;
    param_ptr->rmi.prefer_mem2 = SMSAL_SM;
    param_ptr->rmi.prefer_mem3 = SMSAL_SM;
#endif

    /* Robert add 2004-3-23 for RMI profile */
    param_ptr->rmi.act_pfile_id = 0;
    param_ptr->rmi.set_read_status = KAL_TRUE;

    kal_mem_set(param_ptr->rmi.profile.profile_name.name,
                0xff,
                SMSAL_PROFILE_NAME_LEN);

    param_ptr->rmi.profile.vp = SMSAL_DEFAULT_VP;
    param_ptr->rmi.profile.pid = SMSAL_DEFAULT_PID;
    param_ptr->rmi.profile.dcs = SMSAL_DEFAULT_DCS;
    param_ptr->rmi.profile.sca.addr_length = 0;
    kal_mem_set(param_ptr->rmi.profile.sca.addr_bcd, 0xff, SMSAL_ADDR_LEN);

    /*
     * Initialize Common Parameters
     */
    param_ptr->common.fo = SMSAL_DEFAULT_FO;

#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)
    param_ptr->common.bearer_service = SMS_PREFER_GSM;
#elif defined(__CS_SERVICE__)
    param_ptr->common.bearer_service = SMS_GSM_ONLY;
#elif defined(__PS_SERVICE__)
    param_ptr->common.bearer_service = SMS_GPRS_ONLY;
#endif
    param_ptr->common.selected_msp = 0;

    /*
     * Initialize Profile Parameters
     */
    param_ptr->profile.max_profile_num = 0;
    param_ptr->profile.alpha_size = 0;
    for (id = 0; id < SMSAL_MAX_PROFILE_NUM; id++)
    {
        kal_mem_set(param_ptr->profile.profile[id].profile_name.name,
                    0xff,
                    SMSAL_PROFILE_NAME_LEN);

        param_ptr->profile.profile[id].vp = SMSAL_DEFAULT_VP;
        param_ptr->profile.profile[id].pid = SMSAL_DEFAULT_PID;
        param_ptr->profile.profile[id].dcs = SMSAL_DEFAULT_DCS;
        param_ptr->profile.profile[id].sca.addr_length = 0;
        kal_mem_set(param_ptr->profile.profile[id].sca.addr_bcd,
                    0xff,
                    SMSAL_ADDR_LEN);
    }

    /*
     * Initialize Mailboxs
     */
    for (id = 0; id < SMSAL_MAX_MAILBOX_NUM; id++)
    {
        /* Initialize Mailbox Addresses */
        kal_mem_set(param_ptr->mailbox.addr[id].name.name,
                    0xff,
                    MAX_PS_NAME_SIZE);

        param_ptr->mailbox.addr[id].addr.addr_length = 0;
        kal_mem_set(param_ptr->mailbox.addr[id].addr.addr_bcd,
                    0x00,
                    L4_MAX_ADDR_BCD);
        param_ptr->mailbox.addr[id].capability_id = 0xff;
        param_ptr->mailbox.addr[id].extension_id = 0xff;
    }

    /* Initialize Message Waiting Indications */
    /* param_ptr->mailbox.mwis[id].waiting_ind = 0; */
    for (id = 0; id < SMSAL_MAX_LINES; id++)
        for (j = 0; j < NUM_OF_MSG_WAITING_TYPE; j++)
            param_ptr->mailbox.mwis[id].waiting_num[j] = 0;

    param_ptr->mailbox.alpha_size = 0;

#if defined (__CPHS__) || defined (__REL4__)
    param_ptr->mailbox.ext_rec_num = 0;       /* record number of EFext1/6 */
#endif

    param_ptr->mailbox.rec_num = 0;

#ifdef __REL4__
    for (id = 0; id < SMSAL_MAX_MSP_NUM; id++)
        for (j = 0; j < NUM_OF_MSG_WAITING_TYPE; j++)
        {
            param_ptr->mailbox.mbi[id].mbi_id[j] = 0;
            param_ptr->mailbox.r4mwis[id].waiting_num[j] = 0;
        }

    param_ptr->mailbox.mbi_rec_num = 0;        /* record number of EFmbi */
    param_ptr->mailbox.mwis_rec_num = 0;       /* record number of EFmwis */

#endif

#ifdef __CPHS__
    param_ptr->mailbox.mwf_file_size = SMSAL_MWF_LEN;
#endif

}                                       /* end of smsal_init_parameter */


/*****************************************************************************
* FUNCTION
*  smsal_pending_struct_init
* DESCRIPTION
*   This function initializes pending structs in SMSAL.
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_pending_struct_init(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;

    /* Initialize Pending Action Struct */
    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        smsal_cntx_ptr->pending_act[id].in_use = KAL_FALSE;
        smsal_cntx_ptr->pending_act[id].local_para_ptr = NULL;
    }

    /* Initialize for CNMI */
    for (id = 0; id < SMSAL_MAX_PENDING_CNMI; id++)
    {
        smsal_cntx_ptr->cnmi[id].is_used = KAL_FALSE;
    }

    /* Initialize Pending SMMA Struct */
    smsal_cntx_ptr->smma.pending_smma = KAL_FALSE;

}                                       /* end of smsal_pending_struct_init */


/*****************************************************************************
* FUNCTION
*  smsal_storage_num_init
* DESCRIPTION
*   This function initializes storage number usage.
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_storage_num_init(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_mem_set(&(smsal_cntx_ptr->storage_num_info), 0, sizeof(smsal_storage_num_struct));

}                                       /* end of smsal_storage_num_init */


/*****************************************************************************
* FUNCTION
*  smsal_init
* DESCRIPTION
*   This function is the main initialization of SMSAL.
*
* PARAMETERS
*  none
* RETURNS
*  KAL_TRUE: initialize successfully
*  KAL_TRUE: initialize failure
* GLOBALS AFFECTED
*  smsal_ptr_g
*****************************************************************************/
kal_bool smsal_init()
{
    kal_uint8 i;
    #ifdef __GEMINI__
    kal_uint8 cur_mod;
    #endif

    // move to main
    // smsal_ptr_g = &smsal_g;

    #ifdef __GEMINI__
    for (cur_mod = 0; cur_mod < SMSAL_MAX_SIM_NUM; cur_mod++)
    #endif
    {
    #ifdef __GEMINI__
        smsal_ptr_g = &smsal_g[cur_mod];
        smsal_para_ptr_g = &smsal_g[cur_mod].sms_parameter;

        smsal_cur_mod = MOD_SMSAL + cur_mod;
    #else
        smsal_ptr_g = &smsal_g;
        smsal_para_ptr_g = &smsal_g.sms_parameter;
        smsal_cur_mod = MOD_SMSAL;
    #endif


        kal_set_active_module_id(smsal_cur_mod);

        /* Initialize timers */
        smsal_init_timer();

        /* 2005/1/7 Only init pending action and flag during bootup. */
        /* Not in reset function.                                    */
        /* Initialize Pending Struct */
        smsal_pending_struct_init();

        /* Reset Flags */
        smsal_ptr_g->flags = 0;
        smsal_ptr_g->flags_ext = 0;

    #ifdef __CB__
        smsal_cb_init_context();
    #endif

        for (i = 0; i < SMSAL_MAX_REG_PORT_NUM; i++)
            smsal_ptr_g->reg_port.port[i] = SMSAL_INVALID_PORT_NUM;

    #if defined(__SMS_ME_STORAGE__)
        for (i = 0; i < SMSAL_MAX_CONCAT_MSG_SAVE; i++)
        {
            smsal_ptr_g->concat_msg_saving[i].concat_info.total_seg = 1;
            smsal_ptr_g->concat_msg_saving[i].concat_info.seg = 0;
            smsal_ptr_g->concat_msg_saving[i].hash = 0;
            smsal_ptr_g->concat_msg_saving[i].storage_type = SMSAL_STORAGE_UNSPECIFIED;
        }
    #endif

    }

    smsal_reset();

    #ifdef EMS_UT
    /* for PC test on MNT */
    {
        extern void EMSUT(void);
        extern EMSTATUS EMSInitialize(void);

        EMSInitialize();
        EMSUT();
    }
    #endif

    return KAL_TRUE;

}                                       /* end of smsal_init */


/*****************************************************************************
* FUNCTION
*  smsal_startup_finish
* DESCRIPTION
*   This function handles the completion of initialization.
*
* PARAMETERS
*  a  IN          first variable, used as returns
*  b  IN          second variable
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_startup_finish(kal_uint8 id, kal_bool result)
{
	smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
	smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
	kal_bool is_sim_card_change;
	kal_uint16 in_sim_no, in_me_no, out_sim_no, out_me_no;
	kal_uint16 unread_msg_num = 0;
	kal_uint16 total_sim_num, total_me_num;

    SET_FLAGS(SMSAL_RDY_FLAG);

    /* for msg box information */
    smsal_get_msgbox_num(NULL, &is_sim_card_change,
                            &in_sim_no, &in_me_no, &out_sim_no, &out_me_no,
                            &unread_msg_num, &total_sim_num, &total_me_num);
    /* target trace */
    kal_brief_trace(TRACE_WARNING, INFO_MSGBOX_NUM_INFO,\
              is_sim_card_change,\
              in_sim_no,\
              in_me_no,\
              out_sim_no,\
              out_me_no,\
              unread_msg_num,\
              total_sim_num,\
              total_me_num);

    smsal_free_pending_act(id);         /* Free the Pending Act Struct */

    smsal_init_vm_ind();

    /* check memory full ind */
    if (smsal_check_mem_full_status() == KAL_FALSE)
    {
        if ((IS_FLAG_SET(MEM_EXD_FLAG) == KAL_TRUE) &&
            (smsal_cntx_ptr->smma.pending_smma == KAL_FALSE) &&
            (IS_FLAG_SET(NORMAL_SERVICE_FLAG) == KAL_TRUE))
        {
            /* Send Memory Available Notification */
            smsal_cntx_ptr->smma.pending_smma = KAL_TRUE;
            smsal_send_mem_avl_notif_req();
        }
    }
#if defined(__CANCEL_LOCK_POWERON__)
    if( IS_FLAG_SET(SMSAL_ME_ONLY_INIT) == KAL_TRUE)
    {
        smsal_init_me_only_cnf(L4C_OK);     /* Send INIT_ME_CNF to L4C */
    }
    else
#endif
    {
    smsal_init_cnf(L4C_OK);             /* Send INIT_CNF to L4C */
    }

    /*
     * SCR: 1418
     * * if ClassB, after SMSAL initialization,
     * * if SMS preferred bearer service is not the default setting,
     * * notify SMS module.
     */
#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)
    if (smsal_para_ptr->common.bearer_service != SMS_PREFER_GSM)
    {
        smsal_prefer_sms_bearer_change();
    }
#endif

#ifndef __SMS_STORAGE_BY_MMI__
    /*
     * Handle the pending actions during SMSAL initialization,
     * * eg, write request
     */
    smsal_init_pending_act_hdlr();
#endif
}                                       /* end of smsal_init_finish */


/*****************************************************************************
* FUNCTION
*  smsal_deinit
* DESCRIPTION
*   This function releases the resources hold by SMSAL module.
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_deinit(void)
{
    /* Release the timers */
    smsal_release_timer();

    return KAL_TRUE;

}                                       /* end of smsal_deinit function */

