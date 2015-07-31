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

/****************************************************************************
 *
 * COMPONENT:   ASN
 * MODULE:      ASN_COMMON
 * DESCRIPTION: Auto generated by MTK ASN.1 Compiler
 *
 ****************************************************************************/

 /**
  * @file  applib2_asn_common.h
  *
  * ASN.1 Common header file
  *
  * @ingroup asn_common
  */


#ifdef __AGPS_CONTROL_PLANE__

#ifndef 	applib2_ASN_COMMON_H
#define 	applib2_ASN_COMMON_H




#ifdef __cplusplus
 extern "C" {
#endif

#ifdef __VXWORKS__
   #include "vxWorks.h"
#endif

///
#include "kal_general_types.h"
///
//#include <setjmp.h>
#include "applib2_mtkasn_global.h"

typedef enum
{
   ASN_OK    =  0,
   ASN_ERROR = -1
}
applib2_AsnStatus;

#ifndef AsnNull
#define AsnNull S8
#endif

typedef struct
{
   int length;
   unsigned char value[100];
}
applib2_AsnAny;

#ifndef AsnObjId
#define  AsnObjId S8
#endif

#ifndef AsnOpen
#define  AsnOpen S8
#endif

#ifndef AsnBool
#define  AsnBool S8
#endif

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL (void *)0
#endif

#ifndef NOT_USED
#define NOT_USED(x) (void)(x)
#endif

#ifndef applib2_UA1_ERROR
#define applib2_UA1_ERROR( x ) applib2_AsnError( pContext, x )
#endif

typedef struct
{
   void *pMemBlock[200];
   void **ppNext;
   void **ppEnd;
} applib2_AllocRecord;

typedef  void  (*applib2_PAsnMemAllocCallBack)(void **memPtr, unsigned long size, const char *file, unsigned long line);
typedef  void  (*applib2_PAsnMemFreeCallBack)(void ** ppBuffer);

typedef struct
{
   applib2_PAsnMemAllocCallBack pMemAllocFunc;
   applib2_PAsnMemFreeCallBack pMemFreeFunc;
}applib2_AsnCustomMemFunctions;

//add by changshun for replace jmpbuf
#ifdef MCD_DLL_EXPORT
  #include <setjmp.h>
  #define asn_jmpbuf jmp_buf
#else
  #if defined(__MTK_TARGET__) && defined(__RVCT__)
    typedef long long asn_jmpbuf[32];
  #elif defined(__MTK_TARGET__)
    typedef int asn_jmpbuf[32];
  #else
 	///add for vc9.0
    //vc 9.0 have un-standard code , cgen could not pass the parse
    // GEN_FOR_PC: just defined when codegen_modis
    #ifndef GEN_FOR_PC
      #include <setjmp.h>
    #else
      #define _JBLEN 32
      #define _JBTYPE int
      typedef _JBTYPE jmp_buf[_JBLEN];
    #endif
    ///
    #define asn_jmpbuf jmp_buf
  #endif
#endif
//add by changshun for replace jmpbuf

typedef struct
{
   U32 shiftRegister;
   U32 shiftRegisterLength;
   U8 *pEncoded;
   U8 *pEncodedEnd;
   //jmp_buf env;
   asn_jmpbuf env;
   void *encodeAlloc;
   applib2_AllocRecord *decodeAlloc;
   void *pAppContext;
   U32 result;
   applib2_PAsnMemAllocCallBack pMemAllocFunc;
   applib2_PAsnMemFreeCallBack  pMemFreeFunc;
}  applib2_AsnContext;

#ifndef ASN_MAX
#define		ASN_MAX		0xFFFFFFFF
#endif

#ifndef ASN_MIN
#define		ASN_MIN		-2147483648
#endif

typedef struct
{
	U32		valueLen;
	U32		*value;
}applib2_OID;


typedef struct
{
	U32    valueLen;
	U8     *value;
}applib2_OCTETSTR;

/************************************************************************/
/*  String  Definition                                                  */
/************************************************************************/
typedef struct
{
	U32		valueLen;
	char  	*value;
}applib2_OneByteString;

typedef struct
{
	U32		valueLen;
	U16  	*value;
}applib2_TwoByteString;

typedef struct
{
	U32		valueLen;
	U32  	*value;
}applib2_FourByteString;


typedef struct
{
	U32		valueLen;
	char	*value;
}applib2_ASN_OneByteAlphabet;

typedef struct
{
	U32		valueLen;
	U16		*value;
}applib2_ASN_TwoByteAlphabet;

//////////////////////////////////////////////////////////////////////////
// Extension Item
typedef struct
{
	U32		valueLen;
	U8  	*value;
}applib2_UnKnowExtensionItem;

typedef struct
{
	U32						valueLen;		// Extension Number
	applib2_UnKnowExtensionItem		*value;		// Point to the first 
}applib2_UnKnowExtensionItemArray;


typedef struct
{
	U32		uIndex;
	U32		valueLen;
	U8		*value;
}applib2_ChoiceUnKnow;

#define 		applib2_asn_ESCString	applib2_OneByteString

#define		applib2_asn_IA5String		 applib2_OneByteString
#define		applib2_asn_NumericString	 applib2_OneByteString
#define		applib2_asn_VisibleString	 applib2_OneByteString
#define		applib2_asn_PrintableString applib2_OneByteString


#define		applib2_asn_BMPString		 applib2_TwoByteString
#define		applib2_asn_UniversalString applib2_FourByteString
#define		applib2_asn_GeneralString	 applib2_asn_ESCString

#define		applib2_asn_UTCTime applib2_asn_VisibleString
#define		applib2_asn_GeneralizedTime applib2_asn_VisibleString

#ifndef      EncodeBeginPoint
#define		EncodeBeginPoint	U32
#endif

#ifndef      GET_U16_LOW
#define		GET_U16_LOW(x)		((x) & 0x00FF)
#endif
#ifndef      GET_U16_HIGH
#define		GET_U16_HIGH(x)		(((x) >> 8) & 0x00FF)
#endif
#ifndef      MAKE_U16
#define		MAKE_U16(low,high)  ((U16)((U8)(low)) | (((U16)(U8)(high))<<8))  
#endif

#ifndef      asn_min
#define		asn_min(a,b)		(((a) < (b)) ? (a) : (b))
#endif
#ifndef      asn_max
#define		asn_max(a,b)		(((a) > (b)) ? (a) : (b))
#endif

#define		applib2_PER_ALIGN		do{		\
if (0 != (pContext->shiftRegisterLength)%8) {			\
applib2_putShortBits( pContext, 8 - (pContext->shiftRegisterLength)%8 , 0);	\
}	\
}while(0);


