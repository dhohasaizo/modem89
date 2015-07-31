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
 * TCM_QOS_API.C
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

#include "tcm_qos_api.h"

/* kals. */
#include "kal_general_types.h"

/* enums. */
#include "mmi_l3_enums.h"
#include "ps_public_enum.h"
#include "l3_inc_enums.h"

/* structs. */
#include "mcd_l3_inc_gprs_struct.h"
#include "ps_public_struct.h"

/* prototypes. */
#include "custom_gprs_pdp_value_check.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"


void tcm_qos_extend( qos_struct *qos, kal_uint8 pdp_addr_type_enum_value, tcm_qos_type_enum qos_type )
{

        kal_bool need_to_do_R98_to_R99;
        kal_bool need_to_do_R99_to_R98;

        qos->qos_length = SM_CORRECT_QOS_LEN;

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_QOS_EXTEND, pdp_addr_type_enum_value, qos_type);

    need_to_do_R98_to_R99 = tcm_qos_check_if_need_to_do_R98_to_R99(qos, qos_type);
    need_to_do_R99_to_R98 = tcm_qos_check_if_need_to_do_R99_to_R98(qos, qos_type);

    if(
               (KAL_FALSE == need_to_do_R98_to_R99)
          &&(KAL_FALSE == need_to_do_R99_to_R98)
        )
    {
        // R98 part has some value, R99 part has some value
        // There is no need to do extension
    }
    else if(
                      (KAL_TRUE == need_to_do_R98_to_R99)
                 &&(KAL_TRUE == need_to_do_R99_to_R98)
               )
    {
        // R98 part all zero/default value, R99 part all zero/default value
        // There is no need to do extension
    }
    else if(
                      (KAL_TRUE == need_to_do_R98_to_R99)
                 &&(KAL_FALSE == need_to_do_R99_to_R98)
               )
    {
        // need to extend from R98 to R99
        tcm_qos_R98_to_R99(qos, pdp_addr_type_enum_value, qos_type);
    }
    else if(
                      (KAL_FALSE == need_to_do_R98_to_R99)
                 &&(KAL_TRUE == need_to_do_R99_to_R98)
               )
    {
        // need to extend from R99 to R98
        tcm_qos_R99_to_R98(qos, qos_type);
    }

}


kal_bool tcm_qos_check_if_need_to_do_R98_to_R99(qos_struct *s, tcm_qos_type_enum qos_type)
{

    kal_bool return_val;
    if(TCM_REQ_QOS == qos_type || TCM_MIN_QOS == qos_type)
    {
        if(
              (
                  KAL_TRUE == tcm_check_if_eqos_is_all_zero(s)
              )
              ||
              (
                  KAL_TRUE == custom_gprs_pdp_check_if_eqos_is_default_value(s, qos_type)
              )
           )
        {
            // if all the R99 values are 0 or are all default values, we need to convert R98 to R99
            return_val = KAL_TRUE;
        }
        else
        {
            return_val = KAL_FALSE;
        }
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
    else
    {
        return_val = KAL_FALSE;
        DEBUG_ASSERT(0);
    }

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_QOS_CHECK_IF_NEED_TO_DO_R98_TO_R99, return_val, qos_type);

    #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
    tcm_print_qos_content(s, KAL_FALSE, 0, (tcm_qos_type_enum)0);
    #endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)

    return return_val;

}


kal_bool tcm_qos_check_if_need_to_do_R99_to_R98(qos_struct *s, tcm_qos_type_enum qos_type)
{
      
    kal_bool return_val;
    if(TCM_REQ_QOS == qos_type || TCM_MIN_QOS == qos_type)
    {
        if(
              (
                  KAL_TRUE == tcm_check_if_qos_is_all_zero(s)
              )
              ||
              (
                  KAL_TRUE == custom_gprs_pdp_check_if_qos_is_default_value(s,qos_type)
              )
           )
        {
            // if all the R98 values are 0 or are all default values, we need to convert R99 to R98
            return_val = KAL_TRUE;
        }
        else
        {
            return_val = KAL_FALSE;
        }
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
    else
    {
        return_val = KAL_FALSE;
        DEBUG_ASSERT(0);
    }
    
    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_QOS_CHECK_IF_NEED_TO_DO_R99_TO_R98, return_val, qos_type);

    #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
    tcm_print_qos_content(s, KAL_FALSE, 0, (tcm_qos_type_enum)0);
    #endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)

    return return_val;

}


