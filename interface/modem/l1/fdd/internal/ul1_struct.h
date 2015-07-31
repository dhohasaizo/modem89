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
 * ul1_struct.h
 *
 * Project:
 * --------
 *   WCDMA_Software
 *
 * Description:
 * ------------
 *   Layer 1 and Protocol Stack message and callback function definition
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _UL1_STRUCT_H
#define _UL1_STRUCT_H

/* auto add by kw_check begin */
#include "ul1_def.h"
#include "kal_general_types.h"
#include "ul1_cnst.h"
/*#include "ul1tst_msg.h"*/
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_public_api.h" //MSBB change #include "app_ltlcom.h"
/* auto add by kw_check end */

/*****************************************************************************
Request from 3G PS 
*****************************************************************************/
typedef struct _cphy_bch_setup_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. should -1 (Immediate) */
   kal_int16                     rx_sfn;                             /* SFN for start BCH. -1 ~ 4095. -1 means immedaite */
   kal_int32                     tm;                                 /* LST of the cell boundary. 0 ~ 38400*8-1 */
   kal_int16                     off;                                /* Frame # offset to LST. -1 ~ 4095. -1 means unknown */
   kal_bool                      sfn_only;                           /* Only read SFN */
   kal_uint16                    dl_freq;                            /* DL UARFCN */
   kal_uint16                    psc;                                /* Primary scrambling code */
   kal_bool                      sttd;                               /* STTD setting */
   kal_int8                      sib7_index;                         /* Indicate which SIB Info in sib_list is SIB7 */
                                                                     /* -1 means there is not SIB7 in the list */
   kal_uint16                    sib7_rep_cycle;                     /* 2 ~ 256. The meaning of sib7_rep_cycle becomes "SIB7 expiration timer / SIP_REP" */
                                                                     /* The true value is 2^sib7_rep_cycle. */
   kal_bool                      servingcell;                        /* MTK not used */
   bch_priority_E                bch_priority;                       /* Priority of this BCH */
   kal_uint8                     sib_num;                            /* # of SIB to be read, 0 means all SIBs reception.*/
   sib_info_T                    sib_list[MAX_SIB_PATTERN];          /* SIB information */

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )
   kal_uint16                   priority_index;                     /*Priority_index for same priority channel in 3G Gemini project*/   
#endif
} cphy_bch_setup_req_struct;

typedef struct _cphy_bch_modify_req_struct
{
   LOCAL_PARA_HDR 
 
   kal_int16                     act_time;                           /* activation time. -1 ~ 4095. -1 means immediate */
   kal_int16                     rx_sfn;                             /* SFN for start BCH. -1 ~ 4095. -1 means immedaite */   
   kal_uint8                     modify_flag;                        /* 0x01 : bch_priority is changed */
                                                                     /* 0x02 : SIB information is changed */
                                                                     /* 0x03 : Both bch_priority and SIB information are changed */
                                                                     /*0x04: priority idx*/
   kal_int8                      sib7_index;                         /* Indicate which SIB Info in sib_list is SIB7 */
                                                                     /* -1 means there is not SIB7 in the list */
   kal_uint16                    sib7_rep_cycle;                     /* 2 ~ 256. The meaning of sib7_rep_cycle becomes "SIB7 expiration timer / SIP_REP" */
                                                                     /* The true value is 2^sib7_rep_cycle. */

   bch_priority_E                bch_priority;                       /* Priority of this BCH */
   kal_uint8                     sib_num;                            /* # of SIB to be read */
   sib_info_T                    sib_list[MAX_SIB_PATTERN];          /* SIB Information */

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )
   kal_uint16                   priority_index;                     /*Priority_index for same priority channel in 3G Gemini project*/   
#endif

} cphy_bch_modify_req_struct;

typedef struct _cphy_bch_release_req_struct
{
   LOCAL_PARA_HDR 
} cphy_bch_release_req_struct;

typedef struct _cphy_pch_setup_req_struct
{
   LOCAL_PARA_HDR 
 
   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   kal_uint16                    dl_freq;                            /* DL UARFCN */
   kal_int32                     tm;                                 /* LST to Cell boundary. 0 ~ 38044*8-1 */ 
   kal_int16                     off;                                /* Frame # offset to LST. 0 ~ 4095 */
   FACH_PCH_Info_T               fach_pch_info;                      /* Channel information */
#ifdef __UMTS_R8__
   kal_bool                      etws_reception;                     /* TRUE: UL1 need to receive CCCH continuously */
#endif  /* __UMTS_R8__ */
} cphy_pch_setup_req_struct;

typedef struct _cphy_pch_modify_req_struct
{
   LOCAL_PARA_HDR 
 
   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   pich_reconfig_type_E          reconfig_type;
   pich_drx_T                    pich_drx;                           /* Modified DRX information */
#ifdef __SMART_PAGING_3G_FDD__
   pich_smartpaging_T            smartpaging_info;
#endif
#ifdef __UMTS_R7__
   pich_drx_T        pich_drx_cycle2;               /* DRX parameters 2 for PICH. */
   kal_uint16            drx_cycle2_time;             /* if it's not 0. UL1 shall use pich_drx_2 for PICH receptin, else shall directly use pich_drx for PICH reception. 0~5120 ms */
#endif  /* __UMTS_R7__ */
} cphy_pch_modify_req_struct;

typedef struct _cphy_pch_release_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
} cphy_pch_release_req_struct;

typedef struct _cphy_fach_setup_req_struct
{
   LOCAL_PARA_HDR 
 
   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   kal_uint16                    dl_freq;                            /* DL UARFCN */
   kal_int32                     tm;                                 /* LST to Cell boundary. 0 ~ 38044*8-1 */ 
   kal_int16                     off;                                /* Frame # offset to LST. 0 ~ 4095 */
   FACH_PCH_Info_T               fach_pch_info;                      /* Channel information */
} cphy_fach_setup_req_struct;

typedef struct _cphy_fach_modify_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   ctch_drx_T                    ctch_drx;                           /* Modified CTCH DRX information */
} cphy_fach_modify_req_struct;

typedef struct _cphy_fach_release_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
} cphy_fach_release_req_struct;

typedef struct _cphy_rach_setup_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   kal_uint16                    ul_freq;                            /* UL UARFCN */
   aich_info_T                   aich_info;                          /* AICH info and ASC setting for PRACH partition */
   prach_info_T                  prach_info;                         /* PRACH information */
   prach_power_T                 prach_power;                        /* PRACH power information */
   kal_uint8                     tfc_num;                            /* # of TFC. 1 ~ 32 (Only 1 TrCH for 1 PRACH) */
   ul_rach_tfc_T                 tfcs[MAXTF];                       /* TFCS (TFS) */
   ul_rach_trch_T                trch_list[1];                       /* Only 1 TrCH */
#ifdef __UMTS_R8__
   cell_fach_ul_trch_type_E      trch_type;                          /* the transport channel type of random access attemp */
   edch_specific_info_T          edch_specific_info;                 /* PRACH and AICH specific information used for common E-DCH transmission */
#endif  /* __UMTS_R8__ */
} cphy_rach_setup_req_struct;

typedef struct _cphy_rach_release_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
} cphy_rach_release_req_struct;

typedef struct _cphy_dch_setup_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   dch_setup_msg_type_E          setup_type;                         /* SETUP, TRHHO or TRHHO revert */
   kal_int8                     tm_rl_index;                                 /* indicate the index of specific RL in array dl_dpch_rl[] which has the valid Tm value. */ 
   kal_int16                     off;                                /* Frame # offset to LST. 0 ~ 4095 */
   kal_int16                     rscp;                      /* Serving cell RSCP. Range: -464 ~ -100 means (-116 ~ -25 )dBm in 0.25 dB step*/
   kal_uint8                     tid;                                /* Transaction id */
   
   kal_uint8                     dl_crc_ind;                         /* For those TrCHs whose CRC data should be sent to MAC, 
                                                                        their corresponding bit will be set to 1.
                                                                        The MSB represents the lowest numbered TrCH ID.
                                                                      */
   
   kal_uint16                    ul_freq;                            /* UL UARFCN */   
   kal_uint16                    ul_tfc_num;                         /* # of TFC for UL DPCH */
   ul_dpch_tfc_T                 ul_tfcs[MAX_UL_TFC];                /* UL TFCS */
   kal_uint8                     ul_trch_num;                        /* # of UL TrCH */
   ul_dch_trch_T                 ul_trch_list[MAX_UL_TRCH];          /* UL DPCH TrCH Info */
   ul_dpch_info_T                ul_dpch_info;

   kal_uint16                    dl_freq;                            /* DL UARFCN */
   kal_uint16                    dl_tfc_num;                         /* # of TFC for DL DPCH */
   dl_tfc_T                      dl_tfcs[MAX_DL_TFC];                /* DL TFCS */
   kal_uint8                     dl_trch_num;                        /* # of DL TrCH */
   dl_dch_trch_T                 dl_trch_list[MAX_DL_TRCH];          /* DL DPCH TrCH Info */
   kal_int8                      max_tx_power;                       /* Max allowed TX power. -50 ~ 33 dBm */
   kal_int8                      umts_power_class;                   /* UE capability*/
   
   kal_uint8                     tgps_action_nbr;                    /* Number of TGPs actiosn */
   TGPS_Action_T                 tgps_action[12];                    /* TGPS actions */
   
   dl_dpch_rla_T                 dl_dpch_rla;                        /* DL Info & DL DPCH Info common for all RLs */
   kal_uint8                     rl_num;                             /* # of RL. 1 ~ 8 */
   dl_dpch_rl_T                  dl_dpch_rl[MAX_RL];                 /* DL Info & DL DPCH Info. for each RL */
   
   dl_establish_T                dl_sync_info;                       /* DL DPCH establishment criterion */

   kal_bool                      non_sync_ind;                       /* [R6] FALSE: sync procedure shall be performed. TRUE: Sync procedure shall not be performed
                                                                        for R5 and previous version, this value should be FALSE. 
                                                                        This field can be set to true only when setup_type is DCH_TMHHO  */                                                               
   kal_bool                      post_verification;                  /* [R6] TRUE: Post verification period shall be used . FALSE: Post verification period shall not be used.
                                                                        for R5 and previous version, this value should be FALSE  */
   dpch_type_E                   dpch_type;                          /* [R6] DPCH or F-DPCH, for R5 and previous version, this value should be DPCH_TYPE */
                                                                     /* This value should be consistent with the dpch_type field in dl_dpch_rl */

   kal_uint8                     ul_mac_event;                       /* Indicate if UMAC need setup/modify/release event */
#ifdef __UMTS_R8__
   kal_bool                      edch_info_included;                 /* True means that IE "E-DCH info" is include in the reconfiguration message in the transition 
                                                                      * from FACH state to DCH state. UL1 uses this and following flags and other condition to determine
                                                                      * if it is needed to perform Sync A procedure. Please see UL1 SAP in details. */
   kal_bool                      fach_to_dch_cell_change;            /* the PSC of RLs included in active set does not include the PSC of the current cell in CELL_FACH. */
#endif  /* __UMTS_R8__ */
} cphy_dch_setup_req_struct;

typedef struct _cphy_dch_modify_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   dch_modify_msg_type_E         modify_type;                        /* MODIFY, ASU, or Loop back mode 2 */

   kal_uint8                     tid;                                /* Transaction id */
   
   kal_bool                      ul_mod_ind;                         /* Indicate whether UL modify indication should be sent to MAC */
   kal_bool                      dl_mod_ind;                         /* Indicate whether DL modify indication should be sent to MAC */
   
   kal_uint8                     dl_crc_ind;                         /* For those TrCHs whose CRC data should be sent to MAC, 
                                                                        their corresponding bit will be set to 1.
                                                                        The MSB represents the lowest numbered TrCH ID.
                                                                      */

   kal_uint16                     modify_field;                       /* Bit field to represent for the parameters that should be modified 
                                                                        Bit 0 : DL TrCH parameter
                                                                        Bit 1 : DL TFCS parameter
                                                                        Bit 2 : UL TrCH parameter
                                                                        Bit 3 : UL TFCS parameter
                                                                        Bit 4 : DL common RL parameter
                                                                        Bit 5 : DL each RL parameter
                                                                        Bit 6 : UL RL parameter
                                                                        Bit 7 : Physical parameters such as UL/DL freq and max TX power
                                                                        Bit 8 : DL sync info which means timer and constant updating
                                                                      */
   /* Bit 3 */
   kal_uint16                    ul_tfc_num;                         /* # of TFC for UL DPCH */
   ul_dpch_tfc_T                 ul_tfcs[MAX_UL_TFC];                /* UL TFCS */
   /* Bit 2 */
   kal_uint8                     ul_trch_num;                        /* # of UL TrCH */
   ul_dch_trch_T                 ul_trch_list[MAX_UL_TRCH];          /* UL DPCH TrCH Info */
   /* Bit 1 */
   kal_uint16                    dl_tfc_num;                         /* # of TFC for DL DPCH */
   dl_tfc_T                      dl_tfcs[MAX_DL_TFC];                /* DL TFCS */
   /* Bit 0 */
   kal_uint8                     dl_trch_num;                        /* # of DL TrCH */
   dl_dch_trch_T                 dl_trch_list[MAX_DL_TRCH];          /* DL DPCH TrCH Info */
   /* Bit 4 */
   dl_dpch_rla_T                 dl_dpch_rla;                        /* DL Info & DL DPCH Info common for all RLs */

   kal_uint8                     tgps_action_nbr;                    /* Number of TGPs actiosn */
   TGPS_Action_T                 tgps_action[12];                    /* TGPS actions */
   
   /* Bit 6 */
   ul_dpch_info_T                ul_dpch_info;
   /* Bit 7 */
