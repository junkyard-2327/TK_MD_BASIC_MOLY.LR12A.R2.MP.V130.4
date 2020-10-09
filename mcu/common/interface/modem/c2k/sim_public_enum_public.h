#ifndef _SIM_PUBLIC_ENUM_PUBLIC_H_
#define _SIM_PUBLIC_ENUM_PUBLIC_H_

/** 256 bytes for data + 5 bytes header information: CLA,INS,P1,P2,P3 */
#define APDU_REQ_MAX_LEN                  (261)

/** 256 bytes for data + 2 bytes status word SW1 and SW2 */
#define APDU_RSP_MAX_LEN                  (258)

#define APDU_EXTENDED_MAX_LEN                  (2500)

/** 2500 bytes for data + 9 bytes header information: CLA,INS,P1,P2,Lc (3 bytes),Le (2 bytes) */
#define APDU_EXTENDED_REQ_MAX_LEN                  (APDU_EXTENDED_MAX_LEN + 9)

/** 2500 bytes for data + 2 bytes status word SW1 and SW2 */
#define APDU_EXTENDED_RSP_MAX_LEN                  (APDU_EXTENDED_MAX_LEN + 2)

#define ATR_MAX_LEN                40

/** sim error cause */
typedef enum
{
  SIM_CARD_REMOVED,       /**< card removed */
  SIM_ACCESS_ERROR,       /**< access error */
  SIM_REFRESH,            /**< sim refresh */
  SIM_REFRESH_POWER_OFF,  /**< sim refresh power off */
  SIM_PUK1,               /**< sim puk1 */
  SIM_ACCESS_PROFILE_ON,  /**< access profile on */
  SIM_ACCESS_PROFILE_OFF, /**< access profile off */
  DUALSIM_DISCONNECTED,   /**< dual sim disconnected */
  DUALSIM_CONNECTED,      /**< dual sim connected */
  SIM_VSIM_ON,            /**< vsim on */
  SIM_VSIM_OFF,           /**< vsim off */
  SIM_PLUG_OUT,           /**< sim plug out */
  SIM_PLUG_IN,            /**< sim plug in */
  SIM_RECOVERY_START,     /**< sim recovery start */
  SIM_RECOVERY_END,       /**< sim recovery end */
  SIM_IMEI_LOCK_FAIL,     /**< sim IMEI lock failure */
  SIM_OP09_LOCK_FAIL,
  SIM_CARD_TECHNICAL_PROBLEM,
  SIM_POWEROFF_BY_L4,
  SIM_OP20_IMEI_LOCK,
  SIM_PLUG_IN_REPLACED,    /**< sim replaced after sim plug in */
  SIM_OP01_LOCK,
  SIM_OP01_UNLOCK,
  SIM_FAST_RECOVERY_START,
  SIM_FAST_RECOVERY_SUCCESS,
  SIM_TRAY_PLUG_OUT,
  SIM_PLUG_IN_NO_INIT      /**< sim plug in but no further actions */
}sim_error_cause_enum;

/** sim event */
typedef enum
{
  SIM_EVENT_NULL,         /**< null */
  SIM_EVENT_APP_INIT,     /**< sim application init done or no need */
  SIM_EVENT_APP_LIST,         /**< sim application list */
  SIM_EVENT_DATA_ICON_READY,   /**< spn/gid1/pnn indicator for data icon */
  SIM_EVENT_FCP_CACHE_READY,   /**< FCP Cache */
  SIM_EVENT_DATA_CACHE_READY   /**< Data Cache */
} sim_event_enum;

