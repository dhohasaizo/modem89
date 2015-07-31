#ifndef L1TRC_UL1D_MLT_SET1_DEF_H
#define L1TRC_UL1D_MLT_SET1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1D_TRC_STR_MLT_ON_OFF(v1)  (unsigned char)(v1+0)
#define UL1D_TRC_STR_AGPS(v1)  (unsigned char)(v1+2)


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_ON_OFF(v1, v2) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_ON_OFF((unsigned char)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1D_TRC_MLT_ON_OFF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_FILTER_SETTING(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_FILTER_SETTING((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_FILTER_SETTING(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_TXCRP_DEFAULT(v1, v2, v3, v4, v5) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXCRP_DEFAULT((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5));\
} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_DEFAULT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_ULPC_RPP_ITP(v1, v2) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_ULPC_RPP_ITP((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_MLT_ULPC_RPP_ITP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXBRP_RECONFIG_FLAG() do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXBRP_RECONFIG_FLAG();\
} while(0)
#else
	#define UL1D_TRC_MLT_TXBRP_RECONFIG_FLAG()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXBRP_MAX_TTI(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXBRP_MAX_TTI((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TXBRP_MAX_TTI(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_TG_METHOD(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXCRP_TG_METHOD((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_TG_METHOD(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_CFN(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXCRP_CFN((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_CFN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_MSG_STSP(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXCRP_MSG_STSP((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_MSG_STSP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_PRE_STSP(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXCRP_PRE_STSP((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_PRE_STSP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_MSGD_SFCC(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXCRP_MSGD_SFCC((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_MSGD_SFCC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_MSGC_SFCC(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXCRP_MSGC_SFCC((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_MSGC_SFCC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_PRE_SFCC(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TXCRP_PRE_SFCC((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_PRE_SFCC(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MLT_TM_ST_STROBE(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TM_ST_STROBE((unsigned long)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TM_ST_STROBE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MLT_TM_CS4_STROBE(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TM_CS4_STROBE((unsigned long)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TM_CS4_STROBE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_TM_DD_STROBE(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_TM_DD_STROBE((unsigned long)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_TM_DD_STROBE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_CS_EST_BIN(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_CS_EST_BIN((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_CS_EST_BIN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_S_RLID2PSC(v1, v2, v3, v4, v5, v6) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RFM_S_RLID2PSC((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1D_TRC_MLT_RFM_S_RLID2PSC(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_N_RLID2PSC(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RFM_N_RLID2PSC((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_RFM_N_RLID2PSC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_S_ST0_SYM_IDX(v1, v2, v3, v4, v5, v6) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RFM_S_ST0_SYM_IDX((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6));\
} while(0)
#else
	#define UL1D_TRC_MLT_RFM_S_ST0_SYM_IDX(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_N_ST0_SYM_IDX(v1) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RFM_N_ST0_SYM_IDX((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_MLT_RFM_N_ST0_SYM_IDX(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_AGPS_IMPORTAN(v1, v2, v3, v4) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_AGPS_IMPORTAN((unsigned char)(v1), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
} while(0)
#else
	#define UL1D_TRC_AGPS_IMPORTAN(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_AGPS_REPORT(v1, v2, v3) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_AGPS_REPORT((char)(v1), (unsigned long)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define UL1D_TRC_AGPS_REPORT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_AGPS_FRC_PARAM(v1, v2, v3, v4) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_AGPS_FRC_PARAM((char)(v1), (unsigned long)(v2), (char)(v3), (unsigned long)(v4));\
} while(0)
#else
	#define UL1D_TRC_AGPS_FRC_PARAM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DCH_ASU_CHECK(v1, v2, v3) do {\
		if(UL1D_MLT_SET1_Trace_Filter[0]==1 && (UL1D_MLT_SET1_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_DCH_ASU_CHECK((long)(v1), (long)(v2), (unsigned short)(v3));\
} while(0)
#else
	#define UL1D_TRC_DCH_ASU_CHECK(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char UL1D_MLT_SET1_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_UL1D_TRC_MLT_ON_OFF(unsigned char v1, unsigned short v2);
void L1TRC_Send_UL1D_TRC_MLT_FILTER_SETTING(unsigned short v1);
void L1TRC_Send_UL1D_TRC_MLT_TXCRP_DEFAULT(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5);
void L1TRC_Send_UL1D_TRC_MLT_ULPC_RPP_ITP(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_MLT_TXBRP_RECONFIG_FLAG(void);
void L1TRC_Send_UL1D_TRC_MLT_TXBRP_MAX_TTI(unsigned char v1);
void L1TRC_Send_UL1D_TRC_MLT_TXCRP_TG_METHOD(unsigned char v1);
void L1TRC_Send_UL1D_TRC_MLT_TXCRP_CFN(unsigned char v1);
void L1TRC_Send_UL1D_TRC_MLT_TXCRP_MSG_STSP(unsigned short v1);
void L1TRC_Send_UL1D_TRC_MLT_TXCRP_PRE_STSP(unsigned short v1);
void L1TRC_Send_UL1D_TRC_MLT_TXCRP_MSGD_SFCC(unsigned short v1);
void L1TRC_Send_UL1D_TRC_MLT_TXCRP_MSGC_SFCC(unsigned short v1);
void L1TRC_Send_UL1D_TRC_MLT_TXCRP_PRE_SFCC(unsigned short v1);
void L1TRC_Send_UL1D_TRC_MLT_TM_ST_STROBE(unsigned long v1);
void L1TRC_Send_UL1D_TRC_MLT_TM_CS4_STROBE(unsigned long v1);
void L1TRC_Send_UL1D_TRC_MLT_TM_DD_STROBE(unsigned long v1);
void L1TRC_Send_UL1D_TRC_MLT_CS_EST_BIN(unsigned char v1);
void L1TRC_Send_UL1D_TRC_MLT_RFM_S_RLID2PSC(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_UL1D_TRC_MLT_RFM_N_RLID2PSC(unsigned short v1);
void L1TRC_Send_UL1D_TRC_MLT_RFM_S_ST0_SYM_IDX(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_UL1D_TRC_MLT_RFM_N_ST0_SYM_IDX(unsigned char v1);
void L1TRC_Send_UL1D_TRC_AGPS_IMPORTAN(unsigned char v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_UL1D_TRC_AGPS_REPORT(char v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_UL1D_TRC_AGPS_FRC_PARAM(char v1, unsigned long v2, char v3, unsigned long v4);
void L1TRC_Send_UL1D_TRC_DCH_ASU_CHECK(long v1, long v2, unsigned short v3);

void Set_UL1D_MLT_SET1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1D_MLT_SET1()	(UL1D_MLT_SET1_Trace_Filter[0]==1)
#define ChkL1ClsFltr_UL1D_MLT_SET1_MLT_Config_L()	(ChkL1ModFltr_UL1D_MLT_SET1()&&((UL1D_MLT_SET1_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_L()	(ChkL1ModFltr_UL1D_MLT_SET1()&&((UL1D_MLT_SET1_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()	(ChkL1ModFltr_UL1D_MLT_SET1()&&((UL1D_MLT_SET1_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_L()	(ChkL1ModFltr_UL1D_MLT_SET1()&&((UL1D_MLT_SET1_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()	(ChkL1ModFltr_UL1D_MLT_SET1()&&((UL1D_MLT_SET1_Trace_Filter[1]&0x10)!=0))
#define ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_H()	(ChkL1ModFltr_UL1D_MLT_SET1()&&((UL1D_MLT_SET1_Trace_Filter[1]&0x20)!=0))
#define ChkL1ClsFltr_UL1D_MLT_SET1_AGPS_L()	(ChkL1ModFltr_UL1D_MLT_SET1()&&((UL1D_MLT_SET1_Trace_Filter[1]&0x40)!=0))
#define ChkL1ClsFltr_UL1D_MLT_SET1_DCH_ASU_Check_H()	(ChkL1ModFltr_UL1D_MLT_SET1()&&((UL1D_MLT_SET1_Trace_Filter[1]&0x80)!=0))
#define ChkL1MsgFltr_UL1D_TRC_MLT_ON_OFF()	ChkL1ClsFltr_UL1D_MLT_SET1_MLT_Config_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_FILTER_SETTING()	ChkL1ClsFltr_UL1D_MLT_SET1_MLT_Config_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_DEFAULT()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_ULPC_RPP_ITP()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXBRP_RECONFIG_FLAG()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXBRP_MAX_TTI()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_TG_METHOD()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_CFN()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_MSG_STSP()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_PRE_STSP()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_MSGD_SFCC()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_MSGC_SFCC()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_PRE_SFCC()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TM_ST_STROBE()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_H()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TM_CS4_STROBE()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_H()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TM_DD_STROBE()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_CS_EST_BIN()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_S_RLID2PSC()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_N_RLID2PSC()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_S_ST0_SYM_IDX()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_N_ST0_SYM_IDX()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_AGPS_IMPORTAN()	ChkL1ClsFltr_UL1D_MLT_SET1_AGPS_L()
#define ChkL1MsgFltr_UL1D_TRC_AGPS_REPORT()	ChkL1ClsFltr_UL1D_MLT_SET1_AGPS_L()
#define ChkL1MsgFltr_UL1D_TRC_AGPS_FRC_PARAM()	ChkL1ClsFltr_UL1D_MLT_SET1_AGPS_L()
#define ChkL1MsgFltr_UL1D_TRC_DCH_ASU_CHECK()	ChkL1ClsFltr_UL1D_MLT_SET1_DCH_ASU_Check_H()


#endif