/*remove these fields according to frequency info handler discussion*/      
//   kal_uint16                    ul_freq;                            /* UL UARFCN */   
//   kal_uint16                    dl_freq;                            /* DL UARFCN */
   kal_int8                      max_tx_power;                       /* Max allowed TX power. -50 ~ 33 dBm */
   kal_int8                      umts_power_class;                   /* UE capability*/
   /* Bit 5 or ASU */  /* For Bit 5 modification, only rl_num_add and dl_dpch_rl_add are used */
   kal_uint8                     rl_num_delete;                      /* # of RL to be removed. 1 ~ 8*/
   kal_uint16                    dl_dpch_rl_delete[MAX_RL];          /* RL to be removed (PSC) */
   kal_uint8                     rl_num_add;                         /* # of RL to be added. 1 ~ 8 */
   dl_dpch_rl_T                  dl_dpch_rl_add[MAX_RL];             /* DL Info & DL DPCH Info. for each RL */
   dpch_type_E                   dpch_type;                          /* [R6] DPCH or F-DPCH, for R5 and previous version, this value should be DPCH_TYPE */
                                                                     /* This value should be consistent with the dpch_type field in dl_dpch_rl */

   kal_uint8                     ul_mac_event;                       /* Indicate if UMAC need setup/modify/release event */
   
   /* Bit 8 for dl sync info updating */
   dl_establish_T                dl_sync_info;                       /* DL DPCH establishment criterion */
} cphy_dch_modify_req_struct;

typedef struct _cphy_dch_release_req_struct
{
    LOCAL_PARA_HDR

    kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   
    kal_bool                      isStopLoopTestM2First;              /* LCL needs to stop Loop Test explicitly before releasing DCH in abnormal case. */
   
    kal_uint8                     tgps_action_nbr;                    /* Number of TGPs actiosn */
    TGPS_Action_T                 tgps_action[12];                    /* TGPS actions */

    dpch_type_E                   dpch_type;                          /* [R6] DPCH or F-DPCH, for R5 and previous version, this value should be DPCH_TYPE */
                                                                      /* This value should be consistent with the dpch_type field in dl_dpch_rl */

    kal_uint8                     ul_mac_event;                       /* Indicate if UMAC need setup/modify/release event */
#ifdef __UMTS_R7__
   dpch_release_type_E      release_type;			/* [R7] for whether UL1 need to record the HSS-SCCH oreder */             
#endif  /* __UMTS_R7__ */
      
} cphy_dch_release_req_struct;

typedef struct _cphy_tgps_delete_req_struct
{
   LOCAL_PARA_HDR
   
   kal_uint8                     tgps_action_nbr;                    /* Number of TGPs actiosn */
   TGPS_Action_T                 tgps_action[12];                    /* TGPS actions */

} cphy_tgps_delete_req_struct;

/* RRCE notifies UL1 if UL1 should resume sending cphy_tgps_overlap_ind*/
typedef struct _cphy_tgps_overlap_resume_reporting_req_struct
{
   LOCAL_PARA_HDR

     kal_uint8                     tgpsi;                              /* TGPSI of TGPS beging removed. 1 ~ 6 */
} cphy_tgps_overlap_resume_reporting_req_struct;


typedef struct _cphy_frequency_scan_req_struct
{
   LOCAL_PARA_HDR
   kal_uint8                     max_num_cell;                       /* maximum # of cells reported in 1 freq scan
                                                                        If L1 found and report max_num_cell in 1 freq, 
                                                                        it should halt the freq scan 
                                                                      */
   kal_int16                     timeout;                            /* The max time spent to do cell search on 1 freq. (ms)
                                                                        If L1 has spent so much time to do cell search on 1 freq,
                                                                        it will send an ind to RRC and halt the freq scan procedure.
                                                                     */

   kal_uint8                     num_freq_range;                     /* # of range list */
   kal_uint16                    uarfcn_begin[MAX_FREQ_RANGE];       /* Begin of DL uARFCN for range cell search */
   kal_uint16                    uarfcn_end[MAX_FREQ_RANGE];         /* End of DL uARFCN for range cell search */

   kal_uint8                     num_freq_list;                      /* # of freq for preferred freq list */
   kal_uint16                    uarfcn_list[MAX_FREQ_LIST];                        /* List of UARFCN */

   kal_uint8                     num_psc;                            /* # of preferred cells */
   preferred_cell_list_T         preferred_cell_list[MAX_PREFERRED_PSC]; /* Preferred cell list */

   kal_bool                      full_band_search;                   /* Perform full band scan; igonoring other parameters. */
   kal_bool                      freq_correct;                       /* If 3G L1 need to do frequency correction */
   kal_bool                      resume;                             /* TRUE: UL1 should resume previous freq scan, UL1 didn't care the other fields in this msg
                                                                        FALSE: UL1 should start a new freq scan according to this msg */

   /*Add for improving full band FS efficiency -- by excluding some UARFCN or some frequency range*/
   full_band_option_E            full_band_option;                   /*To indicate if "[filtered frequency list]/[frequency range]" shall be refered for full band search"*/
   kal_uint8                     working_UMTS_FDD_band[4];            /* Bitmask for frequency bands necessary to be scanned for this request */
   kal_uint8                     prefer_freq_list_cnt;               /* # of preferred freq list */
   kal_uint16                    prefer_uarfcn_list[MAX_FREQ_LIST];  /* List of prefered freq */
   kal_bool                      is_plmn_list;                       /* the prefered freq list is PLMN list or PLMN search */
#ifdef __UMTS_R8__
   kal_bool                      is_csg_search;          /* [Rel8][CSG search]: to notify that current fs is for csg */
#endif

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )    
   kal_uint16                    priority_index;   

#ifdef   __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
   kal_uint8                     priority_level;                     /* [Range] 0~2. This field is only used for Gemini 2.0.
                                                                        This value is used to indicate which gap pattern should be used for this freq scan in Virtual mode. 
                                                                        (0= highest priority; 1 = 2nd priority; 2 = lowest priority) */
#endif   /*__GEMINI_MONITOR_PAGE_DURING_TRANSFER__*/
#endif   /* __GEMINI_GSM__ && __UMTS_RAT__ */

} cphy_frequency_scan_req_struct;

typedef struct _cphy_frequency_scan_continue_req_struct
{
   LOCAL_PARA_HDR

   kal_bool                   continue_cell;                /* True if MEME want L1 to do continue cell search on current frequency
                                                               instead of jumping to next specified frequency. */
   kal_uint16                 ecs_freq;                     /* exhaustive cell search frequency */
} cphy_frequency_scan_continue_req_struct;

typedef struct _cphy_frequency_scan_suspend_req_struct
{
   LOCAL_PARA_HDR
} cphy_frequency_scan_suspend_req_struct;

/* This interface should not be used in MT6268 */
typedef struct _cphy_frequency_scan_stop_req_struct
{
   LOCAL_PARA_HDR
} cphy_frequency_scan_stop_req_struct;

/* MSG_ID_CPHY_RSSI_SNIFFER_START_REQ (Add by Janet) */
typedef struct _cphy_rssi_sniffer_start_req_struct
{
   LOCAL_PARA_HDR
   
   kal_uint8                  num_freq_list;                                  /* # of freq for scan list of RSSI sniffer */
   kal_uint16                 uarfcn_list[MAX_RSSI_SNIFFER_SCAN_LIST];        /* List of UARFCN */

} cphy_rssi_sniffer_start_req_struct;

/* MSG_ID_CPHY_RSSI_SNIFFER_STOP_REQ (Add by Janet) */
typedef struct _cphy_rssi_sniffer_stop_req_struct
{
   LOCAL_PARA_HDR
} cphy_rssi_sniffer_stop_req_struct;

typedef struct _cphy_measurement_config_tgps_req_struct
{   
   LOCAL_PARA_HDR

   kal_int16                     rx_cfn;                             /* message rx_cfn */
   tgps_status_info_T            tgps_status_info;                   /* Used to enable/disable particular TGPSs */
   
   kal_uint8                     tgps_action_nbr;                    /* Number of TGPs actiosn */
   TGPS_Action_T                 tgps_action[12];                    /* TGPS actions */
} cphy_measurement_config_tgps_req_struct; 

typedef struct _cphy_measurement_config_fmo_req_struct
{   
   LOCAL_PARA_HDR

   fach_mo_info_T                fach_mo_info;                       /* FACH MO param */
} cphy_measurement_config_fmo_req_struct; 

typedef struct _cphy_measurement_config_cell_req_struct
{
   LOCAL_PARA_HDR
 
   kal_uint8                     tid;                                /* Transaction ID to sync between request and indication */
#ifndef __MTK_UL1_FDD__ /* 20080317: Since MEME/UL1 has removed MEAS_MODIFY, the information provided by immediate rpt becomes useless. */
   kal_bool                      immediate_rpt;                      /* TRUE : L1 will immediate send a meas report to RRC after configure completed */
#endif
   kal_bool                      stop_flag;                          /* TRUE : just stop meas. UL1 will NOT clear all cell info list and meas param */

   kal_bool                      meas_spec_valid;                    /* Indicate if meas_spec is valid */
   meas_spec_T                   meas_spec;                          /* meas spec for CPICH cell meas */

   kal_bool                      cell_info_list_valid;               /* Indicate if cell_info_list[], uarfcn[] and action[] are valid */
   kal_uint16                    uarfcn[MAX_UMTS_FREQ];              /* List of reference DL UARFCN */
   kal_uint8                     num_cell;                           /* # of cells in cell_info_list[] */
   cell_info_list_T              cell_info_list[MAX_NUM_MEASURED_CELL]; /* List of cells to be measured. */
   meas_act_E                    action[MAX_UMTS_FREQ];                          /* Action that should be applied to cell lsits.
                                                                        MEAS_UPDATE : Add/Repleace cell list of a new specified freq (Both freq and cell list with tm/off are changed)
                                                                        MEAS_MODIFY : (20080130: Removed)
                                                                        MEAS_DELETE : Delete the cell list of a freq.
                                                                      */

   supplementary_meas_parameter_T    supplementary_meas_parameter;  /* These parameters are supplementary for UL1 measurement. These parameters may be set by CSCE or MEME */
   
   kal_int8                     idx_intra_freq;     /* [Range]: 0 ~ 2. Indicate which frequency in the array uarfcn[MAX_UMTS_FREQ] is intra-frequency, -1 means invalid */

   kal_bool  intra_meas_period_valid;     /* Only for MTK L1: configure Intra-freq. meas. period in DCH/FACH */
   kal_uint8 intra_period_N;                     /* Num. of 40/50 ms */

   kal_bool  inter_meas_period_valid;     /* Only for MTK L1: configure Inter-freq. meas. period in DCH/FACH */
   kal_uint8 inter_period_N;                     /* Num. of GAPs or FMOs */

   kal_bool                      meas_period_valid;                  /* Only for MA */
   kal_uint16                    period_unit;                        /* Only for MA */
   kal_uint8                     period_N;                           /* Only for MA */
#ifdef __UMTS_R8__
   kal_int16         T_higher_prio_search;         /* [Rel8][Absolute Priority Search] -1: no need to watch priority_search_control in cell_info_list_T */
                                                   /* [Rel8][Absolute Priority Search] others: real value for the timer */

   kal_bool          detected_cell_info_list_valid;   /* [Rel8][CSG search]: to judge if detected cell list is valid, the list is configured under IDLE state */
   kal_uint8         num_detected_cell;               /* [Rel8][CSG search]: number of detected cell, number <= 6 */
   cell_info_list_T  detected_cell_info_list[6];      /* [Rel8][CSG search]: information of the detected cell list */

   kal_int8          idx_adjacent_freq;               /* [Rel8][Adjacent Frequency Measurement] -1: no idjacent frequency */
                                                      /* [Rel8][Adjacent Frequency Measurement] 0~2: adjacent frequency index referred to uarfcn[3] */
#endif
   kal_int8          idx_first_meas_uarfcn_for_3g_standby; /* [Rel8][ABPCR] under standby mode, indicated uarfcn controlled by RR is first to be scheduling measured */

} cphy_measurement_config_cell_req_struct;

