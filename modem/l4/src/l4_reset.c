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
 * l4_reset.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for �K.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

//#include "kal_release.h"

//-------------------------------- suggest Add ----------------------------     
//#include "kal_non_specific_general_types.h"                             

//------------------------------ suggest Add ------------------------------
#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"

/* include module reset function header file */
#ifdef __MOD_CSM__
extern kal_bool csmcc_reset(void);
extern kal_bool csmss_reset(void);
#endif
#ifdef __MOD_UEM__
extern kal_bool uem_reset(void);
#endif
#ifdef __MOD_PHB__
extern kal_bool phb_reset(void);
extern kal_bool phb_reset_for_init(void);
#endif
#ifdef __MOD_SMU__
extern kal_bool smu_reset(void);
#endif
#ifdef __MOD_SMSAL__
extern kal_bool smsal_reset(void);
#endif
#ifdef __MOD_RAC__
extern kal_bool rac_reset(void);
#endif

#ifndef __MTK_TARGET__ 
#ifdef __MOD_TCM__
extern kal_bool tcm_reset(void);
#endif
#endif

#ifdef __MBIM_SUPPORT__
extern kal_bool mbci_reset(void);
#endif

extern kal_bool l4c_reset(void);

#undef _FILE_CODE_
#define _FILE_CODE_  _L4_RESET_C_


/*******************************************************************
 FUNCTION          :
 INPUT PARAMS      :
 OUTPUT PARAMS     :
 RETURN VALUE      :
 GLOBALS MODIFIED  :
 FUNCTIONS CALLED  :
 DESCRIPTION       :
 REVIEW STATUS     : Reviewed
 ******************************************************************/
#ifndef __MTK_TARGET__
kal_bool l4_reset(void)
{
    /* call module reset function */
#ifdef __MOD_CSM__
   if( csmcc_reset() != KAL_TRUE)
      return KAL_FALSE;
   if( csmss_reset() != KAL_TRUE)
      return KAL_FALSE;
#endif
#ifdef __MOD_UEM__
    if( uem_reset() != KAL_TRUE)
      return KAL_FALSE;
#endif
#ifdef __MOD_PHB__
    if( phb_reset_for_init() != KAL_TRUE)
      return KAL_FALSE;
#endif
#ifdef __MOD_SMU__
    if( smu_reset() != KAL_TRUE)
      return KAL_FALSE;
#endif
#ifdef __MOD_RAC__
    if( rac_reset() != KAL_TRUE)
      return KAL_FALSE;
#endif
#ifdef __MOD_SMSAL__
    if( smsal_reset() != KAL_TRUE)
      return KAL_FALSE;
#endif

#ifndef __MTK_TARGET__ 
#ifdef __MOD_TCM__
    if( tcm_reset() != KAL_TRUE)
      return KAL_FALSE;
#endif
#endif

#ifdef __MBIM_SUPPORT__
    if(mbci_reset() != KAL_TRUE)
      return KAL_FALSE;
#endif

    if( l4c_reset() != KAL_TRUE)
      return KAL_FALSE;
      
    return KAL_TRUE;


}
#endif

