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
 *   ul1d_rf_cid.h
 *
 * Project:
 * --------
 *   3G Project Common File
 *
 * Description:
 * ------------
 *   Compile option definition
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision: $
 * $Modtime: $
 * $Log: $
 *
 * 11 16 2012 rich.lee
 * [MOLY00006336] [Pre-SQC2][Thermal]The PA sensor can't report correct temp. value (always -127 degree C)
 * open MT6167 RF temperature measurement functionality.
 *
 * 11 08 2012 rich.lee
 * [MOLY00002637] [MT6583] Check in the latest MT6167 RF driver
 * TM measurement enable for customer & BPI register setting update for L1 simulation.
 * 
 * 09 04 2012 shihsyuan.huang
 * [MOLY00003059] [MT6583] MT6167 RF driver Check-in
 * MT6167 RF driver version 1.0 check-in
 * 
 * 08 27 2012 rich.lee
 * [MOLY00002637] [MT6583] Check in the latest MT6167 RF driver
 * MT6583 RF driver latest update.
 * 
 * 08 24 2012 rich.lee
 * [MOLY00002637] [MT6583] Check in the latest MT6167 RF driver
 * MT6583 MT6167_RF compile option moidification.
 *
 * 07 17 2012 shihsyuan.huang
 * [MOLY00000833] [UESIM][UL1] build error/xGen error fix
 * In order to that xGen in UESIM align to Target, RF module in UESIM must be align to latest RF driver.
 *
 * 04 13 2012 liang-yuan.chen
 * removed!
 * sync MT6280_DVT_DEV to MT6280_GCC_DEV
 *
 * 02 07 2012 jay.hsieh
 * removed!
 * .
 *
 * 01 16 2012 jay.hsieh
 * removed!
 * Merge RF MSBB architecture modification
 *
 * 11 08 2011 ivan.hu
 * removed!
 * .
 *
 * 10 14 2011 ivan.hu
 * removed!
 * .
 *
 *******************************************************************************/

#ifndef  _UL1D_RF_CID_H_
#define  _UL1D_RF_CID_H_

/*******************************************************************************
** Define RF chip in use
*******************************************************************************/

/*------------------------------------------*/
/* Use in UL1D :                            */
/*   ( 1) UL1D_RF_ID_SONY_CXA3359           */
/*   ( 2) UL1D_RF_ID_MT6159B                */
/*   ( 3) UL1D_RF_ID_SMARTI3G               */
/*   ( 4) UL1D_RF_ID_MT6159D                */
/*   ( 5) UL1D_RF_ID_MT6160                 */
/*   ( 6) UL1D_RF_ID_MT6162                 */
/*------------------------------------------*/

#define UL1D_RF_ID_SONY_CXA3359              0x00000001
#define UL1D_RF_ID_MT6159B                   0x00000002
#define UL1D_RF_ID_SMARTI3G                  0x00000003
#define UL1D_RF_ID_MT6159D                   0x00000005 
#define UL1D_RF_ID_MT6160                    0x00000007
#define UL1D_RF_ID_MT6162                    0x00000008
#define UL1D_RF_ID_MT6162_DUAL               0x00000009
#define UL1D_RF_ID_ORION_FDD                 0x0000000A
#define UL1D_RF_ID_ORION_HPLUS               0x0000000B
#define UL1D_RF_ID_MT6167                    0x0000000C

/*.......................................................*/
#ifndef __UE_SIMULATOR__
#define IS_RF_SONY_CXA3359                   ( UL1D_RF_ID==UL1D_RF_ID_SONY_CXA3359 )
#define IS_RF_MT6159B                        ( UL1D_RF_ID==UL1D_RF_ID_MT6159B )
#define IS_RF_SMARTI3G                       ( UL1D_RF_ID==UL1D_RF_ID_SMARTI3G )
#define IS_RF_MT6159D                        ( UL1D_RF_ID==UL1D_RF_ID_MT6159D )
#define IS_RF_MT6160                         ( UL1D_RF_ID==UL1D_RF_ID_MT6160 )
//Both 2G and 3G should use same IS_RF_MT6162 defintion to fix compile warning 
#define IS_RF_MT6162                         ( ((defined RF_ID) && RF_ID==RF_ID_MT6162) || ((defined UL1D_RF_ID) && UL1D_RF_ID==UL1D_RF_ID_MT6162) )

#define IS_URF_MT6162_DUAL                   ( UL1D_RF_ID==UL1D_RF_ID_MT6162_DUAL  )
#define IS_URF_ORION_FDD                     ( UL1D_RF_ID==UL1D_RF_ID_ORION_FDD    )
#define IS_URF_ORION_HPLUS                   ( UL1D_RF_ID==UL1D_RF_ID_ORION_HPLUS  )
#define IS_URF_MT6167                        ( UL1D_RF_ID==UL1D_RF_ID_MT6167       )

#else
#define IS_URF_ORION_HPLUS                   ( 1 )
#endif
/*.......................................................*/

#ifndef  UL1D_RF_ID
   #if   defined(SONY_CXA3359_RF)
/* under construction !*/
   #elif defined(MT6159B_RF)
/* under construction !*/
   #elif defined(SMARTI3G_RF)
/* under construction !*/
   #elif defined(MT6159D_RF)
#define UL1D_RF_ID                           UL1D_RF_ID_MT6159D
   #elif defined(MT6160_RF)
#define UL1D_RF_ID                           UL1D_RF_ID_MT6160
   #elif defined(MT6162_RF)
#define UL1D_RF_ID                           UL1D_RF_ID_MT6162
   #elif defined(MT6162_DUAL_RF)
#define UL1D_RF_ID                           UL1D_RF_ID_MT6162_DUAL
   #elif defined(B60155A_RF)
#define UL1D_RF_ID                           UL1D_RF_ID_ORION_FDD
   #elif defined(MT6280RF_UMTS_FDD_RF)
#define UL1D_RF_ID                           UL1D_RF_ID_ORION_HPLUS
   #elif defined(MT6167_RF)
#define UL1D_RF_ID                           UL1D_RF_ID_MT6167
   #else
      #error "No Valid RF Chip was defined"
   #endif
#else
   #error "Unexpected RF Chip was defined"
#endif

/*.......................................................*/

/*******************************************************************************
** META HWTPC test item usage
*******************************************************************************/
#define IS_HSPA_HWTPC                        0

/*******************************************************************************
** MIPI PA usage
*******************************************************************************/
#define IS_MIPI_PA                           0

/*******************************************************************************
** RXD & DUAL CELL usage
*******************************************************************************/
#if IS_URF_MT6162_DUAL
#define IS_RF_DUAL_CELL_SUPPORT              1
#define IS_RF_RXD_SUPPORT                    1
#define TEAMPERATURE_MEAS_EN                 0 //Can be enabled for OrionRF related only

#elif IS_URF_ORION_HPLUS
#define IS_RF_DUAL_CELL_SUPPORT              1
#define IS_RF_RXD_SUPPORT                    1
#define TEAMPERATURE_MEAS_EN                 0

#elif IS_URF_MT6167
#define IS_RF_DUAL_CELL_SUPPORT              1
#define IS_RF_RXD_SUPPORT                    1
#define TEAMPERATURE_MEAS_EN                 1

#else
#define IS_RF_DUAL_CELL_SUPPORT              0
#define IS_RF_RXD_SUPPORT                    0
#define TEAMPERATURE_MEAS_EN                 0
#endif

#endif /* #ifndef  _UL1D_RF_CID_H_ */

