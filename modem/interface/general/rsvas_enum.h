/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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

/****************************************************************************
 * PARTS OF THIS FILE ARE AUTOGENERATED
 * DO NOT EDIT EXCEPT BETWEEN LINES MARKED !BEGIN MANUAL CODE and !END MANUAL CODE
 *               Assignment :
 *               CONFIDENTIAL
 *               Copyright (c) 2000-2005, UbiNetics Ltd. All rights reserved.
 *               Cambridge Technology Centre
 *               Melbourn Royston
 *               Herts SG8 6DP UK
 *               Tel: +44 1763 262222
 *
 ****************************************************************************
 * !BEGIN MANUAL CODE! (HEADERS)
 *
 * COMPONENT:    (Insert Component Name)
 * MODULE:       $RCSfile: rsvas_enum.h,v $
 * VERSION:      $Revision: 1.0 $
 * DATED:        $Date: 2009/06/12 14:22:29 $
 * AUTHOR:
 * DESCRIPTION:  Check Header for full description
 *
 ****************************************************************************/
/* !END MANUAL CODE! (HEADERS) */
/*****************************************************************************
 * $Log:$
 *
 * 11 06 2011 justin.li
 * removed!
 * .
 *
 * 10 06 2011 justin.li
 * removed!
 * .
 *
 * 10 05 2011 justin.li
 * removed!
 * .
 *
 * 06 24 2011 dennis.weng
 * removed!
 * .
 *
 * 05 31 2011 dennis.weng
 * removed!
 * .
 *
 * 03 16 2011 dennis.weng
 * removed!
 * .
 *
 * 02 22 2011 dennis.weng
 * removed!
 * .
 *
 * 02 14 2011 dennis.weng
 * removed!
 * .
 *
 * 01 26 2011 dennis.weng
 * removed!
 * .
 *
 * 12 14 2010 dennis.weng
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 ****************************************************************************/

#if !defined(_RSVAS_ENUM_H)
#define _RSVAS_ENUM_H

#define RSVAS_GET_BYTE1_FROM_ENUM(x) (((x)>>24) & 0x000000FF) 
#define RSVAS_GET_BYTE2_FROM_ENUM(x) (((x)>>16) & 0x000000FF) 
#define RSVAS_GET_BYTE3_FROM_ENUM(x) (((x)>> 8) & 0x000000FF) 
#define RSVAS_GET_BYTE4_FROM_ENUM(x) ((x) & 0x000000FF) 

#define RSVAS_INVALID_SIM_INDEX 0x000000FF
#define RSVAS_INVALID_RAT_INDEX 0x000000FF

/* Dennis Weng 2010/02/26: [SIM_ADD_HERE] if support tri-SIM in the future, just add as following code. */
/* Dennis Weng 2010/02/26: [RAT_ADD_HERE] if support another RAT in the future, just add as following code. */
/* Dennis Weng 2010/03/05: for effective, rsvas_id_enum is designed as a bit structure
        1st byte is unique in this enum, start from 0,
        2nd byte is SIM index, start from 0, otherwise fill 0xFF.
        3rd byte is RAT index, start from 0, otherwise fill 0xFF.
        4th byte is FORCE PREEMPT index, start from 0, otherwise fill 0xFF.
            FORCE PREEMP index is the index of modules which may send RESOURCE_RES_OCCUPY_REQ with OCCUPY_FORCE_PREEMPT. */
#define RSVAS_GET_SIM_INDEX_FROM_ENUM(x) RSVAS_GET_BYTE2_FROM_ENUM(x)
#define RSVAS_GET_RAT_INDEX_FROM_ENUM(x) RSVAS_GET_BYTE3_FROM_ENUM(x)
#define RSVAS_GET_FORCE_PREEMPT_INDEX_FROM_ENUM(x) RSVAS_GET_BYTE4_FROM_ENUM(x)

/* Dennis Weng 2010/10/15: mapping SIM index and RAT index to rsvas_id_enum 
   only for AS
   PS. cannot not input RSVAS_INVALID_SIM_INDEX or RSVAS_INVALID_RAT_INDEX */
