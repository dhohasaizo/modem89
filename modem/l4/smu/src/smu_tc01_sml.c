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
 * smu_tc01_sml.c
 *
 * Project:
 * --------
 *
 * Description:
 * ------------
 *   This file is the main function to handle LGE SIM-ME Lock
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/* KAL - RTOS Abstraction Layer */
//#include "kal_release.h"
#include "kal_general_types.h"
#include "drv_msgid.h"

/* Task Message Communication */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h"    /* local/peer struct */
#include "kal_public_api.h"

/* Buffer Management */
//#include "app_buff_alloc.h"     

/* Timer Management  */
#include "stacklib.h"
#include "event_shed.h"       	/* Event scheduler */
#include "stack_timer.h"

/* Task Management */
#include "syscomp_config.h"     
#include "task_config.h"   

/* L4C/SMU header */
#include "ps2sim_struct.h"
#include "smu_common_enums.h"

#include "ps2sat_struct.h"
//#include "common_nvram_editor_data_item.h"
#include "custom_nvram_extra.h"
#include "smu_def.h"

#include "l4c2smu_struct.h"
#include "csmss_common_enums.h"
#include "rmmi_common_enum.h"

#include "kal_trace.h"
//#include "kal_debug.h"
#include "smu_trc.h"
#include "sim_ps_api.h"

#if defined(__GEMINI__) && defined(__SIM_ME_LOCK__)
#include "l4c_common_enum.h"
#endif

#if defined(__CUSTOMER_TC01_DISK__) && !defined(WISDOM_MMI)

/* LGE header */
#include "lge_fw_factory_data.h"

extern void smu_send_security_cnf(smu_security_type_enum type, kal_uint8 remaining_count, kal_uint8 src_id, l4c2smu_res_enum res, kal_uint16 rmmi_error_cause);
extern void smu_mmrr_ready_ind_handler(ilm_struct * smu_ilm_ptr);
extern void smu_send_ilm(module_type dest_id, sap_type sap_id, kal_uint16 msg_id, void * local_param_ptr, void * peer_buf_ptr);


#define TC01_SML_SIZE_OF_CAT_N (LGE_FAC_NC_MCC_LEN+LGE_FAC_NC_MNC_LEN)
#define TC01_SML_SIZE_OF_CAT_SP (LGE_FAC_NC_MCC_LEN+LGE_FAC_NC_MNC_LEN +LGE_FAC_NC_GID1_LEN)
#define TC01_SML_SIZE_OF_CAT_NS (LGE_FAC_NC_MCC_LEN+LGE_FAC_NC_MNC_LEN +LGE_FAC_NC_SUBSET_LEN)
#define TC01_SML_SIZE_OF_CAT_C (LGE_FAC_NC_MCC_LEN+LGE_FAC_NC_MNC_LEN +LGE_FAC_NC_GID1_LEN+LGE_FAC_NC_GID2_LEN)


