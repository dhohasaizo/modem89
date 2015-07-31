/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	ul1d_custom_rf.h
 *
 * Project:
 * --------
 *   MT6167
 *
 * Description:
 * ------------
 *   MT6167 UMTS FDD RF
 *
 * Author:
 * -------
 * -------
 *

 *******************************************************************************/
#ifndef  _UL1D_CUSTOM_RF_H_
#define  _UL1D_CUSTOM_RF_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6167_RF) 
   #error "rf files mismatch with compile option!"
#endif
#include "ul1d_rf_cid.h"

/*MT6167*/ 
/*MT6167*/ #define  PA_SECTION   3
/*MT6167*/ 
/*MT6167*/ /*--------------------------------------------------------*/
/*MT6167*/ /*   Event Timing Define                                  */
/*MT6167*/ /*--------------------------------------------------------*/
/*MT6167*/ #define  TC_PR1               MICROSECOND_TO_CHIP(200)
/*MT6167*/ #define  TC_PR2               MICROSECOND_TO_CHIP(100)
/*MT6167*/ #define  TC_PR2B              MICROSECOND_TO_CHIP( 50)
/*MT6167*/ #define  TC_PR3               MICROSECOND_TO_CHIP( 20)                                         
/*MT6167*/ 
/*MT6167*/ #define  TC_PT1               MICROSECOND_TO_CHIP(200)
/*MT6167*/ #define  TC_PT2               MICROSECOND_TO_CHIP(100)
/*MT6167*/ #define  TC_PT2B              MICROSECOND_TO_CHIP( 50)
/*MT6167*/ #define  TC_PT3               MICROSECOND_TO_CHIP( 10)
/*MT6167*/ 
/*MT6167*/
/*MT6167*/ /* the following parameter is chip resolution */
/*MT6167*/ #define MAX_OFFSET        (24*4) //this value must be equal to max of the following 4 offset value
/*MT6167*/ /* Set VM timing same as PGABSI_OFFSET1 */
/*MT6167*/ // Rich modification for the vm_offset as 37
/*MT6167*/ #define VM_OFFSET         (42)//(33)   //54 //63 chips
/*MT6167*/ #define VBIAS_OFFSET      (59)   //59 chips
/*MT6167*/ #define DC2DC_OFFSET      (24*4)
/*MT6167*/ #define VGA_OFFSET        (24*4)
/*MT6167*/ #define MIPI_OFFSET       (59)   //59 chips
/*MT6167*/ 
/*MT6167*/ 
/*MT6167*/ /*---------------------------------------------------------------------*/
/*MT6167*/ /*   define  BPI data for MT6167  (shall be modified by real case)         */
/*MT6167*/ /*---------------------------------------------------------------------*/
/*MT6167*/ /*    PRCB : bit  BPI   pin function                                   */
/*MT6167*/ /*            0    0    ASM_VCTA                                       */
/*MT6167*/ /*            1    1    ASM_VCTB                                       */
/*MT6167*/ /*            2    2    ASM_VCTC                                       */
/*MT6167*/ /*            3    3    W_PA4_ON                                       */
/*MT6167*/ /*            4    4    2G PAEN                                        */
/*MT6167*/ /*            5    5    2G BANDSW                                      */
/*MT6167*/ /*            6    6    2G PA_EDGE_MODE                                */
/*MT6167*/ /*            7    7    W_PA1_ON                                       */
/*MT6167*/ /*            8    8    W_PA2_ON                                       */
/*MT6167*/ /*            9    9    W_PA5_ON                                       */
/*MT6167*/ /*            10   10   W_PA8_ON                                       */
/*MT6167*/ /*            11   11   RXD1                                           */
/*MT6167*/ /*            12   12   RXD2                                           */
/*MT6167*/ /*            13   13   RXD3                                           */
/*MT6167*/ /*---------------------------------------------------------------------*/
/*MT6167*/
/*MT6167*/ //* --------------------- PDATA_BAND1 Start ---------------------------*/
/*MT6167*/ #define  PDATA_BAND1_PR1      0x00005
/*MT6167*/ #define  PDATA_BAND1_PR2      0x00005
/*MT6167*/ #define  PDATA_BAND1_PR2B     0x00005
/*MT6167*/ #define  PDATA_BAND1_PR3      0x00000
/*MT6167*/ #define  PDATA_BAND1_PT1      0x00005
/*MT6167*/ #define  PDATA_BAND1_PT2      0x00085
/*MT6167*/ #define  PDATA_BAND1_PT2B     0x00085
/*MT6167*/ #define  PDATA_BAND1_PT3      0x00000
/*MT6167*/ /* --------------------- PDATA_BAND1 End ------------------------------*/
/*MT6167*/ /* --------------------- PDATA_BAND1 RXD Start ---------------------------*/
/*MT6167*/ #define  PDATA2_BAND1_PR1     0x00800
/*MT6167*/ #define  PDATA2_BAND1_PR2     0x00800
/*MT6167*/ #define  PDATA2_BAND1_PR2B    0x00800
/*MT6167*/ #define  PDATA2_BAND1_PR3     0x00000
/*MT6167*/ /* --------------------- PDATA_BAND1 RXD End ------------------------------*/ 
/*MT6167*/ /* --------------------- PDATA_BAND2 Start ----------------------------*/ 
/*MT6167*/ #define  PDATA_BAND2_PR1      0x00002
/*MT6167*/ #define  PDATA_BAND2_PR2      0x00002
/*MT6167*/ #define  PDATA_BAND2_PR2B     0x00002
/*MT6167*/ #define  PDATA_BAND2_PR3      0x00000
/*MT6167*/ #define  PDATA_BAND2_PT1      0x00002
/*MT6167*/ #define  PDATA_BAND2_PT2      0x00102
/*MT6167*/ #define  PDATA_BAND2_PT2B     0x00102
/*MT6167*/ #define  PDATA_BAND2_PT3      0x00000
/*MT6167*/ /* --------------------- PDATA_BAND2 End ------------------------------*/
/*MT6167*/ /* --------------------- PDATA_BAND2 RXD Start ---------------------------*/
/*MT6167*/ #define  PDATA2_BAND2_PR1     0x00000
/*MT6167*/ #define  PDATA2_BAND2_PR2     0x00000
/*MT6167*/ #define  PDATA2_BAND2_PR2B    0x00000
/*MT6167*/ #define  PDATA2_BAND2_PR3     0x00000
/*MT6167*/ /* --------------------- PDATA_BAND2 RXD End ------------------------------*/ 
/*MT6167*/ //* --------------------- PDATA_BAND4 Start ---------------------------*/
/*MT6167*/ #define  PDATA_BAND4_PR1      0x00005
/*MT6167*/ #define  PDATA_BAND4_PR2      0x00005
/*MT6167*/ #define  PDATA_BAND4_PR2B     0x00005
/*MT6167*/ #define  PDATA_BAND4_PR3      0x00000
/*MT6167*/ #define  PDATA_BAND4_PT1      0x00005
/*MT6167*/ #define  PDATA_BAND4_PT2      0x00005
/*MT6167*/ #define  PDATA_BAND4_PT2B     0x00005
/*MT6167*/ #define  PDATA_BAND4_PT3      0x00000
/*MT6167*/ /* --------------------- PDATA_BAND4 End ------------------------------*/
/*MT6167*/ /* --------------------- PDATA_BAND4 RXD Start ---------------------------*/
/*MT6167*/ #define  PDATA2_BAND4_PR1     0x00800
/*MT6167*/ #define  PDATA2_BAND4_PR2     0x00800
/*MT6167*/ #define  PDATA2_BAND4_PR2B    0x00800
/*MT6167*/ #define  PDATA2_BAND4_PR3     0x00000
/*MT6167*/ /* --------------------- PDATA_BAND4 RXD End ------------------------------*/ 
/*MT6167*/ /* --------------------- PDATA_BAND5 Start ----------------------------*/ 
/*MT6167*/ #define  PDATA_BAND5_PR1      0x00007
/*MT6167*/ #define  PDATA_BAND5_PR2      0x00007
/*MT6167*/ #define  PDATA_BAND5_PR2B     0x00007
/*MT6167*/ #define  PDATA_BAND5_PR3      0x00000
/*MT6167*/ #define  PDATA_BAND5_PT1      0x00007
/*MT6167*/ #define  PDATA_BAND5_PT2      0x00207
/*MT6167*/ #define  PDATA_BAND5_PT2B     0x00207
/*MT6167*/ #define  PDATA_BAND5_PT3	     0x00000
/*MT6167*/ /* --------------------- PDATA_BAND5 End ------------------------------*/
/*MT6167*/ /* --------------------- PDATA_BAND5 RXD Start ---------------------------*/
/*MT6167*/ #define  PDATA2_BAND5_PR1     0x03800
/*MT6167*/ #define  PDATA2_BAND5_PR2     0x03800
/*MT6167*/ #define  PDATA2_BAND5_PR2B    0x03800
/*MT6167*/ #define  PDATA2_BAND5_PR3     0x00000
/*MT6167*/ /* --------------------- PDATA_BAND5 RXD End ------------------------------*/ 
/*MT6167*/ /* --------------------- PDATA_BAND6 Start ----------------------------*/ 
/*MT6167*/ #define  PDATA_BAND6_PR1      0x00007
/*MT6167*/ #define  PDATA_BAND6_PR2      0x00007
/*MT6167*/ #define  PDATA_BAND6_PR2B     0x00007
/*MT6167*/ #define  PDATA_BAND6_PR3      0x00000
/*MT6167*/ #define  PDATA_BAND6_PT1      0x00007
/*MT6167*/ #define  PDATA_BAND6_PT2      0x00207
/*MT6167*/ #define  PDATA_BAND6_PT2B     0x00207
/*MT6167*/ #define  PDATA_BAND6_PT3	     0x00000
/*MT6167*/ /* --------------------- PDATA_BAND6 End ------------------------------*/
/*MT6167*/ /* --------------------- PDATA_BAND6 RXD Start ---------------------------*/
/*MT6167*/ #define  PDATA2_BAND6_PR1     0x03800
/*MT6167*/ #define  PDATA2_BAND6_PR2     0x03800
/*MT6167*/ #define  PDATA2_BAND6_PR2B    0x03800
/*MT6167*/ #define  PDATA2_BAND6_PR3     0x00000
/*MT6167*/ /* --------------------- PDATA_BAND6 RXD End ------------------------------*/ 
/*MT6167*/ /* --------------------- PDATA_BAND8 Start ----------------------------*/ 
/*MT6167*/ #define  PDATA_BAND8_PR1      0x00006
/*MT6167*/ #define  PDATA_BAND8_PR2      0x00006
/*MT6167*/ #define  PDATA_BAND8_PR2B     0x00006
/*MT6167*/ #define  PDATA_BAND8_PR3      0x00000
/*MT6167*/ #define  PDATA_BAND8_PT1      0x00006
/*MT6167*/ #define  PDATA_BAND8_PT2      0x00406
/*MT6167*/ #define  PDATA_BAND8_PT2B     0x00406
/*MT6167*/ #define  PDATA_BAND8_PT3      0x00000
/*MT6167*/ /* --------------------- PDATA_BAND8 End ------------------------------*/
/*MT6167*/ /* --------------------- PDATA_BAND8 RXD Start ---------------------------*/
/*MT6167*/ #define  PDATA2_BAND8_PR1     0x01000
/*MT6167*/ #define  PDATA2_BAND8_PR2     0x01000
/*MT6167*/ #define  PDATA2_BAND8_PR2B    0x01000
/*MT6167*/ #define  PDATA2_BAND8_PR3     0x00000
/*MT6167*/ /* --------------------- PDATA_BAND8 RXD End ------------------------------*/ 
/*MT6167*/ 
/*MT6167*/ 
/*MT6167*/ /****************************************************************************/
/*MT6167*/ /* Define your band mode selection on one of five main path LNA ports.      */
/*MT6167*/ /* Each of the 5 independent LNA/mixer/divider are either dedicated to      */
/*MT6167*/ /* either high (VCO divide-by-2) or low (VCO divide-by-4) band.             */
/*MT6167*/ /* There are three high band and two low band to choose.                    */
/*MT6167*/ /* LNA1/3/5 are for high band; LNA2/4 are for low band                      */
/*MT6167*/ /* All options are listed below:                                            */
/*MT6167*/ /* LNA1_HIGH_BAND/LNA2_LOW_BAND/LNA3_HIGH_BAND                              */
/*MT6167*/ /* LNA4_LOW_BAND/LNA5_HIGH_BAND/NON_USED_BAND                               */
/*MT6167*/ /****************************************************************************/
/*MT6167*/ #define    BAND1_CHANNEL_SEL    LNA3_HIGH_BAND
/*MT6167*/ #define    BAND2_CHANNEL_SEL    LNA1_HIGH_BAND
/*MT6167*/ #define    BAND3_CHANNEL_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND4_CHANNEL_SEL    LNA3_HIGH_BAND
/*MT6167*/ #define    BAND5_CHANNEL_SEL    LNA2_LOW_BAND
/*MT6167*/ #define    BAND6_CHANNEL_SEL    LNA2_LOW_BAND
/*MT6167*/ #define    BAND8_CHANNEL_SEL    LNA4_LOW_BAND
/*MT6167*/ #define    BAND9_CHANNEL_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND10_CHANNEL_SEL   NON_USED_BAND
/*MT6167*/ #define    BAND11_CHANNEL_SEL   NON_USED_BAND
/*MT6167*/ #define    BAND19_CHANNEL_SEL   NON_USED_BAND
/*MT6167*/
/*MT6167*/ /****************************************************************************/
/*MT6167*/ /* Define your band mode selection on one of three diversity path LNA ports.*/
/*MT6167*/ /* Each of the 3 independent LNA/mixer/divider are either dedicated to      */
/*MT6167*/ /* either high (VCO divide-by-2) or low (VCO divide-by-4) band.             */
/*MT6167*/ /* There are two high band and one low band to choose.                      */
/*MT6167*/ /* LNA1/3 are for high band; LNA2 are for low band                          */
/*MT6167*/ /* All options are listed below:                                            */
/*MT6167*/ /* LNA1D_HIGH_BAND/LNA2D_LOW_BAND/LNA3D_HIGH_BAND/NON_USED_BAND             */ 
/*MT6167*/ /****************************************************************************/
/*MT6167*/ #define    BAND1_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND2_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND3_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND4_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND5_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND6_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND8_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND9_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ #define    BAND10_CHANNEL2_SEL   NON_USED_BAND
/*MT6167*/ #define    BAND11_CHANNEL2_SEL   NON_USED_BAND
/*MT6167*/ #define    BAND19_CHANNEL2_SEL   NON_USED_BAND
/*MT6167*/ //#define    BAND1_CHANNEL2_SEL    LNA1D_HIGH_BAND
/*MT6167*/ //#define    BAND2_CHANNEL2_SEL    LNA3D_HIGH_BAND
/*MT6167*/ //#define    BAND3_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ //#define    BAND4_CHANNEL2_SEL    LNA1D_HIGH_BAND
/*MT6167*/ //#define    BAND5_CHANNEL2_SEL    LNA2D_LOW_BAND
/*MT6167*/ //#define    BAND6_CHANNEL2_SEL    LNA2D_LOW_BAND
/*MT6167*/ //#define    BAND8_CHANNEL2_SEL    LNA2D_LOW_BAND
/*MT6167*/ //#define    BAND9_CHANNEL2_SEL    NON_USED_BAND
/*MT6167*/ //#define    BAND10_CHANNEL2_SEL   NON_USED_BAND
/*MT6167*/ //#define    BAND11_CHANNEL2_SEL   NON_USED_BAND
/*MT6167*/ //#define    BAND19_CHANNEL2_SEL   NON_USED_BAND
/*MT6167*/
/*MT6167*/ /************************************************************/
/*MT6167*/ /* Define your tx output selection                          */
/*MT6167*/ /* There are two high band and one low band to choose.      */
/*MT6167*/ /* All options are listed below:                            */
/*MT6167*/ /* TX_HIGH_BAND3/TX_HIGH_BAND2/TX_LOW_BAND1/TX_NULL_BAND    */
/*MT6167*/ /************************************************************/
/*MT6167*/ #define    BAND1_OUTPUT_SEL     TX_HIGH_BAND2
/*MT6167*/ #define    BAND2_OUTPUT_SEL     TX_HIGH_BAND3
/*MT6167*/ #define    BAND3_OUTPUT_SEL     TX_NULL_BAND
/*MT6167*/ #define    BAND4_OUTPUT_SEL     TX_HIGH_BAND3
/*MT6167*/ #define    BAND5_OUTPUT_SEL     TX_LOW_BAND1
/*MT6167*/ #define    BAND6_OUTPUT_SEL     TX_LOW_BAND1
/*MT6167*/ #define    BAND8_OUTPUT_SEL     TX_LOW_BAND1
/*MT6167*/ #define    BAND9_OUTPUT_SEL     TX_NULL_BAND
/*MT6167*/ #define    BAND10_OUTPUT_SEL    TX_NULL_BAND
/*MT6167*/ #define    BAND11_OUTPUT_SEL    TX_NULL_BAND
/*MT6167*/ #define    BAND19_OUTPUT_SEL    TX_NULL_BAND
/*MT6167*/ 
/*MT6167*/ /************************************************************/
/*MT6167*/ /* For Single SW vs. multiple HW feature                    */
/*MT6167*/ /* Let the NVRAN BPI setting overwrite the GPIO BPI setting,*/ 
/*MT6167*/ /* If they are not the same (wrong config. by customer)     */
/*MT6167*/ /************************************************************/
/*MT6167*/ #define    RF_SETTING_BY_NVRAM   KAL_TRUE 
/*MT6167*/ /************************************************************/
/*MT6167*/ /* For using the V-battery as instead setting               */ 
/*MT6167*/ /************************************************************/
/*MT6167*/ #define    PMU_PASETTING         KAL_TRUE 
/*MT6167*/ /************************************************************/                                         
/*MT6167*/ /* For RXD single test, customer may use the RXD only,      */
/*MT6167*/ /* need to write RX_MAIN_PATH_ON & RX_DIVERSITY_PATH_ON to  */
/*MT6167*/ /* 0xFFFFFFFF after test                               */
/*MT6167*/ /************************************************************/ 
/*MT6167*/ #define    RX_DIVERSITY_ALWAYS_ON KAL_FALSE
/*MT6167*/ /************************************************************/ 
/*MT6167*/ /* For PA drift compensation by different band's PA         */ 
/*MT6167*/ /************************************************************/ 
/*MT6167*/ #define    PA_DIRFT_COMPENSATION 0x00000000
/*MT6167*/
/*MT6167*/ /************************************************************/     
/*MT6167*/ /* For MPR back off for SAR& lowering PA temerature& UPA/DPA*/ 
/*MT6167*/ /* PAPR concern                                             */ 
/*MT6167*/ /************************************************************/ 
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND1  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND2  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND3  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND4  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND5  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND6  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND8  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND9  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND10 MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND11 MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSDPA_BAND19 MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND1  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND2  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND3  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND4  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND5  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND6  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND8  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND9  MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND10 MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND11 MPRSetting2
/*MT6167*/ #define    MPR_BACK_OFF_HSUPA_BAND19 MPRSetting2
/*MT6167*/            
/*MT6167*/ /************************************************************/     
/*MT6167*/ /* At MT6589+MT6320PMIC, Vrf18_1(MD1) can use bulk/LDO mode */
/*MT6167*/ /* take bulk mode as default value*/
/*MT6167*/ /************************************************************/  
/*MT6167*/
/*MT6167*/ #define    ULTRA_LOW_COST_EN KAL_FALSE
/*MT6167*/ 
/*MT6167*/ #define    VPA_mode          KAL_FALSE
/*MT6167*/
/*MT6167*/ #define    RX_HIGHBAND1_INDICATOR UMTSBand1
/*MT6167*/ #define    RX_HIGHBAND2_INDICATOR UMTSBand2
/*MT6167*/ #define    RX_HIGHBAND3_INDICATOR UMTSBandNone
/*MT6167*/ #define    RX_LOWBAND1_INDICATOR UMTSBandNone
/*MT6167*/ #define    RX_LOWBAND2_INDICATOR UMTSBand8

/*============================================================================== */

#endif
