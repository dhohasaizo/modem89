#
#  Copyright Statement:
#  ---------------------------
#  This software/firmware and related documentation ("MediaTek Software") are
#  protected under relevant copyright laws. The information contained herein 
#  is confidential and proprietary to MediaTek Inc. and/or its licensors.  
#  Without the prior written permission of MediaTek inc. and/or its licensors,
#  any reproduction,modification, use or disclosure of MediaTek Software, and
#  information contained herein, in whole or in part, shall be strictly prohibited.
#   
#  MediaTek Inc.(C)2011.All rights reserved.
#
#  BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND
#  AGREES THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK 
#  SOFTWARE") RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED 
#  TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL 
#  WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
#  WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR 
#  NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER 
#  WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, 
#  INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER 
#  AGREES TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING 
#  THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE 
#  RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES 
#  CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR 
#  ANY MEDIATEK SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO 
#  CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND 
#  EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT 
#  TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,AT MEDIATEK'S OPTION, 
#  TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,OR REFUND ANY SOFTWARE 
#  LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK 
#  SOFTWARE AT ISSUE. 
#
# *************************************************************************

# Generated at 2014-03-26 09:09:38
CHIP_VERSION_CHECK = TRUE
  # Description:
  #   Enable/Disable HW ID check and supported in all projects with all current online project
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   [Any] -> [Any]

CHK_ENV_FLAG = TRUE
  # Description:
  #   to check build environment and tool chain version
  # Option Values:
  #   TRUE: need to check build environment and tool chain version;
  #         show error if the environment is not recommended.
  #   FALSE: need to check build environment and tool chain version;
  #          show WARNING if the environment is not recommended.
  # Switch-ability:
  #   [Any] -> [Any]

COMBO_MEMORY_SUPPORT = FALSE
  # Description:
  #   To support different memory part in the same load.
  # Option Values:
  #   TRUE: Enable combo memory support
  #   FALSE: Disable combo memory support.
  #          Default setting is FALSE.
  # Switch-ability:
  #   [Any] -> [Any]

CUSTOM_CFLAGS = #-gdwarf-3
  # Description:
  #   Add custom cflag
  # Option Values:
  #   --debug --no_debug_macros: .
  # Switch-ability:
  #   Non-switchable

CUSTOM_DEBUG_MODULES = NVRAM SYS_SVC SYS_DRV CONFIG
  # Description:
  #   CUSTOM_DEBUG_MODULES means these modules will be built with debug information.
  # Option Values:
  #   NONE: Disable this feature
  #   ALL: all
  #   module_names: The modules' name that you want to turn on debug information, seperated by space
  # Switch-ability:
  #   [Any] -> [Any]

CUSTOM_NON_DEBUG_MODULES = NONE
  # Description:
  #   CUSTOM_NON_DEBUG_MODULES means it will be built without debug information after custom release
  # Option Values:
  #   NONE: .
  #   ALL: .
  #   module_names: Module name list using space seperated
  # Switch-ability:
  #   [Any] -> [Any]

DEMAND_PAGING_VERSION = DPV2
  # Description:
  #   Set up which objects will be put to demand paging (DP) area.
  #   Note that the default value will be set to DPv2 by default after W11.37
  # Option Values:
  #   DPV2: Put all possible objects to DP area.
  #   DPV1: Put MMI objects to DP area
  # Switch-ability:
  #   DPV2 -> DPV1

DMA_UART_VFIFO_TUNNEL_SUPPORT = FALSE
  # Description:
  #   enable the VFIFO support UART for separate tx or rx
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

DMA_UART_VIRTUAL_FIFO = TRUE
  # Description:
  #   Support UART Virtual FIFO
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

DRV_CUSTOM_TOOL_SUPPORT = TRUE
  # Description:
  #   To enable using driver customization tool for GPIO/EINT/ADC/UEM/Keypad/PMU setting.
  # Option Values:
  #   TRUE: Enable
  #   FALSE: Disable
  # Switch-ability:
  #   [Any] -> [Any]

DRV_DEBUG_MEMORY_TRACE_SUPPORT = TRUE
  # Description:
  #   Driver do not want to depend on MMI_FEATURES_SWITCH because sometimes we do need to use memory trace debug on memory monitored project.
  # Option Values:
  #   TRUE: driver will log the trace in memory
  #   FALSE: driver won't log the trace in memory
  # Switch-ability:
  #   TRUE -> FALSE

DUALTALK = FALSE
  # Description:
  #   DUALTALK = FALSE
  #   Description:
  #   Dual talk modem definition 
  #   Option Values:
  #   TRUE: Dual talk
  #   FALSE: Single talk
  #   Switch-ability:
  #   Switchable in dual talk modem chip. ex. MT6589
  # Option Values:
  #   TRUE: Dual talk
  #   FALSE: Single talk
  # Switch-ability:
  #   TRUE -> FALSE

ECC_RETRY_ENHANCEMENT = TRUE
  # Description:
  #   If this feature option is turned on, L4C would retry ECC in other RAT when the first ECC attemp is fail.
  # Option Values:
  #   TRUE: Modem will retry fail ECC on the other RAT
  #   FALSE: Modem will not retry fail ECC on the other RAT
  # Switch-ability:
  #   Non-switchable

EDGE_CLASS_10 = FALSE
  # Description:
  #   This is for AT&T requirement that Handset can only have multislot class 10. However our default setting is multielost class 12. So we need this feature option to let customer open this feature if they want to pass AT&T cases
  # Option Values:
  #   TRUE: GPRS Multislot Class 10
  #   FALSE: GPRS Multislot Class 12
  # Switch-ability:
  #   N/A

EMMC_BOOTING = NONE
  # Description:
  #   eMMC booting (similar to NAND_FLASH_BOOTING)
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   N/A

EXT_BL_UPDATE_SUPPORT = FALSE
  # Description:
  #   This option is to control if we can use USBDL in Bootloader to update ExtBootloader.
  #   If this option is TRUE, bootloader will take more space as backup to make sure all download process will be done in a safe way
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   FALSE -> TRUE
  #   TRUE -> FALSE

FAST_DORMANCY_SUPPORT = TRUE
  # Description:
  #   This feature option is used to enable/disable 3G R8 Fast Dormancy feature.
  # Option Values:
  #   TRUE: Support both R8 & Legacy FD
  #   FALSE: Support Legacy FD
  #   not define the feature option: modem will not support R8 nor Legacy FD
  # Switch-ability:
  #   TRUE -> FALSE

FAX_SUPPORT = FALSE
  # Description:
  #   Support FAX or not, the value should be:
  #   TRUE, FALSE
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

FEATURE_OVERLOAD = FALSE
  # Description:
  #   Enabling this option will allow a project configured with more features than its physical constraints. This option just bypass some building error checkings and generate the .bin. However, the .bin is still can NOT work in target if the physical constrain
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   TRUE -> FALSE

FS_DEDICATED_BUFFER = TRUE
  # Description:
  #   If this feature is enabled, FS will allocate a dedicated buffer to enhance file system performance. The improved operations are file copy, file move (to differenct drive), disk mount, disk format and memory card hot-plug-in.
  # Option Values:
  #   TRUE: Enable FS Dedicated Buffer
  #   FALSE: Disable FS Dedicated Buffer
  # Switch-ability:
  #   TRUE -> FALSE

FS_OPEN_HINT_SUPPORT = TRUE
  # Description:
  #   FS will try to preserve several recently found locations of files or folders internally. If FS user wants to open those files or folders again later, the opening time could be minimized.
  # Option Values:
  #   TRUE: Enable FS Internal Open Hint
  #   FALSE: Disable FS Internal Open Hint
  # Switch-ability:
  #   TRUE -> FALSE

FS_TRACE_SUPPORT = FALSE
  # Description:
  #   File System will provide run-time trace information with proper configure. The trace information is very helpful to identify problem source.
  # Option Values:
  #   TRUE: To enable FS debug messange
  #   FALSE: To disable FS debug messange
  # Switch-ability:
  #   [Any] -> [Any]

GEMINI = 2
  # Description:
  #   To identify if this project uses a "Single chip-dual SIM" solution.
  # Option Values:
  #   4: Enable 4 SIMs, single talk.
  #   3: Enable 3 SIMs, single talk.
  #   FALSE: Disable this feature
  #   2: Enable 2 SIMs, single talk.
  # Switch-ability:
  #   Non-switchable

GPRS_CLASS_10 = FALSE
  # Description:
  #   This is for AT&T requirement that Handset can only have multislot class 10. However our default setting is multielost class 12. So we need this feature option to let customer open this feature if they want to pass AT&T cases
  # Option Values:
  #   TRUE: EDGE Multislot Class 10
  #   FALSE: GPRS Multislot Class 12
  # Switch-ability:
  #   N/A

GPRS_MAX_PDP_SUPPORT = 6
  # Description:
  #   Maximum simultaneous PDP contexts (2~7)
  # Option Values:
  #   6: Maximum simultaneous PDP contexts is six
  #   1: Maximum simultaneous PDP contexts is one
  #   4: Maximum simultaneous PDP contexts is four
  #   3: Maximum simultaneous PDP contexts is three
  #   7: Maximum simultaneous PDP contexts is seven
  #   2: Maximum simultaneous PDP contexts is two
  #   5: Maximum simultaneous PDP contexts is five
  # Switch-ability:
  #   N/A

GPS_SUPPORT = SMART_PHONE_MODEM
  # Description:
  #   Mapping with SMART PHONE MODEM      # NONE, SMART_PHONE_MODEM
  # Option Values:
  #   NONE: disable release GPS for smart phone modem
  #   SMART_PHONE_MODEM: enable release GPS for smart phone modem
  # Switch-ability:
  #   Non-switchable

