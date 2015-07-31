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
 * TCM_CONTEXT.H
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file describes the TCM context.
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#ifndef _TCM_CONTEXT_H
#define _TCM_CONTEXT_H


/** kals. */
#include "kal_general_types.h"
#include "kal_public_defs.h"

#ifdef __MASE__
#include "event_shed.h"
#endif

/** enums. */
#include "l3_inc_enums.h"
#include "mmi_sm_enums.h"
#include "ps_public_enum.h"
#include "mmi_l3_enums.h"
#include "ppp_l4_enums.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"

#include "flc2_config.h"
#include "flc2_tunable_para.h"

#if (defined(__IPV4V6__) || defined (__IPV6__))
#include "l4c_common_enum.h"    // l4c_tcm_activate_pdp_request_ipv6_dns_enum
#endif  /* (defined(__IPV4V6__) || defined (__IPV6__)) */


/** structs. */
#include "mcd_l3_inc_gprs_struct.h"
#include "ps_public_struct.h"


#ifdef __ACL_SUPPORT__
#include "tcm_acl_support.h"
#endif /* __ACL_SUPPORT__ */


#if defined(__UGTCM__) || defined(__MASE__)
#include "tcm_ugtcm_timer.h"
#endif /* __UGTCM__ */


#ifdef __MEDIATEK_SMART_QOS__
#include "nvram_editor_data_item.h"
#endif /* __MEDIATEK_SMART_QOS__ */


#ifdef __PS_SERVICE__

#if !((GPRS_MAX_PDP_SUPPORT >= 1) && (GPRS_MAX_PDP_SUPPORT <= 7))
#error please define GPRS_MAX_PDP_SUPPORT in the range [1-7]
#endif

#if ((MAX_INT_PDP_CONTEXT + MAX_EXT_PDP_CONTEXT) < GPRS_MAX_PDP_SUPPORT)
#error ((MAX_INT_PDP_CONTEXT + MAX_EXT_PDP_CONTEXT) < GPRS_MAX_PDP_SUPPORT) please increase the MAX_EXT_PDP_CONTEXT or decrease GPRS_MAX_PDP_SUPPORT
#endif

#if ((MAX_INT_PDP_CONTEXT > GPRS_MAX_PDP_SUPPORT))
#error please define MAX_INT_PDP_CONTEXT <= GPRS_MAX_PDP_SUPPORT
#endif

#ifdef __TCM_EXT_CALL_HISTORY_SUPPORT__
#error TCM does not support this compile option anymore from 10A
#endif

#endif /* __PS_SERVICE__ */

//poying-temp
#ifdef __TCM_REFACTOR_LOCAL_TEST__
    #define TCM_TOT_EXT_CONTEXT 3
    #define TCM_TOT_INT_CONTEXT 3
#else

#if (defined(__TCM_UT__) && defined(__IPV4V6__)) 
    /**
     * In IPv6 project, GPRS_MAX_PDP_SUPPORT and GPRS_MAX_PDP_SUPPORT will be set to 6
     * for fallback handling. Thus we need to set them back to 3 to fit TCM UT cases. 
     * Note: 
     * 1. Fallback only exists in IPv4v6 case. 
     * 2. For project with IPv4v6, MAX_EXT_PDP_CONTEXT is defined to 6 in Option.mak.
     */
    #define TCM_TOT_EXT_CONTEXT     3 //(MAX_EXT_PDP_CONTEXT/2)
#else  /* (define(__TCM_UT__) && defined(__IPV4V6__)) */
    #define TCM_TOT_EXT_CONTEXT     MAX_EXT_PDP_CONTEXT
#endif /* (define(__TCM_UT__) && defined(__IPV4V6__)) */

#if (defined(__TCM_UT__) && (MAX_INT_PDP_CONTEXT==0))
    /** TCM UT assumes that there is at least ONE internal PDP context. */
    #define TCM_TOT_INT_CONTEXT     1
#else  /* (defined(__TCM_UT__) && (MAX_INT_PDP_CONTEXT==0)) */
    #define TCM_TOT_INT_CONTEXT     MAX_INT_PDP_CONTEXT
#endif /* (defined(__TCM_UT__) && (MAX_INT_PDP_CONTEXT==0)) */ 

#endif /* __TCM_REFACTOR_LOCAL_TEST__ */


#define TCM_TOT_CONTEXT (TCM_TOT_EXT_CONTEXT + TCM_TOT_INT_CONTEXT)
#define TCM_INVALID_CONTEXT_ID 0

#define TCM_PRIMARY_UNKNOWN 0xFF 