/** sim additional error cause */
typedef enum
{
  SIM_ERROR_UNKNOWN,
  SIM_ERROR_NO_ATR_AFTER_POWERON,
  SIM_ERROR_NO_ATR_AFTER_RECOVERY,
  SIM_ERROR_ATR_CORRUPT,
  SIM_ERROR_PPS_TIMEOUT,
  SIM_ERROR_PPS_PARITY,
  SIM_ERROR_VOLTAGE_MISMATCH,
  SIM_ERROR_CMD_TIMEOUT,
  SIM_ERROR_CMD_TIMEOUT_NULL,
  /* SIM_ERROR_CMD_TOUT_* should not be used for display purpose */
  SIM_ERROR_CMD_TOUT_AFTER_SIM_INIT,
  SIM_ERROR_CMD_TOUT_NULL_AFTER_SIM_INIT,
  SIM_ERROR_MANDATORY_FILE_MISSING,
  /* The SIM_ERROR_CMD_SW000_* should not be used for display purpose */
  SIM_ERROR_CMD_SW000_CAUSE_UNKNOWN,
  SIM_ERROR_CMD_SW000_CAUSE_MAX = SIM_ERROR_CMD_SW000_CAUSE_UNKNOWN + 20,
  /* For indication the type of REFRESH */
  SIM_ERROR_REFRESH_TYPES,
  SIM_ERROR_REFRESH_TYPE_NAA_INIT_AND_FULL_FCN = SIM_ERROR_REFRESH_TYPES,
  SIM_ERROR_REFRESH_TYPE_FCN,
  SIM_ERROR_REFRESH_TYPE_NAA_INIT_AND_FCN,
  SIM_ERROR_REFRESH_TYPE_NAA_INIT,
  SIM_ERROR_REFRESH_TYPE_SIM_RESET,
  SIM_ERROR_REFRESH_TYPE_NAA_APP_RESET,
  SIM_ERROR_REFRESH_TYPE_NAA_SESSION_RESET,
  SIM_ERROR_REFRESH_TYPE_STEERING_OF_ROAMING,
  SIM_ERROR_REFRESH_TYPE_STEERING_OF_ROAMING_FOR_IWLAN,
  SIM_ERROR_REFRESH_TYPE_EUICC_PROFILE_STATE_CHANGE,
  SIM_ERROR_REFRESH_TYPES_MAX,
  SIM_ERROR_CAUSE_MAX
}sim_additional_error_cause_enum;

/** sim command result */
typedef enum
{
  SIM_CMD_SUCCESS        = 2560,  /**< sim command success */
  SIM_CMD_FAIL           = 2561,  /**< sim command failure */
  SIM_FATAL_ERROR        = 2562,  /**< sim fatal error */
  SIM_NO_INSERTED        = 2563,  /**< sim no inserted */
  SIM_CHV_NOT_INIT       = 2564,  /**< sim pin not initialisation */
  SIM_CHV_RETRY_ALLOW    = 2565,  /**< sim pin retry allowed */
  SIM_CHV_BLOCK          = 2566,  /**< sim pin block */
  SIM_ACCESS_NOT_ALLOW   = 2567,  /**< sim access not allowed */
  SIM_SAT_CMD_BUSY       = 2568,  /**< sim sat command busy */
  SIM_DL_ERROR           = 2569,  /**< sim DL error */
  SIM_MEMORY_PROBLEM     = 2570,  /**< sim memory problem */
  SIM_TECHNICAL_PROBLEM  = 2571,  /**< sim technical problem */
  SIM_PUK_UNLOCK         = 2572,  /**< sim puk unblock */
  SIM_EF_RECORD_FULL     = 2573,  /**< sim EF record full */
  SIM_SELECT_FILE_INVALID = 2574, /**< sim select file invalid */
  SIM_SELECT_DF_TERMINATED = 2575,/**< sim select DF terminated */
  SIM_NO_EF_SELECTED       = 2576,/**< sim no EF selected */
  SIM_FILE_NOT_FOUND       = 2577,/**< sim file not found */
  SIM_RECORD_NOT_FOUND     = 2578,/**< sim record not found */
  SIM_REF_DATA_NOT_FOUND   = 2579,/**< sim REF data not found */
  SIM_INCREASE_FAIL        = 2580,/**< sim increase failure */
  SIM_AUTH_ERROR_WRONG_MAC = 2581,/**< sim autn error wrong MAC */
  SIM_AUTH_ERROR_GSM_NOT_SUPPORT = 2582,/**< sim auth error GSM not support */
  SIM_WRONG_INSTRUCTION_CLASS    = 2583, /**< sim wrong instruction class */
  SIM_INCORRECT_PARAMETERS       = 2584,  /**< sim incorrect paramets */
  SIM_INVALID_HANDLE       = 2585 /**< sim invalid handle */
}sim_cmd_result_enum;