ICUSB_SUPPORT = FALSE
  # Description:
  #   ICUSB feature is to support SIM+ card with CCID/MSDC/EEM class ability.
  #   ICUSB_SUPPORT = TRUE; enable ICUSB feature support
  #   ICUSB_SUPPORT = FALSE; disable ICUSB feature support
  #   
  #   
  # Option Values:
  #   TRUE: enable ICUSB feature support
  #   FALSE: disable ICUSB feature support
  # Switch-ability:
  #   Non-switchable

KAL_RECORD_BOOTUP_LOG = FALSE
  # Description:
  #   The goal is to print out log via Catcher at the initialization stage. We supply the API for customers and print out each initialization milistone by default. With this facility, customers who do not have Trace32 can easily locat where the problem is via UART at MAUI initialization stage.
  # Option Values:
  #   TRUE: enable boot up trace
  #   FALSE: disable boot up trace
  # Switch-ability:
  #   [Any] -> [Any]

KAL_TRACE_OUTPUT = FULL
  # Description:
  #   This option is used to enable or disable the trace output for the concern of saving ROM size
  # Option Values:
  #   NONE: Disable all trace
  #   CUST_PARTIAL: Enable partial traces
  #   FULL: Enable all trace
  # Switch-ability:
  #   NONE -> CUST_PARTIAL
  #   NONE -> FULL

L1_EPSK_TX = TRUE
  # Description:
  #   Turn on/off this compile option may switch the function of EPSK modulation transmitter
  # Option Values:
  #   TRUE: EPSK TX enable
  #   FALSE: EPSK TX disable
  # Switch-ability:
  #   Non-switchable

MODIS_FDM = OFF
  # Description:
  #   To enable On-time File System (mcu\fs\fat) on MoDIS.
  # Option Values:
  #   ON: To select On-time FS lib on MoDIS
  #   OFF: To selet MTK propietary FS lib on MoDIS
  # Switch-ability:
  #   [Any] -> [Any]

MSDC_CARD_SUPPORT_TYPE = NONE
  # Description:
  #   to support various memory card type
  # Option Values:
  #   MSDC_SD_MMC: Enable SD/MMC card support
  #   NONE: Disable memory card support
  # Switch-ability:
  #   MSDC_SD_MMC -> NONE

NAND_FLASH_BOOTING = NONE
  # Description:
  #   Specify if system has to boot from nand-flash.
  #   If yes, bootloader will be built and MAUI will be splitted into
  #   primary and secondary MAUI.
  # Option Values:
  #   NONE: Disable this feature
  #   ONDEMAND: Use demand paging mechanism
  #   BASIC: Only Primary MAUI and Secondary MAUI exist
  # Switch-ability:
  #   Non-switchable

NOR_SUPPORT_RAW_DISK = FALSE
  # Description:
  #   Purpose 
  #   (1) Support direct access API for NOR flash.
  #   (2) Support at most 2 additional raw disk regions on NOR flash.
  #   (3) Support flexible settings of disk base address and length. Only need to have disk range aligned with block size.
  #   Usage 
  #   (1) Set to TRUE.
  #   (2) Should modify custom_memorydevice.h NOR_BOOTING_NOR_DISK_NUM & NOR_BOOTING_NOR_DISKX_BASE_ADDRESS & NOR_BOOTING_NOR_DISKX_SIZE  to assign disk region.
  #   Limitation  
  #   (1) In V32/V33 project, NOR_BOOTING_NOR_DISK_NUM should be 2 and the second disk is treated as Security Partition.
  # Option Values:
  #   TRUE: Enable NOR RAW disk support
  #   FALSE: Disable NOR RAW disk support
  # Switch-ability:
  #   [Any] -> [Any]

NVRAM_PSEUDO_MERGE = OFF
  # Description:
  #   NVRAM will combine small files and this will transparent to applications.
  # Option Values:
  #   ON: To enable NVRAM pseudo merge
  #   OFF: To disable NVRAM pseudo merge
  # Switch-ability:
  #   [Any] -> [Any]

PARTIAL_TRACE_LIB = NONE
  # Description:
  #   When module was defined in PARTIAL_TRACE_LIB, the compile option, TRACE_MODULE_OFF, will be un-defined, and it will be buit with TRACE information.
  # Option Values:
  #   N/A
  # Switch-ability:
  #   Non-switchable

PHB_ADDITIONAL_SUPPORT = TRUE
  # Description:
  #   USIM Phonebook Support
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   [Any] -> [Any]

PHB_FDN_ENTRY = 50
  # Description:
  #   Maximum fixed dial number in SIM card, its value must <=32
  # Option Values:
  #   NA: The value can be 1 to 32, must <=32
  # Switch-ability:
  #   NA -> NA

PHB_LN_ENTRY = 10
  # Description:
  #   Number of the call log with single log type from single SIM card, it 's a range better no more than 100, suggestion to be 10, 20, 30, 40, 50, 60, 80, 100 and so on. Totol log num = PHB_LN_ENTRY * log type num * sim card num.
  # Option Values:
  #   60: Number of call log with single log type from single SIM card, ex, The dialed call log from SIM1 is 60, total log num = 60 * log type num * sim card num.
  #   50: Number of call log with single log type from single SIM card, ex, The dialed call log from SIM1 is 50, total log num = 50 * log type num * sim card num.
  #   40: Number of call log with single log type from single SIM card, ex, The dialed call log from SIM1 is 40, total log num = 40 * log type num * sim card num.
  #   30: Number of call log with single log type from single SIM card, ex, The dialed call log from SIM1 is 30, total log num = 30 * log type num * sim card num.
  #   10: Number of call log with single log type from single SIM card, ex, The dialed call log from SIM1 is 10, total log num = 10 * log type num * sim card num.
  #   80: Number of call log with single log type from single SIM card, ex, The dialed call log from SIM1 is 80, total log num = 80 * log type num * sim card num.
  #   100: Number of call log with single log type from single SIM card, ex, The dialed call log from SIM1 is 100, total log num = 100 * log type num * sim card num.
  #   20: Number of call log with single log type from single SIM card, ex, The dialed call log from SIM1 is 20, total log num = 20 * log type num * sim card num.
  # Switch-ability:
  #   [Any] -> [Any]

PHB_PHONE_ENTRY = 10
  # Description:
  #   Maximum Phonebook entry in Phone,  #Switch-ability: [Any] -> [Any]
  # Option Values:
  #   NA: . 
  # Switch-ability:
  #   [Any] -> [Any]

PHB_SIM_ENTRY = 1000
  # Description:
  #   Maximum Phonebook entry in SIM card.
  # Option Values:
  #   NA: .
  # Switch-ability:
  #   [Any] -> [Any]

PHB_SYNC = ON
  # Description:
  #   To enable/disable phonebook sync feature.
  # Option Values:
  #   ON: Support Sync from Phonebook
  #   OFF: Not support Sync from Phonebook
  # Switch-ability:
  #   [Any] -> [Any]

REDUCE_HEADER_DEPTH = TRUE
  # Description:
  #   To collect used header files to one folder to reduce compiler's searching time.
  # Option Values:
  #   N/A
  # Switch-ability:
  #   [Any] -> [Any]

RSAT_SUPPORT = MODEM_WITH_RSAT
  # Description:
  #   To enable RSAT(STK AT command) feature
  # Option Values:
  #   NONE: Disable RSAT support(default)
  #   MMI_WITH_RSAT: Enable RSAT support in MMI project
  #   MODEM_WITH_RSAT: Enable RSAT support in modem project
  # Switch-ability:
  #   N/A

SECURE_CUSTOM_NAME = MTK
  # Description:
  #   Support security system
  # Option Values:
  #   JRD: .
  #   NONE: No customer name specified, non secure load only
  #   MTK: Customer name for MTK
  # Switch-ability:
  #   [Any] -> [Any]

SECURE_JTAG_ENABLE = TRUE
  # Description:
  #   Support security system
  # Option Values:
  #   TRUE: The JTAG on the phone will b on
  #   FALSE: The JTAG on the phone will b off
  # Switch-ability:
  #   FALSE -> TRUE
  #   TRUE -> FALSE

SECURE_VERSION = 1
  # Description:
  #   Support security system
  # Option Values:
  #   1: Secure version 1
  #   0: Secure version 0
  # Switch-ability:
  #   [Any] -> [Any]

SIM_RECOVERY_ENHANCEMENT = TRUE
  # Description:
  #   Enable continuous SIM card recovery procedure
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

SIM_SWTICH_CONTROLLER_MT6302 = FALSE
  # Description:
  #   enable MT6302 4SIM feature
  # Option Values:
  #   TRUE: enable 4SIM controller for MT6302
  #   FALSE: disable 4SIM controller for MT6302
  # Switch-ability:
  #   N/A

SIM_SWTICH_CONTROLLER_MT6306 = FALSE
  # Description:
  #   enable MT6306 4SIM feature
  # Option Values:
  #   TRUE: enable 4SIM controller for MT6306
  #   FALSE: disable 4SIM controller for MT6306
  # Switch-ability:
  #   N/A

SIP_RAM_SIZE = NONE
  # Description:
  #   Set SiP RAM size according to BB chip 
  # Option Values:
  #   64M_BITS: SiP 64M bits RAM
  #   128M_BITS: SiP 128M bits RAM
  #   32M_BITS: SiP 32M bits RAM
  #   NONE: For Non-SiP RAM
  #   256M_BITS: SiP 256M bits RAM
  # Switch-ability:
  #   Non-switchable

SMS_PHONE_ENTRY = 10
  # Description:
  #   SMS Entry Number in NVRAM
  # Option Values:
  #   NA: SMS entities on NVRAM
  # Switch-ability:
  #   [Any] -> [Any]

SMS_TOTAL_ENTRY = 500
  # Description:
  #   total number of SMS stored in SIM and NVRAM can be read
  # Option Values:
  #   NA: SMS entities on NVRAM+SIM
  # Switch-ability:
  #   [Any] -> [Any]

SUB_BOARD_VER = PCB01
  # Description:
  #   Sub-name of the PCB or EVB.
  # Option Values:
  #   N/A
  # Switch-ability:
  #   Non-switchable