kal_bool tcm_check_if_eqos_is_all_zero(qos_struct * s)
{
    if(
               (0 == s->traffic_class) 
          && (0 == s->delivery_order) 
          && (0 == s->delivery_of_err_sdu) 
          && (0 == s->max_sdu_size) 
          && (0 == s->max_bitrate_up_lnk) 
          && (0 == s->max_bitrate_down_lnk) 
          && (0 == s->residual_bit_err_rate) 
          && (0 == s->sdu_err_ratio) 
          && (0 == s->transfer_delay) 
          && (0 == s->traffic_hndl_priority) 
          && (0 == s->guarntd_bit_rate_up_lnk) 
          && (0 == s->guarntd_bit_rate_down_lnk) 
          && (0 == s->signalling_indication) 
          && (0 == s->source_statistics_descriptor) 
          && (0 == s->ext_max_bitrate_down_lnk) 
          && (0 == s->ext_guarntd_bit_rate_down_lnk) 
          && (0 == s->ext_max_bitrate_up_lnk) 
          && (0 == s->ext_guarntd_bit_rate_up_lnk) 
    )
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}


kal_bool tcm_check_if_qos_is_all_zero(qos_struct * s)
{
    if(
               (0 == s->delay_class) 
          && (0 == s->reliability_class) 
          && (0 == s->peak_throughput) 
          && (0 == s->precedence_class) 
          && (0 == s->mean_throughput)
    )
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}


/** Extend R99 qos from R97/R98, according to 23.107 9.1.2.2. */
void tcm_qos_R98_to_R99(qos_struct *s, kal_uint8 pdp_addr_type_enum_value, tcm_qos_type_enum qos_type)
{    
        kal_brief_trace(TRACE_INFO, TCM_INFO_TCM_QOS_R98_TO_R99); // SM change feature: if R98 QoS fields already contain values, do not extend R99 field to overwrite R98

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
#endif // ~ #if 0

       if((KAL_TRUE == tcm_qos_check_if_need_to_do_R98_to_R99(s, qos_type)) /*|| (TCM_MIN_QOS == qos_type)*/)
       {
            
            /* Traffic class */
            if((s->delay_class >= 1)  && (s->delay_class <= 3))
            	s->traffic_class = 3;	//inactive class
            else if(s->delay_class == 4) 
            	s->traffic_class = 4;	//background class
            else 
            	s->traffic_class = 0;  //erica __R99_REVISION__
            
            /* Delivery order */
            /*
              * In 3GPP TS 23.107 Table 6 :
              * As the reordering required attribute is not available in the MS the 
              * MS should set the R99 delivery order attribute to the value "no" for PDP Type = "IPv4" or "IPv6", 
              * otherwise the MS shall set the delivery order attribute to the value "subscribed" (see TS 24.008 [6])
              */
            if(PPP_ADDR_TYPE== pdp_addr_type_enum_value)
            {   
                s->delivery_order = SUBSCRIBED_DELIVERY_ORDER;
            }
            else
            {
                s->delivery_order = WITHOUT_DELIVERY_ORDER;
            }
            
            /* Delivery of erroneous SDUs || Residual bit error ratio */
            if((s->reliability_class >= 1) && (s->reliability_class <= 4))
            {
            	s->delivery_of_err_sdu = 3;		//no
            	s->residual_bit_err_rate = 7;	//10^(-5)
            }
            else if(s->reliability_class == 5)
            {
               s->delivery_of_err_sdu = 2;		//yes
               s->residual_bit_err_rate = 4;	// 4*10^(-3)
            }
            else //erica __R99_REVISION__
            {
            	s->delivery_of_err_sdu = 0;		
            	s->residual_bit_err_rate = 0;	
            }
            
            /* Max SDU size */
            s->max_sdu_size = 0x96; 	// 1500
            
            /* Max bitrate */
            s->max_bitrate_up_lnk  = tcm_get_max_bitrate(s->peak_throughput);
            s->max_bitrate_down_lnk = s->max_bitrate_up_lnk;
            
            /* SDU error ratio */
            if((s->reliability_class >= 1) && (s->reliability_class <= 2))
            	s->sdu_err_ratio = 6;	//10^(-6)
            else if(s->reliability_class == 3)
            	s->sdu_err_ratio = 4;	//10^(-4)
            else if((s->reliability_class >= 4) && (s->reliability_class <= 5))
            	s->sdu_err_ratio = 3;	//10^(-3)
            else
            	s->sdu_err_ratio = 0; 	// erica __R99_REVISION__
            
            /* Traffic handling prioirity */
            if((s->delay_class >= 1)  && (s->delay_class <= 3))
            	s->traffic_hndl_priority = s->delay_class;
            else
            	s->traffic_hndl_priority = 0; //erica __R99_REVISION__, use subscirbed.
            
            /* Transfer delay */
            s->transfer_delay = 0; 
            
            /* Guaranted bitrate */
            s->guarntd_bit_rate_up_lnk = 0;
            s->guarntd_bit_rate_down_lnk = 0;
       }
    #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
    tcm_print_qos_content(s, KAL_FALSE, 0, (tcm_qos_type_enum)0);
    #endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
}


