#ifndef L1TRC_UL1D_FIFTH_DEF_H
#define L1TRC_UL1D_FIFTH_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1D_TRC_STR_PICH_MODE(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MPS_PAC_ADDR(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_MPS_PAC_ADDR((char)(v1), (unsigned short)(v2), (unsigned short)(v3), (unsigned short)(v4), (unsigned short)(v5), (unsigned short)(v6), (unsigned short)(v7));\
} while(0)
#else
	#define UL1D_TRC_MPS_PAC_ADDR(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MPS_DETECT_CNT(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_MPS_DETECT_CNT((char)(v1), (char)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7), (unsigned char)(v8));\
} while(0)
#else
	#define UL1D_TRC_MPS_DETECT_CNT(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MPS_FOE_CNT(v1, v2, v3, v4, v5, v6) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_MPS_FOE_CNT((long)(v1), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6));\
} while(0)
#else
	#define UL1D_TRC_MPS_FOE_CNT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DEBUG(v1, v2, v3) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_DEBUG((unsigned short)(v1), (unsigned long)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define UL1D_TRC_DEBUG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_AICH_STATISTICS(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_AICH_STATISTICS((unsigned char)(v1), (unsigned short)(v2), (unsigned short)(v3), (unsigned short)(v4), (unsigned short)(v5), (unsigned short)(v6), (unsigned short)(v7), (unsigned short)(v8));\
} while(0)
#else
	#define UL1D_TRC_AICH_STATISTICS(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_PICH_STATISTICS1(v1, v2, v3, v4, v5) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_PICH_STATISTICS1((unsigned char)(v1), (unsigned short)(v2), (unsigned short)(v3), (unsigned short)(v4), (unsigned char)(v5));\
} while(0)
#else
	#define UL1D_TRC_PICH_STATISTICS1(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_PICH_STATISTICS2(v1, v2, v3) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_PICH_STATISTICS2((unsigned char)(v1), (unsigned short)(v2), (unsigned short)(v3));\
} while(0)
#else
	#define UL1D_TRC_PICH_STATISTICS2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_PICH_TEST_DONE(v1) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_PICH_TEST_DONE((unsigned short)(v1));\
} while(0)
#else
	#define UL1D_TRC_PICH_TEST_DONE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_SFN_STATISTIC_DETECT(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_SFN_STATISTIC_DETECT((unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4), (unsigned long)(v5), (unsigned long)(v6), (unsigned long)(v7));\
} while(0)
#else
	#define UL1D_TRC_SFN_STATISTIC_DETECT(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_SFN_STATISTIC_METHOD(v1, v2, v3, v4) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_SFN_STATISTIC_METHOD((unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
} while(0)
#else
	#define UL1D_TRC_SFN_STATISTIC_METHOD(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_CS1_PASS(v1, v2, v3) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS1_PASS((short)(v1), (long)(v2), (long)(v3));\
} while(0)
#else
	#define UL1D_TRC_CST_CS1_PASS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_CS1_FAIL(v1, v2, v3, v4, v5, v6) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS1_FAIL((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1D_TRC_CST_CS1_FAIL(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_CS1_PEAK(v1) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS1_PEAK((short)(v1));\
} while(0)
#else
	#define UL1D_TRC_CST_CS1_PEAK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_CS2_PASS(v1, v2, v3, v4) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS2_PASS((short)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1D_TRC_CST_CS2_PASS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_CS2_FAIL(v1, v2, v3, v4, v5, v6) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS2_FAIL((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1D_TRC_CST_CS2_FAIL(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CST_CS3_PASS(v1, v2) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS3_PASS((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1D_TRC_CST_CS3_PASS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_CS3_FAIL(v1, v2, v3, v4) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS3_FAIL((short)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1D_TRC_CST_CS3_FAIL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CST_CS3_FAIL2(v1, v2, v3, v4) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS3_FAIL2((short)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1D_TRC_CST_CS3_FAIL2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_CS4(v1) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS4((short)(v1));\
} while(0)
#else
	#define UL1D_TRC_CST_CS4(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_CS4_STD_VAR(v1, v2) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_CS4_STD_VAR((short)(v1), (long)(v2));\
} while(0)
#else
	#define UL1D_TRC_CST_CS4_STD_VAR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_RESULT(v1, v2, v3) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_RESULT((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1D_TRC_CST_RESULT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_FINISH_CAND(v1) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_FINISH_CAND((short)(v1));\
} while(0)
#else
	#define UL1D_TRC_CST_FINISH_CAND(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CST_NO_BIN(v1, v2) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_CST_NO_BIN((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1D_TRC_CST_NO_BIN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_PCH_AFC(v1, v2) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1D_TRC_PCH_AFC((unsigned char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1D_TRC_PCH_AFC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_SW_POWERON(v1, v2) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_SW_POWERON((unsigned long)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1D_TRC_SW_POWERON(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_SW_POWERON2(v1, v2) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1D_TRC_SW_POWERON2((unsigned long)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1D_TRC_SW_POWERON2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_SCF(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_SCF((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9));\
} while(0)
#else
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_SCF(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_ENERGY(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_ENERGY((short)(v1), (unsigned short)(v2), (unsigned short)(v3), (unsigned short)(v4), (unsigned short)(v5), (unsigned short)(v6), (unsigned short)(v7), (unsigned short)(v8), (unsigned short)(v9));\
} while(0)
#else
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_ENERGY(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_Gi(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_Gi((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8), (short)(v9));\
} while(0)
#else
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_Gi(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_CALC_Gi(v1, v2, v3, v4) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_CALC_Gi((short)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_CALC_Gi(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REF_TRCH(v1, v2) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REF_TRCH((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REF_TRCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_INFO(v1, v2, v3, v4, v5) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_INFO((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_CRC(v1, v2) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_CRC((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_CRC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DL_BRP_RAW_Data(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_DL_BRP_RAW_Data((unsigned char)(v1), (short)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9), (unsigned char)(v10), (unsigned char)(v11), (unsigned char)(v12), (unsigned char)(v13), (unsigned char)(v14), (unsigned char)(v15));\
} while(0)
#else
	#define UL1D_TRC_DL_BRP_RAW_Data(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_UL_BRP_RAW_DATA(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		if(UL1D_FIFTH_Trace_Filter[0]==1 && (UL1D_FIFTH_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1D_TRC_UL_BRP_RAW_DATA((unsigned char)(v1), (short)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9), (unsigned char)(v10), (unsigned char)(v11), (unsigned char)(v12), (unsigned char)(v13), (unsigned char)(v14), (unsigned char)(v15));\
} while(0)
#else
	#define UL1D_TRC_UL_BRP_RAW_DATA(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char UL1D_FIFTH_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_UL1D_TRC_MPS_PAC_ADDR(char v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned short v5, unsigned short v6, unsigned short v7);
void L1TRC_Send_UL1D_TRC_MPS_DETECT_CNT(char v1, char v2, long v3, long v4, long v5, long v6, long v7, unsigned char v8);
void L1TRC_Send_UL1D_TRC_MPS_FOE_CNT(long v1, long v2, long v3, long v4, long v5, long v6);
void L1TRC_Send_UL1D_TRC_DEBUG(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_UL1D_TRC_AICH_STATISTICS(unsigned char v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned short v5, unsigned short v6, unsigned short v7, unsigned short v8);
void L1TRC_Send_UL1D_TRC_PICH_STATISTICS1(unsigned char v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned char v5);
void L1TRC_Send_UL1D_TRC_PICH_STATISTICS2(unsigned char v1, unsigned short v2, unsigned short v3);
void L1TRC_Send_UL1D_TRC_PICH_TEST_DONE(unsigned short v1);
void L1TRC_Send_UL1D_TRC_SFN_STATISTIC_DETECT(unsigned long v1, unsigned long v2, unsigned long v3, unsigned long v4, unsigned long v5, unsigned long v6, unsigned long v7);
void L1TRC_Send_UL1D_TRC_SFN_STATISTIC_METHOD(unsigned long v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_UL1D_TRC_CST_CS1_PASS(short v1, long v2, long v3);
void L1TRC_Send_UL1D_TRC_CST_CS1_FAIL(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_UL1D_TRC_CST_CS1_PEAK(short v1);
void L1TRC_Send_UL1D_TRC_CST_CS2_PASS(short v1, short v2, short v3, short v4);
void L1TRC_Send_UL1D_TRC_CST_CS2_FAIL(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_UL1D_TRC_CST_CS3_PASS(short v1, short v2);
void L1TRC_Send_UL1D_TRC_CST_CS3_FAIL(short v1, short v2, short v3, short v4);
void L1TRC_Send_UL1D_TRC_CST_CS3_FAIL2(short v1, short v2, short v3, short v4);
void L1TRC_Send_UL1D_TRC_CST_CS4(short v1);
void L1TRC_Send_UL1D_TRC_CST_CS4_STD_VAR(short v1, long v2);
void L1TRC_Send_UL1D_TRC_CST_RESULT(short v1, short v2, short v3);
void L1TRC_Send_UL1D_TRC_CST_FINISH_CAND(short v1);
void L1TRC_Send_UL1D_TRC_CST_NO_BIN(short v1, short v2);
void L1TRC_Send_UL1D_TRC_PCH_AFC(unsigned char v1, short v2);
void L1TRC_Send_UL1D_TRC_SW_POWERON(unsigned long v1, unsigned long v2);
void L1TRC_Send_UL1D_TRC_SW_POWERON2(unsigned long v1, unsigned long v2);
void L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_SCF(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9);
void L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_ENERGY(short v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned short v5, unsigned short v6, unsigned short v7, unsigned short v8, unsigned short v9);
void L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_Gi(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9);
void L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_CALC_Gi(short v1, short v2, short v3, short v4);
void L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REF_TRCH(short v1, short v2);
void L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_INFO(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_CRC(short v1, short v2);
void L1TRC_Send_UL1D_TRC_DL_BRP_RAW_Data(unsigned char v1, short v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9, unsigned char v10, unsigned char v11, unsigned char v12, unsigned char v13, unsigned char v14, unsigned char v15);
void L1TRC_Send_UL1D_TRC_UL_BRP_RAW_DATA(unsigned char v1, short v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9, unsigned char v10, unsigned char v11, unsigned char v12, unsigned char v13, unsigned char v14, unsigned char v15);

void Set_UL1D_FIFTH_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1D_FIFTH()	(UL1D_FIFTH_Trace_Filter[0]==1)
#define ChkL1ClsFltr_UL1D_FIFTH_CSD_L()	(ChkL1ModFltr_UL1D_FIFTH()&&((UL1D_FIFTH_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_UL1D_FIFTH_CSD_M()	(ChkL1ModFltr_UL1D_FIFTH()&&((UL1D_FIFTH_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_UL1D_FIFTH_CSD_H()	(ChkL1ModFltr_UL1D_FIFTH()&&((UL1D_FIFTH_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_UL1D_FIFTH_UMTS_SM_PWR_L()	(ChkL1ModFltr_UL1D_FIFTH()&&((UL1D_FIFTH_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_H()	(ChkL1ModFltr_UL1D_FIFTH()&&((UL1D_FIFTH_Trace_Filter[1]&0x10)!=0))
#define ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_M()	(ChkL1ModFltr_UL1D_FIFTH()&&((UL1D_FIFTH_Trace_Filter[1]&0x20)!=0))
#define ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_L()	(ChkL1ModFltr_UL1D_FIFTH()&&((UL1D_FIFTH_Trace_Filter[1]&0x40)!=0))
#define ChkL1ClsFltr_UL1D_FIFTH_BRP_RAW_DATA_M()	(ChkL1ModFltr_UL1D_FIFTH()&&((UL1D_FIFTH_Trace_Filter[1]&0x80)!=0))
#define ChkL1MsgFltr_UL1D_TRC_MPS_PAC_ADDR()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_MPS_DETECT_CNT()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_MPS_FOE_CNT()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_DEBUG()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_AICH_STATISTICS()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_PICH_STATISTICS1()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_PICH_STATISTICS2()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_PICH_TEST_DONE()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_SFN_STATISTIC_DETECT()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_SFN_STATISTIC_METHOD()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS1_PASS()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS1_FAIL()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS1_PEAK()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS2_PASS()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS2_FAIL()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS3_PASS()	ChkL1ClsFltr_UL1D_FIFTH_CSD_H()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS3_FAIL()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS3_FAIL2()	ChkL1ClsFltr_UL1D_FIFTH_CSD_H()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS4()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_CS4_STD_VAR()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_RESULT()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_FINISH_CAND()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_CST_NO_BIN()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_PCH_AFC()	ChkL1ClsFltr_UL1D_FIFTH_CSD_L()
#define ChkL1MsgFltr_UL1D_TRC_SW_POWERON()	ChkL1ClsFltr_UL1D_FIFTH_UMTS_SM_PWR_L()
#define ChkL1MsgFltr_UL1D_TRC_SW_POWERON2()	ChkL1ClsFltr_UL1D_FIFTH_UMTS_SM_PWR_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_SCF()	ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_ENERGY()	ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_FIFO_Gi()	ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_CALC_Gi()	ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REF_TRCH()	ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_H()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_INFO()	ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_H()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RXBRP_BTFD_DUAL_TF_REFINED_CRC()	ChkL1ClsFltr_UL1D_FIFTH_DUAL_TF_H()
#define ChkL1MsgFltr_UL1D_TRC_DL_BRP_RAW_Data()	ChkL1ClsFltr_UL1D_FIFTH_BRP_RAW_DATA_M()
#define ChkL1MsgFltr_UL1D_TRC_UL_BRP_RAW_DATA()	ChkL1ClsFltr_UL1D_FIFTH_BRP_RAW_DATA_M()


#endif
