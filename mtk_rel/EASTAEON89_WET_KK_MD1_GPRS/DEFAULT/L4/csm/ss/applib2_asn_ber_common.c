/*******************************************************************************
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


#ifdef __AGPS_CONTROL_PLANE__

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "applib2_asn_memory.h"
#include "applib2_asn_common.h"
#include "applib2_mtkasn_global.h"
#include "applib2_asn_ber_common.h"


extern void pre_get_t( applib2_AsnContext *pContext, BER_TAG *p_t)
{
	BER_TLV tlv;
	 applib2_AsnContext TempContext = *pContext;

	get_tl(pContext, &tlv);

	*p_t = tlv.t;

	*pContext = TempContext;
}

extern void get_tl( applib2_AsnContext *pContext, BER_TLV *p_tlv)
{
	U8	temp, byte_num;

	/*
	 *  Get TAG
	 */
	
	/* get Tag's class & P/C */
	p_tlv->t.cl =  applib2_getShortBits(pContext, 2);
	p_tlv->t.is_primitive =  applib2_getShortBits(pContext, 1) == 0 ? TRUE : FALSE;	

	p_tlv->t.tag = 0;	
	p_tlv->t.tag =  applib2_getShortBits(pContext, 5);

	/* get Tag's value */
	if (p_tlv->t.tag == 0x1F)
	{
		p_tlv->t.tag = 0;
		temp		 = 0;
		byte_num	 = 0;

		/* tag's value is more than 31, use 7-bit present */
		do 
		{
			//ASSERT(byte_num < 4);
        if(byte_num>=4)
        {
            applib2_UA1_ERROR(17);
        }
		
			temp =  applib2_getShortBits(pContext, 8);
	
			p_tlv->t.tag <<= 7;				/* only 7-bits are used for value*/
			p_tlv->t.tag &=  0xFFFFFF80;	/* set low 7-bits to zero */
			p_tlv->t.tag |=  temp & 0x7F;			

			if ((temp & 0x80) == 0)	/* if the highest bit equals zero, it means over*/
				break;

			byte_num++;

		} while(1);	
	}

	/*
	 *  Get Length
	 */
	temp =  applib2_getShortBits(pContext, 8);
	p_tlv->l.length = 0;

	if (temp == 0x80)
	{
		p_tlv->l.is_defined = FALSE;	/* un-defined length mode */
	}
	else
	{
		p_tlv->l.is_defined = TRUE;	/* defined length mode */

		if ((temp & 0x80) == 0)
		{
			/* small length mode */
			p_tlv->l.length = temp;
		}
		else
		{
			/* huge length mode */
			temp &= 0x7F; /* the lower 7bits are indicate how many octets
							 are used to present length, we only support 4 octets at most*/	
			

			p_tlv->l.length =  applib2_getBits(pContext, temp*8);			
		}
	}
}

extern void get_v( applib2_AsnContext *pContext, BER_TLV *p_tlv)
{
	//ASSERT(p_tlv->l.is_defined);
	//ASSERT(p_tlv->t.is_primitive);
 if(!p_tlv->l.is_defined)
 {
     applib2_UA1_ERROR(18);
 }
 if(!p_tlv->t.is_primitive)
 {
     applib2_UA1_ERROR(19);
 }

	 applib2_getLongBits(pContext, p_tlv->l.length*8 ,p_tlv->v);
}

