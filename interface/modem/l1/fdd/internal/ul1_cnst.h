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
 * ul1_cnst.h
 *
 * Project:
 * --------
 *   WCDMA_Software
 *
 * Description:
 * ------------
 *   Layer 1 related constant and enum definitions for MediaTek WCDMA software
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#ifndef _UL1_CNST_H
#define _UL1_CNST_H

/*-------- BCH related constant  ----------------------*/
#define  MAX_SIB_PATTERN         31                /* The maximum number of BCH SIB blocks */
#define  MAX_SIB_SEG_COUNT       16                /* The maximum number of segments in 1 BCH SIB */
#define  MIN_DECODE_FRAMES       2                 /* SFN/SFN_MEAS mini decode frame */

/*-------- TrCH related constant (For UL/DL 384Kbps capability) ----------------------*/
/* MAUI_02850564 : According to spec 25.306 and MTK implementation, MAX_DL_DATA should be 956 bytes : 
   MAX_DL_DATA = 6400 + 24*32 (CRC bits*MaxTBNum) + 7*32 (max bit offset for each TB) 
                 + 7*32 (max byte alignment for each TB) + 4*8 (4 bytes report header) = 7648 bits = 956 bytes.
   But we have seen an overspec case : PS TrCH 336*24 + SRB TrCH 148*1, thus define MAX_DL_DATA as 1150 bytes.
   MAX_DL_DATA = [PS part]  336*24 + 24*24 + 7*24 + 7*24
                 [SRB part] + 148*1 + 24*1 + 7*1 + 7*1
                 + 4*8 (4 bytes report header) = 9194 bits = 1149.25 bytes. */
#define  MAX_DL_DATA             1150              /* Maximum DL transport block array size. */
#define  MAX_TRCH_NUM            8                 /* Maximum Simultaneous TrCHs */
#define  MAX_DL_TB               32                /* Maximum simultaneous DL TBs */
#define  MAX_DL_TFC              128               /* Maximum number of TFCs per DL CCTrCH */
#define  MAX_DL_TFs              64                /* Maximum numbre of TFs per DL CCTrCH */
#define  MAX_DL_TRCH             32                /* Maximum number of DL TrCH */
#define  MAXTF                   32                /* Maximum number of TF per UL or DL TrCH TFS */
#define  MAXFACHPCH              8                 /* Maximum number of TrCHs per S-CCPCH CCTrCH */
#define  MAX_UL_TFC              64                /* Maximum number of TFCs per UL CCTrCH */
#define  MAX_UL_DATA             829               /* Maximum UL transport block array size. */
#define  MAX_UL_TB               16                /* Maximum simultaneous DUL TBs */
#define  MAX_UL_TFs              32                /* Maximum numbre of TFs per UL CCTrCH */
#define  MAX_UL_TRCH             32                /* Maximum number of UL TrCH */

/*-------- PhyCh related constant (For UL/DL 384Kbps capability) ----------------------*/
#define  MAX_TGPS                6                 /* Maximum number of TGPS sequences */
#define  MAX_PENDING_TGPS_NUM    5                 /* Maximum number of pending confiuration for one TGPS */
#define  MAX_TGMP_NUM            4                 /* Maximum number of TGMP */
#define  MAX_ASC                 8                 /* Maximum access service class number */
#define  MAX_DLDPCH              3                 /* Maximum number of physical channel codes per DL DPCH CCTrCH */
#define  MAX_ULDPCH              6                 /* Maximum number of physical channel codes per UL DPCH CCTrCH */
#define  MAX_RL                  8                 /* Maximum number of DPCH radio links in active set */

/*-------- Measurement related constant ----------------------*/
#ifdef   __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
#define  MAX_FREQ_RANGE          15                /* Max size of frequency ranges for frequency scan. 
                                                      Extend range number for Enhanced Freq Scan in Gemini2.0.*/
#else
#define  MAX_FREQ_RANGE          8                 /* Max size of frequency ranges for frequency scan. */
#endif   /*__GEMINI_MONITOR_PAGE_DURING_TRANSFER__*/

