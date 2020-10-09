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
# 06 16 2016 wcpadmin
# smart new env.
#
# 01 28 2016 chi-chun.lu
# [MOLY00162790] [MakeFile] [Remove: Feature Option] DSP_SOLUTION
# 	
# 	.
#
# 01 13 2016 gerry.liao
# [MOLY00159998] [SM] memquery remove l1 core related feature
# .
#
# 01 13 2016 chi-chun.lu
# [MOLY00155432] [MakeFile] [UMOLY] [Modify Makefile Rules] UMOLY build env. modifications
# 	
# 	.
#
# 12 30 2015 chi-chun.lu
# [MOLY00155432] [MakeFile] [UMOLY] [Modify Makefile Rules] UMOLY build env. modifications
# 	
# 	.
#
# 12 07 2015 chi-chun.lu
# [MOLY00150620] [MakeFile][UMOLY] [Modify Makefile Rules] UMOLY cleanup
# 	
# 	.
#
# 10 28 2015 chi-chun.lu
# [MOLY00147089] [MakeFile][UMOLY] [Modify Makefile Rules] reorg UMOLY make folder
# 	
# 	.
#
# 04 28 2015 chi-chun.lu
# [MOLY00109710] [SM] fix c,r command can't pass correctly to l1core
# 	.
#
# 03 20 2015 chi-chun.lu
# [MOLY00099959] [SM] enhance remake action in l1core
# 	.
#
# 02 11 2015 ray.lin-wang
# [MOLY00095788] Merge filter bin files of different cores into a catcher_filter.bin
# .
#
# 01 27 2015 chi-chun.lu
# [MOLY00093671] [SM] modify memquery.pl related parameter in standalone_action.mak
# 	.
#
# 01 20 2015 chi-chun.lu
# [MOLY00092726] [TK6291] [SystemService][Auto-Gen] Memory Utility Refinement
# 	.
#
# 09 23 2014 tafang.chen
# [MOLY00062786] [UMOLY][SM] Add _P_ and _L_ for elf,map,sym,cmm files to recognize pcore, l1core.
#
# 07 17 2014 tafang.chen
# [MOLY00062786] [UMOLY][SM]
# Fix -no_pc problem in two phase linking build.
#
# 06 17 2014 tafang.chen
# [MOLY00062786] [UMOLY][SM]
# Remove named debug message.
#
# 06 17 2014 tafang.chen
# [MOLY00062786] [UMOLY][SM]
# Fix variation load problem in two-phase linking.(Brian.Chiang)
#
# 05 22 2014 tafang.chen
# [MOLY00062786] [UMOLY][SM]
# Initial MoDIS build env - fix path problem.
#
# 05 07 2014 tafang.chen
# [MOLY00062786] [UMOLY][SM]
# Implement two phase linking.
#
# 05 06 2014 tafang.chen
# Fix incorrect single_core settting on l1core when full build
#
# 11 26 2013 ray.lin-wang
# [MOLY00047495] [MakeFile] [Modify Common Makefile] Cgen Enhancement
# Support gen query mod sim source in OA domain
#
# 06 25 2013 ray.lin-wang
# [MOLY00027330] [ARM7toMOLY] ARM7 Build/SYSGEN/Functions Update to TRUNK
# .
#
# 06 03 2013 amber.su
# [MOLY00023890] [SystemService][Auto-Gen][Internal Refinement] Support compiler option judgement
# .
#
# 04 23 2013 amber.su
# [MOLY00020348] [MT6290 Bring-up][MakeFile] [Modify: Others] Modify build.mak for ROM & File System Overlapping check
# .
#
# 04 12 2013 amber.su
# [MOLY00014181] [MakeFile] [Add: Build Action] Add gendummysym command for memory expired analysis
# .
#
# 01 24 2013 amber.su
# [MOLY00009227] [SystemService][AAPMC][Internal Refinement] Support AAPMC to auto-adjust Modem Image Layout
# .
#
# 01 21 2013 amber.su
# .
#
# 01 17 2013 amber.su
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

