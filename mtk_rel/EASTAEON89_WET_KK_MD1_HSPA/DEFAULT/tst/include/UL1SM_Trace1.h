#ifndef L1TRC_UL1SM_1_DEF_H
#define L1TRC_UL1SM_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1SM_Trc_Str_Bool(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_DBG_CALI_START() do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_DBG_CALI_START();\
} while(0)
#else
	#define UL1SM_DBG_CALI_START()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_DBG_CALI_DONE(v1, v2, v3) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_DBG_CALI_DONE((unsigned char)(v1), (unsigned long)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define UL1SM_DBG_CALI_DONE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_DBG_LONG_CALI_DONE(v1, v2, v3) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_DBG_LONG_CALI_DONE((unsigned char)(v1), (unsigned long)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define UL1SM_DBG_LONG_CALI_DONE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_DBG_2G_PASS_3G(v1, v2) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_DBG_2G_PASS_3G((unsigned long)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1SM_DBG_2G_PASS_3G(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_DBG_SW_WAKEUP(v1) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_DBG_SW_WAKEUP((unsigned char)(v1));\
} while(0)
#else
	#define UL1SM_DBG_SW_WAKEUP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_DBG_CAL_SLEEP(v1, v2, v3, v4) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_DBG_CAL_SLEEP((unsigned long)(v1), (unsigned long)(v2), (unsigned short)(v3), (unsigned long)(v4));\
} while(0)
#else
	#define UL1SM_DBG_CAL_SLEEP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_DBG_CAL_HW_SLEEP(v1, v2) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_DBG_CAL_HW_SLEEP((unsigned short)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1SM_DBG_CAL_HW_SLEEP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1SM_DBG_CHECK_SLEEP_F(v1, v2, v3, v4) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1SM_DBG_CHECK_SLEEP_F((unsigned long)(v1), (unsigned short)(v2), (unsigned char)(v3), (unsigned short)(v4));\
} while(0)
#else
	#define UL1SM_DBG_CHECK_SLEEP_F(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1SM_DBG_CHECK_SLEEP_C(v1, v2, v3, v4, v5) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1SM_DBG_CHECK_SLEEP_C((unsigned short)(v1), (unsigned char)(v2), (unsigned short)(v3), (unsigned short)(v4), (unsigned short)(v5));\
} while(0)
#else
	#define UL1SM_DBG_CHECK_SLEEP_C(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_DBG_BEFORE_SLEEP(v1, v2, v3) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_DBG_BEFORE_SLEEP((unsigned short)(v1), (unsigned long)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define UL1SM_DBG_BEFORE_SLEEP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_TRC_DEBUG(v1, v2, v3) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_TRC_DEBUG((unsigned short)(v1), (long)(v2), (long)(v3));\
} while(0)
#else
	#define UL1SM_TRC_DEBUG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1SM_TRC_DEBUG_HEX(v1, v2, v3) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1SM_TRC_DEBUG_HEX((unsigned short)(v1), (unsigned long)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define UL1SM_TRC_DEBUG_HEX(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1SM_DBG_32KLESS_WAKEUP(v1, v2) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1SM_DBG_32KLESS_WAKEUP((unsigned short)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1SM_DBG_32KLESS_WAKEUP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1SM_DBG_32KLESS_UPDATE_LPM(v1, v2, v3, v4, v5) do {\
		if(UL1SM_1_Trace_Filter[0]==1 && (UL1SM_1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1SM_DBG_32KLESS_UPDATE_LPM((short)(v1), (unsigned short)(v2), (unsigned short)(v3), (unsigned short)(v4), (unsigned char)(v5));\
} while(0)
#else
	#define UL1SM_DBG_32KLESS_UPDATE_LPM(v1, v2, v3, v4, v5)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char UL1SM_1_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_UL1SM_DBG_CALI_START(void);
void L1TRC_Send_UL1SM_DBG_CALI_DONE(unsigned char v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_UL1SM_DBG_LONG_CALI_DONE(unsigned char v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_UL1SM_DBG_2G_PASS_3G(unsigned long v1, unsigned long v2);
void L1TRC_Send_UL1SM_DBG_SW_WAKEUP(unsigned char v1);
void L1TRC_Send_UL1SM_DBG_CAL_SLEEP(unsigned long v1, unsigned long v2, unsigned short v3, unsigned long v4);
void L1TRC_Send_UL1SM_DBG_CAL_HW_SLEEP(unsigned short v1, unsigned short v2);
void L1TRC_Send_UL1SM_DBG_CHECK_SLEEP_F(unsigned long v1, unsigned short v2, unsigned char v3, unsigned short v4);
void L1TRC_Send_UL1SM_DBG_CHECK_SLEEP_C(unsigned short v1, unsigned char v2, unsigned short v3, unsigned short v4, unsigned short v5);
void L1TRC_Send_UL1SM_DBG_BEFORE_SLEEP(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_UL1SM_TRC_DEBUG(unsigned short v1, long v2, long v3);
void L1TRC_Send_UL1SM_TRC_DEBUG_HEX(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_UL1SM_DBG_32KLESS_WAKEUP(unsigned short v1, unsigned short v2);
void L1TRC_Send_UL1SM_DBG_32KLESS_UPDATE_LPM(short v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned char v5);

void Set_UL1SM_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1SM_1()	(UL1SM_1_Trace_Filter[0]==1)
#define ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()	(ChkL1ModFltr_UL1SM_1()&&((UL1SM_1_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_UL1SM_1_UMTS_SM_L()	(ChkL1ModFltr_UL1SM_1()&&((UL1SM_1_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_UL1SM_1_UMTS_32K_H()	(ChkL1ModFltr_UL1SM_1()&&((UL1SM_1_Trace_Filter[1]&0x04)!=0))
#define ChkL1MsgFltr_UL1SM_DBG_CALI_START()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_DBG_CALI_DONE()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_DBG_LONG_CALI_DONE()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_DBG_2G_PASS_3G()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_DBG_SW_WAKEUP()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_DBG_CAL_SLEEP()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_DBG_CAL_HW_SLEEP()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_DBG_CHECK_SLEEP_F()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_L()
#define ChkL1MsgFltr_UL1SM_DBG_CHECK_SLEEP_C()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_L()
#define ChkL1MsgFltr_UL1SM_DBG_BEFORE_SLEEP()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_TRC_DEBUG()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_TRC_DEBUG_HEX()	ChkL1ClsFltr_UL1SM_1_UMTS_SM_M()
#define ChkL1MsgFltr_UL1SM_DBG_32KLESS_WAKEUP()	ChkL1ClsFltr_UL1SM_1_UMTS_32K_H()
#define ChkL1MsgFltr_UL1SM_DBG_32KLESS_UPDATE_LPM()	ChkL1ClsFltr_UL1SM_1_UMTS_32K_H()


#endif
