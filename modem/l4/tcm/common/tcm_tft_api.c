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
 * TCM_TFT_API.C
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

/* Ensure self-compilable. */
#include "tcm_tft_api.h"
#include "drv_msgid.h"
#include "l4_msgid.h"
#include "md_sap.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

#ifdef __TST_MODULE__
#include "tcm_send_msg.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
extern void tst_log_primitive(ilm_struct* ilm_ptr);
#endif /* __TST_MODULE__ */

#define TOS_TRAF_CLASS_MASK_LEN 2

extern unsigned int mask(unsigned int width);

/** Update the tft_in_use list to the tft_under_mod list. */
kal_bool tcm_update_tft( SESSION_INFO_PTR si_db_ptr, tft_opcode_enum tft_opcode )
{

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM, MMI_FN_ENTER_TCM_UPDATE_TFT_SUBOP );

    switch ( tft_opcode )
    {
      case CREATE_NEW_TFT :
      {
        /* If the operation was to create a new TFT then the TFT
         * present in the tft_under_mod field is now the newly created
         * TFT.
         */
        si_db_ptr->tft_in_use.filter_list_ptr =
                   si_db_ptr->tft_under_mod.filter_list_ptr;

        /* tft_under_mod should point to NULL after the tft_in_use
         * points to the new TFT.
         */
        si_db_ptr->tft_under_mod.filter_list_ptr = NULL; 
        break;   
      }

      case DELETE_EXISTING_TFT :
      {
        /* If the operation was to delete an existing TFT then free
         * the packet filter list pointed to by tft_in_use.
         */
        si_db_ptr->tft_in_use.filter_list_ptr = 
           tcm_free_list( si_db_ptr->tft_in_use.filter_list_ptr );
        break;   
      }

      case ADD_PKT_FILTER_TO_TFT :
      {
         tcm_append_list( &(si_db_ptr->tft_in_use.filter_list_ptr),
	 		  &(si_db_ptr->tft_under_mod.filter_list_ptr),
			  KAL_FALSE);
        break;
      }

      case REPLACE_PKT_FILTER_IN_TFT :
      {
         /* Replace the packet filters in tft_under_mod to tft_in_use list */
	 tcm_append_list( &(si_db_ptr->tft_in_use.filter_list_ptr),
	 	          &(si_db_ptr->tft_under_mod.filter_list_ptr),
			  KAL_TRUE);
        break;   
      }

      case DELETE_PKT_FILTER_FROM_TFT :
      {
        tcm_packet_filter_struct *d_ptr = NULL;
        tcm_packet_filter_struct *s_ptr = NULL;

        d_ptr = si_db_ptr->tft_in_use.filter_list_ptr;
        s_ptr = si_db_ptr->tft_under_mod.filter_list_ptr;

        /* Delete all the members present in the tft_under_mod list
         * from the tft_in_use list.
         */
        si_db_ptr->tft_in_use.filter_list_ptr =
                              tcm_delete_list( d_ptr, s_ptr );

        /* Free the packet filter list pointed to by tft_under_mod */
        si_db_ptr->tft_under_mod.filter_list_ptr =
                              tcm_free_list( s_ptr );
        break;
      }

      default :
      {
        break;
      }
    }

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_UPDATE_TFT_SUBOP );

    return( KAL_TRUE );
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    return KAL_FALSE;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


/** Append all the packet filters present in the source list to destination list. */
void tcm_append_list(tcm_packet_filter_struct **d_ptr, tcm_packet_filter_struct **s_ptr, kal_bool replace )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   tcm_packet_filter_struct *curr_ptr = *s_ptr;

   /* Delete the same packet filters in destination list */	
   if(replace == KAL_TRUE)
   {	
      while(curr_ptr != NULL)
      {
         tcm_delete_packet_filter(d_ptr, curr_ptr->pkt_filter.pfi);
         curr_ptr = curr_ptr->next_ptr;
      }
   }

   /* Find the last packet filter in destination list */
   curr_ptr = *d_ptr;
   if(curr_ptr == NULL)
   {
      *d_ptr = *s_ptr;
   }
   else
   {
      while (curr_ptr->next_ptr != NULL )
      {
         curr_ptr = curr_ptr->next_ptr;
      }

      /* Append source list to destination list */
      curr_ptr->next_ptr = *s_ptr;
   }
   *s_ptr = NULL;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


/** Delete the packet filters present in the s_ptr list from the d_ptr list. */ 
tcm_packet_filter_struct* tcm_delete_list( tcm_packet_filter_struct *d_ptr, tcm_packet_filter_struct *s_ptr )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    tcm_packet_filter_struct *curr_ptr = NULL;
    tcm_packet_filter_struct *prev_ptr = NULL;

    while(s_ptr != NULL)
    {
      curr_ptr = prev_ptr = d_ptr;

      while(curr_ptr != NULL)
      {
        if(curr_ptr->pkt_filter.pfi == s_ptr->pkt_filter.pfi)
        {
          /* If the packet filter in s_ptr list match the current
           * packet filter being considered.
           */
          break;
        }
        prev_ptr = curr_ptr;
        /* Go the next packet filter in the d_ptr list */
        curr_ptr = curr_ptr->next_ptr;
      }

      if(curr_ptr != NULL)
      {
        if(curr_ptr == prev_ptr)
        {
          /* If there is only one packet filter in the d_ptr list */
          d_ptr = prev_ptr->next_ptr;
        }
        else
        {
          /* Make the next filter in the list pointed to by prev_ptr
           * the one that is next to the filter pointed to by
           * curr_ptr.
           */
          prev_ptr->next_ptr = curr_ptr->next_ptr;
        }
        /* Delete the packet filter */

        free_ctrl_buffer(curr_ptr);

      }
      s_ptr = s_ptr->next_ptr;
    }
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    return(d_ptr);
}