/*******************************************************************************
 * FUNCTION  
 *  smu_tc01_sml_Catcode
 * DESCRIPTION
 *  This function is used to check if the code is in the Pass list
 * PARAMETERS
 *  IN          cat
 *  IN          *code
 * RETURN
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
kal_uint8 smu_tc01_sml_Catcode(kal_uint8 cat, kal_uint8 *code)
{
    kal_uint8 mnc_len;
    kal_uint8 i = 0, j = 0;
    kal_uint8 temp_gid1[LGE_FAC_NC_GID1_LEN] = {0x0F}; //not BCD
    kal_uint8 temp_gid2[LGE_FAC_NC_GID2_LEN] = {0x0F}; //not BCD
    
    //kal_trace(TRACE_FUNC, SMU_TC01_SML_CATCODE);	

#if 0
#ifdef __GEMINI__
/* under construction !*/
#endif 
#endif

    mnc_len = 3;

    if(mnc_len == 3)
    {
        code[0] = (this_smu->imsi[1] & 0xF0) >> 4; //mcc1
        code[1] = (this_smu->imsi[2] & 0x0F);         //mcc2
        code[2] = (this_smu->imsi[2] & 0xF0) >> 4; //mcc1 
        code[3] = (this_smu->imsi[3] & 0x0F);         //mnc1        
        code[4] = (this_smu->imsi[3] & 0xF0) >> 4; //mnc2
        code[5] = (this_smu->imsi[4] & 0x0F);         //mnc3
        code[6] = (this_smu->imsi[4] & 0xF0) >> 4; //subset1
        code[7] = (this_smu->imsi[5] & 0x0F);         //subset2
    }
    else
    {
        code[0] = (this_smu->imsi[1] & 0xF0) >> 4; //mcc1
        code[1] = (this_smu->imsi[2] & 0x0F);         //mcc2
        code[2] = (this_smu->imsi[2] & 0xF0) >> 4; //mcc1 
        code[3] = (this_smu->imsi[3] & 0x0F);         //mnc1        
        code[4] = (this_smu->imsi[3] & 0xF0) >> 4; //mnc2
        code[5] = 0x0F;         
        code[6] = (this_smu->imsi[4] & 0x0F);         //subset1
        code[7] = (this_smu->imsi[4] & 0xF0) >> 4; //subset2		
    }

    switch(cat)
    {
        
        case LGE_FAC_SLTYPE_MASK_NETWORK: //mcc+mnc
  
            return TC01_SML_SIZE_OF_CAT_N;

        case LGE_FAC_SLTYPE_MASK_NETWORK_SUBSET: //mcc+mnc+subset

            return TC01_SML_SIZE_OF_CAT_NS;

        case LGE_FAC_SLTYPE_MASK_SERVICE_PROVIDER: //mcc+mnc+gid1

            if (this_smu->sim_security_info.is_valid_gid1)
            {
		  for (i=0,j=0; i<4; i++, j=j+2)
		  {
		      temp_gid1[j] = (this_smu->sim_security_info.gid1[i] & 0xF0) >> 4;
		      temp_gid1[j+1] = (this_smu->sim_security_info.gid1[i] & 0x0F);
		  }

                kal_mem_cpy(&(code[6]), &(temp_gid1[0]), LGE_FAC_NC_GID1_LEN); //6 = (LGE_FAC_NC_MCC_LEN+LGE_FAC_NC_MNC_LEN)

                return TC01_SML_SIZE_OF_CAT_SP;

            }            
            
        break;
        
        case LGE_FAC_SLTYPE_MASK_COOPERATE: //mcc+mnc+gid1+gid2

            if(this_smu->sim_security_info.is_valid_gid1 && this_smu->sim_security_info.is_valid_gid2)
            {

		  for (i=0,j=0; i<4; i++, j=j+2)
		  {
		      temp_gid1[j] = (this_smu->sim_security_info.gid1[i] & 0xF0) >> 4;
		      temp_gid1[j+1] = (this_smu->sim_security_info.gid1[i] & 0x0F);
		  }          

                kal_mem_cpy(&(code[6]), (&temp_gid1[0]), LGE_FAC_NC_GID1_LEN);

		  for (i=0,j=0; i<4; i++, j=j+2)
		  {
		      temp_gid2[j] = (this_smu->sim_security_info.gid2[i] & 0xF0) >> 4;
		      temp_gid2[j+1] = (this_smu->sim_security_info.gid2[i] & 0x0F);
		  }       
                
                kal_mem_cpy(&(code[14]), (&temp_gid2[0]), LGE_FAC_NC_GID2_LEN); //14 = (LGE_FAC_NC_MCC_LEN+LGE_FAC_NC_MNC_LEN+LGE_FAC_NC_GID1_LEN)

                return TC01_SML_SIZE_OF_CAT_C;

            }

        break;

        default:
            
        break;
        
    }           

    return 0;
    
}


