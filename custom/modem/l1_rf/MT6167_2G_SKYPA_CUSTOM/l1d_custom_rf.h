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
 *   l1d_custom_rf.h
 *
 * Project:
 * --------
 *   MT6167
 *
 * Description:
 * ------------
 *   MT6167 2G RF constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#ifndef  _L1D_CUSTOM_RF_H_
#define  _L1D_CUSTOM_RF_H_
/* --------------------------------------------------------------------------- */

#if !defined(MT6167_2G_RF)
   #error "rf files mismatch with compile option!"
#endif

/*MT6167*/ /*--------------------------------------------------------*/
/*MT6167*/ /*   PA option                                            */
/*MT6167*/ /*--------------------------------------------------------*/
/*MT6167*/ #define  SKY77590
/*MT6167*/ //#define  RF3236
/*MT6167*/
/*--------------------------------------------------------*/
/*   Event Timing Define                                  */
/*--------------------------------------------------------*/
/*MT6167*/
/*MT6167*/ #define  QB_SR0               220
/*MT6167*/ #define  QB_SR1               194  /* SR1 should be smaller than (QB_SR1-25QB)           */
/*MT6167*/ #define  QB_SR2               58   /* SR2 should be larger  than (QB_RX_FENA_2_FSYNC+8QB)*/
/*MT6167*/ #define  QB_SR2M              22
/*MT6167*/ #define  QB_SR3               5    /* SR3 should be larger than (QB_RX_FSYNC_2_FENA+2QB) */
/*MT6167*/ #define  QB_PR1               222  /* QB_PR1>QB_SR0 to prevent RF conflict among 2/3G    */
/*MT6167*/ #define  QB_PR2               50
/*MT6167*/ #define  QB_PR3               7               
/*MT6167*/ #define  QB_ST0               280
/*MT6167*/ #define  QB_ST1               269  /* ST1  should be smaller than (QB_ST1-10QB)           */
/*MT6167*/ #define  QB_ST2B              33   /* ST2B should be larger  than (QB_TX_FENA_2_FSYNC+8QB)*/
/*MT6167*/ #define  QB_ST3               38   /* ST3  should be larger  than (QB_TX_FSYNC_2_FENA+7QB)*/
/*MT6167*/ #define  QB_PT1               282  /* QB_PT1>QB_ST1 to prevent RF conflict among 2/3G     */
/*MT6167*/ #define  QB_PT2               56
/*MT6167*/ #define  QB_PT2B              6
/*MT6167*/ #define  QB_PT3               40   //ori: 30  
/*MT6167*/ #define  QB_ST2M_G8           10
/*MT6167*/ #define  QB_ST2M_8G           6
/*MT6167*/ #define  QB_PT2M1_G8          -1
/*MT6167*/ #define  QB_PT2M2_G8          -3
/*MT6167*/ #define  QB_PT2M1_8G          10
/*MT6167*/ #define  QB_PT2M2_8G          4
/*MT6167*/
/*MT6167*/
/*MT6167*/ #define  QB_APCON             14 //OH:11
/*MT6167*/ #define  QB_APCMID            20 //OH:18
/*MT6167*/ #define  QB_APCOFF            6  //56: 6
/*MT6167*/ #define  QB_APCDACON          18 //0
/*MT6167*/ #define  TX_PROPAGATION_DELAY 48 //56:47 / OH:46
/*MT6167*/
/*MT6167*/
/*MT6167*/ /*--------------------------------------------------*/
/*MT6167*/ /*   define  BPI data for MT6167                    */
/*MT6167*/ /*--------------------------------------------------*/
/*MT6167*/ /*  PRCB : bit   pin                                */
/*MT6167*/ /*          0    ASM_VCTRL_A        (RF3236_BS2)    */
/*MT6167*/ /*          1    ASM_VCTRL_B        (RF3236_BS1)    */
/*MT6167*/ /*          2    ASM_VCTRL_C        (RF3236_MODE)   */
/*MT6167*/ /*          3    ASM_VCTRL_D        (B4PA_EN)       */
/*MT6167*/ /*          4    GGE_PA_ENABLE/MIPI (RF3236_TXEN)   */
/*MT6167*/ /*         17    GSM_ERR_DET_ID     (Pin: 14)       */
/*MT6167*/ /*--------------------------------------------------*/
/*MT6167*/
/*MT6167*/ /*------------------------------------------------------*/
/*MT6167*/ /*  GSM_ERR_DET_ID(Pin:14) has no dedicate output pin,  */
/*MT6167*/ /*  and it is mapped to bit "17" for SW control.        */
/*MT6167*/ /*  For accurate RF conflict detection, this value must */
/*MT6167*/ /*  set "17" and is unchangable.                        */
/*MT6167*/ /*------------------------------------------------------*/
/*MT6167*/ #define  GSM_ERR_DET_ID         (               17) /* For accurate RF conflict detection, this value must set "17" */
/*MT6167*/                                                     /* and is unchangable.                                          */           
/*MT6167*/ #define  PDATA_GSM_ERR_DET      (1<<GSM_ERR_DET_ID)  
/*MT6167*/
/*MT6167*/ #define  PDATA_GMSK              0x00000
/*MT6167*/ #define  PDATA_8PSK              0x00004
/*MT6167*/ 
/*MT6167*/ /*SKY77590*/ #ifdef   SKY77590
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PR1       (0x00           |PDATA_GSM_ERR_DET) /* Co-banding with 3G B5 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PR2       (0x07           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PR3       (0x00                             )
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PR1          (0x00           |PDATA_GSM_ERR_DET) /* Co-banding with 3G B8 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PR2          (0x06           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PR3          (0x00                             )
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PR1          (0x00           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PR2          (0x04           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PR3          (0x00                             )
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PR1          (0x00           |PDATA_GSM_ERR_DET) /* Co-banding with 3G B2 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PR2          (0x02           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PR3          (0x00                             )
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PT1       (0x00           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x82 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PT2       (0x01           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x82 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PT2B      (0x11           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PT3       (0x00                             )
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PT2M1_G8  (0x11|PDATA_8PSK|PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PT2M2_G8  (0x11|PDATA_8PSK|PDATA_GSM_ERR_DET) 
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PT2M1_8G  (0x01           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM850_PT2M2_8G  (0x11           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PT1          (0x00           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x82 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PT2          (0x01           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x82 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PT2B         (0x11           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PT3          (0x00                             )
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PT2M1_G8     (0x11|PDATA_8PSK|PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PT2M2_G8     (0x11|PDATA_8PSK|PDATA_GSM_ERR_DET) 
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PT2M1_8G     (0x01           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_GSM_PT2M2_8G     (0x11           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PT1          (0x00           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x81 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PT2          (0x03           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x81 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PT2B         (0x13           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PT3          (0x00                             )
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PT2M1_G8     (0x13|PDATA_8PSK|PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PT2M2_G8     (0x13|PDATA_8PSK|PDATA_GSM_ERR_DET) 
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PT2M1_8G     (0x03           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_DCS_PT2M2_8G     (0x13           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PT1          (0x00           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x81 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PT2          (0x03           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x81 */
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PT2B         (0x13           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PT3          (0x00                             )
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PT2M1_G8     (0x13|PDATA_8PSK|PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PT2M2_G8     (0x13|PDATA_8PSK|PDATA_GSM_ERR_DET) 
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PT2M1_8G     (0x03           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_PCS_PT2M2_8G     (0x13           |PDATA_GSM_ERR_DET)
/*MT6167*/ /*SKY77590*/ #define  PDATA_INIT             (0x00                             )
/*MT6167*/ /*SKY77590*/ #define  PDATA_IDLE             (0x00                             )
/*MT6167*/
/*MT6167*/ #else
/*MT6167*/ #define  PDATA_GSM850_PR1       (0x00           |PDATA_GSM_ERR_DET) /* Co-banding with 3G B5 */
/*MT6167*/ #define  PDATA_GSM850_PR2       (0x06           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_GSM850_PR3       (0x00                             )
/*MT6167*/ #define  PDATA_GSM_PR1          (0x00           |PDATA_GSM_ERR_DET) /* Co-banding with 3G B8 */
/*MT6167*/ #define  PDATA_GSM_PR2          (0x02           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_GSM_PR3          (0x00                             )
/*MT6167*/ #define  PDATA_DCS_PR1          (0x00           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_DCS_PR2          (0x05           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_DCS_PR3          (0x00                             )
/*MT6167*/ #define  PDATA_PCS_PR1          (0x00           |PDATA_GSM_ERR_DET) /* Co-banding with 3G B2 */
/*MT6167*/ #define  PDATA_PCS_PR2          (0x04           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_PCS_PR3          (0x00                             )
/*MT6167*/ #define  PDATA_GSM850_PT1       (0x00           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x82 */
/*MT6167*/ #define  PDATA_GSM850_PT2       (0x03           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x82 */
/*MT6167*/ #define  PDATA_GSM850_PT2B      (0x12           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_GSM850_PT3       (0x00                             )
/*MT6167*/ #define  PDATA_GSM850_PT2M1_G8  (0x12|PDATA_8PSK|PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_GSM850_PT2M2_G8  (0x12|PDATA_8PSK|PDATA_GSM_ERR_DET) 
/*MT6167*/ #define  PDATA_GSM850_PT2M1_8G  (0x02           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_GSM850_PT2M2_8G  (0x12           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_GSM_PT1          (0x00           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x82 */
/*MT6167*/ #define  PDATA_GSM_PT2          (0x03           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x82 */
/*MT6167*/ #define  PDATA_GSM_PT2B         (0x12           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_GSM_PT3          (0x00                             )
/*MT6167*/ #define  PDATA_GSM_PT2M1_G8     (0x12|PDATA_8PSK|PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_GSM_PT2M2_G8     (0x12|PDATA_8PSK|PDATA_GSM_ERR_DET) 
/*MT6167*/ #define  PDATA_GSM_PT2M1_8G     (0x02           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_GSM_PT2M2_8G     (0x12           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_DCS_PT1          (0x00           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x81 */
/*MT6167*/ #define  PDATA_DCS_PT2          (0x03           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x81 */
/*MT6167*/ #define  PDATA_DCS_PT2B         (0x11           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_DCS_PT3          (0x00                             )
/*MT6167*/ #define  PDATA_DCS_PT2M1_G8     (0x11|PDATA_8PSK|PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_DCS_PT2M2_G8     (0x11|PDATA_8PSK|PDATA_GSM_ERR_DET) 
/*MT6167*/ #define  PDATA_DCS_PT2M1_8G     (0x01           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_DCS_PT2M2_8G     (0x11           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_PCS_PT1          (0x00           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x81 */
/*MT6167*/ #define  PDATA_PCS_PT2          (0x03           |PDATA_GSM_ERR_DET) /* 0x83 for good isolation, ori:0x81 */
/*MT6167*/ #define  PDATA_PCS_PT2B         (0x11           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_PCS_PT3          (0x00                             )
/*MT6167*/ #define  PDATA_PCS_PT2M1_G8     (0x11|PDATA_8PSK|PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_PCS_PT2M2_G8     (0x11|PDATA_8PSK|PDATA_GSM_ERR_DET) 
/*MT6167*/ #define  PDATA_PCS_PT2M1_8G     (0x01           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_PCS_PT2M2_8G     (0x11           |PDATA_GSM_ERR_DET)
/*MT6167*/ #define  PDATA_INIT             (0x00                             )
/*MT6167*/ #define  PDATA_IDLE             (0x00                             )
/*MT6167*/ #endif
/*MT6167*/
/*MT6167*//*----------------------------------------------*/
/*MT6167*//*   APC Compensate Thresholds                  */
/*MT6167*//*----------------------------------------------*/
/*MT6167*/
/*MT6167*/ #define    SECONDS2FRAME(n)                     ((int)((n)*1000/4.615))
/*MT6167*/ #define    VOLT2UVOLT(n)                        ((int)((n)*1000000))
/*MT6167*/ #define    TEMP2MTEMP(n)                        ((int)((n)*1000))
/*MT6167*/
/*MT6167*/ #define    BAT_VOLTAGE_SAMPLE_PERIOD            SECONDS2FRAME(180)
/*MT6167*/ #define    BAT_VOLTAGE_AVERAGE_COUNT            1
/*MT6167*/ #define    BAT_LOW_VOLTAGE                      VOLT2UVOLT(3.5)
/*MT6167*/ #define    BAT_HIGH_VOLTAGE                     VOLT2UVOLT(4.0)
/*MT6167*/
/*MT6167*/ #define    BAT_TEMPERATURE_SAMPLE_PERIOD        SECONDS2FRAME(180)
/*MT6167*/ #define    BAT_TEMPERATURE_AVERAGE_COUNT        1
/*MT6167*/ #define    BAT_LOW_TEMPERATURE                  TEMP2MTEMP(0)
/*MT6167*/ #define    BAT_HIGH_TEMPERATURE                 TEMP2MTEMP(50)
/*MT6167*/
/*MT6167*/ #define    RF_TEMPERATURE_SAMPLE_PERIOD         SECONDS2FRAME(1)
/*MT6167*/ #define    RF_TEMPERATURE_AVERAGE_COUNT         1
/*MT6167*/
/*MT6167*//*----------------------------------------------*/
/*MT6167*//*   Crystal parameter                          */
/*MT6167*//*----------------------------------------------*/
/*MT6167*/ #if  IS_AFC_VCXO_SUPPORT
/*MT6167*/ #define Custom_RF_XO_CapID   156 /* RF SOP, Range:0~255 */
/*MT6167*/ #else
/*MT6167*/ #define Custom_RF_XO_CapID   0   /* For MT6167 with VCTCXO */
/*MT6167*/ #endif
/*MT6167*/
/*MT6167*/ /**************************************/
/*MT6167*/ /* Define your band mode selection on */
/*MT6167*/ /* High Band and Low Band receivers   */
/*MT6167*/ /*        LNA_1 : High Band           */
/*MT6167*/ /*        LNA_2 : Low  Band           */
/*MT6167*/ /*        LNA_3 : High Band           */
/*MT6167*/ /*        LNA_4 : Low  Band           */
/*MT6167*/ /*        LNA_5 : High Band           */
/*MT6167*/ /**************************************/
/*MT6167*/
/*MT6167*/ #define GSM850_PATH_SEL LNA_2 /* co-band with 3G band5 */
/*MT6167*/ #define GSM_PATH_SEL    LNA_4 /* co-band with 3G band8 */
/*MT6167*/ #define DCS_PATH_SEL    LNA_5
/*MT6167*/ #define PCS_PATH_SEL    LNA_1 /* co-band with 3G band2 */
/*MT6167*/
/*MT6167*//*======================================================================================== */
/*MT6167*/
/*MT6167*/ /*----------------------------------------------*/
/*MT6167*/ /*   TX Power Control (TXPC) Support            */
/*MT6167*/ /*----------------------------------------------*/
/*MT6167*/
/*MT6167*/ #define IS_BSI_CLOSED_LOOP_TXPC_ON      0
/*MT6167*/
/*MT6167*/ #define TXPC_EPSK_TP_SLOPE_LB          ((25<<8)+29) /* Unit: degree/dB. Temperature increment that causes 1-dB EPSK TX power drop */
/*MT6167*/ #define TXPC_EPSK_TP_SLOPE_HB          ((30<<8)+27) /* Two slope method : [( temp<20:slpoe1)<<8 + (temp>=20:slpoe2)], slope must < 256 */
/*MT6167*/
/*MT6167*/ /*----------------------------------------------*/
/*MT6167*/ /*   DCXO LPM parameter                         */
/*MT6167*/ /*----------------------------------------------*/
/*MT6167*/ #define CUSTOM_CLOAD_FREQ_OFFSET   88940 /*in unit of Hz*/
/*MT6167*/
/*MT6167*/ /*----------------------------------------------------*/
/*MT6167*/ /*   Enable or disable the clock1, 2, 3, and 4 output */
/*MT6167*/ /*   1 : Enable                                       */
/*MT6167*/ /*   0 : Disable                                      */
/*MT6167*/ /*----------------------------------------------------*/
/*MT6167*/ #define CLK1_EN                         1 /* CLK1 is enabled for BB */
/*MT6167*/ #define CLK2_EN                         0
/*MT6167*/ #define CLK3_EN                         1
/*MT6167*/ #define CLK4_EN                         1
/*MT6167*/
/*MT6167*/ /*----------------------------------------------*/
/*MT6167*/ /*   TX power rollback parameter                */
/*MT6167*/ /*----------------------------------------------*/
/*MT6167*/ /*Unit: 1/8 dB*/
/*MT6167*/ /*GSM850 GMSK*/
/*MT6167*/ #define GSM850_TX_ROLLBACK_2T_GMSK      8
/*MT6167*/ #define GSM850_TX_ROLLBACK_3T_GMSK     24
/*MT6167*/ #define GSM850_TX_ROLLBACK_4T_GMSK     32
/*MT6167*/ #define GSM850_TX_ROLLBACK_5T_GMSK     40
/*MT6167*/ 
/*MT6167*/ /*GSM GMSK*/
/*MT6167*/ #define GSM_TX_ROLLBACK_2T_GMSK         8
/*MT6167*/ #define GSM_TX_ROLLBACK_3T_GMSK        24
/*MT6167*/ #define GSM_TX_ROLLBACK_4T_GMSK        32
/*MT6167*/ #define GSM_TX_ROLLBACK_5T_GMSK        40
/*MT6167*/ 
/*MT6167*/ /*DCS GMSK*/
/*MT6167*/ #define DCS_TX_ROLLBACK_2T_GMSK         8
/*MT6167*/ #define DCS_TX_ROLLBACK_3T_GMSK        24
/*MT6167*/ #define DCS_TX_ROLLBACK_4T_GMSK        32
/*MT6167*/ #define DCS_TX_ROLLBACK_5T_GMSK        40
/*MT6167*/ 
/*MT6167*/ /*PCS GMSK*/
/*MT6167*/ #define PCS_TX_ROLLBACK_2T_GMSK         8
/*MT6167*/ #define PCS_TX_ROLLBACK_3T_GMSK        24
/*MT6167*/ #define PCS_TX_ROLLBACK_4T_GMSK        32
/*MT6167*/ #define PCS_TX_ROLLBACK_5T_GMSK        40
/*MT6167*/ 
/*MT6167*/ /*GSM850 EPSK*/
/*MT6167*/ #define GSM850_TX_ROLLBACK_2T_EPSK      8
/*MT6167*/ #define GSM850_TX_ROLLBACK_3T_EPSK     24
/*MT6167*/ #define GSM850_TX_ROLLBACK_4T_EPSK     32
/*MT6167*/ #define GSM850_TX_ROLLBACK_5T_EPSK     40
/*MT6167*/ 
/*MT6167*/ /*GSM EPSK*/
/*MT6167*/ #define GSM_TX_ROLLBACK_2T_EPSK         8
/*MT6167*/ #define GSM_TX_ROLLBACK_3T_EPSK        24
/*MT6167*/ #define GSM_TX_ROLLBACK_4T_EPSK        32
/*MT6167*/ #define GSM_TX_ROLLBACK_5T_EPSK        40
/*MT6167*/ 
/*MT6167*/ /*DCS EPSK*/
/*MT6167*/ #define DCS_TX_ROLLBACK_2T_EPSK         8
/*MT6167*/ #define DCS_TX_ROLLBACK_3T_EPSK        24
/*MT6167*/ #define DCS_TX_ROLLBACK_4T_EPSK        32
/*MT6167*/ #define DCS_TX_ROLLBACK_5T_EPSK        40
/*MT6167*/ 
/*MT6167*/ /*PCS EPSK*/
/*MT6167*/ #define PCS_TX_ROLLBACK_2T_EPSK         8
/*MT6167*/ #define PCS_TX_ROLLBACK_3T_EPSK        24
/*MT6167*/ #define PCS_TX_ROLLBACK_4T_EPSK        32
/*MT6167*/ #define PCS_TX_ROLLBACK_5T_EPSK        40
/*MT6167*/ /*============================================================================== */
/*MT6167*/
/*MT6167*/ /*----------------------------------------------*/
/*MT6167*/ /*   One-bin Support Definition                 */
/*MT6167*/ /*----------------------------------------------*/
/*MT6167*/
/*MT6167*/ #define L1D_CUSTOM_DYNAMIC_SUPPORT        (L1D_CUSTOM_GPIO_ENABLE|L1D_CUSTOM_ADC_ENABLE|L1D_CUSTOM_BARCODE_ENABLE)
/*MT6167*/
/*MT6167*/ /* Constants to enable "Dynamic Initialization RF parameters" mechanism                 */
/*MT6167*/ #define L1D_CUSTOM_GPIO_ENABLE            0
/*MT6167*/ #define L1D_CUSTOM_ADC_ENABLE             0
/*MT6167*/ #define L1D_CUSTOM_BARCODE_ENABLE         0
/*MT6167*/
/*MT6167*/ /* Constants to define number of sets can be represented by each mechanism respectively */
/*MT6167*/ #define L1D_CUSTOM_GPIO_SET_NUMS          2
/*MT6167*/ #define L1D_CUSTOM_ADC_SET_NUMS           2
/*MT6167*/ #define L1D_CUSTOM_BARCODE_SET_NUMS       2
/*MT6167*/
/*MT6167*/ /* Constants to first, second, and third index for the representation in configuration  */
/*MT6167*/ /* set index table                                                                      */
/*MT6167*/
/*MT6167*/ /* The value can be set:                                                                */
/*MT6167*/ /* L1D_CUSTOM_GPIO_DETECTION_ID                                                         */
/*MT6167*/ /* L1D_CUSTOM_ADC_DETECTION_ID                                                          */
/*MT6167*/ /* L1D_CUSTOM_BARCODE_DETECTION_ID                                                      */
/*MT6167*/ /* L1D_CUSTOM_NULL_ACTION                                                               */
/*MT6167*/ /* Note:                                                                                */
/*MT6167*/ /* 1. Should not define L1D_CUSTOM_FIRST_INDEX to L1D_CUSTOM_NULL_ACTION                */
/*MT6167*/ /*    while L1D_CUSTOM_SECOND_INDEX or L1D_CUSTOM_THIRD_INDEX is not L1D_CUSTOM_NULL_ACTION */
/*MT6167*/ /* 2. Should not define L1D_CUSTOM_SECOND_INDEX or L1D_CUSTOM_FIRST_INDEX to            */
/*MT6167*/ /*    L1D_CUSTOM_NULL_ACTION while L1D_CUSTOM_THIRD_INDEX is not L1D_CUSTOM_NULL_ACTION */
/*MT6167*/ #define L1D_CUSTOM_FIRST_INDEX            L1D_CUSTOM_NULL_ACTION
/*MT6167*/ #define L1D_CUSTOM_SECOND_INDEX           L1D_CUSTOM_NULL_ACTION
/*MT6167*/ #define L1D_CUSTOM_THIRD_INDEX            L1D_CUSTOM_NULL_ACTION
/*MT6167*/
/*MT6167*/ /* For trace output to debug ( L1D_CustomDynamicDebug() )                               */
/*MT6167*/ #define L1D_CUSTOM_DEBUG_ENABLE           0
/*MT6167*/
/*MT6167*/ /*------*/
/*MT6167*/ /* GPIO */
/*MT6167*/ /*------*/
/*MT6167*/ /* Customization constant to be used for customer to determine the number of GPIO       */
/*MT6167*/ /* detection pins in use                                                                */
/*MT6167*/ #define L1D_CUSTOM_GPIO_NUM_OF_DETECT_PINS_IN_USE    1
/*MT6167*/ /*--------------------------------------------------------------------------------------*/
/*MT6167*/
/*MT6167*/ /*-----*/
/*MT6167*/ /* ADC */
/*MT6167*/ /*-----*/
/*MT6167*/ /*Customization constant to be used for customer to determine the bits of ADC in use    */
/*MT6167*/ #define L1D_CUSTOM_ADC_BITS                          12      // ADC is 12 bit (1/4096) per step
/*MT6167*/
/*MT6167*/ /* Constant to be used to determine the maximum input voltage on the board              */
/*MT6167*/ /* (in micro volt unit)                                                                 */
/*MT6167*/ #define L1D_CUSTOM_ADC_MAX_INPUT_VOLTAGE             1500000 // uV
/*MT6167*/
/*MT6167*/ /* Customization constant to be used for customer to determine the inaccuracy margin    */
/*MT6167*/ /* on the board (in micro volt unit)                                                    */
/*MT6167*/ #define L1D_CUSTOM_ADC_INACCURACY_MARGIN             25000   // uV uint
/*MT6167*/
/*MT6167*/ /* Constant to be used to determine the each step level of ADC voltage to level         */
/*MT6167*/ /* look-up table on the board (in micro volt unit)                                      */
/*MT6167*/ /* L1D_CUSTOM_ADC_VOLT_LVL_RESOLUTION_THRESHOLD - two times inaccuracy margin           */
/*MT6167*/ /* L1D_CUSTOM_ADC_VOLT_LVL_STEP_SIZE            - step size of consecutive levels       */
/*MT6167*/ /* L1D_CUSTOM_ADC_VOLT_LVL_MIN_LVL_STEP         - the first level upper bound to 0 volt */
/*MT6167*/ #define L1D_CUSTOM_ADC_VOLT_LVL_RESOLUTION_THRESHOLD (L1D_CUSTOM_ADC_INACCURACY_MARGIN * 2)
/*MT6167*/ #define L1D_CUSTOM_ADC_VOLT_LVL_STEP_SIZE            ((L1D_CUSTOM_ADC_MAX_INPUT_VOLTAGE) / (L1D_CUSTOM_ADC_LEVEL_TOTAL-1))
/*MT6167*/ #define L1D_CUSTOM_ADC_VOLT_LVL_MIN_LVL_STEP         (L1D_CUSTOM_ADC_VOLT_LVL_STEP_SIZE / 2)
/*MT6167*/
/*MT6167*/ /* Sample of ADC votlage to level look-up table                                         */
/*MT6167*/
/*MT6167*/ /* ADC levels - 4                                                                       */
/*MT6167*/ /* Level   Upper(uV)       Lower(uV)                                                    */
/*MT6167*/ /* 0       250000          0                                                            */
/*MT6167*/ /* 1       750000          250000                                                       */
/*MT6167*/ /* 2       1250000         750000                                                       */
/*MT6167*/ /* 3       1500000         1250000                                                      */
/*MT6167*/
/*MT6167*/ /* Customization constant to be used for customer to determine number of ADC levels to  */
/*MT6167*/ /* be used to distinguish between the RF HW configurations                              */
/*MT6167*/
/*MT6167*/ #define L1D_CUSTOM_ADC_LEVEL_TOTAL        4
/*MT6167*/
/*MT6167*/ /* Customization constant to be used for customer to determine number of ADC channel    */
/*MT6167*/ /* measurement counts (in 2's order) ex: 7 => 2^7 = 128                                 */
/*MT6167*/ #define L1D_CUSTOM_ADC_MEAS_COUNT_2_ORDER 7 //2^7 = 128
/*MT6167*/
/*MT6167*/ #define L1D_CUSTOM_ADC_LVL0               (L1D_CUSTOM_ADC_VOLT_LVL_MIN_LVL_STEP)
/*MT6167*/ #define L1D_CUSTOM_ADC_LVL1               (L1D_CUSTOM_ADC_LVL0 + L1D_CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
/*MT6167*/ #define L1D_CUSTOM_ADC_LVL2               (L1D_CUSTOM_ADC_LVL1 + L1D_CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
/*MT6167*/ #define L1D_CUSTOM_ADC_LVL3               (L1D_CUSTOM_ADC_LVL2 + L1D_CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
/*MT6167*/ #define L1D_CUSTOM_ADC_LVL4               (L1D_CUSTOM_ADC_LVL3 + L1D_CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
/*MT6167*/ #define L1D_CUSTOM_ADC_LVL5               (L1D_CUSTOM_ADC_LVL4 + L1D_CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
/*MT6167*/ #define L1D_CUSTOM_ADC_LVL6               (L1D_CUSTOM_ADC_LVL5 + L1D_CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
/*MT6167*/ /*--------------------------------------------------------------------------------------*/
/*MT6167*/
/*MT6167*/ /*---------*/
/*MT6167*/ /* BarCode */
/*MT6167*/ /*---------*/
/*MT6167*/ /* Customization constant to be used for customer to determine the n-th digit of        */
/*MT6167*/ /* UE barcode to detect the RF configurations; n starts from 0                          */
/*MT6167*/ #define L1D_CUSTOM_BARCODE_READ_DIGIT_NUM 0
/*MT6167*/
/*MT6167*/ /* Customization constant to be used for customer to determine at most three (for now)  */
/*MT6167*/ /* kinds of ASM representation barcode digit number (in ASCII) to detect the RF         */
/*MT6167*/ /* configurations                                                                       */
/*MT6167*/ #define L1D_CUSTOM_BARCODE_DIGIT_VALUE_1  0
/*MT6167*/ #define L1D_CUSTOM_BARCODE_DIGIT_VALUE_2  1
/*MT6167*/ #define L1D_CUSTOM_BARCODE_DIGIT_VALUE_3  2
/*MT6167*/ /*--------------------------------------------------------------------------------------*/
/*MT6167*/
/*MT6167*/ /* Constants for the second and third index base to be calculated */
/*MT6167*/ #if L1D_CUSTOM_GPIO_ENABLE
/*MT6167*/ #define L1D_CUSTOM_GPIO_NUMS_IN_CALC      L1D_CUSTOM_GPIO_SET_NUMS
/*MT6167*/ #else
/*MT6167*/ #define L1D_CUSTOM_GPIO_NUMS_IN_CALC      1
/*MT6167*/ #endif
/*MT6167*/
/*MT6167*/ #if L1D_CUSTOM_ADC_ENABLE
/*MT6167*/ #define L1D_CUSTOM_ADC_NUMS_IN_CALC       L1D_CUSTOM_ADC_SET_NUMS
/*MT6167*/ #else
/*MT6167*/ #define L1D_CUSTOM_ADC_NUMS_IN_CALC       1
/*MT6167*/ #endif
/*MT6167*/
/*MT6167*/ #if L1D_CUSTOM_BARCODE_ENABLE
/*MT6167*/ #define L1D_CUSTOM_BARCODE_NUMS_IN_CALC   L1D_CUSTOM_BARCODE_SET_NUMS
/*MT6167*/ #else
/*MT6167*/ #define L1D_CUSTOM_BARCODE_NUMS_IN_CALC   1
/*MT6167*/ #endif
/*MT6167*/
/*MT6167*/ #define L1D_CUSTOM_TOTAL_SET_NUMS         L1D_CUSTOM_GPIO_NUMS_IN_CALC*L1D_CUSTOM_ADC_NUMS_IN_CALC*L1D_CUSTOM_BARCODE_NUMS_IN_CALC
/*MT6167*/
/*MT6167*/ /* Customization constant to be used for customer to determine if the AuxADC calibration*/
/*MT6167*/ /* is enabled or not                                                                    */
/*MT6167*/ #define L1D_CUSTOM_ADC_CALIBRATE_ENABLE   0
#endif

