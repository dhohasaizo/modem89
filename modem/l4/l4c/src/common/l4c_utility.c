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
 * L4C_UTILITY.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ...
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
 *
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

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define L4C_UTILITY_C

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "kal_non_specific_general_types.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "string.h"
//#include "kal_common_defs.h"
//#include "kal_nucleus_common_defs.h"
//#include "stack_ltlcom.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
//#include "ps2sat_struct.h"

//#include "mcd_ps2sat_peer.h"
 
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_table.h"
//#include "l4c_rspfmttr.h"
#include "l4c_sendmsg.h"
#include "l4_trc.h"
//#include "uart_sw.h"
#include "dcl.h"

#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_enums.h"
//#include "l3_inc_local.h"

//#include "l4_defs.h"
#include "csmcc_atfunc.h"
#include "l4crac_enums.h"
#include "l4crac_func.h"
#include "l4c2rac_struct.h"

//#include "l4c_aux_struct.h"
#include "l4c_utility.h"

#include "mcd.h"

#include "init.h"       /* mtk00468 add for get mobile revision */

#include "l4c2abm_struct.h"
#ifdef __MOD_TCM__
#include "l4c_gprs_cmd.h"
#endif

#include "cmux_struct.h"
#include "csmcc_common_enums.h"
//#include "csmcc_enums.h"
#include "rmmi_utility.h"
#include "l4c_nw_cmd.h"
#include "uem_proc_cmd.h"
//#include "l4c_eq_cmd.h"
//#include "l4c_cc_msg.h"
#include "csmcc_defs.h"
#include "l4c2csm_cc_struct.h"
#include "l4c_cc_cmd.h"
//#include "csmcc_bc_types.h"
//#include "mcd_ss_tcapmessages.h"
//#include "mncc_struct.h"
//#include "csmcc_types.h"

//#include "l4c2smsal_struct.h"
#include "rmmi_rspfmttr.h"

//#include "rmmi_bt.h"

#include "l4c_ss_parse.h"
//#include "smsal_l4c_enum.h"
//#include "l4c2csm_ss_struct.h"
#include "l4c2csm_cc_struct.h"  

//#include "l4c2phb_enums.h"   
//#include "l4c2phb_struct.h"
#include "lmmi_rsp.h"

#include "rmmi_rsp.h"

//#include "keypad_sw.h"
//#include "l4c2smu_struct.h"
#include "lmmi_ind.h"

#include "phb_utils.h"
//#include "l4c2phb_enums.h"
#include "rmmi_ind.h"
#ifdef __CSD_FAX__
//#include "csm_data_enums.h"
//#include "l4c2t30_struct.h"
//#include "l4c2t30_enums.h"
#endif 
//#include "mcd_ss_parameters.h"
#include "csmcc_utility.h"
#include "rmmi_msghdlr.h"

#include "custom_ecc.h"

/* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)    
#include "flc_api.h"
#include "Lcd_lqueue.h"
#endif /*~!defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__) */            

#if defined(__MMI_FMI__)
#include "fs_func.h"
#include "fs_errcode.h"
#endif

#include "l4c_root.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "ps_public_utility.h"
#include "nvram_struct.h"
#include "l4c_hz_context.h"
#include "sim_public_enum.h"

#include "cmux_msgid.h"
#include "sim_ps_msgid.h"
#include "l4_msgid.h"
#include "ppp_msgid.h"
#ifdef __TCPIP__
#include "abm_msgid.h"
#endif

#if defined(__IPV4V6__) && defined(__IPV6__)
#include "l4c2ppp_struct.h"
#endif

#include "l4c_sim_cmd.h"
#include "phb_main.h"
#include "l4c_phb_cmd.h"

#if defined(__CENTRALIZED_SLEEP_MANAGER__) && defined(__MTK_TARGET__)
#include "ostd_public.h"
#endif

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
#include "l4c_ratdm_struct.h"
#include "custom_l4_utility.h"
#include "l4_ps_api.h"
#endif

/* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)
extern flc2_pool_id_enum l4c_ps_get_flc_pool_id_for_act_test(kal_uint8 src_id, kal_uint8 cid);
#endif /*~!defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__) */            
extern UART_PORT PS_UART_PORT;
extern UART_baudrate PS_BAUDRATE;
extern kal_uint8 cm_retry_timer(void);  //mtk00468 add to cinfigure the retry timer
extern kal_uint8 cm_max_retry_count(void);
extern void rmmi_cmd_processor(rmmi_string_struct *source_string_ptr, kal_uint16 cmd_length);

extern UART_flowCtrlMode UART_GetFlowCtrl(UART_PORT uart_port);
extern kal_uint8 custom_wild_char(void);
extern kal_uint8 custom_auto_dtmf_modifier(void);
extern kal_uint8 custom_l4c_max_poweroff_retry(void);

//extern kal_bool phb_reset(void);   

#if defined(__GEMINI__) && !defined(__MMI_FMI__)
extern void l4c_eq_pwnon_dual_sim_rind(void); //gemini modem
#endif /* defined(__GEMINI__) && !defined(__MMI_FMI__) */

#ifdef __MOD_TCM__
extern kal_uint8 custom_l4c_gprs_when_needed_timer(void); 
#endif // MAUI_02598495, custom gprs detach timer

extern kal_bool is_ps_conf_test_xta_mode(void); //MAUI_02647858

#if defined(__CUSTOMIZED_IDLE_STRING_AS_CALL__)
extern kal_bool custom_idle_string_as_call(kal_uint8 *str, kal_uint8 length);
#endif

extern kal_char *release_flavor(void);

/*****************************************************************************
 * FUNCTION
 *  is_proper_owner
 * DESCRIPTION
 *  This is is_proper_owner function of L4C module.
 *  find out the original source that setup the call.
 *  this function is to be removed
 * PARAMETERS
 *  src_id      [IN]        The source the the MMI request
 * RETURNS
 *  kal_bool    OUT   if the src_id matches the owner of the active call
 *****************************************************************************/
kal_bool is_proper_owner(kal_uint8 src_id)
{
    return KAL_TRUE;    /* for debug */
}


/*****************************************************************************
 * FUNCTION
 *  convert_to_general_bcd
 * DESCRIPTION
 *  This is convert_to_general_bcd function of L4C module.
 *  to convert ascii string of number to BCD
 * PARAMETERS
 *  source              [IN]        Input ascii string of number
 *  dest                [OUT]       Output BCD string
 *  max_dest_len        [IN]        
 * RETURNS
 *  kal_uint8      number of bytes of the output BCD string
 *****************************************************************************/
kal_uint8 convert_to_general_bcd(kal_uint8 *source, kal_uint8 *dest, kal_uint8 max_dest_len, kal_uint8 type)
{
    kal_uint8   upper_nibble, lower_nibble;
    kal_uint8   i, j;
    kal_uint8   *temp;

    kal_brief_trace(TRACE_FUNC, FUNC_CONVERT_TO_BCD_ENTRY);

    if ((source == NULL) || (dest == NULL))
    {
        ASSERT(0);
    }


    if (type == CONVERT_TO_BCD_IGNORE_PLUS)
    {
        // 2 digits into 1 dest byte, so we process (max_dest_len * 2) digits at most.
        // (NOTE: Here we assume the caller won't pass-in a too-large max_dest_len.)
        kal_uint16  temp_len = max_dest_len * 2;  

        temp = get_ctrl_buffer(temp_len + 1);     // 1 byte for END_OF_STRING

        /* ==== Process the source string into the temp buffer ==== */
        i = j = 0;
        while ((source[j] != RMMI_END_OF_STRING_CHAR) && (i < temp_len))
        {
            if (source[j] != RMMI_CHAR_PLUS)  // Filter-out '+'
            {
                temp[i] = source[j];
                i++;
            }
            j++;
        }
        temp[i] = RMMI_END_OF_STRING_CHAR;
    }
    else
    {
        temp = source;
    }


    /* ==== Start the conversion into the dest buffer ==== */
    i = j = 0;
    while ((temp[i] != RMMI_END_OF_STRING_CHAR) && (j < max_dest_len))
    {
        /* mtk02514 ****************************
        * to convert wild character to BCD
        * we should use type = CONVERT_TO_BCD_WILD  (get_bcd_byte() would handle this.)
        *************************************/

        lower_nibble = get_bcd_byte(temp[i], type);

        if (temp[i+1] == RMMI_END_OF_STRING_CHAR)   // odd number of characters in the source string
        {
            dest[j] = 0xF0 | lower_nibble;
            j++;
            i++;    // NOTE: let i be odd to mark this condition

            break;
        }

        upper_nibble = get_bcd_byte(temp[i+1], type);

        dest[j] = (upper_nibble << 4) | lower_nibble;
        j++;
        i += 2;

        // NOTE: At this point, if source used up ([i]==END_OF_STRING)
        //       or dest is full (j==max_dest_len), this loop would end.
    }

    if ((i % 2 == 0) && (temp[i] == RMMI_END_OF_STRING_CHAR) && (j < max_dest_len))
    {
        // even number of characters in the source string, and the dest is not full yet
        // --> add an end-marker 0xFF
        dest[j] = 0xFF;
    }
    
    if (temp != source)
    {
        free_ctrl_buffer(temp);
    }

    return  j;
}



#if 0 //MAUI_02884093 fdn revise
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

//MAUI_02884093 fdn revise
/*****************************************************************************
 * FUNCTION
 *  l4c_construct_phb_approve_str
 * DESCRIPTION
 *  This is l4c_construct_phb_approve_str function of L4C module.
 *  construct string for PHB approval and store in L4C_PTR->l4cphb_approve_req_string
 *  Refer to applib_encode_number() which PHB uses to transform number before saving
 *
 * PARAMETERS
 *  source          [IN]    pointer to source ASCII string
 *  length          [IN]    length of input string
 *
 * RETURNS
 *  kal_bool    KAL_TRUE if construct successfully, otherwise KAL_FALSE
 *****************************************************************************/
kal_bool l4c_construct_phb_approve_str(kal_uint8 *source, kal_uint8 length)
{
    kal_uint8 i, j;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    kal_uint8 ton = 0X81; //default TON is 0x81

    if (length > MAX_CC_ADDR_LEN)
    {
        kal_brief_trace(TRACE_ERROR, ERROR_PHB_APPROVE_STRING_EXCEEDING, length);
        length = MAX_CC_ADDR_LEN; //truncate walk-around
        //return KAL_FALSE;
    }

    /* eliminate '+', if any, set TON as 0x91 */
    for (i=0, j=0; i<length; i++)
    {
        if (source[i] == '+')
        {
            ton = 0x91;
        }
        else
        {
            l4c_ptr->l4cphb_approve_req_string.number[j++] = source[i];
        }
    }
    l4c_ptr->l4cphb_approve_req_string.number[j] = '\0';
    l4c_ptr->l4cphb_approve_req_string.length = j;
    l4c_ptr->l4cphb_approve_req_string.type = ton;
    
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  get_bcd_byte
 * DESCRIPTION
 *  This is get_bcd_byte function of L4C module.
 *  convert one char to BCD format (lower byte only)
 * PARAMETERS
 *  digit       [IN]        Input ascii char
 *  type        [IN]        Type of definition
 *  value 0: for original defintion(MTK make use of 0xd) , value 1: new definition(with wild char support)(?)
 * RETURNS
 *  kal_uint8      output byte in BCD format
 *****************************************************************************/
kal_uint8 get_bcd_byte(kal_uint8 digit, kal_uint8 type)
{
    kal_uint8 half_byte;

    if (RMMI_CHAR_0 <= digit && digit <= RMMI_CHAR_9)
    {
        half_byte = digit - RMMI_CHAR_0;
    }
    else
    {
        //mtk01616_080428: new definition (with wild character support) , other part is the same as original definition
        if (digit == custom_wild_char() && type == CONVERT_TO_BCD_WILD)
        {
            half_byte = 0x0d;
            return half_byte;
        }

        switch (digit)
        {
            case RMMI_CHAR_STAR:
                half_byte = 0x0a;
                break;
            case RMMI_CHAR_POUND:
                half_byte = 0x0b;
                break;
            case rmmi_char_p:
            case RMMI_CHAR_P:
                half_byte = 0x0c;
                break;
            case RMMI_CHAR_PLUS:
                half_byte = 0x0e;
                break;
            default:
                if(l4c_check_auto_dtmf_modifier(digit) == KAL_TRUE) 
                {		
            #ifdef __SP_RIL_SUPPORT__
                    half_byte = 0x0e;
            #else
                    half_byte = 0x0d;
            #endif
                }
                else
                {
                    half_byte = 0x0f;
                }
                break;
        }
    }
    return half_byte;
}


/*****************************************************************************
 * FUNCTION
 *  convert_to_general_digit
 * DESCRIPTION
 *  This is convert_to_digit function of L4C module.
 *  convert BCD string to ascii string of numbers
 * PARAMETERS
 *  source      [IN]        Input BCD string
 *  dest        [OUT]       Output ascii string
 * RETURNS
 *  kal_uint8      number of bytes of the output ascii string
 *****************************************************************************/
kal_uint8 convert_to_general_digit(kal_uint8 *source, kal_uint8 *dest, kal_uint8 type)
{
    kal_uint8 ch1, ch2;
    kal_uint8 i = 0, j = 0;
    kal_uint16 len = MAX_CC_ADDR_LEN-1;

    kal_brief_trace(TRACE_FUNC, FUNC_CONVERT_TO_DIGIT_ENTRY);
    if ((source == NULL) || (dest == NULL))
    {
        ASSERT(0);
    }

    /* mtk02514 ***********************************
    * for CONVERT_TO_DIGIT_EXT, 
    * we should use MAX_DIGITS_USSD as the maximum length
    *********************************************/

    if(type==CONVERT_TO_DIGIT_EXT)
    {
        len = MAX_DIGITS_USSD - 1;
    }

    while ((source[i] != 0xff) && j < len)
    {
        ch1 = source[i] & 0x0f;
        ch2 = (source[i] & 0xf0) >> 4;

        /* mtk02514 **************************
        * For CONVERT_TO_DIGIT_24008,
        * we should use get_ch_byte_24008 insead
        * of get_ch_byte
        ***********************************/

        if (type==CONVERT_TO_DIGIT_24008)
            *((kal_uint8*) dest + j) = get_ch_byte_24008(ch1);
        else
            *((kal_uint8*) dest + j) = get_ch_byte(ch1, type);

        if (ch2 == 0x0f)
        {
            *((kal_uint8*) dest + j + 1) = RMMI_END_OF_STRING_CHAR;
            return j + 1;
        }
        else
        {
            if (type==CONVERT_TO_DIGIT_24008)
                *((kal_uint8*) dest + j + 1) = get_ch_byte_24008(ch2);
            else
                *((kal_uint8*) dest + j + 1) = get_ch_byte(ch2, type);

        }
        i++;
        j += 2;
    }
    *((kal_uint8*) dest + j) = RMMI_END_OF_STRING_CHAR;
    return j;
}


/*****************************************************************************
 * FUNCTION
 *  get_ch_byte
 * DESCRIPTION
 *  This is get_ch_byte function of L4C module.
 *  convert a BCD byte (lower byte only) to ascii char
 * PARAMETERS
 *  bcd         [IN]        Input BCd byte
 *  type        [IN]        Type of definition
 *  value 0: for original defintion(MTK make use of 0xd) , value 1: new definition(with wild char support)(?)
 * RETURNS
 *  kal_uint8      output ascii char
 *****************************************************************************/
kal_uint8 get_ch_byte(kal_uint8 bcd, kal_uint8 type)
{
    kal_uint8 digit;
    kal_uint8 value_d_char = custom_auto_dtmf_modifier();       // original defnition

    /* mtk02514 ************************
    * When type = CONVERT_TO_DIGIT_WILD,
    * we should convert 0x0d to wild char
    *********************************/

    //mtk01616_080428: new definition (with wild character support), other part is the same as original definition
    if (type == CONVERT_TO_DIGIT_WILD)
    {
        value_d_char = custom_wild_char();
    }

    if (bcd <= 9)
    {
        digit = bcd + RMMI_CHAR_0;
    }
    else
    {
        switch (bcd)
        {
            case 0x0a:
                digit = RMMI_CHAR_STAR;
                break;
            case 0x0b:
                digit = RMMI_CHAR_POUND;
                break;
            case 0x0c:
                digit = rmmi_char_p;
                break;
            case 0x0d:
                digit = value_d_char;
                break;
            case 0x0e:
                #ifdef __SP_RIL_SUPPORT__
                digit = custom_auto_dtmf_modifier();
                #else
                digit = RMMI_CHAR_PLUS;
                #endif
                break;
            default:
                digit = RMMI_END_OF_STRING_CHAR;
                break;
        }
    }
    return digit;
}

/*****************************************************************************
 * FUNCTION
 *  get_ch_byte_raw
 * DESCRIPTION
 *  This is get_ch_byte function of L4C module.
 *  convert a BCD byte (lower byte only) to ascii char
 * PARAMETERS
 *  bcd         [IN]        Input BCd byte
 *  type        [IN]        Type of definition
 *  value 0: for original defintion(MTK make use of 0xd) , value 1: new definition(with wild char support)(?)
 * RETURNS
 *  kal_uint8      output ascii char
 *****************************************************************************/
kal_uint8 get_ch_byte_raw(kal_uint8 bcd, kal_uint8 type)
{
    kal_uint8 digit;

    if (bcd <= 9)
    {
        digit = bcd + RMMI_CHAR_0;
    }
    else
    {
        switch (bcd)
        {
            case 0x0a:
                digit = rmmi_char_a;
                break;
            case 0x0b:
                digit = rmmi_char_b;
                break;
            case 0x0c:
                digit = rmmi_char_c;
                break;
            case 0x0d:
                digit = rmmi_char_d;
                break;
            case 0x0e:
                digit = rmmi_char_e;
                break;
            case 0x0f:
                digit = rmmi_char_f;
                break;
            default:
                digit = RMMI_END_OF_STRING_CHAR;
                break;
        }
    }
    return digit;
}

/*****************************************************************************
 * FUNCTION
 *  get_ch_byte_24008
 * DESCRIPTION
 *  This is get_ch_byte_24008 function of L4C module.
 *  convert a BCD byte (lower byte only) to ascii char
 *  this obey spec 24.008 10.5.118 table diff form 11.11 SIM spec
 * PARAMETERS
 *  bcd     [IN]        Input BCd byte
 * RETURNS
 *  kal_uint8      output ascii char
 *****************************************************************************/
kal_uint8 get_ch_byte_24008(kal_uint8 bcd)
{
    kal_uint8 digit;

    if (bcd <= 9)
    {
        digit = bcd + RMMI_CHAR_0;
    }
    else
    {
        switch (bcd)
        {
            case 0x0a:
                digit = RMMI_CHAR_STAR;
                break;
            case 0x0b:
                digit = RMMI_CHAR_POUND;
                break;
            case 0x0c:
                digit = rmmi_char_a;
                break;
            case 0x0d:
                digit = rmmi_char_b;
                break;
            case 0x0e:
                digit = rmmi_char_c;
                break;
            default:
                digit = RMMI_END_OF_STRING_CHAR;
                break;
        }
    }
    return digit;
}


/*****************************************************************************
 * FUNCTION
 *  plmn_convert_to_bcd
 * DESCRIPTION
 *  This is plmn_convert_to_bcd function of L4C module.
 *  convert ascii plmn id string to BCD format
 * PARAMETERS
 *  source      [IN]        Input ascii plmn id string
 *  dest        [OUT]       Output BCD string
 * RETURNS
 *  kal_uint8      number of bytes of the output BCD string
 *****************************************************************************/
kal_uint8 plmn_convert_to_bcd(kal_uint8 *source, kal_uint8 *dest)
{
    kal_brief_trace(TRACE_FUNC, FUNC_PLMN_CONVERT_TO_BCD_ENTRY);
    if ((source == NULL) || (dest == NULL))
    {
        ASSERT(0);
    }

    *((kal_uint8*) dest + 0) = (source[0] - RMMI_CHAR_0) + ((source[1] - RMMI_CHAR_0) << 4);
    if (source[5] == RMMI_END_OF_STRING_CHAR)
    {
        *((kal_uint8*) dest + 1) = (source[2] - RMMI_CHAR_0) + 0xf0;
    }
    else
    {
        *((kal_uint8*) dest + 1) = (source[2] - RMMI_CHAR_0) + ((source[5] - RMMI_CHAR_0) << 4);
    }
    *((kal_uint8*) dest + 2) = (source[3] - RMMI_CHAR_0) + ((source[4] - RMMI_CHAR_0) << 4);

    return 3;
}


/*****************************************************************************
 * FUNCTION
 *  plmn_convert_to_struct
 * DESCRIPTION
 *  This is plmn_convert_to_struct function of L4C module.
 *  convert plmn id string in BCD to plmn_id_struct format
 * PARAMETERS
 *  source      [IN]        Input BCD plmn string
 *  dest        [OUT]       Output plmn id in plmn_id_struct format
 * RETURNS
 *  kal_uint8   number of digits of the plmn id
 *****************************************************************************/
kal_uint8 plmn_convert_to_struct(kal_uint8 *source, plmn_id_rat_struct *dest)
{
    kal_brief_trace(TRACE_FUNC, FUNC_PLMN_CONVERT_TO_STRUCT_ENTRY);
    if ((source == NULL) || (dest == NULL))
    {
        ASSERT(0);
    }

    dest->plmn_id.mcc1 = source[0] - RMMI_CHAR_0;
    dest->plmn_id.mcc2 = source[1] - RMMI_CHAR_0;
    dest->plmn_id.mcc3 = source[2] - RMMI_CHAR_0;
    dest->plmn_id.mnc1 = source[3] - RMMI_CHAR_0;
    dest->plmn_id.mnc2 = source[4] - RMMI_CHAR_0;

    if (source[5] == 0)
    {
        dest->plmn_id.mnc3 = 0xf;
        return 5;
    }
    else
    {
        dest->plmn_id.mnc3 = source[5] - RMMI_CHAR_0;
        return 6;
    }
}


/*****************************************************************************
 * FUNCTION
 *  plmn_convert_to_digit
 * DESCRIPTION
 *  This is plmn_convert_to_digit function of L4C module.
 *  convert plmn id in plmn_id_struct to BCD format
 * PARAMETERS
 *  source      [IN]        Input plmn id in plmn_id_struct format
 *  dest        [OUT]       Output ascii string of plmn id
 * RETURNS
 *  kal_uint8      number of digits of the plmn id
 *****************************************************************************/
kal_uint8 plmn_convert_to_digit(plmn_id_struct *source, kal_uint8 *dest)
{
    kal_brief_trace(TRACE_FUNC, FUNC_PLMN_CONVERT_TO_DIGIT_ENTRY);
    if ((source == NULL) || (dest == NULL))
    {
        ASSERT(0);
    }

    kal_mem_set(dest, 0, 6);
    if (strcmp((char*)source, "\x0f\x0f\x0f\x0f\x0f\x0f") == 0)
    {
        return 0;
    }

    *((kal_uint8*) dest + 0) = source->mcc1 + RMMI_CHAR_0;
    *((kal_uint8*) dest + 1) = source->mcc2 + RMMI_CHAR_0;
    *((kal_uint8*) dest + 2) = source->mcc3 + RMMI_CHAR_0;
    *((kal_uint8*) dest + 3) = source->mnc1 + RMMI_CHAR_0;
    *((kal_uint8*) dest + 4) = source->mnc2 + RMMI_CHAR_0;

    if (source->mnc3 == 0xf)
    {
        *((kal_uint8*) dest + 5) = RMMI_END_OF_STRING_CHAR;
        return 5;
    }
    else
    {
        *((kal_uint8*) dest + 5) = source->mnc3 + RMMI_CHAR_0;
        *((kal_uint8*) dest + 6) = RMMI_END_OF_STRING_CHAR;
        return 6;
    }
}

#ifdef __CMUX_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_cmux_startup_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  port        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cmux_startup_req(kal_uint8 port)
{
    cmux_startup_req_struct *param_ptr;

    param_ptr = (cmux_startup_req_struct*) construct_local_para((kal_uint16) sizeof(cmux_startup_req_struct), TD_RESET);
    param_ptr->port = port;
    l4c_send_msg_to_cmux(MSG_ID_CMUX_STARTUP_REQ, param_ptr);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cmux_closedown_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cmux_closedown_req(void)
{
    l4c_send_msg_to_cmux(MSG_ID_CMUX_CLOSE_DOWN_REQ, NULL);
}
#endif /* __CMUX_SUPPORT__ */ 

/*****************************************************************************
 * FUNCTION
 *  l4c_cc_check_call_exist
 * DESCRIPTION
 *  Check if any call attempt to outgoing or incoming
 * PARAMETERS
 *  src_id      [IN]
 * RETURNS
 *  KAL_TRUE    call existed
 *  KAL_FALSE   call not existed
 *****************************************************************************/
kal_bool l4c_cc_check_call_exist(kal_uint8 src_id)
{
    kal_uint8 i;

    //[MAUI_02316425] ECC is change RAT retrying
    if ((L4C_PTR->rac_user == L4C_SRC) && (src_id != L4C_SRC)) 
    {
        return KAL_TRUE;
    }

    // Check does any call existed in CSM
    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
        if (check_call_exist_in_either_SIM(SIM1 + i) == KAL_TRUE)
        {
            return KAL_TRUE;
        }
    }

    // No call existed
    return KAL_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  is_ss_cmd_conflict
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_ss_cmd_conflict(kal_uint8 src_id, kal_uint8 action)
{
    /* Johnny:
       1. atd will never be a ss-string, atd may be sim-string/gprs-string/cc-string
       (ex. user can not use atd to reply ussd)
       2. L4C_PTR->ss_user == RMMI_SRC && L4C_PTR->ss_current_action == PARSE_SS_EXE will never happen */
#if defined(__MMI_FMI__) && !defined(__ECUSD_SUPPORT__)
    if (l4c_is_test_sim() == KAL_FALSE)
    {
        if (src_id == RMMI_SRC && action == PARSE_SS_EXE)
        {
            kal_brief_trace(TRACE_WARNING, WARNING_SS_CMD_CONFLICT);
            kal_brief_trace(TRACE_STATE, STATE_L4C_SS_ACTION, L4C_PTR->ss_user, L4C_PTR->ss_current_action);
            return KAL_TRUE;
        }
    }
#endif 
    if (L4C_PTR->ss_user == L4C_NO_USER)
    {
        return KAL_FALSE;
    }
    else if ((l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE
              || l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_TRUE) &&
             (action == CUSD_EXE || action == PARSE_SS_EXE))
    {
        return KAL_FALSE;
    }
    else
    {
        kal_brief_trace(TRACE_WARNING, WARNING_SS_COMMAND_CONFLICT);
        kal_brief_trace(TRACE_STATE, STATE_L4C_SS_ACTION, L4C_PTR->ss_user, L4C_PTR->ss_current_action);
        return KAL_TRUE;
    }

}


/*****************************************************************************
 * FUNCTION
 *  is_phb_cmd_conflict
 * DESCRIPTION
 *  This function is used to judge if the input action is conflict with the current action
 *  
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  action      [IN]        the requested action
 * RETURNS
 *  KAL_TRUE or KAL_FALSE to indicate if the action is conflict or not
 *****************************************************************************/
kal_bool is_phb_cmd_conflict(kal_uint8 src_id, kal_uint8 action)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    
    //phb action is always allowed in any cfun state
    if (l4c_ptr->phb_user == L4C_NO_USER)
    {
        return KAL_FALSE;
    }
    else if ((l4c_ptr->phb_user == LMMI_SRC && src_id == LMMI_SRC &&
              (l4c_ptr->phb_current_action == CPBW_EXE
               || l4c_ptr->phb_current_action == CPBD_EXE
               || l4c_ptr->phb_current_action == CPBW_LN)
              && (action == CPBW_LN || action == CPBR_LN || action == CPBD_LN))
              || 
              (l4c_ptr->phb_user >= RMMI_SRC 
                  && (l4c_ptr->phb_current_action == CPBR_RANGE_EXE || l4c_ptr->phb_current_action == CPBD_EXE || l4c_ptr->phb_current_action == CPBW_EXE)
                  && src_id == LMMI_SRC 
                  && (action == CPBW_LN || action == CPBR_LN || action == CPBD_LN
                  #ifdef __PHB_ACCESS_SIM_LN__ 
                  || action == CPBW_SIM_LN || action == CPBR_SIM_LN || action == CPBD_SIM_LN
                  #endif
              )))
    {
        return KAL_FALSE;
    }
    #if defined(__PHB_STORAGE_BY_MMI__)
    else if ( src_id == LMMI_SRC && l4c_ptr->phb_user >= RMMI_SRC &&
        l4c_ptr->phb_current_action == action )
    {
        /************************************
        * This case is that there is AT command action
        * which is directed to the MMI and issue request 
        * from MMI. So we should pass the request
        *************************************/
        return KAL_FALSE;
    }
    #endif
    else
    {
        kal_brief_trace(TRACE_WARNING, WARNING_PHB_CMD_CONFLICT);
        kal_brief_trace(TRACE_STATE, STATE_L4C_PHB_ACTION, l4c_ptr->phb_user, l4c_ptr->phb_current_action);
        return KAL_TRUE;
    }

}


/*****************************************************************************
 * FUNCTION
 *  is_sms_cmd_conflict
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_sms_cmd_conflict(kal_uint8 src_id, kal_uint8 action)
{
    kal_uint8 i=0;
    kal_bool sms_action_exist = KAL_FALSE;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (l4c_ptr->cfun_state != 1)
    {
        if (action == CMGS_EXE || action == CMGC_EXE || action == CMSS_EXE || action == CMGS_PDU_EXE)
        {
            kal_brief_trace(TRACE_WARNING, WARNING_SMS_CMD_CONFLICT_CUFN_STATE_IS_NOT_EQUAL_TO_1);
            return KAL_TRUE;
            //other action like read, delete and setting is allowed
        }
    }

    #if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI) 
    /* MAUI_02456921 * mtk02514 ***********
    * It is possible that MMI send SMS and set CB setting at the same time.
    * So in this case, we should allow the action CBMI_SET
    ************************************/
    if ((l4c_ptr->sms_current_action[src_id] == CMGS_PDU_EXE) && ((action == CMGS_PDU_EXE)||(action ==CSMP_SET) || (action == CBMI_SET)))
    {
        return KAL_FALSE;       
    }
    #endif

    //check if there is any foreground action exist
    for(i=LMMI_SRC;i<MAX_SOURCE_NUM;i++)
    {
        if((l4c_ptr->sms_current_action[i] != L4C_NO_ACTION) && (i != LMMI_SRC2))
        {
	     sms_action_exist = KAL_TRUE;
        }	
    }	

    if(src_id == LMMI_SRC2 && l4c_ptr->sms_current_action[LMMI_SRC2]!=L4C_NO_ACTION)
    {
	//mtk01616_081118:only allow one MMI background action at a time
        kal_brief_trace(TRACE_WARNING, WARNING_SMS_CMD_CONFLICT);	     
	return KAL_TRUE;
    }	     

    if (sms_action_exist == KAL_FALSE)
    {
    #if defined(__MMI_FMI__)    
     	 //all RMMI SMS action is not allowed when MMI background action
	 if(l4c_ptr->sms_current_action[LMMI_SRC2] != L4C_NO_ACTION && src_id>= RMMI_SRC)
	 {
            kal_brief_trace(TRACE_WARNING, WARNING_SMS_CMD_CONFLICT_SMS_ACTION_IS_NOT_ALLOWED);	 
	     return KAL_TRUE;
	 }
    #endif		
        return KAL_FALSE;
    }
    else
    {
    #if defined(__MMI_FMI__)
	 if(src_id == LMMI_SRC2)//for MMI background action
	 {
	     return KAL_FALSE;		
	 }
    #endif
	
        if ((l4c_ptr->sms_current_action[src_id] == CMGS_EXE) && (action == CMGS_EXE))
        {
            return KAL_FALSE;       
        }

        kal_brief_trace(TRACE_WARNING, WARNING_SMS_CMD_CONFLICT);
        return KAL_TRUE;
    }
}