typedef struct _cphy_measurement_config_tx_power_req_struct
{
   LOCAL_PARA_HDR
 
   kal_bool                      periodic_ind;                       /* Indicate periodically or event triggered. TRUE means period */

   kal_uint8                     periodic_measurement_id;
   kal_uint8                     report_num;                         /* # of period report to be sent. 0 ~ 64 */
   kal_uint16                   period;                             /* Report period. 25 ~ 6400 frames */
   
   kal_uint8                     event_num;                          /* # of events in event[] */
   meas_event_T                  event[MAX_MEAS_EVENT];              /* List of TX power meas event */

   kal_uint8                     filter;                             /* L3 filtering coefficient. 0 ~ 19 */

} cphy_measurement_config_tx_power_req_struct;

typedef struct _cphy_measurement_config_tx_power_stop_req_struct
{
   LOCAL_PARA_HDR
 
} cphy_measurement_config_tx_power_stop_req_struct;



typedef struct _cphy_treselection_start_req_struct
{
   LOCAL_PARA_HDR

   kal_uint32        treselection_value;     /* One shot cell measurement will be triggered after T_reselection.
                                                treselection_value can not be 0. uint = ms */   
   kal_uint8         freq_num;               /* Indicate the number of freq that need to perform CM after T_reselection.
                                                range: 1~MAX_UMTS_FREQ */
   kal_uint16        freq[MAX_UMTS_FREQ];    /* Indicate the frequency that need to perfrom CM. */   
}  cphy_treselection_start_req_struct;

typedef struct _cphy_tx_power_result_req_struct
{
   LOCAL_PARA_HDR
} cphy_tx_power_result_req_struct;

typedef struct _cphy_specific_cell_search_req_struct
{
   LOCAL_PARA_HDR

   kal_uint16                    freq;                               /* UARFCN of the specific cell */
   kal_uint16                    psc;                                /* Primary scrambling code of the specific cell */
   kal_bool                       sttd;                               /*True if STTD is used in the designated cell. */
   kal_bool                      sttd_valid;                          /* True if sttd is useful to UL1 */   

} cphy_specific_cell_search_req_struct;

typedef struct _cphy_specific_cell_search_stop_req_struct
{
   LOCAL_PARA_HDR
} cphy_specific_cell_search_stop_req_struct;

typedef struct _cphy_reset_req_struct
{
   LOCAL_PARA_HDR
} cphy_reset_req_struct;

typedef struct _cphy_rf_on_req_struct
{
   LOCAL_PARA_HDR
 
  kal_uint8    working_UMTS_FDD_band[4]; 
} cphy_rf_on_req_struct;

typedef struct _cphy_rf_off_req_struct
{
   LOCAL_PARA_HDR
} cphy_rf_off_req_struct;

typedef struct _cphy_set_active_rat_req_struct
{
   LOCAL_PARA_HDR

   mode_type_E                   mode;                               /* Curernt mode setting (Single, Dual) */
   rat_type_E                    rat;                                /* Current active RAT setting (Flight, UMTS, GSM) */
} cphy_set_active_rat_req_struct;

/* 20080131: By MEME's request, define new I/F for event 6E. */
typedef struct _cphy_measurement_config_rssi_event_req_struct
{
   LOCAL_PARA_HDR

       kal_bool                      enable;                  /* Indicate if we need to monitor the 6E RSSI event. TRUE means to be activated */
       kal_uint16                   delay;                     /* Time to Trigger. 0 ~ 500 frames */
} cphy_measurement_config_rssi_event_req_struct;

/*-------- Message(Primitive) related definition  ----------------------*/

typedef struct _msg_buf_T                          /* Buffer of message container */
{
   kal_uint8         channel_id;                   /* Channel ID */
   msg_type          msg_id;                       /* Message ID */
   kal_uint16        buff_size;                    /* Buffer size */
   local_para_struct*         buffer;              /* Channel configuration message buffer */
} msg_buf_T;


typedef struct _cphy_msg_container_req_struct
{
   LOCAL_PARA_HDR
 
   kal_uint8                     at_ref;                             /* Reference channge of activation time.
                                                                        0 : Ref channel is the released channel.
                                                                            There should be ch to be released
                                                                        1 : Ref channel is the setup channel.
                                                                            There should be ch to be setup.
                                                                      */
   kal_int16                     rx_cfn;                             /* Indicate peer message receive cfn. Ex: tti = 4, receive frame number : 0,1,2,3.  rx_cfn = 3 (set by ul1)
                                                                        [Range]: -1 ~ 255.
                                                                        -1 : Means upper layer internal control
                                                                      */
#ifdef __UMTS_R6__
   kal_bool                      delay_restriction;                  /* From R6 : TS25.331 8.6.3.1 */
#endif
   meas_control_E                meas_control;                       /* Indicate whether UL1 need to not to resume meas. after apply corresponding buffer's config. */
   kal_int8                      idx_intra_freq;                     /* [Range]: 0 ~ 2. Indicate which frequency in the array uarfcn[MAX_UMTS_FREQ] is intra-frequency, -1 means invalid */   
                                                                      
   kal_uint8                     msg_num;                            /* # of included msg. 1 ~ 4 */
   msg_buf_T                     msg_buffer[4];                      /* List of msg buffer for included channel msg */

   /* [R5R6] For HS-DSCH and E-DCH */
   kal_uint8                     h_msg_num;                          /* # of included H-msg. 0~2 */
   msg_buf_T                     h_msg_buffer[2];                    /* List of msg buffer for included channel msg */
   kal_uint8                     e_msg_num;                          /* # of included E-msg. 0~2 */
   msg_buf_T                     e_msg_buffer[2];                    /* List of msg buffer for included channel msg */
#ifdef __UMTS_R7__
   kal_uint8                     cpc_msg_num;                        /* # of included CPC-msg. 0~1 */
   msg_buf_T                     cpc_msg_buffer[1];                  /* List of msg buffer for included CPC msg */
#endif  /* __UMTS_R7__ */
} cphy_msg_container_req_struct;

typedef struct _cphy_abort_req_struct
{
   LOCAL_PARA_HDR
} cphy_abort_req_struct;

 /****************************************************************/
/* __HSDPA_SUPPORT__ */
typedef struct _cphy_hsdsch_setup_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   
   dl_dpch_rla_T                 hsdsch_rla;                         /* Downlink information common for all RLs and downlink DPCH info. common for all RLs  */
                                                                     /* tgps_num in hsdsch_rla should be 0.*/
   dl_dpch_rl_T                  hsdsch_rl;                          /* Downlink information for each RL (and downlink DPCH info. for each RL (for HS-DSCH serving cell*/
   hs_scch_info_T                hs_scch_info;                       /* HS-SCCH Info (25.331 10.3.6.36a) */
   hs_meas_fb_info_T             hs_meas_fb_info;                    /* Measurement Feedback Info (25.331 10.3.6.40a) */
   hs_harq_info_T                hs_harq_info;                       /* HARQ Info (25.331 10.3.5.7a) */
   hs_ulpc_info_T                hs_ulpc_info;                       /* Uplink power control info related to HSDPA */   

   kal_bool                      mac_hs_reset;                       /* TRUE indicates the MAC-hs entity needs to be reset */
   kal_uint8                     mac_event;                          /* Indicate if UMAC need setup/modify/release event */
   kal_uint16                    h_rnti;                             /* H-RNTI assigned to UE */   
#ifdef __UMTS_R7__
   rrc_state_E                   rrc_status;                         /* Indicate the RRC current status */
   hspdsch_state_info_T          hspdsch_state_info;                 /* HSPDSCH related parameter */
   hs_scch_less_info_T           hs_scch_less_info;                  /* HS-SCCH less Info (25.331 10.3.6.36ab) */  
   kal_bool                      h_rnti_valid;                       /* Indicate if h_rnti field is valid for UL1. H-RNTI shall be always valid for CELL_DCH, CELL_FACH, IDLE_FACH, and shall be always invalid for URA_PCH. */
   kal_bool                      c_h_rnti_valid;                     /* [R7] Indicate if common H-RNTI is valid for UL1. This field shall be set to FALSE when rrc_status is equal to CELL_DCH. */
   kal_uint16                    c_h_rnti;                           /* [R7] Common H-RNTI assigned to UE. UL1 should not refer to this field if c_h_rnti_valid = KAL_FALSE. */
   kal_bool                      b_h_rnti_valid;                     /* [R7] Indicate if bcch-specific H-RNTI is valid for UL1 */
   kal_uint16                    b_h_rnti;                           /* [R7] bcch-specific H-RNTI assigned to UE. UL1 should not refer to this field if b_h_rnti_valid = KAL_FALSE. */
#ifdef __UMTS_R8__
   kal_bool                      etws_reception;                  /* SLCE will set this field to TRUE when PAGING TYPE 1 or SYS INFO CHANGE IND including "ETWS info" is received by RRC in CellPch or UraPch state. */
   kal_bool	                     cqi_report_on;                   /* This field should always be TRUE when rrc_status = CELL_DCH, and should always be FALSE when rrc_status = CELL_PCH and URA_PCH. */
   kal_bool                      ack_nack_report_on;              /* This field should always be TRUE when rrc_status = CELL_DCH, and should always be FALSE when rrc_status = CELL_PCH and URA_PCH. */
   hs_cell_fach_drx_T            hs_cell_fach_drx;                /* HS CELL_FACH DRX information. This field is only valid when rrc_status = CELL_FACH. */
   dc_hsdpa_info_T               dc_hsdpa_info;                   /* DC-HSDPA information. This field is only valid when rrc_status = CELL_DCH. */
   dl_pc_info_T                  dl_pc_common_edch;               /* dl power control info. This field in only valid in EFACH state with common E-DCH transmission */
#endif  /* __UMTS_R8__ */
#endif /* __UMTS_R7__ */ 
} cphy_hsdsch_setup_req_struct;

typedef struct _cphy_hsdsch_modify_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */

#ifdef __UMTS_R7__
   kal_uint16                    modify_field;                       /* Bit field to represent for the parameters that should be modified 
                                                                        Bit 0 : dedicated H-RNTI or common H-RNTI
                                                                        Bit 1 : hsdsch_rla
                                                                        Bit 2 : hsdsch_rl 
                                                                        Bit 3 : HS-SCCH Info
                                                                        Bit 4 : Measurement Feedback Info 
                                                                        Bit 5 : HARQ Info
                                                                        Bit 6 : Uplink power control info related to HSDPA
                                                                        Bit 7 : h_rnti_valid or hspdsch_state_info
                                                                        Bit 8 : HS-SCCH less Info
                                                                        Bit 9 : [R8] dc_hsdpa_info_T
                                                                        Bit10 : [R8] hs_cell_fach_drx_T
                                                                      */
#else  /* __UMTS_R7__ */
   kal_uint8                     modify_field;                       /* Bit field to represent for the parameters that should be modified 
                                                                        Bit 0 : H-RNTI
                                                                        Bit 1 : hsdsch_rla
                                                                        Bit 2 : hsdsch_rl 
                                                                        Bit 3 : HS-SCCH Info
                                                                        Bit 4 : Measurement Feedback Info 
                                                                        Bit 5 : HARQ Info
                                                                        Bit 6 : Uplink power control info related to HSDPA
                                                                     */
#endif  /* !__UMTS_R7__ */
   dl_dpch_rla_T                 hsdsch_rla;                         /* Downlink information common for all RLs and downlink DPCH info. common for all RLs  */
                                                                     /* tgps_num in hsdsch_rla should be 0.*/
   dl_dpch_rl_T                  hsdsch_rl;                          /* Downlink information for each RL (and downlink DPCH info. for each RL (for HS-DSCH serving cell*/
   hs_scch_info_T                hs_scch_info;                       /* HS-SCCH Info (25.331 10.3.6.36a) */
   hs_meas_fb_info_T             hs_meas_fb_info;                    /* Measurement Feedback Info (25.331 10.3.6.40a) */
   hs_harq_info_T                hs_harq_info;                       /* HARQ Info (25.331 10.3.5.7a) */
   hs_ulpc_info_T                hs_ulpc_info;                       /* Uplink power control info related to HSDPA */
   kal_bool                      mac_hs_reset;                       /* TRUE indicates the MAC-hs entity needs to be reset */
   kal_uint8                     mac_event;                          /* Indicate if UMAC need setup/modify/release event */     
   kal_uint16                    h_rnti;                             /* H-RNTI assigned to UE */   
