/*******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   rmmi_sio.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Serial Port Input/Output of RMMI
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *     HISTORY
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
 *==============================================================================
 ******************************************************************************/

/******************************************************************************/

#include "dcl.h"
#include "rmmi_sio.h"
#include "atci_trc.h"
#include "rmmi_context.h"

#if defined(__DUAL_TALK_MODEM_SUPPORT__)
#include "rmmi_utility.h"

extern const char gpio_dtk_wakeup_pin;
#endif

/*******************************************************************************
* FUNCTION
*  RMMI_UART_is_usb_cdc_acm
* DESCRIPTION
*  1.  to check if this is a normal 2T1R USB COM port
*  2. only support by USB COM driver
*  3. if the port is not USB port, then assume it is normal (be able to do CtrlDCD/DTR/RI and not cause exception)
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
kal_bool RMMI_UART_is_usb_cdc_acm(UART_PORT port)
{
#ifdef __USB_MULTIPLE_COMPORT_SUPPORT__
    USB_DRV_CTRL_COM_TYPE_QUERY_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);

    data.is_cdcacm = KAL_TRUE;
    DclSerialPort_Control(handle, USB_CMD_IS_CDCACM, (DCL_CTRL_DATA_T*) &data);

    return ((data.is_cdcacm==DCL_TRUE)?(KAL_TRUE):(KAL_FALSE));
#else
    return KAL_TRUE;
#endif  	
} /* MAUI_02738549: 2011/03/02, avoid dialup on 1T1R USB COM */


/*******************************************************************************
* FUNCTION
*  RMMI_UART_is_usb_active
* DESCRIPTION
*  1. to check if USB is still plug-in or not. 
*      If USB is in the suspend mode, it will send plug-out indication, too.
*      So we need this API to check it.
*  2. only support by USB COM driver
*  3. Called when we want to close UART port
*  4. If the port is not USB port, default is KAL_FALSE
*  5. This function could be used only when handling plug-out
* PARAMETERS
* 
* RETURNS
* KAL_TRUE   :   USB is reset and in the suspend mode
* KAL_FALSE  :   USB is plugout
* 
*******************************************************************************/
kal_bool RMMI_UART_is_usb_active(UART_PORT port)
{
    USB_DRV_CTRL_COM_TYPE_QUERY_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);

    data.is_cdcacm = KAL_FALSE;
    DclSerialPort_Control(handle, USB_CMD_IS_CDCACM_ACTIVE, (DCL_CTRL_DATA_T*) &data);

    kal_brief_trace(TRACE_INFO, INFO_RMMI_USB_ACTIVE, port, data.is_cdcacm);

    return ((data.is_cdcacm==DCL_TRUE)?(KAL_TRUE):(KAL_FALSE));
} /* MAUI_02738549: 2011/03/02, avoid dialup on 1T1R USB COM */