/*****************************************************************************
 * FUNCTION
 *  is_rac_activated
 * DESCRIPTION
 *  check whethere all RAC are activated
 * PARAMETERS
 *  void
 * RETURNS
 *  bool
 *****************************************************************************/
kal_bool is_rac_activated()
{
    kal_uint8 bit_mask = 0x01 << (L4_MAX_SIM_NUM-1);

    for (; bit_mask>0; bit_mask>>=1)
    {
        if ((L4C_COMM_PTR->rac_activated & bit_mask) != bit_mask)
        {
            return KAL_FALSE;
        }
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  is_current_rac_activated
 * DESCRIPTION
 *  check whethere the current RAC is activated
 * PARAMETERS
 *  void
 * RETURNS
 *  bool
 *****************************************************************************/
kal_bool is_current_rac_activated()
{
    kal_uint8 bit_mask = 0x01 << (l4c_current_mod_id-MOD_L4C);

    return ((L4C_COMM_PTR->rac_activated & bit_mask) == bit_mask)? KAL_TRUE : KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  is_rac_cmd_conflict
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_rac_cmd_conflict(kal_uint8 src_id, kal_uint8 action)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (is_current_rac_activated() == KAL_FALSE)
    {
        return KAL_TRUE;
    }
    
    /* Only Allow CBND_SET and SET_HSPA_MODE when cfun_state!=1 */
    if ((l4c_ptr->cfun_state != 1) 
        && (action != CBND_SET) 
        && (action != SET_HSPA_MODE) 
        && (action != PWRON_SET_RAT_MODE)
        && (action != RFON_SET_RAT_MODE))
    {
        kal_brief_trace(TRACE_WARNING, WARNING_RAC_CMD_CONFLICT_DUE_TO_CFUN_STATE);
        return KAL_TRUE;
    }
	
   /*****************************************************************************
     *  [MAUI_01775721] mtk02480
     *  If call existed, not allow PLMN search/list and Change RAT.
     *   Due to AS may pending the request until call disconnect, and MMI can't get response
     *****************************************************************************/
    if (l4c_cc_check_call_exist(src_id) == KAL_TRUE)
    {
        if (action==COPS_TEST || action==COPS_EXE || action==SET_RAT_MODE_DETACH || action==CSG_TEST)
        {
            kal_brief_trace(TRACE_WARNING, WARNING_RAC_CMD_CONFLICT_DUE_TO_CALL_EXIST);    	 
            return KAL_TRUE;
        }
    }

    /* RFOFF detach has the 3rd priority */
    if (action == RFOFF_DETACH 
        || action == PWROFF_DETACH
        || action == SET_RAT_MODE_DETACH 
        || action == CBND_SET 
        || action == SET_HSPA_MODE
        || action == RFON_SET_RAT_MODE
        || action == PWRON_SET_RAT_MODE)
    {
        /*--------------------------------------------------------------------------
        * [MAUI_02050919][MAUI_02273895] mtk02480
        * Not allow set RAT mode/RFOFF request if previous action not complete
        * Otherwise, there might no response to LMMI/RMMI for previous set RAT mode request or
        *  may interrupt the detach procedure of RAC/MM which result to Assertion
        *--------------------------------------------------------------------------*/
        if (l4c_ptr->rac_current_action != PWRON_SET_RAT_MODE && 
            l4c_ptr->rac_current_action != RFON_SET_RAT_MODE && 
            l4c_ptr->rac_current_action != SET_RAT_MODE_DETACH && 
            l4c_ptr->rac_current_action != SET_RAT_MODE &&
            l4c_ptr->rac_current_action != RFOFF_DETACH &&
            l4c_ptr->rac_current_action != CBND_SET &&
            l4c_ptr->rac_current_action != SET_HSPA_MODE &&
            l4c_ptr->rac_current_action != PWROFF_DETACH)
        {
            return KAL_FALSE;
        }
    }

    /* only allow abort ongoing PLMN list from the same source */
    if (action == COPS_TEST_STOP)
    {
        return ((l4c_check_user_action(L4C_RAC, src_id, COPS_TEST) == KAL_TRUE)? KAL_FALSE : KAL_TRUE);
    }
    
    if (l4c_ptr->rac_user == L4C_NO_USER)
    {
        return KAL_FALSE;
    }

    /* Johnny: L4C does not need to send any response to MMI in there 3 actions,  so we can overwirte them and set new action */
    if (l4c_ptr->rac_current_action == PWRON_ATTACH ||
        l4c_ptr->rac_current_action == RFON_ATTACH || 
        l4c_ptr->rac_current_action == SET_RAT_MODE_ATTACH)
    {
        return KAL_FALSE;
    }

#ifndef __MMI_FMI__
     /*--------------------------------------------------------------------------
       * mtk02480
       * For modem solution, allowed abort PS attach procedure during change GPRS connection type
       *--------------------------------------------------------------------------*/
    if (l4c_ptr->rac_current_action == SET_GPRS_CON_TYPE)
    {
        return KAL_FALSE;
    }
#endif
    
    kal_brief_trace(TRACE_WARNING, WARNING_RAC_CMD_CONFLICT);
    kal_brief_trace(TRACE_STATE, STATE_L4C_RAC_ACTION, l4c_ptr->rac_user, l4c_ptr->rac_current_action);
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  is_smu_cmd_conflict
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_smu_cmd_conflict(kal_uint8 src_id, kal_uint8 action)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (l4c_ptr->sim_refresh == KAL_TRUE)// && (action == CLCK_EXE || action == CPIN_EXE || action == CPWD_EXE))
    {
        kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT_INCLUDE_SIM_REFRESH);	
        kal_brief_trace(TRACE_STATE, STATE_L4C_SMU_ACTION, l4c_ptr->smu_user, l4c_ptr->smu_current_action);
        return KAL_TRUE;
    }

    /* [DUMA00159601] While cfun_state=0, SIM power is off, not allow any SIM operation */
    if (l4c_ptr->cfun_state == 0)
    {
        kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT_INCLUDE_ACFUN_STATE, l4c_ptr->cfun_state);
        return KAL_TRUE;    
    }

    if (l4c_ptr->smu_user == L4C_NO_USER)
    {
        return KAL_FALSE;
    }

    kal_brief_trace(TRACE_WARNING, WARNING_SMU_CMD_CONFLICT);
    kal_brief_trace(TRACE_STATE, STATE_L4C_SMU_ACTION, l4c_ptr->smu_user, l4c_ptr->smu_current_action);	
    return KAL_TRUE;
}

#ifdef __MOD_TCM__


/*****************************************************************************
 * FUNCTION
 *  is_tcm_cmd_conflict
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_tcm_cmd_conflict(kal_uint8 src_id, kal_uint8 action)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (l4c_ptr->cfun_state != 1)
    {
        kal_brief_trace(TRACE_WARNING, WARNING_TCM_CMD_CONFLICT_DUE_TO_CFUN_STATE);
        return KAL_TRUE;
    }
    else
    {
    	return (is_tcm_cmd_conflict_basic(src_id, action));
    } //maui_01895693, mtk02285
}

/*****************************************************************************
 * FUNCTION
 *  is_tcm_cmd_conflict_basic
 * DESCRIPTION
 *  this function is used for operations that do not need to send our request 
 *  to the network
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_tcm_cmd_conflict_basic(kal_uint8 src_id, kal_uint8 action)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (l4c_ptr->cfun_state == 0)
    {
        kal_brief_trace(TRACE_WARNING, WARNING_TCM_CMD_CONFLICT_DUE_TO_CFUN_STATE);
        return KAL_TRUE;
    }

    if (l4c_ptr->tcm_ready_flag == KAL_FALSE)   /* tcm is not ready yet , TCM cmd not allowed */
    {
		kal_brief_trace(TRACE_WARNING, WARNING_TCM_CMD_CONFLICT);
        return KAL_TRUE;
    } // MAUI_01744335, 20090508, mtk02285
	
    if (l4c_ptr->tcm_user == L4C_NO_USER)
    {
        if (l4c_ptr->rac_current_action == SET_RAT_MODE_DETACH)
	        return KAL_TRUE;
	    else
            return KAL_FALSE;
    }
    else
    {
        kal_brief_trace(TRACE_WARNING, WARNING_TCM_CMD_CONFLICT);
        kal_brief_trace(TRACE_STATE, STATE_L4C_TCM_ACTION, l4c_ptr->tcm_user, l4c_ptr->tcm_current_action);
        return KAL_TRUE;
    }
} //maui_01895693, mtk02285
#endif /* __MOD_TCM__ */ 

#if 0 //__CTM_SUPPORT__
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __CTM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  is_eq_cmd_conflict
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool is_eq_cmd_conflict(kal_uint8 src_id, kal_uint8 action)
{
    //
    /** mtk02514 * MAUI_01613313 * 090915 ***
    * Currently, we don't set eq_current_action
    * it is just created for future use
    ***********************************/
    if (L4C_PTR->eq_user == L4C_NO_USER)
    {
        return KAL_FALSE;
    }
    kal_brief_trace(TRACE_STATE, STATE_L4C_EQ_ACTION, L4C_PTR->eq_user, L4C_PTR->eq_current_action);
    kal_brief_trace(TRACE_WARNING,WARNING_EQ_CMD_CONFLICT);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_search_all_src
 * DESCRIPTION
 *  
 * PARAMETERS
 *  which_sim       [IN]        
 *  action          [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_search_all_src(module_type which_sim, kal_uint8 action)
{
    kal_uint8 src_id;

    return l4c_search_all_src_ext(which_sim, action, &src_id);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_search_all_src_ext
 * DESCRIPTION
 *  
 * PARAMETERS
 *  which_sim       [IN]        
 *  action          [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_search_all_src_ext(module_type which_sim, kal_uint8 action, kal_uint8 *src_id)
{
    kal_uint8 id;
    l4c_context_struct *l4c_context_ptr = NULL;

    l4c_context_ptr = &l4c_cntxt_g[(which_sim-MOD_L4C)];

    for (id = LMMI_SRC; id < RMMI_ALL; id++)
    {
        if (l4c_context_ptr->cc_current_action[id] == action)
        {
            *src_id = id;
            return KAL_TRUE;
        }
    }
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_search_other_src
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_search_other_src(kal_uint8 src_id, kal_uint8 action)
{
    kal_uint8 id;

    for (id = LMMI_SRC; id < RMMI_ALL; id++)
    {
        if (L4C_PTR->cc_current_action[id] == action && id != src_id)
        {
            return KAL_TRUE;
        }
    }
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  is_cmd_conflict
 * DESCRIPTION
 *  This is is_cmd_conflict function of L4C module.
 *  check if the actions of RMMI and LMMI conflicted
 * PARAMETERS
 *  src_id      [IN]        Source of the MMI request
 *  action      [IN]        
 * RETURNS
 *  kal_bool    conflict or not
 *****************************************************************************/
kal_bool is_cmd_conflict(kal_uint8 src_id, kal_uint8 action)
{
    kal_uint16 ref_action;
    kal_uint16 hash_value;
    kal_uint8 id;
    kal_bool any_action = KAL_FALSE;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    kal_brief_trace(TRACE_FUNC, FUNC_IS_CMD_CONFLICT_ENTRY);

    if (l4c_ptr->rac_current_action == PWROFF_DETACH && action == ABM_ACT_APP)
    {
        kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT_INCLUDE_ACTION_AND_RAC_CURRENT_ACTION);
        return KAL_TRUE;
    }

    if (l4c_ptr->cfun_state != 1)
    {
        if (!(l4c_ptr->cfun_state == 4 && (action == CPHS_ALS_UPDATE || action == CSD_PROF_SET 
            || action == ATH_EXE))) //MAUI_02262908
        {
            kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT_INCLUDE_ACFUN_STATE, l4c_ptr->cfun_state);
            kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT, l4c_ptr->cc_current_action[src_id], action);
            return KAL_TRUE;
        }
    }

    if (l4c_ptr->cc_current_action[L4C_SRC] == ATH_EXE)
    {
        /* MAUI_02574001: L4C is local disconnecting call. Not allow other CC request.
           scenario: L4C is handling SIM_CALL_DISCONNECT_IND
        */
        return KAL_TRUE;
    }

#if 0 //def __CTM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __CTM_SUPPORT__ */ 

#ifdef __MMI_FMI__
    if (src_id >= RMMI_SRC && action == CHLD_EXE)
    {
        l4c_call_entry_struct call_info;
        kal_uint8 call_id;
        kal_bool result;

        result = l4ccsm_cc_get_active_call(&call_id);
        if (result == KAL_TRUE)
        {
            l4ccsm_cc_get_call_info(call_id, &call_info, NULL);

            if (call_info.call_type == CSMCC_CSD_CALL)
            {
                kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT_INCLUDE_ACTION_AND_ACTIVE_CALL_TYPE);
                return KAL_TRUE;
            }
        }
    }
#endif /* __MMI_FMI__ */ 

    //mtk01616_070730: move basic check rule to front . to prevent return false in the front case and lost the basic check
    if ((l4c_search_other_src(src_id, action)))
    {
        kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT, l4c_ptr->cc_current_action[src_id], action);
        return KAL_TRUE;
    }

    //mtk01616_090401: cc / ss concurrent is allowed. so we shall only check against cc retry 
    if ((action == ATD_APP) && (l4c_ptr->retry_cc == KAL_TRUE) && (src_id != l4c_ptr->retry_src_id))
    {
        kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT_INCLUDE_ACTION_AND_RETRY_FLAG);
        return KAL_TRUE;
    }

    if ((l4c_ptr->enhanced_ecc_id != CSMCC_INVALID_CALL_ID) && (action == CGDATA_EXE))
    {
        /* MAUI_02743658: don't allow CGDATA_EXE during ECC change RAT Retry */
        kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT_CGDATA_DURING_CHANGE_RAT_RETRY);
        return KAL_TRUE;
    }

    if ((l4c_ptr->cc_state[src_id] != L4C_COMMAND_STATE) || (l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION))
    {
        /* self conflict */

        if (( l4c_search_all_src(l4c_current_mod_id, POWERON_EXE) // MAUI_01349943, mtk02480: check all src 
	      || (l4c_ptr->sim_refresh == KAL_TRUE)) &&
            ((action == COPS_TEST) || (action == ATD_APP) || (action == ATH_EXE) /* eq_action_revise */ ))
            {
                if ((action == ATD_APP)&&(l4c_search_all_src(l4c_current_mod_id, ATD_EXE) ||
                    l4c_search_all_src(l4c_current_mod_id, ATD_ECC)
                       || l4c_search_all_src(l4c_current_mod_id, ATD_ECC_CHANGE_RAT)
                       || l4c_search_all_src(l4c_current_mod_id, ATD_ECC_CHANGE_RAT_ABORT)
                   ))
                   {
                       return KAL_TRUE; 
                   }
                   else
                   {
                       return KAL_FALSE; 
                   }
            }

        if (((l4c_ptr->cc_current_action[src_id] == ATD_APP) ||
             (l4c_ptr->cc_current_action[src_id] == ATD_EXE) ||
             (l4c_ptr->cc_current_action[src_id] == ATD_ECC) ||
             (l4c_ptr->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT) ||
             (l4c_ptr->cc_current_action[src_id] == ATA_EXE) ||
             (l4c_ptr->cc_current_action[src_id] == ABM_ACT) ||
             (l4c_ptr->cc_current_action[src_id] == ABM_ACT_APP) ||
             (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC) ||
             (l4c_ptr->cc_current_action[src_id] == PPP_ACT) ||
             (l4c_ptr->cc_current_action[src_id] == CHLD_EXE)) && ((action == ATH_EXE) || (action == CHUP_EXE)))
        {
            return KAL_FALSE;
        }
        if (action == ATA_EXE)
        {
            return KAL_FALSE;
        }
    #ifdef __TCPIP__
        if (((l4c_ptr->cc_current_action[src_id] == ABM_ACT_APP) ||
             (l4c_ptr->cc_current_action[src_id] == ABM_ACT) ||
             (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC) ||
             (l4c_ptr->cc_current_action[src_id] == PPP_ACT)) && (action == ABM_DEACT))
        {
            return KAL_FALSE;
        }
        if (((l4c_ptr->cc_current_action[src_id] == ABM_ACT) ||
             (l4c_ptr->cc_current_action[src_id] == PPP_ACT)) &&
            (action == CHLD_EXE || action == CTFR_EXE))
        {
            return KAL_FALSE;
        }
    #endif /* __TCPIP__ */ 
    #ifdef VM_SUPPORT
        if (action == VM_ABT_EXE)
        {
            return KAL_FALSE;
        }
    #endif /* VM_SUPPORT */ 

        /* mtk00924: user may activateCCBS by chld_req with op = CSMCC_ACTIVATE_CCBS_CALL */
        if (action == CHLD_EXE && l4c_ptr->crss_opcode == CSMCC_ACTIVATE_CCBS_CALL &&
            l4c_ptr->cc_current_action[src_id] == ATD_EXE)
        {
            return KAL_FALSE;
        }
        kal_brief_trace(
            TRACE_WARNING,
            WARNING_CMD_CONFLICT_INCLUDE_CRSS_OPCODE_AND_SIM_REFRESH,
            l4c_ptr->crss_opcode,
            l4c_ptr->sim_refresh);
        kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT, l4c_ptr->cc_current_action[src_id], action);
        return KAL_TRUE;
    }

    //if (l4c_ptr->cc_current_action[LMMI_SRC] == L4C_NO_ACTION &&
    //       l4c_ptr->cc_current_action[RMMI_SRC] == L4C_NO_ACTION &&
    //       l4c_ptr->cc_current_action[SAT_SRC] == L4C_NO_ACTION)
    //return KAL_FALSE;

    for (id = LMMI_SRC; id < RMMI_ALL; id++)
    {
        if (l4c_ptr->cc_current_action[id] != L4C_NO_ACTION)
        {
            //kal_trace (TRACE_ERROR, ERROR_CMD_CONFLICT,
            //l4c_ptr->cc_sub_state[src_id],
            //0,
            //l4c_ptr->cc_current_action[id], action);
            any_action = KAL_TRUE;
            break;
        }
    }

    if (any_action == KAL_FALSE)
    {
        return KAL_FALSE;
    }

    /* mtk00924: LMMI will use CHLD with op_code=8 to disconnect the call setup by RMMI which may in chld_exe state(ex: rmmi request hold, and lmmi request disc) */
    if ((action == ATH_EXE && src_id == LMMI_SRC) 
    #if defined(__BT_SUPPORT__)
        && (l4c_ptr->cc_current_action[RMMI_COMM_PTR->rmmi_hf_src] == CHLD_EXE)
    #endif		
        )
    {
        return KAL_FALSE;
    }

    if ((action == ATD_APP &&
         (l4c_search_all_src(l4c_current_mod_id, ABM_ACT) || l4c_search_all_src(l4c_current_mod_id, ABM_DEACT) ||
          l4c_search_all_src(l4c_current_mod_id, ABM_ACT_APP) || l4c_search_all_src(l4c_current_mod_id, ATD_APP) ||   
          l4c_search_all_src(l4c_current_mod_id, ATH_EXE) || l4c_search_all_src(l4c_current_mod_id, PPP_ACT) ||
          l4c_search_all_src(l4c_current_mod_id, CHLD_EXE) || l4c_search_all_src(l4c_current_mod_id, CPHS_ALS_UPDATE) ||
          l4c_search_all_src(l4c_current_mod_id, CSD_PROF_SET) || l4c_search_all_src(l4c_current_mod_id, ATD_EXE) ||
          l4c_search_all_src(l4c_current_mod_id, ATD_ECC)
          || l4c_search_all_src(l4c_current_mod_id, ATD_ECC_CHANGE_RAT)
          || l4c_search_all_src(l4c_current_mod_id, ATD_ECC_CHANGE_RAT_ABORT)
          )) || ((action == CPHS_ALS_UPDATE || action == CSD_PROF_SET || action == ABM_ACT || action == ABM_ACT_APP) &&
                                                                (l4c_search_all_src(l4c_current_mod_id, ATD_APP) ||
                                                                 l4c_search_all_src(l4c_current_mod_id, ATD_EXE) ||
                                                                 l4c_search_all_src(l4c_current_mod_id, ATD_ECC)
                                                                 || l4c_search_all_src(l4c_current_mod_id, ATD_ECC_CHANGE_RAT)
                                                                 )) ||
        (action == ATH_EXE && l4c_search_all_src(l4c_current_mod_id, CHLD_EXE)) || (action == CHLD_EXE &&
                                                                                    (l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATH_EXE) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATD_EXE) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATD_ECC) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATD_ECC_CHANGE_RAT) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATD_ECC_CHANGE_RAT_ABORT) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATA_EXE) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, SAT_ATD_EXE)))||
                                                                                     (action == ATA_EXE && 
                                                                                     (l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATH_EXE) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATD_APP) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATD_EXE) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATD_ECC) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATD_ECC_CHANGE_RAT) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, ATD_ECC_CHANGE_RAT_ABORT) ||
                                                                                     l4c_search_all_src
                                                                                     (l4c_current_mod_id, CHLD_EXE))))
    {
        kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT, l4c_ptr->cc_current_action[src_id], action);
        return KAL_TRUE;
    }

    /* mutual conflict */
    if (src_id >= RMMI_SRC)
    {
        ref_action = (l4c_ptr->cc_current_action[LMMI_SRC] == L4C_NO_ACTION) ?
            l4c_ptr->cc_current_action[SAT_SRC] : l4c_ptr->cc_current_action[LMMI_SRC];
        hash_value = ACTION_HASH(ref_action, action);
    }
    else if (src_id == LMMI_SRC)
    {
        ref_action = (l4c_ptr->cc_current_action[RMMI_SRC] == L4C_NO_ACTION) ?
            l4c_ptr->cc_current_action[SAT_SRC] : l4c_ptr->cc_current_action[RMMI_SRC];
        hash_value = ACTION_HASH(action, ref_action);
    }
    else
    {
        ref_action = (l4c_ptr->cc_current_action[LMMI_SRC] == L4C_NO_ACTION) ?
            l4c_ptr->cc_current_action[RMMI_SRC] : l4c_ptr->cc_current_action[LMMI_SRC];
        hash_value = ACTION_HASH(ref_action, action);
    }

    if (l4c_conflict_search(hash_value) == CONFLICT_NOT_FOUND)
    {
        return KAL_FALSE;
    }

    kal_brief_trace(TRACE_WARNING, WARNING_MUTUAL_CMD_CONFLICT);
    kal_brief_trace(TRACE_WARNING, WARNING_CMD_CONFLICT, l4c_ptr->cc_current_action[src_id], action);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_conflict_search
 * DESCRIPTION
 *  This is l4c_conflict_search function of L4C module.
 *  search the conflict table for match items (binary search)
 * PARAMETERS
 *  val     [IN]        Hash value of the two actions of LMMI and RMMI
 * RETURNS
 *  kal_uint8   index of the matched item in conflict table
 *****************************************************************************/