#ifdef __UMTS_R7__
   rrc_state_E                   rrc_status;                         /* Indicate the RRC current status */
   hspdsch_state_info_T          hspdsch_state_info;                 /* HSPDSCH related parameter */
   hs_scch_less_info_T           hs_scch_less_info;                  /* HS-SCCH less Info (25.331 10.3.6.36ab) */  
   kal_bool                      h_rnti_valid;                       /* Indicate if h_rnti field is valid for UL1. H-RNTI shall be always valid for CELL_DCH, CELL_FACH, IDLE_FACH, and shall be always invalid for URA_PCH. */   
   kal_bool                      c_h_rnti_valid;                     /* [R7] Indicate if common H-RNTI is valid for UL1. This field shall be set to FALSE when rrc_status is equal to CELL_DCH. */
   kal_uint16                    c_h_rnti;                           /* [R7] Common H-RNTI assigned to UE. UL1 should not refer to this field if c_h_rnti_valid = KAL_FALSE. */
   kal_bool                      b_h_rnti_valid;                     /* [R7] Indicate if bcch-specific H-RNTI is valid for UL1 */
   kal_uint16                    b_h_rnti;                           /* [R7] bcch-specific H-RNTI assigned to UE. UL1 should not refer to this field if b_h_rnti_valid = KAL_FALSE. */
#ifdef __UMTS_R8__
   kal_bool	                     cqi_report_on;                   /* This field should always be TRUE when rrc_status = CELL_DCH, and should always be FALSE when rrc_status = CELL_PCH and URA_PCH. */
   kal_bool                      ack_nack_report_on;              /* This field should always be TRUE when rrc_status = CELL_DCH, and should always be FALSE when rrc_status = CELL_PCH and URA_PCH. */
   hs_cell_fach_drx_T            hs_cell_fach_drx;                /* HS CELL_FACH DRX information. This field is only valid when rrc_status = CELL_FACH. */
   dc_hsdpa_info_T               dc_hsdpa_info;                   /* DC-HSDPA information. This field is only valid when rrc_status = CELL_DCH. */
#endif  /* __UMTS_R8__ */
#endif /* __UMTS_R7__ */ 
} cphy_hsdsch_modify_req_struct;

typedef struct _cphy_hsdsch_release_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */

   kal_bool                      mac_hs_reset;                       /* TRUE indicates the MAC-hs entity needs to be reset */
   kal_uint8                     mac_event;                          /* Indicate if UMAC need setup/modify/release event */    
} cphy_hsdsch_release_req_struct;

#ifdef __UMTS_R7__
typedef struct _phy_mac_ehs_reset_req_struct
{
   LOCAL_PARA_HDR

   mac_ehs_reset_cause_E cause;                               /* Indicate the cause about the reason of UMAC reset */
} phy_mac_ehs_reset_req_struct;
#endif /* __UMTS_R7__ */ 

#ifdef __UMTS_R7__
typedef struct _cphy_cpc_config_req_struct
{
   LOCAL_PARA_HDR

   kal_int16      act_time;                           /* activation time. -1 ~ 255. -1 means immediate */
   hs_dtx_drx_info_T      hs_dtx_drx_info;            /* DTX/DRX information */
} cphy_cpc_config_req_struct;

typedef struct _cphy_d_hrnti_detected_ind_struct
{
   LOCAL_PARA_HDR
} cphy_d_hrnti_detected_ind_struct;

#ifdef __UMTS_R8__
typedef struct _cphy_start_monitor_order_req_struct
{
   LOCAL_PARA_HDR

   kal_uint16                    h_rnti;              /* h_rnti to decode target cell HS-SCCH */
   kal_uint16                    psc;                 /* psc to receive target cell HS-SCCH */
   hs_scch_info_T                hs_scch_info;        /* ovsf_code_num field should always be 1 */
   kal_int16                     rpt_act_time;        /* [Range]: (-1~255). (0-255) for CFN type, */
}cphy_start_monitor_order_req_struct;

typedef struct _cphy_start_monitor_order_cnf_struct
{
   LOCAL_PARA_HDR
}cphy_start_monitor_order_cnf_struct;

typedef struct _cphy_stop_monitor_order_req_struct
{
   LOCAL_PARA_HDR
}cphy_stop_monitor_order_req_struct;

typedef struct _cphy_stop_monitor_order_cnf_struct
{
   LOCAL_PARA_HDR
}cphy_stop_monitor_order_cnf_struct;

typedef struct _cphy_monitor_order_received_ind_struct
{
   LOCAL_PARA_HDR

   kal_uint16                    psc;                 /* Range: {0..511} */
   kal_int16                     act_time;            /* Range {-1..255}: -1 is T324, 0..255 is AT */
   kal_uint16                    rx_cfn;
}cphy_monitor_order_received_ind_struct;
#endif /* __UMTS_R8__ */

#endif /* __UMTS_R7__ */ 

typedef struct _cphy_rlc_info_req_struct
{
   LOCAL_PARA_HDR

   kal_uint16                    distance[MAX_HS_RB_NUM];                           /* The distance between VR_H and VR_R (VR_H - VR_R) */
   kal_uint32                    rx_window_size[MAX_HS_RB_NUM];
   kal_uint32                    RTT[MAX_HS_RB_NUM];                                /* Round trip time */
} cphy_rlc_info_req_struct;

/****************************************************************/

/****************************************************************/
/* __HSUPA_SUPPORT__ */
typedef struct _cphy_edch_setup_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                     /* activation time. -1 ~ 255. -1 means immediate */
   
   kal_bool                      pri_e_rnti_valid;             /* Indicate if pri_e_rnti field is valid */
   kal_uint16                    pri_e_rnti;                   /* Primary E-RNTI assigned to UE */
   kal_bool                      sec_e_rnti_valid;             /* Indicate if sec_e_rnti field is valid */
   kal_uint16                    sec_e_rnti;                   /* Secondary E-RNTI assigned to UE */   
   
   edch_tti_E                    edch_tti;                     /* E-DCH TTI 2ms or 10ms */

   kal_uint16                    edch_serv_psc;                /* serving E-DCH cell */
   
   eagch_info_T                  eagch_info;                   /* E-AGCH info*/
   
   kal_uint8                     ehich_info_num;               /* Number of E-HICH info: 1~MAX_EDCH_RL */
   ehich_info_T                  ehich_info[MAX_EDCH_RL];      /* E-HICH info */
   kal_uint8                     ergch_info_num;               /* Number of E-RGCH info: 0~MAX_EDCH_RL */
   ergch_info_T                  ergch_info[MAX_EDCH_RL];      /* E-RGCH info */

   edpdch_info_T                 edpdch_info;                  /* E-DPDCH info */
   edpcch_info_T                 edpcch_info;                  /* E-DPCCH info */
   
   edch_harq_info_T           edch_harq_info;                     /* HARQ info for E-DCH */
   
   kal_uint8                     mac_event;                    /* Indicate if UMAC need setup/modify/release event */
#ifdef __UMTS_R7__
   kal_bool      ul_16QAM_on;            /* Uplink 16QAM enable/disable */
#endif  /* __UMTS_R7__ */
#ifdef __UMTS_R8__
   edch_transmission_type_E      transmission_type;            /* Specify that E-DCH is allocated in dedicated state or common state */
   common_edch_info_T            common_edch_info;             /* [R8] This field is only valid when transmission_type is equal to EDCH_IN_COMMON_STATE */
#endif  /* __UMTS_R8__ */
} cphy_edch_setup_req_struct;

typedef struct _cphy_edch_modify_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */

   kal_uint16                    modify_field;                       /* Bit field to represent for the parameters that should be modified 
                                                                        Bit 0 : E-RNTI
                                                                        Bit 1 : E-DCH TTI
                                                                        Bit 2 : E-AGCH info
                                                                        Bit 3 : E-HICH info
                                                                        Bit 4 : E-RGCH info
                                                                        Bit 5 : E-DPDCH info
                                                                        Bit 6 : E-DPCCH info
                                                                        Bit 7 : E-DCH serving cell
                                                                        Bit 8 : E-DCH harq info
                                                                        Bit 9 : ul_16QAM_on
                                                                        Bit 10: [R8] common_edch_info_T
                                                                      */

   kal_bool                      pri_e_rnti_valid;                   /* Indicate if pri_e_rnti field is valid */   
   kal_uint16                    pri_e_rnti;                         /* Primary E-RNTI assigned to UE */         
   kal_bool                      sec_e_rnti_valid;                   /* Indicate if sec_e_rnti field is valid */ 
   kal_uint16                    sec_e_rnti;                         /* Secondary E-RNTI assigned to UE */       
   edch_tti_E                    edch_tti;                           /* E-DCH TTI 2ms or 10ms */

   kal_uint16                    edch_serv_psc;                      /* serving E-DCH cell */
   
   eagch_info_T                  eagch_info;                         /* E-AGCH info*/

   kal_uint8                     ehich_info_num;               /* Number of E-HICH info: 1~MAX_EDCH_RL */
   ehich_info_T                  ehich_info[MAX_EDCH_RL];      /* E-HICH info */
   kal_uint8                     ergch_info_num;               /* Number of E-RGCH info: 0~MAX_EDCH_RL */
   ergch_info_T                  ergch_info[MAX_EDCH_RL];      /* E-RGCH info */

   edpdch_info_T                 edpdch_info;                        /* E-DPDCH info */
   edpcch_info_T                 edpcch_info;                        /* E-DPCCH info */  

   edch_harq_info_T              edch_harq_info;                     /* HARQ info for E-DCH */

   kal_uint8                     mac_event;                          /* Indicate if UMAC need setup/modify/release event */
#ifdef __UMTS_R7__
   kal_bool      ul_16QAM_on;            /* Uplink 16QAM enable/disable */
#endif	  /* __UMTS_R7__ */
#ifdef __UMTS_R8__
   edch_transmission_type_E      transmission_type;            /* Specify that E-DCH is allocated in dedicated state or common state */
   common_edch_info_T            common_edch_info;             /* [R8] This field is only valid when transmission_type is equal to EDCH_IN_COMMON_STATE */
#endif  /* __UMTS_R8__ */
} cphy_edch_modify_req_struct;

typedef struct _cphy_edch_release_req_struct
{
   LOCAL_PARA_HDR

   kal_int16                     act_time;                           /* activation time. -1 ~ 255. -1 means immediate */ 
   kal_uint8                     mac_event;                          /* Indicate if UMAC need setup/modify/release event */   
} cphy_edch_release_req_struct;
/****************************************************************/

/****************************************************************/
/* GEMINI 2.0 */   
#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )    
typedef struct _cphy_channel_priority_adjustment_req_struct
{
   LOCAL_PARA_HDR
      
   kal_bool                      channel_priority_high;     /* TRUE: UL1 channel priority is set to high. The priority of the timer related DCH/FACH will has the highest priority.
                                                               FALSE: UL1 channel priority is set to normal. The priority of the timer related DCH/FACH will has the lowest priority. */
   rrce_gemini_priority_adjust_E   adjust_channel;
} cphy_channel_priority_adjustment_req_struct;

#ifdef   __GEMINI_MONITOR_PAGE_DURING_TRANSFER__             
typedef struct _urr_ul1_switch_gemini_mode_req_struct
{
   LOCAL_PARA_HDR
      
   kal_bool                      is_virtual_mode;           /* TRUE: UL1 will switch from Normal mode to Virtual mode.
                                                               FALSE: UL1 will switch from Virtual mode to Normal mode. */
} urr_ul1_switch_gemini_mode_req_struct;


typedef struct _cphy_peer_gemini_mode_notify_req_struct
{
   LOCAL_PARA_HDR
      
   kal_bool                      is_peer_virtual_mode;      /* TRUE: UL1 is informed that peer SIM enters virtual mode.
                                                               FALSE: UL1 is informed that peer SIM leaves virtual mode. */
} cphy_peer_gemini_mode_notify_req_struct;

  

typedef struct _rsvas_ul1_virtual_resume_req_struct
{
   LOCAL_PARA_HDR
} rsvas_ul1_virtual_resume_req_struct;

#endif   /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__*/
#endif   /* __GEMINI_GSM__ && __UMTS_RAT__ */ 
/****************************************************************/


/*****************************************************************************
 confirm & indication for cphy
*****************************************************************************/
typedef struct _cphy_bch_setup_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_bch_setup_cnf_struct;

typedef struct _cphy_bch_setup_ind_struct
{
   LOCAL_PARA_HDR
 
   kal_bool                      success;                            /* Indicate if BCH setup success.
                                                                        For current L1, it always return true.
                                                                      */
} cphy_bch_setup_ind_struct;

typedef struct _cphy_bch_modify_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_bch_modify_cnf_struct;

typedef struct _cphy_bch_modify_ind_struct
{
   LOCAL_PARA_HDR
} cphy_bch_modify_ind_struct;

typedef struct _cphy_bch_release_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_bch_release_cnf_struct;

typedef struct _cphy_bch_release_ind_struct
{
   LOCAL_PARA_HDR
} cphy_bch_release_ind_struct;