.PHONY: gendummylis update_memconfig post_memconfig memquery gendummysym

ifdef NO_PCIBT
ifeq ($(NO_PCIBT),TRUE)
NO_PC_ACTION += -no_pc
else
NO_PC_ACTION = 
endif
endif

ifeq ($(strip $(NO_DSP)),TRUE)
NO_PC_ACTION += -no_dsp
endif

# *************************************************************************
#  Generate dummy .lis file for memory analysis
# *************************************************************************	
gendummylis:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@if exist $(SCATTERFILE) copy /y $(SCATTERFILE) $(SCATTERFILE).original > NUL
	@pcore\tools\make.exe -f$(strip $(MAKE_COMMON))/build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) DUMMY_LIS=TRUE sys_auto_gen LINK_BIN_FILE & \
		(if ERRORLEVEL 1 exit 1)
	
	@if not exist $(strip $(TARGDIR))\$(IMG_FILE)	\
		echo Error in gendummylis & exit 1

ifeq ($(strip $(VIVA_AUTO_SUPPORT)),TRUE)
	@pcore\tools\make.exe -f$(strip $(MAKE_COMMON))/build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) FROMELF_BIN_FILE & \
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
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
#  Generate dummy .sym file
# *************************************************************************
gendummysym:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@$(IF_EXIST) $(strip $(TMPDIR))/~libs.tmp $(THEN)\
		($(ECHO) "--noinhibit-exec " >$(TMPDIR)/~dummylibs.tmp) $(WITH) \
		($(CAT) $(strip $(TMPDIR))/~libs.tmp >> $(TMPDIR)/~dummylibs.tmp) \
	$(CMD_END)
		
	@$(IF_EXIST) $(strip $(COMPLOGDIR))/link_option.log $(THEN)\
		($(ECHO) "--noinhibit-exec " >$(TMPDIR)/~dummylibs.tmp) $(WITH) \
		($(CAT) $(strip $(COMPLOGDIR))/link_option.log >> $(TMPDIR)/~dummylibs.tmp) \
	$(CMD_END)
	
	@$(IF_NOT_EXIST) $(strip $(TMPDIR))/~dummylibs.tmp  $(THEN)\
		(echo Error: $(strip $(TMPDIR))/~dummylibs.tmp does not existed! $(WITH) exit 1) $(CMD_END)
		
	@$(IF_EXIST) $(strip $(TMPDIR))/~libs.tmp $(THEN)\
		($(ECHO) "--noinhibit-exec " >$(TMPDIR)/~dummylibs.tmp) $(WITH) \
		($(CAT) $(strip $(TMPDIR))/~libs.tmp >> $(TMPDIR)/~dummylibs.tmp) \
	$(CMD_END)
	
	@$(strip $(LINK)) $(strip $(VIA))$(TMPDIR)/~dummylibs.tmp >$(DEV_NUL) 2>&1
	@$(strip $(DUMP)) -x $(strip $(TARGDIR))/$(IMG_FILE) > $(strip $(TARGDIR))/dummy_$(SYM_FILE) $(WITH) \
		($(IF_ERR_TRUE) $(THEN) \
			($(IF_EXIST) $(strip $(TARGDIR))/$(IMG_FILE) $(THEN) ($(DEL_FILE) $(strip $(TARGDIR))/$(IMG_FILE)) $(CMD_END)) $(WITH) \
			(echo Error: failed to generate .sym file $(WITH) exit 1)\
		$(CMD_END))
			
	@$(IF_EXIST) $(strip $(TARGDIR))/$(strip $(BIN_FILE)) $(THEN) ($(DEL_DIR) $(strip $(TARGDIR))/$(strip $(BIN_FILE))) $(CMD_END)
	@$(IF_EXIST) $(strip $(TARGDIR))/$(IMG_FILE) $(THEN) ($(DEL_FILE) $(strip $(TARGDIR))/$(IMG_FILE)) $(CMD_END)
	@$(IF_NOT_EXIST) $(strip $(TARGDIR))/dummy_$(SYM_FILE)  $(THEN) (echo Error: gendummysym failed! $(WITH) exit 1) $(CMD_END)
	@$(IF_EXIST) $(TMPDIR)/~dummylibs.tmp $(THEN) ($(DEL_FILE) $(TMPDIR)/~dummylibs.tmp) $(CMD_END)
	@echo Done for gendummysym
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
# *************************************************************************
#  Generate Binary File with Auto-Memory-Config for VIVA, FS, and DEMAEND_PAGING
# *************************************************************************			
update_memconfig: gen_auto_adjust_mem_2
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@$(IF_EXIST) $(strip $(TMPDIR))/~ModemReservedSize_AutoConfig.tmp $(THEN)\
		$(IF_NOT_EXIST) $(strip $(TARGDIR))/$(SYM_FILE) $(THEN)\
			($(MAKE) -f$(strip $(MAKE_COMMON))/build.mak -r -R gendummysym) \
		$(CMD_END) \
	$(CMD_END)
		
	$(MAKE) -f$(strip $(MAKE_COMMON))/build.mak -r -R FORCE_GEN=TRUE copro_info_gen

	@perl $(strip ${PCORE_TOOLS})/auto_adjust_mem.pl 2 $(TMPDIR)/~auto_adjust_mem_2.log >> $(strip $(COMPLOGDIR))/auto_adjust_mem.log $(AND) \
		($(IF_ERR_TRUE) $(THEN) (exit 1) $(CMD_END))

	@(($(MAKE) -f$(strip $(MAKE_COMMON))/build.mak -r -R post_memconfig) $(WITH) \
		($(IF_ERR_TRUE) $(THEN) (exit 1) $(CMD_END)))
		
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
#  Enter Build Flow after AAPMC
# *************************************************************************
post_memconfig: 
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@$(ECHO) -n ""
	@$(ECHO) -n "======== Two-Phase Linking Process Start... ========"
	@$(ECHO) -n ""

	@$(IF_EXIST) $(strip $(TMPDIR))/~ModemReservedSize_AutoConfig.tmp $(THEN)\
		($(MAKE) -f$(strip $(MAKE_COMMON))/build.mak -r -R PROJECT_NAME=$(strip $(PROJECT_NAME)) PROJECT_MAKEFILE="$(strip $(PROJECT_MAKEFILE))" FLAVOR=$(strip $(FLAVOR)) DISABLE_SYS=TRUE FORCE_GEN=TRUE modemreservedsize_config) $(AND) \
		($(IF_ERR_TRUE) $(THEN) (exit 1) $(CMD_END)) \
	$(CMD_END)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