/** Delete all the packet filters present in the list pointed to by l_ptr. */ 
tcm_packet_filter_struct* tcm_free_list( tcm_packet_filter_struct *l_ptr )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    tcm_packet_filter_struct *tmp_ptr = NULL;

    while(l_ptr != NULL)
    {
      tmp_ptr = l_ptr;
      l_ptr = l_ptr->next_ptr;

      free_ctrl_buffer(tmp_ptr);

    }
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    return(l_ptr);
}


void tcm_delete_packet_filter( tcm_packet_filter_struct **sib_tft_ptr, kal_uint8 pfi )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   tcm_packet_filter_struct *prev_ptr;
   tcm_packet_filter_struct *curr_ptr;
   kal_brief_trace(TRACE_GROUP_2, TCM_DELETE_PACKET_FILTER);

   prev_ptr = curr_ptr = *sib_tft_ptr;
   while(curr_ptr != NULL)
   {
      /* Search specific pfi in packet filter list */
      if(curr_ptr->pkt_filter.pfi == pfi)
      {
         if(curr_ptr == prev_ptr)
         {
            *sib_tft_ptr = curr_ptr->next_ptr;
         }
         else
         {
            prev_ptr->next_ptr = curr_ptr->next_ptr;	
         }

         /* Delete the packet filter */
         free_ctrl_buffer(curr_ptr);
           
         break;
      }

      /* Point to next packet filter */
      prev_ptr = curr_ptr;
      curr_ptr = curr_ptr->next_ptr;
    }
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


void tcm_replace_packet_filter( tcm_packet_filter_struct **sib_tft_ptr, l4c_tft_struct *tft )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    kal_brief_trace(TRACE_GROUP_2, TCM_REPLACE_PACKET_FILTER);
    
   tcm_delete_packet_filter(sib_tft_ptr, tft->pf[0].pfi);
   tcm_add_packet_filter(sib_tft_ptr, tft);  
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


void tcm_add_packet_filter( tcm_packet_filter_struct **sib_tft_ptr, l4c_tft_struct *tft )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   tcm_packet_filter_struct *curr_ptr;
   tcm_packet_filter_struct *new_ptr;

   kal_brief_trace(TRACE_GROUP_2, TCM_ADD_PACKET_FILTER);
   
   new_ptr = tcm_create_packet_filter(tft);
	
   if (*sib_tft_ptr == NULL )		/* Filter list is empty */
   {
      *sib_tft_ptr = new_ptr;
   }
   else							/* Add to end*/
   {
      curr_ptr = *sib_tft_ptr;
      while ( curr_ptr->next_ptr != NULL )
      {
         curr_ptr = curr_ptr->next_ptr;
      }
      curr_ptr->next_ptr = new_ptr;
   }
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__    
   return;
}


tcm_packet_filter_struct* tcm_create_packet_filter( l4c_tft_struct *tft )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   tcm_packet_filter_struct *sib_tft_ptr;
   l4c_pf_struct            *pkt_filter ;
   
   kal_brief_trace(TRACE_GROUP_2, TCM_CREATE_PACKET_FILTER);
	
   /* Get a free buffer to add a node to the PF list */    
   sib_tft_ptr = (tcm_packet_filter_struct *)
   get_ctrl_buffer(sizeof(tcm_packet_filter_struct ));
     
   /* Initialize the packet filter */
   kal_mem_set((kal_uint8 *)sib_tft_ptr,
               (kal_uint32)0,
               (kal_uint32)sizeof(tcm_packet_filter_struct));

   /* Fill the node with corresponding parameters */
   sib_tft_ptr->next_ptr     = NULL;
   sib_tft_ptr->context_id   = tft->context_id ;

   /* Poying: Fill-in packet_filter type according to 23.060, Sec. 15.3.2. */
   if (tft->pf[0].flow_label_present == KAL_TRUE)
   {
       sib_tft_ptr->type = PF_TYPE_THREE ;
   }
   else if ( (tft->pf[0].dst_port_len != 0) || (tft->pf[0].src_port_len!= 0) )
   {
       sib_tft_ptr->type = PF_TYPE_ONE ;
   }
   else
   {
       sib_tft_ptr->type = PF_TYPE_TWO ;
   }


   /* Poying: Copy the entire packet filter. */
   pkt_filter = &(sib_tft_ptr->pkt_filter) ;
   kal_mem_cpy(pkt_filter, &(tft->pf[0]), sizeof(l4c_pf_struct)) ;
     

   /* Poying: Print content of this packet filter. */
   #ifdef __TST_MODULE__
   {
      ilm_struct    pkt_filter_ilm ;
      tcm_check_packet_filter_content_struct    *tcm_check_pkt_filter ;

      tcm_check_pkt_filter = (tcm_check_packet_filter_content_struct *) 
                                construct_local_para(sizeof(tcm_check_packet_filter_content_struct), TD_RESET) ;

      tcm_check_pkt_filter->packet_filter = *sib_tft_ptr ;

      pkt_filter_ilm.src_mod_id     = TCM_MODULE_ID ;
      pkt_filter_ilm.dest_mod_id    = MOD_L4C ;
      pkt_filter_ilm.msg_id         = MSG_ID_TCM_CHECK_PACKET_FILTER_CONTENT ;
      pkt_filter_ilm.sap_id         = TCM_L4C_SAP ;
      pkt_filter_ilm.local_para_ptr = (local_para_struct *) tcm_check_pkt_filter ; 
      pkt_filter_ilm.peer_buff_ptr  = NULL ;
      
      tst_log_primitive(&pkt_filter_ilm) ;

      free_local_para((local_para_struct *)tcm_check_pkt_filter) ;
   }
   #endif /* __TST_MODULE__ */

   return sib_tft_ptr;
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   return NULL;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