typedef struct _cphy_sfn_ind_struct
{
   LOCAL_PARA_HDR
 
   kal_bool                      success;                            /* Indicate if SFN ready success */
   kal_int32                     tm;                                 /* LST to Cell boundary. 0 ~ 38044*8-1 */ 
   kal_int16                     off;                                /* Frame # offset to LST. 0 ~ 4095 */

   kal_uint16                    dl_freq;                               /* UARFCN of the specific cell */
   kal_uint16                    psc;                                /* Primary scrambling code of the specific cell */

   kal_bool                      dch_meas_valid;                     /* TRUE: DCH related parameters are valid */
   kal_uint8                     CFN;                                /* CFN of serving cell*/
   kal_uint16                    SFN;                                /* SFN of neighbor cell*/
   kal_uint8                     meas_off;                           /* SFN_CFN difference in frames*/
   kal_uint16                    meas_tm;                            /* SFN_CFN difference in chips*/
   
   kal_bool                      common_meas_valid;                 /* TRUE: common channel related parameter is valid */
   kal_uint32                    meas_sfn_diff;                     /* SFN_SFN difference in chips*/      

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )            
      uas_gemini_conflict_cause_enum   conflict_cause;
      kal_uint16 peer_priority_index;
#endif   
   
} cphy_sfn_ind_struct;


/* MEME use this primitive as a trigger point to query UL1 tgps status */
typedef struct _cphy_tgps_delete_ind_struct
{
   LOCAL_PARA_HDR
	   
   kal_uint8                     tgpsi_nbr;                    /* Number of TGPSI deleted */
   kal_uint8                		tgpsi[MAX_TGPS];                    /* TGPSI deleted*/
} cphy_tgps_delete_ind_struct;

typedef struct _cphy_tgps_overlap_ind_struct
{
   LOCAL_PARA_HDR

   kal_uint8                     tgpsi;                              /* TGPSI of TGPS beging removed. 1 ~ 6 */
} cphy_tgps_overlap_ind_struct;

typedef struct _cphy_gap_complete_ind_struct
{
   LOCAL_PARA_HDR

   kal_uint8                     tgpsi;                              /* TGPSI of TGPS beging completed. 1 ~ 6 */
} cphy_gap_complete_ind_struct;

typedef struct _cphy_t312_expiry_ind_struct
{
   LOCAL_PARA_HDR
	
    kal_uint8                           tid;                         /* Transaction id */		
 
} cphy_t312_expiry_ind_struct;

typedef struct _cphy_dl_init_sync_ind_struct
{
   LOCAL_PARA_HDR
      
    kal_uint8                           tid;                         /* Transaction id */	
     kal_int32                                                  dpch_tm; /* For CFN-SFN TD */
     kal_int16                                                  dpch_off; /* For CFN-SFN TD */
} cphy_dl_init_sync_ind_struct;
 
typedef struct _cphy_rl_failure_ind_struct
{
   LOCAL_PARA_HDR
} cphy_rl_failure_ind_struct;

/*Raymond 20070717 remove DELETE_TGPS CNF/IND interface*/
typedef struct _cphy_frequency_scan_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_frequency_scan_cnf_struct;

typedef struct _cphy_frequency_scan_ind_struct
{
   LOCAL_PARA_HDR
} cphy_frequency_scan_ind_struct;

typedef struct _cphy_frequency_scan_continue_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_frequency_scan_continue_cnf_struct;

typedef struct _cphy_frequency_scan_suspend_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_frequency_scan_suspend_cnf_struct;

typedef struct _cphy_frequency_scan_suspend_ind_struct
{
   LOCAL_PARA_HDR
} cphy_frequency_scan_suspend_ind_struct;

/* This interface should not be used in MT6268 */
typedef struct _cphy_frequency_scan_stop_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_frequency_scan_stop_cnf_struct;

/* This interface should not be used in MT6268 */
typedef struct _cphy_frequency_scan_stop_ind_struct
{
   LOCAL_PARA_HDR
} cphy_frequency_scan_stop_ind_struct;

/* MSG_ID_CPHY_RSSI_SNIFFER_START_CNF (Add by Janet) */
typedef struct _cphy_rssi_sniffer_start_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_rssi_sniffer_start_cnf_struct;

/* MSG_ID_CPHY_RSSI_SNIFFER_STOP_CNF (Add by Janet) */
typedef struct _cphy_rssi_sniffer_stop_cnf_struct
{
   LOCAL_PARA_HDR

} cphy_rssi_sniffer_stop_cnf_struct;

/* MSG_ID_CPHY_RSSI_SNIFFER_STOP_IND (Add by Janet) */
typedef struct _cphy_rssi_sniffer_stop_ind_struct
{
   LOCAL_PARA_HDR
} cphy_rssi_sniffer_stop_ind_struct;

/* MSG_ID_CPHY_RSSI_SNIFFER_SIGNAL_APPEAR_IND (Add by Janet) */
typedef struct _cphy_rssi_sniffer_signal_appear_ind_struct
{
   LOCAL_PARA_HDR

    kal_uint8                       num_freq_list;                                   /* # of freq for scan list of RSSI sniffer */
    kal_uint16                      uarfcn_list[MAX_RSSI_SNIFFER_SCAN_LIST];         /* List of UARFCN */

} cphy_rssi_sniffer_signal_appear_ind_struct;

typedef struct _cphy_measurement_config_tgps_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_measurement_config_tgps_cnf_struct;

typedef struct _cphy_measurement_config_tgps_ind_struct
{
   LOCAL_PARA_HDR
} cphy_measurement_config_tgps_ind_struct;

typedef struct _cphy_measurement_config_fmo_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_measurement_config_fmo_cnf_struct;

typedef struct _cphy_measurement_config_cell_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_measurement_config_cell_cnf_struct;

typedef struct _cphy_measurement_cell_ind_struct
{
   LOCAL_PARA_HDR

   kal_uint8                     tid;                                /* Transaction ID to sync between req and ind */
   measured_type_E              measured_type;                       /*IntraFrequency or InterFrequency*/
   kal_uint16                    uarfcn;                             /* DL UARFCN */
   kal_int16                     rssi;                               /* RSSI. Range: -400 ~ -100 means (-100 ~ -25)dBm 0.25 dB step */
   kal_bool                      fs_halt;                            /* Indicate if freq scan halt. only for freq scan report */
   kal_uint8                     num_cell;                           /* # of cell reported in this msg */
   measured_cell_T               measured_cell[MAX_NUM_MEAS_CELL];   /* list of measured cells */
   kal_bool                      rl_status;                          /* Indicate tx available */
#ifdef __UMTS_R8__
   kal_bool                      isLongPeriodIn3GStandby;            /* [Rel8][ABPCR] For RR, Indicate if it is prio search peiorid*/
#endif
   supplementary_report_info_T    supplementary_report_info; /* to notify L3 further information */
} cphy_measurement_cell_ind_struct;

typedef struct _cphy_measurement_cell_sfn_ind_struct
{
   LOCAL_PARA_HDR
 
   kal_uint16                    dl_freq;                               /* UARFCN of the specific cell */
   kal_uint16                    psc;                                /* Primary scrambling code of the specific cell */ 
   kal_int32                      tm;                                 /* LST to Cell boundary. 0 ~ 38044*8-1 */ 
   kal_int16                      off;                                /* Frame # offset to LST. 0 ~ 4095 */
   kal_uint16                    SFN;                                /* SFN of neighbor cell*/

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )            
   uas_gemini_conflict_cause_enum	conflict_cause;
#endif  
} cphy_measurement_cell_sfn_ind_struct;

typedef struct _cphy_measurement_rl_ind_struct
{
   LOCAL_PARA_HDR

   kal_uint8                     rl_num;                             /* # of RL */
   rl_meas_result_T              rl_meas_result[MAX_RL];             /* RL measurement result for each RL */
   kal_int16                           tx_power;                           /* Averaged TX power meas result */
} cphy_measurement_rl_ind_struct;

typedef struct _cphy_measurement_config_tx_power_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_measurement_config_tx_power_cnf_struct;

typedef struct _cphy_measurement_tx_power_periodic_ind_struct
{
   LOCAL_PARA_HDR

   kal_uint8                     periodic_measurement_id;
   kal_int16                     tx_power;                           /* Averaged TX power meas result */
   kal_bool                      last_report;                        /* Indicate if this is the last report for period rpt */
} cphy_measurement_tx_power_periodic_ind_struct;

typedef struct _cphy_measurement_tx_power_event_ind_struct
{
   LOCAL_PARA_HDR
      
	kal_int16                     tx_power;                           /* Averaged TX power meas result */   
   kal_uint8                     event_id;                           /* Event ID being triggered */ 
} cphy_measurement_tx_power_event_ind_struct;

typedef struct _cphy_tx_power_result_ind_struct
{
   LOCAL_PARA_HDR
 
   kal_bool                      valid;                              /* Indicate if below tx_power is vaide */
   kal_int16                     tx_power;                           /* Averaged TX power meas result */
} cphy_tx_power_result_ind_struct;

typedef struct _cphy_specific_cell_search_ind_struct 
{ 
   LOCAL_PARA_HDR

   kal_bool                      success;                            /* Indicate if search success */
   measured_cell_T               measured_cell;                      /* The found(1) cell */
} cphy_specific_cell_search_ind_struct;

typedef struct _cphy_specific_cell_search_stop_ind_struct
{
   LOCAL_PARA_HDR
} cphy_specific_cell_search_stop_ind_struct;

typedef struct _cphy_reset_cnf_struct
{
   LOCAL_PARA_HDR
 
   kal_bool                      success;                            /* Indicate whether the L1 initialization sucess or fail */
} cphy_reset_cnf_struct;


typedef struct _cphy_rf_on_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_rf_on_cnf_struct;

typedef struct _cphy_rf_off_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_rf_off_cnf_struct;

typedef struct _cphy_set_active_rat_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_set_active_rat_cnf_struct;


typedef struct _cphy_msg_container_cnf_struct
{
   LOCAL_PARA_HDR
} cphy_msg_container_cnf_struct;

typedef struct _cphy_msg_container_ind_struct
{
   LOCAL_PARA_HDR
 
   kal_bool                      success_flag;                       /* Indicate if configure success
                                                                        For current L1, it always returns true.
                                                                      */
   kal_bool                      pending_tgps;                       /* Indicate if there is any pending TGPS.
                                                                        Only sent when there is any channel to be released.
                                                                      */
   msg_container_error_E         error_cause;                        /* Error cause of message container.
                                                                     */                                                                     
} cphy_msg_container_ind_struct;

typedef struct _cphy_abort_cnf_struct
{
   LOCAL_PARA_HDR

   kal_bool                      success;                            /* Indicate if abort request success
                                                                        TRUE : L1 will back to the old channel configure.
                                                                        FALSE : L1 will go forward to the new channel configure.
                                                                      */
} cphy_abort_cnf_struct;

typedef struct _cphy_tx_status_ind_struct
{
   LOCAL_PARA_HDR

   kal_bool                      is_tx_allow;             /* the current TX status
                                                                        TRUE : Currentlly, TX is available in UL1.
                                                                        FALSE : Currentlly, TX is not available in UL1.
                                                                      */
} cphy_tx_status_ind_struct;

/* 20080131: By MEME's request, define new I/F for event 6E. */
typedef struct _cphy_rssi_exceed_range_ind_struct
{
   LOCAL_PARA_HDR
	
	kal_int16                     tx_power;                           /* Averaged TX power meas result */   
} cphy_rssi_exceed_range_ind_struct;

/*****************************************************************************
 request for phy 
*****************************************************************************/
typedef struct _phy_rach_data_req_struct
{
   LOCAL_PARA_HDR
 
   kal_uint16                    tfci;                               /* TFCI. 0 ~ 1023 */
   ulTrchData                    TrchInfo;                           /* UL TrCH information */
   kal_uint16                    size_data;                          /*  This parameter represents the number of bytes of the buffer. This number will be equal to the size of allocated buffer plus 4 bytes. */
   kal_uint8                     *data[MAX_UL_TB];                   /* data for each TB. PS shoul allocate the buffer */
   tPhyPostTxElement             *pPostTxElement;                    /* returned pointer in PHY_POST_TX_IND */
} phy_rach_data_req_struct;

typedef struct _phy_access_req_struct
{
   LOCAL_PARA_HDR
 
   kal_bool                      retry;                              /* Indicate if this is a retry request
                                                                        TRUE : RACH TX failed in last acces procedure.
                                                                               L1 will use the same RACH data an ASC in previous access procedure.
                                                                      */
   kal_uint8                     asc;                                /* ASC. 0 ~ 7 */
   kal_int16                     ul_interference;                    /* UL interference in SIB7. -110 ~ 70dBm */
#ifdef __UMTS_R8__
   kal_bool                      is_CEDCH_CCCH;                      /* [R8] True: Common E-DCH transmission is for CCCH. FALSE for DTCH/DCCH */
#endif  /* __UMTS_R8__ */
} phy_access_req_struct;


/* confirm & indication for phy */
typedef struct _phy_pch_setup_ind_struct
{
   LOCAL_PARA_HDR
} phy_pch_setup_ind_struct;