TST_WRITE_TO_FILE = FALSE
  # Description:
  #   enable tst outputting traces to files
  # Option Values:
  #   TRUE: Enable
  #   FALSE: Disable
  # Switch-ability:
  #   FALSE -> TRUE
  #   TRUE -> FALSE

USB_BOOTUP_TRACE = FALSE
  # Description:
  #   Enable bootup trace via USB
  #   Should enable KEYPAD_DEBUG_TRACE or KAL_RECORD_BOOTUP_LOG as well
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   TRUE -> FALSE

USB_DOWNLOAD_IN_BL = NONE
  # Description:
  #   enable factory download / connection via USB cable via Bootloader
  # Option Values:
  #   NONE: USBDL in Bootloader is disabled
  #   NORMAL: USBDL in Bootloader is enabled for non-secure platform
  #   SECURE: USBDL in Bootloader is enabled for secure platform
  # Switch-ability:
  #   NORMAL -> NONE

USB_HIGH_SPEED_COM_PORT_SUPPORT = FALSE
  # Description:
  #   USB High Speed Interface API usage.
  # Option Values:
  #   TRUE: Enable USB high-speed comport interface API
  #   FALSE: Disable USB high-speed comport interface API
  # Switch-ability:
  #   [Any] -> [Any]

USB_IN_NORMAL_MODE_SUPPORT = FALSE
  # Description:
  #   When this option is enable, the USB Mass Storage function could be used in normal mode. That is, the targe doesn't need to reboot when the user select "Mass Storage" in the USB query menu.
  # Option Values:
  #   TRUE: Support USB mass storage in USB normal boot mode
  #   FALSE: Mass Storage only work on charging boot mode
  # Switch-ability:
  #   [Any] -> [Any]

USB_MULTIPLE_COMPORT_ENABLE = FALSE
  # Description:
  #   To enable USB multiple com port feature
  # Option Values:
  #   TRUE: Enable multiple usb comport
  #   FALSE: disable multiple usb comport
  # Switch-ability:
  #   [Any] -> [Any]

USB_SUPPORT = FALSE
  # Description:
  #   to enable USB function
  # Option Values:
  #   TRUE: Enable USB
  #   FALSE: Disable USB
  # Switch-ability:
  #   [Any] -> [Any]

WAV_CODEC = TRUE
  # Description:
  #   wav codec is a basic audio capability in general platforms. It supports linear PCM , u-law, a-law, ADPCM wav playabck/record so it should be turned on in most cases. Only turn off it in ultra-low-cost platform to reduce memory usage and it cause not only
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   [Any] -> [Any]

WCDMA_PREFERRED = TRUE
  # Description:
  #   enable/disable WCDMA Preferred feature
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   N/A


# =========================================================================
# Feature Options which customer can NOT modify
# =========================================================================
2G_RF_CUSTOM_TOOL_SUPPORT = TRUE
  # Description:
  #   2G_RF_CUSTOM_TOOL_SUPPORT set to TRUE is to enable the feature of 2G RF custom setting modified by modem bin update tool and can modify the value by NVRAM editor
  #   For UMTS FDD dual mode projects, if user want to enable this feature,  2G_RF_CUSTOM_TOOL_SUPPORT need to set to TRUE. And customer can not modify it by himself, needs to ask for flavor build (lock build)
  #   
  #   2G_RF_CUSTOM_TOOL_SUPPORT feature options are default disabled on 11AW1112MP and 11AW1112_MOTO_ODM_SP (due to it is a patch back feature), but is default enabled on 11AMDW1119SP and 11A (thus default enabled on 11B)
  # Option Values:
  #   TRUE: Enable the feature of 2G/3G RF custom setting and band support setting modified by modem bin update tool and can modify the value by NVRAM editor
  #   FALSE: Disable the feature of 2G/3G RF custom setting and band support setting modified by modem bin update tool and also can not modify the value by NVRAM editor
  # Switch-ability:
  #   Non-switchable

32K_XOSC_REMOVE = TRUE
  # Description:
  #   support 32k crystal removal
  # Option Values:
  #   TRUE: SUPPORT 32K CRYSTAL REMOVAL
  #   FALSE: NOT SUPPORT 32K CRYSTAL REMOVAL
  # Switch-ability:
  #   Non-switchable

AEC_ENABLE = TRUE
  # Description:
  #   For Acoustic Echo Cancellation (AEC)
  # Option Values:
  #   TRUE: Support AEC in handset mode
  #   FALSE: Not Support AEC in handset mode
  # Switch-ability:
  #   Non-switchable

AGPS_SUPPORT = CONTROL_PLANE
  # Description:
  #   It decides user plane or control plane is used.
  # Option Values:
  #   NONE: Disable AGPS feature.
  #   CONTROL_PLANE: Enable AGPS control-plane. (only used for the modem load on smart phone project)
  # Switch-ability:
  #   Non-switchable

AMRWB_LINK_SUPPORT = TRUE
  # Description:
  #   If the compile option is true, our BB chip will support AMRWB voice call. If false, we won't support this function.
  # Option Values:
  #   TRUE: Support WB-AMR link
  #   FALSE: Not Support WB-AMR link
  # Switch-ability:
  #   Non-switchable

AMR_LINK_SUPPORT = TRUE
  # Description:
  #   Support AMR link, channel codec and RATSCCH procedure, with base station.
  # Option Values:
  #   TRUE: AMR enable
  #   FALSE: AMR disable
  # Switch-ability:
  #   Non-switchable

AT_COMMAND_SET = FULL
  # Description:
  #   set AT_COMMAND_SET = FULL for all projects
  #   FULL means the same setting in current existed project.s 
  #   So it will not impact any existed project.
  # Option Values:
  #   SLIM: support BT HF/DUN commands, phonesuite commands, dial up programs, and EM AT commands
  #   ULC: support BT HF commands and EM AT commands
  #   FULL: all AT commands are supported
  # Switch-ability:
  #   Non-switchable

BOOT_CERT_SUPPORT = FALSE
  # Description:
  #   Make hacker can not abuse download the binary and boot-up successfully
  # Option Values:
  #   BOOT_CERT_V2: BOOT_CERT_V2 will cover BOOT_ECRT_V1 scope plus read back attack
  #   NONE: Disable this feature
  #   BOOT_CERT_V1: BOOT_CERT_V1 make the built binary must combine with a BOOT_CERT file. Hacker can not download stolen binary into a empty phone and boot-up successfully.
  # Switch-ability:
  #   Non-switchable

CMUX_SUPPORT = TRUE
  # Description:
  #   Support 07.10 multiplexer feature: TRUE or FALSE
  # Option Values:
  #   TRUE: Enable 27.010 multiplexer
  #   FALSE: Disable 27.010 multiplexer
  # Switch-ability:
  #   Non-switchable

CSD_SUPPORT = NONE
  # Description:
  #   for CSD support
  # Option Values:
  #   T_NT: .
  #   TRUE: CSD enable
  #   NONE: .
  #   NT_ONLY: .
  #   FALSE: CSD disable
  # Switch-ability:
  #   Non-switchable

CTM_SUPPORT = TRUE
  # Description:
  #   To turn on/off CTM, TTY  feature
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

CUSTOMER_SPECIFIC_FACTORY_DETECTION = NONE
  # Description:
  #   Customer specific factory mode detection mechanism
  #   Some customers may have their own factory mode definition, the mechanism can help to mapping customer specific factory mode to system mode
  # Option Values:
  #   NONE: .
  #   CS_FAC_DET_TYPE_1: Use this type of factoty detection algorithm
  # Switch-ability:
  #   Non-switchable

DATA_CARD_SPEECH = FALSE
  # Description:
  #   Enable speech capablility via data card tool  through PC speaker and microphone
  # Option Values:
  #   TRUE: Enable data card speech
  #   FALSE: Disable Datacrad speech
  # Switch-ability:
  #   Non-switchable

DT_SUPPORT = FALSE
  # Description:
  #   This option is used to Turn on/off PC tool Phonesuite File manager related functions. If set FALSE, Phonesuite File manager will not available.
  # Option Values:
  #   FLASE: Turn off DT_SUPPORT, In this case PC tool "phonesuite" can use only limited functions(function like file manager is disabled)
  #   TRUE: Turn on DT_SUPPORT, So MediaTek PC tool "Phonesutie" file manager related functions can be used
  # Switch-ability:
  #   Non-switchable

EDGE_SUPPORT = TRUE
  # Description:
  #   Enable EDGE support Only applicable to 6229 latter version
  # Option Values:
  #   TRUE: EGPRS enable
  #   FALSE: EGPRS enable
  # Switch-ability:
  #   Non-switchable

EES_ENABLE = TRUE
  # Description:
  #   For Enhanced Echo Suppression (EES)
  # Option Values:
  #   TRUE: Support AEC in speaker mode
  #   FALSE: Not Support AEC in speaker mode
  # Switch-ability:
  #   Non-switchable

EMS_SUPPORT = NONE
  # Description:
  #   There are four level for EMS functionality, EMS 5.0, EMS 4.0, slim EMS (pure text only), and ultra low cost slim EMS (currently only can be used in PLUTO MMI). This feature option is to set what level of the EMS functionality. It will impact three library mmi (plutommi or lcmmi), ems, and custom.
  # Option Values:
  #   EMS_50: support EMS 5.0
  #   EMS_SLIM: support only pure text content.
  #   EMS_40: support EMS 4.0
  #   EMS_ULC_SLIM: remove PLUTO MMI non used part, only remain support concatenate, port, R8 language handling
  #                 (Currently only support Plutommi, other MMI version can't use!)
  # Switch-ability:
  #   Non-switchable

ENHANCED_SINGLE_BANK_NOR_FLASH_SUPPORT = FALSE
  # Description:
  #   to enable enhanced single bank NOR flash support.
  # Option Values:
  #   TRUE: Enable Single Bank support
  #   FALSE: Disable Single Bank support
  # Switch-ability:
  #   Non-switchable