static void put_tl( applib2_AsnContext *pContext, BER_TLV *p_tlv)
{
	/*
	 *  put Type
	 */
	 applib2_putShortBits(pContext, 2, p_tlv->t.cl);
	 applib2_putShortBits(pContext, 1, p_tlv->t.is_primitive ?  0 : 1);
	
	/*
	 *  put tag's value
	 */
	if (p_tlv->t.tag < 31)
		 applib2_putShortBits(pContext, 5, p_tlv->t.tag);
	else
		 applib2_putShortBits(pContext, 5, 0x1F);

	if (p_tlv->t.tag >= 31)
	{
		/* tag's value is more than 31, use 7-bit present */

		/*   tag.t.tag 's max value can't bigger 2 ^ 28  */
		if (p_tlv->t.tag > 0x0FFFFFFF)
     {
			//ASSERT(0);
      	applib2_UA1_ERROR(20);
     }
		if (p_tlv->t.tag > 0x001FFFFF)
		{
			 applib2_putShortBits(pContext, 1, 1); 
			 applib2_putShortBits(pContext, 7, (p_tlv->t.tag >> 21) & 0x0000007F);
		}
		if (p_tlv->t.tag > 0x00003FFF)
		{
			 applib2_putShortBits(pContext, 1, 1); 
			 applib2_putShortBits(pContext, 7, (p_tlv->t.tag >> 14) & 0x0000007F);
		}
		if (p_tlv->t.tag > 0x0000007F)
		{
			 applib2_putShortBits(pContext, 1, 1); 
			 applib2_putShortBits(pContext, 7, (p_tlv->t.tag >> 7) & 0x0000007F);
		}

		/* last octet the highest bit will be set to 0 */
		 applib2_putShortBits(pContext, 1, 0); 
		 applib2_putShortBits(pContext, 7, p_tlv->t.tag & 0x0000007F);	
	}

	/*
	 *  put Length
	 */
	if (p_tlv->l.is_defined)
	{
		/* defined length mode */

		if (p_tlv->l.length <= 127 )
			 applib2_putShortBits(pContext, 8, p_tlv->l.length); 
		else 
		{
			 applib2_putShortBits(pContext, 1, 1); 

			/* set how many follows byte will be used for indicate */
			if (p_tlv->l.length > 0x00FFFFFF)
			{
				 applib2_putShortBits(pContext, 7, 4);
				 applib2_putShortBits(pContext, 8, (U8)((p_tlv->l.length)>>24));
				 applib2_putShortBits(pContext, 8, (U8)((p_tlv->l.length)>>16));
				 applib2_putShortBits(pContext, 8, (U8)((p_tlv->l.length)>>8));
				 applib2_putShortBits(pContext, 8, (U8)(p_tlv->l.length));
			}
			else if (p_tlv->l.length > 0x0000FFFF)
			{
				 applib2_putShortBits(pContext, 7, 3); 
				 applib2_putShortBits(pContext, 8, (U8)((p_tlv->l.length)>>16));
				 applib2_putShortBits(pContext, 8, (U8)((p_tlv->l.length)>>8));
				 applib2_putShortBits(pContext, 8, (U8)(p_tlv->l.length));
			}
			else if (p_tlv->l.length > 0x000000FF)
			{
				 applib2_putShortBits(pContext, 7, 2); 
				 applib2_putShortBits(pContext, 8, (U8)((p_tlv->l.length)>>8));
				 applib2_putShortBits(pContext, 8, (U8)(p_tlv->l.length));
			}
			else 
			{
				 applib2_putShortBits(pContext, 7, 1);
				 applib2_putShortBits(pContext, 8, (U8)(p_tlv->l.length) );
			}
		}		
	}
	else
	{
		/* un-defined length mode */
		 applib2_putShortBits(pContext, 8, 0x80); 
	}
}

extern void put_tlv( applib2_AsnContext *pContext, BER_TLV *p_tlv)
{
	put_tl(pContext, p_tlv);
	
	/*
	 *  put value
	 */
	 applib2_putLongBits(pContext, p_tlv->l.length*8, p_tlv->v);

	if (!p_tlv->l.is_defined)
		 applib2_putShortBits(pContext, 16, 0x0000); 
	
}

extern U32 ber_get_integer( applib2_AsnContext *pContext)
{
	BER_TLV tlv;
	 applib2_AsnContext	pTemp;

	get_tl(pContext, &tlv);

	 applib2_AsnDecodeAlloc(pContext, (void **)&tlv.v, tlv.l.length);

	pTemp = *pContext;

	get_v(pContext,  &tlv);

	//ASSERT(tlv.l.length <= 4);
	if(tlv.l.length>4)
 {
    applib2_UA1_ERROR(21);
 }

	if ( (tlv.v[0] & 0x80) == 0 )
	{
		U32	temp = 0;

		/* positive */
		if (tlv.v[0] == 0)	
		{
			*pContext = pTemp;	
			 applib2_getBits(pContext, 8);
			temp =  applib2_getBits(pContext, (tlv.l.length-1) * 8);

		}
		else
		{
			*pContext = pTemp;
			temp =  applib2_getBits(pContext, tlv.l.length * 8);		/* highest bit is zero*/
		}

		return temp;
	}
	else
	{
		S32	temp = 0;

		/* negative */
		*pContext = pTemp;
		temp =  applib2_getBits(pContext, tlv.l.length * 8);

		if (1 == tlv.l.length)
			temp |= 0xFFFFFF00;
		if (2 == tlv.l.length)
			temp |= 0xFFFF0000;
		if (3 == tlv.l.length)
			temp |= 0xFF000000;

		// applib2_asnMemCopy(pValue, &temp, tlv.l.length);
		return (U32)temp;
	}
}

