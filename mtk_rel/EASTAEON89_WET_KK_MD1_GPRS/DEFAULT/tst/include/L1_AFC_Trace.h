#ifndef L1TRC_L1_AFC_DEF_H
#define L1TRC_L1_AFC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1_Multi_Afc_Query_Msg(v1)  (unsigned char)(v1+0)
#define L1_Multi_Afc_rat(v1)  (unsigned char)(v1+8)
#define L1_Multi_Afc_mode(v1)  (unsigned char)(v1+13)


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER)
	#define L1_Trc_Multi_AFC_Update_Mode(v1, v2, v3, v4, v5) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_L1_Trc_Multi_AFC_Update_Mode((short)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Update_Mode(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1_Trc_Multi_AFC_Current_Mode(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_L1_Trc_Multi_AFC_Current_Mode((short)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Current_Mode(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trc_Multi_AFC_Query_Mode(v1, v2, v3, v4, v5, v6) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_L1_Trc_Multi_AFC_Query_Mode((short)(v1), (unsigned char)(v2), (unsigned char)(v3), (short)(v4), (unsigned char)(v5), (unsigned char)(v6));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Query_Mode(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trc_Multi_AFC_Query_Dac(v1, v2, v3, v4, v5, v6) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_L1_Trc_Multi_AFC_Query_Dac((short)(v1), (unsigned char)(v2), (unsigned char)(v3), (short)(v4), (unsigned char)(v5), (short)(v6));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Query_Dac(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trc_Multi_AFC_Query_Latest_Owner(v1, v2, v3) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_L1_Trc_Multi_AFC_Query_Latest_Owner((short)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Query_Latest_Owner(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1_Trc_Multi_AFC_ControlMode_Switch(v1, v2, v3) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_L1_Trc_Multi_AFC_ControlMode_Switch((short)(v1), (unsigned char)(v2), (short)(v3));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_ControlMode_Switch(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char L1_AFC_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_L1_Trc_Multi_AFC_Update_Mode(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5);
void L1TRC_Send_L1_Trc_Multi_AFC_Current_Mode(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9);
void L1TRC_Send_L1_Trc_Multi_AFC_Query_Mode(short v1, unsigned char v2, unsigned char v3, short v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_L1_Trc_Multi_AFC_Query_Dac(short v1, unsigned char v2, unsigned char v3, short v4, unsigned char v5, short v6);
void L1TRC_Send_L1_Trc_Multi_AFC_Query_Latest_Owner(short v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_L1_Trc_Multi_AFC_ControlMode_Switch(short v1, unsigned char v2, short v3);

void Set_L1_AFC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1_AFC()	(L1_AFC_Trace_Filter[0]==1)
#define ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_H()	(ChkL1ModFltr_L1_AFC()&&((L1_AFC_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_L()	(ChkL1ModFltr_L1_AFC()&&((L1_AFC_Trace_Filter[1]&0x02)!=0))
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Update_Mode()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_H()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Current_Mode()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_H()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Query_Mode()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_L()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Query_Dac()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_L()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Query_Latest_Owner()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_L()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_ControlMode_Switch()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_H()


#endif