kal_bool tcm_set_tft_info( kal_uint8 sib_id, l4c_tft_struct *tft )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   kal_bool			replace_in_use = KAL_FALSE;
   tft_opcode_enum 	        tft_opcode;
   SESSION_INFO_PTR	        sib_ptr;

   kal_brief_trace(TRACE_GROUP_2, TCM_SET_TFT_INFO, sib_id);
   /* Check if identifier are specified */
   if(tft->tot_pf_count > 0 && tft->pf[0].pfi == 0xFF)
   {
      return KAL_FALSE;
   }

   /* Get session info block pointer */
   sib_ptr = tcm_get_sib_ptr (sib_id);
	
   /* Decrease packet filter identifier (1-8) */
   tft->pf[0].pfi -= 1;

   /* Get TFT opcode */
   tft_opcode = tcm_get_tft_opcode(sib_ptr, tft, &replace_in_use);
   /* Poying:
    *   - replace_in_use is set to
    *       TRUE if the specified pfi is found in tft_in_use;
    *       FALSE if the specified pfi is found in tft_under_mod
    *   - If it is TRUE, TCM adds this packet filter in tft_under_mod
    *   - It it is FALSE, TCM replace this packet filter in tft_under_mode.
    */
   /* Poying:
    *   - If replace_in_use is FALSE, it means that one TFT not in use is to be modified,
    *     and since it is not in use, TCM can simply replace it without any concern.
    */
    
   kal_brief_trace(TRACE_GROUP_2, TCM_TFT_OPCODE, tft_opcode);

   /* Check if tft_in_use list is empty */
   if( (sib_ptr->main_state == TCM_CONTEXT_ACTIVE_STATE) &&
       (sib_ptr->tft_in_use.filter_list_ptr != NULL))
   {		
      return tcm_set_tft_info_peer(sib_id, tft, tft_opcode, replace_in_use);
   }
   else
   {
      return tcm_set_tft_info_local(sib_id, tft, tft_opcode);   /*  Poying: Set to tft_under_mod. */
   }
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   return KAL_FALSE;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


kal_bool tcm_set_tft_info_peer( kal_uint8 sib_id, l4c_tft_struct *tft, tft_opcode_enum tft_opcode, kal_bool replace_in_use )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   SESSION_INFO_PTR	        sib_ptr;
   kal_uint8			pri_context_id;
	
   kal_brief_trace(TRACE_GROUP_2, TCM_SET_TFT_INFO_PEER, sib_id, tft_opcode);

   /* Get session info block pointer */
   sib_ptr = tcm_get_sib_ptr(sib_id);

   /* Get primary context id */
   pri_context_id = tcm_get_primary_context_id(sib_ptr);
	
   /* Do actions by tft opcode */
   switch (tft_opcode)
   {			
      case ADD_PKT_FILTER_TO_TFT:
      {
         /* Check opcode */
	 if(sib_ptr->tft_opcode != NO_OP_TFT &&
    	    sib_ptr->tft_opcode != tft_opcode)  /* Poying: Why needs to check this ? */
	    return KAL_FALSE;
		
	 /* Check if same precedence exists */
	 if(tcm_is_same_epi(sib_id, tft->pf[0].pfi, tft->pf[0].epi) == KAL_TRUE)
	    return KAL_FALSE;

	 /* Add packet filter to tft_under_mod list */
	 tcm_add_packet_filter(&(sib_ptr->tft_under_mod.filter_list_ptr), tft);
	 
         break;
      }
      
      case REPLACE_PKT_FILTER_IN_TFT:
      {
         /* Check if same precedence exists */
	 if(tcm_is_same_epi(sib_id, tft->pf[0].pfi, tft->pf[0].epi) == KAL_TRUE)
	   return KAL_FALSE;

	 /* Add or replace tft_under_mod list */
	 if(replace_in_use == KAL_TRUE)
	 {
	    if(sib_ptr->tft_opcode != NO_OP_TFT &&
	       sib_ptr->tft_opcode != tft_opcode)
	       return KAL_FALSE;
		
	    tcm_add_packet_filter(&(sib_ptr->tft_under_mod.filter_list_ptr), tft);					
	 }
	 else
	 {							
	    if(sib_ptr->tft_opcode == ADD_PKT_FILTER_TO_TFT)
    	    {
	       tft_opcode = ADD_PKT_FILTER_TO_TFT;
            }
			
	    tcm_replace_packet_filter(&(sib_ptr->tft_under_mod.filter_list_ptr), tft);
         }
			
	 break;
      }

      case DELETE_EXISTING_TFT:
      {
         /* Check opcode */
	 if(sib_ptr->tft_opcode != NO_OP_TFT)
	    return KAL_FALSE;
			
	 /* Check if one PDP context without TFT*/
	 if(tcm_check_without_tft(pri_context_id) == KAL_TRUE)
	    return KAL_FALSE;

	 /* Free tft_under_mod list */
	 tcm_free_list(sib_ptr->tft_under_mod.filter_list_ptr);
	 sib_ptr->tft_under_mod.filter_list_ptr = NULL;
		
         break;
      }

      default: 
      {
          break ;
      }
   }		

   /* Update TFT opcode */
   sib_ptr->tft_opcode = tft_opcode;

   /* Update modify type */
   tcm_set_tft_mod(sib_ptr);

   return KAL_TRUE;
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   return KAL_FALSE;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