#define RSVAS_GET_RSVAS_ID_ENUM_FROM_INDEX(sim_index, rat_index) ((rsvas_id_enum)(((((((((sim_index)*4)+(rat_index+1)) << 8)+sim_index) << 8) + rat_index) << 8) + 0xFF))

/* Dennis Weng 2010/10/15: shift rsvas_id_enum by SIM index */
#define RSVAS_SHIFT_RSVAS_ID_ENUM(x, sim_index) ((rsvas_id_enum)((x)+(((((sim_index)*4) << 8)+(sim_index)) << 16)))
typedef enum {
    RSVAS_ID_NONE     = 0x00FFFFFF
        
    ,RSVAS_ID_SIM1_GAS = 0x010000FF
    ,RSVAS_ID_SIM1_UAS = 0x020001FF
    ,RSVAS_ID_SIM1_NAS = 0x0300FF01
    ,RSVAS_ID_SIM1_L4C = 0x0400FF02

    ,RSVAS_ID_SIM2_GAS = 0x050100FF
    ,RSVAS_ID_SIM2_UAS = 0x060101FF
    ,RSVAS_ID_SIM2_NAS = 0x0701FF01
    ,RSVAS_ID_SIM2_L4C = 0x0801FF02

    ,RSVAS_ID_SIM3_GAS = 0x090200FF
    ,RSVAS_ID_SIM3_UAS = 0x0A0201FF
    ,RSVAS_ID_SIM3_NAS = 0x0B02FF01
    ,RSVAS_ID_SIM3_L4C = 0x0C02FF02

    ,RSVAS_ID_SIM4_GAS = 0x0D0300FF
    ,RSVAS_ID_SIM4_UAS = 0x0E0301FF
    ,RSVAS_ID_SIM4_NAS = 0x0F03FF01
    ,RSVAS_ID_SIM4_L4C = 0x1003FF02
} rsvas_id_enum;


/* Dennis Weng 2011/02/21: add for is_rsvas_service_this_sim_occupy */
typedef enum {
    RSVAS_SIM1  = 0
    ,RSVAS_SIM2 = 1
    ,RSVAS_SIM3 = 2
    ,RSVAS_SIM4 = 3
} rsvas_sim_enum;


/* Dennis Weng 2010/03/05: for effective, rsvas_service_type_enum is designed as a bit structure
        1st byte is always 0x00, unused,
        2nd byte is unique in this enum, start from 0,
        3rd byte is DOMAIN index, start from 0,
        4th byte is SERVICE index, start from 0, if CS_ALL or PS_ALL or CS_PS_ALL, fill 0xAA, otherwise fill 0xFF. */
#define RSVAS_GET_DOMAIN_INDEX_FROM_ENUM(x) RSVAS_GET_BYTE3_FROM_ENUM(x)
#define RSVAS_GET_SERVICE_INDEX_FROM_ENUM(x) RSVAS_GET_BYTE4_FROM_ENUM(x)
#define RSVAS_IS_SERVICE_ALL_IN_ENUM(x) (RSVAS_GET_SERVICE_INDEX_FROM_ENUM(x) == 0xAA)
typedef enum
{
    RSVAS_SERVICE_TYPE_NONE           = 0x0000FFFF
    ,RSVAS_SERVICE_TYPE_UNSPECIFIED   = 0x0001FFFF
#if defined(__MONITOR_PEER_PAGING_IN_CELL_PCH__)
    ,RSVAS_SERVICE_TYPE_KEEP          = 0x0002FFFF
#endif /* __MONITOR_PEER_PAGING_IN_CELL_PCH__ */

    ,RSVAS_SERVICE_TYPE_CS            = 0x00000000
    ,RSVAS_SERVICE_TYPE_PS            = 0x00000101
    ,RSVAS_SERVICE_TYPE_AS            = 0x00000202
    
    ,RSVAS_SERVICE_TYPE_CS_ALL        = 0x000001AA
    ,RSVAS_SERVICE_TYPE_PS_ALL        = 0x000002AA
    ,RSVAS_SERVICE_TYPE_AS_ALL        = 0x000004AA

    ,RSVAS_SERVICE_TYPE_CS_PS_ALL     = (RSVAS_SERVICE_TYPE_CS_ALL|RSVAS_SERVICE_TYPE_PS_ALL)
    ,RSVAS_SERVICE_TYPE_CS_PS_AS_ALL  = (RSVAS_SERVICE_TYPE_CS_ALL|RSVAS_SERVICE_TYPE_PS_ALL|RSVAS_SERVICE_TYPE_AS_ALL)

} rsvas_service_type_enum;