EVDO_CT_SUPPORT = FALSE
  # Description:
  #   Enable EVDO China Telecom features for dual talk projects (G+C or W+C), including 2STAGE NW SELECTION, UE STORED OPLMN, CT-A Test required features
  # Option Values:
  #   TRUE: Enable EVDO China Telecom features
  #   FALSE: Disable EVDO China Telecom features
  # Switch-ability:
  #   Non-switchable

EXT_CLOCK = EXT_26M
  # Description:
  #   Specify external clock rate.
  # Option Values:
  #   EXT_13M: .
  #   EXT_26M: .
  # Switch-ability:
  #   Non-switchable

GERAN_RELEASE_SUPPORT = GERAN_R8_SUPPORT
  # Description:
  #   The option is to switch different version of release for 2G modem
  # Option Values:
  #   GERAN_R5_SUPPORT: set the 2G MODEM to 3GPP R5 baseline
  #   GERAN_R6_SUPPORT: set the 2G MODEM to 3GPP R6 baseline
  #   GERAN_R99_SUPPORT: set the 2G MODEM to 3GPP R99 baseline
  #   GERAN_R4_SUPPORT: set the 2G MODEM to 3GPP R4 baseline
  # Switch-ability:
  #   Non-switchable

HW_PFC_SUPPORT = FALSE
  # Description:
  #   PPP Framer use HW or SW
  # Option Values:
  #   TRUE: use HW PFC
  #   FALSE: use SW PFC
  # Switch-ability:
  #   Non-switchable

IPV6_PDP_SUPPORT = TRUE
  # Description:
  #   Description:
  #   IPv6 PDP Context Support
  #   Option Values:
  #   TRUE: support IPv6 PDP Context, support IPv4v6(3GPP Rel8) PDP Context
  #   FALSE: not support IPv6 PDP Context
  #   Switch-ability:
  #   N/A
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

KAL_ASSERT_LEVEL = KAL_ASSERT_LEVEL3
  # Description:
  #   Setup KAL assert level
  #   3: for full debugging facility support
  #   0: for minimal debugging facility support
  # Option Values:
  #   KAL_ASSERT_LEVEL3: .
  #   KAL_ASSERT_LEVEL2: .
  #   KAL_ASSERT_LEVEL1: .
  #   KAL_ASSERT_LEVEL0: .
  #   KAL_ASSERT_LEVEL4: save entire CPU registers
  # Switch-ability:
  #   Non-switchable

LOW_COST_SUPPORT = NONE
  # Description:
  #   General compile option for Low Cost features. Please not that a module can define its own low-cost levels, or it can just adopt
  # Option Values:
  #   TRUE: .
  #   NONE: .
  #   COMMON: .
  #   ULC: .
  #   FALSE: .
  # Switch-ability:
  #   Non-switchable

MAX_NUM_OF_NDIS_SUPPORT = 6
  # Description:
  #   support multiple(2~3) NDIS channels
  # Option Values:
  #   3: Configure the maximal number of NDIS channels
  #   2: Configure the maximal number of NDIS channels
  # Switch-ability:
  #   Non-switchable

MCD_SUPPORT = TRUE
  # Description:
  #   to enable MediaTek Message Coder Decoder feature for GSM/GPRS/EDGE project
  # Option Values:
  #   TRUE: Enable MCD (default)
  #   FALSE: Disable MCD
  # Switch-ability:
  #   Non-switchable

MCU_CLOCK = MCU_480M
  # Description:
  #   Specify MCU clock rate,
  #   MT6205B = 26MHz (MCU_26M)
  #   MT6218B/19, MT6226/7, MT6223 = 52MHz (MCU_52M)
  #   MT6228, MT6229, MT6230, MT6225 = 104MHz (MCU_104M)
  #   MT6235, MT6238, MT6239 = 208MHz (MCU_208M)
  # Option Values:
  #   MCU_39M: CPU normal operation frequency:39MHz
  #   MCU_245_76M: CPU normal operation frequency:245.76MHz
  #   MCU_208M: CPU normal operation frequency: 208MHz
  #   MCU_52M: CPU normal operation frequency:52MHz
  #   MCU_312M: CPU normal operation frequency: 312MHz
  #   MCU_104M: CPU normal operation frequency: 104MHz
  #   MCU_416M: CPU normal operation frequency: 416Mhz
  #   MCU_520M: CPU normal operation frequency: 520MHz
  #   MCU_122_88M: CPU normal operation frequency: 122.88MHz
  #   MCU_13M: CPU normal operation frequency:13MHz
  #   MCU_650M: CPU normal operation frequency: 650MHz
  #   MCU_26M: CPU normal operation frequency:26MHz
  # Switch-ability:
  #   Non-switchable

MCU_DCM = DCM_ENABLE
  # Description:
  #   to enable Dynamic Clock Switching (MCU_DCM) function for saving the current consumption. Please set DCM_ENABLE to turn on this feature. (DCM_ENABLE <-> DCM_DISABLE) DCM_ENABLE: Need correct EMI configurations.
  # Option Values:
  #   DCM_DISABLE: Disable DCM support
  #   DCM_ENABLE: Enable DCM support
  # Switch-ability:
  #   Non-switchable

MDSYS = MD1
  # Description:
  #   Dual talk modem definition 
  # Option Values:
  #   MD1: WCDMA/EDGE modem
  #   MD2: TDSCDMA/EDGE modem
  #   NONE: Not dual talk modem
  # Switch-ability:
  #   Non-switchable

MOBILE_BROADBAND = NONE
  # Description:
  #   Mobile boradband support for Network Driver Interface Specification
  #   e.g. Windows 8 , Windows 7
  # Option Values:
  #   NONE: Disable Mobile broadband
  #   MBIM: Enable Mobile broadband with MBIM protocol
  # Switch-ability:
  #   Non-switchable

MODEM_CARD = NONE
  # Description:
  #   Target is data card module.
  # Option Values:
  #   NONE: Disable this feature
  #   FULL: Data card project
  #   CS_CALL_DISABLE: Data card project, has ability to disable CS call
  # Switch-ability:
  #   Non-switchable

MULTIPLE_NDIS_SUPPORT = TRUE
  # Description:
  #   support multiple(2~3) NDIS channels
  # Option Values:
  #   TRUE: Support multiple NDIS channels
  #   FALSE: Single NDIS channel is allowed
  # Switch-ability:
  #   Non-switchable

NAND_SUPPORT = FALSE
  # Description:
  #   To enable NAND flash support, please set NAND_SUPPORT as TRUE.
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

NAND_SUPPORT_RAW_DISK = FALSE
  # Description:
  #   NAND Disk can be access without file system format
  # Option Values:
  #   TRUE: Enable NAND RAW disk support
  #   FALSE: Disable NAND RAW disk support. Normal project should be FALSE.
  # Switch-ability:
  #   Non-switchable

NDIS_SUPPORT = UPS
  # Description:
  #   to enable NDIS support in modem side
  # Option Values:
  #   NONE: Disable NDIS_SUPPORT
  #   UPS: Enable NDIS over UPS
  #   NDIS: Enable NDIS over CMUX
  # Switch-ability:
  #   Non-switchable

OPTR_SPEC_MODEM = NONE
  # Description:
  #   This feature option ONLY used for operator modem customized project, which means only turn on some compile options based specific operator's requirement, BUT NO operator specific MMI code involve.
  # Option Values:
  #   NONE: Disable this feature
  #   ATT_0402_ADAPT: AT&T modem specifc only project
  #   H3G: Hutchison modem specific only project
  # Switch-ability:
  #   Non-switchable

PACKAGE_SEG = NONE
  # Description:
  #   To identify the package by MCP combination that MTK prepared for difference chipsets. If XX_YY_SEG be configured, then __XX_YY_SEG__ compile option defined for module owners to wrap the code for specific configuration or design for this package.
  # Option Values:
  #   32_3_SEG: for 32+3 segment
  #   16_32_SEG: for 16+32 segment
  #   64_32_SEG: for 64+32 segment
  #   128_32_SEG: for 128+32 segment
  #   16_3_SEG: for 16+3 segment
  #   2G_1G_SEG: for 2G+1G segment
  #   1G_512_SEG: for 1G+512 segment
  #   32_32_SEG: for 32+32 segment
  #   512_256_SEG: for 512+256 segment
  # Switch-ability:
  #   Non-switchable

PLATFORM_FOR_CHECK = NONE
  # Description:
  #   Name of BB-chip for tool check.
  # Option Values:
  #   NONE: Disable this feature.
  #   NA: MediaTek setup this name for tool check.
  # Switch-ability:
  #   Non-switchable

PMIC = MT6320
  # Description:
  #   To specify which Power Management IC(PMIC) is used, or no PMIC.
  # Option Values:
  #   MT6235PMU: .
  #   MT6318: .
  #   NONE: No PMU/PMIC on PCB
  #   MT6305: .
  #   MT6238PMU: .
  #   MT6326_CCCI: .
  #   MT6326: .
  #   MT6253PMU: .
  #   MT6258PMU: .
  #   MT6223PMU: .
  #   MT6253ELPMU: .
  #   MT6276PMU: .
  #   MT6236PMU: .
  #   MT6255PMU: For MT6255 Usage
  #   MT6573PMU: .
  # Switch-ability:
  #   Non-switchable

PPP_SUPPORT = NONE
  # Description:
  #   The option is used to define ppp module's function. We can turn off ppp, or set PPP module's function as csd ppp support or gprs ppp support used FP as modem for dialup
  # Option Values:
  #   FULL_SUPPORT: PPP used for supporting these two functions
  #   NONE: Turn off PPP
  #   GPRS_PPP_SUPPORT: PPP used for supporting dialup as a modem for PC
  #   CSD_PPP_SUPPORT: PPP used for supporting tcpip over csd option
  # Switch-ability:
  #   Non-switchable