/*******************************************************************************
* FUNCTION
*  RMMI_UART_Close
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_Close(UART_PORT port, module_type ownerid)
{
    UART_CTRL_CLOSE_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);

    data.u4OwenrId = ownerid;
	//data.u4Port = port; // NEED_CONFIRM
    DclSerialPort_Control(handle, SIO_CMD_CLOSE, (DCL_CTRL_DATA_T*) &data);
}


/*******************************************************************************
* FUNCTION
*  RMMI_UART_ClrRxBuffer
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_ClrRxBuffer(UART_PORT port, module_type ownerid)
{
    UART_CTRL_CLR_BUFFER_T data;
	DCL_HANDLE handle = DclSerialPort_Open(port, 0);

	data.u4OwenrId = ownerid;
	//data.u4Port = port; //NEED_CONFIRM
	DclSerialPort_Control(handle, SIO_CMD_CLR_RX_BUF, (DCL_CTRL_DATA_T*) &data);
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_ClrTxBuffer
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_ClrTxBuffer(UART_PORT port, module_type ownerid)
{
    UART_CTRL_CLR_BUFFER_T data;
	DCL_HANDLE handle = DclSerialPort_Open(port, 0);

	data.u4OwenrId = ownerid;
	//data.u4Port = port; //NEED_CONFIRM
	DclSerialPort_Control(handle, SIO_CMD_CLR_TX_BUF, (DCL_CTRL_DATA_T*) &data);
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_ConfigEscape
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_ConfigEscape(UART_PORT port, kal_uint8 EscChar, kal_uint16 ESCGuardtime, module_type ownerid)
{
    UART_CTRL_CONFIG_ESP_T data;
	DCL_HANDLE handle = DclSerialPort_Open(port, 0);

	data.u4OwenrId = ownerid;
	//data.u4Port = port; //NEED_CONFIRM
	data.u2ESCGuardtime = ESCGuardtime;
	data.uEscChar = EscChar;
	DclSerialPort_Control(handle, SIO_CMD_CONFIG_ESCAPE, (DCL_CTRL_DATA_T*) &data);
}

#if 0 //no one use
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 

/*******************************************************************************
* FUNCTION
*  RMMI_UART_CtrlDCD
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_CtrlDCD(UART_PORT port, IO_level SDCD, module_type ownerid)
{
    UART_CTRL_DCD_T data;
	DCL_HANDLE handle = DclSerialPort_Open(port, 0);

#if defined(__USB_MULTIPLE_COMPORT_SUPPORT__)
    if (KAL_FALSE == RMMI_UART_is_usb_cdc_acm(port))
    {
        kal_brief_trace(TRACE_WARNING, WARNING_DIALUP_NOT_ALLOWED_ON_1T1R, port);
        return;
    }
#endif /* __USB_MULTIPLE_COMPORT_SUPPORT__ */

	data.u4OwenrId = ownerid;
	//data.u4Port = port; //NEED_CONFIRM
	data.rIOLevelDCD = (IO_LEVEL_T)SDCD;
	DclSerialPort_Control(handle, SIO_CMD_CTRL_DCD, (DCL_CTRL_DATA_T*) &data);
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_CtrlDTR
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_CtrlDTR(UART_PORT port, IO_level SDTR, module_type ownerid)
{
    UART_CTRL_DTR_T data;
	DCL_HANDLE handle = DclSerialPort_Open(port, 0);

	data.u4OwenrId = ownerid;
	//data.u4Port = port; //NEED_CONFIRM
	data.rIOLevelDTR = (IO_LEVEL_T) SDTR;
	DclSerialPort_Control(handle, SIO_CMD_CTRL_DTR, (DCL_CTRL_DATA_T*) &data);
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_CtrlRI
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_CtrlRI(UART_PORT port, IO_level SRI, module_type ownerid)
{
    UART_CTRL_RI_T data;
	DCL_HANDLE handle = DclSerialPort_Open(port, 0);

	data.u4OwenrId = ownerid;
	//data.u4Port = port; //NEED_CONFIRM
	data.rIOLevelSRI = (IO_LEVEL_T)SRI;
	DclSerialPort_Control(handle, SIO_CMD_CTRL_RI, (DCL_CTRL_DATA_T*) &data);
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_GetBytes
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
kal_uint16 RMMI_UART_GetBytes(UART_PORT port, kal_uint8 * Buffaddr, kal_uint16 Length, kal_uint8 * status, module_type ownerid)
{
    UART_CTRL_GET_BYTES_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);

    data.u2Length = Length;
    data.u4OwenrId = ownerid;
    data.puBuffaddr = Buffaddr;
	data.pustatus = status;
    DclSerialPort_Control(handle, SIO_CMD_GET_BYTES, (DCL_CTRL_DATA_T*) &data);
	//*status = *(data.pustatus);
    return data.u2RetSize;
}

#if 0 //no one use
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*******************************************************************************
* FUNCTION
*  RMMI_UART_GetOwnerID
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
module_type RMMI_UART_GetOwnerID(UART_PORT port)
{
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__)
    return MOD_ATCI;
#else
    UART_CTRL_OWNER_T data;
	DCL_HANDLE handle = DclSerialPort_Open(port, 0);

	//data.u4Port = port; //NEED_CONFIRM
	DclSerialPort_Control(handle, SIO_CMD_GET_OWNER_ID, (DCL_CTRL_DATA_T*) &data);

	return (module_type)(data.u4OwenrId);
#endif	
}

#if 0 //no one use
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*******************************************************************************
* FUNCTION
*  RMMI_UART_Open
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
kal_bool RMMI_UART_Open(UART_PORT port,module_type ownerid)
{
    UART_CTRL_OPEN_T data;
	DCL_STATUS result = STATUS_OK;
	DCL_HANDLE handle = DclSerialPort_Open(port, 0);

	//data.u4Port = port; //NEED_CONFIRM
	data.u4OwenrId = ownerid;
	result = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*) &data);

	return ((result == STATUS_OK)?(KAL_TRUE):(KAL_FALSE));
}

#if 0 //no one use
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*******************************************************************************
* FUNCTION
*  RMMI_UART_PutBytes
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
kal_uint16 RMMI_UART_PutBytes(UART_PORT port, kal_uint8 * Buffaddr, kal_uint16 Length, module_type ownerid)
{
    UART_CTRL_PUT_BYTES_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);
#if defined(__DUAL_TALK_MODEM_SUPPORT__)
    DCL_HANDLE gpio_handle;

    if (RMMI_PTR->wake_up_ap == KAL_FALSE)
    {
        kal_brief_trace(TRACE_INFO, INFO_PULL_GPIO, GPIO_CMD_WRITE_LOW);
        gpio_handle = DclGPIO_Open(DCL_GPIO, gpio_dtk_wakeup_pin);
        DclGPIO_Control(gpio_handle, GPIO_CMD_WRITE_LOW, NULL);
        rmmi_start_wakeup_timer_hdlr(RMMI_WAKE_UP_AP);
        RMMI_PTR->wake_up_ap = KAL_TRUE;
    }
