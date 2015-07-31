#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2005
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#
# *************************************************************************
# STANDALONE_ACTION.mak - independent build action
#
#  DISCUSSION:
#
#  USAGE:
#
#  IMPORTANT NOTES:
#
# *************************************************************************
#
# $Revision:$
# $Modtime:$
# $Log:$
#
# 01 08 2013 amber.su
# [MOLY00008435] [SystemService][MemoryUitlity][Internal Refinement] Provide build command to use Memory Utility
# .
#
# 01 08 2013 amber.su
# [MOLY00008435] [SystemService][MemoryUitlity][Internal Refinement] Provide build command to use Memory Utility
# .
# 
# 09 26 2012 amber.su
# [MOLY00004055] [Custom Release][Build Command] build command change for custom release flow
# .
# 
# 09 12 2012 amber.su
# [MOLY00003467] [Target Build] build command change modification
# .
# 
# 07 30 2012 jerry.chang
# [MOLY00001397] [MOLY] rename gsm2.mak and make2.pl
# .
# *************************************************************************

.PHONY: gendsp gendummylis update_memconfig post_memconfig

# *************************************************************************
#  Process DSP BIN
# *************************************************************************	
gendsp:
ifeq ($(strip $(DSP_SOLUTION)),DUALMACDSP)
		@if exist $(strip $(TARGDIR))\$(strip $(BIN_FILE))\ROM \
			(copy /y $(FIXPATH)\modem\dsp_bin\"$(strip $(DUALMACDSP_BIN)).bin" $(strip $(TARGDIR))\$(strip $(BIN_FILE))\DSP_ROM >NUL)& \
			(copy /y $(FIXPATH)\modem\dsp_bin\"$(strip $(DUALMACDSP_BL_BIN)).bin" $(strip $(TARGDIR))\$(strip $(BIN_FILE))\DSP_BL >NUL) \
		else \
			(copy /y $(FIXPATH)\modem\dsp_bin\"$(strip $(DUALMACDSP_BIN)).bin" $(strip $(TARGDIR))\DSP_ROM >NUL) & \
			(copy /y $(FIXPATH)\modem\dsp_bin\"$(strip $(DUALMACDSP_BL_BIN)).bin" $(strip $(TARGDIR))\DSP_BL >NUL)
endif

# *************************************************************************
#  Generate dummy .lis file for memory analysis
# *************************************************************************	
gendummylis: 
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_S,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

	@if exist $(SCATTERFILE) copy /y $(SCATTERFILE) $(SCATTERFILE).original > NUL
	@tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) DUMMY_LIS=TRUE sys_auto_gen LINK_BIN_FILE & \
		(if ERRORLEVEL 1 exit 1)
	
	@if not exist $(strip $(TARGDIR))\$(TARGNAME).elf	\
		echo Error in gendummylis & exit 1

ifeq ($(strip $(VIVA_AUTO_SUPPORT)),TRUE)
	@tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) FROMELF_BIN_FILE & \
		(if ERRORLEVEL 1 exit 1)
	@if not exist $(strip $(TARGDIR))\VIVA_DEBUG md $(strip $(TARGDIR))\VIVA_DEBUG
	@if exist $(strip $(TARGDIR))\$(strip $(BIN_FILE)) \
		md $(strip $(TARGDIR))\VIVA_DEBUG\$(strip $(BIN_FILE))_dummy & \
		copy /y $(strip $(TARGDIR))\$(strip $(BIN_FILE))\*.* $(strip $(TARGDIR))\VIVA_DEBUG\$(strip $(BIN_FILE))_dummy & \
		copy /y $(strip $(TARGDIR))\$(strip $(LIS_FILE)) $(strip $(TARGDIR))\VIVA_DEBUG\$(strip $(LIS_FILE)).dummy & \
		rd /S /Q $(strip $(TARGDIR))\$(strip $(BIN_FILE))		
endif
	@copy /y $(SCATTERFILE) $(SCATTERFILE).dummy > NUL      
	@if exist $(SCATTERFILE).original move /y $(SCATTERFILE).original $(SCATTERFILE) > NUL
	@if exist	$(strip $(TARGDIR))\$(IMG_FILE)	del /q $(strip $(TARGDIR))\$(IMG_FILE)

	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_E,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))
	