kal_bool tcm_set_tft_info_local( kal_uint8 sib_id, l4c_tft_struct *tft, tft_opcode_enum tft_opcode )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   SESSION_INFO_PTR	        sib_ptr;
   //kal_uint8			filter_num;
	
   kal_brief_trace(TRACE_GROUP_2, TCM_SET_TFT_INFO_LOCAL, sib_id, tft_opcode);
	
   /* Get session info block pointer */
   sib_ptr = tcm_get_sib_ptr(sib_id);

   /* Do actions by tft opcode */
   switch (tft_opcode)
   {			
      case ADD_PKT_FILTER_TO_TFT:
      {
         /* Check if same precedence exists */
         /* Poying: 
          *     - If the below returns TRUE, 
          *       it means that there is already one packet filter with the same epi in TCM. 
          *     - Thus we cannot accept the incoming TFT definition.
          */
	 if(tcm_is_same_epi(sib_id, tft->pf[0].pfi, tft->pf[0].epi) == KAL_TRUE)
	    return KAL_FALSE;

	 /* Add packet filter to under_mod list */
	 tcm_add_packet_filter(&(sib_ptr->tft_under_mod.filter_list_ptr), tft);

	 /* Update TFT opcode */
	 sib_ptr->tft_opcode = CREATE_NEW_TFT;

	 break;
      }
      
      case REPLACE_PKT_FILTER_IN_TFT:
      {
         /* Check if same precedence exists */
	 if(tcm_is_same_epi(sib_id, tft->pf[0].pfi, tft->pf[0].epi) == KAL_TRUE)
	    return KAL_FALSE;

	 /* Replace under_mod list */
	 tcm_replace_packet_filter(&(sib_ptr->tft_under_mod.filter_list_ptr), tft);

	 /* Update TFT opcode */
	 sib_ptr->tft_opcode = CREATE_NEW_TFT;
	
	 break;
      }
      
      case DELETE_EXISTING_TFT:
      {
         /* Delete under_mod list */
	 tcm_free_list(sib_ptr->tft_under_mod.filter_list_ptr);
	 sib_ptr->tft_under_mod.filter_list_ptr = NULL;

	 /* Update TFT opcode */
	 sib_ptr->tft_opcode = NO_OP_TFT;

	 break;
      }

      default: 
      {
          break ;
      }
   }	

   /* Update modify type */
   if(sib_ptr->tft_opcode != NO_OP_TFT)
   {
      tcm_set_tft_mod(sib_ptr);
   }
	
   return KAL_TRUE;
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   return KAL_FALSE;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


kal_bool tcm_check_without_tft( kal_uint8 primary_context_id )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   SESSION_INFO_PTR si_db_ptr = NULL;
   tcm_sib_usage_enum sib_free;
   kal_uint8 indx;

   for (indx = 0; indx < TCM_TOT_EXT_CONTEXT; indx++)
   {
      /* Check whether the SIB is currently in use */
      tcm_is_sib_free( indx, &sib_free );
      si_db_ptr = tcm_get_sib_ptr(indx);
      
      if ( (sib_free == TCM_SIB_IN_USE) &&
           (TCM_PTR(cntxt_flag[indx]) == TCM_CNTXT_VALID) &&
           (si_db_ptr->main_state == TCM_CONTEXT_ACTIVE_STATE))
      {        
         /* Check if the tft_in_use is empty */
         if( ((si_db_ptr->context_type == PRIMARY_CONTEXT) &&
              (si_db_ptr->context_id == primary_context_id)) ||
             ((si_db_ptr->context_type == SECONDARY_CONTEXT) && 
              (si_db_ptr->primary_context_id == primary_context_id)))
	 {
            if(si_db_ptr->tft_in_use.filter_list_ptr == NULL)
	       return KAL_TRUE;
	 }
      }
   }

   return KAL_FALSE;      
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   return KAL_TRUE;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