/* VSIM error cause */
typedef enum
{
    VSIM_ERROR_NO_ERROR             = 0,
    VSIM_ERROR_MODE_FAIL            = 1,
    VSIM_ERROR_INVALID_PROFILE_ID   = 2,
    VSIM_ERROR_INVALID_VSIM_TYPE    = 3,
    VSIM_ERROR_INVALID_AUTH_LEN     = 4,
    VSIM_ERROR_INVALID_AUTH_ALGO    = 5,
    VSIM_ERROR_FILE_NOT_FOUND       = 6,
    VSIM_ERROR_NO_SPECIFIC_ERROR    = 0xFF   
}sim_vsim_fcs_enum;

/** uicc channel number */
typedef enum
{
    USIM_DEFAULT_CH = 0x00,
    USIM_LOGIC_CH_1 = 0x01,
    USIM_LOGIC_CH_2 = 0x02,
    USIM_LOGIC_CH_3 = 0x03,
    USIM_LOGIC_CH_4 = 0x04,
    USIM_LOGIC_CH_5 = 0x05,
    USIM_LOGIC_CH_6 = 0x06,
    USIM_LOGIC_CH_7 = 0x07,
    USIM_LOGIC_CH_8 = 0x08,
    USIM_LOGIC_CH_9 = 0x09,
    USIM_LOGIC_CH_10 = 0x0a,
    USIM_LOGIC_CH_11 = 0x0b,
    USIM_LOGIC_CH_12 = 0x0c,
    USIM_LOGIC_CH_13 = 0x0d,
    USIM_LOGIC_CH_14 = 0x0e,
    USIM_LOGIC_CH_15 = 0x0f,
    USIM_LOGIC_CH_16 = 0x10,
    USIM_LOGIC_CH_17 = 0x11,
    USIM_LOGIC_CH_18 = 0x12,
    USIM_LOGIC_CH_19 = 0x13,
    USIM_LOGIC_CH_SIZE,
    USIM_LOGIC_CH_INVALID = 0xFF
} usim_logic_channel_enum;

typedef enum
{
    AKA_CONTEXT,
    GBA_CONTEXT,
    MAX_AUTH_CONTEXT
} uicc_auth_mode_enum;

/** sim recovery timer pattern */
typedef enum
{
  SIM_RECOVERY_TIMER_CONSTANT,      /** Constant timer (ex: 30s) */
  SIM_RECOVERY_TIMER_LADDER,        /** Ladder-type timer (ex: 2s, 4s, 8s, 16s, ...) */
} sim_recovery_timer_pattern_enum;


typedef enum
{
/*file index under DF(CDMA) 7F25*/
    EF_C2K_AD_U_IDX,
    EF_C2K_UIM_ID_U_IDX,
    EF_C2K_COUNT_U_IDX,
    EF_C2K_IMSI_M_U_IDX,
    EF_C2K_IMSI_T_U_IDX,
    EF_C2K_CDMA_HOME_U_IDX,
    EF_C2K_ACCLOC_U_IDX,
    EF_C2K_TERM_U_IDX,
    EF_C2K_SSCI_U_IDX,
    EF_C2K_OTAPASPC_U_IDX,
    EF_C2K_NAMLOCK_U_IDX,
    EF_C2K_MDN_U_IDX,
    EF_C2K_CST_U_IDX,
    EF_C2K_USGIND_U_IDX,
    EF_C2K_SFUIMID_U_IDX,
    EF_C2K_SPCS_U_IDX,
 /*file index under ADF(CSIM) */
    EF_C2K_AD_C_IDX,
    EF_C2K_UIM_ID_C_IDX,
    EF_C2K_COUNT_C_IDX,
    EF_C2K_IMSI_M_C_IDX,
    EF_C2K_IMSI_T_C_IDX,
    EF_C2K_CDMA_HOME_C_IDX,
    EF_C2K_ACCLOC_C_IDX,
    EF_C2K_TERM_C_IDX,
    EF_C2K_SSCI_C_IDX,
    EF_C2K_OTAPASPC_C_IDX,
    EF_C2K_NAMLOCK_C_IDX,
    EF_C2K_MDN_C_IDX,
    EF_C2K_CST_C_IDX,
    EF_C2K_USGIND_C_IDX,
    EF_C2K_SFUIMID_C_IDX,
    EF_C2K_SPCS_C_IDX,
    EF_C2K_EST_C_IDX,
    MAX_C2K_EF_IDX
} c2k_file_index;