extern void ber_put_unsigned_integer( applib2_AsnContext *pContext, U32 value, BER_TAG tag)
{
	BER_TLV tlv;
	AsnBool	is_add_zero = FALSE;
	U32		i=0;

	tlv.t = tag;
	
	if (Universal == tlv.t.cl)
		tlv.t.tag = 2;	/* correct value */

	tlv.t.is_primitive = TRUE;
	tlv.l.is_defined = TRUE;

	/* calculate value's length */
	if (value > 0x00FFFFFF)
		tlv.l.length = 4;
	else if (value > 0x0000FFFF)
		tlv.l.length = 3;
	else if (value > 0x000000FF)
		tlv.l.length = 2;
	else
		tlv.l.length = 1;

	/* if the height bit is 1, we need add a zero byte at head*/
	if (value & (0x00000080 << (tlv.l.length - 1) * 8))
	{
		is_add_zero = TRUE;
		tlv.l.length++;
	}

	tlv.v = NULL;
	applib2_AsnEncodeAlloc(pContext, (void **)&tlv.v, (U32 *)(&tlv.l.length) );

	if (is_add_zero)
		tlv.v[0] = 0x00;

	for ( i = is_add_zero ? 1 : 0; i< tlv.l.length; i++)
		tlv.v[i] = (value >> (tlv.l.length - i - 1) * 8) & 0x000000FF;

	put_tlv(pContext, &tlv);
	applib2_AsnEncodeFree(pContext->encodeAlloc, NULL); 
}


extern void ber_put_enum( applib2_AsnContext *pContext, U32 value, BER_TAG tag)
{
	BER_TLV tlv;
	AsnBool	is_add_zero = FALSE;
	U32		i=0;
	
	tlv.t = tag;
	
	if (Universal == tlv.t.cl)
		tlv.t.tag = 10;	/* correct value */
	
	tlv.t.is_primitive = TRUE;
	tlv.l.is_defined = TRUE;
	
	/* calculate value's length */
	if (value > 0x00FFFFFF)
		tlv.l.length = 4;
	else if (value > 0x0000FFFF)
		tlv.l.length = 3;
	else if (value > 0x000000FF)
		tlv.l.length = 2;
	else
		tlv.l.length = 1;
	
	/* if the height bit is 1, we need add a zero tyte at head*/
	if (value & (0x00000080 << (tlv.l.length - 1) * 8))
	{
		is_add_zero = TRUE;
		tlv.l.length++;
	}
	
	tlv.v = NULL;
	applib2_AsnEncodeAlloc(pContext, (void **)&tlv.v, (U32 *)(&tlv.l.length) );
	
	if (is_add_zero)
		tlv.v[0] = 0x00;
	
	for ( i = is_add_zero ? 1 : 0; i< tlv.l.length; i++)
		tlv.v[i] = (value >> (tlv.l.length - i - 1) * 8) & 0x000000FF;
	
	put_tlv(pContext, &tlv);
	applib2_AsnEncodeFree(pContext->encodeAlloc, NULL); 
}





extern void ber_put_signed_integer( applib2_AsnContext *pContext, S32 value, BER_TAG tag)
{
	BER_TLV tlv;
	U32		i=0;
	
	/* If value is positive, treat it as a unsigned integer */
	if (value >= 0)
		ber_put_unsigned_integer(pContext, (U32)value, tag);
	else
	{
		tlv.t = tag;

		if (Universal == tlv.t.cl)
			tlv.t.tag = 2;	/* correct value */

		tlv.t.is_primitive = TRUE;
		tlv.l.is_defined = TRUE;

		value = -value;
		
		/* calculate value's length */
		if (value > 0x00FFFFFF)
			tlv.l.length = 4;
		else if (value > 0x0000FFFF)
			tlv.l.length = 3;
		else if (value > 0x000000FF)
			tlv.l.length = 2;
		else
			tlv.l.length = 1;	

		value = ~value;
		value ++;
		
		tlv.v = NULL;
		applib2_AsnEncodeAlloc(pContext, (void **)&tlv.v, (U32 *)(&tlv.l.length) );
		
		for ( i = 0; i< tlv.l.length; i++)
			tlv.v[i] = (value >> (tlv.l.length - i - 1) * 8) & 0x000000FF;
		
		put_tlv(pContext, &tlv);
	    applib2_AsnEncodeFree(pContext->encodeAlloc, NULL); 
	}
}

