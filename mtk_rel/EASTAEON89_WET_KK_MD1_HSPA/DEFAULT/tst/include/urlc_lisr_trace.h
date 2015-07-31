#ifndef L1TRC_URLC_DEF_H
#define L1TRC_URLC_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_GETBO(v1) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_URLC_TRC_GETBO((char)(v1));\
} while(0)
#else
	#define URLC_TRC_GETBO(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_ZERO_BO() do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_URLC_TRC_ZERO_BO();\
} while(0)
#else
	#define URLC_TRC_ZERO_BO()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_SELECT_SUFI(v1, v2, v3, v4) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_URLC_TRC_SELECT_SUFI((short)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define URLC_TRC_SELECT_SUFI(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_SCHEDULE_ACK(v1, v2) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_URLC_TRC_SCHEDULE_ACK((short)(v1), (short)(v2));\
} while(0)
#else
	#define URLC_TRC_SCHEDULE_ACK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_TRANSMIT_AM(v1, v2, v3) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_URLC_TRC_TRANSMIT_AM((char)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define URLC_TRC_TRANSMIT_AM(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_TRANSMIT_UM(v1, v2) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_URLC_TRC_TRANSMIT_UM((char)(v1), (short)(v2));\
} while(0)
#else
	#define URLC_TRC_TRANSMIT_UM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_TRANSMIT_TM(v1) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_URLC_TRC_TRANSMIT_TM((char)(v1));\
} while(0)
#else
	#define URLC_TRC_TRANSMIT_TM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_TRANSMIT_AM_SN(v1, v2) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_URLC_TRC_TRANSMIT_AM_SN((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define URLC_TRC_TRANSMIT_AM_SN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_RETRANSMIT_AM_SN(v1, v2) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_URLC_TRC_RETRANSMIT_AM_SN((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define URLC_TRC_RETRANSMIT_AM_SN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_TRANSMIT_AM_CTRL(v1, v2, v3) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_URLC_TRC_TRANSMIT_AM_CTRL((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define URLC_TRC_TRANSMIT_AM_CTRL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_TRANSMIT_UM_SN(v1) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_URLC_TRC_TRANSMIT_UM_SN((unsigned char)(v1));\
} while(0)
#else
	#define URLC_TRC_TRANSMIT_UM_SN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_TRANSMIT_DUMMY() do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_URLC_TRC_TRANSMIT_DUMMY();\
} while(0)
#else
	#define URLC_TRC_TRANSMIT_DUMMY()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_NOTIFY_SETUP(v1) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_URLC_TRC_NOTIFY_SETUP((unsigned short)(v1));\
} while(0)
#else
	#define URLC_TRC_NOTIFY_SETUP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_NOTIFY_RELEASE(v1) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_URLC_TRC_NOTIFY_RELEASE((unsigned short)(v1));\
} while(0)
#else
	#define URLC_TRC_NOTIFY_RELEASE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_ACTIVATE_TX(v1, v2) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_URLC_TRC_ACTIVATE_TX((unsigned short)(v1), (char)(v2));\
} while(0)
#else
	#define URLC_TRC_ACTIVATE_TX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_ACTIVATE_TX_RES(v1, v2) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_URLC_TRC_ACTIVATE_TX_RES((unsigned short)(v1), (char)(v2));\
} while(0)
#else
	#define URLC_TRC_ACTIVATE_TX_RES(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define URLC_TRC_ZERO_CTRL(v1) do {\
		if(URLC_Trace_Filter[0]==1 && (URLC_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_URLC_TRC_ZERO_CTRL((short)(v1));\
} while(0)
#else
	#define URLC_TRC_ZERO_CTRL(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char URLC_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_URLC_TRC_GETBO(char v1);
void L1TRC_Send_URLC_TRC_ZERO_BO(void);
void L1TRC_Send_URLC_TRC_SELECT_SUFI(short v1, short v2, short v3, short v4);
void L1TRC_Send_URLC_TRC_SCHEDULE_ACK(short v1, short v2);
void L1TRC_Send_URLC_TRC_TRANSMIT_AM(char v1, short v2, short v3);
void L1TRC_Send_URLC_TRC_TRANSMIT_UM(char v1, short v2);
void L1TRC_Send_URLC_TRC_TRANSMIT_TM(char v1);
void L1TRC_Send_URLC_TRC_TRANSMIT_AM_SN(unsigned char v1, unsigned char v2);
void L1TRC_Send_URLC_TRC_RETRANSMIT_AM_SN(unsigned char v1, unsigned char v2);
void L1TRC_Send_URLC_TRC_TRANSMIT_AM_CTRL(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_URLC_TRC_TRANSMIT_UM_SN(unsigned char v1);
void L1TRC_Send_URLC_TRC_TRANSMIT_DUMMY(void);
void L1TRC_Send_URLC_TRC_NOTIFY_SETUP(unsigned short v1);
void L1TRC_Send_URLC_TRC_NOTIFY_RELEASE(unsigned short v1);
void L1TRC_Send_URLC_TRC_ACTIVATE_TX(unsigned short v1, char v2);
void L1TRC_Send_URLC_TRC_ACTIVATE_TX_RES(unsigned short v1, char v2);
void L1TRC_Send_URLC_TRC_ZERO_CTRL(short v1);

void Set_URLC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_URLC()	(URLC_Trace_Filter[0]==1)
#define ChkL1ClsFltr_URLC_URLC_GETBO_M()	(ChkL1ModFltr_URLC()&&((URLC_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_URLC_URLC_TRANSMIT_M()	(ChkL1ModFltr_URLC()&&((URLC_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_URLC_URLC_CONFIG_M()	(ChkL1ModFltr_URLC()&&((URLC_Trace_Filter[1]&0x04)!=0))
#define ChkL1MsgFltr_URLC_TRC_GETBO()	ChkL1ClsFltr_URLC_URLC_GETBO_M()
#define ChkL1MsgFltr_URLC_TRC_ZERO_BO()	ChkL1ClsFltr_URLC_URLC_GETBO_M()
#define ChkL1MsgFltr_URLC_TRC_SELECT_SUFI()	ChkL1ClsFltr_URLC_URLC_GETBO_M()
#define ChkL1MsgFltr_URLC_TRC_SCHEDULE_ACK()	ChkL1ClsFltr_URLC_URLC_GETBO_M()
#define ChkL1MsgFltr_URLC_TRC_TRANSMIT_AM()	ChkL1ClsFltr_URLC_URLC_TRANSMIT_M()
#define ChkL1MsgFltr_URLC_TRC_TRANSMIT_UM()	ChkL1ClsFltr_URLC_URLC_TRANSMIT_M()
#define ChkL1MsgFltr_URLC_TRC_TRANSMIT_TM()	ChkL1ClsFltr_URLC_URLC_TRANSMIT_M()
#define ChkL1MsgFltr_URLC_TRC_TRANSMIT_AM_SN()	ChkL1ClsFltr_URLC_URLC_TRANSMIT_M()
#define ChkL1MsgFltr_URLC_TRC_RETRANSMIT_AM_SN()	ChkL1ClsFltr_URLC_URLC_TRANSMIT_M()
#define ChkL1MsgFltr_URLC_TRC_TRANSMIT_AM_CTRL()	ChkL1ClsFltr_URLC_URLC_TRANSMIT_M()
#define ChkL1MsgFltr_URLC_TRC_TRANSMIT_UM_SN()	ChkL1ClsFltr_URLC_URLC_TRANSMIT_M()
#define ChkL1MsgFltr_URLC_TRC_TRANSMIT_DUMMY()	ChkL1ClsFltr_URLC_URLC_TRANSMIT_M()
#define ChkL1MsgFltr_URLC_TRC_NOTIFY_SETUP()	ChkL1ClsFltr_URLC_URLC_CONFIG_M()
#define ChkL1MsgFltr_URLC_TRC_NOTIFY_RELEASE()	ChkL1ClsFltr_URLC_URLC_CONFIG_M()
#define ChkL1MsgFltr_URLC_TRC_ACTIVATE_TX()	ChkL1ClsFltr_URLC_URLC_CONFIG_M()
#define ChkL1MsgFltr_URLC_TRC_ACTIVATE_TX_RES()	ChkL1ClsFltr_URLC_URLC_CONFIG_M()
#define ChkL1MsgFltr_URLC_TRC_ZERO_CTRL()	ChkL1ClsFltr_URLC_URLC_GETBO_M()


#endif