void tcm_set_tft_mod( SESSION_INFO_PTR sib_ptr )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   switch (sib_ptr->mod_type)
   {
      case REQ_QOS_MOD:
      {
         sib_ptr->mod_type = TFT_REQ_QOS_MOD;
    	 break;
      }

      default:
      {
         sib_ptr->mod_type = TFT_MOD;
    	 break;
      }		
   }	
   kal_brief_trace(TRACE_GROUP_2, TCM_SET_TFT_MOD, sib_ptr->mod_type);
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


tft_opcode_enum tcm_get_tft_opcode( SESSION_INFO_PTR sib_ptr, l4c_tft_struct *tft, kal_bool *replace_in_use )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    kal_brief_trace(TRACE_GROUP_2, TCM_GET_TFT_OPCODE);
   if(tft->tot_pf_count == 0)
   {
      return DELETE_EXISTING_TFT;
   }
   else if(tcm_check_pfi_exist(tft->pf[0].pfi, 
           sib_ptr->tft_in_use.filter_list_ptr) == KAL_TRUE)
   {
      *replace_in_use = KAL_TRUE;
      return REPLACE_PKT_FILTER_IN_TFT;
   }
   else if(tcm_check_pfi_exist(tft->pf[0].pfi, 
	   sib_ptr->tft_under_mod.filter_list_ptr) == KAL_TRUE)
   {
      *replace_in_use = KAL_FALSE;
      return REPLACE_PKT_FILTER_IN_TFT;
   }
   else
   {			
      return ADD_PKT_FILTER_TO_TFT;
   }	
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   DEBUG_ASSERT(0);
   return NO_OP_TFT;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


/* Check whether pfi is present already in filter list or not */
kal_bool tcm_check_pfi_exist( kal_uint8 pfi, tcm_packet_filter_struct *tft_ptr )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   while (tft_ptr != NULL )
   {
      if (tft_ptr->pkt_filter.pfi == pfi)   
      {
          kal_brief_trace(TRACE_GROUP_2, TCM_CHECK_PFI_EXIST, KAL_TRUE);
          return KAL_TRUE;
      }
      tft_ptr = tft_ptr->next_ptr;  
   }
   kal_brief_trace(TRACE_GROUP_2, TCM_CHECK_PFI_EXIST, KAL_FALSE); 
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__      
   return KAL_FALSE;
}


kal_uint8 tcm_get_primary_context_id( SESSION_INFO_PTR sib_ptr )
{	
    kal_uint8 prim_cid;
   if(sib_ptr->context_type == SECONDARY_CONTEXT)
      prim_cid = sib_ptr->primary_context_id;
   else
      prim_cid = sib_ptr->context_id;	
  
   kal_brief_trace(TRACE_GROUP_2, TCM_GET_PRIMARY_CID, prim_cid);
   return prim_cid;
}


void tcm_get_tft_info( SESSION_INFO_PTR sib_ptr, l4c_tft_struct *tft )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   kal_uint8				  context_id;

   /* Reset tft struct except context_id */
   context_id = tft->context_id;
   kal_mem_set((kal_uint8 *)tft,
                (kal_uint32)0,
                (kal_uint32)sizeof(l4c_tft_struct));
   tft->context_id = context_id;

   kal_brief_trace(TRACE_GROUP_2, TCM_GET_TFT_INFO, context_id);

   if(sib_ptr->tft_in_use.filter_list_ptr != NULL)
   {
      /* Do actions by tft opcode */
      switch (sib_ptr->tft_opcode)
      {			
         case ADD_PKT_FILTER_TO_TFT:
         {
	    tcm_fill_tft(sib_ptr->tft_in_use.filter_list_ptr, tft);
	    tcm_fill_tft(sib_ptr->tft_under_mod.filter_list_ptr, tft);
	    break;
         }
	 
         case REPLACE_PKT_FILTER_IN_TFT:
	 {
            tcm_fill_tft_replace(sib_ptr->tft_in_use.filter_list_ptr,
            sib_ptr->tft_under_mod.filter_list_ptr, tft);

	    tcm_fill_tft(sib_ptr->tft_under_mod.filter_list_ptr, tft);
	    break;
         }
	
 	 case DELETE_EXISTING_TFT:
	 {			
	    break;
	 }
	
         default:
	 {
	    tcm_fill_tft(sib_ptr->tft_in_use.filter_list_ptr, tft);
	    break;
	 }		
      }
   }
   else
   {
      tcm_fill_tft(sib_ptr->tft_under_mod.filter_list_ptr, tft);
   }
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


void tcm_fill_tft( tcm_packet_filter_struct *tft_ptr, l4c_tft_struct *tft )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    kal_brief_trace(TRACE_GROUP_2, TCM_FILL_TFT);       
   while (tft_ptr != NULL)
   {
      tcm_fill_packet_filter(tft_ptr, tft, tft->tot_pf_count);	  
      tft_ptr = tft_ptr->next_ptr;
   	  
      tft->tot_pf_count++;
   }
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