/** sim file index */
typedef enum
{
    FILE_NONE,         
    FILE_MF_IDX,
    FILE_GSM_IDX,
    FILE_TELECOM_IDX,
    FILE_IRIDIUM_IDX,
    FILE_GLOBST_IDX,
    FILE_ICO_IDX,
    FILE_ACES_IDX,
    FILE_EIA_IDX,
    FILE_CTS_IDX,
    FILE_SOLSA_IDX, /*10*/
    FILE_MEXE_IDX, 
    FILE_GRAPHICS_IDX,
    GLOBAL_FILES_START,
    FILE_ICCID_IDX = GLOBAL_FILES_START,
    FILE_ELP_IDX,
    GLOBAL_FILES_END = FILE_ELP_IDX,
    FILE_SAI_IDX,
    FILE_SLL_IDX,
    FILE_MEXE_ST_IDX,
    FILE_ORPK_IDX,
    FILE_ARPK_IDX,
    FILE_TPRPK_IDX,/*20*/
    FILE_IMG_IDX,
    FILE_LP_IDX,
    FILE_IMSI_IDX,
    FILE_KC_IDX,
    FILE_PLMNSEL_IDX,
    FILE_HPLMN_IDX,
    FILE_ACMAX_IDX,
    FILE_SST_IDX,
    FILE_ACM_IDX,
    FILE_GID1_IDX,/*30*/
    FILE_GID2_IDX,
    FILE_SPN_IDX,
    FILE_PUCT_IDX,
    FILE_CBMI_IDX,
    FILE_BCCH_IDX,
    FILE_ACC_IDX,
    FILE_FPLMN_IDX,
    FILE_LOCI_IDX,
    FILE_AD_IDX,
    FILE_PHASE_IDX,/*40*/
    FILE_VGCS_IDX,
    FILE_VGCSS_IDX,
    FILE_VBS_IDX,
    FILE_VBSS_IDX,
    FILE_EMLPP_IDX,
    FILE_AAEM_IDX,
    FILE_CBMID_IDX,
    FILE_ECC_IDX,
    FILE_CBMIR_IDX,
    FILE_DCK_IDX,/*50*/
    FILE_CNL_IDX,
    FILE_NIA_IDX,
    FILE_KCGPRS_IDX,
    FILE_LOCIGPRS_IDX,
    FILE_SUME_IDX,
    FILE_PLMNWACT_IDX,
    FILE_OPLMNWACT_IDX,
    FILE_HPLMNACT_IDX,
    FILE_CPBCCH_IDX,
    FILE_INVSCAN_IDX,/*60*/
    FILE_VM_WAIT_IDX,
    FILE_CPHS_SST_IDX,
    FILE_CF_FLAG_IDX,
    FILE_OP_STRING_IDX,
    FILE_CSP_IDX,
    FILE_CPHS_INFO_IDX,
    FILE_MAILBOX_NUM_IDX,
    FILE_OP_SHORTFORM_IDX,
    FILE_INFO_NUM_IDX,
    FILE_ADN_IDX,/*70*/
    FILE_FDN_IDX,
    FILE_SMS_IDX,
    FILE_CCP_IDX,
    FILE_ECCP_IDX,
    FILE_MSISDN_IDX,
    FILE_SMSP_IDX,
    FILE_SMSS_IDX,
    FILE_LND_IDX,
    FILE_SDN_IDX,
    FILE_EXT1_IDX,/*80*/
    FILE_EXT2_IDX,
    FILE_EXT3_IDX,
    FILE_BDN_IDX,
    FILE_EXT4_IDX,
    FILE_SMSR_IDX,
    FILE_CMI_IDX,
    FILE_IMG_1_IDX,
    FILE_IMG_2_IDX,
    FILE_IMG_3_IDX,
    FILE_IMG_4_IDX,/*90*/
    FILE_IMG_5_IDX,
    FILE_IMG_6_IDX,
    FILE_IMG_7_IDX,
    FILE_IMG_8_IDX,
    FILE_IMG_9_IDX,
    FILE_IMG_A_IDX,
    FILE_IMG_B_IDX,
    FILE_IMG_C_IDX,
    FILE_IMG_D_IDX,
    FILE_IMG_E_IDX,/*100*/
    FILE_IMG_F_IDX,
 /*__HOMEZONE_SUPPORT__ start*/ 
    FILE_VID_IDX, 
    FILE_HZ_IDX,
    FILE_HZ_CACHE1_IDX,
    FILE_HZ_CACHE2_IDX,
    FILE_HZ_CACHE3_IDX,
    FILE_HZ_CACHE4_IDX,
 /*__HOMEZONE_SUPPORT__ end*/  
 /*__ENS__ start*/ /*ENS support mtk01488 */
    FILE_ENS_DF_7F66_IDX,
    FILE_ENS_DF_5F30_IDX,
    FILE_ENS_ACTING_HPLMN_IDX,/*110*/
    FILE_ENS_TERMINAL_SUPPORT_TABLE_IDX,
 /*__ENS__ end*/
    FILE_PNN_IDX,
    FILE_OPL_IDX,
    FILE_MBDN_IDX,
    FILE_EXT6_IDX,
    FILE_MBI_IDX,
    FILE_MWIS_IDX,
    FILE_CFIS_IDX,
    FILE_EXT7_IDX,
    FILE_SPDI_IDX,/*120*/
    FILE_MMSN_IDX,
    FILE_EXT8_IDX,
    FILE_MMSICP_IDX,
    FILE_MMSUP_IDX,
    FILE_MMSUCP_IDX,
    SIM_TOT_FILES,
    FILE_DIR_IDX  = SIM_TOT_FILES,
    FILE_ARR_IDX,       
    FILE_USIM_IDX,
    FILE_U_LI_IDX,
    FILE_U_IMSI_IDX,/*130*/
    FILE_U_KEYS_IDX,
    FILE_U_KEYSPS_IDX,
    FILE_U_PLMNWACT_IDX, 
    FILE_U_HPPLMN_IDX,
    FILE_U_ACMMAX_IDX,
    FILE_U_UST_IDX,
    FILE_U_ACM_IDX,
    FILE_U_GID1_IDX,
    FILE_U_GID2_IDX,
    FILE_U_SPN_IDX,/*140*/
    FILE_U_PUCT_IDX,
    FILE_U_CBMI_IDX,
    FILE_U_ACC_IDX,
    FILE_U_FPLMN_IDX,
    FILE_U_LOCI_IDX,
    FILE_U_AD_IDX,
    FILE_U_CBMID_IDX,
    FILE_U_ECC_IDX,
    FILE_U_CBMIR_IDX,
    FILE_U_PSLOCI_IDX,/*150*/
    FILE_U_FDN_IDX,
    FILE_U_SMS_IDX,
    FILE_U_MSISDN_IDX,
    FILE_U_SMSP_IDX,  
    FILE_U_SMSS_IDX,
    FILE_U_SDN_IDX,
    FILE_U_EXT2_IDX,
    FILE_U_EXT3_IDX,
    FILE_U_SMSR_IDX,
    FILE_U_ICI_IDX,/*160*/
    FILE_U_OCI_IDX,
    FILE_U_ICT_IDX,
    FILE_U_OCT_IDX,
    FILE_U_EXT5_IDX,  
    FILE_U_CCP2_IDX,
    FILE_U_EMLPP_IDX,
    FILE_U_AAEM_IDX,
    FILE_U_HIDDENKEY_IDX,
    FILE_U_BDN_IDX,
    FILE_U_EXT4_IDX,/*170*/
    FILE_U_CMI_IDX,
    FILE_U_EST_IDX,
    FILE_U_ACL_IDX,
    FILE_U_DCK_IDX,  
    FILE_U_CNL_IDX,
    FILE_U_STARTHFN_IDX,
    FILE_U_THRESHOLD_IDX,
    FILE_U_OPLMNWACT_IDX,
    FILE_U_HPLMNWACT_IDX,
    FILE_U_ARR_IDX,/*180*/
    FILE_U_NETPAR_IDX,
    FILE_U_PNN_IDX,
    FILE_U_OPL_IDX,
    FILE_U_MBDN_IDX,
    FILE_U_EXT6_IDX,
    FILE_U_MBI_IDX,
    FILE_U_MWIS_IDX,
    FILE_U_CFIS_IDX,
    FILE_U_EXT7_IDX,
    FILE_U_SPDI_IDX,/*190*/
    FILE_U_MMSN_IDX,
    FILE_U_EXT8_IDX,
    FILE_U_MMSICP_IDX,
    FILE_U_MMSUP_IDX,
    FILE_U_MMSUCP_IDX,
    FILE_U_NIA_IDX,
    FILE_U_VGCS_IDX,
    FILE_U_VGCSS_IDX,
    FILE_U_VBS_IDX,
    FILE_U_VBSS_IDX,/*200*/
    FILE_U_VGCSCA_IDX,
    FILE_U_VBSCA_IDX,
    FILE_U_GBAP_IDX,
    FILE_U_MSK_IDX,   
    FILE_U_MUK_IDX,
    FILE_U_GBANL_IDX,
    FILE_U_SOLSA_IDX,
    FILE_U_SAI_IDX,
    FILE_U_SLL_IDX,
    FILE_U_LSAD_IDX,/*210*/
    FILE_U_PHONEBOOK_IDX,
    FILE_U_PBR_IDX,
    FILE_U_IAP_IDX,
    FILE_U_ADN_IDX,   
    FILE_U_EXT1_IDX,
    FILE_U_PBC_IDX,
    FILE_U_GRP_IDX,
    FILE_U_AAS_IDX,
    FILE_U_GAS_IDX,
    FILE_U_ANR_IDX,/*220*/
    FILE_U_SNE_IDX,
    FILE_U_CCP1_IDX,
    FILE_U_UID_IDX,
    FILE_U_PSC_IDX,   
    FILE_U_CC_IDX,
    FILE_U_PUID_IDX,
    FILE_U_EMAIL_IDX,
    FILE_U_GSMACCESS_IDX,
    FILE_U_KC_IDX,
    FILE_U_KCGPRS_IDX,/*230*/
    FILE_U_CPBCCH_IDX,
    FILE_U_INVSCAN_IDX,
    FILE_U_MEXE_IDX,
    FILE_U_MEXEST_IDX, 
    FILE_U_ORPK_IDX,
    FILE_U_ARPK_IDX,
    FILE_U_TPRPK_IDX,
    FILE_U_TKCDF_IDX,
    FILE_U_WLAN_IDX,
    FILE_U_PSEUDO_IDX,/*240*/
    FILE_U_UPLMNWLAN_IDX,
    FILE_U_OPLMNWLAN_IDX,
    FILE_U_USSIDL_IDX, 
    FILE_U_OSSIDL_IDX,  
    FILE_U_WRI_IDX,
    FILE_G_PHONEBOOK_IDX,
    FILE_G_PBR_IDX,
    FILE_G_IAP_IDX,
    FILE_G_ADN_IDX,
    FILE_G_EXT1_IDX,/*250*/
    FILE_G_PBC_IDX,
    FILE_G_GRP_IDX,
    FILE_G_AAS_IDX,
    FILE_G_GAS_IDX,    
    FILE_G_ANR_IDX,
    FILE_G_SNE_IDX,
    FILE_G_CCP1_IDX,
    FILE_G_UID_IDX,
    FILE_G_PSC_IDX,
    FILE_G_CC_IDX,/*260*/
    FILE_G_PUID_IDX,
    FILE_G_EMAIL_IDX,
    FILE_MULTIMEDIA_IDX, 
    FILE_MML_IDX,     
    FILE_MMDF_IDX,
    FILE_U_EHPLMN_IDX, //__R7_EHPLMN__
    FILE_U_EHPLMNPI_IDX,
    FILE_U_LRPLMNSI_IDX,
/*__U_CSP_SUPPORT__ start*/     /*[MAUI_02387843] mtk01612: AT&T proprietary: support EF U_CSP under 7FFF*/ 
    FILE_U_CSP_IDX,
/*__U_CSP_SUPPORT__ end*/     
    FILE_U_ENS_RAT_IDX, //__ENS_RAT_BALANCING__	/*270*/ 
    FILE_U_ENS_TERMINAL_SUPPORT_TABLE_IDX,     /* [MAUI_02908638] mtk01616_110418 support EF_U_TS_table under 7FFF */
    FILE_U_ENS_DF_7F66_IDX,
    FILE_U_ENS_DF_5F30_IDX,
    FILE_U_ENS_ACTING_HPLMN_IDX,
/* R8 __CSG_SUPPORT__ start */    
    FILE_U_HNB_IDX, 
    FILE_U_ACSGL_IDX,
    FILE_U_CSGT_IDX,
    FILE_U_HNBN_IDX,    
    FILE_U_OCSGL_IDX,
/* R8 __CSG_SUPPORT__ end */
    FILE_U_EPSLOCI_IDX,
    FILE_U_EPSNSC_IDX,
/* __ISIM_SUPPORT__ start */
    FILE_PSISMSC_IDX,
    FILE_ISIM_IDX,
    FILE_I_IST_IDX,
    FILE_I_IMPI_IDX,
    FILE_I_DOMAIN_IDX,
    FILE_I_IMPU_IDX,
    FILE_I_AD_IDX,
    FILE_I_ARR_IDX,
    FILE_I_PCSCF_IDX,
    FILE_I_GBAP_IDX,
    FILE_I_GBANL_IDX,
    FILE_I_NAFKCA_IDX,
    FILE_I_UICCIARI_IDX,
    FILE_I_SMS_IDX,
    FILE_I_SMSS_IDX,
    FILE_I_SMSR_IDX,
    FILE_I_SMSP_IDX,
/* __ISIM_SUPPORT__ end */  

/* USIM R10/R11 new file start */   
    FILE_U_NAFKCA_IDX,
    FILE_U_SPNI_IDX,
    FILE_U_PNNI_IDX,
    FILE_U_NCPIP_IDX,
    //FILE_U_EPSLOCI_IDX,// Already exist
    //FILE_U_EPSNSC_IDX,// Already exist
    FILE_U_UFC_IDX,
    FILE_U_UICCIARI_IDX,
    FILE_U_NASCONFIG_IDX,
    FILE_U_PWS_IDX,
/* USIM R10/R11 new file end */

/* CDMA2000 file start */
    FILE_MMSS_IDX,
    FILE_MLPL_IDX,
    FILE_MSPL_IDX,
    FILE_MMSSMODE_IDX,
    FILE_CSIM_IDX,
    FILE_C_IMSI_M_IDX,
    FILE_C_AD_IDX,
    FILE_C_UIM_ID_IDX,
    FILE_C_COUNT_IDX,
    FILE_C_IMSI_T_IDX,
    FILE_C_CDMA_HOME_IDX,
    FILE_C_ACCLOC_IDX,
    FILE_C_TERM_IDX,
    FILE_C_SSCI_IDX,
    FILE_C_OTAPASPC_IDX,
    FILE_C_NAMLOCK_IDX,
    FILE_C_MDN_IDX,
    FILE_C_CST_IDX,
    FILE_C_USGIND_IDX,
    FILE_C_SFUIMID_IDX,
    FILE_C_SPCS_IDX,
    FILE_C_EST_IDX,
    FILE_CDMA_IDX,
    FILE_UIM_IMSI_M_IDX,
    FILE_UIM_AD_IDX,
    FILE_UIM_UIM_ID_IDX,
    FILE_UIM_COUNT_IDX,
    FILE_UIM_IMSI_T_IDX,
    FILE_UIM_CDMA_HOME_IDX,
    FILE_UIM_ACCLOC_IDX,
    FILE_UIM_TERM_IDX,
    FILE_UIM_SSCI_IDX,
    FILE_UIM_OTAPASPC_IDX,
    FILE_UIM_NAMLOCK_IDX,
    FILE_UIM_MDN_IDX,
    FILE_UIM_CST_IDX,
    FILE_UIM_USGIND_IDX,
    FILE_UIM_SFUIMID_IDX,
    FILE_UIM_SPCS_IDX,
/* CDMA2000 file end */

    FILE_PERSO_IDX,
    UICC_TOTAL_FILES 
}sim_file_index_enum;

