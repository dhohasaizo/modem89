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
 * l4c_hz_utility.c
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ¡K.
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_HZ_UTILITY_C

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "l4_msgid.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

//#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
//#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_sendmsg.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_ft.h"

//#include "mcd.h"

#include "l4_trc.h"

//#include "l4a.h"
//#include "mmi_msg_struct.h"

#include "l4c_hz_cmd.h"
//#include "l4c_hz_msg.h"
#include "l4c_hz_utility.h"

//#include "l4c2phb_struct.h"
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_enum.h"

#include "l4c_hz_context.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "l4c_sim_cmd.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "kal_trace.h"
#include "l4crac_enums.h"
#include "mcd_l3_inc_struct.h"
#ifndef _SMSAL_FIRST_
    #include "l4c_phb_cmd.h"
#else 
    #include "l4c2smsal_struct.h"
#endif/* _SMSAL_FIRST_ */ 
//#include "kal_common_defs.h"
#include "kal_public_defs.h"

#ifdef __HOMEZONE_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_init_context
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_init_context()
{
    HZ_PTR->dynamic_cache_lastest = 0;
    HZ_PTR->dynamic_cache_size = 0;
    kal_mem_set(HZ_PTR->dynamic_cache, 0xff, 5 * sizeof(l4c_hz_dynamic_cache_struct)); //[20081224 review] memset -> kal_mem_set

    HZ_PTR->is_dedicated_mode = KAL_FALSE;
    HZ_PTR->is_pkt_transfer_mode = KAL_FALSE;

    HZ_PTR->queue_cb = KAL_FALSE;
    HZ_PTR->hz_init_finished = KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  hz_atoi
 * DESCRIPTION
 *  
 * PARAMETERS
 *  asciiz      [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_uint32 hz_atoi(kal_uint8 *asciiz)
{
    kal_uint8 *ptr = asciiz;
    kal_uint32 value = 0;

    while (*ptr != '\0')
    {
        value = value * 10 + (*ptr - '0');
        ptr++;
    }
    return value;
}


/*****************************************************************************
 * FUNCTION
 *  in_sim_cache
 * DESCRIPTION
 *  
 * PARAMETERS
 *  hz_number       [IN]        
 *  lac             [?]         
 *  cell_id         [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool in_sim_cache(kal_uint8 hz_number, kal_uint8 lac[2], kal_uint16 cell_id)
{
    kal_uint8 i;

    for (i = 0; i < HZ_PTR->hz[hz_number].sim_cache_size; i++)
    {
        if (HZ_PTR->hz[hz_number].sim_cache[i].lac[0] == lac[0]
            && HZ_PTR->hz[hz_number].sim_cache[i].lac[1] == lac[1]
            && HZ_PTR->hz[hz_number].sim_cache[i].cell_id == cell_id)
        {
            return KAL_TRUE;
        }
    }
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  add_sim_cache
 * DESCRIPTION
 *  
 * PARAMETERS
 *  hz_number       [IN]        
 *  lac             [?]         
 *  cell_id         [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void add_sim_cache(kal_uint8 hz_number, kal_uint8 lac[2], kal_uint16 cell_id)
{
    kal_uint8 i;

    kal_uint8 data[4];
    l4c_hz_context_struct *hz_ptr = HZ_PTR;

    data[0] = lac[0];
    data[1] = lac[1];
    //sim and arm are both big-endian (most signification)
    //memcpy(data+2, &cell_id, 2); 
    data[2] = (kal_uint8) (cell_id >> 8);
    data[3] = (kal_uint8) (cell_id & 0x00ff);

    for (i = 0; i < hz_ptr->hz[hz_number].sim_cache_size; i++)
    {
        if (hz_ptr->hz[hz_number].sim_cache[i].cell_id == 0xffff)
        {
            hz_ptr->hz[hz_number].sim_cache[i].lac[0] = lac[0];
            hz_ptr->hz[hz_number].sim_cache[i].lac[1] = lac[1];
            hz_ptr->hz[hz_number].sim_cache[i].cell_id = cell_id;

            switch (hz_number)
            {
                case 0:
                {
                    l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE1_IDX, i + 1, data, 4, NULL, 0);  /* Johnny: para start from 1 */
                    break;
                }
                case 1:
                {
                    l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE2_IDX, i + 1, data, 4, NULL, 0);  /* Johnny: para start from 1 */
                    break;
                }
                case 2:
                {
                    l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE3_IDX, i + 1, data, 4, NULL, 0);  /* Johnny: para start from 1 */
                    break;
                }
                case 3:
                {
                    l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE4_IDX, i + 1, data, 4, NULL, 0);  /* Johnny: para start from 1 */
                    break;
                }
            }

            hz_ptr->hz_sim_access = HZ_WRITE_SIM_FILE;

            return;
        }
    }

    hz_ptr->hz[hz_number].sim_cache[0].lac[0] = lac[0];
    hz_ptr->hz[hz_number].sim_cache[0].lac[1] = lac[1];
    hz_ptr->hz[hz_number].sim_cache[0].cell_id = cell_id;

    switch (hz_number)
    {
        case 0:
        {
            l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE1_IDX, 1, data, 4, NULL, 0);      /* Johnny: para start from 1 */
            break;
        }
        case 1:
        {
            l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE2_IDX, 1, data, 4, NULL, 0);      /* Johnny: para start from 1 */
            break;
        }
        case 2:
        {
            l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE3_IDX, 1, data, 4, NULL, 0);      /* Johnny: para start from 1 */
            break;
        }
        case 3:
        {
            l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE4_IDX, 1, data, 4, NULL, 0);      /* Johnny: para start from 1 */
            break;
        }
    }

    hz_ptr->hz_sim_access = HZ_WRITE_SIM_FILE;
}


