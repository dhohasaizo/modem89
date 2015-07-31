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
 * TCM_PCO_API.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "tcm_pco_api.h"

/* kals. */
#include "kal_general_types.h"
#include "kal_public_api.h"

/* structs. */
#include "tcm_context.h"    
#include "tcm2sm_struct.h"


/*****************************************************************************
* FUNCTION
*   tcm_cpy_config_info_into_sib
* DESCRIPTION
*   This procedure copies config options to SIBs.
*
* PARAMETERS
*   si_db_ptr    IN     Pointer to SIB
*   param_ptr    IN     Pointer to parameter
*   config_ptr   IN     Pointer to config options
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_cpy_config_info_into_sib(
                                    SESSION_INFO_PTR si_db_ptr,
                                    void *param_ptr,
                                    void *config_ptr
                                 )
{
    config_option_struct                *config_option_ptr  = NULL;
    tcm_protocol_config_packet_struct   *head_node_ptr      = NULL;
    kal_uint8                           packet_index        = 0; 
    kal_uint8                           max_packets_in_msg  = 0;
    kal_uint8                           max_packets_in_sib  = 0;
    
    config_option_ptr =  (config_option_struct *)config_ptr;
    
    max_packets_in_msg = *((kal_uint8 *)param_ptr + 0);
    max_packets_in_sib = si_db_ptr->prot_option_len;

    /* If the number packets in SIB is same as in the message then there is 
       no trim and add operation is required on the list. Othrewise we go for
       modification of the list */ 
    if(max_packets_in_msg != max_packets_in_sib )
    {
      if ( max_packets_in_msg > max_packets_in_sib )
      {
        /* Add specified number of nodes at end of the list */  
        tcm_config_packets_add( si_db_ptr,
                                (kal_uint8)(max_packets_in_msg - max_packets_in_sib)
                              );
      }
      else
      {
        /* Trim after specified number of nodes from the list */  
        tcm_config_packets_trim( si_db_ptr, 
                                 max_packets_in_msg
                               );  
      }  
    }
    
    si_db_ptr->prot_option_len = *((kal_uint8 *)param_ptr + 0);
    si_db_ptr->config_protocol = *((kal_uint8 *)param_ptr + 1);
    
    head_node_ptr = &si_db_ptr->prot_options_struct;
    for (packet_index = 0; packet_index < si_db_ptr->prot_option_len;
                                                          packet_index++ )
    {
      head_node_ptr->protocol_id = config_option_ptr[packet_index].protocol_id;
      head_node_ptr->protocol_config_size =
             config_option_ptr[packet_index].protocol_config_len;

        if (config_option_ptr[packet_index].protocol_config_len > MAX_CONFIG_OPTION_CONTENT_LEN)
        {
            /* to avoid copy to out of PCO array boundary */
            DEBUG_ASSERT(0);
            config_option_ptr[packet_index].protocol_config_len = MAX_CONFIG_OPTION_CONTENT_LEN;
        }

      kal_mem_cpy(
                 (kal_uint8 *)(head_node_ptr->protocol_config),
                 (kal_uint8 *)config_option_ptr[packet_index].protocol_config,
                 config_option_ptr[packet_index].protocol_config_len
                );
      head_node_ptr =  head_node_ptr->next_ptr;
    }

    return;
}

