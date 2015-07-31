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
 *   ccci_int.h
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   Header file of CCIF.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __CCCI_INT_H__
#define __CCCI_INT_H__

#if defined(__MODEM_CCCI_EXIST__)

/*******************************************************************************
 * Define data structure.
 *******************************************************************************/
typedef enum
{
    CCCI_IDLE_TASK_DCM_ENTER = 0,
    CCCI_IDLE_TASK_DCM_LEAVE,
    CCCI_IDLE_TASK_SLEEP_ENTER,
    CCCI_IDLE_TASK_SLEEP_LEAVE,
    CCCI_IDLE_TASK_WFI_ENTER,
    CCCI_IDLE_TASK_WFI_LEAVE,
    CCCI_IDLE_TASK_INFO_END
} CCCI_IDLE_TASK_INFO_T;

/*******************************************************************************
 * Define Internal Definition.
 *******************************************************************************/
//- ITCM of ARM9 is small. Move function to external RAM in ARM9 projects
#if defined(__ARM9_MMU__)
#define CCCI_CODE_EXT_RAM
#endif

#define CCCI_SEND_RETRY_DEFAULT    (100 * 1000) //- 100ms

/*******************************************************************************
 * Declare function prototype.
 * Internal APIs
 *******************************************************************************/
extern kal_int32 ccci_fill_idle_task_state(kal_uint32 log_type, kal_uint32 state_info);

#endif /* #if __MODEM_CCCI_EXIST__ */

#endif  /* __CCCI_INT_H__ */