RFC2507_SUPPORT = TRUE
  # Description:
  #   Support RFC2507 IP header compression / decompression in PDCP of 3G modem. (TRUE/FALSE)
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

SDIO_DEVICE_CONNECTIVITY = DISABLE
  # Description:
  #   For driver of sdio device that provides connectivity, e.g. AP and MD connectivity.
  # Option Values:
  #   DISABLE: Disable this feature
  #   ENABLE: Enable this feature
  # Switch-ability:
  #   Non-switchable

SDS_SUPPORT = FALSE
  # Description:
  #   create a dsecure data storage to make customer can store data without erased by file system format
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

SECURE_PORT_SUPPORT = FALSE
  # Description:
  #   The feature option define if the sw supports enabling/disabling debug port(such catcher) via a paremater in SECURE_RO or not. TRUE means Support.
  #   It increases the security coverage of our platform.
  # Option Values:
  #   TRUE: To enable debug UART port protection
  #   FALSE: To disable debug UART port protection
  # Switch-ability:
  #   Non-switchable

SECURE_RO_ENABLE = FALSE
  # Description:
  #   Putting default values of SIM-ME-Lock and any other senitive data in put a encrypted RO.
  # Option Values:
  #   TRUE: To enable Secure RO
  #   FALSE: To disable Secure RO
  # Switch-ability:
  #   Non-switchable

SECURE_SUPPORT = FALSE
  # Description:
  #   Support security system
  # Option Values:
  #   TRUE: Secure load
  #   FALSE: Non-secure load
  # Switch-ability:
  #   Non-switchable

SERIAL_FLASH_SUPPORT = FALSE
  # Description:
  #   Description:
  #   To enable serial flash support, please set SERIAL_FLASH_SUPPORT as TRUE.
  #   Option Values:
  #   TRUE: 
  #   FALSE: 
  #   Switch-ability:
  #   Non-switchable
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

SIP_SERIAL_FLASH_SIZE = NONE
  # Description:
  #   MT6252D SIP 16Mb serial flash and MT6250D SIP 32Mb serial flash. This feature option notifies EMI gen to generate SIP serial flash setting.After set this value other than NONE, need to set COMBO_MEMORY_SUPPORT to TRUE also.
  # Option Values:
  #   32M_BITS: SIP 32Mb serial flash
  #   NONE: No serial flash SIP inside.
  #   16M_BITS: SIP 16Mb serial flash
  # Switch-ability:
  #   Non-switchable

SML_SUPPORT = TRUE
  # Description:
  #   SIM-ME lock support
  # Option Values:
  #   TRUE: Support SIM-ME lock
  #   FALSE: Not support SIM-ME lock
  # Switch-ability:
  #   Non-switchable

SMS_OVER_PS_SUPPORT = TRUE
  # Description:
  #   Wrap the functionality - "SMS over PS" - for switchable
  # Option Values:
  #   TRUE: Enable SMS send over PS
  #   FALSE: Disable SMS send over PS
  # Switch-ability:
  #   Non-switchable

SMS_R8_NATION_LANGUAGE = FALSE
  # Description:
  #   The feature option is to support Turkish special character encoding method which is defined in 3GPP 23.038 Release8.
  #   New SMS UDH IEI is introduced to indicate the encoding/decoding alphabet of special Turikish character.
  #   Using the new method, SMS can avoid to use UCS2 coding scheme when the special Turkish character is present in the message.
  # Option Values:
  #   TRUE: Enable SMS R8 Nation Language (ex: Turkey)
  #   FALSE: Disable SMS R8 Nation Language (ex: Turkey)
  # Switch-ability:
  #   Non-switchable

SW_BINDING_SUPPORT = NONE
  # Description:
  #   These 2 options are used to replace original UID_SUPPORT. 
  #   SW_BINDING_SUPPORT specifies what kind of anticlone feature for the main code is enabled. 
  #   BIND_TO_CHIP_BASIC is the same type as original UID_SUPPORT
  #   BIND_TO_CHIP is the new type which can support FOTA
  #   BIND_TO_KEY is the new type which can bind software to a customer defined key in the chip (SV5 only)
  #   BIND_TO_CHIP_AND_KEY is the combination of BIND_TO_CHIP and BIND_TO_KEY
  # Option Values:
  #   BIND_TO_CHIP_AND_KEY: BIND_TO_CHIP plus BIND_TO_KEY
  #   BIND_TO_CHIP_BASIC: Enable software binding. is the same type as original UID_SUPPORT
  #   NONE: Software bindnig is off
  #   BIND_TO_CHIP: Enable software binding which can support FOTA
  #   BIND_TO_KEY: Enable software binding which can support ROM writer
  # Switch-ability:
  #   Non-switchable

SYSDRV_BACKUP_DISK_SUPPORT = NONE
  # Description:
  #   System drive support backup disk option.
  #   Option - RAW, FAT or NONE (MAUI)
  #   Option - TRUE or FALSE (Lipton project)
  #   RAW  : Enable Backup Partition with Raw Disk Format Feature.
  #   FAT/TRUE  : Enable Backup Partition with FAT Format Feature.
  #   NONE/FALSE : Disable Backup Partition for NOR and NAND.
  #   Purpose 
  #   (1) Support NVRAM Data Backup Feature.
  #   Usage 
  #   (1) Set to RAW/FAT.
  #   Limitation  
  #   (1) Currently NOR flash does not support FAT format backup disk.
  #   (2) Currently NAND flash does not support Raw format backup disk.
  #   (3) Must set NOR_SUPPORT_RAW_DISK=TRUE if backup paritition is raw disk format.
  # Option Values:
  #   NONE: System Drive backup to disk is not supported
  #   RAW: System Drive backup to disk is supported, the disk is RAW Format
  #   FAT: System Drive backup to disk is supported, the disk is FAT Format
  # Switch-ability:
  #   Non-switchable

TST_SET_LOG_BUF_SIZ = NONE
  # Description:
  #   This option allow users to set the desired logging buffer size.
  #   With this option, user could have a large logging buffer and reduce the probability of log drop.
  #   It's useful for a feaure testing under QC.
  # Option Values:
  #   NONE: Invalidate this setting
  #   13-23: Set the logging buffer as (2^n) bytes
  # Switch-ability:
  #   Non-switchable

UMTS_TDD128_BAND_A = FALSE
  # Description:
  #   Modem Capability
  # Option Values:
  #   TRUE: Support BandA
  #   FALSE: Not Support BandA
  # Switch-ability:
  #   Non-switchable

UMTS_TDD128_BAND_B = FALSE
  # Description:
  #   Modem Capability
  # Option Values:
  #   TRUE: Support BandB
  #   FALSE: Not Support BandB
  # Switch-ability:
  #   Non-switchable

UMTS_TDD128_BAND_C = FALSE
  # Description:
  #   Modem Capability
  # Option Values:
  #   TRUE: Support BandC
  #   FALSE: Not Support BandC
  # Switch-ability:
  #   Non-switchable

UMTS_TDD128_BAND_D = FALSE
  # Description:
  #   Modem Capability
  # Option Values:
  #   TRUE: Support BandD
  #   FALSE: Not Support BandD
  # Switch-ability:
  #   Non-switchable

UMTS_TDD128_BAND_E = FALSE
  # Description:
  #   Modem Capability
  # Option Values:
  #   TRUE: Support BandE
  #   FALSE: Not Support BandE
  # Switch-ability:
  #   Non-switchable

UMTS_TDD128_BAND_F = FALSE
  # Description:
  #   Modem Capability
  # Option Values:
  #   TRUE: Support BandF
  #   FALSE: Not Support BandF
  # Switch-ability:
  #   Non-switchable

USB_COMPORT_PC_DRIVER_SUPPORT = MS
  # Description:
  #   Only if __TC01__  is defined
  #   then 
  #   USB_COMPORT_PC_DRIVER_SUPPORT = TC01
  # Option Values:
  #   TC01: TC01 comport driver
  #   MS: Microsoft comport driver
  # Switch-ability:
  #   Non-switchable

USB_COM_PORT_SUPPORT = FALSE
  # Description:
  #   Open Com Port function
  # Option Values:
  #   TRUE: Enable USB comport
  #   FALSE: Disbale USB comport
  # Switch-ability:
  #   Non-switchable

USB_HS_SUPPORT = FALSE
  # Description:
  #   Customer can use this compileoption to decide USB2.0 or USB1.1. TRUE:: work in USB2.0
  # Option Values:
  #   TRUE: Enable USB High-Speed
  #   FALSE: Disable USB High-Soeed mode (Run in Full Speed)
  # Switch-ability:
  #   Non-switchable

USB_IN_META_SUPPORT = FALSE
  # Description:
  #   This option is used to turn on Meta mode bu using USB.
  # Option Values:
  #   TRUE: support by using USB
  #   FALSE: can only use UART
  # Switch-ability:
  #   Non-switchable

USB_MASS_STORAGE_CDROM_SUPPORT = FALSE
  # Description:
  #   enable USB mass storage feature
  # Option Values:
  #   N/A
  # Switch-ability:
  #   Non-switchable

USB_MASS_STORAGE_SUPPORT = FALSE
  # Description:
  #   enable USB mass storage feature
  # Option Values:
  #   TRUE: Support USB mass storage function
  #   FALSE: doesn't  support Mass Storage  function
  # Switch-ability:
  #   Non-switchable

USIM_SUPPORT = TRUE
  # Description:
  #   Support USIM card commands or not(TRUE: support; FALSE: not support)
  # Option Values:
  #   TRUE: Enable the capability to operate USIM as USIM card, instead of SIM card.
  #   FALSE: Operate USIM as SIM
  # Switch-ability:
  #   Non-switchable