/*****************************************************************************
 * FUNCTION
 *  del_sim_cache
 * DESCRIPTION
 *  
 * PARAMETERS
 *  hz_number       [IN]        
 *  lac             [?]         
 *  cell_id         [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void del_sim_cache(kal_uint8 hz_number, kal_uint8 lac[2], kal_uint16 cell_id)
{
    kal_uint8 i;

    kal_uint8 data[4];
    l4c_hz_context_struct *hz_ptr = HZ_PTR;

    kal_mem_set(data, 0xff, 4); //[20081224 review] memset -> kal_mem_set

    for (i = 0; i < hz_ptr->hz[hz_number].sim_cache_size; i++)
    {
        if (hz_ptr->hz[hz_number].sim_cache[i].lac[0] == lac[0]
            && hz_ptr->hz[hz_number].sim_cache[i].lac[1] == lac[1]
            && hz_ptr->hz[hz_number].sim_cache[i].cell_id == cell_id)
        {
            hz_ptr->hz[hz_number].sim_cache[i].lac[0] = 0xff;
            hz_ptr->hz[hz_number].sim_cache[i].lac[1] = 0xff;
            hz_ptr->hz[hz_number].sim_cache[i].cell_id = 0xffff;

            switch (hz_number)
            {
                case 0:
                {
                    l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE1_IDX, i + 1, data, 4, NULL, 0);
                    break;
                }
                case 1:
                {
                    l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE2_IDX, i + 1, data, 4, NULL, 0);
                    break;
                }
                case 2:
                {
                    l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE3_IDX, i + 1, data, 4, NULL, 0);
                    break;
                }
                case 3:
                {
                    l4c_smu_write_sim_req(LMMI_SRC, FILE_HZ_CACHE4_IDX, i + 1, data, 4, NULL, 0);
                    break;
                }
            }

            hz_ptr->hz_sim_access = HZ_WRITE_SIM_FILE;

            return;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  in_dynamic_cache
 * DESCRIPTION
 *  
 * PARAMETERS
 *  lac         [?]         
 *  cell_id     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint8 in_dynamic_cache(kal_uint8 lac[2], kal_uint16 cell_id)
{
    kal_uint8 i, j;
    l4c_hz_context_struct *hz_ptr = HZ_PTR;

    for (i = hz_ptr->dynamic_cache_lastest, j = 0; j < hz_ptr->dynamic_cache_size; i = (i - 1) % 5, j++)
    {
        if (hz_ptr->dynamic_cache[i].hz_number != 0
            && hz_ptr->dynamic_cache[i].lac[0] == lac[0]
            && hz_ptr->dynamic_cache[i].lac[1] == lac[1] && hz_ptr->dynamic_cache[i].cell_id == cell_id)
        {
            return hz_ptr->dynamic_cache[i].hz_number;
        }
    }
    return 0;
}


/*****************************************************************************
 * FUNCTION
 *  add_dynamic_cache
 * DESCRIPTION
 *  
 * PARAMETERS
 *  hz_number       [IN]        
 *  lac             [?]         
 *  cell_id         [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void add_dynamic_cache(kal_uint8 hz_number, kal_uint8 lac[2], kal_uint16 cell_id)
{
    l4c_hz_context_struct *hz_ptr = HZ_PTR;
    
    if (hz_ptr->dynamic_cache_size < 5)
    {
        hz_ptr->dynamic_cache_size++;
    }

    hz_ptr->dynamic_cache_lastest = (hz_ptr->dynamic_cache_lastest + 1) % 5;

    hz_ptr->dynamic_cache[hz_ptr->dynamic_cache_lastest].lac[0] = lac[0];
    hz_ptr->dynamic_cache[hz_ptr->dynamic_cache_lastest].lac[1] = lac[1];
    hz_ptr->dynamic_cache[hz_ptr->dynamic_cache_lastest].cell_id = cell_id;
    hz_ptr->dynamic_cache[hz_ptr->dynamic_cache_lastest].hz_number = hz_number; /* 1-4, 0 for not in homezone */

    //wirte_to_nvram();
}


