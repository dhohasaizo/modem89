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
 *    ast_hif_hw_custom.c
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
 *============================================================================
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
#if defined(MT6589) && defined(__AST_TL1_TDD__)
#include "kal_public_api.h" //MSBB change #include "kal_release.h"
#include "intrCtrl.h" 
#include "drv_comm.h"
#include "dma_sw.h"
#include "dma_hw.h"
#include "dcl.h"
#include "gpio_sw.h"
#include "gpio_md.h"
#include "eint.h"
#include "l1_interface.h"
#include "ast_hif_hw.h"
#include "hif_hal.h"
#include "reg_base.h"
#include "ast_hif_hw.h"
#include "ast_hif_hw_custom.h"

#if defined(__ARMCC_VERSION)
#pragma O0
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#else
#endif

extern HIF_HANDLE ast_hif_hw_handle;
extern kal_bool SLA_Enable(void);

#ifdef __ANDROID_MODEM__
extern kal_int32 IPC_RPC_EINT_GetNumber(kal_uint8 *EintName, kal_uint32 EintNameLength, kal_uint32 *EintNo);
kal_uint32 ast_data_intr_num;
#endif //#ifdef __ANDROID_MODEM__

/*
static void GPIO_ModeSetup_(kal_uint16 pin, kal_uint16 mode)
{
    int base = GPIO_base + 0xC00 + (pin/5)*0x10;
    int mask = (0x7 << ((pin%5)*3));
    *(volatile unsigned short*)(base+8) = mask;
    *(volatile unsigned short*)(base+4) = (mode <<((pin%5)*3));
}

static void GPIO_InitIO_(char dir, char pin)
{
    int base = GPIO_base + (pin/16)*0x10;
    if (dir == 1)
        *(volatile unsigned short*)(base+4) = (1 << (pin%16));
    else
        *(volatile unsigned short*)(base+8) = (1 << (pin%16));        
}

static void GPIO_WriteIO_(char val, char pin)
{
    int base = GPIO_base + 0x800 + (pin/16)*0x10;
    if (val == 1)
        *(volatile unsigned short*)(base+4) = (1 << (pin%16));
    else
        *(volatile unsigned short*)(base+8) = (1 << (pin%16));            
}

static void GPIO_EnableInvert_(char val,char pin)
{
    int base = GPIO_base + 0x600 + (pin/16)*0x10;
    if (val == 1)
        *(volatile unsigned short*)(base+4) = (1 << (pin%16));
    else
        *(volatile unsigned short*)(base+8) = (1 << (pin%16));            
} 

static DCL_STATUS DclGPIO_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data)
{
    kal_char port; 
    port= 0x000000FF & handle;

    switch(cmd)
    {
    case GPIO_CMD_WRITE_LOW:
        {
            GPIO_WriteIO_(0, port);
            break;
        }
    case GPIO_CMD_WRITE_HIGH:
        {
            GPIO_WriteIO_(1, port);
            break;
        } 
    case GPIO_CMD_SET_MODE_0:
        {
            GPIO_ModeSetup_(port, 0);
            break;
        }
    case GPIO_CMD_SET_MODE_1:
        {
            GPIO_ModeSetup_(port, 1);
            break;
        }
    case GPIO_CMD_SET_MODE_2:
        {
            GPIO_ModeSetup_(port, 2);
            break;		   	  	
        }
    case GPIO_CMD_SET_MODE_3:
        {
            GPIO_ModeSetup_(port, 3);
            break;			   	  	
        }
    case GPIO_CMD_SET_MODE_4 :
        {
            GPIO_ModeSetup_(port, 4);
            break;
        }
    case GPIO_CMD_SET_MODE_5:
        {
            GPIO_ModeSetup_(port, 5);
            break;
        }
    case GPIO_CMD_SET_MODE_6:
        {
            GPIO_ModeSetup_(port, 6);
            break;	
        }
    case GPIO_CMD_SET_MODE_7:
        {
            GPIO_ModeSetup_(port, 7);
            break;	
        } 	  
    case GPIO_CMD_SET_DIR_OUT:
        {
            GPIO_InitIO_(1,port);
            break;
        }
    case GPIO_CMD_SET_DIR_IN:
        {
            GPIO_InitIO_(0,port);
            break;		   			
        }
	  case GPIO_CMD_SET_DINV:
        {
            GPIO_EnableInvert_((data->rSetDinv).fgSetDinv,port);
            break;		   			
        }
    }
}

static DCL_HANDLE DclGPIO_Open(DCL_DEV eDev, DCL_FLAGS flags)
{
    return (DCL_HANDLE)flags;
}

static DCL_STATUS DclGPIO_Close(DCL_HANDLE handle)
{
}
*/

