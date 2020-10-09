# Define source file lists to SRC_LIST
SRC_LIST =$(strip $(COMMON_ROOT))/modem/sbp/sbp_utility.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_config_ctrl.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_errc_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_ims_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_iwlan_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_ltecsr_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_mscap_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_phonemode_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_rac_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_rrc_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_sdm_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_vdm_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_wo_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_l4c_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_bip_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_el1c_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_task.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_tcm_config.c \
   $(strip $(COMMON_ROOT))/modem/sbp/sbp_nvram_sm_config.c 

# Define include path lists to INC_DIR
# INC_DIR = $(strip $(COMMON_ROOT))/interface/modem/general