kal_uint8 l4c_conflict_search(kal_uint16 val)
{
    kal_int8 l, m, r;
    kal_int16 diff;

    l = 0;
    r = L4C_TOTAL_CONFLICT - 1;
    while (l <= r)
    {
        m = (l + r) >> 1;
        diff = L4C_CMD_CONFLICT_TABLE[m] - val;
        if (diff < 0)
        {
            l = m + 1;
        }
        else if (diff > 0)
        {
            r = m - 1;
        }
        else
        {
            return m;
        }
    }
    return CONFLICT_NOT_FOUND;
}

//mtk01616_070515 : start 1 sec retry timer fro ss change phase request


/*****************************************************************************
 * FUNCTION
 *  l4c_start_change_phase_retry_timer_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_start_change_phase_retry_timer_hdlr(kal_uint8 src_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    l4c_ptr->retry_src_id = src_id;
    l4c_ptr->retry_count++;
    l4c_ptr->ussd_version = USSD_VERSION_PHASE1;

    kal_brief_trace(TRACE_INFO, INFO_RETRY, src_id, l4c_ptr->cc_current_action[src_id], 
                    l4c_ptr->retry_cc, l4c_ptr->retry_ss, l4c_ptr->retry_count);

    if (l4c_ptr->event_id[3] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[3]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[3]));
        l4c_ptr->event_id[3] = 0;
    }

    kal_brief_trace(TRACE_INFO, INFO_L4C_START_CHANGE_PHASE_RETRY_TIMER_HDLR_START_TIMER);
    l4c_ptr->event_id[3] = evshed_set_event(
                            l4c_ptr->event_scheduler_ptr,
                            (kal_timer_func_ptr) l4c_retry_hdlr,
                            NULL,
                            10 * KAL_TICKS_100_MSEC);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_start_retry_timer_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_start_retry_timer_hdlr(kal_uint8 src_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    l4c_ptr->retry_src_id = src_id;
    l4c_ptr->retry_count++;

    kal_brief_trace(TRACE_INFO, INFO_RETRY, src_id, l4c_ptr->cc_current_action[src_id], 
                    l4c_ptr->retry_cc, l4c_ptr->retry_ss, l4c_ptr->retry_count);

    if (l4c_ptr->event_id[3] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[3]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[3]));
        l4c_ptr->event_id[3] = 0;
    }

    l4c_ptr->event_id[3] = evshed_set_event(
                            l4c_ptr->event_scheduler_ptr,
                            (kal_timer_func_ptr) l4c_retry_hdlr,
                            NULL,
                            cm_retry_timer() * KAL_TICKS_100_MSEC);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_start_sat_redial_duration_timer_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_start_sat_redial_duration_timer_hdlr(void)
{
    kal_uint32 duration_ticks = 0;
	l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
	
    if (l4c_ptr->event_id[7] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[7]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[7]));
        l4c_ptr->event_id[7] = 0;
    }

    kal_brief_trace(TRACE_INFO, INFO_L4C_START_SAT_REDIAL_DURATION_TIMER);

    /* Convert ms to ticks */
    duration_ticks = (l4c_ptr->sat_redial_duration * KAL_TICKS_10_MSEC) / 10; 

    /* time unit of sat_redial_duration is 'ms' . max timer value of event scheduler is 0xffffffff ticks */
    l4c_ptr->event_id[7] = evshed_set_event(
                            l4c_ptr->event_scheduler_ptr,
                            (kal_timer_func_ptr) l4c_sat_redial_duration_expiry_hdlr,
                            NULL,
                            duration_ticks);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_clear_sat_redial_duration_timer_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void      
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_clear_sat_redial_duration_timer_hdlr(void)
{
    if (L4C_PTR->event_id[7] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, L4C_PTR->event_id[7]);
        evshed_cancel_event(L4C_PTR->event_scheduler_ptr, &(L4C_PTR->event_id[7]));    
        L4C_PTR->event_id[7] = 0;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sat_redial_duration_expiry_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void      
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sat_redial_duration_expiry_hdlr(void)
{
    if (L4C_PTR->event_id[7] != 0)
    {
        L4C_PTR->event_id[7] = 0;
    }

    kal_brief_trace(TRACE_INFO, INFO_L4C_SET_SAT_REDIAL_FLAG,KAL_FALSE);                
    L4C_PTR->sat_redial_flag = KAL_FALSE; 
    L4C_PTR->sat_redial_duration = 0;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sat_file_change_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void      
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sat_file_change_hdlr(kal_uint8 src_id)
{
    sat_file_change_res_struct *param = NULL;
    kal_uint8 res = KAL_TRUE;

    l4c_set_user_action(L4C_SMU, src_id, FILE_CHANGE_EXE);
    
#if defined(__MODEM_CARD__) || defined(__SP_RIL_SUPPORT__) 
    if (L4C_PTR->file_changed_map & L4C_REFRESH_CSP)
    {
        L4C_PTR->file_changed_map &= 0xFFFE; // ~L4C_REFRESH_CSP
        
    #ifdef __GEMINI__
        if (sim_service_table_query(SERVICE_CSP, (kal_uint8)(l4c_current_mod_id - MOD_L4C)) == SERVICE_SUPPORT)
    #else
        if (sim_service_table_query(SERVICE_CSP) == SERVICE_SUPPORT)
    #endif
        {
            l4c_smu_read_file_info_req(src_id, FILE_CSP_IDX, NULL, 0);
            return;
        }
    }
#endif

#if defined(__ENS_RAT_BALANCING__)
    if (L4C_PTR->file_changed_map & L4C_REFRESH_RAT)
    {
        L4C_PTR->file_changed_map &= 0xFFFD; // ~L4C_REFRESH_RAT

        l4c_smu_read_file_info_req(src_id, FILE_U_ENS_RAT_IDX, NULL, 0);
        return;
    }
#endif

    l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);

    param = (sat_file_change_res_struct*) construct_local_para(sizeof(sat_file_change_res_struct), TD_UL);
    param->is_successful = res;
    param->src_id = src_id;

    l4c_send_msg_to_sim(MSG_ID_SAT_FILE_CHANGE_RES, param, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_cc_retry_allow
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]
 * RETURNS
 *  kal_bool    KAL_TRUE if cc retry is allowed; otherwise KAL_FALSE
 *****************************************************************************/
kal_bool l4c_cc_retry_allow(kal_uint8 src_id)
{
    kal_uint8 next_call_id = 0;

    l4ccsm_cc_get_CSM_call_id(&next_call_id);

    if ((L4C_PTR->retry_ss != KAL_TRUE)
        //MAUI_02009707 retry PLMN_SEARCH_REQ is not complete
        && (L4C_PTR->cc_parameter[src_id].length > 0)
        && (L4C_PTR->retry_count < L4C_PTR->max_retry_count)
        && (csmcc_is_any_call_exist() == KAL_FALSE)
        && (next_call_id == L4C_PTR->mo_call_id) /* MAUI_01618869: to prevent call_id changed during retry */
        && (L4C_PTR->cc_current_action[src_id] != ATD_ECC_CHANGE_RAT)
        && (is_ps_conf_test_xta_mode() == KAL_FALSE) //MAUI_02647858
        )
    {
        return KAL_TRUE;
    }
    
    return KAL_FALSE;
}
/*****************************************************************************
 * FUNCTION
 *  l4c_cc_retry_allow_for_fta
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]
 * RETURNS
 *  kal_bool    KAL_TRUE if cc retry is allowed; otherwise KAL_FALSE
 *****************************************************************************/
kal_bool l4c_cc_retry_allow_for_fta(kal_uint8 src_id)
{
    kal_uint8 next_call_id = 0;

    l4ccsm_cc_get_CSM_call_id(&next_call_id);

    if ((L4C_PTR->retry_ss != KAL_TRUE)
        //MAUI_02009707 retry PLMN_SEARCH_REQ is not complete
        && (L4C_PTR->cc_parameter[src_id].length > 0)
        && (L4C_PTR->retry_count <= L4C_PTR->max_retry_count)
        && (csmcc_is_any_call_exist() == KAL_FALSE)
        && (next_call_id == L4C_PTR->mo_call_id) /* MAUI_01618869: to prevent call_id changed during retry */
        && (L4C_PTR->cc_current_action[src_id] != ATD_ECC_CHANGE_RAT)
        )
    {
        return KAL_TRUE;
    }
    
    return KAL_FALSE;
}
/*****************************************************************************
 * FUNCTION
 *  l4c_need_retry
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cause       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_need_retry(kal_uint16 cause)
{
    switch (cause)
    {
            /* RR cause */
        case CM_MM_ACCESS_BARRED:
        case CM_MM_ASSIGNMENT_REJECT:
        case CM_MM_RANDOM_ACCES_FAILURE:
        case CM_MM_RR_NO_SERVICE:
        case CM_MM_RR_CONN_RELEASE:

    #ifdef __GEMINI__
        case CM_RR_SUSPEND_FOR_CS_SIG:
        case CM_RR_SUSPEND_FOR_CS_CALL:
        case CM_RR_SUSPEND_FOR_PS_SIG:
        case CM_RR_SUSPEND_FOR_PS_DATA:
        case CM_RR_SUSPEND_UNSPECIFIED:
    #endif /* __GEMINI__ */ 

            /* MM cause */
        case CM_MM_CONN_TIMEOUT:
        case CM_MM_MSC_TEMP_NOT_REACHABLE:
        case CM_MM_NETWORK_FAILURE:
        case CM_MM_MAC_FAILURE:
        case CM_MM_SYNC_FAILURE:
        case CM_MM_CONGESTION:
        case CM_MM_SERV_OPTION_TEMP_OUT_OF_ORDER:
        case CM_MM_NO_PDP_CONTEXT_ACTIVATED:
        case CM_MM_RETRY_UPON_ENTRY_INTO_NEWCELL_MIN:
        case CM_MM_RETRY_UPON_ENTRY_INTO_NEWCELL_MAX:
        case CM_MM_MSG_NOT_COMPAT_WITH_PROTO_STATE:

        case CM_MM_ABORT_BY_NW:

        case CM_MM_CM_ENQUEUE_FAIL:
        case CM_MM_STATE_NOT_ALLOWED_CM:
        case CM_MM_NO_SERVICE:
        case CM_MM_IMSI_UNKNOWN_IN_VLR:        //mtk00468 040408 add for cannon+SCR 828
        case CM_MM_NOT_UPDATED:

        case CM_MM_INVALID_MM_MAND_INFO:

            /* SMS cause */
        case SMS_CP_RETRY_EXCEED:
        case SMS_CONNECTION_BROKEN:

            /* CC cause */

        case CM_NO_CIRCUIT_CHANNEL_AVAIL:
        case CM_TEMPORARY_FAILURE:
        case CM_SWITCH_EQUIPMENT_CONGESTION:
        case CM_REQUESTED_CKT_CHANEL_NOT_AVIL:
        case CM_RESOURCE_UNAVAIL_UNSPECIFIED:
        case CM_INTER_WRK_UNSPECIFIED:
        case CM_RR_PLMN_SRCH_REJ_EMERGENCY: 
            return KAL_TRUE;
        default:
            return KAL_FALSE;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_need_retry_other_rat
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cause       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_need_retry_other_rat(kal_uint8 src_id, kal_uint16 cause)
{
    kal_uint8 tmp_retry_count=0;
    
#if defined(__GSM_RAT__) && defined(__UMTS_RAT__)
#if defined(__GEMINI__)
    if (l4c_current_mod_id != MOD_L4C)
    {
        /* currently only SIM1 can support multi-RAT */
        return KAL_FALSE;
    }
#endif

#if 0 //MAUI_02320299 when no service in single RAT, L4C shall also retry other RAT
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    if ((L4C_PTR->retry_cc == KAL_FALSE) && 
        (cause != CM_MM_NO_SERVICE) && (cause != CM_MM_EMERGENCY_NOT_ALLOWED))
    {
        /* retry in the same RAT again.
           only change RAT retry if retry fail or cause=CM_MM_NO_SERVICE */
        return KAL_FALSE;
    }
    


    /* check normal retry conditions except retry count 
       change RAT retry is the final trick after normal retry fail
    */
    tmp_retry_count = L4C_PTR->retry_count;

    L4C_PTR->retry_count = L4C_PTR->max_retry_count-1;
    if (l4c_cc_retry_allow(src_id) == KAL_FALSE)
    {
        /* reset to original retry_count */
        L4C_PTR->retry_count = tmp_retry_count;
        return KAL_FALSE;
    }
    else
    {
        L4C_PTR->retry_count = tmp_retry_count;
        return KAL_TRUE;
    }


#else
    return KAL_FALSE;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_get_ecc_retry_new_rat
 * DESCRIPTION
 *  This function is used to get the new RAT for ECC retry. It checks the user
 *  setting first. If the user setting is single RAT, it returns the other RAT.
 *  Otherwise, it further checks the current camped RAT to decide the new RAT.
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  The new RAT which ECC will retry on 
 *****************************************************************************/
kal_uint8 l4c_get_ecc_retry_new_rat(void) //MAUI_02320299
{
    rat_enum new_rat;
    
    switch (l4crac_get_rat_mode())
    {
        case RAT_GSM:
        {
            new_rat = RAT_UMTS;
            break;
        }
        case RAT_UMTS:
        {
            new_rat = RAT_GSM;
            break;
        }
        case RAT_GSM_UMTS:
        {
            switch (l4crac_get_current_rat())
            {
                case RAT_GSM:
                    new_rat = RAT_UMTS;
                    break;
                case RAT_UMTS:
                    new_rat = RAT_GSM;
                    break;
                default:
                    new_rat = RAT_NONE;
            }
            break;
        }
        default:
            new_rat = RAT_NONE;
    }
    return (kal_uint8)new_rat;
}



/*****************************************************************************
 * FUNCTION
 *  l4c_retry_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_retry_hdlr()
{
    //MAUI_02009707 always reset event whenever time out
    if (L4C_PTR->event_id[3] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, L4C_PTR->event_id[3]);
        /* no need to cancel event in time out handler
        evshed_cancel_event(L4C_PTR->event_scheduler_ptr, &(L4C_PTR->event_id[3]));
        */
        L4C_PTR->event_id[3] = 0;
    }
    
    if (L4C_PTR->retry_cc == KAL_TRUE)
    {
        l4c_send_msg_hdlr(L4C_PTR->retry_src_id, L4C_CALL_OPERATION);
    }
    else if (L4C_PTR->retry_ss == KAL_TRUE)
    {
        l4c_send_msg_hdlr(L4C_PTR->retry_src_id, L4C_SS_OPERATION);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]
 *  operation   [IN] l4c_operation_type_enum
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_hdlr(kal_uint8 src_id, kal_uint8 operation)
{
    local_para_struct *local_para_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    //cc
    if (operation == L4C_CALL_OPERATION)
    {
        switch (l4c_ptr->cc_current_action[src_id])
        {
            case ATD_EXE:
            case ATD_ECC:
            case ATD_APP:
        #if defined(__TCPIP_OVER_CSD__) 
            case ABM_ACT:
            case ABM_ACT_ECC:
        #endif
        #ifdef __SAT__
            case SAT_ATD_EXE:
        #endif
            case ATD_ECC_CHANGE_RAT:
                local_para_ptr = (local_para_struct*) l4c_ptr->cc_parameter[src_id].data;
                if (local_para_ptr->ref_count < 2)
                {
                    hold_local_para((local_para_struct*) l4c_ptr->cc_parameter[src_id].data);
                }

                l4c_send_queued_msg(src_id, L4C_CALL_OPERATION); //MAUI_02626058

                break;
        }
    }
    //ss
    else if (operation == L4C_SS_OPERATION)
    {
        if(src_id == l4c_ptr->ss_user)            
        {
            switch (l4c_ptr->ss_current_action)
            {
                case PARSE_SS_EXE:
            #ifdef __SAT__
                case SAT_USD_EXE:
            #endif
                /* mtk00924: ss_parameter is constructed when receiving l4ccsm_ciss_ss_parse_cnf, so we don't have to hold here,
                   or 256 buffer will run out becasue of CSM can not release it */
                    l4c_send_queued_msg(src_id, L4C_SS_OPERATION); //MAUI_02626058

                    if (l4c_ptr->ss_parameter.length > 0)
                    {
                        l4c_ptr->ss_parameter.length = 0;
                        l4c_ptr->ss_parameter.data = NULL;
                    }
                    break;
                case CUSD_EXE:
                /* mtk02508_090415: from AT+CUSD, it goes L4CCSM_CISS_PUSSR_BEGIN_REQ instead of 
                   L4CCSM_CISS_SS_PARSE_REQ. So we have to hold ss_parameter here.*/
                    local_para_ptr = (local_para_struct*) l4c_ptr->ss_parameter.data;
                    if (local_para_ptr->ref_count < 2)
                    {
                        hold_local_para((local_para_struct *)l4c_ptr->ss_parameter.data);
                    }
                    l4c_send_queued_msg(src_id, L4C_SS_OPERATION); //MAUI_02626058
                    break;
            }
        }
    }
        
    
}


/*****************************************************************************
 * FUNCTION
 *  l4c_mcd_pack
 * DESCRIPTION
 *  
 * PARAMETERS
 *  structid        [IN]        
 *  msg             [?]         
 *  hdr_size        [IN]        
 *  tlr_size        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
peer_buff_struct *l4c_mcd_pack(kal_uint16 structid, kal_uint8 *msg, kal_uint8 hdr_size, kal_uint8 tlr_size)
{
    peer_buff_struct *peer_buff_ptr;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint16 len, length;

    length = (kal_uint16)((mcd_pack(structid, l4_pun_dest_buff, sizeof(l4_pun_dest_buff), msg) + 7) >> 3);
    if (length >= 2048)
    {
        ASSERT(0);
    }

    peer_buff_ptr = (peer_buff_struct*) construct_peer_buff(length, hdr_size, tlr_size, TD_DL);

    pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu(peer_buff_ptr, &len);

    kal_mem_cpy(pdu_stream_ptr, l4_pun_dest_buff, length);

    return peer_buff_ptr;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_mcd_unpack
 * DESCRIPTION
 *  
 * PARAMETERS
 *  structid            [IN]        
 *  peer_buff_ptr       [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_uint16 l4c_mcd_unpack(kal_uint16 structid, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 *pdu_stream_ptr;
    kal_uint16 packed_peer_buff_len;
    kal_uint16 ret_val;

    pdu_stream_ptr = get_peer_buff_pdu(peer_buff_ptr, &packed_peer_buff_len);

    ret_val = (kal_uint16)((mcd_unpack(
                structid,
                l4_pun_dest_buff,
                sizeof(l4_pun_dest_buff),
                (kal_uint32*) pdu_stream_ptr,
                packed_peer_buff_len * 8)) >> 3);

    return ret_val;
}   /* end of smsal_mcd_unpack */


/*****************************************************************************
* 2004 02 28 comment by mtk00714 
* FUNCTION
*  check_multi_command
*
* DESCRIPTION
*   This function to see if there exists multi commands need to be process.
*  If yes, call rmmi_cmd_processor
*   !!THIS FUNCTION MUST BE CALLED 
*     when l4c changes its state from  "L4C_CMD_FORWARDED_FOR_ACTION_STATE" 
*                       to  "L4C_IDLE_STATE" 
* PARAMETERS
*
* RETURNS
*   KAL_FALSE => not multi command 
*  KAL_TRUE => is mutli command 
* GLOBALS AFFECTED
*  none.
*****************************************************************************/


/*****************************************************************************
 * FUNCTION
 *  check_multi_command
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool check_multi_command(kal_uint8 result)
{
#if 1
    return KAL_FALSE;
#endif 
}

#ifdef __MOD_TCM__


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_send_data_timer_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_gprs_send_data_timer_hdlr()
{

    if (L4C_PTR->event_id[2] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, L4C_PTR->event_id[2]);
        evshed_cancel_event(L4C_PTR->event_scheduler_ptr, &(L4C_PTR->event_id[2]));
        L4C_PTR->event_id[2] = 0;
    }

    L4C_PTR->event_id[2] = evshed_set_event(L4C_PTR->event_scheduler_ptr, (kal_timer_func_ptr) l4c_gprs_data_timeout_hdlr, NULL, 6 * KAL_TICKS_100_MSEC);       //simon 10->8->6 for testcase 53116
}

//mtk00714 w0634


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_data_timeout_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_gprs_data_timeout_hdlr()
{
    kal_uint8 cid = 0;
    kal_uint8 index = 0;
/* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)    
    peer_buff_struct *flc_buf_ptr = NULL;
    kal_uint8 src_id = 0;
#endif /*~!defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__) */            
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    /* clear event schedule */
    if (l4c_ptr->event_id[2] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[2]);
        //evshed_cancel_event (l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[2]));
        l4c_ptr->event_id[2] = 0;
    }

    /* if(index == 0) */
    if (l4c_ptr->gprs_em_send_data_size[0] > 0)
    {
        index = 0;
        //cid = TCM_AT_PDP_CID; //1
        //src_id = RMMI_SRC;
    }
    else if (l4c_ptr->gprs_em_send_data_size[1] > 0)
    {
        index = 1;
        //cid = TCM_EM_PDP_CID_1; //2
        //src_id = LMMI_SRC;
    }
    else if (l4c_ptr->gprs_em_send_data_size[2] > 0)
    {
        index = 2;
        //cid = TCM_EM_PDP_CID_2; //3
        //src_id = LMMI_SRC;
    }
    cid = index + 1;
    
    /* 
     * For flow control buffer UT GPRS_FLC_UT MAUI_02419672 mtk02126 
     * We free flc buff here. l4c_ps_exe_send_data_req() can get new buff again.
     */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)
    while(lcd_lqueue_is_empty(l4c_ptr->gprs_flc_queue) == KAL_FALSE)
    {
        flc_buf_ptr = lcd_lqueue_remove(l4c_ptr->gprs_flc_queue, NULL);
        flc2_free_peer_buff(l4c_ps_get_flc_pool_id_for_act_test(src_id, cid), flc_buf_ptr);
    }
