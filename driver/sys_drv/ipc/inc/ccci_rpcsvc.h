/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ccci_rpcsvc.h
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   Header file of ipc_rpc_cpsvc
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/




#ifndef __CCCI_RPCSVC_H__
#define __CCCI_RPCSVC_H__

#if defined(__MODEM_CCCI_EXIST__)

/*******************************************************************************
 * RPC op code
 *******************************************************************************/
typedef enum
{
    IPC_RPC_CPSVC_SECURE_ALGO_OP	= 0x2001,
    IPC_RPC_GET_SECURE_RO_OP		= 0x2002,

    IPC_RPC_EINT_GETNUM_OP			= 0x4001,
    IPC_RPC_GPIO_GETPIN_OP			= 0x4002,
    IPC_RPC_ADC_GETNUM_OP			= 0x4003,
    IPC_RPC_QUERY_EMI_OP			= 0x4004,
    IPC_RPC_EINT_GETATTRIBUTE_OP	= 0x4005

} IPC_RPC_OP_ID_T;

/*******************************************************************************
 * Declare function prototype.
 *******************************************************************************/
kal_int32 IPC_RPC_Secure_Algo (kal_uint8 Direction, kal_uint32 ContentAddr,
                               kal_uint32 ContentLen, kal_uint8 *CustomSeed,
                               kal_uint8 *ResText);

kal_int32 IPC_RPC_Get_Secure_RO(kal_uint8* ResText, kal_uint32 ResLen);


kal_int32 IPC_RPC_EINT_GetNumber(kal_uint8 *EintName, kal_uint32 EintNameLength,
                                 kal_uint32 *EintNo);

kal_int32 IPC_RPC_GPIO_GetPin(kal_uint8 *GPIOName, kal_uint32 GPIONameLength, kal_uint32 *GPIOPin);

kal_int32 IPC_RPC_ADC_GetChannelNumber(kal_uint8 *ChannelName, kal_uint32 ChannelNameLength, kal_uint32 *ChannelNumber);

kal_int32 IPC_RPC_Query_EMI(kal_uint32 *EMIType, kal_uint32 *ClockRate);

#if defined(__SIM_HOT_SWAP_SUPPORT__)
kal_int32 IPC_RPC_EINT_GetAttribute (kal_uint8 *EintName, kal_uint32 EintNameLength, kal_uint32 queryType, void *result, kal_uint32 resultLength);
#endif

#endif  /* __MODEM_CCCI_EXIST__ */

#endif  /* __CCCI_RPCSVC_H__ */