AST_HIF_HW_RESULT ast_hif_hw_init(AST_HIF_HW_CONFIG_T* pConfigParam)
{
    DCL_HANDLE gpio_handle;
    GPIO_CTRL_RETURN_AP_T gpio_pin_num_data;
    ASSERT(pConfigParam != NULL);	

    SLA_Enable();
    
#ifndef __ANDROID_MODEM__  //For SP modem only load
    
    #if defined(__AST3001__)
    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_clk32k_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    ast_gpio_rst_pin = gpio_ast_rst_pin;
    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_rst_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_0,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);
    
    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_cs_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    ast_gpio_wakeup_pin = gpio_ast_wakeup_pin;
    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_wakeup_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_0,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_rd_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle); 

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_wr_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle); 

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_ad0_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_data0_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_data1_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_data2_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_data3_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_data4_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_data5_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_data6_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);

    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_data7_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_1,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_OUT,0);
    DclGPIO_Close(gpio_handle);
    #endif //#if defined(__AST3001__)
     
    ast_hif_port = AST_HIF_PORT;
#else
    // GPIO customization
    gpio_handle = DclGPIO_Open(DCL_GPIO, GPIO_AST_HIF_CS_ID);
    DclGPIO_Control(gpio_handle,GPIO_CMD_GET_AP_PIN,(DCL_CTRL_DATA_T*)&gpio_pin_num_data);
    DclGPIO_Close(gpio_handle);
    ast_hif_port = gpio_pin_num_data.u1RetApData;
    
    gpio_handle = DclGPIO_Open(DCL_GPIO, GPIO_AST_Reset);
    DclGPIO_Control(gpio_handle,GPIO_CMD_GET_AP_PIN,(DCL_CTRL_DATA_T*)&gpio_pin_num_data);
    DclGPIO_Close(gpio_handle);
    ast_gpio_rst_pin = gpio_pin_num_data.u1RetApData;
    
    gpio_handle = DclGPIO_Open(DCL_GPIO, GPIO_AST_Wakeup);
    DclGPIO_Control(gpio_handle,GPIO_CMD_GET_AP_PIN,(DCL_CTRL_DATA_T*)&gpio_pin_num_data);
    DclGPIO_Close(gpio_handle);
    ast_gpio_wakeup_pin = gpio_pin_num_data.u1RetApData;

    kal_wap_trace(MOD_TL1, TRACE_INFO, "AST GPIO Customization: GPIO_AST_HIF_CS_ID is %d", ast_hif_port);
    kal_wap_trace(MOD_TL1, TRACE_INFO, "AST GPIO Customization: GPIO_AST_Reset is %d", ast_gpio_rst_pin);
    kal_wap_trace(MOD_TL1, TRACE_INFO, "AST GPIO Customization: GPIO_AST_Wakeup is %d", ast_gpio_wakeup_pin);