#define	applib2_PER_CLEAR_ALIGN_BITS	applib2_getShortBits( pContext, pContext->shiftRegisterLength);


#define	applib2_BEGIN_PRE_ENCODE			do{	 						\
	EncodeBeginPoint	begin;					\
	applib2_AsnContext TempContext = *pContext;			\
	pContext->shiftRegisterLength = 0;\
	pContext->shiftRegister = 0;\
	begin = applib2_BeginTestEncodeLen(pContext);	


#define	applib2_END_PRE_ENCODE	ulen = applib2_EndTestEncodeLen(pContext, begin);	\
	if(0 == ulen){applib2_putShortBits(pContext, 8, 0); ulen = 1;}\
	*pContext = TempContext;			\
	applib2_asnMemAlloc(pContext, (void **)&pTemp, ulen);		\
	applib2_asnMemCopy(pTemp, pContext->pEncoded, ulen);	\
}while(0); 

/*add for ber*/
#define	applib2_BER_END_PRE_ENCODE	ulen = applib2_EndTestEncodeLen(pContext, begin);\
if(0 == ulen){                                            \
   *pContext = TempContext;	                            \
}else{                                                    \
   *pContext = TempContext;			                    \
   applib2_asnMemAlloc(pContext, (void **)&pTemp, ulen);   \
   applib2_asnMemCopy(pTemp, pContext->pEncoded, ulen);}   \
}while(0);

#define	applib2_BEGIN_PRE_DECODE_EXT			do{	 		\
		U8 *pTemp=(U8 *)0;	\
		applib2_AsnContext TempContext;	\
		int len = applib2_UperGetLengthValue(pContext, 0, ASN_MAX);		\
		applib2_asnMemAlloc(pContext, (void **)&pTemp, len);		\
		TempContext = *pContext;