/** Extend R97/R98 qos from R99, according to 23.107 9.1.2.3. */
void tcm_qos_R99_to_R98(qos_struct *s, tcm_qos_type_enum qos_type)
{    
	kal_uint8 max_bitrate;

        kal_brief_trace(TRACE_INFO, TCM_INFO_TCM_QOS_R99_TO_R98); // SM change feature: if R98 QoS fields already contain values, do not extend R99 field to overwrite R98

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
#endif // ~ #if 0

        if(KAL_TRUE == tcm_qos_check_if_need_to_do_R99_to_R98(s, qos_type))
        {
	
            /* delay class */
            if ((s->traffic_class == 1) && (s->traffic_class == 2))
            s->delay_class = 1;
            else if ((s->traffic_class == 3) && (s->traffic_hndl_priority == 1))
            s->delay_class = 1;
            else if ((s->traffic_class == 3) && (s->traffic_hndl_priority == 2))
            s->delay_class = 2;
            else if ((s->traffic_class == 3) && (s->traffic_hndl_priority == 3))
            s->delay_class = 3;
            else if (s->traffic_class == 4)
            	s->delay_class = 4;
            else 
            	s->delay_class = 0;
            
            /* reliability class */
            if ((s->sdu_err_ratio >= 5) && (s->sdu_err_ratio <= 6))		//SDU error ratio
            s->reliability_class = 2;
            else if (s->sdu_err_ratio == 4) 	//SDU error ratio
            s->reliability_class = 3;
            else if ( ( ((s->sdu_err_ratio >= 1) && (s->sdu_err_ratio <=3)) || (s->sdu_err_ratio == 7))	//SDU error ratio
            		&& ((s->residual_bit_err_rate >= 6) && (s->residual_bit_err_rate <=9)) )		//residual bit error rate
            {
            s->reliability_class = 4;	
            }
            else if ( ( ((s->sdu_err_ratio >= 1) && (s->sdu_err_ratio <=3)) || (s->sdu_err_ratio == 7))	//SDU error ratio
            		&& ((s->residual_bit_err_rate >= 1) && (s->residual_bit_err_rate <=5)) )	//residual bit error rate
            {
            s->reliability_class = 5;	
            }
            else
            s->reliability_class = 0;	
            
            /* peak_throughput */    	
            if( (s->ext_max_bitrate_up_lnk>0) || (s->ext_max_bitrate_down_lnk>0) )
            {
                s->peak_throughput = 9; // since the bitrate must be >= 2048, so the peak_throughput is 9
            }
            else // (s->ext_max_bitrate_up_lnk==0) && (s->ext_max_bitrate_down_lnk==0)
            {
                // choose the higher value of uplink and downlink
                if (s->max_bitrate_up_lnk >= s->max_bitrate_down_lnk)   	
                max_bitrate = s->max_bitrate_up_lnk;
                else
                max_bitrate = s->max_bitrate_down_lnk;	
                
                if ((max_bitrate >= 0x01) && (max_bitrate < 0x10)) //(1 < x < 16)
                s->peak_throughput = 1;
                else if ((max_bitrate >= 0x10) && (max_bitrate < 0x20)) //16 <= x < 32
                s->peak_throughput = 2;
                else if ((max_bitrate >= 0x20) && (max_bitrate < 0x40)) //32 <= x < 64
                s->peak_throughput = 3;
                else if ((max_bitrate >= 0x40) && (max_bitrate < 0x48)) //64 <= x < (64 + (128-64)/8)
                s->peak_throughput = 4;
                else if ((max_bitrate >= 0x48) && (max_bitrate < 0x58)) //(64 + (128-64)/8) <= x < (64 + (256-64)/8)
                s->peak_throughput = 5;
                else if ((max_bitrate >= 0x58) && (max_bitrate < 0x78))//(64 + (256-64)/8) <= x < (64 + (512-64)/8)
                s->peak_throughput = 6;
                else if ((max_bitrate >= 0x78) && (max_bitrate < 0x87))//(64 + (512-64)/8) <= x < (128 + (1024-576)/64)
                s->peak_throughput = 7;
                else if ((max_bitrate >= 0x87) && (max_bitrate < 0x97))//(128 + (1024-576)/64) <= x < (128 + (2048-576)/64)
                s->peak_throughput = 8;
                else if (max_bitrate >= 0x97) // x >= (128 + (2048-576)/64)
                s->peak_throughput = 9;
                else
                s->peak_throughput = 0;
            }
            
            /* precedence class */
            s->precedence_class = 0; //subscribed class
            
            /* Mean throughput  */
            s->mean_throughput= 31; 	// Best Effort
        }
    #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
    tcm_print_qos_content(s, KAL_FALSE, 0, (tcm_qos_type_enum)0);
    #endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
}