#endif

    ast_hif_hw_set_gpio(1, ast_gpio_wakeup_pin);

    
    ast_hif_hw_handle = hif_open(ast_hif_port);
    
    ASSERT(ast_hif_hw_handle);
    
    ast_hif_hw_power_ctrl(KAL_TRUE);
    
    ast_hif_hw_config(pConfigParam);
    {
      HIF_ULTRA_HIGH_CTRL_T UltraHighCtrl;
      HIF_REALTIME_CALLBACK_T HifRealTimeCB;
      UltraHighCtrl.ultra_high_en = KAL_TRUE;
      hif_ioctl(ast_hif_hw_handle, HIF_IOCTL_ULTRA_HIGH_CTRL, &UltraHighCtrl);
      HifRealTimeCB.realtime_callback_en = KAL_TRUE;
      hif_ioctl(ast_hif_hw_handle, HIF_IOCTL_REALTIME_CALLBACK,&HifRealTimeCB);
    }
    
    ast_hif_hw_power_ctrl(KAL_FALSE);
    
    return AST_HIF_HW_RESULT_OK;    
}


AST_HIF_HW_RESULT ast_hif_hw_reg_eint(AST_HIF_HW_EINT_T* pEintParam)
{
    #if defined (__ANDROID_MODEM__)
    kal_uint32 deint_no;
    GPIO_CTRL_RETURN_AP_T gpio_pin_num_data;
    #endif
    
    DCL_HANDLE gpio_handle;   
    kal_uint8 IRQ_AST_DATAIN_CODE;

  #ifndef __ANDROID_MODEM__ 
    gpio_handle = DclGPIO_Open(DCL_GPIO,gpio_ast_intr_pin);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_MODE_5,0);
    DclGPIO_Control(gpio_handle,GPIO_CMD_SET_DIR_IN,0);
    DclGPIO_Close(gpio_handle);
      
    IRQ_AST_DATAIN_CODE = CEINT_2_CIRQCODE(AST_EINT_NO - 1); //GPIO: MD2_EINT4 -> MD2_EINT3 in EINT driver
      
  #else
    gpio_handle = DclGPIO_Open(DCL_GPIO, GPIO_AST_INT);
    DclGPIO_Control(gpio_handle,GPIO_CMD_GET_AP_PIN,(DCL_CTRL_DATA_T*)&gpio_pin_num_data);
    DclGPIO_Close(gpio_handle);
    ast_data_intr_num = gpio_pin_num_data.u1RetApData;
  
    if((127 == ast_data_intr_num) || (219 == ast_data_intr_num)) //GPIO127, GPIO219  -> MD2_EINT4
    	deint_no = 4; 
    else if((81 == ast_data_intr_num) || (123 == ast_data_intr_num)) //GPIO81, GPIO123  -> MD2_EINT5
    	deint_no = 5;
    else
    	ASSERT(0);  	
 
    IRQ_AST_DATAIN_CODE = CEINT_2_CIRQCODE(deint_no-1);
    
    kal_wap_trace(MOD_TL1, TRACE_INFO, "AST EINT Customization: AST_DATA_INTR num is %d", ast_data_intr_num); 
    
  #endif //#ifndef __ANDROID_MODEM__
    IRQ_Register_LISR(IRQ_AST_DATAIN_CODE, pEintParam->fINTCB, "AST Data IRQ");
    IRQSensitivity(IRQ_AST_DATAIN_CODE, LEVEL_SENSITIVE);
    IRQUnmask(IRQ_AST_DATAIN_CODE); 
  
    return AST_HIF_HW_RESULT_OK;
}

AST_HIF_HW_RESULT ast_hif_hw_set_gpio(char value, char pin)
{
    DCL_HANDLE handle;
    handle=DclGPIO_Open(DCL_GPIO, pin);	
    if(0==value)
        DclGPIO_Control(handle,GPIO_CMD_WRITE_LOW,0);
    else if(1==value)
        DclGPIO_Control(handle,GPIO_CMD_WRITE_HIGH,0);
    else
    {
        DclGPIO_Close(handle);
        ASSERT(0);
    }
    DclGPIO_Close(handle);
    return AST_HIF_HW_RESULT_OK;
}
#endif //defined(MT6589) && defined(__AST_TL1_TDD__)