/* CSIM Profile Definition */
#define UTK_PROFILE_DOWNLOAD 1
#define UTK_SMSPP_DOWNLOAD 1
#define UTK_MENU_SELECTION 1
#define UTK_CMD_RST 1
#define UTK_TIMER_EXPIRY 1
#define UTK_UCS2_ENTRY 1
#define UTK_UCS2_DISP 1
#define UTK_DISP_TXT 1
#define UTK_GET_INPUT 1
#define UTK_MORE_TIME 1
#define UTK_PLAY_TONE 1
#define UTK_REFRESH 1
#define UTK_SELECT_ITEM 1
#define UTK_SET_UP_CALL 1
#define UTK_SET_UP_MENU 1
#define UTK_TIMER_MNGT_START 1
#define UTK_DISP_TXT_VAR_TIME 1 /*DISPLAY TEXT (Variable Time out)*/
#define UTK_SEND_SMS 1
#define UTK_PROVIDELOCALINFO_MCC_MNC_LAC_CellID_IMEI 1
#define UTK_PROVIDELOCALINFO_NMR 0
#define UTK_PROVIDELOCALINFO_DATE_TIME 1
#define UTK_PROVIDELOCALINFO_LANGUAGE 1
#define UTK_PROVIDELOCALINFO_ENHANCEDTIMER 0
#define UTK_PROVIDELOCALINFO_ACCESS_TECH 1
#define UTK_PROVIDELOCALINFO_ESN 0
#define UTK_POLL_INTERVAL 1
#define UTK_POLLING_OFF 1
#define UTK_GET_INKEY 1
#define UTK_GET_INKEY_HELP 1 /*GET INKEY (help is supported while waiting for 
                              immediate response or variable timeout) */