#  AAPMC for Modem Reserved Size Configuration
# *************************************************************************
modemreservedsize_config: sys_auto_gen LINK_BIN_FILE
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@$(IF_EXIST) $(strip $(COMPLOGDIR))/auto_adjust_mem.log $(THEN)\
		($(MOVE) $(strip $(COMPLOGDIR))/auto_adjust_mem.log $(strip $(TARGDIR))/MODEM_RESV_SIZE_DEBUG/auto_adjust_mem.log) \
	$(CMD_END)

	@$(ECHO) -n ""
	@$(ECHO) -n "======== Two-Phase Linking Process Finished ========"
	@$(ECHO) -n "Please refer to $(strip $(TARGDIR))/MODEM_RESV_SIZE_DEBUG/auto_adjust_mem.log for more details of two-phase linking"
	@$(ECHO) -n ""
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
#  Generate Temp File for AAPMC Stage 1
# *************************************************************************
gen_auto_adjust_mem_1: $(TMPDIR)/~auto_adjust_mem_1.log
$(TMPDIR)/~auto_adjust_mem_1.log: $(strip $(MAKE_COMMON))/buildconfig.mak
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n ""
	@$(ECHO) -n "====================== Begin gen_auto_adjust_mem_1 ====================================="
	@$(ECHO) -n "AAPMC_TEMP_FOLDER = $(strip $(TMPDIR))">$(TMPDIR)/~auto_adjust_mem_1.log
	@$(ECHO) -n "AAPMC_LINKLOG = $(strip $(TMPDIR))/aapmc_link.log">>$(TMPDIR)/~auto_adjust_mem_1.log
	@$(ECHO) -n "AAPMC_TARGDIR = $(strip $(TARGDIR))">>$(TMPDIR)/~auto_adjust_mem_1.log
	@$(ECHO) -n "====================== End gen_auto_adjust_mem_1 ====================================="
	@$(ECHO) -n ""
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
#  Generate Temp File for AAPMC Stage 2
# *************************************************************************
gen_auto_adjust_mem_2: $(TMPDIR)/~auto_adjust_mem_2.log
$(TMPDIR)/~auto_adjust_mem_2.log: $(strip $(MAKE_COMMON))/buildconfig.mak
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n ""
	@$(ECHO) -n "====================== Begin gen_auto_adjust_mem_2 ====================================="
	@$(ECHO) -n "AAPMC_MAP_FILE = $(strip $(TARGDIR))/$(MAP_FILE)">$(TMPDIR)/~auto_adjust_mem_2.log

	@$(IF_EXIST) $(strip $(TARGDIR))/$(SYM_FILE)  $(THEN) \
		(echo AAPMC_SYM_FILE = $(strip $(TARGDIR))/$(SYM_FILE) >>$(TMPDIR)/~auto_adjust_mem_2.log) \
	$(ELSE) \
		(echo AAPMC_SYM_FILE = $(strip $(TARGDIR))/dummy_$(SYM_FILE) >>$(TMPDIR)/~auto_adjust_mem_2.log) \
	$(CMD_END)
	
	@$(ECHO) -n "AAPMC_LINKER_SCRIPT = $(strip $(SCATTERFILE))">>$(TMPDIR)/~auto_adjust_mem_2.log
	@$(ECHO) -n "AAPMC_CUSTOM_FOLDER_PATH = $(strip $(BUILD_SYSDIR))">>$(TMPDIR)/~auto_adjust_mem_2.log
	@$(ECHO) -n "AAPMC_MAKEFILE = $(strip $(PROJECT_MAKEFILE))">>$(TMPDIR)/~auto_adjust_mem_2.log
	@$(ECHO) -n "AAPMC_TEMP_FOLDER = $(strip $(TMPDIR))">>$(TMPDIR)/~auto_adjust_mem_2.log
	@$(ECHO) -n "AAPMC_LOG_FOLDER = $(strip $(COMPLOGDIR))">>$(TMPDIR)/~auto_adjust_mem_2.log
	@$(ECHO) -n "AAPMC_TARGDIR = $(strip $(TARGDIR))">>$(TMPDIR)/~auto_adjust_mem_2.log
	@$(ECHO) -n "AAPMC_INFOMAKE_LOG = $(strip $(INFOMAKELOG))">>$(TMPDIR)/~auto_adjust_mem_2.log
	@$(ECHO) -n "AAPMC_COPRO_INFO_LOG = $(strip $(TMPDIR))/~copro_info.tmp">>$(TMPDIR)/~auto_adjust_mem_2.log
	@$(ECHO) -n "====================== End gen_auto_adjust_mem_2 ====================================="
	@$(ECHO) -n ""
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
#  Get Memory Usage Information
# *************************************************************************
memquery:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(IF_EXIST) $(FIXPATH)/${COMMON_ROOT}/tools/MemoryUtility/memquery.pl $(THEN) \
		perl $(FIXPATH)/$(strip ${COMMON_TOOLS})/MemoryUtility/memquery.pl $(strip $(TMPDIR))/~memquery.tmp $(SCATTERFILE) "$(strip $(PROJECT_MAKEFILE))" $(strip $(TARGDIR))/$(MAP_FILE) $(strip $(COMPLOGDIR)) $(strip $(INFOMAKELOG)) $(strip $(TARGDIR))/$(strip $(BIN_FILE)) \
	$(CMD_END)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