/*****************************************************************************
 * FUNCTION
 *  clear_dynamic_cache
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void clear_dynamic_cache()
{
    HZ_PTR->dynamic_cache_lastest = 0;
    HZ_PTR->dynamic_cache_size = 0;

    kal_mem_set(HZ_PTR->dynamic_cache, 0xff, 5 * sizeof(l4c_hz_dynamic_cache_struct));//[20081224 review] memset -> kal_mem_set
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_read_file_info_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  file_size       [IN]        
 *  num_of_rec      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_read_file_info_cnf_hdlr(l4c_result_struct result, kal_uint16 file_size, kal_uint8 num_of_rec)
{
    l4c_hz_context_struct *hz_ptr = HZ_PTR;

    if (result.flag == L4C_ERROR)
    {
        hz_ptr->hz_sim_status = HZ_SIM_NOT_ALLOW;
        hz_ptr->hz_sim_access = HZ_SIM_ACCESS_NONE;
        kal_trace(
            L4C_HZ_TRC,
            HZ_STATE,
            hz_ptr->hz_sim_status,
            hz_ptr->is_dedicated_mode,
            hz_ptr->is_pkt_transfer_mode);

        l4c_hz_init_finish();

        return;
    }

    switch (hz_ptr->hz_sim_access)
    {
        case HZ_READ_FILE_INFO_FILE_HZ_CACHE1_IDX:
        {
            hz_ptr->hz[0].sim_cache_size = num_of_rec;
            if (hz_ptr->hz[0].active_flag == KAL_TRUE)
            {
                l4c_smu_read_sim_req(LMMI_SRC, FILE_HZ_CACHE1_IDX, 1, 4, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_SIM_FILE_HZ_CACHE1_IDX;
                hz_ptr->hz_read_sim_cache_iterator = 1; /* Johnny: para start from 1 */
            }
            else
            {
                l4c_smu_read_file_info_req(LMMI_SRC, FILE_HZ_CACHE2_IDX, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_FILE_INFO_FILE_HZ_CACHE2_IDX;
            }
            break;

        }
        case HZ_READ_FILE_INFO_FILE_HZ_CACHE2_IDX:
        {
            hz_ptr->hz[1].sim_cache_size = num_of_rec;
            if (hz_ptr->hz[1].active_flag == KAL_TRUE)
            {
                l4c_smu_read_sim_req(LMMI_SRC, FILE_HZ_CACHE2_IDX, 1, 4, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_SIM_FILE_HZ_CACHE2_IDX;
                hz_ptr->hz_read_sim_cache_iterator = 1; /* Johnny: para start from 1 */
            }
            else
            {
                l4c_smu_read_file_info_req(LMMI_SRC, FILE_HZ_CACHE3_IDX, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_FILE_INFO_FILE_HZ_CACHE3_IDX;
            }
            break;

        }
        case HZ_READ_FILE_INFO_FILE_HZ_CACHE3_IDX:
        {
            hz_ptr->hz[2].sim_cache_size = num_of_rec;
            if (hz_ptr->hz[2].active_flag == KAL_TRUE)
            {
                l4c_smu_read_sim_req(LMMI_SRC, FILE_HZ_CACHE3_IDX, 1, 4, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_SIM_FILE_HZ_CACHE3_IDX;
                hz_ptr->hz_read_sim_cache_iterator = 1; /* Johnny: para start from 1 */
            }
            else
            {
                l4c_smu_read_file_info_req(LMMI_SRC, FILE_HZ_CACHE4_IDX, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_FILE_INFO_FILE_HZ_CACHE4_IDX;
            }
            break;

        }
        case HZ_READ_FILE_INFO_FILE_HZ_CACHE4_IDX:
        {
            hz_ptr->hz[3].sim_cache_size = num_of_rec;
            if (hz_ptr->hz[3].active_flag == KAL_TRUE)
            {
                l4c_smu_read_sim_req(LMMI_SRC, FILE_HZ_CACHE4_IDX, 1, 4, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_SIM_FILE_HZ_CACHE4_IDX;
                hz_ptr->hz_read_sim_cache_iterator = 1; /* Johnny: para start from 1 */
            }
            else
            {
                l4c_hz_ready();
            }
            break;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_read_sim_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 *  length      [IN]        
 *  data        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_read_sim_cnf_hdlr(l4c_result_struct result, kal_uint16 length, kal_uint8 *data)
{
    l4c_hz_context_struct *hz_ptr = HZ_PTR;

    kal_uint8 i;

    if (result.flag == L4C_ERROR)
    {
        hz_ptr->hz_sim_status = HZ_SIM_NOT_ALLOW;
        hz_ptr->hz_sim_access = HZ_SIM_ACCESS_NONE;
        kal_trace(
            L4C_HZ_TRC,
            HZ_STATE,
            hz_ptr->hz_sim_status,
            hz_ptr->is_dedicated_mode,
            hz_ptr->is_pkt_transfer_mode);

        l4c_hz_init_finish();

        return;
    }

    switch (hz_ptr->hz_sim_access)
    {
        case HZ_READ_SIM_FILE_HZ_IDX:
        {
            for (i = 0; i < 4; i++)
            {
               

		  // mtk02514_081216 fix the bug
                hz_ptr->hz[i].xh  = ( ((kal_uint32)*(data + 1)) << 24) | ( ((kal_uint32)*(data + 2)) << 16) | ( ((kal_uint32)*(data + 3)) << 8) | *(data + 4);
                hz_ptr->hz[i].yh  = ( ((kal_uint32)*(data + 5)) << 24) | ( ((kal_uint32)*(data + 6)) << 16) | ( ((kal_uint32)*(data + 7)) << 8) | *(data + 8);
                hz_ptr->hz[i].r2h = ( ((kal_uint32)*(data + 9)) << 24) | ( ((kal_uint32)*(data + 10)) << 16) | ( ((kal_uint32)*(data + 11)) << 8) | *(data + 12);


                if ((*(data + 13)) & 0x01)
                {
                    hz_ptr->hz[i].active_flag = KAL_TRUE;
                }
                else
                {
                    hz_ptr->hz[i].active_flag = KAL_FALSE;
                }
                if ((*(data + 13)) & 0x02)
                {
                    hz_ptr->hz[i].is_cz = KAL_TRUE;
                }
                else
                {
                    hz_ptr->hz[i].is_cz = KAL_FALSE;
                }
                kal_mem_cpy(hz_ptr->hz[i].tag, data + 14, 12); // [20081224 review] memcpy -> kal_mem_cpy
                data = data + 26;
            }

            l4c_smu_read_file_info_req(LMMI_SRC, FILE_HZ_CACHE1_IDX, NULL, 0);
            hz_ptr->hz_sim_access = HZ_READ_FILE_INFO_FILE_HZ_CACHE1_IDX;
            break;
        }
        case HZ_READ_SIM_FILE_HZ_CACHE1_IDX:
        {
            hz_ptr->hz[0].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].lac[0] = *data;
            hz_ptr->hz[0].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].lac[1] = *(data + 1);
            hz_ptr->hz[0].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].cell_id = (*(data + 2) << 8) | *(data + 3);

            hz_ptr->hz_read_sim_cache_iterator++;

            if (hz_ptr->hz_read_sim_cache_iterator > hz_ptr->hz[0].sim_cache_size)
            {
                l4c_smu_read_file_info_req(LMMI_SRC, FILE_HZ_CACHE2_IDX, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_FILE_INFO_FILE_HZ_CACHE2_IDX;
            }
            else
            {
                l4c_smu_read_sim_req(LMMI_SRC, FILE_HZ_CACHE1_IDX, hz_ptr->hz_read_sim_cache_iterator, 4, NULL, 0);
            }
            break;
        }
        case HZ_READ_SIM_FILE_HZ_CACHE2_IDX:
        {
            hz_ptr->hz[1].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].lac[0] = *data;
            hz_ptr->hz[1].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].lac[1] = *(data + 1);
            hz_ptr->hz[1].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].cell_id = (*(data + 2) << 8) | *(data + 3);

            hz_ptr->hz_read_sim_cache_iterator++;

            if (hz_ptr->hz_read_sim_cache_iterator > hz_ptr->hz[1].sim_cache_size)
            {
                l4c_smu_read_file_info_req(LMMI_SRC, FILE_HZ_CACHE3_IDX, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_FILE_INFO_FILE_HZ_CACHE3_IDX;
            }
            else
            {
                l4c_smu_read_sim_req(LMMI_SRC, FILE_HZ_CACHE2_IDX, hz_ptr->hz_read_sim_cache_iterator, 4, NULL, 0);
            }
            break;
        }
        case HZ_READ_SIM_FILE_HZ_CACHE3_IDX:
        {
            hz_ptr->hz[2].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].lac[0] = *data;
            hz_ptr->hz[2].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].lac[1] = *(data + 1);
            hz_ptr->hz[2].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].cell_id = (*(data + 2) << 8) | *(data + 3);

            hz_ptr->hz_read_sim_cache_iterator++;

            if (hz_ptr->hz_read_sim_cache_iterator > hz_ptr->hz[2].sim_cache_size)
            {
                l4c_smu_read_file_info_req(LMMI_SRC, FILE_HZ_CACHE4_IDX, NULL, 0);

                hz_ptr->hz_sim_access = HZ_READ_FILE_INFO_FILE_HZ_CACHE4_IDX;
            }
            else
            {
                l4c_smu_read_sim_req(LMMI_SRC, FILE_HZ_CACHE3_IDX, hz_ptr->hz_read_sim_cache_iterator, 4, NULL, 0);
            }
            break;
        }
        case HZ_READ_SIM_FILE_HZ_CACHE4_IDX:
        {
            hz_ptr->hz[3].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].lac[0] = *data;
            hz_ptr->hz[3].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].lac[1] = *(data + 1);
            hz_ptr->hz[3].sim_cache[hz_ptr->hz_read_sim_cache_iterator - 1].cell_id = (*(data + 2) << 8) | *(data + 3);

            hz_ptr->hz_read_sim_cache_iterator++;

            if (hz_ptr->hz_read_sim_cache_iterator > hz_ptr->hz[3].sim_cache_size)
            {
                l4c_hz_ready();
            }
            else
            {
                l4c_smu_read_sim_req(LMMI_SRC, FILE_HZ_CACHE4_IDX, hz_ptr->hz_read_sim_cache_iterator, 4, NULL, 0);
            }
            break;
        }

    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_write_sim_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 *  cause       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_write_sim_cnf_hdlr(kal_bool result, kal_uint16 cause)
{
    HZ_PTR->hz_sim_access = HZ_SIM_ACCESS_NONE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_ready
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_ready()
{
    l4c_hz_context_struct *hz_ptr = HZ_PTR;

    hz_ptr->hz_sim_access = HZ_SIM_ACCESS_NONE;
    hz_ptr->hz_sim_status = HZ_READY;
    kal_trace(L4C_HZ_TRC, HZ_STATE, hz_ptr->hz_sim_status, hz_ptr->is_dedicated_mode, hz_ptr->is_pkt_transfer_mode);

    print_hz_para(0);
    print_hz_cache(0);
    print_hz_para(1);
    print_hz_cache(1);
    print_hz_para(2);
    print_hz_cache(2);
    print_hz_para(3);
    print_hz_cache(3);

    kal_trace(
        L4C_HZ_TRC,
        HZ_CURRENT,
        hz_ptr->current_lac[0],
        hz_ptr->current_lac[1],
        hz_ptr->current_cell_id,
        hz_ptr->current_gsm_status,
        hz_ptr->current_hz_number);

    if (hz_ptr->current_cell_id != 0)
    {
        if (l4c_hz_is_on_home_plmn(hz_ptr->currrent_plmn_id))
        {
            if (hz_ptr->hz_sim_status == HZ_READY && hz_ptr->current_gsm_status == L4C_RAC_OK)
            {
                l4c_hz_cell_reselection_alg(hz_ptr->current_lac, hz_ptr->current_cell_id);
            }
            l4csmsal_hz_cb_act_req(KAL_TRUE);
            start_cb_channel_timer();
        }
    }

    if (hz_ptr->queue_cb == KAL_TRUE)
    {
        l4c_hz_cb_alg(hz_ptr->queue_xc, hz_ptr->queue_yc);
        l4csmsal_hz_cb_act_req(KAL_FALSE);
        stop_cb_channel_timer();

        hz_ptr->queue_cb = KAL_FALSE;
        hz_ptr->queue_xc = 0;
        hz_ptr->queue_yc = 0;
    }

    l4c_hz_init_finish();
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_is_on_home_plmn
 * DESCRIPTION
 *  
 * PARAMETERS
 *  plmn_id     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_hz_is_on_home_plmn(plmn_id_struct plmn_id)
{
    kal_uint8 imsi[9];

    l4csmu_get_imsi((kal_uint8*) imsi);
    imsi[8] = 0xff;

    if ((plmn_id.mcc1 == (imsi[0] >> 4))
        && (plmn_id.mcc2 == (imsi[1] & 0x0F))
        && (plmn_id.mcc3 == (imsi[1] >> 4)) && (plmn_id.mnc1 == (imsi[2] & 0x0F)) && (plmn_id.mnc2 == (imsi[2] >> 4)))

    {
        /* MNC3 should be compared if it is not 0xF */
        if (plmn_id.mnc3 == 0x0F)
        {
            return KAL_TRUE;
        }
        else
        {
            if (plmn_id.mnc3 == (imsi[3] & 0x0F))
            {
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;
            }
        }
    }
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_cell_reselection_alg
 * DESCRIPTION
 *  
 * PARAMETERS
 *  lac         [?]         
 *  cell_id     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_cell_reselection_alg(kal_uint8 lac[2], kal_uint16 cell_id)
{
    kal_uint8 i;
    l4c_hz_context_struct *hz_ptr = HZ_PTR;

    hz_ptr->current_lac[0] = lac[0];
    hz_ptr->current_lac[1] = lac[1];
    hz_ptr->current_cell_id = cell_id;

    l4c_hz_tag_lind(KAL_FALSE, KAL_FALSE, NULL);
    hz_ptr->current_hz_number = 0;  /* 1-4, 0 for not in homezone */

    for (i = 0; i < 4; i++)
    {
        if (hz_ptr->hz[i].active_flag == KAL_TRUE && hz_ptr->hz[i].is_cz == KAL_FALSE)
        {
            if (in_sim_cache(i, lac, cell_id))
            {
                l4c_hz_tag_lind(KAL_TRUE, KAL_TRUE, hz_ptr->hz[i].tag);
                hz_ptr->current_hz_number = i + 1;  /* 1-4, 0 for not in homezone */
                return;
            }
        }
    }

    hz_ptr->current_hz_number = in_dynamic_cache(lac, cell_id); /* 1-4, 0 for not in homezone */

    if (hz_ptr->current_hz_number != 0)
    {
        l4c_hz_tag_lind(KAL_TRUE, KAL_FALSE, hz_ptr->hz[hz_ptr->current_hz_number - 1].tag);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_cb_alg
 * DESCRIPTION
 *  
 * PARAMETERS
 *  xc      [IN]        
 *  yc      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_cb_alg(kal_uint32 xc, kal_uint32 yc)
{
    kal_int32 delta_x;
    kal_int32 delta_y;
    l4c_hz_context_struct *hz_ptr = HZ_PTR;

    kal_uint8 cz_number = 0;    /* 1-4, 0 for not in homezone */
    kal_uint8 i;

    hz_ptr->current_hz_number = 0;  /* 1-4, 0 for not in homezone */

    for (i = 0; i < 4; i++)
    {
        if (hz_ptr->hz[i].active_flag == KAL_TRUE)
        {
            delta_x = hz_ptr->hz[i].xh - xc;
            delta_y = hz_ptr->hz[i].yh - yc;

            kal_trace(
                L4C_HZ_TRC,
                HZ_PARA,
                i,
                hz_ptr->hz[i].active_flag,
                hz_ptr->hz[i].is_cz,
                xc,
                yc,
                hz_ptr->hz[i].r2h,
                0);

            kal_trace(
                L4C_HZ_TRC,
                HZ_PARA,
                i,
                hz_ptr->hz[i].active_flag,
                hz_ptr->hz[i].is_cz,
                delta_x,
                delta_y,
                hz_ptr->hz[i].r2h,
                0);

            if (delta_x > 10000 || delta_x < -10000 || delta_y > 10000 || delta_y < -10000)
            {
                if (in_sim_cache(i, hz_ptr->current_lac, hz_ptr->current_cell_id))
                {
                    del_sim_cache(i, hz_ptr->current_lac, hz_ptr->current_cell_id);
                }
                continue;
            }
            else
            {
                if (delta_x * delta_x + delta_y * delta_y <= hz_ptr->hz[i].r2h)
                {
                    if (hz_ptr->hz[i].is_cz == KAL_FALSE)
                    {
                        if (in_sim_cache(i, hz_ptr->current_lac, hz_ptr->current_cell_id))
                        {
                            hz_ptr->current_hz_number = i + 1;  /* 1-4, 0 for not in homezone */
                            continue;
                        }
                        else
                        {
                            add_sim_cache(i, hz_ptr->current_lac, hz_ptr->current_cell_id);
                            hz_ptr->current_hz_number = i + 1;  /* 1-4, 0 for not in homezone */
                            continue;
                        }
                    }
                    else
                    {
                        cz_number = i + 1;                  /* 1-4, 0 for not in homezone */
                        if (hz_ptr->current_hz_number == 0) /* Johnny: HZ priority > CZ */
                        {
                            hz_ptr->current_hz_number = i + 1;  /* 1-4, 0 for not in homezone */
                        }
                        continue;   /* Johnny: in our design now, do not stop hz_cb_alg */
                    }
                }
                else
                {
                    if (in_sim_cache(i, hz_ptr->current_lac, hz_ptr->current_cell_id))
                    {
                        del_sim_cache(i, hz_ptr->current_lac, hz_ptr->current_cell_id);
                    }
                    continue;
                }
            }
        }
    }

    if (hz_ptr->current_hz_number != 0)
    {
        if (hz_ptr->hz[hz_ptr->current_hz_number - 1].is_cz == KAL_FALSE)
        {
            l4c_hz_tag_lind(KAL_TRUE, KAL_TRUE, hz_ptr->hz[hz_ptr->current_hz_number - 1].tag);
        }
        else
        {
            l4c_hz_tag_lind(KAL_TRUE, KAL_FALSE, hz_ptr->hz[cz_number - 1].tag);
        }
    }
    else
    {
        l4c_hz_tag_lind(KAL_FALSE, KAL_FALSE, NULL);
    }

    add_dynamic_cache(cz_number, hz_ptr->current_lac, hz_ptr->current_cell_id);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_init
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_init()
{
    kal_uint8 imsi[9];

    l4csmu_get_imsi((kal_uint8*) imsi);
    imsi[8] = 0xff;

    l4c_smu_read_sim_req(LMMI_SRC, FILE_HZ_IDX, 17, 26 * 4, NULL, 0);
    HZ_PTR->hz_sim_access = HZ_READ_SIM_FILE_HZ_IDX;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_init_finish
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_init_finish()
{
    if (HZ_PTR->hz_init_finished == KAL_FALSE)
    {
    #ifndef _SMSAL_FIRST_

        l4c_phb_startup_begin_req();        

    #else /* _SMSAL_FIRST_ */ 
        // act smsal
        l4csmsal_init_req_struct *param_ptr;

        if (L4C_PTR->cc_current_action[LMMI_SRC] == POWEROFF_EXE)
        {
            return;
        }
        param_ptr = (l4csmsal_init_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4csmsal_init_req_struct), TD_RESET);

        param_ptr->src_id = LMMI_SRC;
        param_ptr->is_sim_change = l4c_check_sim_status();
        param_ptr->init_type = SMSAL_NORMAL_INIT;
        l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_INIT_REQ, param_ptr, NULL, 0);
    #endif /* _SMSAL_FIRST_ */ 
        HZ_PTR->hz_init_finished = KAL_TRUE;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_hz_update
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_hz_update()
{
    l4c_hz_tag_lind(KAL_FALSE, KAL_FALSE, NULL);
    HZ_PTR->current_hz_number = 0;  /* 1-4, 0 for not in homezone */
    HZ_PTR->hz_sim_status = HZ_INIT;
    kal_trace(L4C_HZ_TRC, HZ_STATE, HZ_PTR->hz_sim_status, HZ_PTR->is_dedicated_mode, HZ_PTR->is_pkt_transfer_mode);
    clear_dynamic_cache();
    //clean nvram
    l4c_hz_init();
}


/*****************************************************************************
 * FUNCTION
 *  start_cb_channel_timer
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void start_cb_channel_timer()
{
    if (L4C_PTR->event_id[4] != 0)
    {
        kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, L4C_PTR->event_id[4]);
        evshed_cancel_event(L4C_PTR->event_scheduler_ptr, &(L4C_PTR->event_id[4]));
        L4C_PTR->event_id[4] = 0;
    }

    L4C_PTR->event_id[4] = evshed_set_event(
                            L4C_PTR->event_scheduler_ptr,
                            (kal_timer_func_ptr) cb_channel_timer_timeout_hdlr,
                            NULL,
                            600 * KAL_TICKS_100_MSEC);

}


/*****************************************************************************
 * FUNCTION
 *  stop_cb_channel_timer
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void stop_cb_channel_timer()
{
    if (L4C_PTR->event_id[4] != 0)
    {
        kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, L4C_PTR->event_id[4]);
        evshed_cancel_event(L4C_PTR->event_scheduler_ptr, &(L4C_PTR->event_id[4]));
        L4C_PTR->event_id[4] = 0;
    }
}


/*****************************************************************************
 * FUNCTION
 *  cb_channel_timer_timeout_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void cb_channel_timer_timeout_hdlr()
{
    l4c_hz_context_struct *hz_ptr = HZ_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (l4c_ptr->event_id[4] != 0)
    {
        kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[4]);
        //evshed_cancel_event (L4C_PTR->event_scheduler_ptr, &(L4C_PTR->event_id[4]));
        l4c_ptr->event_id[4] = 0;
    }

    if (hz_ptr->hz_sim_status == HZ_READY)
    {
        kal_trace(
            L4C_HZ_TRC,
            HZ_CURRENT,
            hz_ptr->current_lac[0],
            hz_ptr->current_lac[1],
            hz_ptr->current_cell_id,
            hz_ptr->current_gsm_status,
            hz_ptr->current_hz_number);

        del_sim_cache(hz_ptr->current_hz_number - 1, hz_ptr->current_lac, hz_ptr->current_cell_id);
        l4c_hz_tag_lind(KAL_FALSE, KAL_FALSE, NULL);
        hz_ptr->current_hz_number = 0;  /* 1-4, 0 for not in homezone */
    }

    l4csmsal_hz_cb_act_req(KAL_FALSE);
    stop_cb_channel_timer();
}


/*****************************************************************************
 * FUNCTION
 *  print_hz_para
 * DESCRIPTION
 *  
 * PARAMETERS
 *  hz_number       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void print_hz_para(int hz_number)
{
    kal_trace(
        L4C_HZ_TRC,
        HZ_PARA,
        hz_number,
        HZ_PTR->hz[hz_number].active_flag,
        HZ_PTR->hz[hz_number].is_cz,
        HZ_PTR->hz[hz_number].xh,
        HZ_PTR->hz[hz_number].yh,
        HZ_PTR->hz[hz_number].r2h,
        HZ_PTR->hz[hz_number].sim_cache_size);
}


/*****************************************************************************
 * FUNCTION
 *  print_hz_cache
 * DESCRIPTION
 *  
 * PARAMETERS
 *  hz_number       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void print_hz_cache(int hz_number)
{
    kal_uint8 i;

    for (i = 0; i < HZ_PTR->hz[hz_number].sim_cache_size; i++)
    {
        kal_trace(
            L4C_HZ_TRC,
            HZ_CACHE,
            hz_number,
            i,
            HZ_PTR->hz[hz_number].sim_cache[i].lac[0],
            HZ_PTR->hz[hz_number].sim_cache[i].lac[1],
            HZ_PTR->hz[hz_number].sim_cache[i].cell_id);
    }
}

#endif /* __HOMEZONE_SUPPORT__ */ 