void tcm_fill_tft_replace( tcm_packet_filter_struct *use_ptr, tcm_packet_filter_struct *mod_ptr, l4c_tft_struct *tft )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   tcm_packet_filter_struct *curr_ptr;
   kal_brief_trace(TRACE_GROUP_2, TCM_FILL_TFT_REPLACE);       
	
   while (use_ptr != NULL)
   {
      curr_ptr = mod_ptr;
      while (curr_ptr != NULL)
      {
         if (use_ptr->pkt_filter.pfi == curr_ptr->pkt_filter.pfi)
	    break;
			
         curr_ptr = curr_ptr->next_ptr;
      }

      if (curr_ptr == NULL)
      {
         tcm_fill_packet_filter(use_ptr, tft, tft->tot_pf_count);
         tft->tot_pf_count++;
      }
	
      use_ptr = use_ptr->next_ptr;
   }
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


/** Copy TCM's context to L4C. */
void tcm_fill_packet_filter( tcm_packet_filter_struct *tft_ptr, l4c_tft_struct *tft, kal_uint8 index )
{   
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__

    kal_brief_trace(TRACE_GROUP_2, TCM_FILL_PACKET_FILTER);

    if (tft_ptr != NULL)
    {
        /* Poying: Most fields can be copied directly. */
        kal_mem_cpy(&(tft->pf[index]), &(tft_ptr->pkt_filter), sizeof(l4c_pf_struct)) ;

        /* Poying: Handle the packet filter identifier (1-8), as the original handling (below). */
        tft->pf[index].pfi = tft_ptr->pkt_filter.pfi + 1;
    }

   /* Poying: Original handlings. */
   #if 0 
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
   
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


/** Fill-in content of packet filter list according to tft_under_mod in sib. */
kal_bool tcm_pack_tft( tft_opcode_enum opcode, tft_struct *tft_ptr, SESSION_INFO_PTR si_db_ptr )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    kal_uint8                len;
    kal_uint8                flt_nos;
    tcm_packet_filter_struct *tcm_pf_ptr = NULL;
    l4c_pf_struct            *pf_ptr = NULL ;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM, MMI_FN_ENTER_TCM_PACK_TFT_SUBOP );

    tft_ptr->tft_op_code = opcode;/* Fill up the tft opcode field */
    tft_ptr->spare = 0;    /* Fill up the spare field to zero */

    flt_nos = 0; /* Initialize the filter nos counter to zero */
    /* Point to the head of the filter list. */
    tcm_pf_ptr = si_db_ptr->tft_under_mod.filter_list_ptr;
    pf_ptr = &(tcm_pf_ptr->pkt_filter) ;

    while ( tcm_pf_ptr != NULL )
    {
       if(!(tcm_pf_ptr->type == PF_TYPE_ONE || tcm_pf_ptr->type == PF_TYPE_TWO || tcm_pf_ptr->type == PF_TYPE_THREE))
       {
          DEBUG_ASSERT(0);
                  //"Incorrect PF type" );
          continue;
       }
      
      len = 0;

      if ( pf_ptr->src_addr_sb_net_mask_len != 0 )
      {
	//ASSERT(pf_ptr->src_addr_sb_net_mask_len == 8); //__APP_SECONDARY_PDP_SUPPORT__
	
        /* Add the packet filter component type for the source address
         * component. It could be either IPV4 or IPV6.
         */

        if (pf_ptr->src_addr_sb_net_mask_len == 8)          /* IPV4_ADDR_TYPE */
        {
            tft_ptr->packet_list[flt_nos].contents[len++] = PF_IPV4_SRC_ADDR_TYPE;
        }
        #if (defined(__IPV4V6__) || defined (__IPV6__))
        else if (pf_ptr->src_addr_sb_net_mask_len == 32)    /* IPV6_ADDR_TYPE */
        {
            tft_ptr->packet_list[flt_nos].contents[len++] = PF_IPV6_SRC_ADDR_TYPE;
        }
        #endif /* (defined(__IPV4V6__) || defined (__IPV6__)) */
        else
        {
            ASSERT(0); 
        }

        #if 0
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

        /* Pack the source address and subnet mask into the content
         * field.
         */
        kal_mem_cpy
        ( (kal_uint8 *)&tft_ptr->packet_list[flt_nos].contents[len],
          (kal_uint8 *)pf_ptr->src_addr_sb_net_mask,
          pf_ptr->src_addr_sb_net_mask_len );
          
        len += pf_ptr->src_addr_sb_net_mask_len; /* Increase the len
                                                  * variable.
                                                  */ 
      }

     /* Modified by: CH_Liang 2005.07.13
      * Description: revise the pack mechanism for R99 feature
      */          
      switch ( tcm_pf_ptr->type )
      {
        case PF_TYPE_ONE :
        {
          kal_uint8 indx;

          if ( pf_ptr->prot_number_present == KAL_TRUE )
          {
            /* Protocol id and next header component is added */
            tft_ptr->packet_list[flt_nos].contents[len++] =
                                          PF_PROT_ID_NEXT_HDR_TYPE;
            /* Pack the protocol number/next header */
            tft_ptr->packet_list[flt_nos].contents[len++] =
                                (kal_uint8)pf_ptr->prot_number_next_hdr;
          }

          if ( pf_ptr->dst_port_len  != 0 )
          {
            /* If port range is identical, use SINGLE_DST_PORT_TYPE */
	    if ( pf_ptr->dst_port_len == 2)
	    {
	    	if (pf_ptr->dst_port_range[0] == pf_ptr->dst_port_range[1])
		{ pf_ptr->dst_port_len = 1; }
	    }
		  
            /* Destination port range type component is added */
	    if ( pf_ptr->dst_port_len == 1)
	    {
	       tft_ptr->packet_list[flt_nos].contents[len++] =
                                 PF_SINGLE_DST_PORT_TYPE;
	    }
	    else
            {
               tft_ptr->packet_list[flt_nos].contents[len++] =
                                 PF_DST_PORT_RANGE_TYPE;
	    }

            ASSERT(pf_ptr->dst_port_len <= 2) ;

            /* Pack the destination port range */
            for(indx = 0; indx < pf_ptr->dst_port_len; indx++)
            {
               kal_int16 val = pf_ptr->dst_port_range[indx];

		#if 1 /* mtk00714: 20080306, change coding order */

               ASSERT(len < PACKET_FILTER_CONTENT_LEN); // check for contents[] size

	       tft_ptr->packet_list[flt_nos].contents[len++] = (val >> 8);

               ASSERT(len < PACKET_FILTER_CONTENT_LEN); // check for contents[] size

	       tft_ptr->packet_list[flt_nos].contents[len++] = (val & mask(8));
		#else
/* under construction !*/
/* under construction !*/
		#endif
            }
          }

          if ( pf_ptr->src_port_len != 0 )
          {
            /* If port range is identical, use SINGLE_SRC_PORT_TYPE */
	    if ( pf_ptr->src_port_len == 2)
	    {
	    	if (pf_ptr->src_port_range[0] == pf_ptr->src_port_range[1])
		{ pf_ptr->src_port_len = 1; }
	    }
		  
            /* Source port range type component is added */
	    if ( pf_ptr->src_port_len == 1)
	    {
	       tft_ptr->packet_list[flt_nos].contents[len++] =
                                 PF_SINGLE_SRC_PORT_TYPE;
	    }
	    else
	    {
               tft_ptr->packet_list[flt_nos].contents[len++] =
                                 PF_SRC_PORT_RANGE_TYPE;
	    }

            ASSERT(pf_ptr->src_port_len <= 2) ;

            /* Pack the source port range */ 
            for(indx = 0; indx < pf_ptr->src_port_len; indx++)
            {
              kal_uint16 val = pf_ptr->src_port_range[indx];

		#if 1 /* mtk00714: 20080306, change coding order */
	      tft_ptr->packet_list[flt_nos].contents[len++] = (val >> 8);
	      tft_ptr->packet_list[flt_nos].contents[len++] = (val & mask(8));
		#else
/* under construction !*/
/* under construction !*/
		#endif
            }
          }

          if ( pf_ptr->tos_len != 0 )
          {
            /* Tos and traffic class type component is added */
            tft_ptr->packet_list[flt_nos].contents[len++] =
                                PF_TYPE_OF_SERV_TRAFFIC_CLASS_TYPE;
            /* Pack the TOS and traffic class and mask */ 
            kal_mem_cpy
            ( (kal_uint8 *)
              &tft_ptr->packet_list[flt_nos].contents[len],
              (kal_uint8 *)pf_ptr->tos_traffic_class_mask,
              TOS_TRAF_CLASS_MASK_LEN );

            len += TOS_TRAF_CLASS_MASK_LEN;
          }

          break;
        }

        case PF_TYPE_TWO :
        {
          if ( pf_ptr->prot_number_present == KAL_TRUE )               
          {
            /* Protocol id and next header type component is added */
            tft_ptr->packet_list[flt_nos].contents[len++] =
                                          PF_PROT_ID_NEXT_HDR_TYPE;
            /* Pack the protocol number/next header */
            tft_ptr->packet_list[flt_nos].contents[len++] =
                                (kal_uint8)pf_ptr->prot_number_next_hdr;
          }

          if ( pf_ptr->ipsec_spi_present == KAL_TRUE )               
          {
            kal_int32 val = pf_ptr->ipsec_spi;

            /* Security param index type component is added */
            tft_ptr->packet_list[flt_nos].contents[len++] =
                                          PF_SECURITY_PARAM_INDX_TYPE;
            /* Pack the IP Sec SPI */ 
	    tft_ptr->packet_list[flt_nos].contents[len++] = (val & mask(8));
	    tft_ptr->packet_list[flt_nos].contents[len++] = (val >> 8);
	    tft_ptr->packet_list[flt_nos].contents[len++] = (val >> 16);
	    tft_ptr->packet_list[flt_nos].contents[len++] = (val >> 24);
          }

          if ( pf_ptr->tos_len != 0 )
          {
            /* Tos and traffic class type component is been added */
            tft_ptr->packet_list[flt_nos].contents[len++] =
                                PF_TYPE_OF_SERV_TRAFFIC_CLASS_TYPE;
            /* Pack the TOS and traffic class and mask */ 
            kal_mem_cpy
            ( (kal_uint8 *)
              &tft_ptr->packet_list[flt_nos].contents[len],
              (kal_uint8 *)pf_ptr->tos_traffic_class_mask,
              TOS_TRAF_CLASS_MASK_LEN );

            len += TOS_TRAF_CLASS_MASK_LEN;
          }

          break;
        }

        case PF_TYPE_THREE :
        {
          if ( pf_ptr->tos_len != 0 )
          {
            /* Tos and traffic class type component is added */
            tft_ptr->packet_list[flt_nos].contents[len++] =
                                PF_TYPE_OF_SERV_TRAFFIC_CLASS_TYPE;
            /* Pack the TOS and traffic class and mask */ 
            kal_mem_cpy
            ( (kal_uint8 *)
              &tft_ptr->packet_list[flt_nos].contents[len],
              (kal_uint8 *)pf_ptr->tos_traffic_class_mask,
              TOS_TRAF_CLASS_MASK_LEN );

            len += TOS_TRAF_CLASS_MASK_LEN;
          }

          if ( pf_ptr->flow_label_present == KAL_TRUE )
          {
            kal_uint32 val = pf_ptr->flow_label;

            /* Flow label type component is been added */
            tft_ptr->packet_list[flt_nos].contents[len++] =
                                          PF_FLOW_LABEL_TYPE;
            /* Pack the flow label (IPv6) */ 
	    tft_ptr->packet_list[flt_nos].contents[len++] = (val & mask(8));
	    tft_ptr->packet_list[flt_nos].contents[len++] = (val >> 8);
	    tft_ptr->packet_list[flt_nos].contents[len++] = (val >> 16);
          }

          break;
        }

        default:
        {
          break;
        }
      } /* End switch */
      /* End of Modification, 2005.07.13. Reviewed by: Joseph */ 

      /* Poying: check for contents[] size. 
       * - Note that len can equal to PACKET_FILTER_CONTENT_LEN 
       *   since there is an increment after each operation.
       */
      ASSERT(len <= PACKET_FILTER_CONTENT_LEN) ; 

      tft_ptr->packet_list[flt_nos].contents_len = len;/* Fill the
                                                        * contents_len
                                                        * field
                                                        */
      tft_ptr->packet_list[flt_nos].pfi = pf_ptr->pfi;/* Fill the pfi
                                                       * field.
                                                       */
      tft_ptr->packet_list[flt_nos].epi = pf_ptr->epi;/* Fill the epi
                                                       * field.
                                                       */

      flt_nos++;
      tcm_pf_ptr = tcm_pf_ptr->next_ptr;/* Get the next filter in the list */
    }

    tft_ptr->num_packet_filters = flt_nos;/* Fill the total number of
                                           * filters in the TFT,
                                           * field.
                                           */
    // TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_PACK_TFT_SUBOP );

    return( KAL_TRUE );
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    return KAL_FALSE;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
kal_bool tcm_is_same_epi( kal_uint8 current_sib_id, kal_uint8 pfi, kal_uint8 epi )
{
   SESSION_INFO_PTR			sib_ptr = NULL;	
   kal_uint8               	        sib_id;
   kal_uint8			        temp_pfi;
   kal_uint8			        pri_context_id;
   tcm_sib_usage_enum 		        sib_free;

	
   sib_ptr = tcm_get_sib_ptr(current_sib_id);
   pri_context_id = tcm_get_primary_context_id(sib_ptr);
	
   for (sib_id = 0; sib_id < TCM_TOT_EXT_CONTEXT; sib_id++)
   {
      /* Check whether the SIB is currently in use */
      tcm_is_sib_free( sib_id, &sib_free );
      sib_ptr = tcm_get_sib_ptr(sib_id);
      
      if (sib_free == TCM_SIB_IDLE)
      {
         continue;
      }
       
      /* Check all the packet filters associated to the same primary */
      if( (sib_ptr->context_id == pri_context_id) ||
          ((sib_ptr->context_type == SECONDARY_CONTEXT) && 
           (sib_ptr->primary_context_id == pri_context_id))) 
      {
         if ( (tcm_check_epi_exist(epi, sib_ptr->tft_in_use.filter_list_ptr, 
	  	     	           &temp_pfi) == KAL_TRUE) ||
	      (tcm_check_epi_exist(epi, sib_ptr->tft_under_mod.filter_list_ptr, 
	  	  	           &temp_pfi) == KAL_TRUE) )
    	 {
    	    if ( (sib_id == current_sib_id && temp_pfi != pfi) ||
    	         (sib_id != current_sib_id) )
    	    {
    	       return KAL_TRUE;
    	    }	
    	 }
      }
   }       

   return KAL_FALSE;      
}


/* Check whether epi is present already in filter list or not */
kal_bool tcm_check_epi_exist( kal_uint8 epi, tcm_packet_filter_struct *tft_ptr, kal_uint8 *pfi )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
   while (tft_ptr != NULL )
   {
      if (tft_ptr->pkt_filter.epi == epi)
      {
         *pfi = tft_ptr->pkt_filter.pfi;
         kal_brief_trace(TRACE_GROUP_2, TCM_CHECK_EPI_EXIST, KAL_TRUE);       
         return KAL_TRUE;
      }
          
      tft_ptr = tft_ptr->next_ptr;  
   }
   kal_brief_trace(TRACE_GROUP_2, TCM_CHECK_EPI_EXIST, KAL_FALSE);    
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__   
   return KAL_FALSE;
}

#endif /* __TURN_ON_GENERAL_SECONDARY_PDP__ */