extern U32 ber_get_bit_string( applib2_AsnContext *pContext, U8 ** pp_outputBuffer, U16 pbuf_len)
{
	BER_TLV	tlv;
	U32		temp=0;
	U8		tem_buf;

	get_tl(pContext, &tlv);
	
	if (tlv.t.is_primitive && tlv.l.is_defined)
	{
		 applib2_getLongBits(pContext, 8, &tem_buf);

		/* primitive mode */
		if (*pp_outputBuffer == NULL)
		{
			/* if user did't provided buffer, function will alloc enough buffer */
			 applib2_AsnDecodeAlloc(pContext, (void **)pp_outputBuffer, tlv.l.length-1);
		}
		else
		{
			/* If pValue is not Null, it's means user provide the buffer*/
			//ASSERT(pbuf_len >= tlv.l.length);
	        if(pbuf_len < tlv.l.length)
         {
             applib2_UA1_ERROR(22);
         }
		}
			
		temp = (tlv.l.length - 1) * 8 - (U8)(tem_buf);

		applib2_getLongBits(pContext, temp, *pp_outputBuffer);

		applib2_PER_CLEAR_ALIGN_BITS

		return temp;
	}
	else
	{
		/* constructed mode */	
		U32			total_len = 0;

		//ASSERT(*pp_outputBuffer != NULL);
		if(*pp_outputBuffer == NULL)
     {
         applib2_UA1_ERROR(23);
     }

		do 
		{
			get_tl(pContext, &tlv);
			
			if (tlv.t.tag == 0 && tlv.l.length == 0)
				break;	/* undefined length is end with 0x00 0x00 */

			 applib2_getLongBits(pContext, 8, &tem_buf);

			temp = (tlv.l.length - 1) * 8 - (U8)(tem_buf);

			 applib2_getLongBits(pContext, temp, (*pp_outputBuffer)+total_len);

			total_len += (temp+7)/8;

			//ASSERT(total_len <= pbuf_len);
         if(total_len > pbuf_len)
         {
             applib2_UA1_ERROR(24);
         }

		} while(1);

		return (total_len*8 + temp);
	}
}

/*add ber_get_bit_string1 for @set REF_ALL_INDIRECT=0, and pp_outputBuffer should be an array*/
extern U32 ber_get_bit_string1( applib2_AsnContext *pContext, U8 pp_outputBuffer[], U16 pbuf_len)
{
	BER_TLV	tlv;
	U32		temp=0;
	U8		tem_buf;

	get_tl(pContext, &tlv);
	
	if (tlv.t.is_primitive && tlv.l.is_defined)
	{
		applib2_getLongBits(pContext, 8, &tem_buf);

		//ASSERT(pbuf_len >= tlv.l.length-1);
     if(pbuf_len < tlv.l.length-1)
     {
         applib2_UA1_ERROR(25);
     }
		
		temp = (tlv.l.length - 1) * 8 - (U8)(tem_buf);

		applib2_getLongBits(pContext, temp, pp_outputBuffer);

		applib2_PER_CLEAR_ALIGN_BITS

		return temp;
	}
	else
	{
		/* constructed mode */	
		U32	 total_len = 0;

		do 
		{
			get_tl(pContext, &tlv);
			
			if (tlv.t.tag == 0 && tlv.l.length == 0)
				break;	/* undefined length is end with 0x00 0x00 */

			applib2_getLongBits(pContext, 8, &tem_buf);

			temp = (tlv.l.length - 1) * 8 - (U8)(tem_buf);

			applib2_getLongBits(pContext, temp, (pp_outputBuffer+total_len) );

			total_len += (temp+7)/8;

			//ASSERT(total_len <= pbuf_len);
         if(total_len > pbuf_len)
         {
             applib2_UA1_ERROR(26);
         }

		} while(1);

		return (total_len*8 + temp);
	}
}