#[MTK internal used]# ------------------------------ 
ORIGINAL_VERNO = MOLY.WR8.W1248.MD.WG.MP.V45
3G_NEW_DATA_PLANE_ARCH = TRUE
  # Description:
  #   The option is to enable new data plane architecture
  # Option Values:
  #   TRUE: enable new data plane architecture
  #   FALSE: disable new data plane architecture
  # Switch-ability:
  #   Non-switchable

3G_VIDEO_CALL = FALSE
  # Description:
  #   Enable 3g video call
  # Option Values:
  #   FALSE: Turn off 3G video call on feature phone (for data card or 3G video call on smart phone)
  # Switch-ability:
  #   Non-switchable

3SET_F8F9_ENABLE = TRUE
  # Description:
  #   3 set F8/F9 HW support
  # Option Values:
  #   TRUE: Enable 3 SET F8F9 HW
  #   FALSE: Disable 3 SET F8F9 HW
  # Switch-ability:
  #   Non-switchable

AGPS_CP_SIB15_SUPPORT = TRUE
  # Description:
  #   To enable UMTS RRC processing on SIB15 for AGPS
  # Option Values:
  #   TRUE: SIB15 series messages can be supported
  #   FALSE: SIB15 series messages can not be supported
  # Switch-ability:
  #   Non-switchable

AGPS_UP_CP_CONFLICT_HANDLING_SUPPORT = TRUE
  # Description:
  #   To enable AT&T AGPS UP CP conflict handling requirements
  # Option Values:
  #   TRUE: UP/CP conflict handling mechanism is supported
  #   FALSE: UP/CP conflict handling mechanism is not supported
  # Switch-ability:
  #   Non-switchable

AOC_SUPPORT = TRUE
  # Description:
  #   3GPP feature. TS.22.024, 22.086 
  #   User can see the call cost in the MENU, and if call cost is larger than the upper limit stored in the SIM card , call will be ended.  (Under the constrient that NW. has sent AOCC in the peer MSG. )   . AOCC is a information about how to charge the call per uint.
  # Option Values:
  #   TRUE: Turn on AOC
  #   FALSE: Turn off AOC
  # Switch-ability:
  #   Non-switchable

AST_CHIP_VERSION = NONE
  # Description:
  #   Modem Capability
  # Option Values:
  #   E2: .
  #   E1: chip version
  #   E3: .
  # Switch-ability:
  #   Non-switchable

AST_SUPPORT = NONE
  # Description:
  #   Modem Capability
  # Option Values:
  #   AST2001FPGA: .
  #   AST1001: Choose TDD IP
  #   AST3001: .
  #   AST2001: .
  #   AST3002: .
  # Switch-ability:
  #   Non-switchable

BACKGROUND_SOUND = TRUE
  # Description:
  #   To enable the calling background sound feature.
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

BIP_SCWS_SUPPORT = FALSE
  # Description:
  #   BIP SCWS feature:
  #   Server mode: To establish channel between Browser and UICC
  #   Client mode: To establish channel between UICC and network
  # Option Values:
  #   TRUE: Enable BIP support
  #   FALSE: Disable BIP support(default)
  # Switch-ability:
  #   Non-switchable

BYTECOPY_SUPPORT = TRUE
  # Description:
  #   Enable/Disable BYTECOPY HW support
  # Option Values:
  #   TRUE: Enable BYTECOPY HW driver
  #   FALSE: Disable BYTECOPY HW driver
  # Switch-ability:
  #   Non-switchable

CCBS_SUPPORT = FALSE
  # Description:
  #   Enable/Disable Completion of Calls to Busy Subscriber (CCBS) feature (TS22.093) support
  # Option Values:
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

CENTRALIZED_SLEEP_MANAGER = TRUE
  # Description:
  #   This is a Chip Plaform Dependent feature.
  #   Currently, only MT6276 and MT6573 support this kind of
  #   "Centralized Sleep Mode Manager Architecture".
  # Option Values:
  #   TRUE: sleep mode enable
  #   FALSE: sleep mode enable
  # Switch-ability:
  #   Non-switchable

CNAP_SUPPORT = FALSE
  # Description:
  #   Enable/Disable Name identification supplementary services feature (TS22.096) support
  # Option Values:
  #   TRUE: Turn on CNAP
  #   FALSE: Turn off CNAP
  # Switch-ability:
  #   Non-switchable

COMPILER = GCC
  # Description:
  #   RVCT or ADS
  # Option Values:
  #   ADS: Use ARM ADS tool chain.
  #   GCC: Use GNU GCC tool chain (Mentor Sourcery 2010.09 , 4.5.1)
  #   RVCT: Use ARM RVCT tool chain
  # Switch-ability:
  #   Non-switchable

DEMO_PROJECT = FALSE
  # Description:
  #   To define projects that are experimental or for demo purposes only. It should NEVER be enabled on MP projects, and it is used by MTK internally. Customer does not need to change it
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

DSPIRDBG = FALSE
  # Description:
  #   To enable IRDBG interface for dsp debugging
  # Option Values:
  #   TRUE: .
  #   FALSE: .
  # Switch-ability:
  #   Non-switchable

DSP_SOLUTION = NONE
  # Description:
  #   This option is used to configure whether DSP core is enabled by ARM. If  DSP core functionality is required, specify the suitable DSP type for this option. Otherwise, use NONE for this option
  # Option Values:
  #   DUALMACDSP: FCore related chips.
  #   NONE: .
  # Switch-ability:
  #   Non-switchable

DUMMY_SCATTER_ENABLE = FALSE
  # Description:
  #   This option allows the generation of large dummy scatter file in order to build pass for trace-full or ZIMAGE projects.
  #   (Please note that this option is only for internal use only.)
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

EXT_MODEM_SUPPORT = FALSE
  # Description:
  #   If this option is enabled, the phone can connect to the internet via the other modem (ex. CDMA or PHS or GSM)
  # Option Values:
  #   TRUE: Enable external modem support
  #   FALSE: Disable external modem support
  # Switch-ability:
  #   Non-switchable

FDD_EDCH_PHYSICAL_CATEGORY = 7
  # Description:
  #   Define the HSUPA category in makefile. However, the actual category UE uses is the minimum of this one and the one queried from HW
  # Option Values:
  #   6: EDCH category = 6
  #   1: EDCH category = 1
  #   4: EDCH category = 4
  #   3: EDCH category = 3
  #   2: EDCH category = 2
  #   5: EDCH category = 5
  # Switch-ability:
  #   Non-switchable

FDD_HSDSCH_PHYSICAL_CATEGORY = 24
  # Description:
  #   Define the HSDPA category in makefile. However, the actual category UE uses is the minimum of this one and the one queried from HW
  # Option Values:
  #   6: HSDSCH category = 6
  #   11: HSDSCH category = 11
  #   3: HSDSCH category = 3
  #   7: HSDSCH category = 7
  #   9: HSDSCH category = 9
  #   2: HSDSCH category = 2
  #   12: HSDSCH category = 12
  #   8: HSDSCH category = 8
  #   4: HSDSCH category = 4
  #   1: HSDSCH category = 1
  #   10: HSDSCH category = 10
  #   5: HSDSCH category = 5
  # Switch-ability:
  #   Non-switchable

FLASH_DRV_IN_BL = NONE
  # Description:
  #   Define the flash driver support in bootloader.
  # Option Values:
  #   NAND: NAND flash booting
  #   EMMC: EMMC flash booting
  #   SF: Serial flash booting
  #   NOR: NOR flash booting
  #   NONE: System is not bootup by modem's bootloader.
  # Switch-ability:
  #   Non-switchable

FS_RAMDISK = FALSE
  # Description:
  #   Enable RAM disk to replace NOR flash disk.
  #   NOTE. To enable FS_RAMDISK, please configure this project as file system on NOR flash.
  # Option Values:
  #   TRUE: RAM Disk will replace flash disk (e.g., NOR, NAND, eMMC...etc) on file system. This feature is used for SP modem-only project only.
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

GCC_WARN_AS_ERROR = FALSE
  # Description:
  #   This option will regard build warnings as errors for GCC.
  # Option Values:
  #   TRUE: Support warnings as errors
  #   FALSE: Not support warnings as errors
  # Switch-ability:
  #   Non-switchable

GEMINI_VERSION = V2
  # Description:
  #   This option is for Gemini version control.
  #   V1: Gemini1.0
  #   V2: Gemini2.0 (Only for dual SIM)
  # Option Values:
  #   V1: Gemini 1.0
  #   V2: Gemini 2.0
  # Switch-ability:
  #   Non-switchable

GPRS_DIALUP_PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND = TRUE
  # Description:
  #   This feature makes PPP process UART data even if there is no FLC buffer available (ex: In 2G CS Call suspend PS Transfer, so FLC buffer run out)
  #   In this situation, PPP start to decode the UART data into a temp buffer, and if the decoded packet is a IP pac
  # Option Values:
  #   TRUE: Enable CS suspend PS in 2G.
  #   FALSE: Disable CS suspend PS in 2G.
  # Switch-ability:
  #   Non-switchable

GPRS_DIALUP_PPP_SUPPORT_ESCAPE_ATO = TRUE
  # Description:
  #   The fature enable the switch between command mode and data mode during GPRS dialup
  #   User can switch from data mode to command mode by using ESCAPE sequence (+++)
  #   User can then switch from command mode to data mode by using ATO command
  # Option Values:
  #   TRUE: Enable support for ATO +++ cmmands.
  #   FALSE: Disable support for ATO +++ cmmands.
  # Switch-ability:
  #   Non-switchable

HSUPA_CAPABILITY_NOT_SUPPORT = FALSE
  # Description:
  #   For TDD128 project, this FO determine whether UE report HSUPA Capability when HSUPA_SUPPORT = TRUE. 
  #   The main purpose of this FO is to build HSUPA modem Load without reporting HSUPA Capability for TDD128 test, i.e. UPA OFF Load.
  #   
  #   Default Value should be FALSE
  # Option Values:
  #   TRUE: TRUE, HSUPA capability will NOT reported
  #   FALSE: FALSE, HSUPA capability will reported
  # Switch-ability:
  #   Non-switchable

