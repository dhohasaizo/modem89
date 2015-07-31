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
 *   bus_drv.c
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "bus_drv.h"
#include "config_hw.h"
#include "pdn_hw_series.h"
#include "cp15.h"
#include "dcm_sw.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "sync_data.h"

#include "bus_hw.h"


/*************************************************************************
 * Global Variable
 *************************************************************************/

#if defined(MT6589) && defined(__MD2__) && defined(__DYNAMIC_DRAMC_ULTRA__)

#if defined(__MTK_TARGET__)
__attribute__ ((zero_init, section ("INTSRAM_ZI"))) 
#endif
kal_uint32 BUS_TESTB_DRAMC_ULtra_On;

#if defined(__MTK_TARGET__)
__attribute__ ((zero_init, section ("INTSRAM_ZI"))) 
#endif
kal_uint32 BUS_TESTB_DRAMC_ULtra_Off;

#endif /* MT6589 && __MD2__ && __DYNAMIC_DRAMC_ULTRA__ */

/*************************************************************************
* FUNCTION
*  enableVirtualMapping
*
* DESCRIPTION
*  Enable cacheable virtual address mapping: bank F remap to bank 0.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
*************************************************************************/
void Bus_Virtual_Mapping_Enable(void)
{
    
#if defined(MT6280) || (defined(MT6589) && defined(__MD1__))
    *MD_MCU_CON0 &= ~0xC0000000;
#endif

    return;
}

/*************************************************************************
* FUNCTION
*  disableVirtualMapping
*
* DESCRIPTION
*  Disable cacheable virtual address mapping: bank F no remap.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
*************************************************************************/
void Bus_Virtual_Mapping_Disable(void)
{
    
#if defined(MT6280) || (defined(MT6589) && defined(__MD1__))
    *MD_MCU_CON0 |= 0x80000000;
    *MD_MCU_CON0 &= ~0x40000000;
#endif

    return;
}

/*************************************************************************
* FUNCTION
*  enableMcuOutstanding
*
* DESCRIPTION
*  Enable MCU to EMI AXI bus outstanding.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
*************************************************************************/
void Bus_Enable_MCU_Outstanding(void)
{
    
#if defined(MT6280)
    *MD_BUS_CON0 &= ~0x00800000;
#elif defined(MT6589) && defined(__MD1__)
    *MD_MCU2EMI_CON0 &= ~0x00001000;
#endif

    return;
}

/*************************************************************************
* FUNCTION
*  enablePrefetchBuffer
*
* DESCRIPTION
*  Enable instruction prefetch buffer.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
*************************************************************************/

// NOTE: 
//      For MT6589, caller of Bus_PFB_Enable() is different for MD1 & MD2;
//      therefore NO compile option for MD1 / MD2 is necessary here

#if defined(__MTK_TARGET__)

// MT6589 MD2 TCM is too small
#if defined(MT6589) && defined(__MD2__)
void Bus_PFB_Enable(void)
#else
__attribute__ ((section("INTSRAM_ROCODE"))) void Bus_PFB_Enable(void)
#endif

#else
void Bus_PFB_Enable(void)
#endif
{

#if defined(MT6589) && defined(__MD1__) && defined(NOPFB)
    // do nothing, workaroud of WDT timeout
        
#elif defined(MT6280) || defined(MT6589)
    if( cp15_is_icache_enabled() )
    {
    #if defined(MT6280)
        *((volatile unsigned int *)DRVPDN_MD_PWR_GLOBAL_CLR0) = MD_PWR_GLOBAL_CON0_PF_BUFF;
        *MD_BUS_CON0 |= 0x00000001;
    #elif defined(MT6589)
        *((volatile unsigned int *)DRVPDN_MD_PWR_GLOBAL_CLR0) = MD_PWR_GLOBAL_CON0_PF_BUFF;
        *MD_MCU2EMI_CON0 |= 0x00000001;
    #endif
    }
    else
    {
        ASSERT(0);
    }
#endif /* MT6280 || MT6589 */

    return;
}

/*************************************************************************
* FUNCTION
*  disablePrefetchBuffer
*
* DESCRIPTION
*  Disable instruction prefetch buffer.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
*************************************************************************/
#if defined(__MTK_TARGET__)

// MT6589 MD2 TCM is too small
#if defined(MT6589) && defined(__MD2__)
void Bus_PFB_Disable(void)
#else
__attribute__ ((section("INTSRAM_ROCODE"))) void Bus_PFB_Disable(void)
#endif

#else
void Bus_PFB_Disable(void)
#endif
{

#if defined(MT6589) && defined(__MD1__) && defined(NOPFB)
    // do nothing, workaroud of WDT timeout
    
#elif defined(MT6280) || defined(MT6589)

    #if defined(DCM_ENABLE)
        DCM_MCUBUS_DCM_OFF(1);
    #endif

    #if defined(MT6280)
        *MD_BUS_CON0 &= ~0x00000001;
        while( !(*MD_BUS_STATUS0 & 0x00000001) )  ;
    #elif defined(MT6589)
        *MD_MCU2EMI_CON0 &= ~0x00000001;
        while( !(*MD_MCU2EMI_STATUS0 & 0x00000001) )  ;
    #endif
    
    Inst_Sync_Barrier();

    #if defined(DCM_ENABLE)
        DCM_MCUBUS_DCM_OFF(0);
    #endif

#endif /* MT6280 || MT6589 */

    return;
}


/*************************************************************************
* FUNCTION
*  Bus_Init
*
* DESCRIPTION
*  Initialize MD Bus (MDCONFIG)
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
*************************************************************************/
void Bus_Init(void)
{
    
#if defined(MT6589)

    // PFB on

    #if defined(__MD1__)
        
    #elif defined(__MD2__)
        // 0x80000108 [2] (ahb2axi_buffer_en)
        *MD_MCU_CON2 |= 0x00000004;
        
        #if defined(__DYNAMIC_DRAMC_ULTRA__)
        // dynamic DRAMC ultra
        BUS_TESTB_DRAMC_ULtra_Off = *EMI_TESTB & 0xFFFFEFFF;
        BUS_TESTB_DRAMC_ULtra_On = BUS_TESTB_DRAMC_ULtra_Off | 0x00010000;
        #endif /* __DYNAMIC_DRAMC_ULTRA__ */
    #endif /* __MD1__ */
    
#endif

    return;
}