#define TCM_MIN_CONTEXT_ID 1
#define TCM_MAX_CONTEXT_ID (1+TCM_TOT_CONTEXT-1)


/* NSAPI values used in TCM. */
#define TCM_INVALID_NSAPI 0
#define TCM_MIN_NSAPI     MIN_VALID_NSAPI                // nsapi_session_enum in "mmi_l3_enums.h"
#define TCM_MAX_NSAPI     MAX_THEORETICAL_VALID_NSAPI    // nsapi_session_enum in "mmi_l3_enums.h"


#define GET_FROM_NSAPI      0
#define GET_FROM_CONTEXTID  1


#define TCM_CGDCONT_DEFINED         0x01
#define TCM_CGDSCONT_DEFINED        0x02
#define TCM_CGQREQ_DEFINED          0x04
#define TCM_CGQMIN_DEFINED          0x08
#define TCM_CGTFT_DEFINED           0x10
#define TCM_CGDCONT_IPV4_ALLOC_VIA_DHCP 0x20    // __REL8__: Set if user configures "IPv4 address allocated via DHCP" by CGDCONT


#ifdef __GEMINI__
#ifndef GEMINI_PLUS
#define MOD_TCM_TOTAL_SIM (2)
#else  /* GEMINI_PLUS */
#define MOD_TCM_TOTAL_SIM (GEMINI_PLUS)
#endif /* GEMINI_PLUS */
#endif /* __GEMINI__ */

#define TCM_TOTAL_FLC_DL_POOL       FLC2_MAX_NPDU_POOLS_NUM

/** Addressing scheme to be used. */
typedef enum
{
    TCM_DYNAMIC_ADDR,
    TCM_STATIC_ADDR,
}tcm_addr_scheme_enum;

/** Validity of the context information in SIB. */
typedef enum
{
    TCM_CNTXT_INVALID,
    TCM_CNTXT_VALID
} tcm_cntxt_valid_enum;

/** Main states of TCM. */ 
typedef enum
{
    TCM_CONTEXT_INACTIVE_STATE       = 0,
    TCM_CONTEXT_WAIT_AP_RSP_STATE    = 1,
    TCM_CONTEXT_ACTIVE_STATE         = 2,
    
    TCM_CONTEXT_MAIN_STATE_TOTAL_NUM = 3,     
    TCM_CONTEXT_MAIN_STATE_END       = TCM_CONTEXT_MAIN_STATE_TOTAL_NUM
}tcm_context_main_state_enum;

/** Substates of TCM. */
typedef enum
{
    TCM_CONTEXT_INACTIVE_NULL_STATE = 0,    
    TCM_CONTEXT_INACTIVE_SUBSTATE_BEGIN = TCM_CONTEXT_INACTIVE_NULL_STATE, // 0
    TCM_CONTEXT_INACTIVE_WAITING_SM_ACT_CNF_STATE = 2,
    TCM_CONTEXT_INACTIVE_SUBSTATE_END = TCM_CONTEXT_INACTIVE_WAITING_SM_ACT_CNF_STATE, // 2
    
    TCM_CONTEXT_ACTIVE_WAITING_DATA_PLANE_CONFIG_CNF_STATE = 3,
    TCM_CONTEXT_ACTIVE_SUBSTATE_BEGIN = TCM_CONTEXT_ACTIVE_WAITING_DATA_PLANE_CONFIG_CNF_STATE, // 3
    TCM_CONTEXT_ACTIVE_DATA_STATE = 4,
    TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE = 5,
    TCM_CONTEXT_ACTIVE_SUBSTATE_END = TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE+1
}tcm_context_sub_state_enum;

/** Data plane states for TCM. */ 
typedef enum
{
    TCM_DATA_PLANE_DECONFIGURED  = 0,
    TCM_DATA_PLANE_CONFIGURING   = 1,
    TCM_DATA_PLANE_CONFIGURED    = 2,
    TCM_DATA_PLANE_DECONFIGURING = 3,
    
    TCM_DATA_PLANE_STATE_END = TCM_DATA_PLANE_DECONFIGURING+1
}tcm_context_data_plane_state_enum;

/** Event of data plane fsm. */
typedef enum
{
   TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_CONFIG_REQ, 
   TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_CONFIG_CNF, 
   TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_DECONFIG_REQ, 
   TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_DECONFIG_CNF
} tcm_data_plane_fsm_event_enum;