IC_TEST_TYPE = NONE
  # Description:
  #   N/A
  # Option Values:
  #   N/A
  # Switch-ability:
  #   Non-switchable

KAL_DEBUG_LEVEL = NORMAL_DEBUG_KAL
  # Description:
  #   Control the major KAL debugging facility availability and behavior. More debugging facility consume more extra RAM footprint.
  #   Less debugging facility may suffer extra effort to locate root cause of issue.
  #   RICH_DEBUG_KAL > NORMAL_DEBUG_KAL > SLIM_DEBUG_KAL > RELEASE_KAL.
  #   Default Setting :  NORMAL_DEBUG_KAL
  # Option Values:
  #   RELEASE_KAL: .
  #   SLIM_DEBUG_KAL: .
  #   RICH_DEBUG_KAL: .
  #   NORMAL_DEBUG_KAL: .
  # Switch-ability:
  #   Non-switchable

L1D_LOOPBACK = 0
  # Description:
  #   enable WCDMA phase 3 co-sim load
  # Option Values:
  #   0: internal use
  #   2: internal use
  # Switch-ability:
  #   Non-switchable

L1_3GSOLUTION = MTK_UL1_FDD
  # Description:
  #   Add an option to select 3G L1 solution in WCDMA project
  # Option Values:
  #   MTK_UL1_FDD: MTK UL1 solution is selected
  #   AST_TL1_TDD: AST TL1 solution is selected
  #   MTK_TL1_TDD: MTK TL1 solution is selected
  #   NONE: Disable this feature(non-3G project)
  #   MA_L1: Modem Art 3G L1 solution is selected
  # Switch-ability:
  #   Non-switchable

L1_CATCHER = TRUE
  # Description:
  #   to enable L1 logging.
  # Option Values:
  #   TRUE: Enable
  #   FALSE: Disable
  # Switch-ability:
  #   Non-switchable

L1_GPS_REF_TIME_SUPPORT = TRUE
  # Description:
  #   To enable GPS-L1 reference fine time measurement
  # Option Values:
  #   TRUE: LI GPS timing synch feature is supported
  #   FALSE: LI GPS timing synch feature is not supported
  # Switch-ability:
  #   Non-switchable

L1_TDD128 = FALSE
  # Description:
  #   Modem Capability
  # Option Values:
  #   TRUE: L1 support TDD modem
  #   FALSE: L1 not support TDD modem
  # Switch-ability:
  #   Non-switchable

MCD_CODESET_SHIFT_SUPPORT = 440000
  # Description:
  #   NONE: if Codeset Shift not support
  #   440000: if Codeset shift support by Docomo (Plmn ID: 440000)                                      You can enumerate all suitable support plmn
  # Option Values:
  #   NONE: support codec shift for DOCOMO LAB test
  #   440000: not support codec shift
  # Switch-ability:
  #   Non-switchable

MCU_DORMANT_MODE = TRUE
  # Description:
  #   MD MCU power off if it enters sleep mode. Need to back up some register to non-sleep memory before MD MCU enters WFI and restore these register after MD MCU leaves WFI. OSTD and system service need this feature option. First chip with this feature is MT6575E1.
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

MODEM_3G_LOGGING = FALSE
  # Description:
  #   Enable 3G modem logging feature
  # Option Values:
  #   TRUE: internal use
  #   FALSE: internal use
  # Switch-ability:
  #   Non-switchable

MTK_SLEEP_ENABLE = TRUE
  # Description:
  #   Sleep mode enable or not
  # Option Values:
  #   TRUE: sleep mode enable
  #   FALSE: sleep mode disable
  # Switch-ability:
  #   Non-switchable

MULTIPLE_PPP_DIALUP_SUPPORT = FALSE
  # Description:
  #   This feature support multiple(2~3) dialups on the same UART/USB
  # Option Values:
  #   TRUE: Enable multiple dialup for IOT.
  #   FALSE: Disable multiple dialup for IOT.
  # Switch-ability:
  #   Non-switchable

MULTIPLE_TBF = FALSE
  # Description:
  #   REL6 Multiple TBF
  # Option Values:
  #   TRUE: Support multiple TBF
  #   FALSE: Not support multiple TBF
  # Switch-ability:
  #   Non-switchable

NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION = FALSE
  # Description:
  #   FALSE: UE benefits from battery consumption optimisation mechanism from network, e.g. mobile phone   # TRUE: UE doesn't benefit from battery consumption optimisation mechanism from network, e.g. data card
  # Option Values:
  #   TRUE: UE doesn't benefit from battery consumption optimisation mechanism from network, e.g. data card
  #   FALSE: UE benefits from battery consumption optimisation mechanism from network, e.g. mobile phone
  # Switch-ability:
  #   Non-switchable

OP01_2G_ONLY = FALSE
  # Description:
  #   This Option is used for 6589 TG+G project. 
  #   And when it is TRUE, MD1 G will use it to configure GAS_TDD128 folder to generate bin file.
  #   When  it is FALSE, it will not change GAS folder configuration.
  # Option Values:
  #   TRUE: MD1 G will use it to configure GAS_TDD128 folder to generate bin file.
  #   FALSE: it will not change GAS folder configuration.
  # Switch-ability:
  #   Non-switchable

ORIGINAL_FLAVOR = DEFAULT
  # Description:
  #   Project original flavor setting (for customer project reference only)
  # Option Values:
  #   N/A
  # Switch-ability:
  #   Non-switchable

ORIGINAL_PROJECT_NAME = EASTAEON89_WET_KK_MD1_HSPA
  # Description:
  #   Project original name setting (for customer project reference only)
  # Option Values:
  #   N/A
  # Switch-ability:
  #   Non-switchable

PLMN_LIST_PREF_SUPPORT = DEFAULT
  # Description:
  #   PLMN List EM mode setting
  # Option Values:
  #   DEFAULT: PLMN list mode can be selected except low cost, L1S project.
  #   ON: Let PLMN List mode, accuracy or speed, can be selected by EM mode
  #   OFF: PLMN List mode can not be selected by EM mode
  # Switch-ability:
  #   Non-switchable

PPP_TYPE_PDP_DIALUP_SUPPORT = FALSE
  # Description:
  #   The feature is used to create PPP tunnel instead of IP tunnel in PS transfer.
  # Option Values:
  #   TRUE: Enable PPP type PDP context.
  #   FALSE: Disable PPP type PDP context.
  # Switch-ability:
  #   Non-switchable

PRODUCTION_RELEASE = TRUE
  # Description:
  #   Specify if production released is turned on. 
  #   If it is enabled, some system code will be effected, like
  #   1. Watchdog enabled, and must be restared each time context switch;
  #   2. Handset silent reboot if system comes across with exception;
  # Option Values:
  #   TRUE: Disable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

PS_HANDOVER = FALSE
  # Description:
  #   REL6 PS handover
  # Option Values:
  #   TRUE: Support PS handover
  #   FALSE: Not support PS handover
  # Switch-ability:
  #   Non-switchable

R7R8_FULL_SET_SUPPORT = FALSE
  # Description:
  #   Description:
  #   This feature option is to turn ON some rare R7R8 capability indication, such as MACIIS, DRXInFACH, EnhancedCommonState, COMMON_EDCH, HSDSCH_CELL_CHNAGE_ENHANCED, CSoHS, UEA2_UIA2
  #   Option Values:
  #   ENABLE: Enable these feature's capability
  #   DISABLE: Disable this feature's capability
  #   Switch-ability:
  #   [FALSE] -> [TRUE]
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

RRC_PAYLOAD_FOR_3G_UP_SUPPORT = FALSE
  # Description:
  #   Depend on this option to differentiate if UE supports 3G RRC payload type in SUPL POS message or not
  # Option Values:
  #   TRUE: RRC payload can be supported for SUPL
  #   FALSE: RRC payload can not be supported for SUPL
  # Switch-ability:
  #   Non-switchable

RRLP_VER_SUPPORT = R7
  # Description:
  #   To change RRLP protocol version for both AGPS user plane and/or control plane.
  # Option Values:
  #   NONE: Doesn't support RRLP (it also means both AGPS user plane and control plane are not supported)
  #   R5: Support RRLP for 3GPP R5
  #   R7: Support RRLP for 3GPP R7
  # Switch-ability:
  #   Non-switchable

RTOS = NUCLEUS_V2
  # Description:
  #   The RTOS used in the load
  # Option Values:
  #   NUCLEUS_V2: Use Nucleus 2.x as the OX
  #   NUCLEUS: Use Nucles 1.13 as the OS
  # Switch-ability:
  #   Non-switchable

RTOS_DEBUG = TRUE
  # Description:
  #   We will support two RTOS: NUCLEUS and THREADX. The users can select one of them in their proejcts.
  # Option Values:
  #   TRUE: Enable OnlineSST OS diagnosis
  #   FALSE: Disable OnlineSST OS diagnosis
  # Switch-ability:
  #   Non-switchable

RVCT_PARTIAL_LINK = FALSE
  # Description:
  #   True:turn on partial link; False:turn off partial link
  # Option Values:
  #   TRUE: In linking process, try normal link firstly, if OOM, try partiallink next
  #   FALSE: In linking process, normal link only
  # Switch-ability:
  #   Non-switchable

RVCT_VERSION = NONE
  # Description:
  #   ARM RVCT Version
  # Option Values:
  #   V31: ARM RVCT Version 3.1
  #   V22: ARM RVCT Version 2.2
  # Switch-ability:
  #   Non-switchable

SIM_HOT_SWAP = SIM_SLOT_1
  # Description:
  #   support SIM hot swap, only MT6253D enable now
  # Option Values:
  #   SIM_SLOT_3: 3 SIM  project, support sim hot swap from SLOT 3
  #   NULL: not support SIM hot swap
  #   SIM_SLOT_4: 4 SIM  project, support sim hot swap from SLOT 4
  #   SIM_SLOT_2: Dual SIM  project, support sim hot swap from SLOT 2
  #   SIM_SLOT_1: single SIM project, support sim hot swap from SLOT 1
  # Switch-ability:
  #   Non-switchable