# *************************************************************************
#  Generate Binary File with Auto-Memory-Config for VIVA, FS, and DEMAEND_PAGING
# *************************************************************************			
update_memconfig:
  # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_S,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

	@if exist $(strip $(TMPDIR))\~VIVA_LinkError.tmp \
		tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) VIVA_AUTO_SUPPORT=TRUE gendummylis

	@(perl tools\auto_adjust_mem.pl 2 $(strip $(TARGDIR))\$(strip $(LIS_FILE)) $(strip $(BUILD_SYSDIR)) "$(strip $(THE_MF))" $(strip $(COMPLOGDIR)) $(strip $(TARGDIR))\VIVA_DEBUG\$(strip $(BIN_FILE))_dummy $(TMPDIR)\~flash_cfg_tmp.c $(strip $(PROJECT_NAME)) $(TMPDIR)\~fs_quota_usage.log $(TMPDIR)\~nvram_lid_size.log $(strip $(FEATURE_OVERLOAD)) $(strip $(SYSTEM_DRIVE_ON_NAND)) $(strip $(NVRAM_PSEUDO_MERGE)) $(TMPDIR)>> $(strip $(COMPLOGDIR))\auto_adjust_mem.log) && \
		(tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) post_memconfig) && \
		(if ERRORLEVEL 1 exit 1)

  # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_E,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

post_memconfig: 
  # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_S,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

	@echo .
	@echo ======== Two-Phase Linking Process Start... ========
	@echo .
	
	@if exist $(strip $(TMPDIR))\~VIVA_LinkError.tmp (tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) DISABLE_SYS=TRUE viva_config)

	@if exist $(strip $(TMPDIR))\~DP_LinkError.tmp \
		(if exist $(strip $(COMPLIBDIR))\libcustom.a (del /q /f $(strip $(COMPLIBDIR))\libcustom.a)) && \
		(if exist $(strip $(COMPLIBDIR))\libsystem.a (del /q /f $(strip $(COMPLIBDIR))\libsystem.a)) && \
		(if exist $(strip $(OBJSDIR))\custom\*.obj (del $(strip $(OBJSDIR))\custom\*.obj)) && \
		(if exist $(strip $(OBJSDIR))\system\*.obj (del $(strip $(OBJSDIR))\system\*.obj)) && \
		(tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) DISABLE_SYS=TRUE demandpaging_config) && \
		(if ERRORLEVEL 1 exit 1)
		
	@if exist $(strip $(TMPDIR))\~FS_LinkError.tmp \
		(if exist $(strip $(COMPLIBDIR))\libcustom.a (del /q /f $(strip $(COMPLIBDIR))\libcustom.a)) && \
		(if exist $(strip $(COMPLIBDIR))\libsystem.a (del /q /f $(strip $(COMPLIBDIR))\libinit.a)) && \
		(if exist $(strip $(COMPLIBDIR))\libsystem.a (del /q /f $(strip $(COMPLIBDIR))\libmtd.a)) && \
		(if exist $(strip $(OBJSDIR))\custom\*.obj (del $(strip $(OBJSDIR))\custom\*.obj)) && \
		(if exist $(strip $(OBJSDIR))\init\*.obj (del $(strip $(OBJSDIR))\init\*.obj)) && \
		(if exist $(strip $(OBJSDIR))\mtd\*.obj (del $(strip $(OBJSDIR))\mtd\*.obj))
		
	@if exist $(strip $(TMPDIR))\~FS_LinkError.tmp \
			if exist $(strip $(TMPDIR))\~FS_LinkError_BBU.tmp \
				((tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) CK_BBU=TRUE DISABLE_SYS=TRUE filesystem_config) && (if ERRORLEVEL 1 exit 1)) \
			else \
				((tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) DISABLE_SYS=TRUE filesystem_config) && (if ERRORLEVEL 1 exit 1))

 # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_E,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

viva_config: sys_auto_gen LINK_BIN_FILE
 # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_S,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))  
	@if exist $(strip $(COMPLOGDIR))\auto_adjust_mem.log \
		move /y $(strip $(COMPLOGDIR))\auto_adjust_mem.log $(strip $(TARGDIR))\VIVA_DEBUG\auto_adjust_mem.log > nul
	@echo .
	@echo ======== Two-Phase Linking Process Finished ========
	@echo Please refer to $(strip $(TARGDIR))\VIVA_DEBUG\auto_adjust_mem.log for more details of two-phase linking
	@echo .
 # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_E,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