#endif /*~!defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__) */            

    l4c_ps_exe_send_data_req(l4c_ptr->gprs_em_send_data_srcid[index], cid, l4c_ptr->gprs_em_send_data_size[index]);

    if (l4c_ptr->gprs_em_send_data_size[0] > 0 || l4c_ptr->gprs_em_send_data_size[1] > 0 || l4c_ptr->gprs_em_send_data_size[2] > 0)
    {
        l4c_gprs_send_data_timer_hdlr();
    }


}


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_connection_timer_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_gprs_connection_timer_hdlr()
{

    if (L4C_PTR->event_id[2] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, L4C_PTR->event_id[2]);
        evshed_cancel_event(L4C_PTR->event_scheduler_ptr, &(L4C_PTR->event_id[2]));
        L4C_PTR->event_id[2] = 0;
    }

    L4C_PTR->event_id[2] = evshed_set_event(
                            L4C_PTR->event_scheduler_ptr,
                            (kal_timer_func_ptr) l4c_gprs_connection_timerout_hdlr,
                            NULL,
                            custom_l4c_gprs_when_needed_timer() * KAL_TICKS_100_MSEC); // MAUI_02598495, custom gprs detach timer

}


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_connection_timerout_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_gprs_connection_timerout_hdlr()
{

    /* clear event schedule */
    if (L4C_PTR->event_id[2] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, L4C_PTR->event_id[2]);
        //evshed_cancel_event (L4C_PTR->event_scheduler_ptr,
        //                  &(L4C_PTR->event_id[2]));
        L4C_PTR->event_id[2] = 0;
    }

    l4c_nw_exe_gprs_connection_type();
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_dialup_check_existence
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_ps_dialup_check_existence(kal_uint8 sim_id)
{
#if defined(__PS_DIALUP__)
    l4c_context_struct *l4c_ptr = NULL;
    kal_bool exist = KAL_FALSE;   
    kal_uint8 cid = 1;

    if (sim_id < L4_MAX_SIM_NUM)
    {
        l4c_ptr = &l4c_cntxt_g[sim_id];
        for (cid=1; cid<=MAX_EXT_PDP_CONTEXT; cid++)
        {
            if (uart_port_null != l4c_ptr->ps_dialup_port[cid])
            {
                exist = KAL_TRUE;
                break;
            }
        }    
        return exist;        
    }
    else
    {
        ASSERT(0);
        return exist;
    }
#else
    return KAL_FALSE;
#endif /* __PS_DIALUP__ */    
    
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_dialup_set_port2cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_dialup_set_port2cid(kal_uint16 port, kal_uint8 cid)
{
#if defined(__PS_DIALUP__)
    l4c_context_struct *l4c_ptr = L4C_PTR;         
    if ((cid > MAX_EXT_PDP_CONTEXT) || (0 == cid))
    {
        kal_brief_trace(TRACE_ERROR, ERROR_L4C_SET_PS_DIALUP_PORT_WITH_INVALID_CID, cid);
        ASSERT(0);
    }
    else
    {
        l4c_ptr->ps_dialup_port[cid] = port;
    }    
    {
        kal_uint8 cid = 0;
        kal_prompt_trace(l4c_current_mod_id, "l4c_ps_dialup_set_port2cid(): port=%d, cid=%d", port, cid);
        for (cid=0; cid<MAX_EXT_PDP_CONTEXT; cid++)
        {
            kal_prompt_trace(l4c_current_mod_id, "l4c_ptr->ps_dialup_port[%d] = %d", cid, l4c_ptr->ps_dialup_port[cid]);
        }
    }
#endif /* __PS_DIALUP__ */
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_dialup_reset_port2cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_dialup_reset_port2cid(kal_uint8 cid)
{
    l4c_ps_dialup_set_port2cid(uart_port_null, cid);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_dialup_get_cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_uint8 l4c_ps_dialup_get_cid(kal_uint16 port)
{
#if defined(__PS_DIALUP__)
        l4c_context_struct *l4c_ptr = L4C_PTR;
        kal_uint8 cid = 1;
        kal_uint8 return_cid = 0;
        for (cid=1; cid<=MAX_EXT_PDP_CONTEXT; cid++)
        {
            if (port == l4c_ptr->ps_dialup_port[cid])
            {
                return_cid = cid;
                break;
            }
        }    
        return return_cid;
#else
        return 0;
#endif /* __PS_DIALUP__ */
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_dialup_get_port
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_uint16 l4c_ps_dialup_get_port(kal_uint8 cid)
{
#if defined(__PS_DIALUP__)
    kal_uint16 ret_port = uart_port_null;
    if ((cid > MAX_EXT_PDP_CONTEXT) || (0 == cid))
    {
        kal_brief_trace(TRACE_ERROR, ERROR_L4C_GET_PS_DIALUP_PORT_WITH_INVALID_CID, cid);
        ASSERT(0);        
    }
    else
    {
        ret_port = L4C_PTR->ps_dialup_port[cid];
    }    
    return ret_port;
#else   
    return uart_port_null;
#endif /* __PS_DIALUP__ */
}

l4c_data_bearer_capablility_enum l4c_convert_data_speed_support_enum(data_speed_activate_enum low_layer_value)
{
    l4c_data_bearer_capablility_enum ret = L4C_NONE_ACTIVATE;

    switch(low_layer_value)
    {
        case DATA_SPEED_NONE_ACTIVATE:
            ret = L4C_NONE_ACTIVATE;
            break;

        case DATA_SPEED_GPRS_CAPABILITY:
            ret = L4C_GPRS_CAPABILITY;
            break;

        case DATA_SPEED_EDGE_CAPABILITY:
            ret = L4C_EDGE_CAPABILITY;
            break;
            
        case DATA_SPEED_UMTS_CAPABILITY:
            ret = L4C_UMTS_CAPABILITY;
            break;

        case DATA_SPEED_HSDPA_CAPABILITY:
            ret = L4C_HSDPA_CAPABILITY;
            break;
            
        case DATA_SPEED_HSUPA_CAPABILITY:
            ret = L4C_HSUPA_CAPABILITY;
            break;

        case DATA_SPEED_HSDPA_HSUPA_CAPABILITY:
            ret = L4C_HSDPA_HSUPA_CAPABILITY;
            break;

        case DATA_SPEED_HSDPAP_CAPABILITY:
            ret = L4C_HSDPAP_CAPABILITY;
            break;

        case DATA_SPEED_HSDPAP_UPA_CAPABILITY:
            ret = L4C_HSDPAP_UPA_CAPABILITY;
            break;

        case DATA_SPEED_HSUPAP_CAPABILITY:
            ret = L4C_HSUPAP_CAPABILITY;
            break;

        case DATA_SPEED_HSUPAP_DPA_CAPABILITY:
            ret = L4C_HSUPAP_DPA_CAPABILITY;
            break;

        case DATA_SPEED_HSPAP_CAPABILITY:
            ret = L4C_HSPAP_CAPABILITY;
            break;

        case DATA_SPEED_DC_DPA_CAPABILITY:
            ret = L4C_DC_DPA_CAPABILITY;
            break;

        case DATA_SPEED_DC_DPA_UPA_CAPABILITY:
            ret = L4C_DC_DPA_UPA_CAPABILITY;
            break;

        case DATA_SPEED_DC_HSDPAP_CAPABILITY:
            ret = L4C_DC_HSDPAP_CAPABILITY;
            break;

        case DATA_SPEED_DC_HSDPAP_UPA_CAPABILITY:
            ret = L4C_DC_HSDPAP_UPA_CAPABILITY;
            break;

        case DATA_SPEED_DC_HSUPAP_DPA_CAPABILITY:
            ret = L4C_DC_HSUPAP_DPA_CAPABILITY;
            break;

        case DATA_SPEED_DC_HSPAP_CAPABILITY:
            ret = L4C_DC_HSPAP_CAPABILITY;
            break;
            
        case DATA_SPEED_LTE_CAPABILITY:
            ret = L4C_LTE_CAPABILITY;
            break;
    }

    return ret;
}

#if defined(__IPV4V6__) && defined(__IPV6__)
/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_act_table_print
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_gprs_ipv4v6_act_table_print(l4c_gprs_ipv4v6_act_struct* act_ptr)
{
    kal_uint32 i = 0;
    kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_ACT_TABLE_SRC_CID_CAUSE, 
        act_ptr->src_id, act_ptr->init_cid, act_ptr->cause);
    
    for(i=0; i<L4C_IPV4V6_ACT_TABLE_SIZE; i++)
    {
        kal_brief_trace(TRACE_INFO, 
            INFO_L4C_GPRS_IPV4V6_ACT_TABLE_ENTRY, 
            i, act_ptr->table[i].pdp_type, act_ptr->table[i].cid, act_ptr->table[i].state);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_act_table_construct
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
l4c_gprs_ipv4v6_act_struct* l4c_gprs_ipv4v6_act_table_construct(kal_uint8 init_cid, kal_uint8 src_id, kal_bool v4_first)
{
    l4c_gprs_ipv4v6_act_struct* act_ptr = (l4c_gprs_ipv4v6_act_struct*) 
		get_ctrl_buffer(sizeof(l4c_gprs_ipv4v6_act_struct));

    kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_ACT_TABLE_CONSTRUCTION, init_cid, src_id, v4_first);
    kal_mem_set((void*)act_ptr, 0, sizeof(l4c_gprs_ipv4v6_act_struct));
    // act_ptr->cause = 0;
    act_ptr->init_cid = init_cid;
    act_ptr->src_id = src_id;
    act_ptr->cause = L4C_NO_CAUSE;

    act_ptr->table[0].pdp_type = IPV4V6_ADDR_TYPE;
    act_ptr->table[0].cid = init_cid;
    //act_ptr->table[0].state = L4C_IPV4V6_STATE_NONE;

    //the pdp_type order can be customized - can be used to adjust activation order
    if (KAL_TRUE == v4_first)
    {
        act_ptr->table[1].pdp_type = IPV4_ADDR_TYPE;
        act_ptr->table[2].pdp_type = IPV6_ADDR_TYPE;
    }
    else
    {
        act_ptr->table[1].pdp_type = IPV6_ADDR_TYPE;
        act_ptr->table[2].pdp_type = IPV4_ADDR_TYPE;
    }

    //act_ptr->table[1].cid = 0;
    //act_ptr->table[2].cid = 0;
    //act_ptr->table[1].state = L4C_IPV4V6_STATE_NONE;
    //act_ptr->table[2].state = L4C_IPV4V6_STATE_NONE;

    act_ptr->max_activation_count = L4C_IPV4V6_ACT_TABLE_SIZE; //note: it only needs 2. Use L4C_IPV4V6_ACT_TABLE_SIZE(3) here to offer 1 extra retry.

    //l4c_gprs_ipv4v6_act_table_print(act_ptr);
	return act_ptr;
} /* end of l4c_gprs_ipv4v6_act_table_construct() */


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_act_table_free
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_gprs_ipv4v6_act_table_free(l4c_gprs_ipv4v6_act_struct* act_ptr)
{
    kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_ACT_TABLE_FREE, act_ptr->init_cid);
    //l4c_gprs_ipv4v6_act_table_print(act_ptr);
    free_ctrl_buffer(act_ptr);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_check_cid_existence
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_gprs_ipv4v6_check_cid_existence(l4c_gprs_ipv4v6_act_struct* act_ptr, kal_uint8 cid)
{
    kal_uint32 i = 0;
    kal_bool result = KAL_FALSE;

    if (0 != cid)
    {
        for(i=0; i<L4C_IPV4V6_ACT_TABLE_SIZE; i++)
        {
            if (act_ptr->table[i].cid == cid)
            {
                result = KAL_TRUE;
                break;
            }
        } 
    }
    
    kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_CHECK_CID_IN_ACT_TABLE, cid, result);
    return result;
} /* end of l4c_gprs_ipv4v6_check_cid_existence() */


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_get_ongoing_cid_by_type
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_uint8 l4c_gprs_ipv4v6_get_ongoing_cid_by_type(l4c_gprs_ipv4v6_act_struct* act_ptr, kal_uint8 pdp_type)
{
    kal_uint32 i = 0;

    for(i=0; i<L4C_IPV4V6_ACT_TABLE_SIZE; i++)
    {
        if ((act_ptr->table[i].pdp_type == pdp_type) && 
            (act_ptr->table[i].state == L4C_IPV4V6_STATE_NONE))
        {
            return (act_ptr->table[i].cid);
        }
    } 
    return 0;
 
} /* end of l4c_gprs_ipv4v6_get_cid_by_type() */


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_update_state_by_type
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_gprs_ipv4v6_update_state_by_type(l4c_gprs_ipv4v6_act_struct* act_ptr, kal_uint8 state, kal_uint8 target_type)
{
    kal_uint32 i = 0;
    kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_UPDATE_STATE_BY_PDP_TYPE, target_type, state);
    
    for(i=0; i<L4C_IPV4V6_ACT_TABLE_SIZE; i++)
    {
        if (act_ptr->table[i].pdp_type == target_type)
        {
            act_ptr->table[i].state = state;
            //l4c_gprs_ipv4v6_act_table_print(act_ptr);
            return;
        }
    }
    ASSERT(0);
} /* end of l4c_gprs_ipv4v6_update_state_by_type() */


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_update_cid_by_type
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_gprs_ipv4v6_update_cid_by_type(l4c_gprs_ipv4v6_act_struct* act_ptr, kal_uint8 cid, kal_uint8 target_type)
{
    kal_uint32 i = 0;
    kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_UPDATE_CID_BY_PDP_TYPE, target_type, cid);

    for(i=0; i<L4C_IPV4V6_ACT_TABLE_SIZE; i++)
    {
        if (act_ptr->table[i].pdp_type == target_type)
        {
            act_ptr->table[i].cid = cid;
            //l4c_gprs_ipv4v6_act_table_print(act_ptr);            
            return;
        }
    }
    ASSERT(0);
} /* end of l4c_gprs_ipv4v6_update_cid_by_type() */



/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_prepare_new_cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_uint8 l4c_gprs_ipv4v6_prepare_new_cid(l4c_gprs_ipv4v6_act_struct* act_ptr, kal_uint8 new_pdp_type, kal_bool is_ext_pdp)   
{
    kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_PREPARE_NEW_CID_ENTRY, new_pdp_type, act_ptr->init_cid);
    if (KAL_FALSE == is_ext_pdp) //V6_TODO: how to support INT PDP context???
    {
        return INVALID_PDP_CONTEXT_ID; //mtk02285, MAUI_03127025, IPV4V6 fallback: cid2 vs. ps_dialup_port[]
    }
    else
    {
        kal_uint8 i = 0;
        kal_uint8 new_cid = 0;        

        i = act_ptr->init_cid + 1;
        while (i <= MAX_EXT_PDP_CONTEXT) //V6_TODO: how to support INT PDP context???
        {
            if (KAL_FALSE == l4ctcm_check_is_context_valid(i)) //find not-in-use cid, it should be NOT VALID
            {
                new_cid = i;
                break;
            }
            else
            {
                i++;
            }
        }
        if (0 == new_cid)
        {
            i = 1;
            while(i < act_ptr->init_cid)
            {
                if (KAL_FALSE == l4ctcm_check_is_context_valid(i)) //find not-in-use cid, it should be NOT VALID
                {
                    new_cid = i;
                    break;
                }
                else
                {
                    i++;
                }
            }        
        }

        kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_PREPARE_NEW_CID_COMPLETE, new_cid);
        if (0 == new_cid)
        {
            return INVALID_PDP_CONTEXT_ID; //mtk02285, MAUI_03127025, IPV4V6 fallback: cid2 vs. ps_dialup_port[]
        }
        else
        {
            kal_uint32 i = 0;
            l4ctcm_sib_cpy(new_cid, act_ptr->init_cid);
            //update before send: l4ctcm_update_pdp_type_length(new_cid, new_pdp_type, (IPV4_ADDR_TYPE==new_pdp_type)?(IPV4_ADDR_LEN):(IPV6_ADDR_LEN));

            for(i=0; i<L4C_IPV4V6_ACT_TABLE_SIZE; i++)
            {
                if (act_ptr->table[i].pdp_type == new_pdp_type)
                {
                    act_ptr->table[i].cid = new_cid;
                }
            }                            
            l4c_gprs_ipv4v6_act_table_print(act_ptr);
            return new_cid; //mtk02285, MAUI_03127025, IPV4V6 fallback: cid2 vs. ps_dialup_port[]
        }
    }
} /* end of l4c_gprs_ipv4v6_prepare_new_cid() */


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_run_activation()
 * DESCRIPTION
 *  
 * PARAMETERS
 *  l4c_gprs_ipv4v6_act_struct* act_ptr
 * RETURNS
 *  kal_bool If return KAL_FALSE, it means V4V6 activation is NOT finished yet.
 *           There is still next round.
 *           If return KAL_TRUE, it means V4V6 activation is FINISHED!
 *****************************************************************************/
kal_bool l4c_gprs_ipv4v6_run_activation(l4c_gprs_ipv4v6_act_struct* act_ptr, l4c_ipv4v6_activator_enum user)
{
    kal_uint8 cid = 0;
    kal_uint32 i = 0;
    pdp_addr_type_enum act_pdp_type = NULL_PDP_ADDR_TYPE;

    kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_RUN_ACTIVATION, act_ptr->init_cid, act_ptr->max_activation_count);
    l4c_gprs_ipv4v6_act_table_print(act_ptr);    
    if (act_ptr->max_activation_count == 0)
    {
        return KAL_TRUE;
    }
    
    for(i=0; i<L4C_IPV4V6_ACT_TABLE_SIZE; i++)
    {
        if (act_ptr->table[i].state == L4C_IPV4V6_STATE_NONE)
        {
            cid = act_ptr->table[i].cid;
            act_pdp_type = (pdp_addr_type_enum) act_ptr->table[i].pdp_type;
            break;
        }
    }
    
    if (0 != cid)
    {
        //1. different interface for different users
        if (L4C_IPV4V6_PDP_ACTIVATOR_IS_L4C == user)
        {
            tcm_pdp_activate_req_struct *param_ptr = (tcm_pdp_activate_req_struct*)
                construct_local_para((kal_uint16) sizeof(tcm_pdp_activate_req_struct), TD_RESET);     
            param_ptr->src_id = act_ptr->src_id;
            param_ptr->context_id = cid;
    	#if defined(__NDIS_SUPPORT__) && defined(__UPS_SUPPORT__)
            param_ptr->additional_para_type = TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID;
    		param_ptr->additional_para_content = MOD_UPS;
        #endif 
            //update before send:
            l4ctcm_update_pdp_type(cid, act_pdp_type);
            l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_ACTIVATE_REQ, param_ptr);
        }
        else if (L4C_IPV4V6_PDP_ACTIVATOR_IS_PPP == user)
        {
            l4cppp_ipv4v6_fallback_rsp_struct* param_ptr = (l4cppp_ipv4v6_fallback_rsp_struct*)
                construct_local_para((kal_uint16) sizeof(l4cppp_ipv4v6_fallback_rsp_struct), TD_RESET);     

            if (cid != act_ptr->init_cid)
            {
                l4c_ps_dialup_set_port2cid(l4c_ps_dialup_get_port(act_ptr->init_cid), cid); 
            } //mtk02285, MAUI_03144268
            
            param_ptr->activate_next_pdp = KAL_TRUE;
            param_ptr->activate_pdp_cid = cid;
            param_ptr->activate_pdp_type = act_pdp_type;
            param_ptr->activate_port = (kal_uint8)l4c_ps_dialup_get_port(cid); //mtk02285, MAUI_03127025, IPV4V6 fallback: cid2 vs. ps_dialup_port[]
            //update before send:
            l4ctcm_update_pdp_type(cid, act_pdp_type);
            l4c_send_msg_to_ppp(MSG_ID_L4CPPP_IPV4V6_FALLBACK_RSP, param_ptr);            
        }
        else
        {
            ASSERT(0);
        }

        //2. common part
        (act_ptr->max_activation_count)--;
        return KAL_FALSE;        
    }
    else
    {
    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif /* 0 */ //mtk02285, 20111130, duplicate rsp msg, since L4C sends it when back to l4cppp_ipv4v6_fallback_ind_hdlr
        return KAL_TRUE;
    }
    
} /* end of l4c_gprs_ipv4v6_run_activation() */

/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_check_pdp_addr_number
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_uint8 l4c_gprs_ipv4v6_check_active_pdp_number(l4c_gprs_ipv4v6_act_struct* act_ptr)
{
    kal_uint32 i = 0;
    kal_uint8 pdp_addr_num = 0;

    for(i=0; i<L4C_IPV4V6_ACT_TABLE_SIZE; i++)
    {
        if (act_ptr->table[i].state == L4C_IPV4V6_STATE_ACCEPT)
        {
            if (act_ptr->table[i].pdp_type == IPV4V6_ADDR_TYPE)
            {
                pdp_addr_num += 2;
            }
            else if ((act_ptr->table[i].pdp_type == IPV4_ADDR_TYPE) || (act_ptr->table[i].pdp_type == IPV6_ADDR_TYPE))
            {
                pdp_addr_num++;
            }
        }
    } 
    return pdp_addr_num;
 
} /* end of l4c_gprs_ipv4v6_check_pdp_addr_number() */

/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_pdp_activate_req_helper
 * DESCRIPTION
 *  It is used to construct IPV4V6 activation struct for NDIS or PS dialup
 * RETURNS
 *  If it is now allowed to construct new v4v6 activation struct, return FALSE.
 *  Otherwise, return TRUE.
 * USAGE
 *   1.  l4c_ps_exe_act_req()
 *   2.1 l4cphb_approve_cnf_hdlr()      - Not defined(__PHB_APPROVE_BY_MMI__)
 *   2.2 l4c_ps_exe_enter_data_state_req()  - defined(__PHB_APPROVE_BY_MMI__) 
 *****************************************************************************/
kal_bool l4c_gprs_ipv4v6_pdp_activate_req_helper(l4c_gprs_ipv4v6_act_struct** v4v6_act_ptr, kal_uint8 cid, kal_uint8 src_id, kal_uint8 pdp_type) //L4CPPP_FB
{
    l4c_gprs_ipv4v6_act_struct* act_ptr = *v4v6_act_ptr;
    kal_bool result = KAL_TRUE;
	/*****************************************************************************************
	 V6_NOTE: 
	 1. if target cid's PDP type==V4V6, create v4v6_act struct here and keep it in L4C context
	 2. only support 1 IPV4V6 activation at a time
	 *****************************************************************************************/            
    if (IPV4V6_ADDR_TYPE == pdp_type)
    {
        if (KAL_TRUE == L4C_COMM_PTR->ipv4v6_fallback_enable)
        {            
            if (NULL == act_ptr)
            {
                act_ptr = l4c_gprs_ipv4v6_act_table_construct(cid, src_id, L4C_COMM_PTR->ipv4v6_fallback_v4_first);
				*v4v6_act_ptr = act_ptr;
            }
            else
            {
                kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_ALREADY_1_ONGOING_ACTIVATION, 
                    act_ptr->init_cid, act_ptr->src_id);
                result = KAL_FALSE;
            }
        }
        else
        {
            kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_IPV4V6_FALLBACK_OFF);
        }                              
    }
    return result;
}/* end of l4c_gprs_ipv4v6_pdp_activate_req_helper() */


/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_pdp_activate_cnf_helper
 * DESCRIPTION
 *  
 * RETURNS
 *   if activation is done, return TRUE. Otherwise, return FALSE
 * USAGE
 *   1.  tcm_pdp_activate_cnf_hdlr()
 *   2.  l4cppp_ipv4v6_fallback_ind_hdlr() ... accept part
 *****************************************************************************/
kal_bool l4c_gprs_ipv4v6_pdp_activate_cnf_helper(
    l4c_gprs_ipv4v6_act_struct** v4v6_act_ptr, 
    l4c_ipv4v6_activator_enum user,
    kal_uint8 context_id, 
    kal_uint8 pdp_type, 
    kal_bool cause2_present, 
    kal_uint16 cause2,
    kal_bool* rsp_result,
    kal_uint16* rsp_cause
)
{
    kal_bool activation_complete = KAL_TRUE;
    l4c_gprs_ipv4v6_act_struct* act_ptr = *v4v6_act_ptr;		
    kal_uint8 prepare_new_cid = INVALID_PDP_CONTEXT_ID;
    
    if ((NULL != act_ptr) 
        && (l4c_gprs_ipv4v6_check_cid_existence(act_ptr, context_id)))
    {
        if ((IPV4V6_ADDR_TYPE == pdp_type) && (context_id == act_ptr->init_cid))
        {
            //Perfect case - 
            l4c_gprs_ipv4v6_update_v4v6_state(act_ptr, L4C_IPV4V6_STATE_ACCEPT);
            if (KAL_TRUE == l4c_gprs_ipv4v6_run_activation(act_ptr, user))
            {   //free act struct and do nothing; let the code below to handle LRSP/RRSP
                //IPV6_TODO: this is the perfect case: (result, cause) = (KAL_TRUE, L4C_NO_CAUSE)
                *v4v6_act_ptr = NULL;
                l4c_gprs_ipv4v6_act_table_free(act_ptr);        
            }
            else
            {
                ASSERT(0);
            }
        }
        else
        {   
            //0. update v4v6 status
            l4c_gprs_ipv4v6_update_v4v6_state(act_ptr, L4C_IPV4V6_STATE_REJECT);
        
            //1. update cause2
            if (KAL_TRUE == cause2_present)
            {
                if (PDP_TYPE_IPV4_ONLY_ALLOWED == cause2)
                {
                    act_ptr->cause = PDP_TYPE_IPV4_ONLY_ALLOWED;
                    l4c_gprs_ipv4v6_update_v6_state(act_ptr, L4C_IPV4V6_STATE_REJECT);
                }
                else if (PDP_TYPE_IPV6_ONLY_ALLOWED == cause2)
                {
                    act_ptr->cause = PDP_TYPE_IPV6_ONLY_ALLOWED;
                    l4c_gprs_ipv4v6_update_v4_state(act_ptr, L4C_IPV4V6_STATE_REJECT);    
                }                                     
            }
            *rsp_cause = act_ptr->cause;            

            //2. update activation status
            if (IPV4_ADDR_TYPE == pdp_type)
            {
                l4c_gprs_ipv4v6_update_v4_state(act_ptr, L4C_IPV4V6_STATE_ACCEPT);
                l4c_gprs_ipv4v6_update_v4_cid(act_ptr, act_ptr->init_cid);
                
                prepare_new_cid = l4c_gprs_ipv4v6_prepare_new_cid(act_ptr, IPV6_ADDR_TYPE, KAL_TRUE); //mtk02285, MAUI_03127025, IPV4V6 fallback: cid2 vs. ps_dialup_port[]
                if (prepare_new_cid == INVALID_PDP_CONTEXT_ID)
                {
                    l4c_gprs_ipv4v6_update_v6_state(act_ptr, L4C_IPV4V6_STATE_REJECT);      // mtk02651: avoid to send act req to TCM
                }
            }
            else if (IPV6_ADDR_TYPE == pdp_type)
            {
                l4c_gprs_ipv4v6_update_v6_state(act_ptr, L4C_IPV4V6_STATE_ACCEPT);
                l4c_gprs_ipv4v6_update_v6_cid(act_ptr, act_ptr->init_cid);                        
                prepare_new_cid = l4c_gprs_ipv4v6_prepare_new_cid(act_ptr, IPV4_ADDR_TYPE, KAL_TRUE); //mtk02285, MAUI_03127025, IPV4V6 fallback: cid2 vs. ps_dialup_port[]
                if (prepare_new_cid == INVALID_PDP_CONTEXT_ID)
                {
                    l4c_gprs_ipv4v6_update_v4_state(act_ptr, L4C_IPV4V6_STATE_REJECT);      // mtk02651: avoid to send act req to TCM
                }
            }

            //3. run activation logic
            if (KAL_TRUE == l4c_gprs_ipv4v6_run_activation(act_ptr, user))
            {   //all activation is done,
                //free struct and do nothing and let the following code to handle LRSP/RRSP
                //IPV6_TODO: update rsp_result
                if (l4c_gprs_ipv4v6_check_active_pdp_number(act_ptr) > 2)
                {
                    ASSERT(0);
                }                        
                if (l4c_gprs_ipv4v6_check_active_pdp_number(act_ptr) == 0) //< 2)
                {
                    *rsp_result = KAL_FALSE;
                }
                l4c_gprs_ipv4v6_act_table_free(act_ptr);
                *v4v6_act_ptr = NULL;
            }
            else
            {   //activation is still ongoing
                activation_complete = KAL_FALSE; 
            }                    
        }
    }
    return activation_complete;
} /* end of l4c_gprs_ipv4v6_pdp_activate_cnf_helper() */

/*****************************************************************************
 * FUNCTION
 *  l4c_gprs_ipv4v6_pdp_activate_rej_helper
 * DESCRIPTION
 *  
 * RETURNS
 *  
 * USAGE
     1.  tcm_pdp_activate_rej_hdlr()
     2.  l4cppp_ipv4v6_fallback_ind_hdlr() ... reject part
 *****************************************************************************/     
kal_bool l4c_gprs_ipv4v6_pdp_activate_rej_helper(
    l4c_gprs_ipv4v6_act_struct** v4v6_act_ptr, 
    l4c_ipv4v6_activator_enum user,
    kal_uint8 context_id, 
    kal_uint16 cause,
    kal_bool* rsp_result,
    kal_uint16* rsp_cause
)
{
    /**************************************************************************
     V6_TODO:
         if (l4c_ptr->T != NULL) && (return cid belongs to T))                       
             If return cid's PDP type==V4V6
                 do nothing
             else if return cid's PDP type is V4
                 l4c_update_v4_state(T, REJECT);
             else if return cid's PDP type is V6
                 l4c_update_v6_state(T, REJECT);
             endif
    
             if (return cause==#51) //V6 only allowed
                 T.cause = 51;
                 l4c_update_v4_state(T, REJECT);
             else if (return cause==#50) //V4 only allowed
                 T.cause = 50;
                 l4c_update_v6_state(T, REJECT);                         
             endif
                 
             l4c_v4v6_activation_logic(T);                       
     **************************************************************************/                     
    kal_bool activation_complete = KAL_TRUE;
    l4c_gprs_ipv4v6_act_struct* act_ptr = *v4v6_act_ptr;
    
    if ((NULL != act_ptr) && (l4c_gprs_ipv4v6_check_cid_existence(act_ptr, context_id)))
    {
        if (context_id != act_ptr->init_cid)
        {
            l4c_ps_dialup_reset_port2cid(context_id);
        } //MAUI_03144268, mtk02285, L4C needs to clear the failed cid/port mapping during IPV4V6 fallback procedure    
        
        //0. update cause first
        if (PDP_TYPE_IPV4_ONLY_ALLOWED == cause)
        {
            act_ptr->cause = PDP_TYPE_IPV4_ONLY_ALLOWED;
            l4c_gprs_ipv4v6_update_v6_state(act_ptr, L4C_IPV4V6_STATE_REJECT);
        }
        else if (PDP_TYPE_IPV6_ONLY_ALLOWED == cause)
        {
            act_ptr->cause = PDP_TYPE_IPV6_ONLY_ALLOWED;
            l4c_gprs_ipv4v6_update_v4_state(act_ptr, L4C_IPV4V6_STATE_REJECT);                  
        }                            
        *rsp_cause = act_ptr->cause;                
        
        if (IPV4V6_ADDR_TYPE == l4ctcm_get_pdp_addr_type(context_id))
        //if (msg_ptr->context_id == l4c_gprs_ipv4v6_get_ongoing_cid_by_type(act_ptr, IPV4V6_ADDR_TYPE))
        {   // trigger fallback
            //1. clear V4V6 and set V4+V6
            l4c_gprs_ipv4v6_update_v4v6_state(act_ptr, L4C_IPV4V6_STATE_REJECT);
            
            l4c_gprs_ipv4v6_update_v4_cid(act_ptr, act_ptr->init_cid);
            l4c_gprs_ipv4v6_update_v6_cid(act_ptr, act_ptr->init_cid);                    

            //2. update the type to V4
            //update before send: l4ctcm_update_pdp_type_length(act_ptr->init_cid, IPV4_ADDR_TYPE, IPV4_ADDR_LEN);
        }
        else
        {
            // update activation status
            if (IPV4_ADDR_TYPE == l4ctcm_get_pdp_addr_type(context_id))
            //if (msg_ptr->context_id == l4c_gprs_ipv4v6_get_ongoing_cid_by_type(act_ptr, IPV4_ADDR_TYPE))
            {
                l4c_gprs_ipv4v6_update_v4_state(act_ptr, L4C_IPV4V6_STATE_REJECT);
                if (context_id == l4c_gprs_ipv4v6_get_ongoing_cid_by_type(act_ptr, IPV6_ADDR_TYPE))
                {
                    //update before send: l4ctcm_update_pdp_type_length(msg_ptr->context_id, IPV6_ADDR_TYPE, IPV6_ADDR_LEN);
                }
            }
            else if (IPV6_ADDR_TYPE == l4ctcm_get_pdp_addr_type(context_id))
            //else if (msg_ptr->context_id == l4c_gprs_ipv4v6_get_ongoing_cid_by_type(act_ptr, IPV6_ADDR_TYPE))
            {
                l4c_gprs_ipv4v6_update_v6_state(act_ptr, L4C_IPV4V6_STATE_REJECT);                    
                if (context_id == l4c_gprs_ipv4v6_get_ongoing_cid_by_type(act_ptr, IPV4_ADDR_TYPE))
                {
                    //update before send: l4ctcm_update_pdp_type_length(msg_ptr->context_id, IPV4_ADDR_TYPE, IPV4_ADDR_LEN);
                }
            }
        }

        // run activation logic                
        if (KAL_TRUE == l4c_gprs_ipv4v6_run_activation(act_ptr, user))
        {   //all activation is done,
            //update the final result code
            if (l4c_gprs_ipv4v6_check_active_pdp_number(act_ptr) > 0)
            {
                *rsp_result = KAL_TRUE;
            }
        
            //free struct and do nothing and let the following code to handle LRSP/RRSP
            l4c_gprs_ipv4v6_act_table_free(act_ptr);
            *v4v6_act_ptr = NULL;
        }
        else
        {   //activation is ongoing,
            //goto the end of the function, send LIND to update the lastest G icon state to MMI
            activation_complete = KAL_FALSE;
        }
    }
    return activation_complete;   
} /* end of l4c_gprs_ipv4v6_pdp_activate_rej_helper() */