SMART_PHONE_CORE = ANDROID_MODEM
  # Description:
  #   To distinguish if it is a smart phone MODEM makefile or a smart phone APP makefile. NONE means it is not a smart-phone make file
  # Option Values:
  #   NONE: .
  #   ANDROID_MODEM: modem processor software load for Android smart phone
  #   MODEM_ONLY: in-house testing load running on modem processor
  # Switch-ability:
  #   Non-switchable

SP_VIDEO_CALL_SUPPORT = TRUE
  # Description:
  #   Enable Video Call Modem Capability for Smartphone project
  # Option Values:
  #   TRUE: Turn on Video Call Support for Smartphone
  #         (conflict w/ 3G_VIDEO_CALL)
  #   FALSE: Turn off Video Call Support for Smartphone
  # Switch-ability:
  #   Non-switchable

SSS_SUPPORT = SSS_LIB
  # Description:
  #   1. bootloader and MAUI share the same library sss.lib
  #   2. Apply this option for USB download related projects
  # Option Values:
  #   SSS_LIB: .
  #   SSS_SOURCE: .
  # Switch-ability:
  #   Non-switchable

TDD_EDCH_PHYSICAL_CATEGORY = NONE
  # Description:
  #   Define the HSUPA category in makefile.
  # Option Values:
  #   6: EDCH Physical category = 6
  #   1: EDCH Physical category = 1
  #   4: EDCH Physical category = 4
  #   3: EDCH Physical category 3
  #   2: EDCH Physical category = 2
  #   5: EDCH Physical category = 5
  # Switch-ability:
  #   Non-switchable

TDD_HSDSCH_PHYSICAL_CATEGORY = NONE
  # Description:
  #   Define the HSDPA category in makefile.
  # Option Values:
  #   6: HSDSCH category = 6
  #   11: HSDSCH category = 11
  #   3: HSDSCH category = 3
  #   7: HSDSCH category = 7
  #   9: HSDSCH category = 9
  #   12: HSDSCH category = 12
  #   2: HSDSCH category = 2
  #   15: HSDSCH category = 15
  #   14: HSDSCH category = 14
  #   8: HSDSCH category = 8
  #   4: HSDSCH category = 4
  #   1: HSDSCH category = 1
  #   10: HSDSCH category = 10
  #   13: HSDSCH category = 13
  #   5: HSDSCH category = 5
  # Switch-ability:
  #   Non-switchable

TEST_LOAD_TYPE = NONE
  # Description:
  #   internal test load type
  # Option Values:
  #   L1S: L1S
  #   UDVT: UDVT
  #   BASIC: BASIC
  #   NONE: NONE
  # Switch-ability:
  #   Non-switchable

TST_DNT_LOGGING = FALSE
  # Description:
  #   Enable SIB logging (High speed logging interface)
  # Option Values:
  #   TRUE: Enable
  #   FALSE: Disable
  # Switch-ability:
  #   Non-switchable

TST_LOGACC_SUPPORT = FALSE
  # Description:
  #   to enable the LogAcc HW Support for TST.
  # Option Values:
  #   TRUE: Enable
  #   FALSE: Disable
  # Switch-ability:
  #   Non-switchable

TST_MALMO_SUPPORT = FALSE
  # Description:
  #   Support advanced logging acceleration system, Maimo.
  #   It's HW dependent and only supported on certain platforms.
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

TST_SUPPORT = TRUE
  # Description:
  #   to enable message logging and debug information tracing mechanism.
  # Option Values:
  #   TRUE: Enable
  #   FALSE: Disable
  # Switch-ability:
  #   Non-switchable

UART3_SUPPORT = FALSE
  # Description:
  #   Support UART3
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

ULCS_ASN_SUPPORT_VERSION = ULCS_ASN_SUPPORT_R99
  # Description:
  #   Depend on this option to differentiate NW IE supported vesions of 3G RRC payload type in SUPL POS message
  # Option Values:
  #   ULCS_ASN_SUPPORT_R99: The ASN codec supports R99 version LCS IEs
  #   ULCS_ASN_SUPPORT_R6: The ASN codec supports R6 version LCS IEs
  # Switch-ability:
  #   Non-switchable

USB_TETHERING = FALSE
  # Description:
  #   To replace ppp dialup.  However, almost no set-up is required.  User simply connects a USB cable from PC to the phone.  And then he can connect to the network.
  # Option Values:
  #   TRUE: Enable USB tethering function
  #   FALSE: Disable USB tethering function
  # Switch-ability:
  #   Non-switchable

UUS_SUPPORT = FALSE
  # Description:
  #   Enable/Disable CC UUS feature (TS22.087) support
  # Option Values:
  #   N/A
  # Switch-ability:
  #   Non-switchable

VAMOS_SUPPORT = TRUE
  # Description:
  #   To enable VAMOS modem capability
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

VENDOR = NONE
  # Description:
  #   If not NONE, the project is a vendor project or is doing vendor release
  # Option Values:
  #   (other than NONE): This project is for the specified VENDOR
  #   NONE: Not a vendor project
  # Switch-ability:
  #   Non-switchable

X_BOOTING = NONE
  # Description:
  #   Define the device for X-booting
  # Option Values:
  #   SDIO: booting from SDIO
  #   USB: booting from USB
  #   UART: booting from UART
  #   NONE: Disable X-booting
  # Switch-ability:
  #   Non-switchable

ZIMAGE_FAVOR_ROM = FALSE
  # Description:
  #   It's an accessory feature option of ZIMAGE_SUPPORT, and is used in zImage auto configuration mechanism.
  #   If SWLA or SWTR is required while ZIMAGE_SUPPORT = TRUE, this feature should also be enabled. Otherwise SWLA and SWTR will not be able to work.
  #   When this feature is enabled, zImage will try to reserve maximum free RAM while keeping the load can be built pass at the same time. And thus the remaining free RAM can be used by SWLA and SWTR.
  # Option Values:
  #   TRUE: Enable this feature
  #   FALSE: Disable this feature
  # Switch-ability:
  #   Non-switchable

ZIMAGE_SUPPORT = FALSE
  # Description:
  #   Please refer to CR MAUI_02832638 which was applied to 10AW1041OFD_53EL_SLIM
  # Option Values:
  #   TRUE: Enable code compression to utilize the free RAM space and save ROM space
  #   FALSE: Disable code compression mechanism
  # Switch-ability:
  #   Non-switchable


HW_VER = EASTAEON89_WET_KK_MD1_HSPA_HW

DUAL_SIM_HOT_SWAP_CO_DECK = FALSE

CTA_ECC_SUPPORT = TRUE

2G_TX_AUTO_CAL_ENHANCEMENT_SUPPORT = FALSE

2G_TX_VOLTAGE_COMPENSATION_SUPPORT = FALSE

L1L2_TX_NEW_ARCH = TRUE


# *************************************************************************
# Release Setting Section
# *************************************************************************
RELEASE_PACKAGE		= REL_CR_L4	# REL_CR_MMI_GPRS, REL_CR_MMI_GSM, REL_CR_L4_GPRS, REL_CR_L4_GSM REL_SUB_UAS_UMTS
RELEASE_PACKAGE_SUB_PS = REL_SUB_PROTOCOL

RELEASE_$(strip $(INPUT_METHOD)) = SRC	# MTK/SRC, only works when INPUT_METHOD is turning on
RELEASE_INPUT_METHODS_SRC =		# MMI_ZI, MMI_T9, MMI_ITAP,
RELEASE_TYPE = NONE           # NONE, INTERNAL
############################################################

# *************************************************************************
# Consistent Feature Options
# *************************************************************************
COM_DEFS_FOR_MT6167_2G_SKYPA_S5_128_CUSTOM  = MT6167_RF MT6167_2G_SKYPA_S5_128_CUSTOM
COM_DEFS_FOR_CUSTOM_MT6167_SKY_128  = MT6167_RF CUSTOM_MT6167_SKY_128
# *************************************************************************
# Include MODEM.mak
# *************************************************************************
include make/MODEM.mak

# *************************************************************************
# Common preprocessor definitions
# *************************************************************************
CUSTOM_OPTION += __MANUAL_MODE_NW_SEL__ \
                 __CP_HW_CIPHER_ENABLE__ __CP_HW_INTEGRITY_ENABLE__ \
                 __USIM_DRV__ \

CUSTOM_OPTION += __NBR_CELL_INFO__ \
                 __SATCC__ __SATC3__ __SATCE__

CUSTOM_OPTION += __R6_OOS__ 

CUSTOM_OPTION += __HSPA_PREFERENCE_SETTING__  __DYNAMIC_HSPA_PREFERENCE__

CUSTOM_OPTION += __BT_SIM_PROFILE__ __CTA_DUAL_SIM_STANDARD__ __L4C_ROOT__  

CUSTOM_OPTION += __AT_EPBW_SUPPORT__ __CPI_SUPPORT__

CUSTOM_OPTION += DEBUG_SWLA __MINI_LOG_SUPPORT__

CUSTOM_OPTION += __GEMINI_3G_SWITCH__ __NVRAM_IMPORTANT_PARTITIONS__

# ************************************************************************* 
# Component trace definition header files for custom release only 
# ************************************************************************* 
# Customer can add new trace headers here for new modules 
NEW_CUS_REL_TRACE_DEFS_MODEM =

# *************************************************************************
# Custom Release Component Configuration
# *************************************************************************
include make/rel/$(strip $(RELEASE_PACKAGE)).mak

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifneq ($(findstring REL_SUB_, $(strip $(RELEASE_PACKAGE))),)
    -include make/rel/sub_ps/$(strip $(RELEASE_PACKAGE_SUB_PS)).mak
  endif
endif