/** Type of additional parameter from L4C in ACT-request. */
typedef enum
{
   TCM_PDP_ACT_REQ_NO_EXTRA_PARAMETER,
   TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_DATA_ACCOUNT_ID,
   TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID,
   TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_PDPTYPE8_CHID8_MODID16, // module_id & channel_id << 16 & pdp_type << 24 
   TCM_PDP_ACT_REQ_EXTRA_PARAMETER_ENUM_LIMIT
} tcm_pdp_activate_req_additional_para_type_enum;

/** State of an nsapi: idle / in-use. */
typedef enum
{
    TCM_SIB_IDLE   = 0,
    TCM_SIB_IN_USE = 1
}tcm_sib_usage_enum;

/** pdp startup type: internal (via ATCI) or external (via PPP). */
typedef enum
{
   TCM_INTERNAL_STARTUP,
   TCM_EXTERNAL_STARTUP
}tcm_startup_type_enum; 


typedef enum
{
    PF_TYPE_ONE = 0,
    PF_TYPE_TWO,
    PF_TYPE_THREE,
    PF_TYPE_NONE
} packet_filter_type_enum;


typedef struct tcm_protocol_config_packet_struct
{
    kal_uint16 protocol_id;
    kal_uint8  protocol_config_size;
    kal_uint8  protocol_config[ MAX_CONFIG_OPTION_CONTENT_LEN ];
    struct tcm_protocol_config_packet_struct *next_ptr;
} tcm_protocol_config_packet_struct;


typedef struct tcm_packet_filter_struct
{
    kal_uint8                   context_id;
    packet_filter_type_enum     type; 
    
    l4c_pf_struct               pkt_filter;
    
    struct tcm_packet_filter_struct *next_ptr ;
} tcm_packet_filter_struct ;


typedef struct
{
    tcm_packet_filter_struct *filter_list_ptr;
} tcm_tft_struct;


typedef struct session_info_block_struct
{
    /** Context identifier (cid). */
    kal_uint8      context_id;
    
    /** Nsapi identifier. */
    kal_uint8      nsapi;     


    tcm_pdp_activate_req_additional_para_type_enum additional_para_type;
    kal_uint32 additional_para_content;

    /** AT commands defined(set) by user so far. */
    kal_uint8 	  AT_definition;

    /** Context type identifier (primary/secondary). */
    pdp_context_type_enum context_type; 

    /** Primary context identifier to which this context is associated. */                                         
    kal_uint8  primary_context_id;
    
    /** Access point name length. This is an optional parameter at the time of context activation. */
    kal_uint8      apn_len;  

    /** Type of pdp address. */
    pdp_addr_type_enum     pdp_addr_type;

    /** Length of pdp address. */
    pdp_addr_len_enum      pdp_addr_len; 
    
    /** Addressing scheme (static/dynamic). */
    tcm_addr_scheme_enum   addr_scheme; 
    
    /** The pdp address itself. */
    #ifdef __IPV4V6__
    kal_uint8 addr_val[IPV4V6_ADDR_LEN];
    #else /* __IPV4V6__ */
    kal_uint8 addr_val[MAX_PDP_ADDR_LEN];
    #endif /* __IPV4V6__ */

    /** Access point name. */
    kal_uint8      apn[MAX_APN_LEN];

    /** Protocol compression algorithm to be used in SNDCP. */        
    snd_pcomp_algo_enum pcomp_algo;

    /** Data compression algorithm to be used in SNDCP. */        
    snd_dcomp_algo_enum dcomp_algo;


    /** Requested qos (via +CGQREQ or +CGEQREQ). */
    qos_struct     req_qos;
									
    /** Minimum qos (via +CGQMIN or +CGEQMIN). */
    qos_struct     min_qos;
	
    /** Negoticated qos. */
    qos_struct     neg_qos;

    /** Context modification type field. */
    context_mod_type_enum     mod_type;  

    /** Layer 2 protocol used. */
    mmi_ltwoh_protocol_enum   l2p; 

    /** Length of protocol configuration option (PCO). */
    kal_uint8 prot_option_len; 

    kal_uint8 config_protocol;
    tcm_protocol_config_packet_struct  prot_options_struct;


    #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    /** Traffic flow template currently being used by a context. */
    tcm_tft_struct tft_in_use;  
    /** Traffic flow template to which the context is requested to modify to. */
    tcm_tft_struct tft_under_mod;
    /** Traffic flow template operation opcode */
    tft_opcode_enum     tft_opcode;   
    #endif /* __TURN_ON_GENERAL_SECONDARY_PDP__ */

    /** Usage: internal (via ATCI), external (via PPP). */
    tcm_startup_type_enum startup_type; 

    /** TCM context main state. */
    tcm_context_main_state_enum  main_state; 

    /** TCM context substate. */
    tcm_context_sub_state_enum  sub_state;

    /** TCM context data plane substate. */
    tcm_context_data_plane_state_enum data_plane_state;
    
    kal_uint8 nsapi_for_tcm_ratdm_deconfig_req_use;
    kal_bool has_enter_data_plane_configured_state;

    /** Used to know whether the sib is free or in use. */
    tcm_sib_usage_enum  is_sib_defined;

    
    kal_uint8          dns[MAX_PDP_ADDR_LEN];
    kal_uint8          dns2[MAX_PDP_ADDR_LEN];	

    kal_uint8          is_chap;

    kal_uint8          user_name[TCM_MAX_GPRS_USER_NAME_LEN];
    kal_uint8          password[TCM_MAX_GPRS_PASSWORD_LEN];

    /** L4C src_id. */
    kal_uint8 src_id;
    

    #ifdef __HSDPA_SUPPORT__
    data_speed_activate_enum data_speed;
    #endif /* __HSDPA_SUPPORT__ */

    kal_uint16  cause ;     /* Poying: ps_cause_enum. Reject cause to send to L4C. */

    #if (defined(__IPV4V6__) || defined (__IPV6__))
    /* Poying: For IPv6 smartphone, AT+CGPRCO is used to set req_IPv6_DNS flag. */
    l4c_tcm_activate_pdp_request_ipv6_dns_enum      act_pdp_cntxt_req_ipv6_dns;
    
    kal_bool ipv6_dns1_present;
    kal_uint8 ipv6_dns1[IPV6_ADDR_LEN];
    kal_bool ipv6_dns2_present;
    kal_uint8 ipv6_dns2[IPV6_ADDR_LEN];

    kal_bool pdp_act_cause_2_present ;
    kal_uint16 pdp_act_cause_2 ;

    kal_bool is_rejected_by_nw ;    /* Poying: From smreg_pdp_activate_rej_struct */
    #endif /* (defined(__IPV4V6__) || defined (__IPV6__)) */    


    #if defined(__UGTCM__) || defined(__MASE__)
    /** Stores the token_id sent by SM incase of a network initiated context activation indication. */
    kal_uint8      token_id; 
    /** Context initiation identifier (MS/NW). */
    initiated_enum initiated_by;
    kal_uint8 tear_down_flag;
    kal_uint16      req_n201u;
    #endif /* __UGTCM__ */

}session_info_block_struct; 