typedef struct _phy_pch_modify_ind_struct
{
   LOCAL_PARA_HDR
} phy_pch_modify_ind_struct;

typedef struct _phy_pch_release_ind_struct
{
   LOCAL_PARA_HDR
} phy_pch_release_ind_struct;

typedef struct _phy_fach_setup_ind_struct
{
   LOCAL_PARA_HDR
} phy_fach_setup_ind_struct;

typedef struct _phy_fach_modify_ind_struct
{
   LOCAL_PARA_HDR
} phy_fach_modify_ind_struct;

typedef struct _phy_fach_release_ind_struct
{
   LOCAL_PARA_HDR
} phy_fach_release_ind_struct;

typedef struct _phy_rach_setup_ind_struct
{
   LOCAL_PARA_HDR
} phy_rach_setup_ind_struct;

typedef struct _phy_rach_release_ind_struct
{
   LOCAL_PARA_HDR
} phy_rach_release_ind_struct;

typedef struct _phy_dch_setup_ind_struct
{
   LOCAL_PARA_HDR
   
   kal_uint8      direction;                       /* Indicate UL or DL is being setup 
                                                   0 : DL DCH
                                                   1 : UL DCH
                                                   2 : FDPCH
                                                    */
   kal_uint16     sfn;		                       /* The LST value of the frame when DL DCH is setup.*/
   kal_bool       syncA_procedure_needed ;         /* TRUE: Indicate syncA procedure is performed.*/
} phy_dch_setup_ind_struct;

typedef struct _phy_dch_modify_ind_struct
{
   LOCAL_PARA_HDR

    kal_uint8                     direction;                          /* Indicate UL or DL is being setup 
                                                                        0 : DL_DCH
                                                                        1 : UL_DCH
                                                                        2 : FDPCH
                                                                      */
} phy_dch_modify_ind_struct;

typedef struct _phy_dch_release_ind_struct
{
   LOCAL_PARA_HDR
   
    kal_uint8                     direction;                          /* Indicate UL or DL is being setup 
                                                                        0 : DL DCH
                                                                        1 : UL DCH
                                                                        2 : FDPCH
                                                                      */
	kal_uint16		sfn;		/* The LST value of the frame when DL DCH is setup.*/
} phy_dch_release_ind_struct;

typedef struct _phy_config_abort_ind_struct
{
   LOCAL_PARA_HDR
 
   kal_bool                      success;                            /* Indicate if abort request success
                                                                        TRUE : L1 will back to old channel configure
                                                                        FALSE : L1 will go forward to new channel configure
                                                                      */
} phy_config_abort_ind_struct;

typedef struct _phy_dl_init_sync_ind_struct
{
   LOCAL_PARA_HDR
} phy_dl_init_sync_ind_struct;

typedef struct _phy_bch_data_ind_struct
{
   LOCAL_PARA_HDR
	
   kal_uint8            *data;         /* PS2 Excel request to add a "data" field in 
                                                                   phy_bch_data_ind_struct. This field is only for 
                                                                   protocol and not used by UL1 */
   kal_bool             no_path;       /* True: L1 could not find the cell*/
   kal_int32            tm;            /* LST of the cell boundary. 0 ~ 38400*8-1 */
   kal_int16            off;           /* Frame # offset to LST. -1 ~ 4095. -1 means unknown */
   kal_uint16           dl_freq;       /* DL UARFCN */
   kal_uint16           psc;           /* Primary scrambling code */
   kal_uint8            crc_status;    /* CRC result.
                                                                   0 : CRC error
                                                                   1 : CRC ok
                                                                   2 : no CRC */
   kal_uint16           num_data;      /* Length of the valid byte in data. 0 ~ MAX_DL_DATA */ 
                                       /* Data is contained in peer buffer */
   kal_bool             measurement_valid;
   kal_int16            rssi;
   kal_int16            rscp;
   kal_int16            ec_no;   

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )            
   uas_gemini_conflict_cause_enum   conflict_cause;
   kal_uint16                       peer_priority_index;
#endif   
} phy_bch_data_ind_struct;

typedef struct _phy_data_ind_struct
{
   LOCAL_PARA_HDR
 
   cctrch_type_E                 dl_cctrch;                          /* PCH, FACH or DCH CCTrCH */
   kal_uint8                     rx_fn;                              /* FN of the last frame in the TTI that was received */
   kal_uint16                    rx_sfn;
   kal_uint16                    dl_freq;                            /* DL UARFCN */
   kal_uint16                    psc;                                /* Primary scrambling code */
   kal_uint8                     num_trch;                           /* # of trch */
   dlTrchData                    TrchInfo[MAX_TRCH_NUM];             /* DL TrCH Info */
   kal_uint32                    crc;                                /* CRC result for each TB 
                                                                        1 : CRC ok.
                                                                        0 : CRC error.
                                                                      */
   //kal_uint32                    crc_bits[MAX_DL_TB];                /* CRC bits of each TB. (Used for Loop back mode) */
   kal_uint16                    num_data;                           /* Length of the valid byte in data. 0 ~ MAX_DL_DATA */ 
   kal_uint8                     *data;                              /* TB data buffer. This buffer is allocated by L1 from ADM , and freed by PS  */
   
   kal_uint32                    raw_crc;				                  /* Unmodified CRC for speech decoder */
   kal_uint32                    s_value[MAX_TRCH_NUM];		         /* Viterbi decoder output S value for speech decoder */

   /* UL1A provides debugging info. for VM in DCH dldata*/
   kal_int16                     tpc_SIR_lta;                        // For recording into speech VM
   kal_int16                     dpdch_SIR_lta;                      // For recording into speech VM
   kal_int16                     TFCI_max_corr;                      // For recording into speech VM                                              

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )            
   uas_gemini_conflict_cause_enum   conflict_cause;                  /* This field is only used for Gemini. It indicates the channel conflict cause with peer channel. 
                                                                        It is only meaningful for PCH and CTCH. */

#ifdef   __GEMINI_MONITOR_PAGE_DURING_TRANSFER__   
   kal_uint8                     rx_suspend;                         /* This field is only used for Gemini 2.0.It is a bitmap to indicate if some TrCH is conflicted with SIM2 gap. 
                                                                        The bit is set to ¡§1¡¨ only when the TrCH TTI ends in this frame and SIM2 gap exists in this TTI. 
                                                                        LSB bit is mapped to trchInfo[0]. */
                                      
#endif   /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
#endif   /* __GEMINI_GSM__ && __UMTS_RAT__ */

#ifdef  __SMART_PAGING_3G_FDD__
   kal_int8                      pi_repeat_cycle;/* -1:invalid, -2:retransmission with CRC pass, 1~20:valid pi_repeat_cyle */
#endif 
} phy_data_ind_struct;

typedef struct _phy_access_ind_struct
{
   LOCAL_PARA_HDR

   access_status_E               access_status;                      /* The result of RACH access */
} phy_access_ind_struct;

typedef struct _phy_post_tx_ind_struct
{
   LOCAL_PARA_HDR

   tPhyPostTxType       PostTxType;                         /* Indicate RACH/DCH type data buffer */
   void                 *pPostTxElement;                    /* return data buffer back to MAC */   

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )
#ifdef   __GEMINI_MONITOR_PAGE_DURING_TRANSFER__   
   kal_bool             is_tx_suspend;                      /* This flag is only used for ULDCH when Gemini2.0. For RACH, this flag is always false. 
                                                               It indicates if there is SIM2 gap in the minTTI period of the released ul data. */
   kal_uint8            cfn;                                /* [Range] 0~255. This value is only used for ULDCH when Gemini2.0. 
                                                               It indicates the cfn value that UL1 gets the ul data from UMAC. */
#endif   /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
#endif   /* __GEMINI_GSM__ && __UMTS_RAT__ */

} phy_post_tx_ind_struct;

/* __HSDPA_SUPPORT__ */
typedef struct _phy_hsdsch_data_ind_struct
{
   LOCAL_PARA_HDR
     
   kal_uint8            cfn;              /* [Range]: 0-255 */
   kal_uint8            subframe;         /* Only be used when __HSDPA_2MS_DATA_IND__ is defined */
   kal_uint8            data_buffer_num;  /* indicate how many data buffers in the hsdsch_data[] should be processed or recycled by MAC (if dc_enabled == true, this number is also for hsdsch_data2[]) */
   kal_uint8            mac_event;        /* bit 0: MAC-hs setup,   */ 
                                          /* bit 1: MAC-hs release, */
                                          /* bit 2: MAC-hs modify   */
   
   kal_bool             mac_hs_reset;     /* When L1 does MAC-hs reset , the flag is set to tell MAC */
   hsdsch_data_T        hsdsch_data[MAX_HS_PDU_NUM_IN_FRAME];
#ifdef __UMTS_R8__  
   //kal_bool             dc_enabled; /* True means hsdsch_data2[MAX_HS_PDU_NUM_IN_FRAME] contains data */
   hs_dsch_dc_data_source_E dc_data_source; /* data from primary or secondary cell*/
   hsdsch_data_T        hsdsch_data2[MAX_HS_PDU_NUM_IN_FRAME];   
#endif   
} phy_hsdsch_data_ind_struct;
   


#ifdef __UMTS_R8__
typedef struct _phy_cedch_setup_ind_struct
{
   LOCAL_PARA_HDR
} phy_cedch_setup_ind_struct;

typedef struct _phy_cedch_modify_ind_struct
{
   LOCAL_PARA_HDR
} phy_cedch_modify_ind_struct;

typedef struct _phy_cedch_release_ind_struct
{
   LOCAL_PARA_HDR
} phy_cedch_release_ind_struct;

typedef struct _phy_cedch_termination_req_struct
{
   LOCAL_PARA_HDR
} phy_cedch_termination_req_struct;

typedef struct _phy_cedch_termination_ind_struct
{
   LOCAL_PARA_HDR

   kal_bool             stopped_by_ul1;          /* CEDCH is terminated due to radio link failure */
} phy_cedch_termination_ind_struct;
#endif  /* __UMTS_R8__ */

typedef struct
{
	kal_uint8 RSSI;
	kal_uint8 RSCP;
	kal_uint8 ECIO;
	kal_uint8 HHO_SHO;

	/* Used by UMAC */ 
	    /* Modified CRC = CRC |(S value decision) 
	        S value decision=1 => S value < S Threshold. this frame is not reliable
	        S value decision =0 => S value > S Threshold. This frame is reliable

	        Modified CRC =0, speech good, CRC=0, S value decision =0 
	        Modified CRC=1, CRC =1 or S value decision=1

	        crc_result value meaning : 
	        0 : Modified CRC =  0
	        1 : Modified CRC = 1, CRC = 0
	        2 : Modified CRC = 1, CRC = 1
	        3 : Indicate empty data and without CRC
	        */
	kal_uint8 crc_result[3]; 
	kal_uint32 s_value[3];

       kal_int16      tpc_SIR_lta;            // For recording into speech VM
       kal_int16      dpdch_SIR_lta;          // For recording into speech VM
       kal_int16      TFCI_max_corr;          // For recording into speech VM                                              
}L1_info_struct;

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )   

typedef struct _rsvas_ul1_suspend_req_struct
{
   LOCAL_PARA_HDR
} rsvas_ul1_suspend_req_struct;

typedef struct _rsvas_ul1_suspend_cnf_struct
{
   LOCAL_PARA_HDR
} rsvas_ul1_suspend_cnf_struct;

typedef struct _rsvas_ul1_resume_req_struct
{
   LOCAL_PARA_HDR
} rsvas_ul1_resume_req_struct;
#endif

#if defined(__L1_GPS_AUTO_TIMING_SYNC_SUPPORT__) || defined(__L1_GPS_REF_TIME_SUPPORT__)
/* __GPS_FRAME_SYNC_SUPPORT__ */
/* CSCE uses this primitive to inform UL1 that OOS occurs when AGPS feature turns on. */
typedef struct _cphy_out_of_service_req_struct
{
   LOCAL_PARA_HDR
} cphy_out_of_service_req_struct;
#endif

typedef struct _user_wakeup_3g_lock_struct
{
   LOCAL_PARA_HDR
      
   kal_uint8                     user_sm_handle;
} user_wakeup_3g_lock_struct;

void ul1_info (L1_info_struct* p_L1_Info);

/*------------------- Function prototype -----------------------------*/
/* L1 provides this function to other entities to get current CFN & SFN */
   /* CFN : -1 ~ 255. 0 ~ 255 if UE in DCH/FACH mode otherwise -1
      SFN : -1 ~ 4095. 0 ~ 4095 for the LST frame number. -1 for an invalid value.
    */
void UL1_GetCurrentTime(kal_int16 *cfn, kal_int16 *sfn);     


