# Define source file lists to SRC_LIST
SRC_LIST = $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_cb.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_checks.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_init.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_l4c_funcs.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_l4c_msgs.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_main.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_modi_peer_rest.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_msg_proc.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_other_funcs.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_parameter.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_reset.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_sms.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_storage.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_timer.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_transport_proc.c \
           $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_utils.c \
           $(strip $(MODEM_FOLDER))/l4/src/l4_create.c \
           $(strip $(MODEM_FOLDER))/l4/src/l4_reset.c \
           $(strip $(MODEM_FOLDER))/l4/src/layer4_init.c \
           $(strip $(MODEM_FOLDER))/l4/csm/csm_main.c \
           $(strip $(MODEM_FOLDER))/l4/csm/cc/src/csmcc_atfunc.c \
           $(strip $(MODEM_FOLDER))/l4/csm/cc/src/csmcc_aux_msg_hdlr.c \
           $(strip $(MODEM_FOLDER))/l4/csm/cc/src/csmcc_bc_func.c \
           $(strip $(MODEM_FOLDER))/l4/csm/cc/src/csmcc_crss_proc.c \
           $(strip $(MODEM_FOLDER))/l4/csm/cc/src/csmcc_facility_proc.c \
           $(strip $(MODEM_FOLDER))/l4/csm/cc/src/csmcc_init.c \
           $(strip $(MODEM_FOLDER))/l4/csm/cc/src/csmcc_msg_hdlr.c \
           $(strip $(MODEM_FOLDER))/l4/csm/cc/src/csmcc_utility.c \
           $(strip $(MODEM_FOLDER))/l4/csm/ss/src/csmss_atfunc.c \
           $(strip $(MODEM_FOLDER))/l4/csm/ss/src/csmss_aux_msg_hdlr.c \
           $(strip $(MODEM_FOLDER))/l4/csm/ss/src/csmss_init.c \
           $(strip $(MODEM_FOLDER))/l4/csm/ss/src/csmss_msg_hdlr.c \
           $(strip $(MODEM_FOLDER))/l4/csm/ss/src/csmss_reset.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_cmd_ft.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_ft.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_init.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_main.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_msghdlr.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_sendmsg.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_ss_parse.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_table.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_utility.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_em.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_tst.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_main.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_msghdlr.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_analyzer.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_basic_val.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_ind.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_init.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_parser.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_root.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_rsp.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_rspfmttr.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_sio.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_utility.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_cc.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_ciss.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_data.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_em.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_eq.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_nw.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_phb.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_sim.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_sms.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_phonesuite.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_ft.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_cc_cmd.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_cc_msg.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_ciss_cmd.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_ciss_msg.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_data_cmd.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_eq_cmd.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_eq_msg.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_nw_cmd.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_nw_msg.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_phb_cmd.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_phb_msg.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_sim_cmd.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_sim_msg.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_sat_msg.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_sms_cmd.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_sms_msg.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_dt_msg.c \
           $(strip $(MODEM_FOLDER))/l4/smu/src/smu_handler.c \
           $(strip $(MODEM_FOLDER))/l4/smu/src/smu_init.c \
           $(strip $(MODEM_FOLDER))/l4/smu/src/smu_main.c \
           $(strip $(MODEM_FOLDER))/l4/rac/src/rac2_funcs.c \
           $(strip $(MODEM_FOLDER))/l4/rac/src/rac2_hdlrs.c \
           $(strip $(MODEM_FOLDER))/l4/rac/src/rac2_others.c \
           $(strip $(MODEM_FOLDER))/l4/rac/src/rac2_main.c \
           $(strip $(BUILD_L4DIR))/mcd/mcd_table_l4.c 

ifeq ($(filter __SMS_STORAGE_BY_MMI__, $(strip $(MODULE_DEFS))),)
    SRC_LIST += $(strip $(MODEM_FOLDER))/l4/smsal/src/smsal_msgbox.c
endif

ifeq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/smu/src/smu_reset.c
endif