//#define __TCM_TST_INJECT_USE_SPECIFIED_NSAPI__

typedef struct tcm_context_struct
{
    /** Context for each session (cid). */
    session_info_block_struct sib_tab[TCM_TOT_CONTEXT];
    
    /** Array of deactivation causes, used when TCM receives a link free message from PPP. */
    ps_cause_enum deact_cause[TCM_TOT_CONTEXT];
    
    /** This field determines whether the context is valid in the SIB. */
    tcm_cntxt_valid_enum cntxt_flag[TCM_TOT_CONTEXT];

    /** This field indicates which nsapi are using this FLC DL pool or not (nsapi=0). */
    kal_uint8 nsapi_use_this_pool[TCM_TOTAL_FLC_DL_POOL];

    #ifdef __MODEM_EM_MODE__      /* Poying: 20101210. EM_MODE. Wrap by compile option. */
    kal_bool is_em_act_from_mmi ;       // em_source_enum
    kal_bool is_em_act_from_catcher ;   // em_source_enum
    #endif    

    #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
    /** Used in UT to simulate Test SIM. */
    kal_bool ut_is_test_sim_flag;  
    #endif /* ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) */

    #ifdef TCM_WAP_QOS_SETTING                
    kal_bool set_wap_qos;
    #endif

    #ifdef __GEMINI__
    /** Usage: 0x00: SIM1, 0x01: SIM2, etc. */
    kal_uint8		sim_interface;  /* sim_interface_enum */
    #endif /* __GEMINI__ */

    #ifdef __ACL_SUPPORT__
    acl_context_struct acl_cntxt;
    #endif /* __ACL_SUPPORT__ */

    kal_uint8 query_serial_number;
    kal_uint8 reset_serial_number;
    #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__))) || defined(__MASE__)
    /* TCM statistic data */
    kal_uint8 last_context_id;
    kal_uint32	total_rx_data;
    kal_uint32	total_tx_data;
    kal_uint32	last_rx_data;
    kal_uint32	last_tx_data;
    kal_bool     statistic_is_writing;		// if statistic is writing to nvram
    kal_bool     statistic_needs_update; 	// statistic needs to be updated
    #endif /* (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__))) */

    #if defined(__UGTCM__) || defined(__MASE__)
    event_scheduler         *tcm_event_scheduler_ptr;       /* Used for t3333 timers in MT PDP ACT. */
    tcm_event_info_struct   t3333timer[TCM_TOT_CONTEXT] ;   /* The t3333 timer for each pdp context. */
    
    kal_uint8 secondary_preserve_counter;  //__TCM_IOT__

    msg_type rcvd_fsm_msg;
    tcm_context_main_state_enum  main_state_when_rcv_fsm_msg;// tcm context main state
    tcm_context_sub_state_enum  sub_state_when_rcv_fsm_msg;// tcm context sub state
    tcm_context_data_plane_state_enum data_plane_state_when_rcv_fsm_msg; // tcm data plane sub state
    msg_type sent_fsm_msgs[TCM_MAX_RECORDING_MSGS_NUM];
    kal_bool record_sent_msg;
    kal_bool can_send_data_plane_config_req;
    #endif /* __UGTCM__ */

    #ifdef __TCM_TST_INJECT_USE_SPECIFIED_NSAPI__
    kal_uint8 tcm_tst_specified_nsapi ;
    #endif /* __TCM_TST_INJECT_USE_SPECIFIED_NSAPI__ */

    #ifdef __REL8__
    kal_bool    tcm_skip_ipv4_alloc;
    #endif /* __REL8__ */
    
    #ifdef __MEDIATEK_SMART_QOS__
    nvram_ef_msq_list_struct *tcm_msq_context_ptr ;
    #endif /* __MEDIATEK_SMART_QOS__ */
    
}tcm_context_struct;