/*******************************************************************************
 * FUNCTION  
 *  smu_tc01_sml_Check
 * DESCRIPTION
 *  This function is used to check if the code is in the Pass list
 * PARAMETERS
 *  IN          cat
 *  IN          *code
 *  IN          len
 * RETURN
 *  kal_bool KAL_TRUE mean check pass; KAL_FALSE mean check fail
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
kal_bool smu_tc01_sml_Check( kal_uint8 cat, kal_uint8 *code, kal_uint8 len)
{
    kal_uint8 idx = 0;
    kal_bool result = KAL_FALSE;

    kal_uint8 sltype = 0;
    FactoryNetworkCode ntcode[LGE_FAC_MAX_NETWORK_CODE_LIST_NUM] = {0x0F};
    kal_uint16 ntcode_num = 0;

    //kal_trace(TRACE_FUNC, SMU_TC01_SML_CHECK);	    

    if(KAL_TRUE == LGE_FacReadSimLockType(&sltype))
    {    
        if((cat & sltype) != cat) //disable
        {
            return KAL_TRUE;
        }
    }
    else
    {
	 kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x01, 0);
        return KAL_FALSE;
    }

    if (KAL_FALSE == LGE_FacReadNetworkCodeListNum(&ntcode_num))
    {
	 kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x02, 0);
        return KAL_FALSE;    
    }

    if (KAL_FALSE == LGE_FacReadNetworkCode(ntcode, ntcode_num))
    {
	 kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x03, 0);    
        return KAL_FALSE;
    }    

    switch(cat)
    {
        case LGE_FAC_SLTYPE_MASK_NETWORK:

            if(TC01_SML_SIZE_OF_CAT_N == len)
            {
                      
                for(idx = 0; idx < ntcode_num; idx++)
                {
                    kal_uint8 check_mncLength = LGE_FAC_NC_MNC_LEN;

                    if (ntcode[idx].Mnc[2] == 0x0f)
                    {
                        check_mncLength = 2;
                    }
                
                    if((kal_mem_cmp(code,(ntcode[idx].Mcc),LGE_FAC_NC_MCC_LEN)==0)
                        && (kal_mem_cmp(&(code[LGE_FAC_NC_MCC_LEN]),(ntcode[idx].Mnc),check_mncLength)==0))                         
                    {
                    
                        result = KAL_TRUE; //match
                        
                        break;    

                    }
                    
                }

            }
                    
        break;

        case LGE_FAC_SLTYPE_MASK_NETWORK_SUBSET:
            
            if(TC01_SML_SIZE_OF_CAT_NS == len)
            {

                for(idx = 0; idx < ntcode_num; idx++)
                {
                    kal_uint8 check_mncLength = LGE_FAC_NC_MNC_LEN;

                    if (ntcode[idx].Mnc[2] == 0x0f)
                    {
                        check_mncLength = 2;
                    }
                
                    if((kal_mem_cmp(code,(ntcode[idx].Mcc),LGE_FAC_NC_MCC_LEN)==0)
                        && (kal_mem_cmp(&(code[LGE_FAC_NC_MCC_LEN]),(ntcode[idx].Mnc),check_mncLength)==0))
                    {

                        if((ntcode[idx].Subset[0] == 0x0F) && (ntcode[idx].Subset[1] != 0x0F)) //just compare the digit not 0x0F
                        {
                            if(code[LGE_FAC_NC_MCC_LEN+check_mncLength+1] == ntcode[idx].Subset[1])                                 
                            {
                                result = KAL_TRUE; //match
                                break;
                            }
                        }
                        else if((ntcode[idx].Subset[0] != 0x0F) &&(ntcode[idx].Subset[1]== 0x0F))
                        {
                            if(code[LGE_FAC_NC_MCC_LEN+check_mncLength] == ntcode[idx].Subset[0])                                 
                            {
                                result = KAL_TRUE; //match
                                break;
                            }
                        }        
                        else if((ntcode[idx].Subset[0] == 0x0F) &&(ntcode[idx].Subset[1]== 0x0F)) //both = 0x0F, then pass without comparison
                        {
                            result = KAL_TRUE; //match
                            break;
                        }
                        else
                        {
                            if(kal_mem_cmp(&(code[LGE_FAC_NC_MCC_LEN+check_mncLength]),\
                                (ntcode[idx].Subset),LGE_FAC_NC_SUBSET_LEN)==0)
                            {
                                result = KAL_TRUE; //match
                                break;
                            }
                        }                    

                    }
                    
                }

            }

        break;   

        case LGE_FAC_SLTYPE_MASK_SERVICE_PROVIDER:
            
            if(TC01_SML_SIZE_OF_CAT_SP == len)
            {

                for(idx = 0; idx < ntcode_num; idx++)
                {     
                    kal_uint8 check_mncLength = LGE_FAC_NC_MNC_LEN;

                    if (ntcode[idx].Mnc[2] == 0x0f)
                    {
                        check_mncLength = 2;
                    }
                
                    if((kal_mem_cmp(code,(ntcode[idx].Mcc),LGE_FAC_NC_MCC_LEN)==0)
                        && (kal_mem_cmp(&(code[LGE_FAC_NC_MCC_LEN]),(ntcode[idx].Mnc),check_mncLength)==0)
                        && (kal_mem_cmp(&(code[LGE_FAC_NC_MCC_LEN+LGE_FAC_NC_MNC_LEN]),(ntcode[idx].Gid1),LGE_FAC_NC_GID1_LEN)==0)) 
                    {

                        result = KAL_TRUE; //match

                        break;

                    }
                    
                }

            }

        break;        

        case LGE_FAC_SLTYPE_MASK_COOPERATE:
            
            if(TC01_SML_SIZE_OF_CAT_C == len)
            {

                for(idx = 0; idx < ntcode_num; idx++)
                {    
                    kal_uint8 check_mncLength = LGE_FAC_NC_MNC_LEN;

                    if (ntcode[idx].Mnc[2] == 0x0f)
                    {
                        check_mncLength = 2;
                    }
                
                    if((kal_mem_cmp(code,(ntcode[idx].Mcc),LGE_FAC_NC_MCC_LEN)==0)
                    && (kal_mem_cmp(&(code[LGE_FAC_NC_MCC_LEN]),(ntcode[idx].Mnc),check_mncLength)==0)
                    && (kal_mem_cmp(&(code[LGE_FAC_NC_MCC_LEN+LGE_FAC_NC_MNC_LEN]),(ntcode[idx].Gid1),LGE_FAC_NC_GID1_LEN)==0)
                    && (kal_mem_cmp(&(code[LGE_FAC_NC_MCC_LEN+LGE_FAC_NC_MNC_LEN+LGE_FAC_NC_GID1_LEN]),(ntcode[idx].Gid2),LGE_FAC_NC_GID2_LEN)==0)) 
                    {

                        result = KAL_TRUE; //match

                        break;

                    }
                    
                }

            }

        break;            
        
        default:
            
        break;
        
    }           
    
    return result;
    
}

/*******************************************************************************
 * FUNCTION  
 *  smu_tc01_check_sml
 * DESCRIPTION
 *  This function is used to check if the code is in the Pass list
 * PARAMETERS
 *  IN          cat
 *  IN          *code
 *  IN          len
 * RETURN
 *  kal_bool KAL_TRUE mean check pass; KAL_FALSE mean check fail
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
kal_bool smu_tc01_check_sml(kal_uint8 src_id)
{
    kal_uint8 test_sim1[3] = {0x45, 0x00, 0x0F};
    kal_uint8 test_sim2[3] = {0x00, 0x10, 0x1F};
    kal_uint8 test[3] = {0};
    kal_bool is_sml_match = KAL_FALSE;   
    kal_uint8 cat = 0, len = 0; 
    kal_uint8 code[LGE_FAC_NETWORK_CODE_LEN] = {0x0F};	

    //kal_trace(TRACE_FUNC, SMU_TC01_CHECK_SML);

    test[0] = (this_smu->imsi[1] & 0xF0) | (this_smu->imsi[2] & 0x0F);
    test[1] = (this_smu->imsi[2] & 0xF0) | (this_smu->imsi[3] & 0x0F);
    test[2] = (this_smu->imsi[3] & 0xF0) | 0x0F;

    if ((0 == kal_mem_cmp(test, test_sim1, 3)) || (0 == kal_mem_cmp(test, test_sim2, 3)))
    {
    	 //kal_print("SML: By-Pass TEST SIM");
    	 kal_brief_trace(TRACE_INFO, INFO_SML_BY_PASS_TEST_SIM);
    }
    else
#if defined(__GEMINI__) && defined(__SIM_ME_LOCK__)
    if (src_id != L4C_SRC) //link_SML
#endif
    {
        for(cat = LGE_FAC_SLTYPE_MASK_NETWORK; cat <= LGE_FAC_SLTYPE_MASK_COOPERATE; cat = cat<<1)
        { 
      	     if ((cat << 1) & this_smu->security_status)
      	     {    // the cat has input correct unlock key
      	 	    continue;
      	     }
    	
            len = smu_tc01_sml_Catcode(cat, code);
    
            is_sml_match = smu_tc01_sml_Check(cat, code, len);
    
            if (is_sml_match != KAL_TRUE)
            {
    	         kal_uint8 retry_count, failCount;
    
    	         if (KAL_FALSE == LGE_FacReadUnlockFailCount(cat, &failCount))
    	         {
		      kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x04, 0);   
    	             failCount = LGE_FAC_MAX_UNLOCK_CODE_VERIFY_FAIL_COUNT;
    	         }
                retry_count = LGE_FAC_MAX_UNLOCK_CODE_VERIFY_FAIL_COUNT - failCount;
    
                kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x10, cat);
    
                switch (cat)
                {
                    case LGE_FAC_SLTYPE_MASK_NETWORK:
	    			if (retry_count == 0)
	    			{
	    			    this_smu->pending_password_id=ID_PH_NET_PUK;
	     	                  smu_send_security_cnf(TYPE_NP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_NW_PERSON_PUK_REQUIRED);
	    			}
	    			else
	    			{
	    			    this_smu->pending_password_id=ID_PH_NET_PIN;		
	     	                  smu_send_security_cnf(TYPE_NP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_NW_PERSON_PIN_REQUIRED);				
	    			}
	    			break;
                    case LGE_FAC_SLTYPE_MASK_NETWORK_SUBSET:
	    			if (retry_count == 0)
	    			{
	    			    this_smu->pending_password_id=ID_PH_NETSUB_PUK;
	     	                  smu_send_security_cnf(TYPE_NSP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_NW_SUB_PERSON_PUK_REQUIRED);				
	    			}
	    			else
	    			{
	    			    this_smu->pending_password_id=ID_PH_NETSUB_PIN;				
	     	                  smu_send_security_cnf(TYPE_NSP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_NW_SUB_PERSON_PIN_REQUIRED);						
	    			}			
	    			break;
                    case LGE_FAC_SLTYPE_MASK_SERVICE_PROVIDER:
	    			if (retry_count == 0)
	    			{
	    			    this_smu->pending_password_id=ID_PH_SP_PUK;
	     	                  smu_send_security_cnf(TYPE_SP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_SP_PERSON_PUK_REQUIRED);						
	    			}
	    			else
	    			{
	    			    this_smu->pending_password_id=ID_PH_SP_PIN;				
	     	                  smu_send_security_cnf(TYPE_SP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_SP_PERSON_PIN_REQUIRED);						
	    			}			
	    			break;
                    case LGE_FAC_SLTYPE_MASK_COOPERATE:
	    			if (retry_count == 0)
	    			{
	    			    this_smu->pending_password_id=ID_PH_CORP_PUK;	
	     	                  smu_send_security_cnf(TYPE_CP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_CORP_PERSON_PUK_REQUIRED);						
	    			}
	    			else
	    			{
	    			    this_smu->pending_password_id=ID_PH_CORP_PIN;				
	     	                  smu_send_security_cnf(TYPE_CP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_CORP_PERSON_PIN_REQUIRED);				
	    			}			
	    			break;			
                    default:
	    			ASSERT(0);
	    			break;			
                }
    			
                return KAL_FALSE;
            }
        }
    }

    smu_send_security_cnf(TYPE_NO_REQUIRED,0xFF,src_id,SMU_RES_OK, RMMI_NO_ERR);
    this_smu->is_personalization_done = KAL_TRUE;
    this_smu->pending_password_id = ID_READY;

    if (this_smu->is_mmrr_ready_ind_recv == KAL_TRUE)
    {
        smu_mmrr_ready_ind_handler(NULL);
    }	

    return KAL_TRUE;
}


/*******************************************************************************
 * FUNCTION  
 *  smu_tc01_sml_Verify
 * DESCRIPTION
 *  This function is used to check if the key is correct
 * PARAMETERS
 *  IN          cat
 *  IN          *code
 * RETURN
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
void smu_tc01_sml_Verify(kal_uint8 src_id, smu_security_type_enum type, kal_uint8 *inkey)
{
    kal_uint8 i,j;
    kal_bool is_match;
    kal_uint8 simLockType=0;
    kal_uint8 key[16];

    //kal_trace(TRACE_FUNC, SMU_TC01_SML_VERIFY);

#if defined(__GEMINI__) && defined(__SIM_ME_LOCK__)
    if (src_id == L4C_SRC)
    {
        /* link_SML Super Unlock */
        this_smu->security_status |= (simLockType << 1);	// has verified unlock key
	    this_smu->pending_password_id = ID_SIM_BUSY;
	    smu_tc01_check_sml(src_id);
        return;
    }