#endif /* defined(__IPV4V6__) && defined(__IPV6__) */
#endif /* __MOD_TCM__ */ 

/*****************************************************************************
 * FUNCTION
 *  l4c_sim_poweroff_done()
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  kal_bool
 *****************************************************************************/
kal_bool l4c_sim_poweroff_done()
{
    kal_uint8 i;

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
        module_type mod_id = L4_MODULE(MOD_L4C, i);
        l4c_context_struct *l4c_ptr = get_l4c_ptr_by_mod(mod_id);

        if (l4c_ptr->sim_poweroff != KAL_TRUE)
        {
            return KAL_FALSE;
        }
    }
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sim_poweroff_timer_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_poweroff_timer_hdlr()
{
    // Increase power off retry
    L4C_COMM_PTR->poweroff_retry++;

    if (L4C_PTR->event_id[2] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, L4C_PTR->event_id[2]);
        evshed_cancel_event(L4C_PTR->event_scheduler_ptr, &(L4C_PTR->event_id[2]));
        L4C_PTR->event_id[2] = 0;
    }

    L4C_PTR->event_id[2] = evshed_set_event(L4C_PTR->event_scheduler_ptr, (kal_timer_func_ptr) l4c_sim_poweroff_timerout_hdlr, NULL, 10 * KAL_TICKS_100_MSEC);  // 1 second

}


/*****************************************************************************
 * FUNCTION
 *  l4c_sim_poweroff_timerout_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_poweroff_timerout_hdlr()
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    /* clear event schedule */
    if (l4c_ptr->event_id[2] != 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[2]);
        //evshed_cancel_event (l4c_ptr->event_scheduler_ptr,
        //                  &(l4c_ptr->event_id[2]));
        l4c_ptr->event_id[2] = 0;
    }

    /***
     *  If any one of the SIM card didn't power off, wait another 1 second.
     *  The maximal retry count is come from customer setting.
     *  If all SIM card off or reach maximal retry count, go on to do l4cuem_power_off
     */
    if (l4c_sim_poweroff_done() != KAL_TRUE &&
        L4C_COMM_PTR->poweroff_retry < custom_l4c_max_poweroff_retry())
    {
        l4c_sim_poweroff_timer_hdlr();
        return;
    }

#if defined(__GEMINI__)
    l4c_ptr->cc_current_action[RMMI_SRC] = L4C_NO_ACTION;
    l4c_root_power_off_done_ind(INVALID_SRC);
#endif
    l4cuem_power_off_req();
#if !defined(__MMI_FMI__)
    if(RMMI_PTR->poweroff_src_id != INVALID_SRC)
    {
        l4c_ptr->cc_current_action[RMMI_PTR->poweroff_src_id] = L4C_NO_ACTION;
        RMMI_PTR->current_src = RMMI_PTR->poweroff_src_id;
        rmmi_final_rsp_generator(RMMI_PTR->poweroff_src_id, KAL_TRUE, NULL, 0);
        RMMI_PTR->poweroff_src_id = INVALID_SRC;//reset to prevent "OK" for AT+EPOF twice
    #if defined(__CENTRALIZED_SLEEP_MANAGER__) && defined(__MTK_TARGET__)
        OSTD_MD_Infinite_Sleep();
    #endif
    }	
#endif /* __SP_RIL_SUPPORT__ */ 
}

/*****************************************************************************
 * FUNCTION
 *  get_ms_revision
 * DESCRIPTION
 *  This is get_ms_revisionfunction of L4C module.
 *  get ms revision form task init task.
 * PARAMETERS
 *  equip_type      [IN]        Input equipment type
 *  equip_id        [OUT]       Output string of revision
 * RETURNS
 *  kal_bool        KAL_TRUE
 *****************************************************************************/