extern void ber_put_bit_string( applib2_AsnContext *pContext, U8 * p_outputBuffer, U16 pbuf_len, BER_TAG tag)
{
	BER_TLV	tlv;

	tlv.t = tag;
	
	if (Universal == tlv.t.cl)
		tlv.t.tag = 3;	/* correct value */

	tlv.t.is_primitive = TRUE;
		
	tlv.l.length = (pbuf_len+7)/8 + 1;
	tlv.l.is_defined = TRUE;

	/* Un-support constructed mode for bit string */
	

	put_tl(pContext, &tlv);


	 applib2_putShortBits(pContext, 8, pbuf_len%8 == 0 ? 0 : 8-pbuf_len%8);

	 applib2_putLongBits(pContext, pbuf_len, p_outputBuffer);
	 applib2_putShortBits(pContext, (tlv.l.length - 1)*8 - pbuf_len, 0);
}


extern U32 ber_get_octet_string( applib2_AsnContext *pContext, U8 ** pp_outputBuffer, U16 pbuf_len)
{
	BER_TLV	tlv;

	get_tl(pContext, &tlv);

	if (tlv.t.is_primitive && tlv.l.is_defined)
	{
		/* primitive mode */
		
		if (*pp_outputBuffer == NULL)
		{
			/* if user did't provided buffer, function will alloc enough buffer */
			 applib2_AsnDecodeAlloc(pContext, (void **)pp_outputBuffer, tlv.l.length);
		}
		else
		{
			/* If pValue is not Null, it's means user provide the buffer*/
			//ASSERT(pbuf_len >= tlv.l.length);
         if(pbuf_len < tlv.l.length)
         {
             applib2_UA1_ERROR(27);
         }
		}

		 applib2_getLongBits(pContext, tlv.l.length * 8, *pp_outputBuffer);
		
		return tlv.l.length;
	}
	else
	{
		/* constructed mode */
		U32			total_len = 0;
		
		//ASSERT(pp_outputBuffer != NULL);
     if(pp_outputBuffer == NULL)
     {
 	   applib2_UA1_ERROR(29);
     }
		
		do 
		{
			get_tl(pContext, &tlv);
			
			if (tlv.t.tag == 0 && tlv.l.length == 0)
				break;	/* undefined length is end with 0x00 0x00 */
						
			 applib2_getLongBits(pContext, tlv.l.length * 8, (U8 *)(pp_outputBuffer+total_len));
			
			total_len += tlv.l.length;
			
			//ASSERT(total_len < pbuf_len);
         if(total_len >= pbuf_len)
         {
   		      applib2_UA1_ERROR(30);
         }
			
		} while(1);
		
		return total_len-1;
	}
}

/*add ber_get_octet_string1 for @set REF_ALL_INDIRECT=0*/
extern U32 ber_get_octet_string1( applib2_AsnContext *pContext, U8 pp_outputBuffer[], U16 pbuf_len)
{
	BER_TLV	tlv;

	get_tl(pContext, &tlv);

	if (tlv.t.is_primitive && tlv.l.is_defined)
	{
		/* primitive mode */
		//ASSERT(pbuf_len >= tlv.l.length);
 	if(pbuf_len < tlv.l.length)
 	{
 	   applib2_UA1_ERROR(31);
 	}

		applib2_getLongBits(pContext, tlv.l.length * 8, pp_outputBuffer);
		
		return tlv.l.length;
	}
	else
	{
		/* constructed mode */
		U32			total_len = 0;
		
		do 
		{
			get_tl(pContext, &tlv);
			
			if (tlv.t.tag == 0 && tlv.l.length == 0)
				break;	/* undefined length is end with 0x00 0x00 */
						
			applib2_getLongBits(pContext, tlv.l.length * 8, (pp_outputBuffer+total_len));
			
			total_len += tlv.l.length;
			
			//ASSERT(total_len < pbuf_len);
         if(total_len >= pbuf_len)
         {
            applib2_UA1_ERROR(32);
         }
			
		} while(1);
		
		return total_len-1;
	}
}

extern void ber_put_octet_string( applib2_AsnContext *pContext, U8 * outputBuffer, U16 buf_len, BER_TAG tag)
{
	BER_TLV	tlv;

	tlv.t = tag;

	if (Universal == tlv.t.cl)	
		tlv.t.tag = 4;	/* correct value */

	tlv.t.is_primitive = TRUE;
	tlv.l.length = buf_len;
	tlv.l.is_defined = TRUE;
	tlv.v = outputBuffer;
	
	/* Un-support constructed mode for bit string */
	
	
	put_tlv(pContext, &tlv);
}

