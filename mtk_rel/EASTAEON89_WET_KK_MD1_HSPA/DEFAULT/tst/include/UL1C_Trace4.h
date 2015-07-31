#ifndef L1TRC_UL1C_PRI4_DEF_H
#define L1TRC_UL1C_PRI4_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER)
	#define UL1T_TRC_EDCH_Config(v1, v2, v3) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1T_TRC_EDCH_Config((char)(v1), (char)(v2), (unsigned short)(v3));\
} while(0)
#else
	#define UL1T_TRC_EDCH_Config(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EDCH_Setup(v1, v2, v3, v4) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_EDCH_Setup((short)(v1), (short)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1T_TRC_EDCH_Setup(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_EDCH_Modify(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1T_TRC_EDCH_Modify((short)(v1), (short)(v2), (char)(v3), (char)(v4), (unsigned short)(v5));\
} while(0)
#else
	#define UL1T_TRC_EDCH_Modify(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EDCH_Release(v1, v2, v3, v4) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_EDCH_Release((short)(v1), (short)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1T_TRC_EDCH_Release(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EAGCH_Calculate_Param(v1, v2, v3, v4) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_EAGCH_Calculate_Param((char)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1T_TRC_EAGCH_Calculate_Param(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EHICH_Calculate_Param(v1, v2, v3) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_EHICH_Calculate_Param((char)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_EHICH_Calculate_Param(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Calculate_Result(v1, v2, v3) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Calculate_Result((short)(v1), (char)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_Calculate_Result(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_ERGCH_Calculate_Param(v1, v2, v3) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_ERGCH_Calculate_Param((char)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_ERGCH_Calculate_Param(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Compare_EAGCH_Param(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Compare_EAGCH_Param((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7), (short)(v8));\
} while(0)
#else
	#define UL1T_TRC_Compare_EAGCH_Param(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Compare_EHICH_Param(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Compare_EHICH_Param((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1T_TRC_Compare_EHICH_Param(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Compare_Param_old(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Compare_Param_old((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_Compare_Param_old(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Compare_Param_new(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Compare_Param_new((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_Compare_Param_new(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Compare_Result(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Compare_Result((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1T_TRC_Compare_Result(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Compare_Result2(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Compare_Result2((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_Compare_Result2(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Compare_Result3(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Compare_Result3((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_Compare_Result3(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Compare_ERGCH_Param(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Compare_ERGCH_Param((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1T_TRC_Compare_ERGCH_Param(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_Compare_ERGCH_Result(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_Compare_ERGCH_Result((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1T_TRC_Compare_ERGCH_Result(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EDCH_Remove(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_EDCH_Remove((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_EDCH_Remove(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDCH_Start_Timer(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_EDCH_Start_Timer((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_EDCH_Start_Timer(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_Start_EDCH(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_Start_EDCH((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_Start_EDCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_Internal_Start_EDCH() do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_Internal_Start_EDCH();\
} while(0)
#else
	#define UL1I_TRC_Internal_Start_EDCH()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_Stop_EDCH(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_Stop_EDCH((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_Stop_EDCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_ERNTI_Config(v1, v2, v3, v4) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_ERNTI_Config((short)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1I_TRC_ERNTI_Config(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDCH_TTI_Config(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_EDCH_TTI_Config((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_EDCH_TTI_Config(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDPCCH_Config(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_EDPCCH_Config((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_EDPCCH_Config(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDPDCH_Config(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_EDPDCH_Config((unsigned long)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_EDPDCH_Config(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EDPDCH_Config2(v1, v2, v3) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_EDPDCH_Config2((char)(v1), (short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_EDPDCH_Config2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDCH_Serv_Cell_Config(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_EDCH_Serv_Cell_Config((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_EDCH_Serv_Cell_Config(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDCH_Channel_Config(v1, v2, v3) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_EDCH_Channel_Config((char)(v1), (short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_EDCH_Channel_Config(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDCH_HARQ_Config(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_EDCH_HARQ_Config((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_EDCH_HARQ_Config(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_UL1D_EDCH_Start(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_UL1D_EDCH_Start((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_UL1D_EDCH_Start(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_UL1D_EHICH_Remove(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_UL1D_EHICH_Remove((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1I_TRC_UL1D_EHICH_Remove(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_UL1D_ERGCH_Remove(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_UL1D_ERGCH_Remove((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1I_TRC_UL1D_ERGCH_Remove(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_New_UL1_EHICH_Info(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_New_UL1_EHICH_Info((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_New_UL1_EHICH_Info(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_Delete_UL1_EHICH_Info(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_Delete_UL1_EHICH_Info((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_Delete_UL1_EHICH_Info(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_New_UL1_ERGCH_Info(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_New_UL1_ERGCH_Info((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_New_UL1_ERGCH_Info(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_Delete_UL1_ERGCH_Info(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_Delete_UL1_ERGCH_Info((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_Delete_UL1_ERGCH_Info(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_EDPDCH_Calculate_Param(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1T_TRC_EDPDCH_Calculate_Param((char)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1T_TRC_EDPDCH_Calculate_Param(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EDPDCH_Get_Buffer(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1T_TRC_EDPDCH_Get_Buffer((unsigned long)(v1));\
} while(0)
#else
	#define UL1T_TRC_EDPDCH_Get_Buffer(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_HSDSCH_EDCH_Action(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1T_TRC_HSDSCH_EDCH_Action((short)(v1), (short)(v2), (char)(v3), (char)(v4), (unsigned short)(v5), (char)(v6), (char)(v7), (unsigned short)(v8));\
} while(0)
#else
	#define UL1T_TRC_HSDSCH_EDCH_Action(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL1D_EDCH_Set_MAC_Event(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x10)!=0 )\
			L1TRC_Send_UL1I_TRC_UL1D_EDCH_Set_MAC_Event((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_UL1D_EDCH_Set_MAC_Event(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDCH_UL1D_Intf(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_EDCH_UL1D_Intf((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_EDCH_UL1D_Intf(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_HSDSCH_Config(v1, v2, v3) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_HSDSCH_Config((char)(v1), (char)(v2), (unsigned short)(v3));\
} while(0)
#else
	#define UL1T_TRC_HSDSCH_Config(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_HSDSCH_Setup(v1, v2, v3, v4) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_HSDSCH_Setup((short)(v1), (short)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1T_TRC_HSDSCH_Setup(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_HSDSCH_Modify(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_HSDSCH_Modify((short)(v1), (short)(v2), (char)(v3), (char)(v4), (unsigned short)(v5));\
} while(0)
#else
	#define UL1T_TRC_HSDSCH_Modify(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_HSDSCH_Release(v1, v2, v3, v4) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_HSDSCH_Release((short)(v1), (short)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1T_TRC_HSDSCH_Release(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_HSDSCH_Suspend(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_HSDSCH_Suspend((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_HSDSCH_Suspend(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HSDSCH_Start_Timer(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_HSDSCH_Start_Timer((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_HSDSCH_Start_Timer(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Start_HSDSCH(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_Start_HSDSCH((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_Start_HSDSCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Internal_Start_HSDSCH() do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_Internal_Start_HSDSCH();\
} while(0)
#else
	#define UL1I_TRC_Internal_Start_HSDSCH()
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Stop_HSDSCH(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_Stop_HSDSCH((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_Stop_HSDSCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL1D_HS_Serv_RL_Config(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_UL1D_HS_Serv_RL_Config((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_UL1D_HS_Serv_RL_Config(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HSDSCH_Meas_Po(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_HSDSCH_Meas_Po((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_HSDSCH_Meas_Po(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL1D_HS_State_Info(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_UL1D_HS_State_Info((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_UL1D_HS_State_Info(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL1D_HS_DSCH_Start(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_UL1D_HS_DSCH_Start((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_UL1D_HS_DSCH_Start(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL1D_HS_Set_MAC_Event(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_UL1D_HS_Set_MAC_Event((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_UL1D_HS_Set_MAC_Event(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HSDSCH_UL1D_Intf(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_HSDSCH_UL1D_Intf((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_HSDSCH_UL1D_Intf(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Update_Strongest_Cells(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_Update_Strongest_Cells((char)(v1), (char)(v2), (char)(v3), (char)(v4), (short)(v5), (short)(v6), (short)(v7));\
} while(0)
#else
	#define UL1I_TRC_Update_Strongest_Cells(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Update_Strongest_Cells_RXD(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_Update_Strongest_Cells_RXD((char)(v1), (char)(v2), (char)(v3), (char)(v4), (short)(v5), (short)(v6), (short)(v7));\
} while(0)
#else
	#define UL1I_TRC_Update_Strongest_Cells_RXD(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Update_Strongest_Cells(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_Update_Strongest_Cells((char)(v1), (char)(v2), (char)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1T_TRC_Update_Strongest_Cells(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Update_Strongest_Cells_RXD(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_Update_Strongest_Cells_RXD((char)(v1), (char)(v2), (char)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1T_TRC_Update_Strongest_Cells_RXD(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Update_Serving_Cell(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_Update_Serving_Cell((char)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1T_TRC_Update_Serving_Cell(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Update_Serving_Cell_RXD(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_Update_Serving_Cell_RXD((char)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1T_TRC_Update_Serving_Cell_RXD(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Send_DC_Report(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_Send_DC_Report((short)(v1), (char)(v2));\
} while(0)
#else
	#define UL1T_TRC_Send_DC_Report(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_HS_Reset_HSCE_DB(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_HS_Reset_HSCE_DB((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_HS_Reset_HSCE_DB(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Sec_HSDSCH_64QAM(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_Sec_HSDSCH_64QAM((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_Sec_HSDSCH_64QAM(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Sec_HSDSCH_Meas_Po(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_Sec_HSDSCH_Meas_Po((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_Sec_HSDSCH_Meas_Po(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Sec_HSDSCH_MAC_Type(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_Sec_HSDSCH_MAC_Type((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_Sec_HSDSCH_MAC_Type(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_Wakeup(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_Wakeup((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_Wakeup(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CPC_Config(v1, v2, v3, v4) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1I_TRC_CPC_Config((char)(v1), (short)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1I_TRC_CPC_Config(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CPC_Control(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x20)!=0 )\
			L1TRC_Send_UL1I_TRC_CPC_Control((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_CPC_Control(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_Monitor_Order_Status(v1, v2) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1I_TRC_Monitor_Order_Status((short)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_Monitor_Order_Status(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_Monitor_Order_Timer(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x40)!=0 )\
			L1TRC_Send_UL1I_TRC_Monitor_Order_Timer((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_Monitor_Order_Timer(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_SkipSyncA() do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_SkipSyncA();\
} while(0)
#else
	#define UL1I_TRC_SkipSyncA()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CEDCH_Termination(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CEDCH_Termination((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_CEDCH_Termination(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_PCH_ETWS_Status(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_PCH_ETWS_Status((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_PCH_ETWS_Status(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_EPCH_ETWS_Status(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_EPCH_ETWS_Status((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_EPCH_ETWS_Status(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1T_TRC_CTCH_ChannelPriority(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1T_TRC_CTCH_ChannelPriority((char)(v1));\
} while(0)
#else
	#define UL1T_TRC_CTCH_ChannelPriority(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HSPASYS_Configure(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_HSPASYS_Configure((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_HSPASYS_Configure(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HSPASYS_Status(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_HSPASYS_Status((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_HSPASYS_Status(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HSPASYS_Delay_frame(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_HSPASYS_Delay_frame((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_HSPASYS_Delay_frame(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HSPASYS_ON_Control(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_HSPASYS_ON_Control((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_HSPASYS_ON_Control(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HSPASYS_OFF_Control(v1) do {\
		if(UL1C_PRI4_Trace_Filter[0]==1 && (UL1C_PRI4_Trace_Filter[1]&0x04)!=0 )\
			L1TRC_Send_UL1I_TRC_HSPASYS_OFF_Control((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_HSPASYS_OFF_Control(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char UL1C_PRI4_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_UL1T_TRC_EDCH_Config(char v1, char v2, unsigned short v3);
void L1TRC_Send_UL1T_TRC_EDCH_Setup(short v1, short v2, char v3, char v4);
void L1TRC_Send_UL1T_TRC_EDCH_Modify(short v1, short v2, char v3, char v4, unsigned short v5);
void L1TRC_Send_UL1T_TRC_EDCH_Release(short v1, short v2, char v3, char v4);
void L1TRC_Send_UL1T_TRC_EAGCH_Calculate_Param(char v1, short v2, short v3, short v4);
void L1TRC_Send_UL1T_TRC_EHICH_Calculate_Param(char v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_Calculate_Result(short v1, char v2, short v3);
void L1TRC_Send_UL1T_TRC_ERGCH_Calculate_Param(char v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_Compare_EAGCH_Param(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8);
void L1TRC_Send_UL1T_TRC_Compare_EHICH_Param(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_UL1T_TRC_Compare_Param_old(short v1);
void L1TRC_Send_UL1T_TRC_Compare_Param_new(short v1);
void L1TRC_Send_UL1T_TRC_Compare_Result(short v1, short v2);
void L1TRC_Send_UL1T_TRC_Compare_Result2(short v1);
void L1TRC_Send_UL1T_TRC_Compare_Result3(short v1);
void L1TRC_Send_UL1T_TRC_Compare_ERGCH_Param(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_UL1T_TRC_Compare_ERGCH_Result(short v1, short v2);
void L1TRC_Send_UL1T_TRC_EDCH_Remove(short v1);
void L1TRC_Send_UL1I_TRC_EDCH_Start_Timer(short v1, short v2);
void L1TRC_Send_UL1I_TRC_Start_EDCH(char v1, char v2);
void L1TRC_Send_UL1I_TRC_Internal_Start_EDCH(void);
void L1TRC_Send_UL1I_TRC_Stop_EDCH(char v1, char v2);
void L1TRC_Send_UL1I_TRC_ERNTI_Config(short v1, short v2, short v3, short v4);
void L1TRC_Send_UL1I_TRC_EDCH_TTI_Config(char v1);
void L1TRC_Send_UL1I_TRC_EDPCCH_Config(short v1);
void L1TRC_Send_UL1I_TRC_EDPDCH_Config(unsigned long v1, short v2);
void L1TRC_Send_UL1I_TRC_EDPDCH_Config2(char v1, short v2, char v3);
void L1TRC_Send_UL1I_TRC_EDCH_Serv_Cell_Config(short v1);
void L1TRC_Send_UL1I_TRC_EDCH_Channel_Config(char v1, short v2, char v3);
void L1TRC_Send_UL1I_TRC_EDCH_HARQ_Config(char v1);
void L1TRC_Send_UL1I_TRC_UL1D_EDCH_Start(short v1);
void L1TRC_Send_UL1I_TRC_UL1D_EHICH_Remove(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1I_TRC_UL1D_ERGCH_Remove(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1I_TRC_New_UL1_EHICH_Info(short v1, short v2);
void L1TRC_Send_UL1I_TRC_Delete_UL1_EHICH_Info(short v1, short v2);
void L1TRC_Send_UL1I_TRC_New_UL1_ERGCH_Info(short v1, short v2);
void L1TRC_Send_UL1I_TRC_Delete_UL1_ERGCH_Info(short v1, short v2);
void L1TRC_Send_UL1T_TRC_EDPDCH_Calculate_Param(char v1, unsigned long v2);
void L1TRC_Send_UL1T_TRC_EDPDCH_Get_Buffer(unsigned long v1);
void L1TRC_Send_UL1T_TRC_HSDSCH_EDCH_Action(short v1, short v2, char v3, char v4, unsigned short v5, char v6, char v7, unsigned short v8);
void L1TRC_Send_UL1I_TRC_UL1D_EDCH_Set_MAC_Event(short v1);
void L1TRC_Send_UL1I_TRC_EDCH_UL1D_Intf(char v1);
void L1TRC_Send_UL1T_TRC_HSDSCH_Config(char v1, char v2, unsigned short v3);
void L1TRC_Send_UL1T_TRC_HSDSCH_Setup(short v1, short v2, char v3, char v4);
void L1TRC_Send_UL1T_TRC_HSDSCH_Modify(short v1, short v2, char v3, char v4, unsigned short v5);
void L1TRC_Send_UL1T_TRC_HSDSCH_Release(short v1, short v2, char v3, char v4);
void L1TRC_Send_UL1T_TRC_HSDSCH_Suspend(short v1);
void L1TRC_Send_UL1I_TRC_HSDSCH_Start_Timer(short v1, short v2);
void L1TRC_Send_UL1I_TRC_Start_HSDSCH(char v1, char v2);
void L1TRC_Send_UL1I_TRC_Internal_Start_HSDSCH(void);
void L1TRC_Send_UL1I_TRC_Stop_HSDSCH(char v1, char v2);
void L1TRC_Send_UL1I_TRC_UL1D_HS_Serv_RL_Config(short v1);
void L1TRC_Send_UL1I_TRC_HSDSCH_Meas_Po(short v1);
void L1TRC_Send_UL1I_TRC_UL1D_HS_State_Info(char v1, char v2);
void L1TRC_Send_UL1I_TRC_UL1D_HS_DSCH_Start(short v1);
void L1TRC_Send_UL1I_TRC_UL1D_HS_Set_MAC_Event(short v1);
void L1TRC_Send_UL1I_TRC_HSDSCH_UL1D_Intf(char v1);
void L1TRC_Send_UL1I_TRC_Update_Strongest_Cells(char v1, char v2, char v3, char v4, short v5, short v6, short v7);
void L1TRC_Send_UL1I_TRC_Update_Strongest_Cells_RXD(char v1, char v2, char v3, char v4, short v5, short v6, short v7);
void L1TRC_Send_UL1T_TRC_Update_Strongest_Cells(char v1, char v2, char v3, short v4, short v5, short v6);
void L1TRC_Send_UL1T_TRC_Update_Strongest_Cells_RXD(char v1, char v2, char v3, short v4, short v5, short v6);
void L1TRC_Send_UL1T_TRC_Update_Serving_Cell(char v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1T_TRC_Update_Serving_Cell_RXD(char v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1T_TRC_Send_DC_Report(short v1, char v2);
void L1TRC_Send_UL1T_TRC_HS_Reset_HSCE_DB(short v1);
void L1TRC_Send_UL1I_TRC_Sec_HSDSCH_64QAM(short v1);
void L1TRC_Send_UL1I_TRC_Sec_HSDSCH_Meas_Po(short v1);
void L1TRC_Send_UL1I_TRC_Sec_HSDSCH_MAC_Type(char v1);
void L1TRC_Send_UL1I_TRC_Wakeup(short v1);
void L1TRC_Send_UL1I_TRC_CPC_Config(char v1, short v2, char v3, char v4);
void L1TRC_Send_UL1I_TRC_CPC_Control(char v1);
void L1TRC_Send_UL1I_TRC_Monitor_Order_Status(short v1, char v2);
void L1TRC_Send_UL1I_TRC_Monitor_Order_Timer(short v1);
void L1TRC_Send_UL1I_TRC_SkipSyncA(void);
void L1TRC_Send_UL1I_TRC_CEDCH_Termination(char v1);
void L1TRC_Send_UL1I_TRC_PCH_ETWS_Status(char v1);
void L1TRC_Send_UL1I_TRC_EPCH_ETWS_Status(char v1);
void L1TRC_Send_UL1T_TRC_CTCH_ChannelPriority(char v1);
void L1TRC_Send_UL1I_TRC_HSPASYS_Configure(short v1);
void L1TRC_Send_UL1I_TRC_HSPASYS_Status(short v1);
void L1TRC_Send_UL1I_TRC_HSPASYS_Delay_frame(short v1);
void L1TRC_Send_UL1I_TRC_HSPASYS_ON_Control(short v1);
void L1TRC_Send_UL1I_TRC_HSPASYS_OFF_Control(short v1);

void Set_UL1C_PRI4_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI4()	(UL1C_PRI4_Trace_Filter[0]==1)
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_L()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_M()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_H()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[1]&0x10)!=0))
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_CPC_M()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[1]&0x20)!=0))
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_MonitorOrd_M()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[1]&0x40)!=0))
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_CEDCH_M()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[1]&0x80)!=0))
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_DC_HSDSCH_M()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[2]&0x01)!=0))
#define ChkL1ClsFltr_UL1C_PRI4_UL1C_ETWS_M()	(ChkL1ModFltr_UL1C_PRI4()&&((UL1C_PRI4_Trace_Filter[2]&0x02)!=0))
#define ChkL1MsgFltr_UL1T_TRC_EDCH_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_EDCH_Setup()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_EDCH_Modify()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_EDCH_Release()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_EAGCH_Calculate_Param()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_EHICH_Calculate_Param()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Calculate_Result()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_ERGCH_Calculate_Param()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Compare_EAGCH_Param()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Compare_EHICH_Param()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Compare_Param_old()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Compare_Param_new()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Compare_Result()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Compare_Result2()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Compare_Result3()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Compare_ERGCH_Param()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_Compare_ERGCH_Result()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_EDCH_Remove()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_EDCH_Start_Timer()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_Start_EDCH()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_Internal_Start_EDCH()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_Stop_EDCH()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_ERNTI_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_EDCH_TTI_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_EDPCCH_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_EDPDCH_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_EDPDCH_Config2()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_EDCH_Serv_Cell_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_EDCH_Channel_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_EDCH_HARQ_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_EDCH_Start()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_EHICH_Remove()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_ERGCH_Remove()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_New_UL1_EHICH_Info()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_Delete_UL1_EHICH_Info()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_New_UL1_ERGCH_Info()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_Delete_UL1_ERGCH_Info()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_EDPDCH_Calculate_Param()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_EDPDCH_Get_Buffer()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_HSDSCH_EDCH_Action()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_EDCH_Set_MAC_Event()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_EDCH_UL1D_Intf()	ChkL1ClsFltr_UL1C_PRI4_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1T_TRC_HSDSCH_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_HSDSCH_Setup()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_HSDSCH_Modify()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_HSDSCH_Release()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_HSDSCH_Suspend()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_HSDSCH_Start_Timer()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Start_HSDSCH()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Internal_Start_HSDSCH()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Stop_HSDSCH()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_HS_Serv_RL_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_HSDSCH_Meas_Po()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_HS_State_Info()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_HS_DSCH_Start()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_HS_Set_MAC_Event()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_HSDSCH_UL1D_Intf()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Update_Strongest_Cells()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Update_Strongest_Cells_RXD()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Update_Strongest_Cells()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Update_Strongest_Cells_RXD()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Update_Serving_Cell()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Update_Serving_Cell_RXD()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Send_DC_Report()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1T_TRC_HS_Reset_HSCE_DB()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Sec_HSDSCH_64QAM()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Sec_HSDSCH_Meas_Po()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Sec_HSDSCH_MAC_Type()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Wakeup()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_L()
#define ChkL1MsgFltr_UL1I_TRC_CPC_Config()	ChkL1ClsFltr_UL1C_PRI4_UL1C_CPC_M()
#define ChkL1MsgFltr_UL1I_TRC_CPC_Control()	ChkL1ClsFltr_UL1C_PRI4_UL1C_CPC_M()
#define ChkL1MsgFltr_UL1I_TRC_Monitor_Order_Status()	ChkL1ClsFltr_UL1C_PRI4_UL1C_MonitorOrd_M()
#define ChkL1MsgFltr_UL1I_TRC_Monitor_Order_Timer()	ChkL1ClsFltr_UL1C_PRI4_UL1C_MonitorOrd_M()
#define ChkL1MsgFltr_UL1I_TRC_SkipSyncA()	ChkL1ClsFltr_UL1C_PRI4_UL1C_CEDCH_M()
#define ChkL1MsgFltr_UL1I_TRC_CEDCH_Termination()	ChkL1ClsFltr_UL1C_PRI4_UL1C_CEDCH_M()
#define ChkL1MsgFltr_UL1I_TRC_PCH_ETWS_Status()	ChkL1ClsFltr_UL1C_PRI4_UL1C_ETWS_M()
#define ChkL1MsgFltr_UL1I_TRC_EPCH_ETWS_Status()	ChkL1ClsFltr_UL1C_PRI4_UL1C_ETWS_M()
#define ChkL1MsgFltr_UL1T_TRC_CTCH_ChannelPriority()	ChkL1ClsFltr_UL1C_PRI4_UL1C_ETWS_M()
#define ChkL1MsgFltr_UL1I_TRC_HSPASYS_Configure()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_HSPASYS_Status()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_HSPASYS_Delay_frame()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_HSPASYS_ON_Control()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()
#define ChkL1MsgFltr_UL1I_TRC_HSPASYS_OFF_Control()	ChkL1ClsFltr_UL1C_PRI4_UL1C_HSDSCH_H()


#endif