kal_bool get_ms_revision(kal_uint8 equip_type, kal_uint8 *equip_id)
{
#ifdef __MTK_TARGET__
    version_struct version;
    kal_uint8 len;
    kal_char *mcu_buf_ptr = NULL;

    INT_VersionNumbers(&version);

    switch (equip_type)
    {
        case L4C_BASEBAND_CODE:
            len = strlen((kal_char*) version.bb_chip);
            kal_mem_cpy((kal_uint8*) equip_id, (kal_char*) version.bb_chip, len + 1);
            equip_id[len] = 0;
            //equip_id = (kal_uint8 *)version.bb_chip;
            break;
        case L4C_DSP_CODE:
            len = strlen((kal_char*) version.dsp_fw);
            kal_mem_cpy((kal_uint8*) equip_id, (kal_uint8*) version.dsp_fw, len + 1);
            equip_id[len] = 0;
            //equip_id = (kal_char *)version.dsp_fw;
            break;
        case L4C_DSP_PATCH:
            len = strlen((kal_char*) version.dsp_ptch);
            kal_mem_cpy((kal_uint8*) equip_id, (kal_uint8*) version.dsp_ptch, len + 1);
            equip_id[len] = 0;
            //equip_id = (kal_uint8 *)&version.dsp_ptch;
            break;
        case L4C_SW_CODE:
            len = strlen((kal_char*) version.mcu_sw);
            kal_mem_cpy((kal_uint8*) equip_id, (kal_uint8*) version.mcu_sw, len + 1);
            equip_id[len] = 0;
            //equip_id = (kal_uint8 *)&version.mcu_sw;
            break;
        case L4C_HW_CODE:
            len = strlen((kal_char*) version.bb_board);
            kal_mem_cpy((kal_uint8*) equip_id, (kal_uint8*) version.bb_board, len + 1);
            equip_id[len] = 0;
            //equip_id = (kal_uint8 *)&version.bb_board;
            break;
        case L4C_FLAVOR_CODE:
            mcu_buf_ptr = release_flavor();
            len = strlen((kal_char*) mcu_buf_ptr);
            kal_mem_cpy((kal_uint8*) equip_id, (kal_uint8*) mcu_buf_ptr, len + 1);
            equip_id[len] = 0;
            //equip_id = (kal_uint8 *)mcu_buf_ptr;
            break;
    }
#endif /* __MTK_TARGET__ */ 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_check_port_owner_source
 * DESCRIPTION
 *  
 * PARAMETERS
 *  port        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 l4c_check_port_owner_source(kal_uint8 port)
{
    //if(port == PS_UART_PORT)
    //   return RMMI_SRC;
    return rmmi_cid_2_srcid(rmmi_port_2_cid(port));

    //ASSERT(0);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_set_user_action
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mod         [IN]        
 *  user        [IN]        
 *  action      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_set_user_action(kal_uint8 mod, kal_uint8 user, kal_uint16 action)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    switch (mod)
    {
        case L4C_CC:
	    l4c_ptr->cc_current_action[user] = action;
            break;
        case L4C_SS:
            l4c_ptr->ss_user = (l4c_source_id_enum)user;
            l4c_ptr->ss_current_action = action;
            break;
        case L4C_SMS:
            l4c_ptr->sms_current_action[user] = action;
            break;
        case L4C_RAC:
            l4c_ptr->rac_user = (l4c_source_id_enum)user;
            l4c_ptr->rac_current_action = action;
            break;
    #ifdef __MOD_TCM__
        case L4C_TCM:
            l4c_ptr->tcm_user = (l4c_source_id_enum)user;
            l4c_ptr->tcm_current_action = (l4c_action_enum)action;
            break;
    #endif //mtk02285, 201003, 6251_ram			
        case L4C_PHB:
            l4c_ptr->phb_user = (l4c_source_id_enum)user;
            l4c_ptr->phb_current_action = action;
            break;
        case L4C_EQ:
            l4c_ptr->eq_user = (l4c_source_id_enum)user;
            l4c_ptr->eq_current_action = action;
            break;
        case L4C_SMU:  
            l4c_ptr->smu_user = (l4c_source_id_enum)user;
            l4c_ptr->smu_current_action = action;
            break;
    #if 0 //__CTM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif /* __CTM_SUPPORT__ */ 
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_check_user_action
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mod         [IN]        
 *  user        [IN]        
 *  action      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_check_user_action(kal_uint8 mod, kal_uint8 user, kal_uint16 action)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    switch (mod)
    {
        case L4C_CC:
            if (l4c_ptr->cc_current_action[user] == action)
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
            //break;
        case L4C_SS:
            if (l4c_ptr->ss_user == user && l4c_ptr->ss_current_action == action)
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
            //break;
        case L4C_SMS:
            if (l4c_ptr->sms_current_action[user] == action)
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
            //break;
        case L4C_RAC:
            if (l4c_ptr->rac_user == user && l4c_ptr->rac_current_action == action)
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
            //break;
    #ifdef __MOD_TCM__
        case L4C_TCM:
            if (l4c_ptr->tcm_user == user && l4c_ptr->tcm_current_action == action)
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
            //break;
    #endif //mtk02285, 201003, 6251_ram			
        case L4C_PHB:
            if (l4c_ptr->phb_user == user && l4c_ptr->phb_current_action == action)
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
            //break;
        case L4C_EQ:
            if (l4c_ptr->eq_user == user && l4c_ptr->eq_current_action == action)
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
            //break;
        #if 0 //def __CTM_SUPPORT__
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
        #endif /* __CTM_SUPPORT__ */ 
        case L4C_SMU:
            if (l4c_ptr->smu_user == user && l4c_ptr->smu_current_action == action)
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
    }
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_result
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_mmi_result(kal_uint8 result)
{
    kal_bool ret;

    if (result == L4C_OK)
    {
        ret = KAL_TRUE;
    }
    else
    {
        ret = KAL_FALSE;
    }

    return ret;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_check_online_state
 * DESCRIPTION
 *  To check if in CSD/GPRS data state and get the online_src_id
 * PARAMETERS
 *  online_src_id       [OUT]       Return online src_id if exist
 *  state               [IN]        Specifiy which state to be checked (ex:
 * RETURNS
 *  kal_bool        KAL_TRUE
 *****************************************************************************/
kal_bool l4c_check_online_state(kal_uint8 *online_src_id, kal_uint8 state)
{
    kal_bool ret_value = KAL_FALSE;
    kal_uint8 src_id;	
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (state == L4C_ONLINE_STATE)
    {
        for(src_id=RMMI_SRC; src_id<RMMI_ALL; src_id++)
        {
            if (l4c_ptr->cc_state[src_id] != L4C_COMMAND_STATE)
            {
                *online_src_id = src_id;
                ret_value = KAL_TRUE;
                break;
            }
        }
    }
    else if (state == L4C_ONLINE_DATA_STATE)
    {
        //Currently , only CSD dialup support +++ escape
        for(src_id=RMMI_SRC; src_id<RMMI_ALL; src_id++)
        {
            if (l4c_ptr->cc_state[src_id] == L4C_ONLINE_DATA_STATE ||
                l4c_ptr->cc_state[RMMI_SRC] == L4C_ONLINE_COMMAND_STATE)
            {
                *online_src_id = src_id;
                ret_value = KAL_TRUE;
                break;
            }
        }
    }
    else if (state == L4C_ONLINE_DATA_GPRS_STATE)
    {
        for(src_id=RMMI_SRC; src_id<RMMI_ALL; src_id++)
        {
            if (l4c_ptr->cc_state[src_id] == L4C_ONLINE_DATA_GPRS_STATE)
            {
                *online_src_id = src_id;
                ret_value = KAL_TRUE;
                break;				
            }
        }
    }
    return ret_value;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_convert_result
 * DESCRIPTION
 *  
 * PARAMETERS
 *  l4c_result      [IN]        
 *  l4c_cause       [IN]        
 *  result          [?]         
 *  cause           [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_convert_result(kal_uint8 l4c_result, kal_uint16 l4c_cause, kal_bool *result, kal_uint16 *cause)
{
    if (l4c_result == L4C_ERROR)
    {
        *result = KAL_FALSE;
        *cause = l4c_cause;

    }
    else
    {
        *result = KAL_TRUE;
        *cause = CM_L4C_GEN_CAUSE;

    }
    return;
}
#if defined(__MOD_TCM__) && defined(__INT_PDP_CONTEXT_ON__)
#ifdef __APP_SECONDARY_PDP_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_find_free_pdp_context
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid         [?]         
 *  pid         [IN]        
 *  qos_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_find_free_pdp_context(kal_uint8 *cid, kal_uint8 pid, kal_uint8 qos_id)
{
    kal_uint8 i = 0;
    kal_bool result = KAL_FALSE;

    if (pid >= 0x7F)
    {
        ASSERT(0);
    }

    *cid = 0xFF;        //no free context

    for (i = 0; i < MAX_INT_PDP_CONTEXT; i++)
    {
        //mtk02126: use the specific bit 0X8000 to identify whether the context is used or not
        if ((L4C_PTR->pdp_context_id[i] & 0x8000) == 0) 
        {
            L4C_PTR->pdp_context_id[i] = (((0x80 | pid) << 8) | qos_id);
            /*
             * mtk02126:  
             * cid is GPRS context id. external is 1~3, internal is start from 4
             * There fore we need to add MAX_EXT_PDP_CONTEXT + 1 to switch from array index to context id
             */
            *cid = i + MAX_EXT_PDP_CONTEXT + 1;       //__GPRS_BEARER_REPORT_NEGOTIATED_QOS__, MAX_EXT_PDP_CONTEXT==3
            result = KAL_TRUE;
            break;
        }
    }
    //ASSERT((*cid != 0xFF));
    return result;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_find_pdp_pid2cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid         [OUT] 0xff: means cid is not found. MAUI_02534135 mtk02126
 *  pid         [IN]        
 *  qos_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_find_pdp_pid2cid(kal_uint8 *cid, kal_uint8 pid, kal_uint8 qos_id)
{
    kal_uint8 i = 0;

    *cid = 0xff;    // 0xff means cid is not found. MAUI_02534135 mtk02126
    for (i = 0; i < MAX_INT_PDP_CONTEXT; i++)
    {
        if (((L4C_PTR->pdp_context_id[i] & 0x7FFF) == (pid << 8 | qos_id)) &&
            ((L4C_PTR->pdp_context_id[i] & 0x8000) != 0 ) //MAUI_02317339, mtk02285   
           )
        {

            *cid = i + MAX_EXT_PDP_CONTEXT + 1;       //__GPRS_BEARER_REPORT_NEGOTIATED_QOS__, MAX_EXT_PDP_CONTEXT==3
            break;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_free_pdp_context
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid         [IN]     cid can be internal context id only   
 *  pid         [?]         
 *  qos_id      [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_free_pdp_context(kal_uint8 cid, kal_uint8 *pid, kal_uint8 *qos_id)
{
    /*
     * MAUI_02532349 mtk02126 
     * cid have to be greater than (MAX_EXT_PDP_CONTEXT + 1)
     * If cid < (MAX_EXT_PDP_CONTEXT + 1), this function will corrupt memeory.
     */    
    if (cid < MAX_EXT_PDP_CONTEXT + 1)
    {        
        kal_brief_trace(TRACE_ERROR, ERROR_L4C_FREE_PDP_CONTEXT_WITH_INVALID_CID, cid);
        return;
    }
    *pid = (kal_uint8) ((L4C_PTR->pdp_context_id[cid - (MAX_EXT_PDP_CONTEXT + 1)] & 0x7F00) >> 8);
    *qos_id = (kal_uint8) (L4C_PTR->pdp_context_id[cid - (MAX_EXT_PDP_CONTEXT + 1)] & 0x00FF);
    L4C_PTR->pdp_context_id[cid - (MAX_EXT_PDP_CONTEXT + 1)] = 0;       //__GPRS_BEARER_REPORT_NEGOTIATED_QOS__, MAX_EXT_PDP_CONTEXT==3
}

#ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
/*****************************************************************************
 * FUNCTION
 *  l4c_find_pdp_cid2pid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid         [?]         
 *  pid         [IN]        
 *  qos_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_uint8 l4c_find_pdp_cid2pid(kal_uint8 cid)
{
    kal_uint8 pid = (kal_uint8) ((L4C_PTR->pdp_context_id[cid - (MAX_EXT_PDP_CONTEXT + 1)] & 0x7F00) >> 8);
	return pid;
}
#endif //__GPRS_BEARER_REPORT_NEGOTIATED_QOS__

#else /* __APP_SECONDARY_PDP_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_find_free_pdp_context
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid     [?]         
 *  pid     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_find_free_pdp_context(kal_uint8 *cid, kal_uint8 pid)
{
    kal_uint8 i = 0;
    kal_bool result = KAL_FALSE;

    if (pid >= 0x7F)
    {
        ASSERT(0);
    }

    *cid = 0xFF;        //no free context

    for (i = 0; i < MAX_INT_PDP_CONTEXT; i++)
    {
        if ((L4C_PTR->pdp_context_id[i] & 0x80) == 0)
        {
            L4C_PTR->pdp_context_id[i] = (0x80 | pid);
            *cid = i + (MAX_EXT_PDP_CONTEXT + 1);       //external id range 1 - 3, internal id begin from 4
            result = KAL_TRUE;
            break;
        }
    }
    //ASSERT((*cid != 0xFF));
    return result;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_find_pdp_pid2cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid     [OUT] 0xff: means cid is not found. MAUI_02534135 mtk02126
 *  pid     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_find_pdp_pid2cid(kal_uint8 *cid, kal_uint8 pid)
{
    kal_uint8 i = 0;

    *cid = 0xff;    // 0xff means cid is not found. MAUI_02534135 mtk02126
    for (i = 0; i < MAX_INT_PDP_CONTEXT; i++)
    {
        if (((L4C_PTR->pdp_context_id[i] & 0x7F) == pid) &&
            ((L4C_PTR->pdp_context_id[i] & 0x80) != 0) //MAUI_02317339, mtk02285
           )
        {

            *cid = i + (MAX_EXT_PDP_CONTEXT + 1);       //external id range 1 - 3, internal id begin from 4
            break;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_free_pdp_context
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid     [IN]  cid can be internal context id only        
 *  pid     [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_free_pdp_context(kal_uint8 cid, kal_uint8 *pid)
{
    /*
     * MAUI_02532349 mtk02126 
     * cid have to be greater than (MAX_EXT_PDP_CONTEXT + 1)
     * If cid < (MAX_EXT_PDP_CONTEXT + 1), this function will corrupt memeory.
     */    
    if (cid < MAX_EXT_PDP_CONTEXT + 1)
    {        
        kal_brief_trace(TRACE_ERROR, ERROR_L4C_FREE_PDP_CONTEXT_WITH_INVALID_CID, cid);
        return;
    }    
    *pid = L4C_PTR->pdp_context_id[cid - (MAX_EXT_PDP_CONTEXT + 1)] & 0x7F;
    L4C_PTR->pdp_context_id[cid - (MAX_EXT_PDP_CONTEXT + 1)] = 0;
}

#ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
/*****************************************************************************
 * FUNCTION
 *  l4c_find_pdp_cid2pid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid         [?]         
 *  pid         [IN]        
 *  qos_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_uint8 l4c_find_pdp_cid2pid(kal_uint8 cid)
{
    kal_uint8 pid = L4C_PTR->pdp_context_id[cid - (MAX_EXT_PDP_CONTEXT + 1)] & 0x7F;
	return pid;
}
#endif //__GPRS_BEARER_REPORT_NEGOTIATED_QOS__
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 
#endif /* __INT_PDP_CONTEXT_ON__ */

/*****************************************************************************
 * FUNCTION
 *  l4c_ConvertGSM7BitDefaultEncodingToAscii
 * DESCRIPTION
 *  
 * PARAMETERS
 *  message     [?]         
 *  msg         [?]         
 *  length      [IN]        
 *  outLen      [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ConvertGSM7BitDefaultEncodingToAscii(
        kal_uint8 *message,
        kal_uint8 *msg,
        kal_uint16 length,
        kal_uint16 *outLen)
{
    kal_uint16 i, j = 0;

    for (i = 0; i < length; i++)
    {
        if (msg[i] != 27)       //escape char ?
        {
            if (msg[i] != 13)
            {   
                if (msg[i] > 127)       
                {
                    message[j++] = msg[i];
                }
                else
                {
                    message[j++] = GSM7BitToAsciiArray[msg[i]];
                }
            }
        }
        else
        {
            //treat escape char as a space
            message[j++] = 32;
        }
    }
    if (outLen != NULL)
    {
        *outLen = j;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_check_cind_status
 * DESCRIPTION
 *  
 * PARAMETERS
 *  call            [?]     
 *  service         [?]     
 *  callsetup       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_check_cind_status(kal_uint8 *call, kal_uint8 *service, kal_uint8 *callsetup)
{

    *call = RMMI_PTR->indicators.call;
    *service = RMMI_PTR->indicators.service;
    *callsetup = RMMI_PTR->indicators.callsetup;
}

/*****************************************************************************
 * FUNCTION
 *  has_any_current_action
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool has_any_current_action(kal_uint8 src_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if ((l4c_ptr->ss_user == src_id) /* no ss action in this src_id */  ||
	#ifdef __MOD_TCM__
        (l4c_ptr->tcm_user == src_id) /* no tcm action in this src_id */  ||
    #endif //mtk02285, 201003, 6251_ram
        (l4c_ptr->rac_user == src_id) /* no rac action in this src_id */  ||
        (l4c_ptr->smu_user == src_id) /* no smu action in this src_id */  ||        
        (l4c_ptr->phb_user == src_id) /* no phb action in this src_id */  ||
        (l4c_ptr->eq_user == src_id) /* no eq action in this src_id */  ||
        (l4c_ptr->sms_current_action[src_id] != L4C_NO_ACTION) /* no sms action in this src_id */  ||
        (l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION))
    {
        return KAL_TRUE;
    }

    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  has_any_current_action
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool has_any_src_in_action(kal_uint8 mod, kal_uint16 action)
{
    kal_uint8 src_id=0;
    kal_uint16 *current_action = NULL;
		
    if(mod == L4C_CC)
    {
	current_action = L4C_PTR->cc_current_action;
    }
    else if(mod == L4C_SMS)
    {
	current_action = L4C_PTR->sms_current_action;
    }
    else 
    {
        return KAL_FALSE;
    }    

    for(src_id=LMMI_SRC;src_id<MAX_SOURCE_NUM;src_id++)
    {
        if(current_action[src_id] == action)
        {
            return KAL_TRUE;			
        }		
    }		
	
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_is_src_from_rmmi
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_is_src_from_rmmi(kal_uint8 src_id)
{
    if((src_id >= RMMI_SRC) && (src_id < RMMI_ALL))
    {
        return KAL_TRUE;
    }

    return KAL_FALSE;
}

//mtk01616_070601: To response MMI for those RAC action is overwritten by PWROFF_DETACH /RFOFF_DETACH/SET_RAT_MODE_DETACH


/*****************************************************************************
 * FUNCTION
 *  l4c_previous_rac_action_rsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_previous_rac_action_rsp()
{
    l4c_result_struct result;
    l4c_rat_plmn_info_struct list[MAX_PLMN_LIST_LEN];
    kal_uint8 plmn[7] = {RMMI_END_OF_STRING_CHAR};
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    result.flag = L4C_ERROR;
    result.cause = L4C_NO_CAUSE;

    switch (l4c_ptr->rac_current_action)
    {
        case COPS_TEST:
            // hogan 070301: return ERROR to LMMI or RMMI while doing plmn list and powroff_detach is received
            kal_brief_trace(TRACE_INFO, INFO_RAC_CURRENT_ACTION_IS_COPS_TEST, l4c_ptr->rac_user);

            if (l4c_ptr->rac_user == LMMI_SRC)
            {
                l4c_nw_get_plmn_list_lrsp(result, 0, (l4c_rat_plmn_info_struct*) list, 0);
            }
            else if (l4c_ptr->rac_user >= RMMI_SRC)
            {
                rmmi_ptr->current_src = l4c_ptr->rac_user;
                l4c_nw_get_plmn_list_rrsp(result, 0, (l4c_rat_plmn_info_struct*) list);
            }
            break;
        case CSG_TEST:
            if (L4C_PTR->rac_user == LMMI_SRC)
            {
                // TODO
            }
            else if (L4C_PTR->rac_user >= RMMI_SRC)
            {
                RMMI_PTR->current_src = L4C_PTR->rac_user; 
                l4c_general_rrsp(KAL_FALSE, RMMI_ERR_UNKNOWN);
            }
            break;
        case COPS_EXE:
            if (l4c_ptr->rac_user == LMMI_SRC)
            {
                l4c_nw_exe_cops_lrsp(result, 0, (kal_uint8*) plmn, 0);
            }
            else if (l4c_ptr->rac_user >= RMMI_SRC)
            {
                rmmi_ptr->current_src = l4c_ptr->rac_user; 
                l4c_general_rrsp(KAL_FALSE, RMMI_ERR_UNKNOWN);
            }
            break;
        case CGATT_EXE: /* when needed timer timeout, L4C dereg by itself, do not have to send rsp to MMI */
            if (l4c_ptr->rac_user >= RMMI_SRC)
            {
                rmmi_ptr->current_src = l4c_ptr->rac_user; 
                l4c_general_rrsp(KAL_FALSE, RMMI_ERR_UNKNOWN);
            }
            break;
        default:
            return KAL_FALSE;
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_get_cfun_state
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 l4c_get_cfun_state(void)
{
    return L4C_PTR->cfun_state;
}

#ifdef __GEMINI__


/*****************************************************************************
 * FUNCTION
 *  l4c_check_dual_sim_insert_status
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sim1_inserted_status        [IN]        
 *  sim2_inserted_status        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_check_dual_sim_insert_status(module_type mod_id, kal_uint8 sim_inserted_status)
{
    L4C_COMM_PTR->dual_sim_inserted_status &=  ~(0x01 << (mod_id - MOD_L4C)); // clear the bit

    L4C_COMM_PTR->dual_sim_inserted_status |=  (((sim_inserted_status>0)?1:0) << (mod_id - MOD_L4C));  // set the bit
}

/*****************************************************************************
 * FUNCTION
 *  l4c_send_dual_sim_power_on_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_dual_sim_power_on_ind(kal_uint8 src_id)
{
#if defined(__GEMINI__)
    if (src_id == LMMI_SRC2)
    {
	 l4c_root_sim_mode_switch_req(src_id);
    }    
    else 
#endif        
    if (L4C_COMM_PTR->is_dual_sim_ind_sent == KAL_FALSE)
    {
        l4c_eq_pwnon_dual_sim_lind();
#ifndef __MMI_FMI__
        RMMI_PTR->current_src = RMMI_UNSOLICITED;
        l4c_eq_pwnon_dual_sim_rind(); // gemini modem
#endif
        L4C_COMM_PTR->is_dual_sim_ind_sent = KAL_TRUE;
    }	
    return;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_context_selection
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sim_interface       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_context_selection(kal_uint8 sim_interface)
{
    if (sim_interface < L4_MAX_SIM_NUM)
    {
        l4c_ptr_g = &l4c_cntxt_g[sim_interface];
        l4c_current_mod_id = L4_MODULE(MOD_L4C, sim_interface);
        #ifdef __HOMEZONE_SUPPORT__
        HZ_PTR = &l4c_hz_cntxt_g[sim_interface];
        #endif
    }
    else
    {
        ASSERT(0);
    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_context_selection
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sim_interface       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_context_selection(kal_uint8 sim_interface)
{
    sim_interface = sim_interface < RMMI_MAX_SIM_NUM ? sim_interface : 0;
    
    rmmi_ptr_g = &rmmi_cntxt_g[sim_interface];
    rmmi_current_mod_id = L4_MODULE(MOD_ATCI, sim_interface);
}


#ifdef __BT_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  l4c_get_bt_hf_atd_action
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void   
 * RETURNS
 *  RMMI_UCM_ATD, RMMI_UCM_ATD_2, RMMI_UCM_ATD_3, or RMMI_UCM_ATD_4 depending
 *  on dual sim mode setting
 *****************************************************************************/
kal_uint8 l4c_get_bt_hf_atd_action(void)
{
    rmmi_ucm_action_enum action = RMMI_UCM_ATD;
    kal_uint8 sim_index;

    for (sim_index = 0; sim_index < RMMI_MAX_SIM_NUM; sim_index++)
    {
        if (((0x01 << sim_index) & L4C_COMM_PTR->dual_sim_mode_setting) > 0)
            break;
    }

    if (sim_index < RMMI_MAX_SIM_NUM)
    {
        action += sim_index;
    }
    
    return (kal_uint8)action;
}
#endif /* __BT_SUPPORT__ */


/*****************************************************************************
 * FUNCTION
 *  l4c_unified_ciev_staus
 * DESCRIPTION
 *  
 * PARAMETERS
 *  service     [?]     
 *  signal      [?]     
 *  roam        [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_unified_ciev_staus(kal_uint8 *service, 
                            kal_uint8 *signal, 
                            kal_uint8 *roam, 
                            kal_uint8 *call, 
                            kal_uint8 *callsetup, 
                            kal_uint8 *callheld)
{
#if !defined(__DISABLE_SIM2_AT_SUPPORT__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim
#if defined(__L4C_GEMINI_BT_HF__)
    kal_uint8 which_sim = SIM1;
#endif

    //"No Service" is only reported when both SIM are in no service state
    if ((&rmmi_cntxt_g[0])->indicators.service == 0 && (&rmmi_cntxt_g[1])->indicators.service == 0)
    {
        *service = 0;
    }
    else
    {
        *service = 1;
    }

    //"No signal" is only reported when both SIM are in no signal state or flight mode is enable
    if (((&rmmi_cntxt_g[0])->indicators.signal == 0 && (&rmmi_cntxt_g[1])->indicators.signal == 0)
        || ((&l4c_cntxt_g[0])->cfun_state == 4 && (&l4c_cntxt_g[1])->cfun_state == 4))
    {
        *signal = 0;
    }
    else if (l4c_comm_ptr->dual_sim_mode_setting == SIM1_ONLY_CONFIG)        //case1~4
    {
        *signal = (&rmmi_cntxt_g[0])->indicators.signal;
    }
    else if (l4c_comm_ptr->dual_sim_mode_setting == SIM2_ONLY_CONFIG)        //case6~8
    {
        *signal = (&rmmi_cntxt_g[1])->indicators.signal;
    }
    else if (l4c_comm_ptr->dual_sim_mode_setting == DAUL_SIM_CONFIG)
    {
        if (l4c_comm_ptr->dual_sim_inserted_status == ONLY_SIM1_INSERTED || l4c_comm_ptr->dual_sim_inserted_status == NO_SIM_INSERTED)    //case9,10
        {
            *signal = (&rmmi_cntxt_g[0])->indicators.signal;
        }
        if (l4c_comm_ptr->dual_sim_inserted_status == ONLY_SIM2_INSERTED)    //case11
        {
            *signal = (&rmmi_cntxt_g[1])->indicators.signal;
        }
        else if (l4c_comm_ptr->dual_sim_inserted_status == DUAL_SIM_INSERTED)        //case12: SIM1 signal is preferred
        {
            if ((&rmmi_cntxt_g[0])->indicators.signal > 0)
            {
                *signal = (&rmmi_cntxt_g[0])->indicators.signal;
            }
            else
            {
                *signal = (&rmmi_cntxt_g[1])->indicators.signal;
            }
        }
    }

    //"Active" roaming status is reported when either SIM is in roaming state
    if ((&rmmi_cntxt_g[0])->indicators.roam == 1 || (&rmmi_cntxt_g[1])->indicators.roam == 1)
    {
        *roam = 1;
    }
    else
    {
        *roam = 0;
    }

    /* merge call information of all SIM */
#if defined(__L4C_GEMINI_BT_HF__)
    if (l4c_root_check_call_exist(&which_sim) == KAL_TRUE)
    {
        rmmi_ptr = &rmmi_cntxt_g[which_sim];
    }
#endif
    *call = rmmi_ptr->indicators.call;
    *callsetup = rmmi_ptr->indicators.callsetup;
    *callheld = rmmi_ptr->indicators.callheld;
    
#endif	
}

/*****************************************************************************
 * FUNCTION
 *  l4c_check_dual_sim_state
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_check_dual_sim_state(module_type current_mod_id, kal_uint8 cfun_state)
{
    /* [MAUI_02239925] Due to GEMINI design, not allow turn on radio in some condition */
#if 0
/* under construction !*/
/* under construction !*/
    #ifdef GEMINI_PLUS
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
     #else
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
/* under construction !*/
     #endif
/* under construction !*/
#endif    
    return KAL_TRUE;
}

#endif /* __GEMINI__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_is_test_sim
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_is_test_sim()
{
    kal_bool ret_val;

#ifdef __GEMINI__
    ret_val = is_test_sim((kal_uint8)(SIM1 + (l4c_current_mod_id - MOD_L4C)));
#else /* __GEMINI__ */ 
    ret_val = is_test_sim();
#endif /* __GEMINI__ */ 

    return ret_val;
}

#ifdef __VSIM__
/*****************************************************************************
 * FUNCTION
 *  l4c_is_vsim_on
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_is_vsim_on()
{
    kal_bool ret_val;

#ifdef __GEMINI__
    kal_uint8 sim_interface = (l4c_current_mod_id == MOD_L4C)?(SIM1):(SIM2);
    ret_val = is_vsim_on(sim_interface);
#else /* __GEMINI__ */ 
    ret_val = is_vsim_on();
#endif /* __GEMINI__ */ 

    return ret_val;
}
#endif /* __VSIM__ */

/*****************************************************************************
 * FUNCTION
 *  l4c_check_sim_status
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 l4c_check_sim_status()
{
    kal_uint8 ret_val;

#ifdef __GEMINI__
    ret_val = (kal_uint8) check_sim_status((kal_uint8)(SIM1 + (l4c_current_mod_id - MOD_L4C)));
#else /* __GEMINI__ */ 
    ret_val = (kal_uint8) check_sim_status();
#endif /* __GEMINI__ */ 

    return ret_val;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_get_sim_status
 * DESCRIPTION
 *  This function is used to get current SIM status
 * PARAMETERS
 *  void
 * RETURNS
 *  l4c_sim_status_enum
 *****************************************************************************/
l4c_sim_status_enum l4c_get_sim_status()
{
    smu_sim_inserted_enum sim_inserted_status;
    l4c_sim_status_enum sim_status = L4C_SIM_NONE;
    #ifdef __GEMINI__
        kal_uint8 which_sim;
    #endif

    #ifdef __GEMINI__    
        which_sim = (kal_uint8)(SIM1 + (l4c_current_mod_id - MOD_L4C));  
        sim_inserted_status = is_sim_inserted(which_sim);
    #else
        sim_inserted_status = is_sim_inserted();
    #endif

    if (sim_inserted_status == SMU_SIM_NOT_INSERTED)
    {
        sim_status = L4C_SIM_NOT_INSERTED;
    }
    else if (sim_inserted_status == SMU_SIM_INSERTED)
    {
        if (l4c_check_sim_status() == SMU_SIM_NO_IMSI)
        {
            sim_status = L4C_SIM_BLOCK;
        }
        else if (l4c_check_sim_status() == SMU_SIM_REPLACED || l4c_check_sim_status() == SMU_SIM_NOT_REPLACED )
        {
            sim_status = L4C_SIM_INSERTED;
        }
    }

    return sim_status;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_check_auto_dtmf_modifier
 * DESCRIPTION
 *  check if it's 'w' or 'W' (according to customer auto dtmf modifer definition)
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_check_auto_dtmf_modifier(kal_uint8 ch)
{
    kal_uint8 auto_dtmf_modifier;
    kal_uint8 capital_auto_dtmf_modifier;

    auto_dtmf_modifier = custom_auto_dtmf_modifier();
    capital_auto_dtmf_modifier = auto_dtmf_modifier + (RMMI_CHAR_A - rmmi_char_a);

    if(ch == auto_dtmf_modifier || ch == capital_auto_dtmf_modifier)
    {
        return KAL_TRUE;
    }	

    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_ss_string_parsing
 * DESCRIPTION
 *  
 * PARAMETERS
 *  string_ptr      [?]         
 *  length          [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 l4c_cc_ss_string_parsing(kal_uint8 *string_ptr, kal_uint8 length, kal_uint8 sim_interface, kal_bool is_in_call)
{
    kal_uint8 opcode = INVALID_OPERATION;
    rmmi_string_struct input;
    kal_uint8 is_ecc;   
    kal_uint8 count, i;
    l4_addr_bcd_struct called_number;
    ecc_call_type_enum which_sim = (ecc_call_type_enum)0;

    //ecc_revise
    if ((sim_interface - SIM1) < L4_MAX_SIM_NUM)
    {
        which_sim = (ecc_call_type_enum)(ECC_SIM1_CALL + (sim_interface - SIM1));
    }
    else
    {
        ASSERT(0);
    }
    
    if (length == 0)
    {
        opcode = INVALID_OPERATION;
        return opcode;
    }
    else
    {
        input.string_ptr = (kal_uint8*) get_ctrl_buffer(length);
        kal_mem_cpy(input.string_ptr, string_ptr, length);
    }

#if defined(__CUSTOMIZED_IDLE_STRING_AS_CALL__)
    if (custom_idle_string_as_call(string_ptr, length) == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO, INFO_CUSTOM_IDLE_STRING_AS_CALL_RETURN_TRUE);
        opcode = CC_OPERATION;
    }
    else
#endif
    if (*(input.string_ptr + length - 1) == '#')
    {
        opcode = SS_OPERATION;
    }
    else
    {
        if ((length == 1) || (length == 2))
            // short string
        {
            //mtk01616 070425: to check if the short string is in EFecc , if yes we should treat it as CC_OPERATION
            kal_mem_set(&called_number, 0, sizeof(l4_addr_bcd_struct));
            called_number.addr_bcd[0] = 129;
            count = convert_to_bcd(
                        (kal_uint8*) input.string_ptr,
                        (kal_uint8*) & (called_number.addr_bcd[1]),
                        MAX_CC_ADDR_LEN - 1);
            called_number.addr_length = count + 1;
            //is_ecc = phb_is_number_ecc(&called_number);
            is_ecc = ecc_custom_verify_emergency_number(
                                called_number.addr_bcd, 
                                called_number.addr_length, 
                                ECC_ENCODING_BCD, 
                                which_sim,
                                NULL, NULL, NULL);

        //#if (defined (__MEXICO_ECC__) || defined (__RUSSIA_ECC__) || defined (__STAR_SHORT_STRING_AS_CALL__))
            if (short_string_as_call(&input, length) == KAL_TRUE)
            {
                opcode = CC_OPERATION;
            }
            else
        //#endif /* (defined (__MEXICO_ECC__) || defined (__RUSSIA_ECC__) || defined (__STAR_SHORT_STRING_AS_CALL__)) */ 
            //if (l4ccsm_cc_get_in_call(&call_id) == KAL_TRUE)
            if (is_in_call)
            {
                opcode = SS_OPERATION;
            }
            else
            {
                if ((length == 2) && (input.string_ptr[0] == '1'))
                    // 1X, should treated as crss - spec 02.30 Figure 4.5.3.2
                {
                    opcode = CC_OPERATION;
                }
                else
                {
                    opcode = SS_OPERATION;
                }
            }

            if (is_ecc == KAL_TRUE)
            {
                opcode = CC_OPERATION;
            }

        }
        else
        {
            opcode = CC_OPERATION;
        }
    }

    for (i = 0; i < length; i++)
    {
        if (*(input.string_ptr + i) == 'p' 
            || l4c_check_auto_dtmf_modifier(*(input.string_ptr + i)) == KAL_TRUE)			
        {
            opcode = CC_OPERATION;
            break;
        }
    }

    free_ctrl_buffer(input.string_ptr);

    return opcode;
}


/*****************************************************************************
* FUNCTION
*   l4_custom_approval_type()
* DESCRIPTION
*   This function is to configure phb(FDN and ECC check) approval type 
*   for different operation types.
*   ex: thrid party MMI might do FDN check  MMI dialed call by themslves
* PARAMETERS
*   operation_type : l4c_operation_type_enum
*   src_id : this information might be used to distingiush MMI/AT/SAT call and
*            apply different configuration
* RETURNS
*   approval_type (l4c_phb_approval_type_enum)
*****************************************************************************/
kal_uint8 l4_custom_approval_type(kal_uint8 operation_type,kal_uint8 src_id)
{
    #if defined(WISDOM_MMI)
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
    #else
    /* Default configuration : FDN/ECC check done by protocol layer*/
    return APPROVAL_TYPE_FULL;
    #endif	
}


/*****************************************************************************
 * FUNCTION
 *  l4c_set_mt_call_event
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mt_call_exist      [IN]        
 *  mt_call_id         [IN]
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_set_mt_call_event(kal_bool mt_call_exist,kal_uint8 mt_call_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    l4c_ptr->mt_call_incoming = mt_call_exist;
    l4c_ptr->mt_call_id = mt_call_id;

    if (mt_call_exist == KAL_FALSE)
    {
        // DUMA00209705: to prevent "RING" shown after mt call doesn't exist anymore
        if (l4c_ptr->event_id[6] != 0)
        {
            kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[6]);
			
            evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[6]));
            l4c_ptr->event_id[6] = 0;
        }

        //MAUI_02825249: update waiting call context if the mt call is a waiting call
        if (l4c_ptr->waiting_call_id != CSMCC_INVALID_CALL_ID)
        {
            l4c_ptr->waiting_call_id = CSMCC_INVALID_CALL_ID;
        }
    }
    
    #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
    if(mt_call_exist == KAL_FALSE)
    {
        RMMI_UART_CtrlRI(rmmi_cid_2_port(rmmi_srcid_2_cid(RMMI_PTR->rmmi_urc_channel_src)),
	                       io_low, MOD_ATCI);
    }
    else
    {
        RMMI_UART_CtrlRI(rmmi_cid_2_port(rmmi_srcid_2_cid(RMMI_PTR->rmmi_urc_channel_src)),
	                       io_high, MOD_ATCI);
    }		
    #endif		
}


/*****************************************************************************
 * FUNCTION
 *  l4c_update_retry_call_state_ind
 * DESCRIPTION
 *  send CPI or update_call_state indication for retry call
 * PARAMETERS
 *  call_id    [IN]
 *  src_id     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_update_retry_call_state_ind(kal_uint8 call_id,kal_uint8 src_id)
{
    kal_uint8 msg_type = 0;
    kal_uint8 msg_bit = 0;	
    kal_uint8 temp_src;	
    #if defined(__MMI_FMI__)		
    l4c_number_struct addr;
    #endif
	l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
	rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
	#if defined(__MMI_FMI__)
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim
    #endif
    
    temp_src = rmmi_ptr->current_src;    	
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    
    /* send CPI all call disconnected(+ECPI:129) if necessary */	
    if(csmcc_is_any_call_exist()== KAL_FALSE)
    {
        kal_uint16 string_length;
        kal_uint8 buffer[MAX_UART_LENGTH];
	
        msg_type = CSMCC_ALL_CALLS_DISC_MSG;
        msg_bit = msg_type - CSMCC_ALL_CALLS_DISC_MSG + 7;
		
        kal_brief_trace(TRACE_GROUP_1, CPI_INFO_TYPE,
        		        msg_type,
        		        call_id,
        		        l4c_ptr->retry_cc,
        		        l4c_ptr->cc_retry_ongoing_flag,
        		        l4c_ptr->mo_call_id);    

        #if defined(__MMI_FMI__)	
        if(l4c_comm_ptr->cpi_mode & (INFO_REPORT_MASK << msg_bit))
        {    
            kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
            l4c_cc_cpi_lind(call_id,(csmcc_cpi_msg_type_enum)msg_type,0,0,(clcc_dir_enum)0,(clcc_mode_enum)0,0,&addr,0,src_id,0);
        }
        #endif 
  
        if(rmmi_ptr->report_mode.ecpi & (INFO_REPORT_MASK << msg_bit))			
        {		
            rmmi_ptr->arg_list[0] = (void*)&call_id;

            string_length = rmmi_fast_string_print(buffer,
        #if defined(__CPI_SUPPORT__)
                                               (kal_uint8*) "+ECPI: %d,129,0,0,,,\"\",,\"\",16",
        #else 
                                               (kal_uint8*) "+ECPI: %d,129,0,0",
        #endif 
                                               rmmi_ptr->arg_list, 1); //CM_NORMAL_CALL_CLR 16

            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        }		
    }		

    /* send CPI call state changed to disconnected(+ECPI:133) for retry call */
    msg_type = CSMCC_STATE_CHANGE_DISCONNECTED;
    msg_bit = msg_type - CSMCC_ALL_CALLS_DISC_MSG + 7;	

    kal_brief_trace(TRACE_GROUP_1, CPI_INFO_TYPE,
		            msg_type,
		            call_id,
		            l4c_ptr->retry_cc,
		            l4c_ptr->cc_retry_ongoing_flag,
		            l4c_ptr->mo_call_id);
	
    #if defined(__MMI_FMI__)	
    if(l4c_comm_ptr->cpi_mode & (INFO_REPORT_MASK << msg_bit))
    {    
        kal_mem_set(&addr, 0, sizeof(l4c_number_struct));  
        l4c_cc_cpi_lind(call_id,(csmcc_cpi_msg_type_enum)msg_type,0,0,(clcc_dir_enum)0,(clcc_mode_enum)0,0,&addr,0,src_id,0);
    }
    #endif 

    l4c_cc_update_call_state_rind(msg_type,call_id);

#ifdef __OP01__
    l4c_cc_call_state_rind(RMMI_MO_STATE_CEND,
                           call_id, 0,
                           CM_CALL_END_CONF_FAILED,
                           KAL_FALSE, 0 /* cause */,
                           CSMCC_NO_CALL_TYPE,
                           KAL_FALSE);
#endif
	
    rmmi_ptr->current_src = temp_src;	
	
    return;
}


#ifdef __CPI_SUPPORT__ 
/*****************************************************************************
 * FUNCTION
 *  l4c_send_callid_assign_fail_ind
 * DESCRIPTION
 * CSM can not guarntee always assign call_id first.(ex: fail to allocate call_id) 
 * i.e. CSM send call setup cnf fail before call_id assigned                       
 * So for such cases,L4C help to send call_id assign event with a special call_id  
 * for application to identify such MO call local fail.                            
 * PARAMETERS
 *  src_id     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_callid_assign_fail_ind(kal_uint8 src_id,kal_uint16 cause)
{
    kal_uint8 msg_type = 0;
    kal_uint8 msg_bit = 0;	
    kal_uint8 call_id = 0; 
    #if defined(__MMI_FMI__)		
    l4c_number_struct addr;
    #endif
    #if !defined(__MMI_FMI__) && !defined(__WM_RIL_SUPPORT__) //ALPS00134754
    kal_uint8 temp_src;		
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    #endif	
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
	#if defined(__MMI_FMI__)
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim
    #endif

    /* send CPI call_id assigned event with a special call_id for application 
       to identifiy MO call fail before CSM assign call_id */
    call_id = MO_CALL_ASSIGN_FAIL_CALLID; 
    msg_type = CSMCC_MO_CALL_ID_ASSIGN_MSG;
    msg_bit = msg_type - CSMCC_ALL_CALLS_DISC_MSG + 7;	

    kal_brief_trace(TRACE_GROUP_1, CPI_INFO_TYPE,
    		        msg_type,
    		        call_id,
    		        l4c_ptr->retry_cc,
    		        l4c_ptr->cc_retry_ongoing_flag,
    		        call_id);
	
    #if defined(__MMI_FMI__)	
    if(l4c_comm_ptr->cpi_mode & (INFO_REPORT_MASK << msg_bit))
    {    
        kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
        l4c_cc_cpi_lind(call_id,(csmcc_cpi_msg_type_enum)msg_type,0,0,(clcc_dir_enum)0,(clcc_mode_enum)0,0,&addr,cause,src_id,0);
    }
    #endif

    /* Currently, don't send this to WM RIL. But WM RIL shall able to handle this case in the future.*/
    #if !defined(__MMI_FMI__) && !defined(__WM_RIL_SUPPORT__) //ALPS00134754
    temp_src = rmmi_ptr->current_src;    	
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
	
    if(rmmi_ptr->report_mode.ecpi & (INFO_REPORT_MASK << msg_bit))			
    {
        rmmi_ptr->arg_list[0] = (void*)&call_id;
        rmmi_ptr->arg_list[1] = (void*)&msg_type;

        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) (kal_uint8*) "+ECPI: %d,%d,,,,,\"\",,\"\"", rmmi_ptr->arg_list, 2);

        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }

    rmmi_ptr->current_src = temp_src;
    #endif	

    return;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_call_dial_lrsp
 * DESCRIPTION
 *  This function is used to indirectly call l4c_cc_exe_call_setup_lrsp()
 *  To make sure MMI receiving CPI_IND with call id assign before DIAL_IND
 * PARAMETERS
 *  src_id     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_exe_call_dial_lrsp(kal_uint8 src_id, 
                               kal_uint8 response, 
                               kal_uint16 cause, 
                               kal_uint8 call_id, 
                               kal_bool is_diag_present, 
                               kal_uint8 diag)
{
    l4c_result_struct result;
    
#if defined(__CPI_SUPPORT__)
    if((L4C_PTR->mo_call_id == CSMCC_INVALID_CALL_ID) && (response == L4C_ERROR))
    {
        /* CSM can not guarntee always assign call_id first.(ex: fail to allocate call_id) *
         * i.e. CSM send call setup cnf fail before call_id assigned                       *
         * So for such cases,L4C help to send call_id assign event with a special call_id  *
         * for application to identify such MO call local fail.                            */
         l4c_send_callid_assign_fail_ind(src_id, cause);
    }
#endif
    result.flag = response;
    result.cause = cause;
    l4c_cc_exe_call_setup_lrsp(result, call_id, is_diag_present, diag); //MAUI_02526481
}

#if defined(__CMUX_MODEM_STATUS_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_ctrl_dcd_status
 * DESCRIPTION
 *  c
 * PARAMETERS
 *  mt_call_exist      [IN]        
 *  mt_call_id         [IN]
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctrl_dcd_status(kal_uint8 src_id, module_type ownerid)
{
    kal_uint8 call_id;
    kal_uint8 dcd_level;
    kal_uint8 cid;	
    kal_uint8 port;

    cid = rmmi_srcid_2_cid(src_id);
    port  = rmmi_cid_2_port(cid);	

    //call state is not held or active when crss or ath is still processing
    if((l4c_search_all_src(l4c_current_mod_id, CHLD_EXE) == KAL_TRUE)
		||(l4c_search_all_src(l4c_current_mod_id, ATH_EXE) == KAL_TRUE))
    {
        return;   
    }	
	
    if((l4ccsm_cc_get_active_call(&call_id) == KAL_TRUE) ||
	 (l4ccsm_cc_get_hold_call(&call_id) == KAL_TRUE) ||
	 (RMMI_PTR->uart_in_data_mode == KAL_TRUE))
    {
        dcd_level = 1;		
    }
    else
    {
        dcd_level = 0;		
    }

    kal_brief_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, port,dcd_level);			
    RMMI_UART_CtrlDCD((UART_PORT)port, (IO_level)dcd_level, ownerid);
	
    return;		
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_reset_sms_context
 * DESCRIPTION
 *  when l4c send reset init to smsal, it needs to reset its own sms context
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_reset_sms_context()
{
	kal_uint8 i=0;
	rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR; 
	
    for (i = 0; i < MAX_SOURCE_NUM; i++)
    {
    	  if((l4c_ptr->sms_current_action[i] != L4C_NO_ACTION) && (i >= RMMI_SRC) && (i < RMMI_ALL))
    	  {
    	      rmmi_ptr->current_src = i;
    	      rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, SMS_SIM_FAILURE, KAL_TRUE);
    	  }
		  
		  l4c_ptr->sms_current_action[i] = L4C_NO_ACTION;
    }   

	l4c_ptr->sms_ready_flag = KAL_FALSE;
	
    l4c_ptr->sms_da_fdn_check = KAL_FALSE;
	
    for (i = 0; i < MAX_SOURCE_NUM; i++)
    {    
        l4c_ptr->sms_num[i] = 0;
    }    
	
    l4c_ptr->sms_abort_ongoing = KAL_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_format_alpha_id
 * DESCRIPTION
 *  this function is used to format the alpha id to the appropriate format according to the DCS
 *  and store it in the rsp_string
 *  
 * PARAMETERS
 *  alpha_id_ptr            [IN]         the input alpha id, it shoule be the pointer of l4_name_struct
 *  rsp_string          [OUT]      the output formatted alpha id
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_format_alpha_id(void *alpha_id_ptr, kal_uint8 *rsp_string)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 ucs2_data[2 * MAX_PS_NAME_SIZE]; 
    #ifdef __PHB_0x81_SUPPORT__
    istring_type decoded_str;
    #endif /* __PHB_0x81_SUPPORT__ */ 
    l4_name_struct *alpha_id = (l4_name_struct*) alpha_id_ptr;

    /* transfer dcs to current setting or +CSCS */
    if (alpha_id->name_dcs == PHB_ASCII) //GSM7bit
    {
        check_dcs_toCscs(0x00, alpha_id->name_length, alpha_id->name, rsp_string);
    }
    else if (alpha_id->name_dcs == PHB_UCS2)
    {
        switch (rmmi_ptr->char_set)
        {
            case RMMI_CHSET_UCS2:
            case RMMI_CHSET_HEX: 
                rmmi_print_ucs2(alpha_id->name, rsp_string);
                break;
            case RMMI_CHSET_GSM:
            case RMMI_CHSET_IRA:
                kal_mem_cpy(ucs2_data, alpha_id->name, alpha_id->name_length + 2);
                rmmi_byte_order_reverse(
                    (kal_uint8*) ucs2_data,
                    (kal_uint16) (alpha_id->name_length + 2));
                ucs2_to_ascii((kal_wchar*) ucs2_data, rsp_string);
                break;
        }
    }
    else        //eg: thai languate
    {

        switch (rmmi_ptr->char_set)
        {
            case RMMI_CHSET_UCS2:
            case RMMI_CHSET_HEX:
            #ifdef __PHB_0x81_SUPPORT__     /* support maximum length of 0x81 UCS2 */
                decoded_str.length = 2 * MAX_PS_NAME_SIZE - 2;
                decoded_str.data = ucs2_data;
                if (alpha_id->name_dcs == PHB_UCS2_82)
                {
                    kal_mem_set(ucs2_data, 0, 2 * MAX_PS_NAME_SIZE);
                    istring_decode_0x82_to_0x80(
                        alpha_id->name_length,
                        alpha_id->name,
                        &decoded_str);
                    rmmi_print_ucs2(decoded_str.data, rsp_string);
                }
                else if (alpha_id->name_dcs == PHB_UCS2_81)
                {
                    kal_mem_set(ucs2_data, 0, 2 * MAX_PS_NAME_SIZE);
                    istring_decode_0x81_to_0x80(
                        alpha_id->name_length,
                        alpha_id->name,
                        &decoded_str);
                    rmmi_print_ucs2(decoded_str.data, rsp_string);
                }
                else
            #endif /* __PHB_0x81_SUPPORT__ */ 
                {
                    rsp_string[0] = '\0';
                }
                break;

            case RMMI_CHSET_GSM:
            case RMMI_CHSET_IRA:
                rsp_string[0] = '\0';
                break;
        }
    }    
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_set_last_number_dialed
 * DESCRIPTION
 *  this function is used to set the last dialed number
 *  which should be called when the last dialed number is changed due to write or delete action or
 *  when initiating PHB
 *
 * PARAMETERS
 *  tel_ptr                 [IN]        the input tel number of call log, it should be the pointer of l4c_number_struct
 *  type                    [IN]        the type of call log
 *  address_type        [IN]        the addreess type which should be 0 when not (defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__) )
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_set_last_number_dialed(void *tel_ptr, kal_uint8 type, kal_uint8 address_type)
{
    kal_uint8 tmp_index = 0;
    l4c_number_struct *tel = (l4c_number_struct*) tel_ptr;
      
    if (type == PHB_LND && address_type == 0)   //GSM last number dialed //PHB_LN_CALL???
    {
        if (tel->type == 0x91)
        {
            RMMI_PTR->last_number_dialed[0] = '+';
            tmp_index = 1;
        }
        kal_mem_cpy((kal_uint8*) &RMMI_PTR->last_number_dialed[tmp_index], 
                tel->number, 
                MAX_CC_ADDR_LEN - tmp_index
        );
    #if defined(__L4C_GEMINI_BT_HF__)
        L4C_ROOT_PTR->last_dialed_sim = l4c_current_mod_id - MOD_L4C;
    #endif
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_atd_mem_dial
 * DESCRIPTION
 *  this function is used to handle the following actions after reading PHB entry which is triggered by ATD
 *  
 * PARAMETERS
 *  tel_number          [IN]        the read tel number
 *  ton                 [IN]        the type of number
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_atd_mem_dial(kal_uint8 *tel_number, kal_uint8 ton)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 dial_number[MAX_CC_ADDR_LEN+1]; //including '+'

    kal_mem_set(dial_number, 0, MAX_CC_ADDR_LEN+1);
    if (ton == 0x91) //MAUI_01614617: add back leading '+'
    {
        dial_number[0] = RMMI_CHAR_PLUS;
        kal_mem_cpy(dial_number + 1, tel_number, MAX_CC_ADDR_LEN);
    }
    else
    {
        kal_mem_cpy(dial_number, tel_number, MAX_CC_ADDR_LEN);
    }

    //mtk00758 - atd>
#ifndef __UCM_SUPPORT__
    if (rmmi_ptr->rmmi_atd_mem != RMMI_MEM_DIAL_NONE)
    {
        rmmi_string_struct ss_string;
        kal_uint8 length;
        kal_bool ret_val;
        l4c_ss_string_info_struct info;
        kal_uint8 call_type, i;

        for (i = 0; (i < MAX_CC_ADDR_LEN) && (tel_number[i] != RMMI_END_OF_STRING_CHAR); i++)
        {
            if (tel_number[i] == custom_wild_char())
            {
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, INVALID_CHARACTERS_IN_DIAL_ERRSTRING_ERR);
                rmmi_ptr->rmmi_atd_mem = RMMI_MEM_DIAL_NONE; //MAUI_02067750
                return;
            }
        }

        ss_string.index = 0;
        ss_string.string_ptr = get_ctrl_buffer(50);
        ss_string.ip_string = get_ctrl_buffer(21);
        ss_string.ip_string[0] = 0;

        kal_mem_cpy(ss_string.string_ptr, dial_number, MAX_CC_ADDR_LEN+1);
        length = (kal_uint8)strlen((char*)ss_string.string_ptr);
		
	    if (rmmi_ptr->rmmi_atd_mem == RMMI_MEM_DIAL_VOICE)
	    {
            call_type = CSMCC_VOICE_CALL;
	    }
        else
        {
            call_type = CSMCC_DATA_CALL;
        }
		
        rmmi_ptr->rmmi_atd_mem = RMMI_MEM_DIAL_NONE;

        ret_val = l4c_ss_string_parsing(
                    rmmi_ptr->current_src,
                    0x0f,
                    &ss_string,
                    length,
                    &info,
                    call_type,
                    KAL_FALSE,
                    ALS_DIAL_BY_SETTING,
                    INFO_ECC_CHECK_BY_MODEM);

        if (ret_val == KAL_FALSE) //MAUI_01614492
        {
            if (info.opcode != CC_OPERATION)
            {
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
            }
            else
            {
                rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_ERR_UNKNOWN);
            }
        }

        free_ctrl_buffer(ss_string.string_ptr);
        free_ctrl_buffer(ss_string.ip_string);
        return;
    }
#else //__UCM_SUPPORT__
    if (rmmi_ptr->rmmi_atd_mem != RMMI_MEM_DIAL_NONE)
    {
        kal_uint8 length;
        kal_uint8 number[50];
        kal_bool cmd_from_bt = KAL_FALSE;
        kal_uint8 action;

        kal_mem_cpy(number, dial_number, MAX_CC_ADDR_LEN+1);
        length = strlen((char*)number);

        if (length > 0)
        {
        #if defined(__BT_SUPPORT__)
            if (rmmi_ptr->current_src == RMMI_COMM_PTR->rmmi_hf_src)    
            {
                cmd_from_bt = KAL_TRUE;
            }
        #endif /* defined(__BT_SUPPORT__) */ 
            if (rmmi_ptr->rmmi_atd_mem == RMMI_MEM_DIAL_VOICE)
	        {
                action = RMMI_UCM_ATD;
	        }
            else
            {
                action = RMMI_UCM_ATD_DATA;
            }
            rmmi_ptr->rmmi_atd_mem = RMMI_MEM_DIAL_NONE;
            l4c_mmi_ucm_at_req_lind(action, rmmi_ptr->current_src, cmd_from_bt, length, number, 0, 0); //hong_data_call
            rmmi_ptr->is_ucm_action = KAL_TRUE;
            #ifdef __MMI_FMI__      // mtk02514_lmmi
            L4C_PTR->route_thru_lmmi = KAL_TRUE;
            L4C_PTR->route_thru_lmmi_user = rmmi_ptr->current_src;
            #endif
        }
        else
        {
            rmmi_ptr->rmmi_atd_mem = RMMI_MEM_DIAL_NONE; //MAUI_02067750
            kal_brief_trace(TRACE_INFO, INFO_ATD_MEMORY_DIAL);
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
        }
        return;
    }
#endif /* __UCM_SUPPORT__ */     
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_set_result_code
 * DESCRIPTION
 *  this function is used to set the l4c result structure using the result and cause from PHB
 *  
 * PARAMETERS
 *  phb_result               [IN]          the PHB result
 *  phb_cause               [IN]           the PHB cause
 *  result_ptr                [OUT]        the l4c result, it should be the pointer of l4c_result_struct
 *  other_cond              [IN]           other condition which indicates what additional PHB result should not be treated as ERROR 
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_set_result_code(kal_uint8 phb_result, kal_uint16 phb_cause, void *result_ptr, kal_uint8 other_cond)
{
    l4c_result_struct *result = (l4c_result_struct*) result_ptr;
        
    if ((phb_result != PHB_ERRNO_SUCCESS) &&
        (phb_result != PHB_ERRNO_READ_SUCCESS) && (phb_result != other_cond))
    {
        result->flag = L4C_ERROR;
        result->cause = phb_cause;
    }
    else
    {
        result->flag = L4C_OK;
        result->cause = L4C_NO_CAUSE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_set_tel_number
 * DESCRIPTION
 *  this function is used to convert tel number from ASCII to BCD according to the convert_method
 *  
 * PARAMETERS
 *  phb_tel_ptr                 [IN]       the input ASCII tel number from PHB, it should be the pointer of l4_addr_bcd_struct
 *  l4c_phb_tel_ptr            [OUT]    the output BCD tel number, it should be the pointer of l4c_number_struct
 *  convert_method          [IN]        the converted method
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_set_tel_number(void *phb_tel_ptr, void *l4c_phb_tel_ptr, convert_to_bcd_enum convert_method)
{
    l4_addr_bcd_struct *phb_tel = (l4_addr_bcd_struct*) phb_tel_ptr;
    l4c_number_struct *l4c_phb_tel = (l4c_number_struct*) l4c_phb_tel_ptr;

    phb_tel->addr_length = convert_to_general_bcd( 
                                                    (kal_uint8*) l4c_phb_tel->number, 
                                                    (kal_uint8*) & (phb_tel->addr_bcd[1]), 
                                                    40, convert_method) + 1;
    phb_tel->addr_bcd[0] = l4c_phb_tel->type;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_sim_storage_by_current_module()
 * DESCRIPTION
 * this function is used to get the PHB_STORAGE_SIM_X
 * according to the current ATCI module
 *  
 * PARAMETERS
 *  none
 * RETURNS
 *  phb_storage_enum
 *****************************************************************************/
phb_storage_enum l4c_phb_get_sim_storage_by_current_module()
{
    kal_uint8 i;
    for (i=0; i<L4_MAX_SIM_NUM; i++) 
    {
        if (L4_MODULE(MOD_L4C, i) == l4c_current_mod_id)
            break;
    }
    i = i ==0 ? PHB_STORAGE_SIM : (PHB_STORAGE_SIM2 + i -1);
    
    return i;
}


/*****************************************************************************
* FUNCTION
 *  l4c_clear_poweron_action
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]      
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_clear_poweron_action(kal_uint8 src_id)
{
   	kal_uint8 id;

  /************************************************************** 
    *mtk02480, POWERON_EXE and CPIN_EXE may come from different src_id
    *   1. WM may power on at RMMI_SRC but +CPIN in another src
    *   2. PowerOn with LMMI, verify PIN using AT+CPIN
   **************************************************************/

    for (id = LMMI_SRC; id < RMMI_ALL; id++)
    {
        if (L4C_PTR->cc_current_action[id] == POWERON_EXE)
        {
            L4C_PTR->cc_current_action[id] = L4C_NO_ACTION;
        }		   
    }	
}

/*****************************************************************************
* FUNCTION
*  	l4c_activate_sub_modules()
* DESCRIPTION
*   This function is to activate L4 sub modules, 
*	L4C_PTR->sub_modules_ready is used to ensure activate sub modules once only
* PARAMETERS
*   src_id : this information might be used to distingiush MMI/AT/SAT call and
*            apply different configuration
* RETURNS
*	void
*****************************************************************************/
void l4c_activate_sub_modules(kal_uint8 src_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

	 if (l4c_ptr->sub_modules_ready == KAL_TRUE)
	 {
		return;	 
	 }

        /* Activate CSM with SIM */
        #ifdef __MOD_CSM__
        {
	     l4ccsm_cc_startup_req_struct *param_ptr;

            param_ptr = (l4ccsm_cc_startup_req_struct*)construct_local_para((kal_uint16) sizeof(l4ccsm_cc_startup_req_struct), TD_RESET);
            param_ptr->src_id = src_id;
            param_ptr->init_type = L4CCSM_CC_STARTUP_SIM;
            l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_STARTUP_REQ, param_ptr, NULL, 0);
        }
	 #endif
#if 0
/* under construction !*/
	 #ifdef __MOD_PHB__
/* under construction !*/
/* under construction !*/
	 #endif
/* under construction !*/
/* under construction !*/
	 #ifdef __MOD_SMSAL__	
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
#endif		
        /* act ABM */
    #ifdef __TCPIP__          
        if (l4c_current_mod_id == MOD_L4C)
        {
            l4cabm_start_req_struct *param_ptr2;

            if (l4c_ptr->cc_current_action[LMMI_SRC] == POWEROFF_EXE)
            {
                return;
            }
            param_ptr2= (l4cabm_start_req_struct*)construct_local_para((kal_uint16) sizeof(l4cabm_start_req_struct), TD_RESET);
            param_ptr2->src_id = LMMI_SRC;
            l4c_send_msg_to_abm(MSG_ID_L4CABM_START_REQ, param_ptr2);
        }
    #endif 

	    l4c_ptr->sub_modules_ready = KAL_TRUE;
        kal_trace(TRACE_INFO, INFO_L4C_STARTUP, l4c_ptr->cc_current_action[src_id], l4c_ptr->smu_activated, L4C_COMM_PTR->rac_activated);		
    }

/*****************************************************************************
* FUNCTION
*  	l4c_reset_sub_modules()
* DESCRIPTION
*   This function is to reset L4 sub modules when SIM plug out or lost
* PARAMETERS
*   l4c_sub_module_enum : the sub modules to be reset
* RETURNS
*	void
*****************************************************************************/
void l4c_reset_sub_modules(l4c_sub_module_enum sub_mod)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    // Only reset sub modules after sub modules are activated
    if (l4c_ptr->sub_modules_ready == KAL_FALSE)
    {
        return;
    }

    // Only reset PHB after PHB was ready
#ifdef __MOD_PHB__
    if (sub_mod & L4_PHB)
    {
        if (l4c_ptr->phb_ready_flag == KAL_TRUE)
        {
            phb_reset();
            l4c_phb_startup_begin_req();
        }
    }
#endif

    // Only reset SMSAL after SMSAL was ready
#ifdef __MOD_SMSAL__
    if (sub_mod & L4_SMSAL)
    {
        if (l4c_ptr->sms_ready_flag == KAL_TRUE)
        {    
            l4csmsal_init_req_struct *param_ptr;
            l4c_reset_sms_context();
            param_ptr = (l4csmsal_init_req_struct*)construct_local_para((kal_uint16) sizeof(l4csmsal_init_req_struct), TD_RESET);
            param_ptr->src_id = LMMI_SRC;
            param_ptr->is_sim_change = l4c_check_sim_status();
            param_ptr->init_type = SMSAL_RESET_INIT;
            l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_INIT_REQ, param_ptr, NULL, 0);
        }
    }
#endif

}

#if defined(PLUTO_MMI)
/*****************************************************************************
* FUNCTION
*  	l4c_eq_screen_shot_output()
* DESCRIPTION
*   This function is used to output the screen shot data, it will be called when first output in screen shot 
* res req hdlr or in uart ready to write handler
* PARAMETERS
*
* RETURNS
*	void
*****************************************************************************/
void l4c_eq_screen_shot_output(void)
{
    kal_uint32 read_length;
    kal_int8 ret_v;
    kal_uint8 endf = 0;
    kal_uint8 cid;
    //kal_uint16 index = 0;
    kal_uint32 i = 0;/* counter for string format convert */
    kal_uint8 * buffer = NULL;
    kal_uint8 * buff_p = NULL;
    kal_uint8 data1;
    kal_uint8 data2;
    kal_uint32 output_len = (MAX_DATA_QUEUE_LENGTH-100)/2;/* Out put data will be double length of this value */
    kal_uint32 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    buffer = (kal_uint8*)get_ctrl_buffer(output_len*2+40);/* 40 bytes for +ECSCN: ...extra header except raw data*/
    buff_p = (kal_uint8*)get_ctrl_buffer(output_len);//this number will be modified later..

    // kal_prompt_trace(MOD_L4C, "screen shot ready to read file");//this will be removed when checking in
    ASSERT(rmmi_ptr->screenshot_fd != NULL);
    cid = rmmi_srcid_2_cid(rmmi_ptr->current_src);
    
    while(1)
    {
        //read file here
        ret_v = FS_Read(rmmi_ptr->screenshot_fd, buff_p, output_len, &read_length);

        if(ret_v < FS_NO_ERROR)
        {
            kal_brief_trace(TRACE_WARNING, WARNING_L4C_EQ_FS_RETURN_ERROR, 2, ret_v);
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
            
            /* Close file */
            ret_v = FS_Close(rmmi_ptr->screenshot_fd);
            rmmi_ptr->screenshot_pending = KAL_FALSE;
            rmmi_ptr->screenshot_fd = NULL;
            rmmi_ptr->screenshot_index = 0;
            if(ret_v < FS_NO_ERROR)
            {
                kal_brief_trace(TRACE_WARNING, WARNING_L4C_EQ_FS_RETURN_ERROR, 3, ret_v);
            }
            break;
        }
        /* Below this line indicates no read error */
        if(read_length < output_len)
        {
            endf = 1;
        }
        //kal_prompt_trace(MOD_L4C, "screen shot read file loop %d", index);//this will be removed when checking in
        rmmi_ptr->arg_list[0] = (void*)&rmmi_ptr->s_reg.s3;
        rmmi_ptr->arg_list[1] = (void*)&rmmi_ptr->s_reg.s4;
        rmmi_ptr->arg_list[2] = (void*)&rmmi_ptr->screenshot_index;
        rmmi_ptr->arg_list[3] = (void*)&endf;
        rmmi_ptr->arg_list[4] = (void*)&read_length;//this need be modified later
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*)"%c%c+ECSCN: %u,%d,%e,\"", rmmi_ptr->arg_list, 5);
        //rmmi_write_to_uart(buffer, string_length, KAL_FALSE);

        for(i = 0; i < read_length; i++)
        {
            data1 = (buff_p[i] & 0xF0) >> 4;
			data2 = (buff_p[i] & 0x0F);

			if(data1 <= 9)      
			{
			    data1 += 0x30;
			}
		    else if((data1 >= 0xA) && (data1 <= 0xF))      
			{
			    data1 += 0x37;
			}

			if(data2 <= 9)      
			{
			    data2 += 0x30;
			}
			else if((data2 >= 0xA) && (data2 <= 0xF))      
			{
			    data2 += 0x37;
			}

            buffer[2*i+string_length] = data1;
            buffer[2*i+1+string_length] = data2;
        }
        string_length += read_length*2;

        /* Append "<CR><LF> to the end of string */
        buffer[string_length] = 0x22;
        buffer[string_length+1] = 0x0d;
        buffer[string_length+2] = 0x0a;
        string_length += 3;
        //rmmi_write_to_uart(buffer, read_length*2, KAL_FALSE);

        //rmmi_ptr->arg_list[0] = (void*)&rmmi_ptr->s_reg.s3;
        //rmmi_ptr->arg_list[1] = (void*)&rmmi_ptr->s_reg.s4;
                
        //string_length += rmmi_fast_string_print(buffer, (kal_uint8*)"\"%c%c", rmmi_ptr->arg_list, 2);
        rmmi_write_to_uart(buffer, string_length, KAL_FALSE);
        //if(rmmi_ptr->stop_sending_flag )
                
        if(endf == 1)
        {
            /* reach the end of the file, close file and return OK */
            ret_v = FS_Close(rmmi_ptr->screenshot_fd);
            rmmi_ptr->screenshot_pending = KAL_FALSE;
            rmmi_ptr->screenshot_fd = NULL;
            rmmi_ptr->screenshot_index = 0;
            if(ret_v < FS_NO_ERROR)
            {
                kal_brief_trace(TRACE_WARNING, WARNING_L4C_EQ_FS_RETURN_ERROR, 3, ret_v);
            }
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            break;
        }
        
        rmmi_ptr->screenshot_index ++;
        if (RMMI_COMM_PTR->uart_stop_send_flag & (0x01 << cid))
        {
            rmmi_ptr->screenshot_pending = KAL_TRUE;
            break;
        }
        //string_length = 0;
    } /*end of while(1) */

    if(buffer != NULL)
    {
        free_ctrl_buffer(buffer);
    }
    if(buff_p != NULL)
    {
        free_ctrl_buffer(buff_p);
    }
}


#endif /* defined(PLUTO_MMI) */

#if defined(__OP01__)
/*****************************************************************************
* FUNCTION
*  	l4c_nw_sysconfig_update()
* DESCRIPTION
* PARAMETERS
*   src_id : this information might be used to distingiush MMI/AT/SAT call and
*            apply different configuration
* RETURNS
*	void
*****************************************************************************/
void l4c_nw_sysconfig_update(kal_uint8 src_id)
{
    l4c_nw_sysconfig_struct *sysconfig = L4C_PTR->nw_sysconfig;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (sysconfig->mobile_class != l4crac_get_mobile_class())
    {
        // Set mobile class
        l4crac_class_change_req_struct *param_ptr = (l4crac_class_change_req_struct*)construct_local_para((kal_uint16) sizeof(l4crac_class_change_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->ms_class = sysconfig->mobile_class;

        l4c_send_msg_to_rac(MSG_ID_L4CRAC_CLASS_CHANGE_REQ, param_ptr);
    }
    else if (sysconfig->prefer_rat != l4crac_get_prefer_rat())
    {
        // Set prefer rat
        l4crac_set_prefer_rat_req_struct *param_ptr = (l4crac_set_prefer_rat_req_struct*)construct_local_para((kal_uint16) sizeof(l4crac_set_prefer_rat_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->prefer_rat = sysconfig->prefer_rat;
        l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_PREFER_RAT_REQ, param_ptr);
    }
#if defined(__DYNAMIC_ROAMING_SUPPORT__) && defined(__OP01_3G__)
    else  if (sysconfig->support_roaming != l4crac_get_roaming_mode())
    {
        // Set roaming support
        l4crac_set_roaming_mode_req_struct *param_ptr = (l4crac_set_roaming_mode_req_struct*)construct_local_para((kal_uint16) sizeof(l4crac_set_roaming_mode_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->is_supporting_roaming = sysconfig->support_roaming;
        l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_ROAMING_MODE_REQ, param_ptr);
    }
#endif
    else if (sysconfig->rat_mode != l4crac_get_rat_mode())
    {
        // Set rat
        l4crac_set_rat_mode_req_struct *param_ptr = (l4crac_set_rat_mode_req_struct*)construct_local_para((kal_uint16) sizeof(l4crac_set_rat_mode_req_struct), TD_RESET);
        
        param_ptr->src_id = src_id;
        param_ptr->rat_mode = sysconfig->rat_mode;
        param_ptr->save_to_nvram = KAL_TRUE;
        l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_RAT_MODE_REQ, param_ptr);
    }
    else
    {
        l4crac_reg_req_struct *param_ptr = (l4crac_reg_req_struct*) construct_local_para((kal_uint16) sizeof(l4crac_reg_req_struct), TD_RESET);
        param_ptr->src_id = param_ptr->src_id;

        // Attach network
        if (l4c_ptr->mmrr_ready_flag == KAL_FALSE)
        {
            param_ptr->search_type = MMI_SEARCH_ANY;
        }
        else
        {
            l4c_ptr->has_deregistered = KAL_FALSE;
            param_ptr->search_type = MMI_SEARCH_NORMAL;
        }
        l4c_send_msg_to_rac(MSG_ID_L4CRAC_REG_REQ, param_ptr);

        // All sys conifg has been done
        if (src_id == LMMI_SRC)
        {
            // TODO
        }
        else
        {
            rmmi_ptr->current_src = src_id;
            l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        }

        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);

        free_ctrl_buffer(sysconfig);
        l4c_ptr->nw_sysconfig = NULL;        
    }
    
}
#endif


#if defined(__SYSSEL_SUPPORT__)
/*****************************************************************************
* FUNCTION
*  	l4c_nw_syssel_update()
* DESCRIPTION
* PARAMETERS
*   src_id : this information might be used to distingiush MMI/AT/SAT call and
*            apply different configuration
* RETURNS
*	void
*****************************************************************************/
void l4c_nw_syssel_update(kal_uint8 src_id)
{
    l4c_nw_syssel_struct *syssel = L4C_PTR->nw_syssel;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (syssel->mobile_class != l4crac_get_mobile_class())
    {
        // Set mobile class
        l4crac_class_change_req_struct *param_ptr = (l4crac_class_change_req_struct*)construct_local_para((kal_uint16) sizeof(l4crac_class_change_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->ms_class = syssel->mobile_class;

        l4c_send_msg_to_rac(MSG_ID_L4CRAC_CLASS_CHANGE_REQ, param_ptr);
    }
    else if (syssel->prefer_rat != l4crac_get_prefer_rat())
    {
        // Set prefer rat
        l4crac_set_prefer_rat_req_struct *param_ptr = (l4crac_set_prefer_rat_req_struct*)construct_local_para((kal_uint16) sizeof(l4crac_set_prefer_rat_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->prefer_rat = syssel->prefer_rat;
        l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_PREFER_RAT_REQ, param_ptr);
    }
    else if (syssel->rat_mode != l4crac_get_rat_mode())
    {
        // Set rat
        l4crac_set_rat_mode_req_struct *param_ptr = (l4crac_set_rat_mode_req_struct*)construct_local_para((kal_uint16) sizeof(l4crac_set_rat_mode_req_struct), TD_RESET);
        
        param_ptr->src_id = src_id;
        param_ptr->rat_mode = syssel->rat_mode;
        param_ptr->save_to_nvram = KAL_TRUE;
        l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_RAT_MODE_REQ, param_ptr);
    }
    else
    {
        l4crac_reg_req_struct *param_ptr = (l4crac_reg_req_struct*) construct_local_para((kal_uint16) sizeof(l4crac_reg_req_struct), TD_RESET);
        param_ptr->src_id = src_id;

        // Attach network
        if (l4c_ptr->mmrr_ready_flag == KAL_FALSE)
        {
            param_ptr->search_type = MMI_SEARCH_ANY;
        }
        else
        {
            l4c_ptr->has_deregistered = KAL_FALSE;
            param_ptr->search_type = MMI_SEARCH_NORMAL;
        }
        l4c_send_msg_to_rac(MSG_ID_L4CRAC_REG_REQ, param_ptr);

        // All sys conifg has been done
        if (src_id == LMMI_SRC)
        {
            // TODO
        }
        else
        {
            rmmi_ptr->current_src = src_id;
            l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        }

        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);

        free_ctrl_buffer(syssel);
        l4c_ptr->nw_syssel = NULL;        
    }
    
}


/*****************************************************************************
* FUNCTION
*  	l4c_save_syssel_setting()
* DESCRIPTION
* PARAMETERS
*   src_id : this information might be used to distingiush MMI/AT/SAT call and
*            apply different configuration
* RETURNS
*	void
*****************************************************************************/
void l4c_save_syssel_setting(kal_uint8 src_id, kal_uint8 band)
{
    nvram_write_req_struct *nvram_write_req_ptr = NULL;
    
    nvram_write_req_ptr = (nvram_write_req_struct*)construct_local_para(sizeof(nvram_write_req_struct), TD_RESET);

    nvram_write_req_ptr->file_idx = NVRAM_EF_SYSSEL_SETTING_LID;
    nvram_write_req_ptr->para = 1 + (l4c_current_mod_id - MOD_L4C);
    
    l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, nvram_write_req_ptr, (kal_uint8 *)&band, 1);
}
#endif /* __SYSSEL_SUPPORT__ */


#if defined(__CSG_SUPPORT__)
/*****************************************************************************
* FUNCTION
*  	l4c_free_csg_list()
* DESCRIPTION
* PARAMETERS
* RETURNS
*	void
*****************************************************************************/
void l4c_free_csg_list(rac_csg_list_struct *csg_list)
{
    kal_uint32 i;

    for ( i = 0; i < csg_list->plmn_count; i++)
    {
        if (csg_list->available_plmn_csg[i].csg_info_list != NULL)
        {
            free_ctrl_buffer(csg_list->available_plmn_csg[i].csg_info_list);
        }
    }
}
#endif

/*****************************************************************************
* FUNCTION
*  	l4c_gemini_get_actual_sim_id()
* DESCRIPTION
* This function is used to transfer the input simId to the corresponding simId
* accroding to the mapping table
* PARAMETERS
*   simId   [IN]
*
* RETURNS
*	void*
*****************************************************************************/
sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId)
{
#ifdef __GEMINI__

#if defined(__GEMINI_3G_SWITCH__)
    L4C_COMM_PTR->c3gs_ref_flag = KAL_TRUE;

    return l4c_cntxt_g[simId].cur_3g_switch_map;
#else
    return simId;
#endif /*defined(__GEMINI_3G_SWITCH__) */

#else
    return SIM1;
#endif /*__GEMINI__*/
}


/*****************************************************************************
* FUNCTION
*  	l4c_gemini_get_switched_sim_id()
* DESCRIPTION
* This function is the reversion of l4c_gemini_get_actual_sim_id()
* PARAMETERS
*   simId   [IN] the real SIM slot
*
* RETURNS
*	sim_interface_enum represents the mapping protocol stack
*****************************************************************************/
sim_interface_enum l4c_gemini_get_switched_sim_id(sim_interface_enum simId)
{
#ifdef __GEMINI__

#if defined(__GEMINI_3G_SWITCH__)
    kal_uint8 i;

    L4C_COMM_PTR->c3gs_ref_flag = KAL_TRUE;

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
        if (l4c_cntxt_g[i].cur_3g_switch_map == simId)
            break;
    }
    return (sim_interface_enum)i;
#else
    return simId;
#endif /*defined(__GEMINI_3G_SWITCH__)*/

#else
    return SIM1;
#endif /*__GEMINI__*/
}


/*****************************************************************************
* FUNCTION
*  	l4c_construct_nvram_write_local_para()
* DESCRIPTION
* PARAMETERS
*   access_id   [IN]
*   file_idx       [IN]
*   para          [IN]
* RETURNS
*	void*
*****************************************************************************/
void* l4c_construct_nvram_write_local_para(kal_uint8 access_id, nvram_lid_enum file_idx, kal_uint16 para)
{
    nvram_write_req_struct *param_ptr;

    param_ptr = (nvram_write_req_struct*) construct_local_para((kal_uint16) sizeof(nvram_write_req_struct), TD_RESET);

    param_ptr->file_idx = file_idx;
    param_ptr->para = para;
    param_ptr->access_id = access_id;
    return (void*)param_ptr;
}


/*****************************************************************************
* FUNCTION
*  	l4c_construct_nvram_write_local_para()
* DESCRIPTION
* PARAMETERS
*   access_id   [IN]
*   file_idx       [IN]
*   para          [IN]
* RETURNS
*	void*
*****************************************************************************/
void* l4c_construct_nvram_read_local_para(kal_uint8 access_id, nvram_lid_enum file_idx, kal_uint16 para, kal_uint16 rec_amount)
{
    nvram_read_req_struct *param_ptr;

    param_ptr = (nvram_read_req_struct*) construct_local_para((kal_uint16) sizeof(nvram_read_req_struct), TD_RESET);

    param_ptr->access_id = access_id;
    param_ptr->file_idx = file_idx;
    param_ptr->para = para;
    param_ptr->rec_amount= rec_amount;
    return (void*)param_ptr;
}
/*****************************************************************************
* FUNCTION
*  l4c_clear_retry_call()
* DESCRIPTION : Used to clear retry call 
* PARAMETERS
*   access_id   [IN]
*   file_idx       [IN]
*   para          [IN]
* RETURNS
* void
*****************************************************************************/
void l4c_clear_retry_call(void)
{
    kal_uint8 src_id;
    l4c_result_struct result;
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim


    for (src_id = LMMI_SRC; src_id < RMMI_ALL; src_id++)
    {
        switch (l4c_ptr->cc_current_action[src_id])
        {
            case ATD_EXE:
            case ATD_APP:
            case ATD_ECC:
        #ifdef __SAT__
            case SAT_ATD_EXE:
        #endif 
                //l4c_ptr->cc_current_action[SAT_SRC], some action still exist, shall reject previous cmd.
            {
                result.flag = L4C_ERROR;
                result.cause = CM_L4C_GEN_CAUSE;
    
                /* L4C send proper cpi or update_call_state indication for the aborted MO call */
                if(l4c_ptr->cc_retry_ongoing_flag == KAL_FALSE && l4c_ptr->retry_cc == KAL_TRUE )
                {
                    l4c_update_retry_call_state_ind(l4c_ptr->mo_call_id,l4c_ptr->retry_src_id);
                }
    
                l4c_clear_cc_queued_msg(src_id);
            #ifdef __SAT__
                if (l4c_ptr->cc_current_action[src_id] == SAT_ATD_EXE)
                {
                #ifdef __RSAT__
                    //mtk00924: sat setup call should return terminal response by modem
                    sat_setup_call_res_struct *param_ptr = (sat_setup_call_res_struct*)
                        construct_local_para(
                            (kal_uint16) sizeof(sat_setup_call_res_struct),
                            TD_RESET);
    
                    kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */
                    param_ptr->res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;
                    param_ptr->cause = L4C_NO_CAUSE;    /* additional info */
    
                    l4c_sat_setup_call_res(param_ptr);
                #endif /* __RSAT__ */ 
                #if defined(__MMI_FMI__)
                    l4c_sat_call_setup_lrsp(result, 0x21,
                                            //SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD
                                            0x00);      //SAT_NO_SPECIFIC_CAUSE
                #endif /* defined(__MMI_FMI__) */ 
                }
                else
            #endif /* __SAT__ */ 
                {
                    kal_bool is_mo_call_exist;
                    kal_uint8 mo_call_id;
    
                    is_mo_call_exist = l4ccsm_cc_get_outgoing_call(&mo_call_id);
    
                    if (is_mo_call_exist == KAL_TRUE)
                    {
                        l4ccsm_cc_call_disc_req_struct *param_ptr;
    
                        param_ptr = (l4ccsm_cc_call_disc_req_struct*)
                            construct_local_para((kal_uint16) sizeof(l4ccsm_cc_call_disc_req_struct), TD_RESET);
    
                        param_ptr->src_id = src_id;
                        param_ptr->call_id = mo_call_id;
    
                        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_DISC_REQ, param_ptr, NULL, 0);
                    }
                #ifdef __UCM_SUPPORT__ //MAUI_02063785
                    l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                #else
                    if (src_id == LMMI_SRC)
                    {
                        l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                    }
                    else
                    {
                        temp_src = rmmi_ptr->current_src;                        
                        rmmi_ptr->current_src = src_id;
                        l4c_cc_exe_call_setup_rrsp(result, 0);
                        l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                        rmmi_ptr->current_src = temp_src;							
                    }
                #endif
                }
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                //reset action
            }
    
            break;
        }//end switch
    }

}
/*****************************************************************************
* FUNCTION
*  l4c_cc_save_ceer_cause()
* DESCRIPTION : save ceer_report 
* PARAMETERS
*   access_id   [IN]
*   file_idx       [IN]
*   para          [IN]
* RETURNS
* void
*****************************************************************************/
void l4c_cc_save_ceer_cause(l4c_result_enum response,kal_uint8 cause_present,kal_uint16 cause)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;

    if (response == L4C_ERROR)
    {
        if (cause_present == KAL_TRUE)
        {
            l4c_ptr->ceer_report = cause;
        }
        else
        {
            l4c_ptr->ceer_report = 0;
        }
    }
}

/*****************************************************************************
* FUNCTION
*  	l4c_target_reset()
* DESCRIPTION
* PARAMETERS
*   access_id   [IN]
*   file_idx       [IN]
*   para          [IN]
* RETURNS
*	void*
*****************************************************************************/
void l4c_target_reset(kal_uint8 sec)
{
    rtc_alarm_info_struct rtc_time;
    DCL_HANDLE dcl_pw_handle;
    DCL_HANDLE dcl_wdt_handle;

    /* start RTC timer */
    l4cuem_rtc_get_time_req(RTC_TIME_CLOCK_IND, 0, &rtc_time);

    rtc_time.alarm_format = DEVICE_AL_EN_ChkYMDHMS;
    rtc_time.alarm_index = RTC_ALARM1_IND;
    rtc_time.type = RTC_ALARM_SOUND;
    rtc_time.text[0] = '\0';
    rtc_time.recurr = RTC_ALARM_DAY1;

    rtc_time.data_time.rtc_sec += sec;
    l4cuem_rtc_set_time_req(RTC_ALARM_IND, rtc_time, RTC_SETTING_TYPE_DATETIME);

    /* Turn off the power */
    dcl_pw_handle = DclPW_Open(DCL_PW, FLAGS_NONE);
    DclPW_Control(dcl_pw_handle, PW_CMD_POWEROFF, NULL);
    DclPW_Close(dcl_pw_handle);

    /* Reset */
    dcl_wdt_handle = DclWDT_Open(DCL_WDT, 0);
    DclWDT_Control(dcl_wdt_handle, WDT_CMD_DRV_RESET, 0);
    DclWDT_Close(dcl_wdt_handle);
}


/*****************************************************************************
* FUNCTION
*  	l4c_power_on_stage1_finished_ind()
* DESCRIPTION
*   The stage 1 power-on procedure includes: 
*   1. NVRAM startup
*   2. UEM and RAC startup
*   This function is to indicate LMMI/RMMI for turning on RF and SIM
*
* PARAMETERS
*   void
* RETURNS
*	void*
*****************************************************************************/
void l4c_power_on_stage1_finished_ind()
{
    kal_uint8 build_label = GSM_ONLY;
    kal_uint8 battery_status, battery_vol;
    rtc_alarm_info_struct rtc_time;
    kal_uint8 dual_sim_mode_setting = 0;
    kal_uint8 dual_sim_uart_setting = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;

#if defined (__CS_SERVICE__) && defined (__PS_SERVICE__)
    build_label = GSM_AND_GPRS;
#elif defined (__PS_SERVICE__)
    build_label = GPRS_ONLY;
#else 
    build_label = GSM_ONLY;
#endif 

    l4cuem_get_battery_status_req(&battery_status, &battery_vol);
    l4cuem_rtc_get_hw_time_req(RTC_TIME_CLOCK_IND, 0, &rtc_time);
        
#ifdef __GEMINI__
    dual_sim_mode_setting = l4c_comm_ptr->dual_sim_mode_setting;
    dual_sim_uart_setting = RMMI_COMM_PTR->sim_uart_setting;
#endif /* __GEMINI__ */ 
    l4c_eq_power_on_lind(l4c_comm_ptr->poweron_mode,
                         battery_status, 
                         build_label, 
                         (rtc_format_struct*) & rtc_time.data_time, 
                         l4c_comm_ptr->flightmode_state, 
                         dual_sim_mode_setting, 
                         dual_sim_uart_setting);

    rmmi_ptr->current_src = RMMI_ALL;

    if (l4c_comm_ptr->poweron_mode != POWER_ON_ALARM)
    {
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_at_ready_rind();
    }
    else
    {
        kal_trace(TRACE_INFO, INFO_POWER_ON_ALARM);
    }

#if defined(__GEMINI__) && defined(PLUTO_MMI)
    if (l4c_comm_ptr->poweron_mode == POWER_ON_KEYPAD || 
        l4c_comm_ptr->poweron_mode == POWER_ON_EXCEPTION)
    {
        l4c_root_power_on_ind();
    }
#endif

}


/*****************************************************************************
* FUNCTION
*  	l4c_is_call_alert()
* DESCRIPTION
* PARAMETERS
*
* RETURNS
*	KAL_TRUE or KAL_FALSE
*****************************************************************************/
kal_bool l4c_is_call_alert(void)
{
    return L4C_PTR->call_alert;
}

/*****************************************************************************
* FUNCTION
*  	l4c_get_waiting_call_id()
* DESCRIPTION
* PARAMETERS
*
* RETURNS
*	kal_uint8
*****************************************************************************/
kal_uint8 l4c_get_waiting_call_id(void)
{
    return L4C_PTR->waiting_call_id;
}

/*****************************************************************************
* FUNCTION
*  l4c_wait_normal_service()
* DESCRIPTION
* PARAMETERS
*
* RETURNS
* kal_uint8
*****************************************************************************/
kal_bool l4c_wait_normal_service(void)
{
    kal_bool result = KAL_FALSE;
    
    if (((L4C_PTR->retry_cc == KAL_TRUE) || (L4C_PTR->retry_ss == KAL_TRUE))
        && (L4C_PTR->cc_retry_ongoing_flag == KAL_FALSE))
    {
        switch (L4C_PTR->cc_current_action[L4C_PTR->retry_src_id])
        {
            case ABM_ACT_ECC:
            case ATD_ECC:
                result = KAL_FALSE;
                break;
            case SAT_ATD_EXE:
            case ATD_EXE: 
            case ABM_ACT:
                result = KAL_TRUE;
                break;


                
            default:
                result = KAL_FALSE;
                break; 
        }
    }
    else
    { 
            result = KAL_FALSE;
    }
        
    return result;

}
/*****************************************************************************
* FUNCTION
*  l4c_wait_limited_service()
* DESCRIPTION
* PARAMETERS
*
* RETURNS
* kal_uint8
*****************************************************************************/
kal_bool l4c_wait_limited_service(void)
{

    if ((L4C_PTR->retry_cc == KAL_TRUE)
        && (L4C_PTR->cc_retry_ongoing_flag == KAL_FALSE)
        &&(L4C_PTR->cc_current_action[L4C_PTR->retry_src_id] == ATD_ECC
         || L4C_PTR->cc_current_action[L4C_PTR->retry_src_id] == ATD_ECC_CHANGE_RAT
         || L4C_PTR->cc_current_action[L4C_PTR->retry_src_id] == ABM_ACT_ECC)//MAUI_02554068
        )        
        {
            return KAL_TRUE;
        }
        else
        {
            return KAL_FALSE;
        }

}
#ifdef __ECALL_SUPPORT__
/*****************************************************************************
* FUNCTION
*  l4c_get_ecall_number()
* DESCRIPTION
* PARAMETERS
*
* RETURNS
* kal_uint8
*****************************************************************************/
kal_bool l4c_get_ecall_number(l4_addr_bcd_struct *called_number,kal_uint8 ecc_info)
{

    l4_addr_bcd_struct test_num, reconfig_num;
    sim_ecall_mode_enum ecall_mode = SIM_ECALL_NONE;
    phb_errno_enum result = PHB_ERRNO_FAIL; 
    
    if ((ecc_info == INFO_ECALL_TEST)
            ||(ecc_info == INFO_ECALL_RECONFIGURATION))
        {
            
            ecall_mode = sim_ecall_mode_query(SIM1 + (l4c_current_mod_id - MOD_L4C));

            if (ecall_mode == SIM_ECALL_ONLY)
            {
                result = phb_fdn_get_first_two_number(&test_num, &reconfig_num);
            }
            else if (ecall_mode == SIM_ECALL_AND_NORMAL)
            {
                result = phb_sdn_get_last_two_number(&test_num, &reconfig_num);
            }
            else
            {
                result = PHB_ERRNO_NOT_SUPPORT;
            }

            if (ecc_info == INFO_ECALL_TEST)
            {
                if(L4C_COMM_PTR->l4c_use_tnum == KAL_TRUE)
                {
                    kal_mem_cpy(called_number, &(L4C_COMM_PTR->l4c_tnum), sizeof(l4_addr_bcd_struct));
                    result = PHB_ERRNO_SUCCESS;
                }
                else if (result == PHB_ERRNO_SUCCESS)
                {
                    kal_mem_cpy(called_number, &test_num, sizeof(l4_addr_bcd_struct));
                }
                else
                { 
                    kal_brief_trace(TRACE_WARNING, WARNING_NO_ECALL_NUMBER_AVAILABLE);
                    result = PHB_ERRNO_NOT_SUPPORT;
                }
            }
            else
            {
                if(L4C_COMM_PTR->l4c_use_rnum == KAL_TRUE)
                {
                    kal_mem_cpy(called_number, &(L4C_COMM_PTR->l4c_rnum), sizeof(l4_addr_bcd_struct));
                    result = PHB_ERRNO_SUCCESS;
                }
                else if (result == PHB_ERRNO_SUCCESS)
                {
                    kal_mem_cpy(called_number, &reconfig_num, sizeof(l4_addr_bcd_struct));
                }
                else
                { 
                    kal_brief_trace(TRACE_WARNING, WARNING_NO_ECALL_NUMBER_AVAILABLE);
                    result = PHB_ERRNO_NOT_SUPPORT;
                }
            }

        }
    else
    {
        result = PHB_ERRNO_NOT_SUPPORT;
    }

    if (result == PHB_ERRNO_SUCCESS)
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE; 
    }
        


}
#endif /*__ECALL_SUPPORT__*/