#define  MAX_FREQ_LIST           36                /* Max size of stored frequency list for frequency scan */
#define  MAX_PREFERRED_PSC       96                /* Max number of preferred cells on 1 frequency for frequency scan */
#define  MAX_NUM_MEAS_CELL       32                /* Max number of reported cells in the measurement cell indication primitive */
#define  MAX_NUM_MEASURED_CELL   64                /* Max number of monitored cells in the measurement cell request primitive */
#define  MAX_NUM_SFN_CELL        12                /* Max number of cells whose SFN will be read by L1 when nc_nbr_dch=0 */
#define  MAX_MEAS_EVENT          8                 /* Maximum number of measurement events */
#define  MAX_UMTS_FREQ           3                 /* Maximum number of FDD frequency supported in a UMTS UE */
#ifdef __UMTS_R8__
#define  MAX_UMTS_ADJ_FREQ      1                 /* Maximum number of FDD frequency supported in a UMTS UE */
#else
#define  MAX_UMTS_ADJ_FREQ      0                 /* Maximum number of FDD frequency supported in a UMTS UE */
#endif
#define  REPORT_INFINITY         0xff              /* Tx_power measurement report number infinity*/
#define  MAX_RSSI_SNIFFER_SCAN_LIST   12           /*Maximum number of RSSI SNIFFER UARFCN (Add by Janet) */

/*-------- Magic value related constant ----------------------*/
#define  TM_VALID                307200            /* Default value representing Tm known. 38400*8 */
#define  TM_INVALID              ( -1 )            /* Default value representing Tm unknown. */
#define  OFF_VALID               4096              /* Default valure representing OFF known. */
#define  OFF_INVALID             ( -1 )            /* Default value representing OFF unknown. */
#define  RSSI_INVALID          ( -32768 )          /* Default value representing RSSI unknown. */
#define  RSCP_INVALID          ( -32768 )          /* Default value representing RSCP unknown. */
#define  ECN0_INVALID          ( -32768 )          /* Default value representing EcNo unknown. */
#define  UARFCN_INVALID          65535                /* Invalid UARFCN for setting empty freq. entry in meas. config req. */

/* For cell measurement clipping */
#define  RSCP_LOWER_BOUND         ( -480 ) /* CSD limit= -508, but upper lauer request -480 */
#define  RSCP_UPPER_BOUND         ( -20 )
#define  RSSI_LOWER_BOUND         ( -480 )
#define  RSSI_UPPER_BOUND         ( -20 )
#define  EcN0_LOWER_BOUND         ( -100 )
#define  EcN0_UPPER_BOUND         0

/*-------- BMC (CTCH) related constant  ----------------------*/
#define  BMC_MAX_BITMAP_SIZE     64                /* CTCH level 2 bitmap siz */

/*-------- Activation time related constant  ----------------------*/
#define  CFN_IMMEDIATE           (kal_int16)(-1)            /* Immediate CFN activation time. */
#define  SFN_IMMEDIATE           (kal_int16)(-1)            /* Immediate SFN activation time. */
#define  INVALID_ACTT            (kal_int16)0x7FFF            /* Invalid activation time */

/*--------  [R5R6] HS-DSCH related  ----------------------*/
#define  MAX_HS_SCCH_NUM            4
#define  MAX_HS_PROCESS_NUM         8
#define  MAX_HS_PDU_NUM_IN_FRAME    5
#ifdef __UMTS_R7__
#define  MAX_HS_PDU_SIZE_IN_BITS    42192
#else
#define  MAX_HS_PDU_SIZE_IN_BITS    14411
#endif
#define  MAX_HS_PDU_SIZE_IN_BYTES   (((MAX_HS_PDU_SIZE_IN_BITS+32+31)/32)*4)
#ifdef __UMTS_R8__
#define  MAX_HS_PDU_BUFF_NUM        80 // for DC hsdpa
#else
#define  MAX_HS_PDU_BUFF_NUM        40
#endif
#define  MAX_HS_RB_NUM              3
#define  MAX_EDCH_RL                4
#define  MAX_REF_ETFCI_NUM          8
#define  MAX_NUM_OF_ETFC            128
#define  NUM_OF_NTX1_10MS           (15 - 8 + 1)
#define  NUM_OF_DELTA_HARQ          7

/*-------- TX Power Measurement related constant ----------------------*/
#define  MAX_TXP_REACHED          0x15555555   /* Criterion for max TX power reached: all slots in a frame reach max TX power. */
#define  MIN_TXP_REACHED          0x3FFFFFFF   /* Criterion for min TX power reached: all slots in a frame reach min TX power. */
#define  MAX_MIN_TXP_SKIPPED      0x2AAAAAAA   /* During CPC, if all slots are TX off or only DPCCH is transmitted. This frame is not counted for Max or Min Tx event criteria. */

#define MAX_3G_USECOUNT           100        /* Used by RTB to avoid 3G useCount overflow and do error check. */

#endif