#define	applib2_END_PRE_DECODE_EXT	*pContext = TempContext;	\
		applib2_getLongBits(pContext, len*8, pTemp);			\
   if (pContext->pMemFreeFunc != NULL)\
   {\
      pContext->pMemFreeFunc((void **)&pTemp);\
   }\
   else\
   {\
		applib2_asnMemFree((void **)&pTemp);	\
   }\
}while(0);


#define	applib2_COPY_STATIC_ARRAY_TO_BUFFER(pBuffer, Array, begin, len)		do{\
	int i;\
	for(i=0; i<len; i++)\
		{*(pBuffer+i) = Array[begin+i];}\
}while(0);	

U16  applib2_GetUperLengthDeterminant( applib2_AsnContext *pContext );
void applib2_PutUperLengthDeterminant( applib2_AsnContext *pContext, U16 length );
void applib2_AsnFreeDecoded( void *pType, applib2_PAsnMemFreeCallBack pFreeFunc);
void applib2_AsnFreeEncoded( U8 *pEncoded, applib2_PAsnMemFreeCallBack pFreeFunc);
void applib2_AsnRootDecodeAlloc( applib2_AsnContext *pContext, void **ppType, int size );
void applib2_AsnRootDecodeAlloc2( applib2_AsnContext *pContext, void **ppType, int size, const char *file, unsigned long line);
void applib2_AsnDecodeAlloc( applib2_AsnContext *pContext, void **ppMem, int size );
void applib2_AsnDecodeAlloc2( applib2_AsnContext *pContext, void **ppMem, int size, const char *file, int line);
void applib2_AsnDecodeFree( applib2_AllocRecord *decodeAlloc, applib2_PAsnMemFreeCallBack pFreeFunc );
void applib2_AsnEncodeAlloc( applib2_AsnContext *pContext, void **ppMem, U32 *pEncodedLength );
void applib2_AsnEncodeAlloc2( applib2_AsnContext *pContext, U8 **ppEncoded, U32 *pEncodedLength, const char *file, int line);
void applib2_AsnEncodeFree( void *pFree, applib2_PAsnMemFreeCallBack pFreeFunc);
void applib2_AsnError( applib2_AsnContext *pContext, U32 errorCode );
extern void applib2_initFifo( applib2_AsnContext *pContext, U8 *buffer, U32 bufferLength );
extern void applib2_flushFifo( applib2_AsnContext *pContext );
extern U32  applib2_getShortBits( applib2_AsnContext *pContext, U32 numBits );
extern U32  applib2_getBits( applib2_AsnContext *pContext, U32 numBits );
extern void applib2_getLongBits( applib2_AsnContext *pContext, U32 numBits, U8 *outputBuffer );
extern void applib2_putShortBits( applib2_AsnContext *pContext, U32 numBits, U32 data );
extern void applib2_putBits( applib2_AsnContext *pContext, U32 numBits, U32 data );
extern void applib2_putLongBits( applib2_AsnContext *pContext, U32 numBits, U8 *data );
extern S32  applib2_GetAlphabetIndex(applib2_ASN_OneByteAlphabet *pAlphabet, char *pChar);
extern U32  applib2_get_number_octet_length(U32  Data);
extern Bool applib2_OIDCompare(applib2_OID  oidA, U32 lenght, U32 *pValue);
extern void  applib2_SkipEncodeByte(applib2_AsnContext *pContext);
extern EncodeBeginPoint applib2_BeginTestEncodeLen(applib2_AsnContext *pContext);
extern U32	applib2_EndTestEncodeLen(applib2_AsnContext *pContext, EncodeBeginPoint	BeginPoint);
extern void	applib2_PutShortSkipedEncodeByte(applib2_AsnContext *pContext,  U32 uByte, U32 Data, U32 uAfterSize);
extern U32	applib2_testGetShortBits(applib2_AsnContext *pContext, U32 numBits);

#ifdef __cplusplus
}
#endif
#endif /* applib2_ASN_COMMON_H */

#endif //__AGPS_CONTROL_PLANE__