#define UTK_GET_INKEY_VAR_TIME 0 /* GET INKEY (Variable Timeout) */

#define UTK_MIN_PROACTIVE_POLLING_INTERVAL 1 /* 1s */

#ifdef __SATCE__
#define UTK_SET_UP_EVENT_LIST     1
#define UTK_EVENT_MT_CALL         1
#define UTK_EVENT_CALL_CONNECTED  1
#define UTK_EVENT_CALL_DISCONNECTED  1
#define UTK_EVENT_LOCAL_STATUS  1
#define UTK_EVENT_USER_ACTIVITY  1
#define UTK_EVENT_IDLE_SCREEN_AVAIL  1
#define UTK_EVENT_CARD_READER_STATUS 1
#define UTK_EVENT_LAN_SELECTION      1
#define UTK_EVENT_BROWSER_TERM       1
#define UTK_EVENT_DATA_AVAIL         1
#define UTK_EVENT_CHANNEL_STATUS     1
#define UTK_EVENT_ACCESS_TECH_STATUS 1
#define UTK_EVENT_DISP_PARAMS_CHANGED 1
#define UTK_EVENT_LOCAL_CONNECTION    1
#define UTK_EVENT_NET_SEARCH_MODE_CHANGE 1
#define UTK_OPEN_CHANNEL     1
#define UTK_CLOSE_CHANNEL    1
#define UTK_RECEIVE_DATA     1
#define UTK_SEND_DATA        1
#define UTK_GET_CHANNEL_STATUS 1

