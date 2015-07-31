#ifndef L1TRC_UL1C_PRI3_DEF_H
#define L1TRC_UL1C_PRI3_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_Reconstruct1(v1, v2, v3) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_Reconstruct1((char)(v1), (char)(v2), (char)(v3));\
} while(0)
#else
	#define UL1T_TRC_TGPS_Reconstruct1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_Reconstruct2(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_Reconstruct2((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1T_TRC_TGPS_Reconstruct2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_Reconstruct3(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_Reconstruct3((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6));\
} while(0)
#else
	#define UL1T_TRC_TGPS_Reconstruct3(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_Reconstruct4(v1, v2, v3) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_Reconstruct4((char)(v1), (char)(v2), (char)(v3));\
} while(0)
#else
	#define UL1T_TRC_TGPS_Reconstruct4(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_Reconstruct5(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_Reconstruct5((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_TGPS_Reconstruct5(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_Reconstruct6(v1, v2, v3) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_Reconstruct6((short)(v1), (short)(v2), (short)(v3));\
} while(0)
#else
	#define UL1T_TRC_TGPS_Reconstruct6(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_Reconstruct7(v1, v2, v3, v4, v5, v6, v7) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_Reconstruct7((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5), (short)(v6), (short)(v7));\
} while(0)
#else
	#define UL1T_TRC_TGPS_Reconstruct7(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_MeasControl(v1, v2, v3, v4) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_MeasControl((short)(v1), (short)(v2), (char)(v3), (short)(v4));\
} while(0)
#else
	#define UL1T_TRC_TGPS_MeasControl(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_MeasControl(v1, v2, v3) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_MeasControl((char)(v1), (short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_TGPS_MeasControl(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_Act(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_Act((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1T_TRC_TGPS_Act(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Frame(v1, v2, v3, v4) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_Frame((short)(v1), (unsigned short)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1I_TRC_TGPS_Frame(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Kill_Pending_MC(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_Kill_Pending_MC((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_TGPS_Kill_Pending_MC(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Status(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_Status((short)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_TGPS_Status(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Frame_Type(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_Frame_Type((short)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_TGPS_Frame_Type(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Check_InterF(v1, v2, v3, v4) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_Check_InterF((short)(v1), (unsigned short)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1I_TRC_TGPS_Check_InterF(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Frame_Dummy(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_Frame_Dummy((short)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_TGPS_Frame_Dummy(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Not_Allow_Recons(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_Not_Allow_Recons((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_TGPS_Not_Allow_Recons(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Frame_Len(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_Frame_Len((short)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_TGPS_Frame_Len(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_MaxTTI(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_MaxTTI((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_TGPS_MaxTTI(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Overlap_Reconfig(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1I_TRC_TGPS_Overlap_Reconfig((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_TGPS_Overlap_Reconfig(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_TGCFN_MODIFY(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x01)!=0 )\
			L1TRC_Send_UL1T_TRC_TGPS_TGCFN_MODIFY((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_TGPS_TGCFN_MODIFY(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RACH_offset(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_RACH_offset((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_RACH_offset(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_KeepAwake() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_KeepAwake();\
} while(0)
#else
	#define UL1I_TRC_KeepAwake()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_VFD_RecoverFrame(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_VFD_RecoverFrame((unsigned short)(v1));\
} while(0)
#else
	#define UL1I_TRC_VFD_RecoverFrame(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_VFD_Status_Delay_VFD_timer() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_VFD_Status_Delay_VFD_timer();\
} while(0)
#else
	#define UL1I_TRC_VFD_Status_Delay_VFD_timer()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_VFD_Status_Recovery_stage2() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_VFD_Status_Recovery_stage2();\
} while(0)
#else
	#define UL1I_TRC_VFD_Status_Recovery_stage2()
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_AssignGAPDBG(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_AssignGAPDBG((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_AssignGAPDBG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_PM_Done(v1, v2, v3) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_PM_Done((short)(v1), (short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_DM_PM_Done(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_PM_Tick(v1, v2, v3) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_PM_Tick((char)(v1), (short)(v2), (char)(v3));\
} while(0)
#else
	#define UL1I_TRC_DM_PM_Tick(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DM_Set_GSM_Gap_Type(v1, v2, v3, v4) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_DM_Set_GSM_Gap_Type((char)(v1), (char)(v2), (char)(v3), (char)(v4));\
} while(0)
#else
	#define UL1I_TRC_DM_Set_GSM_Gap_Type(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Post_Fail_InSync_Immed(v1, v2, v3, v4) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_Post_Fail_InSync_Immed((short)(v1), (short)(v2), (short)(v3), (short)(v4));\
} while(0)
#else
	#define UL1I_TRC_Post_Fail_InSync_Immed(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_tgprc_modify_to_zero() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_tgprc_modify_to_zero();\
} while(0)
#else
	#define UL1I_TRC_tgprc_modify_to_zero()
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HHO_Query_Timing_fail(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_HHO_Query_Timing_fail((short)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_HHO_Query_Timing_fail(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CCM_timer_delay_type(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_CCM_timer_delay_type((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_CCM_timer_delay_type(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Leave_PLL_save_mode(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_Leave_PLL_save_mode((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_Leave_PLL_save_mode(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Enter_PLL_save_mode(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_Enter_PLL_save_mode((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_Enter_PLL_save_mode(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RestartRACH_ongoing(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x02)!=0 )\
			L1TRC_Send_UL1I_TRC_RestartRACH_ongoing((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_RestartRACH_ongoing(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_RSSI_SNIFFER1(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_RSSI_SNIFFER1((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_RSSI_SNIFFER1(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_RSSI_SNIFFER2() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_RSSI_SNIFFER2();\
} while(0)
#else
	#define UL1T_TRC_RSSI_SNIFFER2()
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_RSSI_SNIFFER3(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[2]&0x04)!=0 )\
			L1TRC_Send_UL1T_TRC_RSSI_SNIFFER3((short)(v1));\
} while(0)
#else
	#define UL1T_TRC_RSSI_SNIFFER3(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FrameTick(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x08)!=0 )\
			L1TRC_Send_UL1I_TRC_FrameTick((short)(v1), (long)(v2), (short)(v3), (long)(v4), (short)(v5));\
} while(0)
#else
	#define UL1I_TRC_FrameTick(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1T_TRC_GeminiMode(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1T_TRC_GeminiMode((char)(v1));\
} while(0)
#else
	#define UL1T_TRC_GeminiMode(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1T_TRC_PeerGeminiMode(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1T_TRC_PeerGeminiMode((char)(v1));\
} while(0)
#else
	#define UL1T_TRC_PeerGeminiMode(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_GeminiMode(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_GeminiMode((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_GeminiMode(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1T_TRC_ChannelPriority(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1T_TRC_ChannelPriority((char)(v1));\
} while(0)
#else
	#define UL1T_TRC_ChannelPriority(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_ChannelPriority(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_ChannelPriority((char)(v1), (char)(v2));\
} while(0)
#else
	#define UL1I_TRC_ChannelPriority(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_FSGapStart() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_FSGapStart();\
} while(0)
#else
	#define UL1I_TRC_FSGapStart()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_FSGapStop() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_FSGapStop();\
} while(0)
#else
	#define UL1I_TRC_FSGapStop()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_FSGapInfo_NoStartTimer(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_FSGapInfo_NoStartTimer((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_FSGapInfo_NoStartTimer(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_FSGapInfo_StartAfter(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_FSGapInfo_StartAfter((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_FSGapInfo_StartAfter(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_FSGapLength(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_FSGapLength((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_FSGapLength(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CMCSGapStart() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CMCSGapStart();\
} while(0)
#else
	#define UL1I_TRC_CMCSGapStart()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CMCSGapStop() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CMCSGapStop();\
} while(0)
#else
	#define UL1I_TRC_CMCSGapStop()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CMCSGapTimerStart(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CMCSGapTimerStart((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_CMCSGapTimerStart(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CMCSGapInfo_NoStartTimer(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CMCSGapInfo_NoStartTimer((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_CMCSGapInfo_NoStartTimer(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CMCSGapInfo_StartAfter(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CMCSGapInfo_StartAfter((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_CMCSGapInfo_StartAfter(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CMCSGapLength(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CMCSGapLength((char)(v1), (short)(v2));\
} while(0)
#else
	#define UL1I_TRC_CMCSGapLength(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CMCSGap_overlapBCH(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CMCSGap_overlapBCH((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_CMCSGap_overlapBCH(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxSuspend(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxSuspend((char)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1I_TRC_RxTxSuspend(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxRelease(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxRelease((char)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1I_TRC_RxTxRelease(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxReserve(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxReserve((char)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1I_TRC_RxTxReserve(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_Check2GTimer(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_Check2GTimer((long)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_Check2GTimer(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_Check2GReservation(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_Check2GReservation((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_Check2GReservation(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_CheckHWResource(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_CheckHWResource((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_CheckHWResource(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_CheckHWPartial(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_CheckHWPartial((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_CheckHWPartial(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_AdjustPri_InternalHigh(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_AdjustPri_InternalHigh((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_AdjustPri_InternalHigh(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_AdjustPri_CheckBCH(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_AdjustPri_CheckBCH((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_AdjustPri_CheckBCH(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_AdjustPri_SetPriHigh(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_AdjustPri_SetPriHigh((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_AdjustPri_SetPriHigh(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_AdjustPri_searchMask(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_AdjustPri_searchMask((long)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_AdjustPri_searchMask(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_Resume_Priority(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_Resume_Priority((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_Resume_Priority(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_RxStart(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_RxStart((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_RxStart(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_TxStart(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_TxStart((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_TxStart(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_RxStop() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_RxStop();\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_RxStop()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_TxStop() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_TxStop();\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_TxStop()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_all_reservation(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_all_reservation((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_all_reservation(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_rtb_been_reserved() do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_rtb_been_reserved();\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_rtb_been_reserved()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_Change_Rx_reserved(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_Change_Rx_reserved((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_Change_Rx_reserved(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxInfo_Change_Tx_reserved(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxInfo_Change_Tx_reserved((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_RxTxInfo_Change_Tx_reserved(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_RxTxSlotSuspend(v1, v2, v3, v4, v5, v6) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_RxTxSlotSuspend((char)(v1), (short)(v2), (unsigned long)(v3), (unsigned long)(v4), (unsigned long)(v5), (unsigned long)(v6));\
} while(0)
#else
	#define UL1I_TRC_RxTxSlotSuspend(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_PCHSetLength(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_PCHSetLength((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_PCHSetLength(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CPCTxStatus(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CPCTxStatus((char)(v1));\
} while(0)
#else
	#define UL1I_TRC_CPCTxStatus(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CPCTxCalInfo(v1, v2, v3, v4, v5) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CPCTxCalInfo((short)(v1), (short)(v2), (short)(v3), (short)(v4), (short)(v5));\
} while(0)
#else
	#define UL1I_TRC_CPCTxCalInfo(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CPCTxRelease(v1) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CPCTxRelease((short)(v1));\
} while(0)
#else
	#define UL1I_TRC_CPCTxRelease(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CPCTxSlotSuspend(v1, v2) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CPCTxSlotSuspend((unsigned long)(v1), (unsigned long)(v2));\
} while(0)
#else
	#define UL1I_TRC_CPCTxSlotSuspend(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1I_TRC_CPCTxNoSync(v1, v2, v3) do {\
		if(UL1C_PRI3_Trace_Filter[0]==1 && (UL1C_PRI3_Trace_Filter[1]&0x80)!=0 )\
			L1TRC_Send_UL1I_TRC_CPCTxNoSync((short)(v1), (unsigned long)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define UL1I_TRC_CPCTxNoSync(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char UL1C_PRI3_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_UL1T_TRC_TGPS_Reconstruct1(char v1, char v2, char v3);
void L1TRC_Send_UL1T_TRC_TGPS_Reconstruct2(short v1, short v2);
void L1TRC_Send_UL1T_TRC_TGPS_Reconstruct3(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_UL1T_TRC_TGPS_Reconstruct4(char v1, char v2, char v3);
void L1TRC_Send_UL1T_TRC_TGPS_Reconstruct5(short v1);
void L1TRC_Send_UL1T_TRC_TGPS_Reconstruct6(short v1, short v2, short v3);
void L1TRC_Send_UL1T_TRC_TGPS_Reconstruct7(short v1, short v2, short v3, short v4, short v5, short v6, short v7);
void L1TRC_Send_UL1T_TRC_TGPS_MeasControl(short v1, short v2, char v3, short v4);
void L1TRC_Send_UL1I_TRC_TGPS_MeasControl(char v1, short v2, char v3);
void L1TRC_Send_UL1T_TRC_TGPS_Act(char v1, char v2);
void L1TRC_Send_UL1I_TRC_TGPS_Frame(short v1, unsigned short v2, char v3, char v4);
void L1TRC_Send_UL1I_TRC_TGPS_Kill_Pending_MC(short v1);
void L1TRC_Send_UL1I_TRC_TGPS_Status(short v1, char v2);
void L1TRC_Send_UL1I_TRC_TGPS_Frame_Type(short v1, char v2);
void L1TRC_Send_UL1I_TRC_TGPS_Check_InterF(short v1, unsigned short v2, char v3, char v4);
void L1TRC_Send_UL1I_TRC_TGPS_Frame_Dummy(short v1, char v2);
void L1TRC_Send_UL1I_TRC_TGPS_Not_Allow_Recons(short v1);
void L1TRC_Send_UL1I_TRC_TGPS_Frame_Len(short v1, char v2);
void L1TRC_Send_UL1I_TRC_TGPS_MaxTTI(short v1);
void L1TRC_Send_UL1I_TRC_TGPS_Overlap_Reconfig(short v1);
void L1TRC_Send_UL1T_TRC_TGPS_TGCFN_MODIFY(short v1);
void L1TRC_Send_UL1I_TRC_RACH_offset(short v1, short v2);
void L1TRC_Send_UL1I_TRC_KeepAwake(void);
void L1TRC_Send_UL1I_TRC_VFD_RecoverFrame(unsigned short v1);
void L1TRC_Send_UL1I_TRC_VFD_Status_Delay_VFD_timer(void);
void L1TRC_Send_UL1I_TRC_VFD_Status_Recovery_stage2(void);
void L1TRC_Send_UL1I_TRC_AssignGAPDBG(char v1, short v2);
void L1TRC_Send_UL1I_TRC_DM_PM_Done(short v1, short v2, char v3);
void L1TRC_Send_UL1I_TRC_DM_PM_Tick(char v1, short v2, char v3);
void L1TRC_Send_UL1I_TRC_DM_Set_GSM_Gap_Type(char v1, char v2, char v3, char v4);
void L1TRC_Send_UL1I_TRC_Post_Fail_InSync_Immed(short v1, short v2, short v3, short v4);
void L1TRC_Send_UL1I_TRC_tgprc_modify_to_zero(void);
void L1TRC_Send_UL1I_TRC_HHO_Query_Timing_fail(short v1, short v2);
void L1TRC_Send_UL1I_TRC_CCM_timer_delay_type(char v1, short v2);
void L1TRC_Send_UL1I_TRC_Leave_PLL_save_mode(short v1);
void L1TRC_Send_UL1I_TRC_Enter_PLL_save_mode(short v1);
void L1TRC_Send_UL1I_TRC_RestartRACH_ongoing(short v1);
void L1TRC_Send_UL1T_TRC_RSSI_SNIFFER1(short v1);
void L1TRC_Send_UL1T_TRC_RSSI_SNIFFER2(void);
void L1TRC_Send_UL1T_TRC_RSSI_SNIFFER3(short v1);
void L1TRC_Send_UL1I_TRC_FrameTick(short v1, long v2, short v3, long v4, short v5);
void L1TRC_Send_UL1T_TRC_GeminiMode(char v1);
void L1TRC_Send_UL1T_TRC_PeerGeminiMode(char v1);
void L1TRC_Send_UL1I_TRC_GeminiMode(char v1);
void L1TRC_Send_UL1T_TRC_ChannelPriority(char v1);
void L1TRC_Send_UL1I_TRC_ChannelPriority(char v1, char v2);
void L1TRC_Send_UL1I_TRC_FSGapStart(void);
void L1TRC_Send_UL1I_TRC_FSGapStop(void);
void L1TRC_Send_UL1I_TRC_FSGapInfo_NoStartTimer(char v1);
void L1TRC_Send_UL1I_TRC_FSGapInfo_StartAfter(char v1, short v2);
void L1TRC_Send_UL1I_TRC_FSGapLength(char v1, short v2);
void L1TRC_Send_UL1I_TRC_CMCSGapStart(void);
void L1TRC_Send_UL1I_TRC_CMCSGapStop(void);
void L1TRC_Send_UL1I_TRC_CMCSGapTimerStart(short v1);
void L1TRC_Send_UL1I_TRC_CMCSGapInfo_NoStartTimer(char v1);
void L1TRC_Send_UL1I_TRC_CMCSGapInfo_StartAfter(char v1, short v2);
void L1TRC_Send_UL1I_TRC_CMCSGapLength(char v1, short v2);
void L1TRC_Send_UL1I_TRC_CMCSGap_overlapBCH(short v1);
void L1TRC_Send_UL1I_TRC_RxTxSuspend(char v1, unsigned long v2);
void L1TRC_Send_UL1I_TRC_RxTxRelease(char v1, unsigned long v2);
void L1TRC_Send_UL1I_TRC_RxTxReserve(char v1, unsigned long v2);
void L1TRC_Send_UL1I_TRC_RxTxInfo_Check2GTimer(long v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_Check2GReservation(char v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_CheckHWResource(char v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_CheckHWPartial(short v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_AdjustPri_InternalHigh(short v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_AdjustPri_CheckBCH(short v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_AdjustPri_SetPriHigh(short v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_AdjustPri_searchMask(long v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_Resume_Priority(short v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_RxStart(char v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_TxStart(char v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_RxStop(void);
void L1TRC_Send_UL1I_TRC_RxTxInfo_TxStop(void);
void L1TRC_Send_UL1I_TRC_RxTxInfo_all_reservation(char v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_rtb_been_reserved(void);
void L1TRC_Send_UL1I_TRC_RxTxInfo_Change_Rx_reserved(char v1);
void L1TRC_Send_UL1I_TRC_RxTxInfo_Change_Tx_reserved(char v1);
void L1TRC_Send_UL1I_TRC_RxTxSlotSuspend(char v1, short v2, unsigned long v3, unsigned long v4, unsigned long v5, unsigned long v6);
void L1TRC_Send_UL1I_TRC_PCHSetLength(short v1);
void L1TRC_Send_UL1I_TRC_CPCTxStatus(char v1);
void L1TRC_Send_UL1I_TRC_CPCTxCalInfo(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_UL1I_TRC_CPCTxRelease(short v1);
void L1TRC_Send_UL1I_TRC_CPCTxSlotSuspend(unsigned long v1, unsigned long v2);
void L1TRC_Send_UL1I_TRC_CPCTxNoSync(short v1, unsigned long v2, unsigned long v3);

void Set_UL1C_PRI3_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI3()	(UL1C_PRI3_Trace_Filter[0]==1)
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_L()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_L()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_RS_L()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_Frame_H()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_M()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[1]&0x10)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_M()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[1]&0x20)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_RS_M()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[1]&0x40)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[1]&0x80)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[2]&0x01)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[2]&0x02)!=0))
#define ChkL1ClsFltr_UL1C_PRI3_UL1C_RS_H()	(ChkL1ModFltr_UL1C_PRI3()&&((UL1C_PRI3_Trace_Filter[2]&0x04)!=0))
#define ChkL1MsgFltr_UL1T_TRC_TGPS_Reconstruct1()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_Reconstruct2()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_Reconstruct3()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_Reconstruct4()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_Reconstruct5()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_Reconstruct6()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_Reconstruct7()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_MeasControl()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_MeasControl()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_Act()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Frame()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Kill_Pending_MC()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Status()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Frame_Type()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Check_InterF()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Frame_Dummy()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Not_Allow_Recons()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Frame_Len()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_MaxTTI()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Overlap_Reconfig()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_TGCFN_MODIFY()	ChkL1ClsFltr_UL1C_PRI3_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_RACH_offset()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_KeepAwake()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_VFD_RecoverFrame()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_L()
#define ChkL1MsgFltr_UL1I_TRC_VFD_Status_Delay_VFD_timer()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_L()
#define ChkL1MsgFltr_UL1I_TRC_VFD_Status_Recovery_stage2()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_L()
#define ChkL1MsgFltr_UL1I_TRC_AssignGAPDBG()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_PM_Done()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_PM_Tick()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_DM_Set_GSM_Gap_Type()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_Post_Fail_InSync_Immed()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_tgprc_modify_to_zero()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_HHO_Query_Timing_fail()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_CCM_timer_delay_type()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_Leave_PLL_save_mode()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_Enter_PLL_save_mode()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1I_TRC_RestartRACH_ongoing()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Debug_H()
#define ChkL1MsgFltr_UL1T_TRC_RSSI_SNIFFER1()	ChkL1ClsFltr_UL1C_PRI3_UL1C_RS_H()
#define ChkL1MsgFltr_UL1T_TRC_RSSI_SNIFFER2()	ChkL1ClsFltr_UL1C_PRI3_UL1C_RS_H()
#define ChkL1MsgFltr_UL1T_TRC_RSSI_SNIFFER3()	ChkL1ClsFltr_UL1C_PRI3_UL1C_RS_H()
#define ChkL1MsgFltr_UL1I_TRC_FrameTick()	ChkL1ClsFltr_UL1C_PRI3_UL1C_Frame_H()
#define ChkL1MsgFltr_UL1T_TRC_GeminiMode()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1T_TRC_PeerGeminiMode()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_GeminiMode()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1T_TRC_ChannelPriority()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_ChannelPriority()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_FSGapStart()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_FSGapStop()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_FSGapInfo_NoStartTimer()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_FSGapInfo_StartAfter()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_FSGapLength()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CMCSGapStart()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CMCSGapStop()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CMCSGapTimerStart()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CMCSGapInfo_NoStartTimer()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CMCSGapInfo_StartAfter()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CMCSGapLength()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CMCSGap_overlapBCH()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxSuspend()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxRelease()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxReserve()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_Check2GTimer()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_Check2GReservation()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_CheckHWResource()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_CheckHWPartial()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_AdjustPri_InternalHigh()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_AdjustPri_CheckBCH()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_AdjustPri_SetPriHigh()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_AdjustPri_searchMask()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_Resume_Priority()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_RxStart()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_TxStart()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_RxStop()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_TxStop()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_all_reservation()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_rtb_been_reserved()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_Change_Rx_reserved()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxInfo_Change_Tx_reserved()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_RxTxSlotSuspend()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_PCHSetLength()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CPCTxStatus()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CPCTxCalInfo()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CPCTxRelease()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CPCTxSlotSuspend()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()
#define ChkL1MsgFltr_UL1I_TRC_CPCTxNoSync()	ChkL1ClsFltr_UL1C_PRI3_UL1C_GEMINI20_M()


#endif
