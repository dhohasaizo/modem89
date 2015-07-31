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


#if !defined _BER_COMMON_H_
#define      _BER_COMMON_H_

#ifdef __cplusplus
extern "C" {
#endif

///
#include "kal_general_types.h"
///
#include "applib2_asn_common.h"
#include "applib2_mtkasn_global.h"

typedef enum {
	Universal = 0, 
	Application,
	ContextSpecific,
	Private
}Tag_Class;

typedef	enum {
	AUTOMATIC=0,
	IMPLICIT,
	EXPLICIT,
 EMPTY
}Tag_Mode;

typedef	struct
{
	Tag_Class	cl;  /*class*/
	AsnBool		is_primitive;			
	U32			tag;		
 Tag_Mode    mode;
 AsnBool     is_tagged;
}BER_TAG;

typedef	struct
{
	AsnBool		is_defined;
	U32			length;		
}BER_LENGTH;

typedef		U8 *	BER_VALUE;

typedef	struct
{
	BER_TAG		t;
	BER_LENGTH	l;
	BER_VALUE	v;
}BER_TLV;


extern void get_tl(applib2_AsnContext *pContext, BER_TLV *p_tlv);
extern void get_v(applib2_AsnContext *pContext, BER_TLV *p_tlv);
extern U32  ber_get_integer(applib2_AsnContext *pContext);
extern U32  ber_get_bit_string(applib2_AsnContext *pContext,U8 ** pp_outputBuffer, U16 pbuf_len);
extern U32  ber_get_bit_string1(applib2_AsnContext *pContext,U8 pp_outputBuffer[], U16 pbuf_len);
extern U32  ber_get_octet_string(applib2_AsnContext *pContext, U8 ** pp_outputBuffer, U16 pbuf_len);
extern U32  ber_get_octet_string1(applib2_AsnContext *pContext, U8 pp_outputBuffer[], U16 pbuf_len);
extern void ber_get_oid(applib2_AsnContext *pContext, applib2_OID *p_oid);
extern void ber_get_string(applib2_AsnContext *pContext, U8 ** outputBuffer, U32 *p_len);
extern void ber_get_tow_byte_string(applib2_AsnContext *pContext, U8 ** outputBuffer, U32 *p_len);
extern void pre_get_t(applib2_AsnContext *pContext, BER_TAG *p_t);


extern void ber_put_tow_byte_string(applib2_AsnContext *pContext, U8 * outputBuffer, U32 buf_len, BER_TAG tag);
extern void ber_put_string(applib2_AsnContext *pContext, U8 * outputBuffer, U32 buf_len, BER_TAG tag);
extern void ber_put_enum(applib2_AsnContext *pContext, U32 value, BER_TAG tag);
extern void ber_put_boolean(applib2_AsnContext *pContext, AsnBool *pBool, BER_TAG tag);
extern void ber_put_oid(applib2_AsnContext *pContext, applib2_OID *pOid, BER_TAG tag);
extern void ber_put_bit_string(applib2_AsnContext *pContext, U8 * p_outputBuffer, U16 pbuf_len, BER_TAG tag);
extern void ber_put_signed_integer(applib2_AsnContext *pContext, S32 value, BER_TAG tag);
extern void ber_put_unsigned_integer(applib2_AsnContext *pContext, U32 value, BER_TAG tag);
extern void ber_put_octet_string(applib2_AsnContext *pContext, U8 * outputBuffer, U16 buf_len, BER_TAG tag);
extern void put_tlv(applib2_AsnContext *pContext, BER_TLV *p_tlv);

extern Bool ber_tag_cmp(BER_TAG t1, BER_TAG t2);

#ifdef __cplusplus       
}
#endif
#endif //_BER_COMMON_H_
#endif //__AGPS_CONTROL_PLANE__