/** Extend R99 qos max_bitrate from R97/R98 peak throughput, 
 *  according to 23.107 9.1.2.2 and 24.008 10.5.6.5. 
 */
kal_uint8 tcm_get_max_bitrate(kal_uint8 peak_throughput)
{
    kal_uint8 bitrate;
    if((peak_throughput >= 1) && (peak_throughput <= 3))
    {
       bitrate = 1 << (2 + peak_throughput);
    }
    else if((peak_throughput >= 4) && (peak_throughput <= 7))	
    {
       bitrate = 1 << (2 + peak_throughput);
       bitrate = 64 + (bitrate - 64) / 8;
    }
    else if((peak_throughput >= 8) && (peak_throughput <= 9))
    {
       bitrate = 1 << (2 + peak_throughput);
       bitrate = 128 + (bitrate - 576) / 64;
    }
    else
    { 
        bitrate = 0;        
    }

   return bitrate;
}


#ifdef __REL4__ // only print qos in high level product (> REL4)
/** Print R99 QoS Content. */ 
void tcm_print_eqos_content(l4c_eqos_struct * qos_p)
{
   kal_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_PRINT_EQOS_CONTENT,
                              qos_p->context_id, qos_p->qos_type, 
                              qos_p->traffic_class, qos_p->delivery_order, qos_p->delivery_of_err_sdu, qos_p->max_sdu_size, 
                              qos_p->max_bitrate_up_lnk, qos_p->max_bitrate_down_lnk, qos_p->residual_bit_err_rate, qos_p->sdu_err_ratio,
                              qos_p->transfer_delay, qos_p->traffic_hndl_priority, qos_p->guarntd_bit_rate_up_lnk, qos_p->guarntd_bit_rate_down_lnk,
                              qos_p->signalling_indication, qos_p->source_statistics_descriptor, 
                              qos_p->ext_max_bitrate_down_lnk, qos_p->ext_guarntd_bit_rate_down_lnk, qos_p->ext_max_bitrate_up_lnk, qos_p->ext_guarntd_bit_rate_up_lnk
                 );
}


/** Print R98&R99 QoS Content. */ 
void tcm_print_qos_content(qos_struct * qos_p, kal_bool print_context_id_and_qos_type, kal_uint8 context_id, tcm_qos_type_enum qos_type)
{
   if(KAL_TRUE == print_context_id_and_qos_type)
   {
       kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP,TCM_PDP_QOS_CONTEXT_ID, context_id);
       kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP,TCM_PDP_QOS_TYPE, qos_type);
   }

   kal_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_PRINT_QOS_CONTENT,
                              qos_p->qos_length, 
                              qos_p->delay_class, qos_p->reliability_class, qos_p->peak_throughput, qos_p->precedence_class, qos_p->mean_throughput,
                              qos_p->traffic_class, qos_p->delivery_order, qos_p->delivery_of_err_sdu, qos_p->max_sdu_size, 
                              qos_p->max_bitrate_up_lnk, qos_p->max_bitrate_down_lnk, qos_p->residual_bit_err_rate, qos_p->sdu_err_ratio,
                              qos_p->transfer_delay, qos_p->traffic_hndl_priority, qos_p->guarntd_bit_rate_up_lnk, qos_p->guarntd_bit_rate_down_lnk,
                              qos_p->signalling_indication, qos_p->source_statistics_descriptor, 
                              qos_p->ext_max_bitrate_down_lnk, qos_p->ext_guarntd_bit_rate_down_lnk, qos_p->ext_max_bitrate_up_lnk, qos_p->ext_guarntd_bit_rate_up_lnk
                 );

}
#endif /* __REL4__ */ 

