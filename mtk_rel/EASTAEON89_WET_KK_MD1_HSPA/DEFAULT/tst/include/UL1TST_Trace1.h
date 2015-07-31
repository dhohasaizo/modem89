#ifndef L1TRC_UL1TST_PRI1_DEF_H
#define L1TRC_UL1TST_PRI1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1TST_Trc_NSFT_State(v1)  (unsigned char)(v1+0)
#define UL1TST_Trc_PRACH_CS_State(v1)  (unsigned char)(v1+17)
#define UL1TST_Trc_NSFT_DCH_DbgStr(v1)  (unsigned char)(v1+26)
#define UL1TST_Trc_NSFT_HSDSCH_EDCH_DbgStr(v1)  (unsigned char)(v1+34)


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_TxAccess(v1, v2, v3, v4) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_TxAccess((char)(v1), (long)(v2), (char)(v3), (short)(v4));\
} while(0)
#else
	#define UL1TST_TRC_TxAccess(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_NSFT_State(v1, v2) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_NSFT_State((unsigned char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1TST_TRC_NSFT_State(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_NSFT_ILPCSETSTEP(v1, v2) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_NSFT_ILPCSETSTEP((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1TST_TRC_NSFT_ILPCSETSTEP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_NSFT_TPCRECONFIG(v1, v2) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_NSFT_TPCRECONFIG((unsigned char)(v1), (unsigned char)(v2));\
} while(0)
#else
	#define UL1TST_TRC_NSFT_TPCRECONFIG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_PRACH_State(v1) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_PRACH_State((unsigned char)(v1));\
} while(0)
#else
	#define UL1TST_TRC_PRACH_State(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_PRACH_TxAccess(v1, v2, v3, v4, v5) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_PRACH_TxAccess((long)(v1), (unsigned short)(v2), (unsigned short)(v3), (long)(v4), (unsigned char)(v5));\
} while(0)
#else
	#define UL1TST_TRC_PRACH_TxAccess(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_PRACH_FS_PSCLIST(v1, v2) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_PRACH_FS_PSCLIST((unsigned short)(v1), (unsigned short)(v2));\
} while(0)
#else
	#define UL1TST_TRC_PRACH_FS_PSCLIST(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_NSFT_SFNStart_Info(v1, v2, v3) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_NSFT_SFNStart_Info((unsigned short)(v1), (unsigned short)(v2), (long)(v3));\
} while(0)
#else
	#define UL1TST_TRC_NSFT_SFNStart_Info(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_NSFT_DCH_DBG(v1, v2, v3) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_NSFT_DCH_DBG((unsigned char)(v1), (short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1TST_TRC_NSFT_DCH_DBG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_NSFT_HSDSCH_EDCH_DBG(v1, v2, v3) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_NSFT_HSDSCH_EDCH_DBG((unsigned char)(v1), (short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1TST_TRC_NSFT_HSDSCH_EDCH_DBG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_NSFT_SFN_REPORT_STATE(v1) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_NSFT_SFN_REPORT_STATE((unsigned char)(v1));\
} while(0)
#else
	#define UL1TST_TRC_NSFT_SFN_REPORT_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1TST_TRC_PRACH_SFN_REPORT_STATE(v1) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1TST_TRC_PRACH_SFN_REPORT_STATE((unsigned char)(v1));\
} while(0)
#else
	#define UL1TST_TRC_PRACH_SFN_REPORT_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_ans_ptar_p(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_ans_ptar_p((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_ans_ptar_p(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_ans_ptar_q(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_ans_ptar_q((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_ans_ptar_q(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_ptar_p(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_ptar_p((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16), (short)(v17));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_ptar_p(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_ptar_q(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_ptar_q((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16), (short)(v17));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_ptar_q(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_tpc_cmd(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_tpc_cmd((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_tpc_cmd(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_pseudo_hscch(v1, v2, v3, v4, v5, v6) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_pseudo_hscch((short)(v1), (unsigned short)(v2), (unsigned short)(v3), (unsigned short)(v4), (unsigned short)(v5), (unsigned short)(v6));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_pseudo_hscch(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_pseudo_hdsch(v1, v2, v3, v4, v5, v6) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_pseudo_hdsch((short)(v1), (unsigned short)(v2), (unsigned short)(v3), (unsigned short)(v4), (unsigned short)(v5), (unsigned short)(v6));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_pseudo_hdsch(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_beta_hs_p(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_beta_hs_p((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_beta_hs_p(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_beta_hs_q(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_beta_hs_q((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_beta_hs_q(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_beta_c(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_beta_c((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_beta_c(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_beta_d(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_beta_d((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_beta_d(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_beta_ec(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_beta_ec((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_beta_ec(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_beta_ed0(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_beta_ed0((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_beta_ed0(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_beta_ed1(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_beta_ed1((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_beta_ed1(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_beta_ed2(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_beta_ed2((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_beta_ed2(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_beta_ed3(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_beta_ed3((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_beta_ed3(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_result_upc_slot(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_result_upc_slot((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9), (short)(v10), (short)(v11), (short)(v12), (short)(v13), (short)(v14), (short)(v15), (short)(v16));\
} while(0)
#else
	#define UL1D_Trc_TPC_result_upc_slot(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_Trc_TPC_final_result(v1) do {\
		if(UL1TST_PRI1_Trace_Filter[0]==1 && (UL1TST_PRI1_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1D_Trc_TPC_final_result((unsigned char)(v1));\
} while(0)
#else
	#define UL1D_Trc_TPC_final_result(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char UL1TST_PRI1_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_UL1TST_TRC_TxAccess(char v1, long v2, char v3, short v4);
void L1TRC_Send_UL1TST_TRC_NSFT_State(unsigned char v1, short v2);
void L1TRC_Send_UL1TST_TRC_NSFT_ILPCSETSTEP(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1TST_TRC_NSFT_TPCRECONFIG(unsigned char v1, unsigned char v2);
void L1TRC_Send_UL1TST_TRC_PRACH_State(unsigned char v1);
void L1TRC_Send_UL1TST_TRC_PRACH_TxAccess(long v1, unsigned short v2, unsigned short v3, long v4, unsigned char v5);
void L1TRC_Send_UL1TST_TRC_PRACH_FS_PSCLIST(unsigned short v1, unsigned short v2);
void L1TRC_Send_UL1TST_TRC_NSFT_SFNStart_Info(unsigned short v1, unsigned short v2, long v3);
void L1TRC_Send_UL1TST_TRC_NSFT_DCH_DBG(unsigned char v1, short v2, char v3);
void L1TRC_Send_UL1TST_TRC_NSFT_HSDSCH_EDCH_DBG(unsigned char v1, short v2, char v3);
void L1TRC_Send_UL1TST_TRC_NSFT_SFN_REPORT_STATE(unsigned char v1);
void L1TRC_Send_UL1TST_TRC_PRACH_SFN_REPORT_STATE(unsigned char v1);
void L1TRC_Send_UL1D_Trc_TPC_result_ans_ptar_p(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_ans_ptar_q(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_ptar_p(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16, short v17);
void L1TRC_Send_UL1D_Trc_TPC_result_ptar_q(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16, short v17);
void L1TRC_Send_UL1D_Trc_TPC_result_tpc_cmd(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_pseudo_hscch(short v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned short v5, unsigned short v6);
void L1TRC_Send_UL1D_Trc_TPC_result_pseudo_hdsch(short v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned short v5, unsigned short v6);
void L1TRC_Send_UL1D_Trc_TPC_result_beta_hs_p(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_beta_hs_q(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_beta_c(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_beta_d(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_beta_ec(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_beta_ed0(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_beta_ed1(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_beta_ed2(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_beta_ed3(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_result_upc_slot(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_UL1D_Trc_TPC_final_result(unsigned char v1);

void Set_UL1TST_PRI1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1TST_PRI1()	(UL1TST_PRI1_Trace_Filter[0]==1)
#define ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()	(ChkL1ModFltr_UL1TST_PRI1()&&((UL1TST_PRI1_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()	(ChkL1ModFltr_UL1TST_PRI1()&&((UL1TST_PRI1_Trace_Filter[1]&0x02)!=0))
#define ChkL1MsgFltr_UL1TST_TRC_TxAccess()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_NSFT_State()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_NSFT_ILPCSETSTEP()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_NSFT_TPCRECONFIG()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_PRACH_State()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_PRACH_TxAccess()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_PRACH_FS_PSCLIST()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_NSFT_SFNStart_Info()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_NSFT_DCH_DBG()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_NSFT_HSDSCH_EDCH_DBG()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_NSFT_SFN_REPORT_STATE()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1TST_TRC_PRACH_SFN_REPORT_STATE()	ChkL1ClsFltr_UL1TST_PRI1_UL1TST_Debug_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_ans_ptar_p()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_ans_ptar_q()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_ptar_p()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_ptar_q()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_tpc_cmd()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_pseudo_hscch()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_pseudo_hdsch()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_beta_hs_p()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_beta_hs_q()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_beta_c()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_beta_d()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_beta_ec()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_beta_ed0()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_beta_ed1()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_beta_ed2()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_beta_ed3()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_result_upc_slot()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()
#define ChkL1MsgFltr_UL1D_Trc_TPC_final_result()	ChkL1ClsFltr_UL1TST_PRI1_HWTPC_TEST_M()


#endif