ifneq ($(filter __CUSTOMER_TC01_DISK__, $(strip $(MODULE_DEFS))),)
ifeq ($(filter WISDOM_MMI, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/smu/src/smu_tc01_sml.c
endif
endif

ifneq ($(filter __GEMINI__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_root.c
endif

ifneq ($(filter __CTM_SUPPORT__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_ctm.c
endif

ifneq ($(filter __AGPS_CONTROL_PLANE__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_lcs_cmd.c \
  	            $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_lcs_msg.c
endif

ifneq ($(filter __CSD_FAX__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_t30_cmd.c \
                    $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_t30_msg.c
endif

ifneq ($(filter __GATI_ENABLE__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_gati.c
endif

ifneq ($(filter __MBIM_SUPPORT__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/mbci/src/mbci_init.c \
				$(strip $(MODEM_FOLDER))/l4/mbci/src/mbci_main.c \
				$(strip $(MODEM_FOLDER))/l4/mbci/src/mbci_cmd.c \
				$(strip $(MODEM_FOLDER))/l4/mbci/src/mbci_msg.c \
				$(strip $(MODEM_FOLDER))/l4/mbci/src/mbci_ind.c \
				$(strip $(MODEM_FOLDER))/l4/mbci/src/mbci_utility.c
endif

# Define include path lists to INC_DIR
INC_DIR = $(strip $(MODEM_FOLDER))/l4/csm \
          $(strip $(MODEM_FOLDER))/l4/csm/cc/include \
          $(strip $(MODEM_FOLDER))/l4/csm/ss/include \
          $(strip $(MODEM_FOLDER))/l4/csm/ss/asn1/gen/include \
          $(strip $(MODEM_FOLDER))/l4/include \
          $(strip $(MODEM_FOLDER))/l4/uem/include \
          $(strip $(MODEM_FOLDER))/l4/smu/include \
          $(strip $(MODEM_FOLDER))/l4/l4c/include/common \
          $(strip $(MODEM_FOLDER))/l4/atci/include \
          $(strip $(MODEM_FOLDER))/l4/l4c/include/proc \
          $(strip $(MODEM_FOLDER))/l4/phb/include \
          $(strip $(MODEM_FOLDER))/l4/smsal/include \
          $(strip $(MODEM_FOLDER))/l4/smslib/include \
          $(strip $(MODEM_FOLDER))/l4/rac/include \
          $(strip $(MODEM_FOLDER))/l4/tcm/common \
          $(strip $(MODEM_FOLDER))/interface/general \
          $(strip $(MODEM_FOLDER))/interface/l4 \
          $(strip $(MODEM_FOLDER))/l4/mbci/include \
          $(strip $(MODEM_FOLDER))/interface/l1/gsm \
          driver/cmux/include \
          driver/drv/include \
          custom/modem/common/atci/include \
          interface/common \
          interface/modem/l1/fdd/internal \
          interface/modem/l1/fdd/external \
          interface/service/flc2

ifneq ($(filter __UGTCM__, $(strip $(MODULE_DEFS))),)
#	INC_DIR += $(strip $(MODEM_FOLDER))/l4/tcm/ugtcm  
endif
 
# Define the specified compile options to COMP_DEFS
COMP_DEFS = SMG_REL_97 \
            __MOD_UEM__ \
            UART_ENABLE  \
            __MOD_CSM__  \
            __MOD_SMU__  \
            __MOD_NVRAM__ \
            __MOD_PHB__  \
            __MOD_SMSAL__  \
            __MOD_ATCI__ \
            __MOD_L4C__  \
            __SMS_ME_STORAGE__ \
            __CB__ \
            __UEM_DRV_KPDQUEUE__ \
            __CB_MMI_MASK__  \
            DATA_DOWNLOAD \
            __SMS_DELAY_MTSMS_REPLACE_TYPE__ \
            __CATEGORY_MODEM__ \
            __FIX_7BIT_EMPTY_CONTENT__

# Define the source file search paths to SRC_PATH
SRC_PATH = $(strip $(MODEM_FOLDER))/l4/src \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/common \
           $(strip $(MODEM_FOLDER))/l4/atci/src \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc \
           $(strip $(MODEM_FOLDER))/l4/uem/src \
           $(strip $(MODEM_FOLDER))/l4/smu/src \
           $(strip $(MODEM_FOLDER))/l4/uem/src  \
           $(strip $(MODEM_FOLDER))/l4/csm \
           $(strip $(MODEM_FOLDER))/l4/csm/cc/src  \
           $(strip $(MODEM_FOLDER))/l4/csm/ss/src  \
           $(strip $(MODEM_FOLDER))/l4/csm/ss/asn1/gen/src \
           $(strip $(MODEM_FOLDER))/l4/phb/src \
           $(strip $(MODEM_FOLDER))/l4/smsal/src \
           $(strip $(MODEM_FOLDER))/l4/rac/src \
           $(strip $(MODEM_FOLDER))/l4/l4a/src \
           $(strip $(MODEM_FOLDER))/l4/tcm/common \
           $(strip $(MODEM_FOLDER))/l4/mbci/src \
           $(strip $(MODEM_FOLDER))/interface/mcd/src 

ifneq ($(filter __UGTCM__, $(strip $(MODULE_DEFS))),)
	SRC_PATH += $(strip $(MODEM_FOLDER))/l4/tcm/ugtcm  
endif

#Option for SS-LCS
ifneq ($(filter __AGPS_CONTROL_PLANE__, $(strip $(MODULE_DEFS))),)
  SRC_LIST += $(strip $(MODEM_FOLDER))/l4/csm/ss/src/csmss_lcs_hdlr.c
  SRC_LIST += $(strip $(BUILD_SSDIR))/applib2_asn_ber_common.c \
              $(strip $(BUILD_SSDIR))/applib2_asn_common.c \
              $(strip $(BUILD_SSDIR))/applib2_asn_memory.c \
              $(strip $(BUILD_SSDIR))/ss_asn.c \
              $(strip $(BUILD_SSDIR))/ss_asn_decode.c \
              $(strip $(BUILD_SSDIR))/ss_asn_encode.c
endif

ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_EGPRS_MODE) # GPRS/HSPA project
SRC_LIST += $(strip $(MODEM_FOLDER))/l4/tcm/common/l4c2tcm_func.c \
           $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_api.c \
           $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_at_handler.c \
           $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_context.c \
           $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_gprs_statistic.c \
           $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_init.c \
           $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_main.c \
           $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_pco_api.c \
           $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_qos_api.c \
           $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_send_msg.c \
           $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_tcm.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_gprs_cmd.c \
           $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_gprs_msg.c 

ifneq ($(filter __HOMEZONE_SUPPORT__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/l4c/src/common/l4c_hz_utility.c \
	            $(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_hz_cmd.c \
				$(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_hz_msg.c
endif

ifneq ($(filter __ACL_SUPPORT__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_acl_support.c 
endif

ifneq ($(filter __TURN_ON_GENERAL_SECONDARY_PDP__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_tft_api.c  
endif

ifneq ($(filter __UGTCM__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/tcm/ugtcm/tcm_ugtcm_check.c
        SRC_LIST += $(strip $(MODEM_FOLDER))/l4/tcm/ugtcm/tcm_ugtcm_fsm.c
        SRC_LIST += $(strip $(MODEM_FOLDER))/l4/tcm/ugtcm/tcm_ugtcm_send_msg.c
        SRC_LIST += $(strip $(MODEM_FOLDER))/l4/tcm/ugtcm/tcm_ugtcm_timer.c
endif

COMP_DEFS += __MOD_TCM__ \
            __MOD_RAC__ \
            __CSD_NT_2400__ \
            __DEBUG_WRITE_SAMPLE_TO_NVM__ \
            __CFU_FTN_IN_EFCFIS__ \
            __TCM_NEW_ARCH_DEBUG__

#Option for TCM
#ifndef __MTK_TARGET__ 
ifeq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
  SRC_LIST += $(strip $(MODEM_FOLDER))/l4/tcm/common/tcm_reset.c
endif


else # GSM project

ifneq ($(filter __MOD_TCM__, $(strip $(MODULE_DEFS))),)
	SRC_LIST += $(strip $(MODEM_FOLDER))/l4/atci/src/rmmi_validator_tcm.c \
				$(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_gprs_cmd.c \
				$(strip $(MODEM_FOLDER))/l4/l4c/src/proc/l4c_gprs_msg.c
endif

endif