/*****************************************************************************
* Functions exported to RRC
*****************************************************************************/
/*****************************************************************************
* Function:    UL1_CurrAndPendingConfigTGPS
*
* Parameters:  kal_uint8 tgpsi_bitmap : bitmap of tgpsi, bit0 is for tgpsi=1, ... bit5 is for tgpsi=6
*                                                        if the value is 0, means that UL1 dont' care tgpsi
*                     kal_uint8 tgmp_bitmap : bitmap of tgmp, 
*                                                         bit0 is for FDD_MEASURE, bit1 is for GSM_RSSI, 
*                                                         bit2 is for GSM_BSIC_INIT, bit3 is for GSM_BSIC_CNF
*                                                        if the value is 0, means that UL1 don't care tgmp
*			
*                     kal_uint8 *c_tgpsi_valid_bitmap : bitmap of the queried result for current tgps config, 
*                                                             bit0 is for tgpsi=1, ... bit5 is for tgpsi=6
*                                                             if the bit is set, means there is current TGPS config for that TGPSI
*                     kal_uint8 *p_tgpsi_valid_bitmap : bitmap of the queried result for pending tgps config, 
*                                                             bit0 is for tgpsi=1, ... bit5 is for tgpsi=6
*                                                             if the bit is set, means there is pending TGPS config for that TGPSI
*
*                     kal_uint8 *c_tgps_config_num : the number of the tgps in current configuration, 
*                                                                   range: 0 ~ MAX_TGPS
*                     tgps_config_T *c_tgps_config: current tgps configuration
*
*                     kal_uint8 *p_tgps_config_num : the number of the pending configurations, 
*                                                                   range: 0 ~ MAX_TGPS_PENDING_CONFIG
*                     p_tgps_config_T *p_tgps_config : pending tgps configurations
*
* Returns:     void
*
* Description:  The function is for RRCE to query current and pending TGPS by TGPSI and TGMP
*                    The resultant current/pending TGPS is "OR" operation of tgpsi_bitmap and tgmp_bitmap
*****************************************************************************/
void UL1_CurrAndPendingConfigTGPS( kal_uint8 tgpsi_bitmap, kal_uint8 tgmp_bitmap, 
                                          kal_uint8* c_tgpsi_valid_bitmap, kal_uint8* p_tgpsi_valid_bitmap,
                                          kal_uint8 *c_tgps_config_num, tgps_config_T *c_tgps_config, 
                                          kal_uint8 *p_tgps_config_num, p_tgps_config_T *p_tgps_config );


/*****************************************************************************
* Function:    UL1_PendingConfigTGPS_byTGPSI
*
* Parameters:  kal_uint8 tgpsi                 ; tgpsi which RRCE wants to query
*              kal_bool *p_tgps_config_valid         ; existence of pending tgps configurations of specified tgpsi
*
* Returns:     void
*
* Description: 
*  The function is for RRCE to query if there is any pending tgps configurations of the specified TGPSI
*****************************************************************************/
void UL1_PendingConfigTGPS_byTGPSI( kal_uint8 tgpsi, kal_bool* p_tgps_config_valid );

/*****************************************************************************
* Function:    UL1_Compare_CFN_SFN
*
* Parameters:  kal_int16 cfn             ; cfn which RRCE wants to compare, range:0~255
*              kal_int16 sfn             ; sfn which RRCE wants to compare, range:0~4095
*              tgps_time_relationship_E* cfn_sfn_relation   ; TGPS_AFTER means that expanded CFN is after the specified sfn
*                                        ; TGPS_EQUAL means that expanded CFN is equal to the specified sfn
*                                        ; TGPS_BEFORE means that expanded CFN is equal to the specified sfn
* Returns:     void
*
* Description: 
*  The function is to expand the specified CFN to the range 0~4095 and compare the expanded CFN to the specified SFN
*****************************************************************************/
void UL1_Compare_CFN_SFN( kal_int16 cfn, kal_int16 sfn, tgps_time_relationship_E *cfn_sfn_relation );


/*****************************************************************************
* Function:    UL1_CEDCH_Check_Started
*
* Parameters:  Non
* Returns:     If the return value is KAL_TRUE, UL1 has the common EDCH resource, otherwise it's KAL_FALSE.
*
* Description: 
*  This is a callback function and provide to indicate the common edch status for upper layer. 
*  The resolution is frame base because this function is provided by UL1C.
*****************************************************************************/
#ifdef __UMTS_R8__
kal_bool UL1_CEDCH_Check_Started( void );
#endif  /* __UMTS_R8__ */

/*****************************************************************************
* Function:    UL1D_MEAS_Check_Adjacent_Freq
*
* Parameters:  kal_uint16 uarfcn_intra : intra uarfcn
*              kal_uint16 uarfcn_inter : inter uarfcn
* Returns:     If the return value is KAL_TRUE, inter freq is adjacent freq
*
* Description: 
*  This function is provided for MEME to query inter freq is adjacent or not 
*****************************************************************************/
#ifdef __UMTS_R8__
kal_bool UL1D_MEAS_Check_Adjacent_Freq(kal_uint16 uarfcn_intra, kal_uint16 uarfcn_inter);
#endif  /* __UMTS_R8__ */


/*****************************************************************************
* Functions exported to MEME
*****************************************************************************/
/*****************************************************************************
* Function:    UL1_CurrAndPendingConfigTGPS_byTGMP
*
* Parameters:  kal_uint8    tgmp_bitmap : bitmap of tgmp, 
*                                                            bit0 is for FDD_MEASURE, bit1 is for GSM_RSSI, 
*                                                            bit2 is for GSM_BSIC_INIT, bit3 is for GSM_BSIC_CNF
*                    tgps_config_by_tgmp_T *tgps_config_by_tgmp
*
* Returns:     void
*
* Description: 
*  The function is for MEME to query current and pending TGPS status by TGMP
*****************************************************************************/ 
void UL1_CurrAndPendingTGPS_Status_byTGMP( kal_uint8 tgmp_bitmap, tgps_status_by_tgmp_T *tgps_status_by_tgmp );


/**********************************************************************************************************************/
/***********************************   UL1 Interface maintained by UMAC (Begin)   *************************************/
/**********************************************************************************************************************/
/*UMAC*/extern kal_bool ul_dpch_cctrch(
/*UMAC*/						kal_uint8 cfn, 
/*UMAC*/						kal_bool availabe,
/*UMAC*/						kal_bool reconfig_status, /*For notifying DPCH modification*/ 
/*UMAC*/						kal_uint16 *tfci,
/*UMAC*/                        kal_uint8 *num_trch, 
/*UMAC*/						ulTrchData *TrchInfo,
/*UMAC*/                        kal_uint16 *size_data, 
/*UMAC*/						kal_uint8 **data        );
/*UMAC*/
/*UMAC*/extern void ul_dpch_cctrch_task(
/*UMAC*/						kal_uint8 cfn, 
/*UMAC*/						kal_bool availabe,
/*UMAC*/						kal_bool reconfig_status /*For notifying DPCH modification*/ );
/*UMAC*/
/*UMAC*/extern kal_bool ul_dpch_cctrch_HISR(
/*UMAC*/						kal_uint8 cfn, 
/*UMAC*/						kal_bool availabe,
/*UMAC*/						kal_bool reconfig_status, /*For notifying DPCH modification*/ 
/*UMAC*/						kal_uint16 *tfci,
/*UMAC*/                        kal_uint8 *num_trch, 
/*UMAC*/						ulTrchData *TrchInfo,
/*UMAC*/                        kal_uint16 *size_data, 
/*UMAC*/						kal_uint8 **data );
/*UMAC*/
/*UMAC*/extern void ul_inform_MAC(kal_uint8 cfn);
/*UMAC*/
/*UMAC*/extern void ul_dpch_power(kal_uint8 cfn, kal_uint8 tfc_status[MAX_UL_TFC]);
/*UMAC*/extern void mac_hs_get_variable_pdu_buffer(kal_uint8   **buffer_ptr, kal_uint32 num);
/*UMAC*/extern void mac_hs_get_pdu_buffer(kal_uint8 **buffer_ptr );
/*UMAC*/
/*UMAC*/extern uldch_data_ind_T *UMAC_UL_DCH_Tick_LISR(uldch_data_req_T *uldch_data_req);
/*UMAC*/extern etfc_eval_info_ind_T* umac_e_dch_tick_1_LISR( etfc_eval_info_req_T* etfc_eval_input );
/*UMAC*/extern edch_data_ind_T* umac_e_dch_tick_2_LISR( edch_data_req_T* edch_data_input );
/*UMAC*/extern void umac_e_dch_tick_3_LISR(kal_bool  tx_enable, kal_uint32  ref_etpr_x225);
/*UMAC*/extern void ul_inform_Edch_MAC(void  *data);
/*UMAC*/extern kal_bool umac_e_dch_tick_4_LISR(void);
/*UMAC*/extern void try_to_trigger_CSR_STATUS_IND_LISR(kal_uint8 cfn);
/*UMAC*/extern void send_CSR_STATUS_IND(kal_uint8 cfn);
/*UMAC*/
/*UMAC*/#define UMAC_UL_DCH_Tick(uldch_data_req) UMAC_UL_DCH_Tick_LISR(uldch_data_req)
/*UMAC*/#define umac_e_dch_tick_1(etfc_eval_input) umac_e_dch_tick_1_LISR(etfc_eval_input)
/*UMAC*/#define umac_e_dch_tick_2(edch_data_input) umac_e_dch_tick_2_LISR(edch_data_input)
/*UMAC*/#define umac_e_dch_tick_3(tx_enable,ref_etpr_x225) umac_e_dch_tick_3_LISR(tx_enable,ref_etpr_x225)
/*UMAC*/#define umac_e_dch_tick_4(void) umac_e_dch_tick_4_LISR(void)
/*UMAC*/
#ifdef __UMTS_R7__
kal_bool umac_e_dch_tick_5_LISR(etfc_eval_lpr_info_req_T* info);
#define umac_e_dch_tick_5(info) umac_e_dch_tick_5_LISR(info)
#endif // __UMTS_R7__
/*UMAC*//*========== UMAC END TX STRUCT (BEGIN)  ==========*/
/*UMAC*/typedef struct _phy_end_dch_tx_ind_struct
/*UMAC*/{
/*UMAC*/	LOCAL_PARA_HDR
/*UMAC*/	kal_uint8                           cfn; 
/*UMAC*/	
/*UMAC*/} phy_end_dch_tx_ind_struct;
/*UMAC*/
/*UMAC*//* __HSUPA_SUPPORT__ */
/*UMAC*/typedef struct _phy_end_edch_tx_ind_struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_uint8       cfn; 
/*UMAC*/    kal_uint8       subframe;
/*UMAC*/    kal_uint8       harq_id;
/*UMAC*/    kal_uint8       mode;
/*UMAC*/} phy_end_edch_tx_ind_struct;
/*UMAC*//*========== UMAC END TX STRUCT  (END) ==========*/
/*UMAC*//*========== UMAC UT SIMULATE MESSAGE   ==========*/
/*UMAC*///#ifdef  __MNT_UT_UMAC_ALONE_WITHOUT_L1__  /* UMAC UT */
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_uint8 cfn;
/*UMAC*/    kal_bool availabe;
/*UMAC*/    kal_bool reconfig_status;  
/*UMAC*/}phy_simulate_dch_ul_cctrch_task_struct;
/*UMAC*/
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_uint8 cfn;
/*UMAC*/    kal_uint8         ul_mac_event;     /* bit 0: UL DCH setup,   */ 
/*UMAC*/                                                   /* bit 1: UL DCH release, */
/*UMAC*/                                                   /* bit 2: UL DCH modify   */
/*UMAC*/    kal_uint8         dpdch_num;
/*UMAC*/    kal_bool          restartSRB;        /* set true when PCP_Finish (not align max TTI) */
/*UMAC*/    kal_bool          tx_enable;         /* set true if TX data could be sent (min TTI) */
/*UMAC*/    kal_bool          tx_suspend;
/*UMAC*/    kal_uint8         tfc_status[MAX_UL_TFC];
/*UMAC*/}phy_simulate_dch_ul_cctrch_lisr_struct;
/*UMAC*/
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/   LOCAL_PARA_HDR
/*UMAC*/   kal_uint8 cfn;
/*UMAC*/   kal_bool availabe;
/*UMAC*/   kal_bool reconfig_status;
/*UMAC*/   /* Use structure instead of pointer to simulate this */
/*UMAC*/   kal_uint16 tfci;
/*UMAC*/   kal_uint8 num_trch;
/*UMAC*/   ulTrchData TrchInfo[MAX_TRCH_NUM];
/*UMAC*/   kal_uint16 size_data[MAX_TRCH_NUM];
/*UMAC*/   kal_uint8 *data[MAX_UL_TB];
/*UMAC*/}phy_simulate_dch_ul_cctrch_hisr_struct;
/*UMAC*/
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/   LOCAL_PARA_HDR
/*UMAC*/    kal_uint8 cfn;
/*UMAC*/   kal_uint8         num_trch;   
/*UMAC*/   ulTrchData        trchInfo[MAX_TRCH_NUM]; 
/*UMAC*/   kal_uint16        tfci;
/*UMAC*/   kal_uint16        num_data[MAX_TRCH_NUM]; 
/*UMAC*/   kal_uint8         *data[MAX_TRCH_NUM];
/*UMAC*/   tPhyPostTxElement    PostTxElement;   /* Transparent in UL1D */
/*UMAC*/
/*UMAC*/#ifdef  UNIT_TEST
/*UMAC*/   void    *addr;
/*UMAC*/#endif /* UNIT_TEST */   
/*UMAC*/}phy_simulate_dch_ul_cctrch_lisr_rsp_struct;
/*UMAC*/
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_uint8 cfn;
/*UMAC*/    kal_bool availabe;
/*UMAC*/    kal_bool reconfig_status; 
/*UMAC*/    /* Use structure instead of pointer to simulate this */
/*UMAC*/    kal_uint16 tfci;
/*UMAC*/    kal_uint8 num_trch; 
/*UMAC*/    ulTrchData TrchInfo[MAX_TRCH_NUM];
/*UMAC*/    kal_uint16 size_data[MAX_TRCH_NUM];
/*UMAC*/    kal_uint8 *data[MAX_UL_TB];      
/*UMAC*/}phy_simulate_dch_ul_cctrch_hisr_rsp_struct;
/*UMAC*/
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_uint8 cfn;
/*UMAC*/    kal_bool availabe;
/*UMAC*/    kal_bool reconfig_status; 
/*UMAC*/    /* Use structure instead of pointer to simulate this */
/*UMAC*/    kal_uint16 tfci;
/*UMAC*/    kal_uint8 num_trch; 
/*UMAC*/    ulTrchData TrchInfo[MAX_TRCH_NUM];
/*UMAC*/    kal_uint16 size_data[MAX_TRCH_NUM];
/*UMAC*/    kal_uint8 *data[MAX_UL_TB];      
/*UMAC*/}phy_simulate_dch_ul_callback_cctrch_rsp_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_uint8    cfn;
/*UMAC*/    kal_uint8    tfc_status[MAX_UL_TFC];
/*UMAC*/}phy_simulate_dch_ul_callback_power_struct;
/*UMAC*/
/*UMAC*/typedef struct   /* Old DCH Callback */
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_uint8 cfn;
/*UMAC*/    kal_bool availabe;
/*UMAC*/    kal_bool reconfig_status; /*MA only, for notifying DPCH modification*/ 
/*UMAC*/    /* Use structure instead of pointer to simulate this */
/*UMAC*/    kal_uint16 tfci;
/*UMAC*/    kal_uint8 num_trch; 
/*UMAC*/    ulTrchData TrchInfo[MAX_TRCH_NUM];
/*UMAC*/    kal_uint16 size_data[MAX_TRCH_NUM];
/*UMAC*/    kal_uint8 *data[MAX_UL_TB];      
/*UMAC*/}phy_simulate_dch_ul_callback_cctrch_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/	LOCAL_PARA_HDR
/*UMAC*/	kal_uint8                                           cfn; 
/*UMAC*/	
/*UMAC*/} phy_simulate_end_dch_tx_ind_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    etfc_eval_info_req_T  etfc_eval_info_req;
/*UMAC*/}phy_simulate_umac_e_dch_tick_1_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    etfc_eval_info_ind_T  etfc_eval_info_ind;
/*UMAC*/    kal_uint8  SG;   /* easy to check the result of updating SG */
/*UMAC*/    kal_uint8  active_process;   /* easy to check the result after processing AG command */
/*UMAC*/}phy_simulate_umac_e_dch_tick_1_rsp_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    /* MAX_NUM_OF_ETFC = 128 */ 
/*UMAC*/    kal_uint8 supported_etfci_bitmap[128 / 4];
/*UMAC*/
/*UMAC*/    /* NUM_OF_NTX1_10MS = (15-8+1), MAX_NUM_OF_ETFC = 128  */
/*UMAC*/    kal_uint8   sf_of_etfci[8][128 / 2]; 
/*UMAC*/}phy_simulate_umac_e_dch_tick_2_param_setup_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    edch_data_req_T  edch_data_req;
/*UMAC*/    /* MAX_NUM_OF_ETFC = 128 */ 
/*UMAC*/    kal_uint8 supported_etfci_bitmap[128 / 4];
/*UMAC*/
/*UMAC*/    /* NUM_OF_NTX1_10MS = (15-8+1), MAX_NUM_OF_ETFC = 128  */
/*UMAC*/    kal_uint8   sf_of_etfci[8][128 / 2]; 
/*UMAC*/}phy_simulate_umac_e_dch_tick_2_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    edch_data_ind_T  edch_data_ind;
/*UMAC*/    kal_uint8  SI_HLID; /* easy to check result of Highest Priority Logical Channel Identity */
/*UMAC*/    kal_uint32  SI_HLBS; /* easy to check result of Highest priority Logical channel Buffer Status (Bytes) */
/*UMAC*/}phy_simulate_umac_e_dch_tick_2_rsp_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_bool  tx_enable;
/*UMAC*/    kal_uint32  ReferenceEtpr;
/*UMAC*/}phy_simulate_umac_e_dch_tick_3_struct;
/*UMAC*/
#ifdef __UMTS_R7__
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    etfc_eval_lpr_info_req_T    etfc_eval_lpr_info_req;
/*UMAC*/}phy_simulate_umac_e_dch_tick_5_struct;
/*UMAC*/
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_bool  result;
/*UMAC*/}phy_simulate_umac_e_dch_tick_5_rsp_struct;
#endif /* __UMTS_R7__*/
/*UMAC*/typedef struct
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/    kal_uint8   cfn;
/*UMAC*/}phy_simulate_try_to_trigger_csr_status_ind_struct;


