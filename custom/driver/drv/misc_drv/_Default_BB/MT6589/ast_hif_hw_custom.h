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
 *    ast_hif_hw_custom.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file contains customization code for AST HIF.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================*/

#ifndef __HIF_HW_CUSTOM_H__
#define __HIF_HW_CUSTOM_H__

#if defined(MT6589) && defined(__AST_TL1_TDD__)


//Using for MD only load
#ifndef __ANDROID_MODEM__
#if defined(__AST3001__)    ////for MT6583+AST3001E2 TDD project
static char gpio_ast_rst_pin          = 116;  //EINT11_AUXIN3
static char gpio_ast_cs_pin           = 12;   //NCEB1
static char gpio_ast_clk32k_pin       = 56;   //RTC32k_CK
static char gpio_ast_wakeup_pin       = 128;  //EINT9
static char gpio_ast_intr_pin         = 127;  //EINT8 ->(MD2: EINT4)
static char gpio_ast_rd_pin           = 16;   //NREB
static char gpio_ast_wr_pin           = 17;   //NWEB
static char gpio_ast_ad0_pin          = 15;   //NALE <-> LPA0
static char gpio_ast_data0_pin        = 18;   //NLD0
static char gpio_ast_data1_pin        = 19;   //NLD1
static char gpio_ast_data2_pin        = 20;   //NLD2
static char gpio_ast_data3_pin        = 21;   //NLD3
static char gpio_ast_data4_pin        = 22;   //NLD4
static char gpio_ast_data5_pin        = 23;   //NLD5
static char gpio_ast_data6_pin        = 24;   //NLD6
static char gpio_ast_data7_pin        = 25;   //NLD7

static unsigned char AST_EINT_NO      = 4; //EINT8 -> MD2_EINT4
#define AST_HIF_PORT                1

#else
#error: Current TD Chip is not support!
#endif //if defined(__AST3001__)
#endif //#ifndef __ANDROID_MODEM__

#define AST_TL1_SW_LISR_CODE        SW_TRIGGER_CODE1
#define AST_HIF_SW_LISR_CODE        SW_TRIGGER_CODE2

#define AST_HIF_HW_INIT_BY_PROJECT
#define AST_HIF_HW_REG_EINT_BY_PROJECT
#define AST_HIF_HW_SET_GPIO_BY_PROJECT

#endif //defined(MT6589) && defined(__AST_TL1_TDD__)

#endif //__HIF_HW_CUSTOM_H__