#endif

    switch(type)
    {
	case TYPE_NP:
		simLockType = LGE_FAC_SLTYPE_MASK_NETWORK;
		break;
	case TYPE_NSP:
		simLockType = LGE_FAC_SLTYPE_MASK_NETWORK_SUBSET;		
		break;
	case TYPE_SP:
		simLockType = LGE_FAC_SLTYPE_MASK_SERVICE_PROVIDER;				
		break;
	case TYPE_CP:
		simLockType = LGE_FAC_SLTYPE_MASK_COOPERATE;						
		break;
	default:
		ASSERT(0);
		break;
    }

    // inkey is BCD
    for (i=0,j=0; i<8; i++,j=j+2)
    {
        key[j] = (inkey[i] & 0x0F);
        key[j+1] = (inkey[i] & 0xF0) >> 4;		
    }

    if (KAL_TRUE == LGE_FacVerifyUnlockCode(simLockType, key, &is_match))
    {
        if (is_match != KAL_TRUE)
        {
	     kal_uint8 retry_count, failCount;

	     if (KAL_FALSE == LGE_FacReadUnlockFailCount(simLockType, &failCount))
	     {
        	  kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x06, simLockType);
	         failCount = LGE_FAC_MAX_UNLOCK_CODE_VERIFY_FAIL_COUNT;
	     }
	     else
	     {
	         failCount++;	     
	     }
		 
	     if (KAL_FALSE == LGE_FacWriteUnlockFailCount(simLockType, failCount, KAL_TRUE))
	     {
        	  kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x07, simLockType);	     
	     }		 
            retry_count = LGE_FAC_MAX_UNLOCK_CODE_VERIFY_FAIL_COUNT - failCount;

            kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x20, simLockType);

            switch (simLockType)
            {
                case LGE_FAC_SLTYPE_MASK_NETWORK:
			if (retry_count == 0)
			{
			    this_smu->pending_password_id=ID_PH_NET_PUK;
 	                  smu_send_security_cnf(TYPE_NP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_NW_PERSON_PUK_REQUIRED);
			}
			else
			{
			    this_smu->pending_password_id=ID_PH_NET_PIN;		
 	                  smu_send_security_cnf(TYPE_NP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_NW_PERSON_PIN_REQUIRED);				
			}
			break;
                case LGE_FAC_SLTYPE_MASK_NETWORK_SUBSET:
			if (retry_count == 0)
			{
			    this_smu->pending_password_id=ID_PH_NETSUB_PUK;
 	                  smu_send_security_cnf(TYPE_NSP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_NW_SUB_PERSON_PUK_REQUIRED);				
			}
			else
			{
			    this_smu->pending_password_id=ID_PH_NETSUB_PIN;				
 	                  smu_send_security_cnf(TYPE_NSP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_NW_SUB_PERSON_PIN_REQUIRED);						
			}			
			break;
                case LGE_FAC_SLTYPE_MASK_SERVICE_PROVIDER:
			if (retry_count == 0)
			{
			    this_smu->pending_password_id=ID_PH_SP_PUK;
 	                  smu_send_security_cnf(TYPE_SP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_SP_PERSON_PUK_REQUIRED);						
			}
			else
			{
			    this_smu->pending_password_id=ID_PH_SP_PIN;				
 	                  smu_send_security_cnf(TYPE_SP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_SP_PERSON_PIN_REQUIRED);						
			}			
			break;
                case LGE_FAC_SLTYPE_MASK_COOPERATE:
			if (retry_count == 0)
			{
			    this_smu->pending_password_id=ID_PH_CORP_PUK;	
 	                  smu_send_security_cnf(TYPE_CP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_CORP_PERSON_PUK_REQUIRED);						
			}
			else
			{
			    this_smu->pending_password_id=ID_PH_CORP_PIN;				
 	                  smu_send_security_cnf(TYPE_CP, retry_count, src_id, SMU_RES_OK, RMMI_ERR_CORP_PERSON_PIN_REQUIRED);				
			}			
			break;			
                default:
			ASSERT(0);
			break;			
            }			
        }
        else
        {
      	    if (KAL_FALSE == LGE_FacWriteUnlockFailCount(simLockType, 0, KAL_TRUE))
      	    {
            	  kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x08, simLockType);	       	    
      	    }

    	    this_smu->security_status |= (simLockType << 1);	// has verified unlock key
    	    this_smu->pending_password_id = ID_SIM_BUSY;
    	    smu_tc01_check_sml(src_id);
    	}
    }     
    else
    {
        kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x05, simLockType);
    }

}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_tc01_set_personalization_req_handler
 * DESCRIPTION
 *  This function is to set personalization data and depersonalization key to
 *  flash.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_tc01_set_personalization_req_handler(ilm_struct *smu_ilm_ptr)
{
    kal_uint8 i,j;
    l4csmu_set_personalization_req_struct *l4csmu_set_sml_req_ptr = NULL;
    l4csmu_set_personalization_cnf_struct *l4csmu_set_sml_cnf_ptr = NULL;
    kal_uint16 length = 0;
    kal_bool is_match;
    kal_uint8 simLockType=0;	
    kal_uint8 key[SML_MAX_SUPPORT_KEY_LEN*2];	
    kal_uint8 retry_count, failCount;
    kal_uint8 sltype = 0;
    sml_state_enum state;
    kal_uint16 ntcode_num=0;

    //kal_trace(TRACE_FUNC, SMU_TC01_SET_PERSONALIZATION_REQ_HDLR);
	   
    l4csmu_set_sml_req_ptr = (l4csmu_set_personalization_req_struct*)get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);	

    l4csmu_set_sml_cnf_ptr = (l4csmu_set_personalization_cnf_struct*)construct_local_para(sizeof(l4csmu_set_personalization_cnf_struct), TD_RESET);

    l4csmu_set_sml_cnf_ptr->src_id = l4csmu_set_sml_req_ptr->src_id;
    l4csmu_set_sml_cnf_ptr->result = KAL_FALSE;
    l4csmu_set_sml_cnf_ptr->category = l4csmu_set_sml_req_ptr->category;
    l4csmu_set_sml_cnf_ptr->op = l4csmu_set_sml_req_ptr->op;

    if (KAL_FALSE == LGE_FacReadNetworkCodeListNum(&ntcode_num))
    {
      	kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x09, l4csmu_set_sml_req_ptr->category);
	    ntcode_num = 0;
    }	
    l4csmu_set_sml_cnf_ptr->num_of_sets = ntcode_num; 
    l4csmu_set_sml_cnf_ptr->space_of_sets = LGE_FAC_MAX_NETWORK_CODE_LIST_NUM - ntcode_num;

    switch(l4csmu_set_sml_req_ptr->category)
    {
	case SML_CAT_N:
		simLockType = LGE_FAC_SLTYPE_MASK_NETWORK;
		break;
	case SML_CAT_NS:
		simLockType = LGE_FAC_SLTYPE_MASK_NETWORK_SUBSET;
		break;
	case SML_CAT_SP:
		simLockType = LGE_FAC_SLTYPE_MASK_SERVICE_PROVIDER;		
		break;
	case SML_CAT_C:
		simLockType = LGE_FAC_SLTYPE_MASK_COOPERATE;		
		break;
	default:
		ASSERT(0);
		break;
    }

    if (KAL_FALSE == LGE_FacReadUnlockFailCount(simLockType, &failCount))
    {
      	 kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x0a, simLockType);
	 failCount = LGE_FAC_MAX_UNLOCK_CODE_VERIFY_FAIL_COUNT;
    }
    retry_count = LGE_FAC_MAX_UNLOCK_CODE_VERIFY_FAIL_COUNT - failCount;

    if (KAL_FALSE == LGE_FacReadSimLockType(&sltype))
    {
      	 kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x0b, 0);
	 sltype = 0;
    }
   
    if((simLockType & sltype) != simLockType) //disable
    {
        state = SML_STATE_UNLOCK;
    }
    else
    {
        state = SML_STATE_LOCK;    
    }

    if (l4csmu_set_sml_req_ptr->op!=SML_OP_UNLOCK || state==SML_STATE_UNLOCK ||retry_count==0)
    {
        l4csmu_set_sml_cnf_ptr->retry_count = retry_count;
	    l4csmu_set_sml_cnf_ptr->state = state;
        smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SET_PERSONALIZATION_CNF, l4csmu_set_sml_cnf_ptr, NULL);
	    return;
    }

    for (i=0,j=0; i<SML_MAX_SUPPORT_KEY_LEN; i++,j=j+2)
    {
        key[j] = (l4csmu_set_sml_req_ptr->key[i] & 0x0F);
        key[j+1] = (l4csmu_set_sml_req_ptr->key[i] & 0xF0) >> 4;		
    }

    if (KAL_FALSE == LGE_FacVerifyUnlockCode(simLockType, key, &is_match))
    {
      	 kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x0c, simLockType);
	    is_match = KAL_FALSE;
    }

    if (is_match != KAL_TRUE)
    {
        failCount++;
	    l4csmu_set_sml_cnf_ptr->state = SML_STATE_LOCK;
        kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x30, simLockType);	 
    }
    else
    {
        failCount = 0;
        sltype = sltype & (~simLockType);
        if (KAL_FALSE == LGE_FacWriteSimLockType(sltype, KAL_TRUE))
        {
            kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x0d, sltype);	 
        }
        l4csmu_set_sml_cnf_ptr->result = KAL_TRUE;
        l4csmu_set_sml_cnf_ptr->state = SML_STATE_UNLOCK;
    }

    if (KAL_FALSE == LGE_FacWriteUnlockFailCount(simLockType, failCount, KAL_TRUE))
    {
        kal_trace(TRACE_WARNING, SMU_TC01_WARNING, 0x0e, simLockType);
    }	
    retry_count = LGE_FAC_MAX_UNLOCK_CODE_VERIFY_FAIL_COUNT - failCount;	 		
    l4csmu_set_sml_cnf_ptr->retry_count = retry_count;

    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SET_PERSONALIZATION_CNF, l4csmu_set_sml_cnf_ptr, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_tc01_sml_status_req_handlers
 * DESCRIPTION
 *  This function is to query the SIM-ME-Lock state of all categories.
 * PARAMETERS
 *  smu_ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void l4csmu_tc01_sml_status_req_handler(ilm_struct *smu_ilm_ptr)
{
    l4csmu_sml_status_cnf_struct *sml_status_cnf_ptr = NULL;
    l4csmu_sml_status_req_struct *sml_status_req_ptr = NULL;
    sml_cat_enum cat = SML_CAT_N;
    kal_uint8 simLockType=0;
    kal_uint8 retry_count, failCount;
    kal_uint8 sltype = 0;
    sml_state_enum state;	
    kal_uint16 length = 0;
    kal_uint16 ntcode_num=0;

    //kal_trace(TRACE_FUNC, SMU_TC01_SML_STATUS_REQ_HDLR);

    sml_status_cnf_ptr = (l4csmu_sml_status_cnf_struct*) construct_local_para(sizeof(l4csmu_sml_status_cnf_struct), TD_CTRL);

    sml_status_req_ptr = (l4csmu_sml_status_req_struct*) get_local_para_ptr(smu_ilm_ptr->local_para_ptr, &length);

    sml_status_cnf_ptr->src_id = sml_status_req_ptr->src_id;

    kal_mem_cpy(&(sml_status_cnf_ptr->ef_imsi[0]), &(this_smu->imsi[1]), 8);

    sml_status_cnf_ptr->is_valid_gid1 = this_smu->sim_security_info.is_valid_gid1;
    sml_status_cnf_ptr->is_valid_gid2 = this_smu->sim_security_info.is_valid_gid2;
    sml_status_cnf_ptr->ef_gid1 = this_smu->sim_security_info.gid1[0];
    sml_status_cnf_ptr->ef_gid2 = this_smu->sim_security_info.gid2[0];

    sml_status_cnf_ptr->digits_of_mnc = sim_query_mnc_num(SMU_SELECT_SIM(this_smu->smu_current_mod));

    LGE_FacReadNetworkCodeListNum(&ntcode_num);

    for (cat = SML_CAT_N; cat < SML_CAT_SIZE; cat++)
    {
	 sml_status_cnf_ptr->state[cat] = SML_STATE_DISABLE;
	 sml_status_cnf_ptr->retry_count[cat] = 0;    
	 sml_status_cnf_ptr->autolock_count[cat] = 0;
	 sml_status_cnf_ptr->key_state[cat] = SML_KEY_SET;
	 sml_status_cnf_ptr->num_of_sets[cat] = ntcode_num; 
	 sml_status_cnf_ptr->total_size_of_cat[cat] = LGE_FAC_MAX_NETWORK_CODE_LIST_NUM; 
    }

    LGE_FacReadSimLockType(&sltype);

    for (cat = SML_CAT_N; cat < SML_CAT_SIM; cat++)
    {
        switch(cat)
        {
	    	case SML_CAT_N:
	    		simLockType = LGE_FAC_SLTYPE_MASK_NETWORK;
	    		break;
	    	case SML_CAT_NS:
	    		simLockType = LGE_FAC_SLTYPE_MASK_NETWORK_SUBSET;
	    		break;
	    	case SML_CAT_SP:
	    		simLockType = LGE_FAC_SLTYPE_MASK_SERVICE_PROVIDER;		
	    		break;
	    	case SML_CAT_C:
	    		simLockType = LGE_FAC_SLTYPE_MASK_COOPERATE;		
	    		break;
	    	default:
	    		ASSERT(0);
	    		break;
        }
	
        LGE_FacReadUnlockFailCount(simLockType, &failCount);
        retry_count = LGE_FAC_MAX_UNLOCK_CODE_VERIFY_FAIL_COUNT - failCount;
    
        if((simLockType & sltype) != simLockType) //disable
        {
            state = SML_STATE_UNLOCK;
        }
        else
        {
            state = SML_STATE_LOCK;    
        }

	 sml_status_cnf_ptr->state[cat] = state;
	 sml_status_cnf_ptr->retry_count[cat] = retry_count;
    }

    smu_send_ilm(MOD_L4C, SMU_L4C_SAP, MSG_ID_L4CSMU_SML_STATUS_CNF, sml_status_cnf_ptr, NULL);
}

#endif  /* __TC01__ */