/*UMAC*/
/*UMAC*///#endif /* __MNT_UT_UMAC_ALONE_WITHOUT_L1__ */
/*UMAC*//*========== END UMAC UT SIMULATE MESSAGE   ==========*/
/*UMAC*/
/*UMAC*//*========== UMAC DEBUG MESSAGE   ==========*/
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/
/*UMAC*/    etfc_eval_info_req_T  etfc_eval_info_req;
/*UMAC*/    etfc_eval_info_ind_T  etfc_eval_info_ind;
/*UMAC*/    kal_uint8   ServingGrant;  
/*UMAC*/    kal_bool  old_isNewTransmission;
/*UMAC*/    kal_bool  update_isNewTransmission;
/*UMAC*/
/*UMAC*/}umac_umac_edch_tick1_ind_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/
/*UMAC*/    edch_data_ind_T  edch_data_ind;
/*UMAC*/    kal_uint8  supported_etfci_bitmap[32];
/*UMAC*/}umac_umac_edch_tick2_ind_struct;
/*UMAC*/
/*UMAC*/
/*UMAC*/typedef struct 
/*UMAC*/{
/*UMAC*/    LOCAL_PARA_HDR
/*UMAC*/
/*UMAC*/    kal_bool  tx_enable;
/*UMAC*/    kal_uint8  old_ReferenceEtpr;
/*UMAC*/    kal_uint8  update_ReferenceEtpr;    
/*UMAC*/    kal_uint32  ref_etpr_x225;
/*UMAC*/    kal_uint32  update_ref_etpr_x225;    
/*UMAC*/}umac_umac_edch_tick3_ind_struct;
/*UMAC*//*========== END UMAC DEBUG MESSAGE   ==========*/
/**********************************************************************************************************************/
/***********************************   UL1 Interface maintained by UMAC (END)   *************************************/
/**********************************************************************************************************************/

/*------------------- MSC Composer -----------------------------*/
/* The following definition is used only for MSC composer.      */
typedef union _local_para_unpack_T
{
   cphy_pch_setup_req_struct        cphy_pch_setup_req;
   cphy_pch_modify_req_struct       cphy_pch_modify_req;
   cphy_pch_release_req_struct      cphy_pch_release_req;
   cphy_fach_setup_req_struct       cphy_fach_setup_req;
   cphy_fach_modify_req_struct      cphy_fach_modify_req;
   cphy_fach_release_req_struct     cphy_fach_release_req;
   cphy_dch_setup_req_struct        cphy_dch_setup_req;
   cphy_dch_modify_req_struct       cphy_dch_modify_req;
   cphy_dch_release_req_struct      cphy_dch_release_req;
   cphy_rach_setup_req_struct       cphy_rach_setup_req;
   cphy_rach_release_req_struct     cphy_rach_release_req;
   cphy_hsdsch_setup_req_struct     cphy_hsdsch_setup_req;
   cphy_hsdsch_modify_req_struct    cphy_hsdsch_modify_req;
   cphy_hsdsch_release_req_struct   cphy_hsdsch_release_req;
   cphy_edch_setup_req_struct       cphy_edch_setup_req;
   cphy_edch_modify_req_struct      cphy_edch_modify_req;
   cphy_edch_release_req_struct     cphy_edch_release_req;
#ifdef __UMTS_R7__
   cphy_cpc_config_req_struct      cphy_cpc_setup_req;
#endif  /* __UMTS_R7__ */
} local_para_unpack_T;

typedef struct _msg_buf_unpack_T                          /* Buffer of message container */
{
   kal_uint8         channel_id;                   /* Channel ID */
   msg_type          msg_id;                       /* Message ID */
   kal_uint16        buff_size;                    /* Buffer size */
   local_para_unpack_T         buffer;              /* Channel configuration message buffer */
} msg_buf_unpack_T;

typedef struct _cphy_msg_container_req_unpack_struct
{
   LOCAL_PARA_HDR
 
   kal_uint8                     at_ref;              /* Reference channge of activation time.
                                                         0 : Ref channel is the released channel.
                                                             There should be ch to be released
                                                         1 : Ref channel is the setup channel.
                                                             There should be ch to be setup.
                                                       */
   kal_int16                     rx_cfn;               /* Indicate peer message receive cfn. Ex: tti = 4, receive frame number : 0,1,2,3.  rx_cfn = 3 (set by ul1)
                                                          [Range]: -1 ~ 255.
                                                              -1 : Means upper layer internal control
                                                       */
#ifdef __UMTS_R6__
   kal_bool                      delay_restriction;    /* From R6 : TS25.331 8.6.3.1 */
#endif
   meas_control_E                meas_control;        /* Indicate whether UL1 need to not to resume meas. after apply corresponding buffer's config. */
   kal_int8                      idx_intra_freq;      /* [Range]: 0 ~ 2. Indicate which frequency in the array uarfcn[MAX_UMTS_FREQ] is intra-frequency, -1 means invalid */   
                                                                      
   kal_uint8                     msg_num;             /* # of included msg. 1 ~ 4 */
   msg_buf_unpack_T              msg_buffer[4];       /* List of msg buffer for included channel msg */

   /* [R5R6] For HS-DSCH and E-DCH */
   kal_uint8                     h_msg_num;           /* # of included H-msg. 0~2 */
   msg_buf_unpack_T              h_msg_buffer[2];     /* List of msg buffer for included channel msg */
   kal_uint8                     e_msg_num;           /* # of included E-msg. 0~2 */
   msg_buf_unpack_T              e_msg_buffer[2];     /* List of msg buffer for included channel msg */
#ifdef __UMTS_R7__
   kal_uint8                     cpc_msg_num;                            /* # of included CPC-msg. 0~1 */
   msg_buf_unpack_T              cpc_msg_buffer[1];                      /* List of msg buffer for included CPC msg */
#endif  /* __UMTS_R7__ */
} cphy_msg_container_req_unpack_struct;

typedef struct _ul1_umts_max_tx_pwr_red_req_struct
{
   LOCAL_PARA_HDR
      
   kal_bool          valid;
   kal_uint8         umts_power_reduction_in_edb[20][2/*Service*/];
} ul1_umts_max_tx_pwr_red_req_struct;

typedef enum
{
   UL1_EM_TST_CMD_TX_DPCH = 0
   ,UL1_EM_TST_CMD_END
} UL1_EM_TSTCmdType;

typedef struct
{
   kal_int8 power;
   kal_uint8 rf_band;
   kal_uint16 ul_freq;
} UL1_EM_TSTCmdTxDPCh_T;

typedef union
{
   UL1_EM_TSTCmdTxDPCh_T txdpch;
} UL1_EM_TSTCmdParam;

typedef struct _l4ul1_em_tst_req_struct
{
   LOCAL_PARA_HDR
      
   kal_uint8 src_id;
   UL1_EM_TSTCmdType type;
   UL1_EM_TSTCmdParam param;
} l4ul1_em_tst_req_struct;


typedef struct _l4ul1_em_tst_cnf_struct
{
   LOCAL_PARA_HDR
      
   kal_uint8 src_id;
   kal_bool success;                           
} l4ul1_em_tst_cnf_struct;


#endif

