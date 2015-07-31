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
 * TCM_API.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file provides functions for other modules to call
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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

#include "kal_general_types.h"

#ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
#include "l4c2tcm_func.h"
#endif /* __GPRS_BEARER_REPORT_NEGOTIATED_QOS__ */

/*****************************************************************************
* FUNCTION
*   tcm_pdp_decode_transfer_delay
* DESCRIPTION
*   This function handles the mapping between transfer delay (ms) and encoded value
*
* PARAMETERS
* 
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool tcm_pdp_decode_qos_transfer_delay(kal_uint16 val, kal_uint16 *delay_ptr)
{
    kal_bool return_value = KAL_FALSE;
#ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
    return_value = l4ctcm_decode_transfer_delay(val, delay_ptr);
    if(*delay_ptr == 0)
    {
        // if network assign reserved transfer delay (0), return KAL_FALSE
        return KAL_FALSE;
    }
#endif // ~ __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
    return return_value;
}

/*****************************************************************************
* FUNCTION
*   tcm_pdp_decode_transfer_delay
* DESCRIPTION
*   This function handles the mapping between transfer delay (ms) and encoded value
*
* PARAMETERS
* 
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool tcm_pdp_decode_qos_bit_rate(kal_uint16 val, kal_uint32 *rate_ptr)
{
    kal_bool return_value = KAL_FALSE;
#ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
    #ifdef __REL6__
    kal_uint32 rate = 0;
    return_value = l4ctcm_decode_bit_rate(val, &rate);
    #else // __REL6__
    kal_uint16 rate = 0;
    return_value = l4ctcm_decode_bit_rate(val, &rate);
    #endif // ~ __REL6__
    *rate_ptr = (kal_uint32)rate;

    if(*rate_ptr == 0)
    {
        // if network assign reserved bit rate (0), return KAL_FALSE
        return KAL_FALSE;
    }
#endif // ~ __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
    return return_value;
}