#else
#define UTK_SET_UP_EVENT_LIST     0
#define UTK_EVENT_MT_CALL         0
#define UTK_EVENT_CALL_CONNECTED  0
#define UTK_EVENT_CALL_DISCONNECTED  0
#define UTK_EVENT_LOCAL_STATUS  0
#define UTK_EVENT_USER_ACTIVITY  0
#define UTK_EVENT_IDLE_SCREEN_AVAIL  0
#define UTK_EVENT_CARD_READER_STATUS 0
#define UTK_EVENT_LAN_SELECTION      0
#define UTK_EVENT_BROWSER_TERM       0
#define UTK_EVENT_DATA_AVAIL         0
#define UTK_EVENT_CHANNEL_STATUS     0
#define UTK_EVENT_ACCESS_TECH_STATUS 0
#define UTK_EVENT_DISP_PARAMS_CHANGED 0
#define UTK_EVENT_LOCAL_CONNECTION    0
#define UTK_EVENT_NET_SEARCH_MODE_CHANGE 0
#define UTK_OPEN_CHANNEL     0
#define UTK_CLOSE_CHANNEL    0
#define UTK_RECEIVE_DATA     0
#define UTK_SEND_DATA        0
#define UTK_GET_CHANNEL_STATUS 0
#endif

#define SUPPORT_SOFTKEY_FOR_SELECT_ITEM  0
#define SUPPORT_SOFTKEY_FOR_SELECT_MENU  0
#define SOFTKEY_MAX_NUM  2
#define DISP_HEIGHT_CHAR_NUM 5
#define SUPPORT_DISP_HEIGHT_SIZING_PARAM 0
#define DISP_WIDTH_CHAR_NUM  7
#define SUPPORT_VAR_SIZE_FORTS  0
#define SUPPORT_DISP_RESIZE     0
#define SUPPORT_TEXT_WRAPPING   0
#define SUPPORT_TEXT_SCROLLING  1
#define WIDTH_REDUCTION 7
#define SUPPORT_EXTENDED_TEXT   0
/* CSIM Profile Definition End*/

#endif // _SIM_PUBLIC_ENUM_PUBLIC_H_