extern tcm_context_struct *tcm_ptr_g;
#define TCM_PTR(X) (tcm_ptr_g->X)

#define SESSION_INFO_PTR session_info_block_struct* 

kal_bool tcm_is_sib_free( kal_uint8 sib_id, tcm_sib_usage_enum *sib );
kal_uint8 tcm_get_sib_id( kal_int32 flag, kal_uint8 val );
session_info_block_struct *tcm_get_sib_ptr( kal_uint8 cindex );
kal_uint8 tcm_get_context_id_from_sib_id( kal_uint8 sib_id );
kal_bool tcm_create_sib( kal_uint8 sib_id );

kal_bool tcm_alloc_nsapi( kal_uint8 context_id );
void tcm_free_nsapi( SESSION_INFO_PTR si_db_ptr );

kal_uint8 tcm_nsapi_check( kal_uint8 nsapi );
kal_uint8 tcm_nsapi_to_cid( kal_uint8 nsapi );
kal_uint8 tcm_cntxt_id_check( kal_uint8 cntxt_id );

kal_bool mmi_is_internal( SESSION_INFO_PTR si_db_ptr );
kal_bool tcm_is_test_sim(void);

kal_bool tcm_terminate_context( kal_uint8 sib_id );

void tcm_translate_apn( kal_uint8 *access_name, SESSION_INFO_PTR si_db_ptr );

void tcm_change_additional_para_value( SESSION_INFO_PTR si_db_ptr, kal_uint8 new_type, kal_uint32 new_value );
void tcm_change_tcm_context_main_state_value( SESSION_INFO_PTR si_db_ptr, tcm_context_main_state_enum new_value );
void tcm_change_tcm_context_sub_state_value( SESSION_INFO_PTR si_db_ptr, tcm_context_sub_state_enum new_value );
void tcm_change_tcm_context_data_plane_state_value( SESSION_INFO_PTR si_db_ptr, tcm_context_data_plane_state_enum new_value, ilm_struct *ilm_ptr );

flc2_pool_id_enum tcm_alloc_dl_flc_pool_id(kal_uint8 nsapi);
void tcm_free_dl_flc_pool_id(kal_uint8 nsapi);

#ifdef __HSDPA_SUPPORT__
void tcm_change_data_speed_state( session_info_block_struct *si_db_ptr, data_speed_activate_enum new_value );
#endif /* __HSDPA_SUPPORT__ */ 

#ifdef __MEDIATEK_SMART_QOS__
kal_bool tcm_msq_check_if_use_r6_qos(void);
    #define __TCM_DEBUG_MSQ_LIST__
    #ifdef __TCM_DEBUG_MSQ_LIST__
    void tcm_msq_print_msq_list(void);
    #endif /* __TCM_DEBUG_MSQ_LIST__ */
#endif /* __MEDIATEK_SMART_QOS__ */

#endif /* _TCM_CONTEXT_H */