#if defined(__MTK_TARGET__) && defined(DRV_GPIO_FOR_LED_AND_15_SEGMENT)
//extern DCL_STATUS gpio_15_segment_led_control(kal_uint8 word1, kal_uint8 word2);
//extern DCL_STATUS gpio_15_segment_led_init(void);
#include "dcl_15_segment.h"
#endif

void l4c_set_led_7_segment_debug(l4c_data_speed_support_enum data_speed_for_cell_info,
                                 l4c_data_bearer_capablility_enum data_bearer_from_l2)
{
    kal_uint8 gsm_state, gprs_state; //reg_state_enum
    kal_uint8 status=(kal_uint8)L4C_RAC_LIMITED_SERVICE; //l4c_rac_response_enum

    l4crac_get_attach_status(&gsm_state, &gprs_state, &status);

    kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_DEBUG_SET_7_SEGMENT_LED, status, data_speed_for_cell_info, data_bearer_from_l2);

#if defined(__MTK_TARGET__) && defined(DRV_GPIO_FOR_LED_AND_15_SEGMENT)
    switch((l4c_rac_response_enum)status)
    {
        case L4C_RAC_OK:
            // the condictions with correct order is checked form DC to 2G
            if(data_speed_for_cell_info == L4C_NONE_SPECIFIED)
            {
                if(data_bearer_from_l2 == L4C_NONE_ACTIVATE)
                {
                    gpio_15_segment_led_control('2', 0);
                }
                else
                {
                    gpio_15_segment_led_control(NULL, 0);
                }
            }
            else if(data_speed_for_cell_info >= L4C_DC_DPA_SUPPORT ||
               data_bearer_from_l2 >= L4C_DC_DPA_CAPABILITY)
            {
                gpio_15_segment_led_control('d', ((data_bearer_from_l2==L4C_NONE_ACTIVATE)?0:1));
            }
            else if(data_speed_for_cell_info >= L4C_HSDPAP_SUPPORT ||
                    data_bearer_from_l2 >= L4C_HSDPAP_CAPABILITY)
            {
                gpio_15_segment_led_control('H', ((data_bearer_from_l2==L4C_NONE_ACTIVATE)?0:1));
            }            
            else if(data_speed_for_cell_info == L4C_UMTS_SUPPORT &&
                    data_bearer_from_l2 <= L4C_UMTS_CAPABILITY)
            {
                gpio_15_segment_led_control('3', ((data_bearer_from_l2==L4C_NONE_ACTIVATE)?0:1));
            }
            else if(data_speed_for_cell_info >= L4C_UMTS_SUPPORT ||
                    data_bearer_from_l2 > L4C_UMTS_CAPABILITY)
            {
                gpio_15_segment_led_control('h', ((data_bearer_from_l2==L4C_NONE_ACTIVATE)?0:1));
            }
            else if(data_speed_for_cell_info >= L4C_EDGE_SUPPORT ||
                    data_bearer_from_l2 >= L4C_EDGE_CAPABILITY)
            {
                gpio_15_segment_led_control('E', ((data_bearer_from_l2==L4C_NONE_ACTIVATE)?0:1));
            }
            else if(data_speed_for_cell_info == L4C_GPRS_SUPPORT ||
                    data_bearer_from_l2 == L4C_GPRS_CAPABILITY)
            {
                gpio_15_segment_led_control('6', ((data_bearer_from_l2==L4C_NONE_ACTIVATE)?0:1));
            }
            else
            {
                gpio_15_segment_led_control(NULL, 0);
            }
            break;

        case L4C_RAC_LIMITED_SERVICE:
            gpio_15_segment_led_control('L', 0);
            break;

        case L4C_RAC_NO_CELL:
        case L4C_RAC_ERROR:
            gpio_15_segment_led_control('N', 0);
            break;

        case L4C_RAC_INVALID_SIM:
            gpio_15_segment_led_control('I', 0);
            break;

        default:
            gpio_15_segment_led_control(NULL, 0);
            break;
    }