/*****************************************************************************
* FUNCTION
*   tcm_cpy_sib_into_config_info
* DESCRIPTION
*   This procedure copies SIBs to config options.
*
* PARAMETERS
*   si_db_ptr    IN     Pointer to SIB
*   config_ptr   IN     Pointer to config options
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_cpy_sib_into_config_info(
                                    SESSION_INFO_PTR si_db_ptr,
                                    void *config_ptr
                                 )
{
    config_option_struct                *config_option_ptr  = NULL;
    tcm_protocol_config_packet_struct   *head_node_ptr      = NULL;
    kal_uint8                           packet_index        = 0;


    config_option_ptr =  (config_option_struct *)config_ptr;
    
    head_node_ptr = &si_db_ptr->prot_options_struct;

    for (packet_index = 0; packet_index < si_db_ptr->prot_option_len;
                                                         packet_index++ )
    {
      config_option_ptr[packet_index].protocol_id = head_node_ptr->protocol_id;
      config_option_ptr[packet_index].protocol_config_len = 
                                    head_node_ptr->protocol_config_size;
       
      kal_mem_cpy(
                (kal_uint8 *)(config_option_ptr[packet_index].protocol_config),
                (kal_uint8 *)head_node_ptr->protocol_config,
                config_option_ptr[packet_index].protocol_config_len
               );
      
      head_node_ptr = head_node_ptr->next_ptr;
       
    }

    return;
}

/*****************************************************************************
* FUNCTION
*   tcm_cpy_config_info_from_msg_to_msg
* DESCRIPTION
*   This procedure copies config options to another one.
*
* PARAMETERS
*   dest_ptr     IN     Pointer to config options
*   source_ptr   IN     Pointer to config options
*   length       IN     config option length
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_cpy_config_info_from_msg_to_msg(
                                         config_option_struct *dest_ptr,
                                         config_option_struct *source_ptr,
                                         kal_uint8 length
                                       )
{
    kal_uint8 packet_index = 0; 

    for (packet_index = 0; packet_index < length; packet_index++ )
    {
        dest_ptr[packet_index].protocol_id =
                        source_ptr[packet_index].protocol_id;
        dest_ptr[packet_index].protocol_config_len =
                        source_ptr[packet_index].protocol_config_len;

       kal_mem_cpy(
                   dest_ptr[packet_index].protocol_config,
                   source_ptr[packet_index].protocol_config,
                   source_ptr[packet_index].protocol_config_len
                  );
    }

    return;
}

/*****************************************************************************
* FUNCTION
*   tcm_config_packets_trim
* DESCRIPTION
*   This procedure trims config options.
*
* PARAMETERS
*   si_db_ptr          IN     Pointer to SIB
*   trim_after_nodes   IN     nodes
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_config_packets_trim ( SESSION_INFO_PTR si_db_ptr,
                               kal_uint8 trim_after_nodes
                             )
{
    tcm_protocol_config_packet_struct *head_node_ptr        = NULL;
    tcm_protocol_config_packet_struct *node_to_delete_ptr   = NULL;
    tcm_protocol_config_packet_struct *first_node           = NULL;
    kal_uint8                         nodes_count           = 1;

    head_node_ptr = &si_db_ptr->prot_options_struct;
    while (nodes_count < trim_after_nodes)
    {
      nodes_count    = nodes_count + 1;
      head_node_ptr = head_node_ptr->next_ptr;
    }
    
    /* Add 03.08.05 for memory leak */
    first_node = head_node_ptr;
    head_node_ptr = head_node_ptr->next_ptr;

    while ( head_node_ptr != NULL )
    {
      node_to_delete_ptr    = head_node_ptr;
      head_node_ptr         = head_node_ptr->next_ptr;
      
      // kal_prompt_trace(MOD_TCM, "tcm_config_packets_trim free: %x", node_to_delete_ptr);// Carlson temp add, can remove this
      free_ctrl_buffer(node_to_delete_ptr);
    }

    first_node->next_ptr = NULL;
    
    return;
}

/*****************************************************************************
* FUNCTION
*   tcm_config_packets_add
* DESCRIPTION
*   This procedure adds config options.
*
* PARAMETERS
*   si_db_ptr            IN     Pointer to SIB
*   no_of_nodes_to_add   IN     nodes to be added
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_config_packets_add ( SESSION_INFO_PTR si_db_ptr, 
                              kal_uint8 no_of_nodes_to_add )
{
    tcm_protocol_config_packet_struct *head_node_ptr     = NULL;
    tcm_protocol_config_packet_struct *node_to_add_ptr   = NULL;
    kal_uint8                         nodes_count        = 0;

    head_node_ptr = &si_db_ptr->prot_options_struct;
    while (head_node_ptr->next_ptr != NULL )
    {
      head_node_ptr = head_node_ptr->next_ptr;
    }
    
    while ( nodes_count < no_of_nodes_to_add)
    {
      node_to_add_ptr  = (tcm_protocol_config_packet_struct *)
               get_ctrl_buffer (sizeof(tcm_protocol_config_packet_struct));
               
      // kal_prompt_trace(MOD_TCM, "tcm_config_packets_add allocate: %x", node_to_add_ptr);// Carlson temp add, can remove this
      node_to_add_ptr->next_ptr = NULL;
      head_node_ptr->next_ptr = node_to_add_ptr;
      head_node_ptr = node_to_add_ptr; /* Danny fix bug. 03.11.01 */
      nodes_count = nodes_count + 1;
    }
    
    return;
}