extern void ber_put_string( applib2_AsnContext *pContext, U8 * outputBuffer, U32 buf_len, BER_TAG tag)
{
	BER_TLV	tlv;
	
	tlv.t = tag;
	
	tlv.t.is_primitive = TRUE;
	tlv.l.length = buf_len;
	tlv.l.is_defined = TRUE;
	tlv.v = outputBuffer;
	
	/* Un-support constructed mode for bit string */
	
	
	put_tlv(pContext, &tlv);
}

extern void ber_get_string( applib2_AsnContext *pContext, U8 ** outputBuffer, U32 *p_len)
{
	BER_TLV	tlv;
	
	//ASSERT(outputBuffer!= NULL && p_len != NULL);
 if(outputBuffer== NULL || p_len == NULL)
 {
   applib2_UA1_ERROR(33);
 }

	get_tl(pContext, &tlv);

	*p_len = tlv.l.length;

	 applib2_AsnDecodeAlloc(pContext, (void **)outputBuffer, tlv.l.length);

	 applib2_getLongBits(pContext, tlv.l.length << 3, (*outputBuffer));
	
	
}

extern void ber_put_tow_byte_string( applib2_AsnContext *pContext, U8 * outputBuffer, U32 buf_len, BER_TAG tag)
{
	BER_TLV	tlv;
	U32		i;
	
	tlv.t = tag;
	
	tlv.t.is_primitive = TRUE;
	tlv.l.length = buf_len*2;
	tlv.l.is_defined = TRUE;
	tlv.v = outputBuffer;
	
	/* Un-support constructed mode for bit string */
	
	
	put_tl(pContext, &tlv);

	for (i=0; i<buf_len; i++)
	{
		 applib2_putBits(pContext, 8, GET_U16_HIGH(*(((U16 *)tlv.v)+i)));
		 applib2_putBits(pContext, 8, GET_U16_LOW(*(((U16 *)tlv.v)+i)));
	}
}


extern void ber_get_tow_byte_string( applib2_AsnContext *pContext, U8 ** outputBuffer, U32 *p_len)
{
	BER_TLV	tlv;
	U16		uHigh, uLow;
	U32		i;
	
	//ASSERT(outputBuffer!= NULL && p_len != NULL);
	if(outputBuffer== NULL || p_len == NULL)
	{
	   applib2_UA1_ERROR(34);
	}
	
	get_tl(pContext, &tlv);
	
	*p_len = tlv.l.length/2;
	
	applib2_AsnDecodeAlloc(pContext, (void **)outputBuffer, tlv.l.length);

	for (i=0; i< (tlv.l.length >> 1); i++)
	{
		 uLow  =  applib2_getBits(pContext, 8);	
		 uHigh =  applib2_getBits(pContext, 8);

		*(((U16 *)(*outputBuffer)) + i) = MAKE_U16(uHigh, uLow);
	}
}

static U32 ber_get_oid_item( applib2_AsnContext *pContext,  U8 **ppData)
{
	U32		uNum = 0;
	U8		uData = **ppData;
	
	if (uData <= 0x7F)
	{
		uNum = uData;
		(*ppData)++;
	}	
	else if (*(*ppData+1)  <= 0x7F)
	{
		// First Octet
		uData &= 0x7F;
		uNum = uData;
		
		uNum *= 128;
		
		(*ppData)++;
		uData = **ppData;
		
		// Second Octet
		uData &= 0x7F;
		uNum += uData;
		
		(*ppData)++;
	}
	else if (*(*ppData+2) <= 0x7F)
	{
		// First Octet
		uData &= 0x7F;
		uNum = uData;
		uNum *= 128; 
		
		(*ppData)++;
		uData = **ppData;
		
		// Second Octet
		uData &= 0x7F;
		uNum += uData;
		uNum *= 128; 
		
		(*ppData)++;
		uData = **ppData;
		
		// Third Octet
		uData &= 0x7F;
		uNum += uData;
		
		(*ppData)++;
	}
	else
	{
		applib2_UA1_ERROR(10);
	}
	
	return uNum;
}

