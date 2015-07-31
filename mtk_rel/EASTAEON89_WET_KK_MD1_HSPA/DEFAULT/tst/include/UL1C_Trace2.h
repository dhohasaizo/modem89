#ifndef L1TRC_UL1C_PRI2_DEF_H
#define L1TRC_UL1C_PRI2_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Start(v1, v2, v3, v4) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_CTCH_Start((short)(v1), (long)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1I_TRC_CTCH_Start(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Next_L1(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_CTCH_Next_L1((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1I_TRC_CTCH_Next_L1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_BS_Start(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_CTCH_BS_Start((short)(v1), (short)(v2), (short)(v3), (long)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1I_TRC_CTCH_BS_Start(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Rx_Status(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_CTCH_Rx_Status((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_CTCH_Rx_Status(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_L2_BP(v1, v2, v3, v4) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_CTCH_L2_BP((short)(v1), (short)(v2), (long)(v3), (short)(v4));\
} while(0)
#else
	#define UL1I_TRC_CTCH_L2_BP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CTCH_Start_Here() do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_CTCH_Start_Here();\
} while(0)
#else
	#define UL1T_TRC_CTCH_Start_Here()
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Timer(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x20)!=0 )\
			L1TRC_Send_UL1I_TRC_Timer((char)(v1), (char)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_Timer(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_LeaveConfig(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_LeaveConfig((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8));\
} while(0)
#else
	#define UL1I_TRC_LeaveConfig(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterConfig(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_EnterConfig((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1I_TRC_EnterConfig(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_AbortConfig(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_AbortConfig((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_AbortConfig(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SuspendCNF(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_SuspendCNF((char)(v1), (char)(v2), (short)(v3));\
} while(0)
#else
	#define UL1I_TRC_SuspendCNF(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_BCH_CCM_SIB_STATUS(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_BCH_CCM_SIB_STATUS((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_BCH_CCM_SIB_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_BCH_CCM_SFN_STATUS(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_BCH_CCM_SFN_STATUS((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_BCH_CCM_SFN_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterMode(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_EnterMode((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_EnterMode(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterDCH(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_EnterDCH((short)(v1), (short)(v2), (char)(v3), (long)(v4), (short)(v5), (char)(v6), (char)(v7), (char)(v8), (char)(v9), (short)(v10));\
} while(0)
#else
	#define UL1I_TRC_EnterDCH(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterPCH(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_EnterPCH((short)(v1), (short)(v2), (char)(v3), (long)(v4), (short)(v5));\
} while(0)
#else
	#define UL1I_TRC_EnterPCH(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterFACH(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_EnterFACH((short)(v1), (short)(v2), (char)(v3), (long)(v4), (short)(v5));\
} while(0)
#else
	#define UL1I_TRC_EnterFACH(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterNull(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_EnterNull((short)(v1), (short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_EnterNull(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_SetFN(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_CCM_SetFN((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_CCM_SetFN(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_StartDLDCH(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_StartDLDCH((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_StartDLDCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TTI(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_TTI((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_TTI(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_State(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_CCM_State((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_CCM_State(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SFN_Stop() do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x80)!=0 )\
			L1TRC_Send_UL1T_TRC_SFN_Stop();\
} while(0)
#else
	#define UL1T_TRC_SFN_Stop()
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SFN_Start(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x80)!=0 )\
			L1TRC_Send_UL1T_TRC_SFN_Start((short)(v1), (short)(v2), (long)(v3));\
} while(0)
#else
	#define UL1T_TRC_SFN_Start(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Rx(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_SFN_Rx((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_SFN_Rx(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_State(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_SFN_State((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_SFN_State(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SFN_Data(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x80)!=0 )\
			L1TRC_Send_UL1T_TRC_SFN_Data((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1T_TRC_SFN_Data(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Report(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_SFN_Report((char)(v1), (char)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_SFN_Report(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_InternalStop(v1, v2, v3, v4) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_SFN_InternalStop((char)(v1), (char)(v2), (short)(v3), (char)(v4));\
} while(0)
#else
	#define UL1I_TRC_SFN_InternalStop(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Compensation(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_SFN_Compensation((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_SFN_Compensation(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SFN_Avail_Dec_Frms(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_SFN_Avail_Dec_Frms((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_SFN_Avail_Dec_Frms(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SIB_Start(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x40)!=0 )\
			L1TRC_Send_UL1T_TRC_SIB_Start((short)(v1), (short)(v2), (short)(v3), (short)(v4), (long)(v5), (short)(v6), (char)(v7), (char)(v8), (char)(v9));\
} while(0)
#else
	#define UL1T_TRC_SIB_Start(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SIB_Reconfig(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x40)!=0 )\
			L1TRC_Send_UL1T_TRC_SIB_Reconfig((short)(v1), (short)(v2), (char)(v3), (char)(v4), (char)(v5), (char)(v6));\
} while(0)
#else
	#define UL1T_TRC_SIB_Reconfig(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_Rx(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x40)!=0 )\
			L1TRC_Send_UL1I_TRC_SIB_Rx((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_SIB_Rx(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_State(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x40)!=0 )\
			L1TRC_Send_UL1I_TRC_SIB_State((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_SIB_State(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_Rpt(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x40)!=0 )\
			L1TRC_Send_UL1I_TRC_SIB_Rpt((short)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_SIB_Rpt(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SIB_CM(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x40)!=0 )\
			L1TRC_Send_UL1T_TRC_SIB_CM((char)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1T_TRC_SIB_CM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SIB_Start_Here() do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[3]&0x40)!=0 )\
			L1TRC_Send_UL1T_TRC_SIB_Start_Here();\
} while(0)
#else
	#define UL1T_TRC_SIB_Start_Here()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1T_TRC_ConfigBAList(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[2]&0x80)!=0 )\
			L1TRC_Send_UL1T_TRC_ConfigBAList((char)(v1), (char)(v2), (char)(v3), (short)(v4), (char)(v5), (char)(v6), (char)(v7));\
} while(0)
#else
	#define UL1T_TRC_ConfigBAList(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CellInfo(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CellInfo((char)(v1), (short)(v2), (long)(v3));\
} while(0)
#else
	#define UL1T_TRC_CellInfo(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CellInfo_1(v1, v2, v3, v4) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CellInfo_1((char)(v1), (char)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1T_TRC_CellInfo_1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ConfigDetectedCell(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_ConfigDetectedCell((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1T_TRC_ConfigDetectedCell(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1T_TRC_BA_Mapping(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[2]&0x80)!=0 )\
			L1TRC_Send_UL1T_TRC_BA_Mapping((char)(v1), (char)(v2), (char)(v3), (char)(v4), (char)(v5), (char)(v6), (char)(v7), (char)(v8), (char)(v9));\
} while(0)
#else
	#define UL1T_TRC_BA_Mapping(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Alloc_CMM_Report(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_Alloc_CMM_Report((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_Alloc_CMM_Report(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_DCH_1st_Tick(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_DCH_1st_Tick((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_DCH_1st_Tick(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Prepare_BA_status(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_Prepare_BA_status((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_Prepare_BA_status(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_DeleteBA(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_DeleteBA((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_DeleteBA(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Protected_in_DCH(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_Protected_in_DCH((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_Protected_in_DCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_EvaluateReq(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_EvaluateReq((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_EvaluateReq(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Trigger_EnhancedCM(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_Trigger_EnhancedCM((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_Trigger_EnhancedCM(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_DetectedCell_InvalidTM(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_DetectedCell_InvalidTM((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_DetectedCell_InvalidTM(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_freq_not_existed(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_freq_not_existed((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_freq_not_existed(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_ConfigBA_by_CCM(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_ConfigBA_by_CCM((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_ConfigBA_by_CCM(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Restore_CM_result(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_Restore_CM_result((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_Restore_CM_result(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_Compensate_CMCS(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_Compensate_CMCS((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_Compensate_CMCS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CM_AlarmTimeoutForInterF(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CM_AlarmTimeoutForInterF((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CM_AlarmTimeoutForInterF(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CM_BANum_Err_in_FACH(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_CM_BANum_Err_in_FACH((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_CM_BANum_Err_in_FACH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CM_BANum_Err_in_NULL(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_CM_BANum_Err_in_NULL((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_CM_BANum_Err_in_NULL(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMHalt(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_CMHalt((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_CMHalt(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ConfigCell(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_ConfigCell((char)(v1), (short)(v2), (short)(v3), (short)(v4), (long)(v5), (short)(v6));\
} while(0)
#else
	#define UL1T_TRC_ConfigCell(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMResult(v1, v2, v3, v4) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_CMResult((char)(v1), (char)(v2), (unsigned short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1I_TRC_CMResult(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMResult_RXD(v1, v2, v3, v4) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_CMResult_RXD((char)(v1), (char)(v2), (unsigned short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1I_TRC_CMResult_RXD(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMDone(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_CMDone((char)(v1), (char)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_CMDone(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMStart(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CMStart((char)(v1));\
} while(0)
#else
	#define UL1T_TRC_CMStart(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMStart_Here() do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CMStart_Here();\
} while(0)
#else
	#define UL1T_TRC_CMStart_Here()
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PrioCMCS(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_PrioCMCS((short)(v1), (short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_PrioCMCS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMStart(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_CMStart((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_CMStart(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMStop(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CMStop((char)(v1));\
} while(0)
#else
	#define UL1T_TRC_CMStop(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CMStop(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_CMStop((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_CMStop(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_CMAlphaFilter(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1T_TRC_CMAlphaFilter((char)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1T_TRC_CMAlphaFilter(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMReport(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CMReport((char)(v1), (char)(v2), (char)(v3));\
} while(0)
#else
	#define UL1T_TRC_CMReport(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_CMAverager((char)(v1), (char)(v2), (short)(v3), (char)(v4), (short)(v5), (short)(v6), (short)(v7));\
} while(0)
#else
	#define UL1T_TRC_CMAverager(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager_RXD(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_CMAverager_RXD((char)(v1), (char)(v2), (short)(v3), (char)(v4), (short)(v5), (short)(v6), (short)(v7));\
} while(0)
#else
	#define UL1T_TRC_CMAverager_RXD(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager_MAX(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_CMAverager_MAX((char)(v1), (char)(v2), (short)(v3), (char)(v4), (short)(v5), (short)(v6), (short)(v7));\
} while(0)
#else
	#define UL1T_TRC_CMAverager_MAX(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager2(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_CMAverager2((char)(v1), (char)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CMAverager2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager2_RXD(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_CMAverager2_RXD((char)(v1), (char)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_CMAverager2_RXD(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_CMAVG_Put(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1I_TRC_CMAVG_Put((char)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1I_TRC_CMAVG_Put(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_CMAVG_Apply(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1I_TRC_CMAVG_Apply((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_CMAVG_Apply(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_CMAVG_Apply_RXD(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1I_TRC_CMAVG_Apply_RXD((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_CMAVG_Apply_RXD(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_CMAVG_LINValue(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1T_TRC_CMAVG_LINValue((char)(v1), (char)(v2), (char)(v3));\
} while(0)
#else
	#define UL1T_TRC_CMAVG_LINValue(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_CMAVG_DBG(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1T_TRC_CMAVG_DBG((char)(v1));\
} while(0)
#else
	#define UL1T_TRC_CMAVG_DBG(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CMTreselection(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1_TRC_CMTreselection((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1_TRC_CMTreselection(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CSDone(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_CSDone((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_CSDone(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_CSResult(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CSResult((char)(v1), (short)(v2), (unsigned short)(v3));\
} while(0)
#else
	#define UL1I_TRC_CSResult(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CSStart(v1, v2, v3, v4) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_CSStart((char)(v1), (short)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1I_TRC_CSStart(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CS_Stop(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_CS_Stop((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_CS_Stop(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CSStart_Here() do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_CSStart_Here();\
} while(0)
#else
	#define UL1I_TRC_CSStart_Here()
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Unlock_gapStopCnf(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_Unlock_gapStopCnf((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_Unlock_gapStopCnf(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DMStopGap() do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1T_TRC_DMStopGap();\
} while(0)
#else
	#define UL1T_TRC_DMStopGap()
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DM_SetGap(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1T_TRC_DM_SetGap((long)(v1), (long)(v2), (long)(v3), (char)(v4), (char)(v5), (short)(v6), (char)(v7), (char)(v8), (char)(v9));\
} while(0)
#else
	#define UL1T_TRC_DM_SetGap(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DM_DRXTick(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1T_TRC_DM_DRXTick((char)(v1), (short)(v2), (char)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1T_TRC_DM_DRXTick(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DM_SetGSM_Mode(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1T_TRC_DM_SetGSM_Mode((char)(v1));\
} while(0)
#else
	#define UL1T_TRC_DM_SetGSM_Mode(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_AssignGAP(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_AssignGAP((short)(v1), (long)(v2), (long)(v3));\
} while(0)
#else
	#define UL1I_TRC_DM_AssignGAP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Start_GAP_Timer1(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_Start_GAP_Timer1((long)(v1), (short)(v2), (long)(v3), (short)(v4), (long)(v5));\
} while(0)
#else
	#define UL1I_TRC_Start_GAP_Timer1(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Start_GAP_Timer2(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_Start_GAP_Timer2((char)(v1), (long)(v2), (short)(v3));\
} while(0)
#else
	#define UL1I_TRC_Start_GAP_Timer2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_TimeSyncStart(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_TimeSyncStart((long)(v1), (long)(v2));\
} while(0)
#else
	#define UL1I_TRC_DM_TimeSyncStart(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_DM_Cancel_ActiveGAP() do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1T_TRC_DM_Cancel_ActiveGAP();\
} while(0)
#else
	#define UL1T_TRC_DM_Cancel_ActiveGAP()
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Cancel_2G_GAP_Cnf() do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_Cancel_2G_GAP_Cnf();\
} while(0)
#else
	#define UL1I_TRC_DM_Cancel_2G_GAP_Cnf()
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Query_GAP(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_Query_GAP((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_DM_Query_GAP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Query_GAP_SM(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_Query_GAP_SM((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_DM_Query_GAP_SM(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Query_PSEUDO() do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_Query_PSEUDO();\
} while(0)
#else
	#define UL1I_TRC_DM_Query_PSEUDO()
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Sleep_Ind(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_Sleep_Ind((long)(v1), (long)(v2), (short)(v3), (short)(v4), (short)(v5), (char)(v6), (long)(v7), (long)(v8), (short)(v9));\
} while(0)
#else
	#define UL1I_TRC_DM_Sleep_Ind(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RTB_Timer(v1, v2, v3, v4) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x20)!=0 )\
			L1TRC_Send_UL1I_TRC_RTB_Timer((char)(v1), (short)(v2), (long)(v3), (char)(v4));\
} while(0)
#else
	#define UL1I_TRC_RTB_Timer(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_AGPS_INFO(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_AGPS_INFO((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1I_TRC_AGPS_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_BAStatusUpdateInfo(v1, v2, v3) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_BAStatusUpdateInfo((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_BAStatusUpdateInfo(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_ADJUSTMENT_STATUS(v1) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_CTCH_ADJUSTMENT_STATUS((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_CTCH_ADJUSTMENT_STATUS(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_ADJUSTMENT_SUSPEND(v1, v2) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_CTCH_ADJUSTMENT_SUSPEND((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_CTCH_ADJUSTMENT_SUSPEND(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Resume(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI2_Trace_Filter[0]==1 && (UL1C_PRI2_Trace_Filter[4]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_CTCH_Resume((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1I_TRC_CTCH_Resume(v1, v2, v3, v4, v5, v6)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char UL1C_PRI2_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_UL1I_TRC_CTCH_Start(short v1, long v2, short v3, short v4);
void L1TRC_Send_UL1I_TRC_CTCH_Next_L1(short v1, short v2, short v3);
void L1TRC_Send_UL1I_TRC_CTCH_BS_Start(short v1, short v2, short v3, long v4, short v5, short v6);
void L1TRC_Send_UL1I_TRC_CTCH_Rx_Status(char v1, short v2);
void L1TRC_Send_UL1I_TRC_CTCH_L2_BP(short v1, short v2, long v3, short v4);
void L1TRC_Send_UL1T_TRC_CTCH_Start_Here(void);
void L1TRC_Send_UL1I_TRC_Timer(char v1, char v2, char v3);
void L1TRC_Send_UL1I_TRC_LeaveConfig(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8);
void L1TRC_Send_UL1I_TRC_EnterConfig(short v1, short v2, short v3);
void L1TRC_Send_UL1I_TRC_AbortConfig(char v1);
void L1TRC_Send_UL1I_TRC_SuspendCNF(char v1, char v2, short v3);
void L1TRC_Send_UL1I_TRC_BCH_CCM_SIB_STATUS(char v1, char v2);
void L1TRC_Send_UL1I_TRC_BCH_CCM_SFN_STATUS(char v1, char v2);
void L1TRC_Send_UL1I_TRC_EnterMode(char v1);
void L1TRC_Send_UL1I_TRC_EnterDCH(short v1, short v2, char v3, long v4, short v5, char v6, char v7, char v8, char v9, short v10);
void L1TRC_Send_UL1I_TRC_EnterPCH(short v1, short v2, char v3, long v4, short v5);
void L1TRC_Send_UL1I_TRC_EnterFACH(short v1, short v2, char v3, long v4, short v5);
void L1TRC_Send_UL1I_TRC_EnterNull(short v1, short v2, char v3);
void L1TRC_Send_UL1I_TRC_CCM_SetFN(short v1);
void L1TRC_Send_UL1I_TRC_StartDLDCH(short v1, short v2);
void L1TRC_Send_UL1I_TRC_TTI(short v1, short v2);
void L1TRC_Send_UL1I_TRC_CCM_State(char v1);
void L1TRC_Send_UL1T_TRC_SFN_Stop(void);
void L1TRC_Send_UL1T_TRC_SFN_Start(short v1, short v2, long v3);
void L1TRC_Send_UL1I_TRC_SFN_Rx(char v1, short v2);
void L1TRC_Send_UL1I_TRC_SFN_State(char v1);
void L1TRC_Send_UL1T_TRC_SFN_Data(char v1, short v2);
void L1TRC_Send_UL1I_TRC_SFN_Report(char v1, char v2, char v3);
void L1TRC_Send_UL1I_TRC_SFN_InternalStop(char v1, char v2, short v3, char v4);
void L1TRC_Send_UL1I_TRC_SFN_Compensation(char v1);
void L1TRC_Send_UL1I_TRC_SFN_Avail_Dec_Frms(short v1);
void L1TRC_Send_UL1T_TRC_SIB_Start(short v1, short v2, short v3, short v4, long v5, short v6, char v7, char v8, char v9);
void L1TRC_Send_UL1T_TRC_SIB_Reconfig(short v1, short v2, char v3, char v4, char v5, char v6);
void L1TRC_Send_UL1I_TRC_SIB_Rx(short v1);
void L1TRC_Send_UL1I_TRC_SIB_State(char v1);
void L1TRC_Send_UL1I_TRC_SIB_Rpt(short v1, char v2);
void L1TRC_Send_UL1T_TRC_SIB_CM(char v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1T_TRC_SIB_Start_Here(void);
void L1TRC_Send_UL1T_TRC_ConfigBAList(char v1, char v2, char v3, short v4, char v5, char v6, char v7);
void L1TRC_Send_UL1T_TRC_CellInfo(char v1, short v2, long v3);
void L1TRC_Send_UL1T_TRC_CellInfo_1(char v1, char v2, char v3, char v4);
void L1TRC_Send_UL1T_TRC_ConfigDetectedCell(char v1, char v2);
void L1TRC_Send_UL1T_TRC_BA_Mapping(char v1, char v2, char v3, char v4, char v5, char v6, char v7, char v8, char v9);
void L1TRC_Send_UL1T_TRC_CM_Alloc_CMM_Report(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_DCH_1st_Tick(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_Prepare_BA_status(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_DeleteBA(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_Protected_in_DCH(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_EvaluateReq(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_Trigger_EnhancedCM(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_DetectedCell_InvalidTM(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_freq_not_existed(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_ConfigBA_by_CCM(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_Restore_CM_result(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_Compensate_CMCS(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_CM_AlarmTimeoutForInterF(short v1, short v2, short v3);
void L1TRC_Send_UL1I_TRC_CM_BANum_Err_in_FACH(short v1, short v2);
void L1TRC_Send_UL1I_TRC_CM_BANum_Err_in_NULL(short v1, short v2);
void L1TRC_Send_UL1I_TRC_CMHalt(short v1);
void L1TRC_Send_UL1T_TRC_ConfigCell(char v1, short v2, short v3, short v4, long v5, short v6);
void L1TRC_Send_UL1I_TRC_CMResult(char v1, char v2, unsigned short v3, short v4);
void L1TRC_Send_UL1I_TRC_CMResult_RXD(char v1, char v2, unsigned short v3, short v4);
void L1TRC_Send_UL1I_TRC_CMDone(char v1, char v2, char v3);
void L1TRC_Send_UL1T_TRC_CMStart(char v1);
void L1TRC_Send_UL1T_TRC_CMStart_Here(void);
void L1TRC_Send_UL1I_TRC_PrioCMCS(short v1, short v2, char v3);
void L1TRC_Send_UL1I_TRC_CMStart(char v1, char v2);
void L1TRC_Send_UL1T_TRC_CMStop(char v1);
void L1TRC_Send_UL1I_TRC_CMStop(char v1, char v2);
void L1TRC_Send_UL1T_TRC_CMAlphaFilter(char v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_UL1T_TRC_CMReport(char v1, char v2, char v3);
void L1TRC_Send_UL1T_TRC_CMAverager(char v1, char v2, short v3, char v4, short v5, short v6, short v7);
void L1TRC_Send_UL1T_TRC_CMAverager_RXD(char v1, char v2, short v3, char v4, short v5, short v6, short v7);
void L1TRC_Send_UL1T_TRC_CMAverager_MAX(char v1, char v2, short v3, char v4, short v5, short v6, short v7);
void L1TRC_Send_UL1T_TRC_CMAverager2(char v1, char v2, short v3);
void L1TRC_Send_UL1T_TRC_CMAverager2_RXD(char v1, char v2, short v3);
void L1TRC_Send_UL1I_TRC_CMAVG_Put(char v1, short v2, short v3);
void L1TRC_Send_UL1I_TRC_CMAVG_Apply(char v1, char v2);
void L1TRC_Send_UL1I_TRC_CMAVG_Apply_RXD(char v1, char v2);
void L1TRC_Send_UL1T_TRC_CMAVG_LINValue(char v1, char v2, char v3);
void L1TRC_Send_UL1T_TRC_CMAVG_DBG(char v1);
void L1TRC_Send_UL1_TRC_CMTreselection(char v1, char v2);
void L1TRC_Send_UL1I_TRC_CSDone(char v1, char v2);
void L1TRC_Send_UL1I_TRC_CSResult(char v1, short v2, unsigned short v3);
void L1TRC_Send_UL1I_TRC_CSStart(char v1, short v2, char v3, char v4);
void L1TRC_Send_UL1I_TRC_CS_Stop(char v1);
void L1TRC_Send_UL1I_TRC_CSStart_Here(void);
void L1TRC_Send_UL1I_TRC_Unlock_gapStopCnf(char v1);
void L1TRC_Send_UL1T_TRC_DMStopGap(void);
void L1TRC_Send_UL1T_TRC_DM_SetGap(long v1, long v2, long v3, char v4, char v5, short v6, char v7, char v8, char v9);
void L1TRC_Send_UL1T_TRC_DM_DRXTick(char v1, short v2, char v3, short v4, short v5);
void L1TRC_Send_UL1T_TRC_DM_SetGSM_Mode(char v1);
void L1TRC_Send_UL1I_TRC_DM_AssignGAP(short v1, long v2, long v3);
void L1TRC_Send_UL1I_TRC_Start_GAP_Timer1(long v1, short v2, long v3, short v4, long v5);
void L1TRC_Send_UL1I_TRC_Start_GAP_Timer2(char v1, long v2, short v3);
void L1TRC_Send_UL1I_TRC_DM_TimeSyncStart(long v1, long v2);
void L1TRC_Send_UL1T_TRC_DM_Cancel_ActiveGAP(void);
void L1TRC_Send_UL1I_TRC_DM_Cancel_2G_GAP_Cnf(void);
void L1TRC_Send_UL1I_TRC_DM_Query_GAP(char v1, short v2);
void L1TRC_Send_UL1I_TRC_DM_Query_GAP_SM(char v1, short v2);
void L1TRC_Send_UL1I_TRC_DM_Query_PSEUDO(void);
void L1TRC_Send_UL1I_TRC_DM_Sleep_Ind(long v1, long v2, short v3, short v4, short v5, char v6, long v7, long v8, short v9);
void L1TRC_Send_UL1I_TRC_RTB_Timer(char v1, short v2, long v3, char v4);
void L1TRC_Send_UL1I_TRC_AGPS_INFO(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1T_TRC_BAStatusUpdateInfo(short v1, short v2, short v3);
void L1TRC_Send_UL1I_TRC_CTCH_ADJUSTMENT_STATUS(char v1);
void L1TRC_Send_UL1I_TRC_CTCH_ADJUSTMENT_SUSPEND(short v1, short v2);
void L1TRC_Send_UL1I_TRC_CTCH_Resume(short v1, short v2, short v3, short v4, short v5, short v6);

void Set_UL1C_PRI2_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI2()	(UL1C_PRI2_Trace_Filter[0]==1)
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_TIMER_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[1]&0x10)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[1]&0x20)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[1]&0x40)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[1]&0x80)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[2]&0x01)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_RTB_L()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[2]&0x02)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[2]&0x04)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_TIMER_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[2]&0x08)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[2]&0x10)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[2]&0x20)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[2]&0x40)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[2]&0x80)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[3]&0x01)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[3]&0x02)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[3]&0x04)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_RTB_M()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[3]&0x08)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[3]&0x10)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_TIMER_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[3]&0x20)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[3]&0x40)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[3]&0x80)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[4]&0x01)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[4]&0x02)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[4]&0x04)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[4]&0x08)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[4]&0x10)!=0))
#define ChkL1ClsFltr_UL1C_PRI2_UL1C_RTB_H()	(ChkL1ModFltr_UL1C_PRI2()&&((UL1C_PRI2_Trace_Filter[4]&0x20)!=0))
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Start()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Next_L1()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_BS_Start()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Rx_Status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_L2_BP()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1T_TRC_CTCH_Start_Here()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Timer()	ChkL1ClsFltr_UL1C_PRI2_UL1C_TIMER_H()
#define ChkL1MsgFltr_UL1I_TRC_LeaveConfig()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterConfig()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_AbortConfig()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_SuspendCNF()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_BCH_CCM_SIB_STATUS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_BCH_CCM_SFN_STATUS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterMode()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterDCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterPCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterFACH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterNull()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_SetFN()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_StartDLDCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_TTI()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1T_TRC_SFN_Stop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1T_TRC_SFN_Start()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Rx()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1T_TRC_SFN_Data()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Report()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_InternalStop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Compensation()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1I_TRC_SFN_Avail_Dec_Frms()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1T_TRC_SIB_Start()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1T_TRC_SIB_Reconfig()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_Rx()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_State()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_Rpt()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1T_TRC_SIB_CM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1T_TRC_SIB_Start_Here()	ChkL1ClsFltr_UL1C_PRI2_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1T_TRC_ConfigBAList()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_M()
#define ChkL1MsgFltr_UL1T_TRC_CellInfo()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CellInfo_1()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_ConfigDetectedCell()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_BA_Mapping()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_M()
#define ChkL1MsgFltr_UL1T_TRC_CM_Alloc_CMM_Report()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_DCH_1st_Tick()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Prepare_BA_status()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_DeleteBA()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Protected_in_DCH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_EvaluateReq()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Trigger_EnhancedCM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_DetectedCell_InvalidTM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_freq_not_existed()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_ConfigBA_by_CCM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Restore_CM_result()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_Compensate_CMCS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CM_AlarmTimeoutForInterF()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CM_BANum_Err_in_FACH()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CM_BANum_Err_in_NULL()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMHalt()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_ConfigCell()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMResult()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMResult_RXD()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMDone()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CMStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CMStart_Here()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_PrioCMCS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CMStop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CMStop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAlphaFilter()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_L()
#define ChkL1MsgFltr_UL1T_TRC_CMReport()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager_RXD()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager_MAX()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager2()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager2_RXD()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1I_TRC_CMAVG_Put()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1I_TRC_CMAVG_Apply()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1I_TRC_CMAVG_Apply_RXD()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1T_TRC_CMAVG_LINValue()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1T_TRC_CMAVG_DBG()	ChkL1ClsFltr_UL1C_PRI2_UL1C_AVG_L()
#define ChkL1MsgFltr_UL1_TRC_CMTreselection()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CSDone()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()
#define ChkL1MsgFltr_UL1I_TRC_CSResult()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_L()
#define ChkL1MsgFltr_UL1I_TRC_CSStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()
#define ChkL1MsgFltr_UL1I_TRC_CS_Stop()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()
#define ChkL1MsgFltr_UL1I_TRC_CSStart_Here()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CS_H()
#define ChkL1MsgFltr_UL1I_TRC_Unlock_gapStopCnf()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DMStopGap()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DM_SetGap()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DM_DRXTick()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DM_SetGSM_Mode()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_AssignGAP()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_Start_GAP_Timer1()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_Start_GAP_Timer2()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_TimeSyncStart()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_DM_Cancel_ActiveGAP()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Cancel_2G_GAP_Cnf()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Query_GAP()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Query_GAP_SM()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Query_PSEUDO()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Sleep_Ind()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1I_TRC_RTB_Timer()	ChkL1ClsFltr_UL1C_PRI2_UL1C_RTB_H()
#define ChkL1MsgFltr_UL1I_TRC_AGPS_INFO()	ChkL1ClsFltr_UL1C_PRI2_UL1C_DM_H()
#define ChkL1MsgFltr_UL1T_TRC_BAStatusUpdateInfo()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_ADJUSTMENT_STATUS()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_ADJUSTMENT_SUSPEND()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Resume()	ChkL1ClsFltr_UL1C_PRI2_UL1C_CTCH_H()


#endif
