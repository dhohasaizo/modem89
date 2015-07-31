#ifndef L1TRC_L1C_GPRS2_DEF_H
#define L1TRC_L1C_GPRS2_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1C_Str_Bool(v1)  (unsigned char)(v1+0)
#define RTB_Str_RAT(v1)  (unsigned char)(v1+2)
#define RTB_Str_SIM(v1)  (unsigned char)(v1+6)
#define RTB_Str_MODE(v1)  (unsigned char)(v1+8)
#define RTB_Str_BLCOK(v1)  (unsigned char)(v1+10)
#define RTB_Str_Protect(v1)  (unsigned char)(v1+12)
#define RTB_Str_TimerPriority(v1)  (unsigned char)(v1+15)


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_1_GSM(v1, v2, v3, v4, v5, v6) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_1_GSM((unsigned char)(v1), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (unsigned char)(v6));\
} while(0)
#else
	#define RTB_Trace_1_GSM(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_1_UMTS(v1, v2, v3, v4, v5, v6) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_1_UMTS((unsigned char)(v1), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (unsigned char)(v6));\
} while(0)
#else
	#define RTB_Trace_1_UMTS(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_3_GSM(v1, v2, v3, v4, v5) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_3_GSM((char)(v1), (char)(v2), (unsigned char)(v3), (unsigned short)(v4), (long)(v5));\
} while(0)
#else
	#define RTB_Trace_3_GSM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_4_GSM(v1, v2, v3, v4, v5) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_4_GSM((unsigned char)(v1), (long)(v2), (char)(v3), (long)(v4), (long)(v5));\
} while(0)
#else
	#define RTB_Trace_4_GSM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_3_UMTS(v1, v2, v3, v4, v5) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_3_UMTS((char)(v1), (char)(v2), (unsigned char)(v3), (unsigned short)(v4), (long)(v5));\
} while(0)
#else
	#define RTB_Trace_3_UMTS(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_4_UMTS(v1, v2, v3, v4, v5) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_4_UMTS((unsigned char)(v1), (long)(v2), (char)(v3), (long)(v4), (long)(v5));\
} while(0)
#else
	#define RTB_Trace_4_UMTS(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_5_GSM(v1, v2, v3, v4) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_5_GSM((long)(v1), (unsigned char)(v2), (long)(v3), (long)(v4));\
} while(0)
#else
	#define RTB_Trace_5_GSM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_5_UMTS(v1, v2, v3, v4) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_5_UMTS((long)(v1), (unsigned char)(v2), (long)(v3), (long)(v4));\
} while(0)
#else
	#define RTB_Trace_5_UMTS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_6_GSM(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_6_GSM((long)(v1), (long)(v2));\
} while(0)
#else
	#define RTB_Trace_6_GSM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_6_UMTS(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_6_UMTS((long)(v1), (long)(v2));\
} while(0)
#else
	#define RTB_Trace_6_UMTS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_7_GSM(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_7_GSM((long)(v1), (long)(v2));\
} while(0)
#else
	#define RTB_Trace_7_GSM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_7_UMTS(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_7_UMTS((long)(v1), (long)(v2));\
} while(0)
#else
	#define RTB_Trace_7_UMTS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_8_GSM(v1, v2, v3) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_8_GSM((unsigned char)(v1), (char)(v2), (long)(v3));\
} while(0)
#else
	#define RTB_Trace_8_GSM(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_8_UMTS(v1, v2, v3) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_8_UMTS((unsigned char)(v1), (char)(v2), (long)(v3));\
} while(0)
#else
	#define RTB_Trace_8_UMTS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_9_GSM(v1, v2, v3) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_9_GSM((unsigned char)(v1), (char)(v2), (long)(v3));\
} while(0)
#else
	#define RTB_Trace_9_GSM(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_9_UMTS(v1, v2, v3) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_9_UMTS((unsigned char)(v1), (char)(v2), (long)(v3));\
} while(0)
#else
	#define RTB_Trace_9_UMTS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_11_GSM(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_11_GSM((unsigned char)(v1), (char)(v2));\
} while(0)
#else
	#define RTB_Trace_11_GSM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_11_UMTS(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_11_UMTS((unsigned char)(v1), (char)(v2));\
} while(0)
#else
	#define RTB_Trace_11_UMTS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_13(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_13((char)(v1), (long)(v2));\
} while(0)
#else
	#define RTB_Trace_13(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_14_UMTS(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_14_UMTS((char)(v1), (long)(v2));\
} while(0)
#else
	#define RTB_Trace_14_UMTS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_15(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_15((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define RTB_Trace_15(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_20_UMTS(v1) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_20_UMTS((char)(v1));\
} while(0)
#else
	#define RTB_Trace_20_UMTS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_22_GSM(v1, v2, v3, v4, v5, v6, v7) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_22_GSM((unsigned char)(v1), (char)(v2), (long)(v3), (unsigned char)(v4), (long)(v5), (unsigned char)(v6), (long)(v7));\
} while(0)
#else
	#define RTB_Trace_22_GSM(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_22_UMTS(v1, v2, v3, v4, v5, v6, v7) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_22_UMTS((unsigned char)(v1), (char)(v2), (long)(v3), (unsigned char)(v4), (long)(v5), (unsigned char)(v6), (long)(v7));\
} while(0)
#else
	#define RTB_Trace_22_UMTS(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_24_UMTS(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_24_UMTS((long)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define RTB_Trace_24_UMTS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_25_GSM(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_25_GSM((unsigned char)(v1), (char)(v2));\
} while(0)
#else
	#define RTB_Trace_25_GSM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_25_UMTS(v1, v2, v3) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_25_UMTS((unsigned char)(v1), (long)(v2), (char)(v3));\
} while(0)
#else
	#define RTB_Trace_25_UMTS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_27_GSM(v1) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_27_GSM((long)(v1));\
} while(0)
#else
	#define RTB_Trace_27_GSM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RTB_Trace_27_UMTS(v1) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_RTB_Trace_27_UMTS((long)(v1));\
} while(0)
#else
	#define RTB_Trace_27_UMTS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_28_GSM(v1, v2, v3, v4) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_28_GSM((char)(v1), (unsigned char)(v2), (unsigned short)(v3), (long)(v4));\
} while(0)
#else
	#define RTB_Trace_28_GSM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_28_UMTS(v1, v2, v3, v4) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_28_UMTS((char)(v1), (unsigned char)(v2), (unsigned short)(v3), (long)(v4));\
} while(0)
#else
	#define RTB_Trace_28_UMTS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_29_GSM(v1) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_29_GSM((long)(v1));\
} while(0)
#else
	#define RTB_Trace_29_GSM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_29_UMTS(v1) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_29_UMTS((long)(v1));\
} while(0)
#else
	#define RTB_Trace_29_UMTS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_34_GSM(v1) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_34_GSM((long)(v1));\
} while(0)
#else
	#define RTB_Trace_34_GSM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_34_UMTS(v1) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_34_UMTS((long)(v1));\
} while(0)
#else
	#define RTB_Trace_34_UMTS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_35(v1, v2) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_35((long)(v1), (long)(v2));\
} while(0)
#else
	#define RTB_Trace_35(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_36(v1, v2, v3, v4) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_36((unsigned char)(v1), (char)(v2), (char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define RTB_Trace_36(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_37(v1) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_37((unsigned char)(v1));\
} while(0)
#else
	#define RTB_Trace_37(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define RTB_Trace_38_UMTS(v1, v2, v3) do {\
		if(L1C_GPRS2_Trace_Filter[0]==1 && (L1C_GPRS2_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_RTB_Trace_38_UMTS((long)(v1), (long)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define RTB_Trace_38_UMTS(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char L1C_GPRS2_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_RTB_Trace_1_GSM(unsigned char v1, long v2, long v3, long v4, long v5, unsigned char v6);
void L1TRC_Send_RTB_Trace_1_UMTS(unsigned char v1, long v2, long v3, long v4, long v5, unsigned char v6);
void L1TRC_Send_RTB_Trace_3_GSM(char v1, char v2, unsigned char v3, unsigned short v4, long v5);
void L1TRC_Send_RTB_Trace_4_GSM(unsigned char v1, long v2, char v3, long v4, long v5);
void L1TRC_Send_RTB_Trace_3_UMTS(char v1, char v2, unsigned char v3, unsigned short v4, long v5);
void L1TRC_Send_RTB_Trace_4_UMTS(unsigned char v1, long v2, char v3, long v4, long v5);
void L1TRC_Send_RTB_Trace_5_GSM(long v1, unsigned char v2, long v3, long v4);
void L1TRC_Send_RTB_Trace_5_UMTS(long v1, unsigned char v2, long v3, long v4);
void L1TRC_Send_RTB_Trace_6_GSM(long v1, long v2);
void L1TRC_Send_RTB_Trace_6_UMTS(long v1, long v2);
void L1TRC_Send_RTB_Trace_7_GSM(long v1, long v2);
void L1TRC_Send_RTB_Trace_7_UMTS(long v1, long v2);
void L1TRC_Send_RTB_Trace_8_GSM(unsigned char v1, char v2, long v3);
void L1TRC_Send_RTB_Trace_8_UMTS(unsigned char v1, char v2, long v3);
void L1TRC_Send_RTB_Trace_9_GSM(unsigned char v1, char v2, long v3);
void L1TRC_Send_RTB_Trace_9_UMTS(unsigned char v1, char v2, long v3);
void L1TRC_Send_RTB_Trace_11_GSM(unsigned char v1, char v2);
void L1TRC_Send_RTB_Trace_11_UMTS(unsigned char v1, char v2);
void L1TRC_Send_RTB_Trace_13(char v1, long v2);
void L1TRC_Send_RTB_Trace_14_UMTS(char v1, long v2);
void L1TRC_Send_RTB_Trace_15(unsigned char v1, unsigned char v2);
void L1TRC_Send_RTB_Trace_20_UMTS(char v1);
void L1TRC_Send_RTB_Trace_22_GSM(unsigned char v1, char v2, long v3, unsigned char v4, long v5, unsigned char v6, long v7);
void L1TRC_Send_RTB_Trace_22_UMTS(unsigned char v1, char v2, long v3, unsigned char v4, long v5, unsigned char v6, long v7);
void L1TRC_Send_RTB_Trace_24_UMTS(long v1, unsigned char v2);
void L1TRC_Send_RTB_Trace_25_GSM(unsigned char v1, char v2);
void L1TRC_Send_RTB_Trace_25_UMTS(unsigned char v1, long v2, char v3);
void L1TRC_Send_RTB_Trace_27_GSM(long v1);
void L1TRC_Send_RTB_Trace_27_UMTS(long v1);
void L1TRC_Send_RTB_Trace_28_GSM(char v1, unsigned char v2, unsigned short v3, long v4);
void L1TRC_Send_RTB_Trace_28_UMTS(char v1, unsigned char v2, unsigned short v3, long v4);
void L1TRC_Send_RTB_Trace_29_GSM(long v1);
void L1TRC_Send_RTB_Trace_29_UMTS(long v1);
void L1TRC_Send_RTB_Trace_34_GSM(long v1);
void L1TRC_Send_RTB_Trace_34_UMTS(long v1);
void L1TRC_Send_RTB_Trace_35(long v1, long v2);
void L1TRC_Send_RTB_Trace_36(unsigned char v1, char v2, char v3, unsigned char v4);
void L1TRC_Send_RTB_Trace_37(unsigned char v1);
void L1TRC_Send_RTB_Trace_38_UMTS(long v1, long v2, unsigned char v3);

void Set_L1C_GPRS2_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1C_GPRS2()	(L1C_GPRS2_Trace_Filter[0]==1)
#define ChkL1ClsFltr_L1C_GPRS2_RTB_M()	(ChkL1ModFltr_L1C_GPRS2()&&((L1C_GPRS2_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_L1C_GPRS2_RTB_L()	(ChkL1ModFltr_L1C_GPRS2()&&((L1C_GPRS2_Trace_Filter[1]&0x02)!=0))
#define ChkL1MsgFltr_RTB_Trace_1_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_1_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_3_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_4_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_3_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_4_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_5_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_5_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_6_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_6_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_7_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_7_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_8_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_8_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_9_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_9_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_11_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_11_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_13()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_14_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_15()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_20_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_22_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_22_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_24_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_25_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_25_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_27_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_27_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_L()
#define ChkL1MsgFltr_RTB_Trace_28_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_28_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_29_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_29_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_34_GSM()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_34_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_35()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_36()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_37()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()
#define ChkL1MsgFltr_RTB_Trace_38_UMTS()	ChkL1ClsFltr_L1C_GPRS2_RTB_M()


#endif