extern void ber_get_oid( applib2_AsnContext *pContext,  applib2_OID *p_oid)
{
	BER_TLV	tlv;
	U32		i, *pItemOrg;

	get_tl(pContext, &tlv);

	 applib2_AsnDecodeAlloc(pContext, (void **)&tlv.v, tlv.l.length);

	get_v(pContext, &tlv);

	/* Got object Identify Item count */
	for (i=1, p_oid->valueLen=2; i<tlv.l.length; i++)
		if (*(tlv.v+i) <= 0x7F )
			(p_oid->valueLen)++;
		
	/* alloc memory for oid */
	 applib2_AsnDecodeAlloc(pContext, (void **)&(p_oid->value), (p_oid->valueLen)*4);

	pItemOrg = p_oid->value;

	if ((*tlv.v) <= 39)
	{
		*p_oid->value = 0;
	}
	else if ((*tlv.v) <= 79)
	{
		*p_oid->value = 1;
	}
	else
	{
		*p_oid->value = 2;
	}
	
	*(p_oid->value+1) = (*tlv.v)%40;
	
	tlv.v++;
	p_oid->value += 2;
	
	for (i=2; i<p_oid->valueLen; i++, p_oid->value++)
	{
		*p_oid->value = ber_get_oid_item(pContext, &tlv.v);
	}
	
	p_oid->value = pItemOrg;
}


static void ber_put_oid_item( applib2_AsnContext *pContext,  U32  uData)
{
	//ASSERT(uData < 2097152);
	if(uData >= 2097152)
	{
	   applib2_UA1_ERROR(35);
	}

	if (uData < 0x7F)
	{
		 applib2_putShortBits(pContext,  8, uData);
	}
	else if (uData < 16384)
	{
		// First Octet
		 applib2_putShortBits(pContext,  1, 1);
		 applib2_putShortBits(pContext,  7, (uData - uData%128)/128);

		// Second Octet
		 applib2_putShortBits(pContext,  1, 0);
		 applib2_putShortBits(pContext,  7, uData%128);
	}
	else if (uData < 2097152)
	{
		// First Octet
		 applib2_putShortBits(pContext,  1, 1);
		 applib2_putShortBits(pContext,  7, (uData - uData%16384)/16384);

		// Second Octet
		 applib2_putShortBits(pContext,  1, 1);
		 applib2_putShortBits(pContext,  7, ((uData - uData%128)%16384)/128);

		// Third Octet
		 applib2_putShortBits(pContext,  1, 0);
		 applib2_putShortBits(pContext,  7, uData%128);
	}
}

extern void ber_put_boolean( applib2_AsnContext *pContext, AsnBool *pBool, BER_TAG tag)
{
	BER_TLV		tlv;

	tlv.t = tag;
	tlv.t.is_primitive = TRUE;
	tlv.l.is_defined = TRUE;
	tlv.l.length = 1;

	put_tl(pContext, &tlv);

	/*
	 *  Actually, for indicate "true" we can set any value except zero
	 *  but for test convince, we use 0xFF.
	 */
	 applib2_putShortBits( pContext, 8, ( *pBool == TRUE ) ? 0xFF : 0 );
}

extern void ber_put_oid( applib2_AsnContext *pContext,  applib2_OID *pOid, BER_TAG tag)
{
	U32		ulen, i;
	BER_TLV	tlv;
	U8 * pTemp = NULL;
	
	applib2_BEGIN_PRE_ENCODE

	 applib2_putShortBits(pContext,  8, ((*pOid->value)*40 + (* (pOid->value + 1))));
	
	for(i=2; i<pOid->valueLen; i++)
		ber_put_oid_item(pContext, *(pOid->value + i));

	applib2_END_PRE_ENCODE
		
	tlv.t = tag;
	
	if (Universal == tlv.t.cl)	
		tlv.t.tag = 6;
	
	tlv.t.is_primitive = TRUE;	

	tlv.l.is_defined = TRUE;
	tlv.l.length = ulen;

	tlv.v =  (U8 *)pTemp;

	put_tlv(pContext, &tlv);

	if (pContext->pMemFreeFunc != NULL)
		pContext->pMemFreeFunc((void **)&pTemp);
	else
		 applib2_asnMemFree((void **)&pTemp);
}

extern Bool ber_tag_cmp(BER_TAG t1, BER_TAG t2)
{
	  if(t1.cl==Universal && t1.tag== 0)
	  {
      return	TRUE;
   }
	  else
	  {
	     return (t1.cl == t2.cl && t1.tag == t2.tag);
   }
}
#endif //__AGPS_CONTROL_PLANE__