demandpaging_config: sys_auto_gen cus_sys_lib LINK_BIN_FILE
 # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_S,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))  
	@if exist $(strip $(COMPLOGDIR))\auto_adjust_mem.log \
		move /y $(strip $(COMPLOGDIR))\auto_adjust_mem.log $(strip $(TARGDIR))\DEMAND_PAGING_DEBUG\auto_adjust_mem.log > nul
	@echo .
	@echo ======== Two-Phase Linking Process Finished ========
	@echo Please refer to $(strip $(TARGDIR))\DEMAND_PAGING_DEBUG\auto_adjust_mem.log for more details of two-phase linking
	@echo .
 # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_E,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

cus_sys_lib:
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_S,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))
	@(tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) XGC_AND_NOT_BOOTLOADER=FALSE custom.a system.a) && \
	(if ERRORLEVEL 1 exit 1)
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_E,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

ifeq ($(strip $(CK_BBU)),TRUE)
filesystem_config: sys_auto_gen cus_ini_mtd_lib cleanbin LINK POSTBUILD ckbinblockusage_check
else
filesystem_config: sys_auto_gen cus_ini_mtd_lib cleanbin LINK_BIN_FILE LINK_BIN_FILE_CHECK
endif

 # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_S,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))  
	@if not exist $(strip $(TARGDIR))\FILE_SYSTEM_DEBUG (md $(strip $(TARGDIR))\FILE_SYSTEM_DEBUG)
	@if exist $(strip $(COMPLOGDIR))\auto_adjust_mem.log \
		move /y $(strip $(COMPLOGDIR))\auto_adjust_mem.log $(strip $(TARGDIR))\FILE_SYSTEM_DEBUG\auto_adjust_mem.log > nul
	@echo .
	@echo ======== Two-Phase Linking Process Finished ========
	@echo Please refer to $(strip $(TARGDIR))\FILE_SYSTEM_DEBUG\auto_adjust_mem.log for more details of two-phase linking
	@echo .
 # mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_E,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

cus_ini_mtd_lib: cksysdrv
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_S,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))
	@if exist $(strip $(COMPLOGDIR))\ckSysDrv.log \
		(@perl -e "open F,'<$(strip $(COMPLOGDIR))\ckSysDrv.log';my $$backup=$$/;undef $$/;my $$reading=<F>;close F;if($$reading =~ /Shortage/i){print 'cksysdrv has errors. Delete the binary file.'.\"\n\";system('del /S /Q /F $(strip $(TARGDIR))\$(strip $(BIN_FILE))');exit 1;};")

	@(tools\make.exe -fmake\build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) XGC_AND_NOT_BOOTLOADER=FALSE custom.a init.a mtd.a) && \
	(if ERRORLEVEL 1 exit 1)
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_E,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

video_mem_gen:
# mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_S,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))
	@tools\strcmpex.exe inc inc e $(strip $(TMPDIR))\~optInc.tmp $(foreach inc,$(COMMINCDIRS),-I$(inc))
	@tools\strcmpex.exe def def e $(strip $(TMPDIR))\~opt.tmp $(foreach def,$(COM_DEFS),-D$(def))
	@type $(strip $(TMPDIR))\~opt.tmp >> $(strip $(TMPDIR))\~optInc.tmp
	@if not exist $(strip $(RULESDIR))\video_mem_gen_dep (md $(strip $(RULESDIR))\video_mem_gen_dep)
	@perl .\tools\lucy.pl $(strip $(TMPDIR))\~optInc.tmp $(strip $(RULESDIR))\video_mem_gen_dep\video_mem_gen.det > $(strip $(COMPLOGDIR))\video_mem_gen.log & \
		(if ERRORLEVEL 1 echo Error: video_mem_gen failed! Please check $(strip $(COMPLOGDIR))\video_mem_gen.log & exit 1)
	@if exist $(strip $(RULESDIR))\video_mem_gen_dep\video_mem_gen.det \
		(perl .\tools\pack_dep.pl $(strip $(RULESDIR))\video_mem_gen_dep\video_mem_gen.det tools\copy_mmi_include_h.bat> $(strip $(RULESDIR))\video_mem_gen.dep ) && \
		(rd /s /q $(strip $(RULESDIR))\video_mem_gen_dep)
# mbis time probe
	@if /I "$(strip $(MBIS_EN))"  EQU "TRUE" (@perl -e "print 'T_E,$@,T,'. time . \"\n\"";>>$(MBIS_BUILD_TIME_TMP))