#endif
}


#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
/*****************************************************************************
 * FUNCTION
 *  l4c_fd_need_force_send_SCRI
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_fd_need_force_send_SCRI(void)
{
    kal_bool ret_val = KAL_TRUE;
    l4c_context_struct *l4c_ptr = L4C_PTR;
#if defined(__GEMINI__)
    kal_uint8 sum_of_sim = 0;
    kal_uint8 sim_inserted_status = L4C_COMM_PTR->dual_sim_inserted_status;
#endif

#if defined(__GEMINI__)
    while (sim_inserted_status > 0)
    {
        sum_of_sim += (sim_inserted_status | 0x01);
        sim_inserted_status >>= 1;
    }

    if ((l4c_ptr->is_screen_on == KAL_TRUE) && (sum_of_sim <= 1))
    {
        /* screen on and only inserted one sim or no sim inserted */
        ret_val = KAL_FALSE;
    }
#endif

    if (l4c_ptr->fd_fop_received == KAL_TRUE)
    {
        /* if FOP is received, force_send_SCRI shall be true till success */
        ret_val = KAL_TRUE;
    }
    
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_fd_check_pdp_statistics
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_fd_check_pdp_statistics()
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    kal_uint8 i;
    kal_bool pdp_changed = KAL_FALSE;
    single_pdp_call_history_info_struct query_result[PS_TOT_CONTEXT];

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_FD_CHECK_PDP_STATISTICS_ENTRY);
    l4c_ptr->fd_timer_counter++;
    ratdm_l4c_query_pdp_statistics_table(query_result);

    for (i=0; i<PS_TOT_CONTEXT; i++)
    {
        if ((l4c_ptr->fd_pdp_table[i].rx != query_result[i].rx) || 
            (l4c_ptr->fd_pdp_table[i].tx != query_result[i].tx))
        {
//            kal_prompt_trace(l4c_current_mod_id,"[FD]changed PDP context:%d", i);
            pdp_changed = KAL_TRUE;
            break;
        }
    }
    
    if (pdp_changed)
    {
        /* the pdp statistics is change. reset inactivity timer and keep monitor
        */
        kal_brief_trace(TRACE_INFO, INFO_FD_PDP_STATISTICS_CHANGE, l4c_ptr->fd_timer_counter);
        l4c_ptr->fd_timer_counter = 0;
        l4c_ptr->scri_has_sent = KAL_FALSE;
        l4c_ptr->fd_retry_count = 0;
        l4c_ptr->fd_monitor_tick = custom_get_fd_monitor_slot();
    }
    else if ((l4c_ptr->scri_has_sent == KAL_FALSE) || (l4c_ptr->need_resend == KAL_TRUE))
    {
        /* the pdp statistics is not change. no PS data transferred
           use below parameters to get the current FD timer
           we check fd_timer_counter >= current FD timer because the inactivity timer can 
           change dynamically according to current scenarios, e.g. screen, NW R8 FD...
        */
        kal_uint8 timer_id = 0;
        kal_uint16 inactivity_timer = 0xffff;
    #if defined(__FAST_DORMANCY__)
        kal_bool is_nw_r8_fd_support = RRC_NW_R8_FD_Support();
    #else
        kal_bool is_nw_r8_fd_support = KAL_FALSE;
    #endif
        
        timer_id = custom_get_fd_timer_id(l4c_ptr->is_screen_on, is_nw_r8_fd_support, RRC_CPCSupport());
        inactivity_timer = custom_get_fd_timer(timer_id);

//        kal_prompt_trace(l4c_current_mod_id, "[FD]PDP not changed! counter:%d, inactivity_time[%d]r:%d", l4c_ptr->fd_timer_counter, timer_id, inactivity_timer);

        if (inactivity_timer == 0xffff)
        {
            kal_brief_trace(TRACE_WARNING, WARNING_FD_INVALID_INACTIVITY_TIMER_ID, timer_id);
            return; //ASSERT(0);
        }
        else if ((l4c_ptr->fd_timer_counter * l4c_ptr->fd_monitor_tick) >= inactivity_timer)
        {
            /* we have already collected enough idle slots 
               it's time to launch SCRI
            */
            if (l4c_nw_end_ps_data_session_req(L4C_SRC, l4c_fd_need_force_send_SCRI()) == KAL_TRUE)
            {
                l4c_ptr->scri_has_sent = KAL_TRUE;
            }
        }
    }

    kal_brief_trace(TRACE_INFO, INFO_FD_INACTIVITY_TIMEOUT, 
                    l4c_ptr->fast_dormancy_mode, 
                    l4c_ptr->scri_has_sent, 
                    l4c_ptr->fd_timer_counter, 
                    check_pdp_context_exist_func(), 
                    l4c_ptr->max_data_bearer_capa);
    
    if ((l4c_ptr->fast_dormancy_mode == 1) && 
        (check_pdp_context_exist_func() == KAL_TRUE) && 
        (l4c_ptr->max_data_bearer_capa > L4C_EDGE_CAPABILITY) && 
        (l4c_ptr->max_data_bearer_capa < L4C_LTE_CAPABILITY))
    {
        /* only keep monitor if FD is enable and there is 3G RAB existence */
        kal_mem_cpy(l4c_ptr->fd_pdp_table, query_result, sizeof(query_result));
        l4c_ptr->fd_event = evshed_set_event(l4c_ptr->event_scheduler_ptr, 
                                             (kal_timer_func_ptr) l4c_fd_monitor_timeout_hdlr, 
                                             NULL, 
                                             l4c_ptr->fd_monitor_tick * KAL_TICKS_100_MSEC);

    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_fd_monitor_timeout_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_fd_monitor_timeout_hdlr()
{
    L4C_PTR->fd_event = 0;
    
    /* check the PS data transfer statistics and the count down timer */
    l4c_fd_check_pdp_statistics();
}


/*****************************************************************************
 * FUNCTION
 *  l4c_fd_start_monitor_timer
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_fd_start_monitor_timer(kal_uint8 src_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;

    kal_brief_trace(TRACE_INFO, INFO_FD_START_MONITOR);

    l4c_ptr->fd_timer_counter = 0;
    l4c_ptr->fd_monitor_tick = custom_get_fd_monitor_slot();
    l4c_ptr->scri_has_sent = KAL_FALSE;
    l4c_ptr->fd_retry_count = 0;
    l4c_ptr->fd_fop_received = KAL_FALSE;
    l4c_ptr->need_resend = KAL_FALSE;

    if (l4c_ptr->fd_event != 0)
    {
//        kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, L4C_PTR->event_id[3]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->fd_event));
        l4c_ptr->fd_event = 0;
    }

    l4c_ptr->fd_event = evshed_set_event(l4c_ptr->event_scheduler_ptr,
                                         (kal_timer_func_ptr) l4c_fd_monitor_timeout_hdlr,
                                         NULL,
                                         l4c_ptr->fd_monitor_tick * KAL_TICKS_100_MSEC);
    
    //get current rx/tx volume for timeout comparison
    ratdm_l4c_query_pdp_statistics_table(l4c_ptr->fd_pdp_table);
}

#endif /* defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__) */

