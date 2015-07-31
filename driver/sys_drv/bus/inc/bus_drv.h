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
 *   bus_drv.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is intended for BUS driver.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __BUS_DRV_H__
#define __BUS_DRV_H__

#include "kal_general_types.h"
#include "bus_hw.h"

#define enableVirtualMapping Bus_Virtual_Mapping_Enable
#define disableVirtualMapping Bus_Virtual_Mapping_Disable  
#define enableMcuOutstanding Bus_Enable_MCU_Outstanding  
#define enablePrefetchBuffer Bus_PFB_Enable  
#define disablePrefetchBuffer Bus_PFB_Disable  

// Control Bus Remapping
extern void Bus_Virtual_Mapping_Enable(void);
extern void Bus_Virtual_Mapping_Disable(void);
// Control Prefetch Buffer
extern void Bus_PFB_Enable(void);
extern void Bus_PFB_Disable(void);
// Other Bus Control
extern void Bus_Init(void);
extern void Bus_Enable_MCU_Outstanding(void);


/*******************************************************************************
 * Feature Option
 *******************************************************************************/
// Turned-On MD EMI latency profiling of TL1 SW
// Note: It uses MD ELM and conflicts with SWLA ELM add-on
#if defined(__MTK_INTERNAL__) 
/* under construction !*/
    #if defined(MT6589) && defined(__MD2__) && defined(__UMTS_TDD128_MODE__)
/* under construction !*/
    #endif /* MT6589 MD2  && __UMTS_TDD128_MODE__*/
/* under construction !*/
#endif /* __MTK_INTERNAL__ */

/*******************************************************************************
 * Macro
 *******************************************************************************/

/**************************************/
// Control EMI High priority
#if defined(MT6589)
    #if defined(__MD1__)
        #define BUS_MCU2EMI_ULTRA_SET() \
            do {\
        	    *MD2EMI_ULTRA_HIGH_SET0 = 0x00000001;\
            } while (0)
        #define BUS_MCU2EMI_ULTRA_CLR() \
            do {\
        	    *MD2EMI_ULTRA_HIGH_CLR0 = 0x00000001;\
            } while (0)
    #elif defined(__MD2__)
        #define BUS_MCU2EMI_ULTRA_SET() \
            do {\
        	    *MD2EMI_ULTRA_HIGH_SET0 = 0x00000003;\
            } while (0)
        #define BUS_MCU2EMI_ULTRA_CLR() \
            do {\
        	    *MD2EMI_ULTRA_HIGH_CLR0 = 0x00000003;\
            } while (0)
    #endif
#else
    // do nothing
    #define BUS_MCU2EMI_ULTRA_SET()
    #define BUS_MCU2EMI_ULTRA_CLR()
#endif
/**************************************/


/**************************************/
//#define __DYNAMIC_DRAMC_ULTRA__

// Dynamic DRAMC ULTRA
#if defined(MT6589) && defined(__MD2__) && defined(__DYNAMIC_DRAMC_ULTRA__)
    #define BUS_DYNAMIC_DRAMC_ULTRA_SET() \
        do {\
            extern kal_uint32 BUS_TESTB_DRAMC_ULtra_On;\
            *EMI_TESTB = BUS_TESTB_DRAMC_ULtra_On;\
        } while (0)

    #define BUS_DYNAMIC_DRAMC_ULTRA_CLR() \
        do {\
            extern kal_uint32 BUS_TESTB_DRAMC_ULtra_Off;\
            *EMI_TESTB = BUS_TESTB_DRAMC_ULtra_Off;\
        } while (0)
#else
    // do nothing
    #define BUS_DYNAMIC_DRAMC_ULTRA_SET()
    #define BUS_DYNAMIC_DRAMC_ULTRA_CLR()
#endif
/**************************************/

/*******************************************************************************
 * The Following is ONLY for SPV
 *******************************************************************************/
 
// #define __MD_SPV_UTILITIES__

#if defined(__MD_SPV_UTILITIES__)

/**********************************
 * MT6589 SPV Begin
 **********************************/ 
#if defined(MT6589)

// if EMI DCM is enabled, EMI APB only take affect after there is any EMI transaction
#define EBM_Start() \
    do {\
        *AP_EMIDCM_CON = 0x00000001;\
        *EMI_BMEN = 0x00080031;\
    } while (0)

#define EBM_Pause() \
    do {\
        *EMI_BMEN = 0x00080033;\
    } while (0)

#define EBM_Stop() \
    do {\
        *EMI_BMEN = 0x00080030;\
    } while (0)

//#define EBM_GET_WSCT() (*EMI_WSCT)


// SET EMI BW Limiter
// default  ARBA = 0x4010_5813
//          ARBC = 0x0000_7801 (ARM9)
//          ARBD = 0x030F_D808 (CR4)

#if defined(__MD1__)
    #define EMI_SET_BW_LIMTER(c) \
        do {\
            *AP_EMIDCM_CON = 0x00000001;\
            *EMI_ARBA = 0x40105013;\
            *EMI_ARBD = 0x030f1000 | (c) ;\
        } while (0)
#elif defined(__MD2__)
    #define EMI_SET_BW_LIMTER(c) \
        do {\
            *AP_EMIDCM_CON = 0x00000001;\
            *EMI_ARBA = 0x40105013;\
            *EMI_ARBC = 0x00001800 | (c) ;\
        } while (0)
#endif

#endif /* MT6589 */

/**********************************
 * MT6589 SPV End
 **********************************/ 

#endif /* __MD_SPV_UTILITIES__ */

#endif  /* !__BUS_DRV_H__ */

