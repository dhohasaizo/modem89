#ifndef L1TRC_UL1D_PLUS_PRI_DEF_H
#define L1TRC_UL1D_PLUS_PRI_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1D_TRC_STR_HSPA_PLUS_TICK(v1)  (unsigned char)(v1+0)
#define UL1D_TRC_STR_DECIDE_HSSCCH(v1)  (unsigned char)(v1+4)
#define UL1D_TRC_STR_DECIDE_EAGCH(v1)  (unsigned char)(v1+12)
#define UL1D_TRC_STR_DECIDE_ERGCH_NSERV(v1)  (unsigned char)(v1+22)
#define UL1D_TRC_STR_DECIDE_EHICH(v1)  (unsigned char)(v1+28)
#define UL1D_TRC_STR_DECIDE_CQI(v1)  (unsigned char)(v1+32)
#define UL1D_TRC_STR_DECIDE_MAC_DTX_PTN(v1)  (unsigned char)(v1+42)
#define UL1D_TRC_STR_ERX_CHANNEL(v1)  (unsigned char)(v1+47)
#define UL1D_TRC_STR_DSCH_HRNTI(v1)  (unsigned char)(v1+51)
#define UL1D_TRC_STR_MISS_DECODE_DONE(v1)  (unsigned char)(v1+57)
#define UL1D_TRC_STR_CEDCH_PREAMBE_STATE(v1)  (unsigned char)(v1+65)
#define UL1D_TRC_STR_CEDCH_STATE(v1)  (unsigned char)(v1+71)
#define UL1D_TRC_STR_EPCH_STATE(v1)  (unsigned char)(v1+79)
#define UL1D_TRC_STR_PICH_RX_MODE(v1)  (unsigned char)(v1+84)
#define UL1D_TRC_STR_EFACH_STATE(v1)  (unsigned char)(v1+86)
#define UL1D_TRC_STR_EFACH_DRX_EVENT(v1)  (unsigned char)(v1+92)
#define UL1D_TRC_STR_EFACH_DRX_STATE(v1)  (unsigned char)(v1+97)
#define UL1D_TRC_STR_EFACH_DRX_STATUS(v1)  (unsigned char)(v1+101)
#define UL1D_TRC_STR_CEDCH_EVENT(v1)  (unsigned char)(v1+104)
#define UL1D_TRC_STR_CEDCH_TTI(v1)  (unsigned char)(v1+108)
#define UL1D_TRC_STR_EAI_RESULT(v1)  (unsigned char)(v1+110)
#define UL1D_TRC_STR_RAKE_CPICH_ONOFF(v1)  (unsigned char)(v1+114)
#define UL1D_TRC_STR_MIRROR_FINGER_STATUS(v1)  (unsigned char)(v1+118)
#define UL1D_TRC_STR_HSCE_CONFIG_TIMING(v1)  (unsigned char)(v1+122)
#define UL1D_TRC_STR_OPTI_CMB_GENERAL(v1)  (unsigned char)(v1+127)
#define UL1D_TRC_STR_OPTI_CMB_FACH(v1)  (unsigned char)(v1+130)
#define UL1D_TRC_STR_OPTI_CMB_DCH(v1)  (unsigned char)(v1+133)
#define UL1D_TRC_STR_RFM_DEACTIVE_REASON(v1)  (unsigned char)(v1+139)
#define UL1D_TRC_STR_HOP3G_PLL_TYPE(v1)  (unsigned char)(v1+142)


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CPC_CONFID1(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_CPC_CONFID1((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_CPC_CONFID1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CPC_ENABLED(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CPC_ENABLED((unsigned short)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_CPC_ENABLED(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CPC_ORDER(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CPC_ORDER((unsigned short)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_CPC_ORDER(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_TICK_ENTRY(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_TICK_ENTRY((unsigned char)(v1), (unsigned short)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_TICK_ENTRY(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CARRY_HSSCCH(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_CARRY_HSSCCH((unsigned char)(v1), (unsigned short)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_CARRY_HSSCCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DECIDE_HSSCCH(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_DECIDE_HSSCCH((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_DECIDE_HSSCCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSSCCH_CPC_DECISION(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_HSSCCH_CPC_DECISION((unsigned short)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_HSSCCH_CPC_DECISION(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_PROGRAM_HSSCCH(v1, v2, v3, v4, v5, v6) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_PROGRAM_HSSCCH((unsigned short)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned short)(v5), (unsigned char)(v6));\
} while(0)
#else
	#define UL1D_TRC_PROGRAM_HSSCCH(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DECIDE_EAGCH(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_DECIDE_EAGCH((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_DECIDE_EAGCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DECIDE_ERGCH_SERV(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_DECIDE_ERGCH_SERV((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_DECIDE_ERGCH_SERV(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DECIDE_ERGCH_NSERV(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_DECIDE_ERGCH_NSERV((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_DECIDE_ERGCH_NSERV(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DECIDE_EHICH(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_DECIDE_EHICH((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_DECIDE_EHICH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_PROGRAM_ERX(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_PROGRAM_ERX((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_PROGRAM_ERX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_ERX_RCV(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_ERX_RCV((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_ERX_RCV(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DECIDE_CQI(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_DECIDE_CQI((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_DECIDE_CQI(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_ULDPCCH_PTN(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_ULDPCCH_PTN((unsigned short)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1D_TRC_ULDPCCH_PTN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DECIDE_MAC_DTX(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_DECIDE_MAC_DTX((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_DECIDE_MAC_DTX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CPC_EDCH(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_CPC_EDCH((unsigned short)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5));\
} while(0)
#else
	#define UL1D_TRC_CPC_EDCH(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CPC_EDCH_1(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_CPC_EDCH_1((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_CPC_EDCH_1(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CPC_EDCH_2(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_CPC_EDCH_2((unsigned short)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_CPC_EDCH_2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CPC_EDCH_3(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_CPC_EDCH_3((unsigned short)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_CPC_EDCH_3(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_LESS_CONFIG(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_LESS_CONFIG((unsigned short)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_LESS_CONFIG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_LESS_ORDER(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_LESS_ORDER((unsigned short)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_LESS_ORDER(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DC_ENABLED(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_DC_ENABLED((unsigned short)(v1), (unsigned char)(v2), (short)(v3), (unsigned short)(v4));\
} while(0)
#else
	#define UL1D_TRC_DC_ENABLED(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DC_ORDER(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_DC_ORDER((unsigned short)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_DC_ORDER(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_TARGET_CELL(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_TARGET_CELL((unsigned char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1D_TRC_TARGET_CELL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_TARGET_SCCH_RESULT(v1, v2, v3, v4, v5, v6) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_TARGET_SCCH_RESULT((unsigned short)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6));\
} while(0)
#else
	#define UL1D_TRC_TARGET_SCCH_RESULT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RF_RX_CENTRAL_CONTROL(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RF_RX_CENTRAL_CONTROL((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_RF_RX_CENTRAL_CONTROL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RF_TX_CENTRAL_CONTROL(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RF_TX_CENTRAL_CONTROL((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_RF_TX_CENTRAL_CONTROL(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RF_SYNTH10MHZ_CH(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_RF_SYNTH10MHZ_CH((unsigned char)(v1), (unsigned short)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_RF_SYNTH10MHZ_CH(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RF_SYNTH10MHZ_MEAS(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_RF_SYNTH10MHZ_MEAS((unsigned char)(v1), (unsigned short)(v2), (unsigned short)(v3));\
} while(0)
#else
	#define UL1D_TRC_RF_SYNTH10MHZ_MEAS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RF_CENTRAL_FRAMETICK(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RF_CENTRAL_FRAMETICK((unsigned char)(v1), (unsigned char)(v2), (unsigned short)(v3));\
} while(0)
#else
	#define UL1D_TRC_RF_CENTRAL_FRAMETICK(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DSCH_HRNTI_TYPE(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_DSCH_HRNTI_TYPE((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_DSCH_HRNTI_TYPE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MISS_DECODE_DONE(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_MISS_DECODE_DONE((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_MISS_DECODE_DONE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MISS_EAGCH_DECODE_DONE() do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_MISS_EAGCH_DECODE_DONE();\
} while(0)
#else
	#define UL1D_TRC_MISS_EAGCH_DECODE_DONE()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MISS_ERGCH_DECODE_DONE() do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_MISS_ERGCH_DECODE_DONE();\
} while(0)
#else
	#define UL1D_TRC_MISS_ERGCH_DECODE_DONE()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EPCH_STATE(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_EPCH_STATE((unsigned char)(v1), (unsigned char)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1D_TRC_EPCH_STATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EPCH_RECEIVE(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_EPCH_RECEIVE((unsigned char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1D_TRC_EPCH_RECEIVE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EPCH_HANDLE_CONFIG(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_EPCH_HANDLE_CONFIG((char)(v1), (unsigned short)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_EPCH_HANDLE_CONFIG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_STATE(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_STATE((unsigned char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1D_TRC_EFACH_STATE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_FMO(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_FMO((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_EFACH_FMO(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_RECONFIG(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_RECONFIG((unsigned long)(v1));\
} while(0)
#else
	#define UL1D_TRC_EFACH_RECONFIG(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_DRX_CONFIG(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_DRX_CONFIG((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5));\
} while(0)
#else
	#define UL1D_TRC_EFACH_DRX_CONFIG(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_DRX_EVENT(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_DRX_EVENT((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_EFACH_DRX_EVENT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_DRX_STATE(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_DRX_STATE((unsigned char)(v1), (unsigned short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1D_TRC_EFACH_DRX_STATE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_DRX_STOP_DSCH_IMM(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_DRX_STOP_DSCH_IMM((unsigned char)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1D_TRC_EFACH_DRX_STOP_DSCH_IMM(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_HSDPCCH_CONFIG(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_HSDPCCH_CONFIG((unsigned short)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1D_TRC_EFACH_HSDPCCH_CONFIG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_HSDPCCH_START(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_HSDPCCH_START((unsigned short)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1D_TRC_EFACH_HSDPCCH_START(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_HSDPCCH_FRAMETICK(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_HSDPCCH_FRAMETICK((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_EFACH_HSDPCCH_FRAMETICK(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EFACH_HSDPCCH_STOP() do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_EFACH_HSDPCCH_STOP();\
} while(0)
#else
	#define UL1D_TRC_EFACH_HSDPCCH_STOP()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_STATE(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_STATE((unsigned char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_STATE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_EVENT(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_EVENT((unsigned char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_EVENT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_EAI_RESULT(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_EAI_RESULT((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_EAI_RESULT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_START(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_START((char)(v1), (char)(v2), (char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_START(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_RECONFIG(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_RECONFIG((unsigned long)(v1));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_RECONFIG(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_TRANSMIT_PREPARE(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_PREPARE((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_TRANSMIT_PREPARE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_AGHICH_LATCH_TIME(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_AGHICH_LATCH_TIME((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_AGHICH_LATCH_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_TRANSMIT(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT((unsigned char)(v1), (char)(v2), (char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_TRANSMIT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_TRANSMIT_ULDPCCH(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_ULDPCCH((char)(v1), (char)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_TRANSMIT_ULDPCCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_TRANSMIT_FDPCH(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_FDPCH((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_TRANSMIT_FDPCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_TRANSMIT_EHIRGCH(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_EHIRGCH((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (char)(v5));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_TRANSMIT_EHIRGCH(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CEDCH_TRANSMIT_EAGCH(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_EAGCH((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_CEDCH_TRANSMIT_EAGCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_NEW_RFM_TIME56(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_NEW_RFM_TIME56((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_NEW_RFM_TIME56(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_NEW_RFM_DYNAMIC_LATCH(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_NEW_RFM_DYNAMIC_LATCH((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_NEW_RFM_DYNAMIC_LATCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_NEW_RFM_SKIP_HANDLE(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_NEW_RFM_SKIP_HANDLE((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_NEW_RFM_SKIP_HANDLE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_NEW_RFM_MIRROR_FNG(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_NEW_RFM_MIRROR_FNG((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_NEW_RFM_MIRROR_FNG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_NEW_RFM_MIRROR_STATUS(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_NEW_RFM_MIRROR_STATUS((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_NEW_RFM_MIRROR_STATUS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_NEW_RFM_MIRROR_FNG_INFO(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_NEW_RFM_MIRROR_FNG_INFO((unsigned char)(v1), (char)(v2), (unsigned char)(v3), (unsigned short)(v4), (unsigned short)(v5));\
} while(0)
#else
	#define UL1D_TRC_NEW_RFM_MIRROR_FNG_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_NEW_RFM_MIRROR_HSCE(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_NEW_RFM_MIRROR_HSCE((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_NEW_RFM_MIRROR_HSCE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RFM_NORMAL_DEACTIVATE(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RFM_NORMAL_DEACTIVATE((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_RFM_NORMAL_DEACTIVATE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_STATIC_CHANNEL_DETECT(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_STATIC_CHANNEL_DETECT((unsigned char)(v1), (unsigned char)(v2), (short)(v3), (short)(v4), (char)(v5), (short)(v6), (unsigned char)(v7));\
} while(0)
#else
	#define UL1D_TRC_STATIC_CHANNEL_DETECT(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_STATIC_CHANNEL_COLLECT(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_STATIC_CHANNEL_COLLECT((long)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (unsigned char)(v7));\
} while(0)
#else
	#define UL1D_TRC_STATIC_CHANNEL_COLLECT(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MPS_2ND_PART(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_MPS_2ND_PART((char)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (unsigned short)(v7), (unsigned short)(v8), (unsigned short)(v9), (unsigned short)(v10), (unsigned short)(v11));\
} while(0)
#else
	#define UL1D_TRC_MPS_2ND_PART(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MPS_VALID_PATH(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_MPS_VALID_PATH((unsigned char)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11));\
} while(0)
#else
	#define UL1D_TRC_MPS_VALID_PATH(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RFM_RECORD_PATH(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RFM_RECORD_PATH((unsigned char)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1D_TRC_RFM_RECORD_PATH(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RFM_RSSI_VAR_ACC(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RFM_RSSI_VAR_ACC((unsigned short)(v1), (unsigned short)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_RFM_RSSI_VAR_ACC(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RFM_RSSI_VAR_RESULT(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RFM_RSSI_VAR_RESULT((unsigned short)(v1), (unsigned short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1D_TRC_RFM_RSSI_VAR_RESULT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RFM_SPEST_RELIABLE(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RFM_SPEST_RELIABLE((short)(v1), (short)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_RFM_SPEST_RELIABLE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RFM_CHECK_VALID_MIRROR(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RFM_CHECK_VALID_MIRROR((unsigned char)(v1), (unsigned long)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define UL1D_TRC_RFM_CHECK_VALID_MIRROR(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RFM_CAL_RL_PAC_ADDR(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_RFM_CAL_RL_PAC_ADDR((char)(v1), (unsigned short)(v2), (unsigned short)(v3), (char)(v4), (unsigned char)(v5), (char)(v6), (short)(v7));\
} while(0)
#else
	#define UL1D_TRC_RFM_CAL_RL_PAC_ADDR(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_FNG_RELEASE_CHECK(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_FNG_RELEASE_CHECK((char)(v1), (long)(v2), (unsigned short)(v3), (unsigned short)(v4));\
} while(0)
#else
	#define UL1D_TRC_FNG_RELEASE_CHECK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HRFM_LS_TIMING_ZERO(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_HRFM_LS_TIMING_ZERO((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_HRFM_LS_TIMING_ZERO(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_STATIC_CHANNEL_DETAIL(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_STATIC_CHANNEL_DETAIL((short)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_STATIC_CHANNEL_DETAIL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_NEW_HSCE_FRAME_CONFIG(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_NEW_HSCE_FRAME_CONFIG((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_NEW_HSCE_FRAME_CONFIG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_STATIC_EQBYPASS(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_STATIC_EQBYPASS((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned long)(v4));\
} while(0)
#else
	#define UL1D_TRC_HSCE_STATIC_EQBYPASS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_LS_DECISION(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_LS_DECISION((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_HSCE_LS_DECISION(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_LS_TIMING_TOGGLE(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_LS_TIMING_TOGGLE((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_HSCE_LS_TIMING_TOGGLE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_HW_STATUS(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_HW_STATUS((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_HSCE_HW_STATUS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_OTR_CELL_DBG(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_OTR_CELL_DBG((unsigned short)(v1), (unsigned char)(v2), (long)(v3), (unsigned short)(v4), (unsigned char)(v5), (long)(v6), (unsigned char)(v7));\
} while(0)
#else
	#define UL1D_TRC_HSCE_OTR_CELL_DBG(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_DETAIL_DBG(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_DETAIL_DBG((unsigned short)(v1), (unsigned short)(v2), (unsigned char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_HSCE_DETAIL_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_ANT2_INFO(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_ANT2_INFO((unsigned short)(v1), (unsigned char)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_HSCE_ANT2_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OCIC_ABS_THR(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_OCIC_ABS_THR((short)(v1), (char)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1D_TRC_OCIC_ABS_THR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OCIC_REL_THR(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_OCIC_REL_THR((short)(v1), (char)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1D_TRC_OCIC_REL_THR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OCIC_SWITCH_THR(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_OCIC_SWITCH_THR((short)(v1), (char)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1D_TRC_OCIC_SWITCH_THR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_UPDATE_ECNO(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_UPDATE_ECNO((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1D_TRC_HSCE_UPDATE_ECNO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_LS_ASSIGN_INFO(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_LS_ASSIGN_INFO((unsigned short)(v1), (unsigned char)(v2), (short)(v3));\
} while(0)
#else
	#define UL1D_TRC_HSCE_LS_ASSIGN_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_SPEST_WIN_CTR(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_SPEST_WIN_CTR((unsigned char)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1D_TRC_HSCE_SPEST_WIN_CTR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_SPEST_WIN_BOUND(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_SPEST_WIN_BOUND((unsigned short)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1D_TRC_HSCE_SPEST_WIN_BOUND(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_SPEST_LCR_ENABLE(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_SPEST_LCR_ENABLE((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4));\
} while(0)
#else
	#define UL1D_TRC_HSCE_SPEST_LCR_ENABLE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_SPEST_INTEGRATOR(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_SPEST_INTEGRATOR((unsigned char)(v1), (unsigned long)(v2), (unsigned short)(v3));\
} while(0)
#else
	#define UL1D_TRC_HSCE_SPEST_INTEGRATOR(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_SPEST_ALPHA_FILTER(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_SPEST_ALPHA_FILTER((unsigned long)(v1), (unsigned short)(v2), (unsigned short)(v3));\
} while(0)
#else
	#define UL1D_TRC_HSCE_SPEST_ALPHA_FILTER(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_SPEST_RESET(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_HSCE_SPEST_RESET((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_HSCE_SPEST_RESET(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_PBASP_DBG_3(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_PBASP_DBG_3((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1D_PBASP_DBG_3(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_PBASP_DBG_4(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_PBASP_DBG_4((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8));\
} while(0)
#else
	#define UL1D_PBASP_DBG_4(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_PBASP_DBG_5(v1, v2, v3, v4, v5, v6) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_PBASP_DBG_5((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1D_PBASP_DBG_5(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_PBASP_DBG_6(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_PBASP_DBG_6((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1D_PBASP_DBG_6(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_PBASP_DBG_7(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_PBASP_DBG_7((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1D_PBASP_DBG_7(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_PBASP_DBG_8(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_PBASP_DBG_8((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1D_PBASP_DBG_8(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SET_POINT_STATUS(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_SET_POINT_STATUS((char)(v1));\
} while(0)
#else
	#define UL1D_TRC_SET_POINT_STATUS(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SET_POINT_CHANGE(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_SET_POINT_CHANGE((char)(v1));\
} while(0)
#else
	#define UL1D_TRC_SET_POINT_CHANGE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SET_POINT_INJECT(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_SET_POINT_INJECT((short)(v1));\
} while(0)
#else
	#define UL1D_TRC_SET_POINT_INJECT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OCIC_USING_ECNO(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_OCIC_USING_ECNO((char)(v1));\
} while(0)
#else
	#define UL1D_TRC_OCIC_USING_ECNO(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RAKE_CPICH_ONOFF(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_RAKE_CPICH_ONOFF((unsigned char)(v1), (unsigned short)(v2), (unsigned short)(v3), (char)(v4), (char)(v5));\
} while(0)
#else
	#define UL1D_TRC_RAKE_CPICH_ONOFF(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_REG_DBG(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_REG_DBG((unsigned long)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1D_TRC_REG_DBG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_REG_DBG_SLOT(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_REG_DBG_SLOT((unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4), (unsigned long)(v5), (unsigned long)(v6), (unsigned long)(v7), (unsigned long)(v8), (unsigned long)(v9), (unsigned long)(v10), (unsigned long)(v11), (unsigned long)(v12), (unsigned long)(v13), (unsigned long)(v14), (unsigned long)(v15), (unsigned long)(v16));\
} while(0)
#else
	#define UL1D_TRC_REG_DBG_SLOT(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MISS_SCCH_STS0_DBG(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_MISS_SCCH_STS0_DBG((unsigned char)(v1), (unsigned char)(v2), (unsigned short)(v3), (unsigned short)(v4), (unsigned short)(v5), (unsigned short)(v6), (unsigned short)(v7));\
} while(0)
#else
	#define UL1D_TRC_MISS_SCCH_STS0_DBG(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CPC_DQE_SIR(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_CPC_DQE_SIR((long)(v1), (short)(v2));\
} while(0)
#else
	#define UL1D_TRC_CPC_DQE_SIR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DPC_HW_WIND_SIR(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_DPC_HW_WIND_SIR((unsigned long)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1D_TRC_DPC_HW_WIND_SIR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_RXSRP_SIG_AMP_RAW(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_RXSRP_SIG_AMP_RAW((unsigned long)(v1));\
} while(0)
#else
	#define UL1D_TRC_RXSRP_SIG_AMP_RAW(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DQE_SIR_WORKAROUND(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_DQE_SIR_WORKAROUND((long)(v1), (unsigned long)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_DQE_SIR_WORKAROUND(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_FPGA_FLASH_VERSION(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_FPGA_FLASH_VERSION((unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
} while(0)
#else
	#define UL1D_TRC_FPGA_FLASH_VERSION(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_SLOT_NUM(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0 )\
			L1TRC_Send_UL1D_TRC_SLOT_NUM((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_SLOT_NUM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OPTI_CMB_BASIC(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_OPTI_CMB_BASIC((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_OPTI_CMB_BASIC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OPTI_CMB_FACH(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_OPTI_CMB_FACH((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1D_TRC_OPTI_CMB_FACH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OPTI_CMB_DCH_TICK(v1, v2, v3) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_OPTI_CMB_DCH_TICK((unsigned short)(v1), (unsigned short)(v2), (unsigned char)(v3));\
} while(0)
#else
	#define UL1D_TRC_OPTI_CMB_DCH_TICK(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OPTI_CMB_DCH_SPECIAL(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_OPTI_CMB_DCH_SPECIAL((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_OPTI_CMB_DCH_SPECIAL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OPTI_CMB_REG_SET(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_OPTI_CMB_REG_SET((unsigned char)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1D_TRC_OPTI_CMB_REG_SET(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OPTI_CMB_ECPT_CNT(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_OPTI_CMB_ECPT_CNT((unsigned long)(v1));\
} while(0)
#else
	#define UL1D_TRC_OPTI_CMB_ECPT_CNT(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HOP3G_PLL(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_HOP3G_PLL((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_TRC_HOP3G_PLL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DSCH_BLER(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_DSCH_BLER((unsigned char)(v1), (unsigned short)(v2), (unsigned short)(v3), (unsigned short)(v4));\
} while(0)
#else
	#define UL1D_TRC_DSCH_BLER(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_EDCH_ACK_RATE(v1) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_EDCH_ACK_RATE((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_EDCH_ACK_RATE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RF_CW(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_RF_CW((unsigned short)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1D_TRC_RF_CW(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RF_CW1_CONFIG(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_RF_CW1_CONFIG((unsigned char)(v1), (unsigned short)(v2), (unsigned short)(v3), (unsigned short)(v4));\
} while(0)
#else
	#define UL1D_TRC_RF_CW1_CONFIG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_EDCH_BITMAP(v1, v2) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_TRC_EDCH_BITMAP((unsigned long)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1D_TRC_EDCH_BITMAP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_UPDATE_SERVING(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_UPDATE_SERVING((char)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1D_TRC_UPDATE_SERVING(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_UPDATE_SERVING_DIV(v1, v2, v3, v4) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_UPDATE_SERVING_DIV((char)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1D_TRC_UPDATE_SERVING_DIV(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_UPDATE_STRONGEST(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_UPDATE_STRONGEST((char)(v1), (unsigned char)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1D_TRC_UPDATE_STRONGEST(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_UPDATE_STRONGEST_DIV(v1, v2, v3, v4, v5) do {\
		if(UL1D_PLUS_PRI_Trace_Filter[0]==1 && (UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_UPDATE_STRONGEST_DIV((char)(v1), (unsigned char)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1D_TRC_UPDATE_STRONGEST_DIV(v1, v2, v3, v4, v5)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char UL1D_PLUS_PRI_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_UL1D_TRC_CPC_CONFID1(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_CPC_ENABLED(unsigned short v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_CPC_ORDER(unsigned short v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_TICK_ENTRY(unsigned char v1, unsigned short v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_CARRY_HSSCCH(unsigned char v1, unsigned short v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_DECIDE_HSSCCH(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_HSSCCH_CPC_DECISION(unsigned short v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_PROGRAM_HSSCCH(unsigned short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned short v5, unsigned char v6);
void L1TRC_Send_UL1D_TRC_DECIDE_EAGCH(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_DECIDE_ERGCH_SERV(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_DECIDE_ERGCH_NSERV(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_DECIDE_EHICH(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_PROGRAM_ERX(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_ERX_RCV(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_DECIDE_CQI(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_ULDPCCH_PTN(unsigned short v1, unsigned short v2);
void L1TRC_Send_UL1D_TRC_DECIDE_MAC_DTX(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_CPC_EDCH(unsigned short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5);
void L1TRC_Send_UL1D_TRC_CPC_EDCH_1(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_CPC_EDCH_2(unsigned short v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_CPC_EDCH_3(unsigned short v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_LESS_CONFIG(unsigned short v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_LESS_ORDER(unsigned short v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_DC_ENABLED(unsigned short v1, unsigned char v2, short v3, unsigned short v4);
void L1TRC_Send_UL1D_TRC_DC_ORDER(unsigned short v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_TARGET_CELL(unsigned char v1, short v2);
void L1TRC_Send_UL1D_TRC_TARGET_SCCH_RESULT(unsigned short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_UL1D_TRC_RF_RX_CENTRAL_CONTROL(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_RF_TX_CENTRAL_CONTROL(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_RF_SYNTH10MHZ_CH(unsigned char v1, unsigned short v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_RF_SYNTH10MHZ_MEAS(unsigned char v1, unsigned short v2, unsigned short v3);
void L1TRC_Send_UL1D_TRC_RF_CENTRAL_FRAMETICK(unsigned char v1, unsigned char v2, unsigned short v3);
void L1TRC_Send_UL1D_TRC_DSCH_HRNTI_TYPE(unsigned char v1);
void L1TRC_Send_UL1D_TRC_MISS_DECODE_DONE(unsigned char v1);
void L1TRC_Send_UL1D_TRC_MISS_EAGCH_DECODE_DONE(void);
void L1TRC_Send_UL1D_TRC_MISS_ERGCH_DECODE_DONE(void);
void L1TRC_Send_UL1D_TRC_EPCH_STATE(unsigned char v1, unsigned char v2, char v3, char v4);
void L1TRC_Send_UL1D_TRC_EPCH_RECEIVE(unsigned char v1, char v2);
void L1TRC_Send_UL1D_TRC_EPCH_HANDLE_CONFIG(char v1, unsigned short v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_EFACH_STATE(unsigned char v1, char v2);
void L1TRC_Send_UL1D_TRC_EFACH_FMO(unsigned short v1);
void L1TRC_Send_UL1D_TRC_EFACH_RECONFIG(unsigned long v1);
void L1TRC_Send_UL1D_TRC_EFACH_DRX_CONFIG(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5);
void L1TRC_Send_UL1D_TRC_EFACH_DRX_EVENT(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_EFACH_DRX_STATE(unsigned char v1, unsigned short v2, char v3);
void L1TRC_Send_UL1D_TRC_EFACH_DRX_STOP_DSCH_IMM(unsigned char v1, unsigned short v2);
void L1TRC_Send_UL1D_TRC_EFACH_HSDPCCH_CONFIG(unsigned short v1, unsigned short v2);
void L1TRC_Send_UL1D_TRC_EFACH_HSDPCCH_START(unsigned short v1, unsigned short v2);
void L1TRC_Send_UL1D_TRC_EFACH_HSDPCCH_FRAMETICK(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_EFACH_HSDPCCH_STOP(void);
void L1TRC_Send_UL1D_TRC_CEDCH_STATE(unsigned char v1, char v2);
void L1TRC_Send_UL1D_TRC_CEDCH_EVENT(unsigned char v1, char v2);
void L1TRC_Send_UL1D_TRC_CEDCH_EAI_RESULT(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_CEDCH_START(char v1, char v2, char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_CEDCH_RECONFIG(unsigned long v1);
void L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_PREPARE(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_CEDCH_AGHICH_LATCH_TIME(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT(unsigned char v1, char v2, char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_ULDPCCH(char v1, char v2, unsigned long v3);
void L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_FDPCH(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_EHIRGCH(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, char v5);
void L1TRC_Send_UL1D_TRC_CEDCH_TRANSMIT_EAGCH(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_NEW_RFM_TIME56(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_NEW_RFM_DYNAMIC_LATCH(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_NEW_RFM_SKIP_HANDLE(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_NEW_RFM_MIRROR_FNG(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_NEW_RFM_MIRROR_STATUS(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_NEW_RFM_MIRROR_FNG_INFO(unsigned char v1, char v2, unsigned char v3, unsigned short v4, unsigned short v5);
void L1TRC_Send_UL1D_TRC_NEW_RFM_MIRROR_HSCE(unsigned char v1);
void L1TRC_Send_UL1D_TRC_RFM_NORMAL_DEACTIVATE(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_STATIC_CHANNEL_DETECT(unsigned char v1, unsigned char v2, short v3, short v4, char v5, short v6, unsigned char v7);
void L1TRC_Send_UL1D_TRC_STATIC_CHANNEL_COLLECT(long v1, short v2, short v3, short v4, short v5, short v6, unsigned char v7);
void L1TRC_Send_UL1D_TRC_MPS_2ND_PART(char v1, short v2, short v3, short v4, short v5, short v6, unsigned short v7, unsigned short v8, unsigned short v9, unsigned short v10, unsigned short v11);
void L1TRC_Send_UL1D_TRC_MPS_VALID_PATH(unsigned char v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11);
void L1TRC_Send_UL1D_TRC_RFM_RECORD_PATH(unsigned char v1, short v2, short v3);
void L1TRC_Send_UL1D_TRC_RFM_RSSI_VAR_ACC(unsigned short v1, unsigned short v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_RFM_RSSI_VAR_RESULT(unsigned short v1, unsigned short v2, short v3);
void L1TRC_Send_UL1D_TRC_RFM_SPEST_RELIABLE(short v1, short v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_RFM_CHECK_VALID_MIRROR(unsigned char v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_UL1D_TRC_RFM_CAL_RL_PAC_ADDR(char v1, unsigned short v2, unsigned short v3, char v4, unsigned char v5, char v6, short v7);
void L1TRC_Send_UL1D_TRC_FNG_RELEASE_CHECK(char v1, long v2, unsigned short v3, unsigned short v4);
void L1TRC_Send_UL1D_TRC_HRFM_LS_TIMING_ZERO(unsigned char v1);
void L1TRC_Send_UL1D_TRC_STATIC_CHANNEL_DETAIL(short v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_NEW_HSCE_FRAME_CONFIG(unsigned char v1);
void L1TRC_Send_UL1D_TRC_HSCE_STATIC_EQBYPASS(unsigned char v1, unsigned char v2, unsigned char v3, unsigned long v4);
void L1TRC_Send_UL1D_TRC_HSCE_LS_DECISION(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_HSCE_LS_TIMING_TOGGLE(unsigned char v1);
void L1TRC_Send_UL1D_TRC_HSCE_HW_STATUS(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_HSCE_OTR_CELL_DBG(unsigned short v1, unsigned char v2, long v3, unsigned short v4, unsigned char v5, long v6, unsigned char v7);
void L1TRC_Send_UL1D_TRC_HSCE_DETAIL_DBG(unsigned short v1, unsigned short v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_HSCE_ANT2_INFO(unsigned short v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_OCIC_ABS_THR(short v1, char v2, short v3, short v4);
void L1TRC_Send_UL1D_TRC_OCIC_REL_THR(short v1, char v2, short v3, short v4);
void L1TRC_Send_UL1D_TRC_OCIC_SWITCH_THR(short v1, char v2, short v3, short v4);
void L1TRC_Send_UL1D_TRC_HSCE_UPDATE_ECNO(short v1, short v2, short v3);
void L1TRC_Send_UL1D_TRC_HSCE_LS_ASSIGN_INFO(unsigned short v1, unsigned char v2, short v3);
void L1TRC_Send_UL1D_TRC_HSCE_SPEST_WIN_CTR(unsigned char v1, unsigned short v2);
void L1TRC_Send_UL1D_TRC_HSCE_SPEST_WIN_BOUND(unsigned short v1, unsigned short v2);
void L1TRC_Send_UL1D_TRC_HSCE_SPEST_LCR_ENABLE(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_UL1D_TRC_HSCE_SPEST_INTEGRATOR(unsigned char v1, unsigned long v2, unsigned short v3);
void L1TRC_Send_UL1D_TRC_HSCE_SPEST_ALPHA_FILTER(unsigned long v1, unsigned short v2, unsigned short v3);
void L1TRC_Send_UL1D_TRC_HSCE_SPEST_RESET(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_PBASP_DBG_3(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1D_PBASP_DBG_4(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8);
void L1TRC_Send_UL1D_PBASP_DBG_5(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_UL1D_PBASP_DBG_6(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1D_PBASP_DBG_7(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1D_PBASP_DBG_8(short v1, short v2, short v3);
void L1TRC_Send_UL1D_TRC_SET_POINT_STATUS(char v1);
void L1TRC_Send_UL1D_TRC_SET_POINT_CHANGE(char v1);
void L1TRC_Send_UL1D_TRC_SET_POINT_INJECT(short v1);
void L1TRC_Send_UL1D_TRC_OCIC_USING_ECNO(char v1);
void L1TRC_Send_UL1D_TRC_RAKE_CPICH_ONOFF(unsigned char v1, unsigned short v2, unsigned short v3, char v4, char v5);
void L1TRC_Send_UL1D_TRC_REG_DBG(unsigned long v1, unsigned long v2);
void L1TRC_Send_UL1D_TRC_REG_DBG_SLOT(unsigned long v1, unsigned long v2, unsigned long v3, unsigned long v4, unsigned long v5, unsigned long v6, unsigned long v7, unsigned long v8, unsigned long v9, unsigned long v10, unsigned long v11, unsigned long v12, unsigned long v13, unsigned long v14, unsigned long v15, unsigned long v16);
void L1TRC_Send_UL1D_TRC_MISS_SCCH_STS0_DBG(unsigned char v1, unsigned char v2, unsigned short v3, unsigned short v4, unsigned short v5, unsigned short v6, unsigned short v7);
void L1TRC_Send_UL1D_TRC_CPC_DQE_SIR(long v1, short v2);
void L1TRC_Send_UL1D_TRC_DPC_HW_WIND_SIR(unsigned long v1, unsigned long v2);
void L1TRC_Send_UL1D_TRC_RXSRP_SIG_AMP_RAW(unsigned long v1);
void L1TRC_Send_UL1D_TRC_DQE_SIR_WORKAROUND(long v1, unsigned long v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_FPGA_FLASH_VERSION(unsigned long v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_UL1D_TRC_SLOT_NUM(unsigned char v1);
void L1TRC_Send_UL1D_TRC_OPTI_CMB_BASIC(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_OPTI_CMB_FACH(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1D_TRC_OPTI_CMB_DCH_TICK(unsigned short v1, unsigned short v2, unsigned char v3);
void L1TRC_Send_UL1D_TRC_OPTI_CMB_DCH_SPECIAL(unsigned char v1);
void L1TRC_Send_UL1D_TRC_OPTI_CMB_REG_SET(unsigned char v1, unsigned short v2);
void L1TRC_Send_UL1D_TRC_OPTI_CMB_ECPT_CNT(unsigned long v1);
void L1TRC_Send_UL1D_TRC_HOP3G_PLL(unsigned char v1);
void L1TRC_Send_UL1D_TRC_DSCH_BLER(unsigned char v1, unsigned short v2, unsigned short v3, unsigned short v4);
void L1TRC_Send_UL1D_TRC_EDCH_ACK_RATE(unsigned short v1);
void L1TRC_Send_UL1D_TRC_RF_CW(unsigned short v1, unsigned long v2);
void L1TRC_Send_UL1D_TRC_RF_CW1_CONFIG(unsigned char v1, unsigned short v2, unsigned short v3, unsigned short v4);
void L1TRC_Send_UL1D_TRC_EDCH_BITMAP(unsigned long v1, unsigned short v2);
void L1TRC_Send_UL1D_TRC_UPDATE_SERVING(char v1, short v2, short v3, short v4);
void L1TRC_Send_UL1D_TRC_UPDATE_SERVING_DIV(char v1, short v2, short v3, short v4);
void L1TRC_Send_UL1D_TRC_UPDATE_STRONGEST(char v1, unsigned char v2, short v3, short v4, short v5);
void L1TRC_Send_UL1D_TRC_UPDATE_STRONGEST_DIV(char v1, unsigned char v2, short v3, short v4, short v5);

void Set_UL1D_PLUS_PRI_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1D_PLUS_PRI()	(UL1D_PLUS_PRI_Trace_Filter[0]==1)
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_L()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EPCH_H()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EPCH_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[1]&0x10)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[1]&0x20)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[1]&0x40)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[1]&0x80)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[2]&0x01)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[2]&0x02)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[2]&0x04)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_HSCE_SPEST_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[2]&0x08)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_RAKE_H()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[2]&0x10)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[2]&0x20)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_DPC_R8_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[2]&0x40)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_FPGA_INFO_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[2]&0x80)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_OPTI_CMB_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[3]&0x01)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_DQE_WORKAROUND_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[3]&0x02)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_MISC_H()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[3]&0x04)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_MISC_M()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[3]&0x08)!=0))
#define ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_RF_H()	(ChkL1ModFltr_UL1D_PLUS_PRI()&&((UL1D_PLUS_PRI_Trace_Filter[3]&0x10)!=0))
#define ChkL1MsgFltr_UL1D_TRC_CPC_CONFID1()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_CPC_ENABLED()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_CPC_ORDER()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_TICK_ENTRY()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_L()
#define ChkL1MsgFltr_UL1D_TRC_CARRY_HSSCCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_DECIDE_HSSCCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_HSSCCH_CPC_DECISION()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_PROGRAM_HSSCCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_DECIDE_EAGCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_DECIDE_ERGCH_SERV()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_DECIDE_ERGCH_NSERV()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_DECIDE_EHICH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_PROGRAM_ERX()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_ERX_RCV()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_DECIDE_CQI()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_ULDPCCH_PTN()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_DECIDE_MAC_DTX()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_CPC_EDCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_CPC_EDCH_1()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_CPC_EDCH_2()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_CPC_EDCH_3()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_LESS_CONFIG()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_LESS_ORDER()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_DC_ENABLED()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_DC_ORDER()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_TARGET_CELL()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_TARGET_SCCH_RESULT()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_RF_RX_CENTRAL_CONTROL()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_RF_TX_CENTRAL_CONTROL()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_RF_SYNTH10MHZ_CH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_RF_SYNTH10MHZ_MEAS()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_RF_CENTRAL_FRAMETICK()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_DSCH_HRNTI_TYPE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_L()
#define ChkL1MsgFltr_UL1D_TRC_MISS_DECODE_DONE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_MISS_EAGCH_DECODE_DONE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_MISS_ERGCH_DECODE_DONE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_H()
#define ChkL1MsgFltr_UL1D_TRC_EPCH_STATE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EPCH_H()
#define ChkL1MsgFltr_UL1D_TRC_EPCH_RECEIVE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EPCH_H()
#define ChkL1MsgFltr_UL1D_TRC_EPCH_HANDLE_CONFIG()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EPCH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_STATE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_FMO()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_RECONFIG()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_DRX_CONFIG()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_DRX_EVENT()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_DRX_STATE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_DRX_STOP_DSCH_IMM()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_HSDPCCH_CONFIG()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_HSDPCCH_START()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_HSDPCCH_FRAMETICK()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_EFACH_HSDPCCH_STOP()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_EFACH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_STATE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_EVENT()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_EAI_RESULT()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_START()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_RECONFIG()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_TRANSMIT_PREPARE()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_AGHICH_LATCH_TIME()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_TRANSMIT()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_TRANSMIT_ULDPCCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_TRANSMIT_FDPCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_TRANSMIT_EHIRGCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_CEDCH_TRANSMIT_EAGCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_CEDCH_H()
#define ChkL1MsgFltr_UL1D_TRC_NEW_RFM_TIME56()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_NEW_RFM_DYNAMIC_LATCH()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_NEW_RFM_SKIP_HANDLE()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_NEW_RFM_MIRROR_FNG()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_NEW_RFM_MIRROR_STATUS()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_NEW_RFM_MIRROR_FNG_INFO()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_NEW_RFM_MIRROR_HSCE()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_RFM_NORMAL_DEACTIVATE()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_STATIC_CHANNEL_DETECT()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_STATIC_CHANNEL_COLLECT()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_MPS_2ND_PART()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_MPS_VALID_PATH()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_RFM_RECORD_PATH()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_RFM_RSSI_VAR_ACC()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_RFM_RSSI_VAR_RESULT()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_RFM_SPEST_RELIABLE()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_RFM_CHECK_VALID_MIRROR()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_RFM_CAL_RL_PAC_ADDR()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_FNG_RELEASE_CHECK()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_LS_TIMING_ZERO()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_STATIC_CHANNEL_DETAIL()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_RFM_M()
#define ChkL1MsgFltr_UL1D_TRC_NEW_HSCE_FRAME_CONFIG()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_STATIC_EQBYPASS()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_LS_DECISION()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_LS_TIMING_TOGGLE()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_HW_STATUS()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_OTR_CELL_DBG()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_DETAIL_DBG()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_ANT2_INFO()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_OCIC_ABS_THR()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_OCIC_REL_THR()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_OCIC_SWITCH_THR()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_UPDATE_ECNO()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_LS_ASSIGN_INFO()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_SPEST_WIN_CTR()	ChkL1ClsFltr_UL1D_PLUS_PRI_HSCE_SPEST_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_SPEST_WIN_BOUND()	ChkL1ClsFltr_UL1D_PLUS_PRI_HSCE_SPEST_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_SPEST_LCR_ENABLE()	ChkL1ClsFltr_UL1D_PLUS_PRI_HSCE_SPEST_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_SPEST_INTEGRATOR()	ChkL1ClsFltr_UL1D_PLUS_PRI_HSCE_SPEST_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_SPEST_ALPHA_FILTER()	ChkL1ClsFltr_UL1D_PLUS_PRI_HSCE_SPEST_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_SPEST_RESET()	ChkL1ClsFltr_UL1D_PLUS_PRI_HSCE_SPEST_M()
#define ChkL1MsgFltr_UL1D_PBASP_DBG_3()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_PBASP_DBG_4()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_PBASP_DBG_5()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_PBASP_DBG_6()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_PBASP_DBG_7()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_PBASP_DBG_8()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_TRC_SET_POINT_STATUS()	ChkL1ClsFltr_UL1D_PLUS_PRI_RAKE_H()
#define ChkL1MsgFltr_UL1D_TRC_SET_POINT_CHANGE()	ChkL1ClsFltr_UL1D_PLUS_PRI_RAKE_H()
#define ChkL1MsgFltr_UL1D_TRC_SET_POINT_INJECT()	ChkL1ClsFltr_UL1D_PLUS_PRI_RAKE_H()
#define ChkL1MsgFltr_UL1D_TRC_OCIC_USING_ECNO()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_RAKE_CPICH_ONOFF()	ChkL1ClsFltr_UL1D_PLUS_PRI_RAKE_H()
#define ChkL1MsgFltr_UL1D_TRC_REG_DBG()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_TRC_REG_DBG_SLOT()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_TRC_MISS_SCCH_STS0_DBG()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_TRC_CPC_DQE_SIR()	ChkL1ClsFltr_UL1D_PLUS_PRI_DPC_R8_M()
#define ChkL1MsgFltr_UL1D_TRC_DPC_HW_WIND_SIR()	ChkL1ClsFltr_UL1D_PLUS_PRI_DPC_R8_M()
#define ChkL1MsgFltr_UL1D_TRC_RXSRP_SIG_AMP_RAW()	ChkL1ClsFltr_UL1D_PLUS_PRI_DPC_R8_M()
#define ChkL1MsgFltr_UL1D_TRC_DQE_SIR_WORKAROUND()	ChkL1ClsFltr_UL1D_PLUS_PRI_DQE_WORKAROUND_M()
#define ChkL1MsgFltr_UL1D_TRC_FPGA_FLASH_VERSION()	ChkL1ClsFltr_UL1D_PLUS_PRI_FPGA_INFO_M()
#define ChkL1MsgFltr_UL1D_TRC_SLOT_NUM()	ChkL1ClsFltr_UL1D_PLUS_PRI_REG_DBG_M()
#define ChkL1MsgFltr_UL1D_TRC_OPTI_CMB_BASIC()	ChkL1ClsFltr_UL1D_PLUS_PRI_OPTI_CMB_M()
#define ChkL1MsgFltr_UL1D_TRC_OPTI_CMB_FACH()	ChkL1ClsFltr_UL1D_PLUS_PRI_OPTI_CMB_M()
#define ChkL1MsgFltr_UL1D_TRC_OPTI_CMB_DCH_TICK()	ChkL1ClsFltr_UL1D_PLUS_PRI_OPTI_CMB_M()
#define ChkL1MsgFltr_UL1D_TRC_OPTI_CMB_DCH_SPECIAL()	ChkL1ClsFltr_UL1D_PLUS_PRI_OPTI_CMB_M()
#define ChkL1MsgFltr_UL1D_TRC_OPTI_CMB_REG_SET()	ChkL1ClsFltr_UL1D_PLUS_PRI_OPTI_CMB_M()
#define ChkL1MsgFltr_UL1D_TRC_OPTI_CMB_ECPT_CNT()	ChkL1ClsFltr_UL1D_PLUS_PRI_OPTI_CMB_M()
#define ChkL1MsgFltr_UL1D_TRC_HOP3G_PLL()	ChkL1ClsFltr_UL1D_PLUS_PRI_MISC_H()
#define ChkL1MsgFltr_UL1D_TRC_DSCH_BLER()	ChkL1ClsFltr_UL1D_PLUS_PRI_MISC_M()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_ACK_RATE()	ChkL1ClsFltr_UL1D_PLUS_PRI_MISC_M()
#define ChkL1MsgFltr_UL1D_TRC_RF_CW()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_RF_H()
#define ChkL1MsgFltr_UL1D_TRC_RF_CW1_CONFIG()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_RF_H()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_BITMAP()	ChkL1ClsFltr_UL1D_PLUS_PRI_UL1D_HSPA_PLUS_M()
#define ChkL1MsgFltr_UL1D_TRC_UPDATE_SERVING()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_UPDATE_SERVING_DIV()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_UPDATE_STRONGEST()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_UPDATE_STRONGEST_DIV()	ChkL1ClsFltr_UL1D_PLUS_PRI_New_HSCE_M()


#endif