#endif

    data.u2Length = Length;
    data.u4OwenrId = ownerid;
    data.puBuffaddr = Buffaddr;
    DclSerialPort_Control(handle, SIO_CMD_PUT_BYTES, (DCL_CTRL_DATA_T*) &data);

    return data.u2RetSize;
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_ReadDCBConfig
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_ReadDCBConfig(UART_PORT port, UART_CONFIG_T * DCB, module_type ownerid) //uart_hal_need_review
{
    UART_CTRL_DCB_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);

    //data.u4Port = port; //NEED_CONFIRM
    data.u4OwenrId = ownerid;
    DclSerialPort_Control(handle, SIO_CMD_READ_DCB_CONFIG, (DCL_CTRL_DATA_T*) &data);

    kal_mem_cpy((char*) DCB, (const char*)&(data.rUARTConfig), sizeof(UART_CONFIG_T));	
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_SetAutoBaud_Div
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_SetAutoBaud_Div(UART_PORT port, module_type ownerid)
{
    UART_CTRL_AUTO_BAUDDIV_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);

    //data.u4Port = port; //NEED_CONFIRM
    data.u4OwenrId = ownerid;
    DclSerialPort_Control(handle, SIO_CMD_SET_AUTOBAUD_DIV, (DCL_CTRL_DATA_T*) &data);
}

#if 0 //no one use
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*******************************************************************************
* FUNCTION
*  RMMI_UART_SetDCBConfig
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_SetDCBConfig(UART_PORT port, UART_CONFIG_T * UART_Config, module_type ownerid)
{
    UART_CTRL_DCB_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);

    //data.u4Port = port; //NEED_CONFIRM
	data.u4OwenrId = ownerid;
	kal_mem_cpy((char*)(&(data.rUARTConfig)), (const char*)UART_Config, sizeof(UART_CONFIG_T));
	
    DclSerialPort_Control(handle, SIO_CMD_SET_DCB_CONFIG, (DCL_CTRL_DATA_T*) &data);
}

#if 0 //no one use
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*******************************************************************************
* FUNCTION
*  RMMI_UART_GetFlowCtrl
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
UART_FLOW_CTRL_MODE_T RMMI_UART_GetFlowCtrl(UART_PORT uart_port)
{
    UART_CTRL_GET_FC_T data;
    DCL_HANDLE handle = DclSerialPort_Open(uart_port,0);
    DclSerialPort_Control(handle, UART_CMD_GET_FLOW_CONTROL, (DCL_CTRL_DATA_T*) &data);
	return (UART_FLOW_CTRL_MODE_T)(data.FlowCtrlMode);

//	return FC_NONE;
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_SetOwner
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_SetOwner(UART_PORT port, module_type ownerid)
{
    UART_CTRL_OWNER_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port, 0);    

    data.u4OwenrId = ownerid;
    DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, (DCL_CTRL_DATA_T*) &data);
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_SleepOnTx_Enable
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_SleepOnTx_Enable(UART_PORT port, UART_SLEEP_ON_TX enable_flag)
{
    UART_CTRL_SLEEP_ON_TX_ENABLE_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port, 0);    

    //data.u4Port = port; //NEED_CONFIRM
	data.bFlag = (UART_SLEEP_ON_TX_T)enable_flag;
    DclSerialPort_Control(handle, UART_CMD_SLEEP_TX_ENABLE, (DCL_CTRL_DATA_T*) &data);	
}

/*******************************************************************************
* FUNCTION
*  RMMI_UART_OpenWithPort
* DESCRIPTION
*  
*
* PARAMETERS
* 
* RETURNS
* 
* GLOBALS AFFECTED
* 
*******************************************************************************/
void RMMI_UART_OpenWithPort(UART_PORT APP_port, UART_PORT new_uart_port)
{
    UART_CTRL_DCB_T APP_port_dcb;
    UART_CTRL_CONFIG_ESP_T APP_port_escape;
    DCL_HANDLE APP_port_handle;
    module_type uart_owner;

    if (APP_port == new_uart_port)
    {
        return;
    }
    else
    {
        APP_port_handle = DclSerialPort_Open(APP_port,0);

        //APP_port_dcb.u4Port = *APP_port; //NEED_CONFIRM
        DclSerialPort_Control(APP_port_handle, SIO_CMD_READ_DCB_CONFIG, (DCL_CTRL_DATA_T*) &APP_port_dcb);	
        DclSerialPort_Control(APP_port_handle, SIO_CMD_GET_ESCAPE_INFO, (DCL_CTRL_DATA_T*) &APP_port_escape);
        uart_owner = RMMI_UART_GetOwnerID(APP_port);

        RMMI_UART_Open(new_uart_port, uart_owner);
        RMMI_UART_SetDCBConfig(new_uart_port, &(APP_port_dcb.rUARTConfig), uart_owner);
        RMMI_UART_ConfigEscape(new_uart_port, 
                APP_port_escape.uEscChar, APP_port_escape.u2ESCGuardtime, uart_owner);
    }
}