#define RSVAS_DOMAIN_ALL_NUM 3

/* Dennis Weng 2010/12/24: mapping domain_index to rsvas_service_type_enum
   1 => RSVAS_SERVICE_TYPE_CS_ALL
   2 => RSVAS_SERVICE_TYPE_PS_ALL
   4 => RSVAS_SERVICE_TYPE_AS_ALL
*/
#define RSVAS_GET_RSVAS_SERVICE_TYPE_ALL_FROM_DOMAIN_INDEX(domain_bit_mask) ((rsvas_service_type_enum)(0x000000AA|((domain_bit_mask)<<8)))


typedef enum
{
    RSVAS_REQUEST_NORMAL                = 0
#if defined(__GEMINI_PREEMPT_PEER_SERVICE__)
    //,RSVAS_REQUEST_UPDATE_ONLY          = 1
    ,RSVAS_REQUEST_OCCUPY_FORCE_PREEMPT = 2
#endif /* __GEMINI_PREEMPT_PEER_SERVICE__ */
#if defined(__MONITOR_PEER_PAGING_IN_CELL_PCH__)
    ,RSVAS_REQUEST_SEMAPHORE_ONLY       = 3
    ,RSVAS_REQUEST_SERVICE_ONLY         = 4
#endif /* __MONITOR_PEER_PAGING_IN_CELL_PCH__ */
} rsvas_request_type_enum;

typedef enum {
    RSVAS_SIM_CONNECTED         = 0,
#if defined(__MONITOR_PEER_PAGING_IN_CELL_PCH__)
    RSVAS_SIM_IDLE_WITH_SERVICE = 1,
#endif /* __MONITOR_PEER_PAGING_IN_CELL_PCH__ */
    RSVAS_SIM_IDLE              = 2, 
#if defined(__GEMINI_MONITOR_PAGE_DURING_TRANSFER__)    
    RSVAS_SIM_VIRTUAL           = 3, 
#endif /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
    RSVAS_SIM_SUSPENDED         = 4,
    RSVAS_SIM_STATUS_NUM        = 5
} rsvas_sim_status;

typedef enum {
    RSVAS_SIM_INVALID_TRANSITION       = 0,

    RSVAS_SIM_STEADY_CONNECTED         = 1,
#if defined(__GEMINI_PREEMPT_PEER_SERVICE__)
    RSVAS_SIM_CONNECTED2IDLE           = 2,
#endif /* __GEMINI_PREEMPT_PEER_SERVICE__ */

#if defined(__MONITOR_PEER_PAGING_IN_CELL_PCH__)
    RSVAS_SIM_STEADY_IDLE_WITH_SERVICE = 3,
#endif /* __MONITOR_PEER_PAGING_IN_CELL_PCH__ */

    RSVAS_SIM_STEADY_IDLE              = 4,
    RSVAS_SIM_IDLE2CONNECTED           = 5,
#if defined(__GEMINI_MONITOR_PAGE_DURING_TRANSFER__)    
    RSVAS_SIM_IDLE2VIRTUAL             = 6,
#endif /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
    RSVAS_SIM_IDLE2SUSPENDED           = 7,

#if defined(__GEMINI_MONITOR_PAGE_DURING_TRANSFER__)        
    RSVAS_SIM_STEADY_VIRTUAL           = 8,
    RSVAS_SIM_VIRTUAL2CONNECTED        = 9,
    RSVAS_SIM_VIRTUAL2SUSPENDED        = 10,
#endif /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */

    RSVAS_SIM_STEADY_SUSPENDED         = 11,
    
    RSVAS_SIM_TRANSITION_NUM           = 12
} rsvas_sim_transition;

#endif /* _RSVAS_ENUM_H */
