#ifndef MODULE_MSG_RANGE_H
#define MODULE_MSG_RANGE_H

typedef enum {
    MSG_ID_XXX_CODE_BASE = 500,
    
    MSG_ID_SYSDEBUG_CODE_BEGIN, MSG_ID_SYSDEBUG_CODE_TAIL = MSG_ID_SYSDEBUG_CODE_BEGIN + 100,
    
    MSG_ID_CC_CODE_BEGIN, MSG_ID_CC_CODE_TAIL = MSG_ID_CC_CODE_BEGIN + 100,
    
    MSG_ID_CISS_CODE_BEGIN, MSG_ID_CISS_CODE_TAIL = MSG_ID_CISS_CODE_BEGIN + 150,

    MSG_ID_MM_CODE_BEGIN, MSG_ID_MM_CODE_TAIL = MSG_ID_MM_CODE_BEGIN + 200,
    
    MSG_ID_SMS_CODE_BEGIN, MSG_ID_SMS_CODE_TAIL = MSG_ID_SMS_CODE_BEGIN + 100,
    
    MSG_ID_SIM_PUBLIC_CODE_BEGIN, MSG_ID_SIM_PUBLIC_CODE_TAIL = MSG_ID_SIM_PUBLIC_CODE_BEGIN + 100,
    
    MSG_ID_SIM_PS_CODE_BEGIN, MSG_ID_SIM_PS_CODE_TAIL = MSG_ID_SIM_PS_CODE_BEGIN + 300,
    
    MSG_ID_L4_PUBLIC_CODE_BEGIN, MSG_ID_L4_PUBLIC_CODE_TAIL = MSG_ID_L4_PUBLIC_CODE_BEGIN + 100,
    
    MSG_ID_L4C_CODE_BEGIN, MSG_ID_L4C_CODE_TAIL = MSG_ID_L4C_CODE_BEGIN + 600,

    MSG_ID_RAT_TCM_CODE_BEGIN, MSG_ID_RAT_TCM_CODE_TAIL = MSG_ID_RAT_TCM_CODE_BEGIN + 200,
    
    MSG_ID_TCM_CODE_BEGIN, MSG_ID_TCM_CODE_TAIL = MSG_ID_TCM_CODE_BEGIN + 200,

    MSG_ID_CSM_CODE_BEGIN, MSG_ID_CSM_CODE_TAIL = MSG_ID_CSM_CODE_BEGIN + 200,

    MSG_ID_SMSAL_CODE_BEGIN, MSG_ID_SMSAL_CODE_TAIL = MSG_ID_SMSAL_CODE_BEGIN + 150,
    
    MSG_ID_SMU_CODE_BEGIN, MSG_ID_SMU_CODE_TAIL = MSG_ID_SMU_CODE_BEGIN + 100,
    
    MSG_ID_UEM_CODE_BEGIN, MSG_ID_UEM_CODE_TAIL = MSG_ID_UEM_CODE_BEGIN + 150,
    
    MSG_ID_RAC_CODE_BEGIN, MSG_ID_RAC_CODE_TAIL = MSG_ID_RAC_CODE_BEGIN + 250,
    
    MSG_ID_USAT_CODE_BEGIN, MSG_ID_USAT_CODE_TAIL = MSG_ID_USAT_CODE_BEGIN + 100,
    
    MSG_ID_PHB_CODE_BEGIN, MSG_ID_PHB_CODE_TAIL = MSG_ID_PHB_CODE_BEGIN + 150,
    
    MSG_ID_PS_CODE_BEGIN, MSG_ID_PS_CODE_TAIL = MSG_ID_PS_CODE_BEGIN + 150,

    MSG_ID_MBCI_CODE_BEGIN, MSG_ID_MBCI_CODE_TAIL = MSG_ID_MBCI_CODE_BEGIN + 20,
    
    MSG_ID_ATCI_CODE_BEGIN, MSG_ID_ATCI_CODE_TAIL = MSG_ID_ATCI_CODE_BEGIN + 150,
    
    MSG_ID_ENG_CODE_BEGIN, MSG_ID_ENG_CODE_TAIL = MSG_ID_ENG_CODE_BEGIN + 150,

    MSG_ID_PSDM_CODE_BEGIN, MSG_ID_PSDM_CODE_TAIL = MSG_ID_PSDM_CODE_BEGIN + 30,
    
    MSG_ID_VMMI_CODE_BEGIN, MSG_ID_VMMI_CODE_TAIL = MSG_ID_VMMI_CODE_BEGIN + 100,
    
    MSG_ID_RLC_CODE_BEGIN, MSG_ID_RLC_CODE_TAIL = MSG_ID_RLC_CODE_BEGIN + 100,

    MSG_ID_RLC_TDD_CODE_BEGIN, MSG_ID_RLC_TDD_CODE_TAIL = MSG_ID_RLC_TDD_CODE_BEGIN + 100,
    
    MSG_ID_RRM_COMMON_CODE_BEGIN, MSG_ID_RRM_COMMON_CODE_TAIL = MSG_ID_RRM_COMMON_CODE_BEGIN + 100,

    MSG_ID_RRM_COMMON_TDD_CODE_BEGIN, MSG_ID_RRM_COMMON_TDD_CODE_TAIL = MSG_ID_RRM_COMMON_TDD_CODE_BEGIN + 100,
    
    MSG_ID_RCS_CODE_BEGIN, MSG_ID_RCS_CODE_TAIL = MSG_ID_RCS_CODE_BEGIN + 100,
    
    MSG_ID_RCS_TDD_CODE_BEGIN, MSG_ID_RCS_TDD_CODE_TAIL = MSG_ID_RCS_TDD_CODE_BEGIN + 100,

    MSG_ID_RMPC_CODE_BEGIN, MSG_ID_RMPC_CODE_TAIL = MSG_ID_RMPC_CODE_BEGIN + 100,
    
    MSG_ID_RMPC_TDD_CODE_BEGIN, MSG_ID_RMPC_TDD_CODE_TAIL = MSG_ID_RMPC_TDD_CODE_BEGIN + 100,

    MSG_ID_RRM_MPAL_MM_CODE_BEGIN, MSG_ID_RRM_MPAL_MM_CODE_TAIL = MSG_ID_RRM_MPAL_MM_CODE_BEGIN + 100,
    
    MSG_ID_RRM_MPAL_MM_TDD_CODE_BEGIN, MSG_ID_RRM_MPAL_MM_TDD_CODE_TAIL = MSG_ID_RRM_MPAL_MM_TDD_CODE_BEGIN + 100,

    MSG_ID_MAC_CODE_BEGIN, MSG_ID_MAC_CODE_TAIL = MSG_ID_MAC_CODE_BEGIN + 100,
    
    MSG_ID_MAC_TDD_CODE_BEGIN, MSG_ID_MAC_TDD_CODE_TAIL = MSG_ID_MAC_TDD_CODE_BEGIN + 100,

    MSG_ID_LAPDM_CODE_BEGIN, MSG_ID_LAPDM_CODE_TAIL = MSG_ID_LAPDM_CODE_BEGIN + 100,
    
    MSG_ID_LAPDM_TDD_CODE_BEGIN, MSG_ID_LAPDM_TDD_CODE_TAIL = MSG_ID_LAPDM_TDD_CODE_BEGIN + 100,

    MSG_ID_REASM_CODE_BEGIN, MSG_ID_REASM_CODE_TAIL = MSG_ID_REASM_CODE_BEGIN + 100,
    
    MSG_ID_REASM_TDD_CODE_BEGIN, MSG_ID_REASM_TDD_CODE_TAIL = MSG_ID_REASM_TDD_CODE_BEGIN + 100,

    MSG_ID_MPAL_CODE_BEGIN, MSG_ID_MPAL_CODE_TAIL = MSG_ID_MPAL_CODE_BEGIN + 100,
    
    MSG_ID_MPAL_TDD_CODE_BEGIN, MSG_ID_MPAL_TDD_CODE_TAIL = MSG_ID_MPAL_TDD_CODE_BEGIN + 100,

    MSG_ID_FDD_GAS_CODE_BEGIN, MSG_ID_FDD_GAS_CODE_TAIL = MSG_ID_FDD_GAS_CODE_BEGIN + 50,
    
    MSG_ID_TDD_GAS_CODE_BEGIN, MSG_ID_TDD_GAS_CODE_TAIL = MSG_ID_TDD_GAS_CODE_BEGIN + 50,

    MSG_ID_LLC_CODE_BEGIN, MSG_ID_LLC_CODE_TAIL = MSG_ID_LLC_CODE_BEGIN + 100,
    
    MSG_ID_P2P_CODE_BEGIN, MSG_ID_P2P_CODE_TAIL = MSG_ID_P2P_CODE_BEGIN + 100,
    
    MSG_ID_SND_CODE_BEGIN, MSG_ID_SND_CODE_TAIL = MSG_ID_SND_CODE_BEGIN + 100,
    
    MSG_ID_SM_CODE_BEGIN, MSG_ID_SM_CODE_TAIL = MSG_ID_SM_CODE_BEGIN + 100,

    MSG_ID_PAM_CODE_BEGIN, MSG_ID_PAM_CODE_TAIL = MSG_ID_PAM_CODE_BEGIN + 50,
    
    MSG_ID_TDT_CODE_BEGIN, MSG_ID_TDT_CODE_TAIL = MSG_ID_TDT_CODE_BEGIN + 100,
    
    MSG_ID_T30_CODE_BEGIN, MSG_ID_T30_CODE_TAIL = MSG_ID_T30_CODE_BEGIN + 50,
    
    MSG_ID_FA_CODE_BEGIN, MSG_ID_FA_CODE_TAIL = MSG_ID_FA_CODE_BEGIN + 50,
    
    MSG_ID_L2R_CODE_BEGIN, MSG_ID_L2R_CODE_TAIL = MSG_ID_L2R_CODE_BEGIN + 100,
    
    MSG_ID_RLP_CODE_BEGIN, MSG_ID_RLP_CODE_TAIL = MSG_ID_RLP_CODE_BEGIN + 100,
    
    MSG_ID_PS_PUBLIC_VT_MSG_CODE_BEGIN, MSG_ID_PS_PUBLIC_VT_MSG_CODE_TAIL = MSG_ID_PS_PUBLIC_VT_MSG_CODE_BEGIN + 30,
    
    MSG_ID_VT_CODE_BEGIN, MSG_ID_VT_CODE_TAIL = MSG_ID_VT_CODE_BEGIN + 70,    
    
    MSG_ID_NVRAM_CODE_BEGIN, MSG_ID_NVRAM_CODE_TAIL = MSG_ID_NVRAM_CODE_BEGIN + 100,
    
    MSG_ID_L1_CODE_BEGIN, MSG_ID_L1_CODE_TAIL = MSG_ID_L1_CODE_BEGIN + 300,
       
    MSG_ID_HAL_L1_CODE_BEGIN, MSG_ID_HAL_L1_CODE_TAIL = MSG_ID_HAL_L1_CODE_BEGIN + 40,
    
    MSG_ID_L1HISR_CODE_BEGIN, MSG_ID_L1HISR_CODE_TAIL = MSG_ID_L1HISR_CODE_BEGIN + 40,    
    
    MSG_ID_FT_CODE_BEGIN, MSG_ID_FT_CODE_TAIL = MSG_ID_FT_CODE_BEGIN + 100,
#ifdef __SEC_TEST__
	MSG_ID_SECTEST_CODE_BEGIN, MSG_ID_SECTEST_CODE_TAIL = MSG_ID_SECTEST_CODE_BEGIN + 10,
#endif    
    MSG_ID_TST_CODE_BEGIN, MSG_ID_TST_CODE_TAIL = MSG_ID_TST_CODE_BEGIN + 1200,    
    
    MSG_ID_AUDIO_MSG_CODE_BEGIN, MSG_ID_AUDIO_MSG_CODE_TAIL = MSG_ID_AUDIO_MSG_CODE_BEGIN + 100,
    
    MSG_ID_RATCM_CODE_BEGIN, MSG_ID_RATCM_CODE_TAIL = MSG_ID_RATCM_CODE_BEGIN + 300,
    
    MSG_ID_RATDM_CODE_BEGIN, MSG_ID_RATDM_CODE_TAIL = MSG_ID_RATDM_CODE_BEGIN + 110,
    
    MSG_ID_FDD_ADR_CODE_BEGIN, MSG_ID_FDD_ADR_CODE_TAIL = MSG_ID_FDD_ADR_CODE_BEGIN + 20,
    
    MSG_ID_FDD_CSCE_CODE_BEGIN, MSG_ID_FDD_CSCE_CODE_TAIL = MSG_ID_FDD_CSCE_CODE_BEGIN + 100,
    
    MSG_ID_FDD_CSE_CODE_BEGIN, MSG_ID_FDD_CSE_CODE_TAIL = MSG_ID_FDD_CSE_CODE_BEGIN + 100,
    
    MSG_ID_FDD_MEME_CODE_BEGIN, MSG_ID_FDD_MEME_CODE_TAIL = MSG_ID_FDD_MEME_CODE_BEGIN + 100,
    
    MSG_ID_FDD_RRCE_CODE_BEGIN, MSG_ID_FDD_RRCE_CODE_TAIL = MSG_ID_FDD_RRCE_CODE_BEGIN + 100,
     
    MSG_ID_FDD_SIBE_CODE_BEGIN, MSG_ID_FDD_SIBE_CODE_TAIL = MSG_ID_FDD_SIBE_CODE_BEGIN + 100,
    
    MSG_ID_FDD_SLCE_CODE_BEGIN, MSG_ID_FDD_SLCE_CODE_TAIL = MSG_ID_FDD_SLCE_CODE_BEGIN + 200,
     
    MSG_ID_FDD_DBME_CODE_BEGIN, MSG_ID_FDD_DBME_CODE_TAIL = MSG_ID_FDD_DBME_CODE_BEGIN + 20,

	MSG_ID_FDD_USIME_CODE_BEGIN, MSG_ID_FDD_USIME_CODE_TAIL = MSG_ID_FDD_USIME_CODE_BEGIN + 100,
	
    MSG_ID_FDD_URR_CODE_BEGIN, MSG_ID_FDD_URR_CODE_TAIL = MSG_ID_FDD_URR_CODE_BEGIN + 50,
    
    MSG_ID_TDD_ADR_CODE_BEGIN, MSG_ID_TDD_ADR_CODE_TAIL = MSG_ID_TDD_ADR_CODE_BEGIN + 20,

    MSG_ID_TDD_CSCE_CODE_BEGIN, MSG_ID_TDD_CSCE_CODE_TAIL = MSG_ID_TDD_CSCE_CODE_BEGIN + 100,

    MSG_ID_TDD_CSE_CODE_BEGIN, MSG_ID_TDD_CSE_CODE_TAIL = MSG_ID_TDD_CSE_CODE_BEGIN + 100,

    MSG_ID_TDD_MEME_CODE_BEGIN, MSG_ID_TDD_MEME_CODE_TAIL = MSG_ID_TDD_MEME_CODE_BEGIN + 100,
    
	MSG_ID_TDD_RRCE_CODE_BEGIN, MSG_ID_TDD_RRCE_CODE_TAIL = MSG_ID_TDD_RRCE_CODE_BEGIN + 100,

    MSG_ID_TDD_SIBE_CODE_BEGIN, MSG_ID_TDD_SIBE_CODE_TAIL = MSG_ID_TDD_SIBE_CODE_BEGIN + 100,
    
	MSG_ID_TDD_SLCE_CODE_BEGIN, MSG_ID_TDD_SLCE_CODE_TAIL = MSG_ID_TDD_SLCE_CODE_BEGIN + 200,
     
    MSG_ID_TDD_DBME_CODE_BEGIN, MSG_ID_TDD_DBME_CODE_TAIL = MSG_ID_TDD_DBME_CODE_BEGIN + 20,

    MSG_ID_TDD_USIME_CODE_BEGIN, MSG_ID_TDD_USIME_CODE_TAIL = MSG_ID_TDD_USIME_CODE_BEGIN + 100,

    MSG_ID_TDD_URR_CODE_BEGIN, MSG_ID_TDD_URR_CODE_TAIL = MSG_ID_TDD_URR_CODE_BEGIN + 50,
   	
   	MSG_ID_TDD_UMAC_CODE_BEGIN, MSG_ID_TDD_UMAC_CODE_TAIL = MSG_ID_TDD_UMAC_CODE_BEGIN + 100,
   	
    MSG_ID_FDD_UMAC_CODE_BEGIN, MSG_ID_FDD_UMAC_CODE_TAIL = MSG_ID_FDD_UMAC_CODE_BEGIN + 100,
    
    MSG_ID_TDD_URLC_CODE_BEGIN, MSG_ID_TDD_URLC_CODE_TAIL = MSG_ID_TDD_URLC_CODE_BEGIN + 150,

	MSG_ID_FDD_SEQ_CODE_BEGIN, MSG_ID_FDD_SEQ_CODE_TAIL = MSG_ID_FDD_SEQ_CODE_BEGIN + 100,
    
    MSG_ID_FDD_URLC_CODE_BEGIN, MSG_ID_FDD_URLC_CODE_TAIL = MSG_ID_FDD_URLC_CODE_BEGIN + 150,

    MSG_ID_FDD_UL2_CODE_BEGIN, MSG_ID_FDD_UL2_CODE_TAIL = MSG_ID_FDD_UL2_CODE_BEGIN + 100,
    
    MSG_ID_BMC_CODE_BEGIN, MSG_ID_BMC_CODE_TAIL = MSG_ID_BMC_CODE_BEGIN + 100,
       
    MSG_ID_FDD_CSR_CODE_BEGIN, MSG_ID_FDD_CSR_CODE_TAIL = MSG_ID_FDD_CSR_CODE_BEGIN + 100,
        
    MSG_ID_FDD_DRLC_CODE_BEGIN, MSG_ID_FDD_DRLC_CODE_TAIL = MSG_ID_FDD_DRLC_CODE_BEGIN + 100,
    
    MSG_ID_TDD_PDCP_CODE_BEGIN, MSG_ID_TDD_PDCP_CODE_TAIL = MSG_ID_TDD_PDCP_CODE_BEGIN + 100,

    MSG_ID_FDD_PDCP_CODE_BEGIN, MSG_ID_FDD_PDCP_CODE_TAIL = MSG_ID_FDD_PDCP_CODE_BEGIN + 100,
 
    MSG_ID_RABM_TDD_CODE_BEGIN, MSG_ID_RABM_TDD_CODE_TAIL = MSG_ID_RABM_TDD_CODE_BEGIN + 100,

    MSG_ID_FDD_RABM_CODE_BEGIN, MSG_ID_FDD_RABM_CODE_TAIL = MSG_ID_FDD_RABM_CODE_BEGIN + 100,

	MSG_ID_BMC_TDD_CODE_BEGIN, MSG_ID_BMC_TDD_CODE_TAIL = MSG_ID_BMC_TDD_CODE_BEGIN + 100,

	MSG_ID_CSR_TDD_CODE_BEGIN, MSG_ID_CSR_TDD_CODE_TAIL = MSG_ID_CSR_TDD_CODE_BEGIN + 100,

	MSG_ID_TDD_DRLC_CODE_BEGIN, MSG_ID_TDD_DRLC_CODE_TAIL = MSG_ID_TDD_DRLC_CODE_BEGIN + 100,  
	
    MSG_ID_TDD_UL2D_CODE_BEGIN, MSG_ID_TDD_UL2D_CODE_TAIL = MSG_ID_TDD_UL2D_CODE_BEGIN + 100,
    
    MSG_ID_UL2D_CODE_BEGIN, MSG_ID_UL2D_CODE_TAIL = MSG_ID_UL2D_CODE_BEGIN + 100,
    
    MSG_ID_DM_CSCE_CODE_BEGIN, MSG_ID_DM_CSCE_CODE_TAIL = MSG_ID_DM_CSCE_CODE_BEGIN + 100,
    
    MSG_ID_UAS_GAS_CODE_BEGIN, MSG_ID_UAS_GAS_CODE_TAIL = MSG_ID_UAS_GAS_CODE_BEGIN + 100,

    MSG_ID_EAS_GAS_CODE_BEGIN, MSG_ID_EAS_GAS_CODE_TAIL = MSG_ID_EAS_GAS_CODE_BEGIN + 100,
    
    MSG_ID_DM_MEME_CODE_BEGIN, MSG_ID_DM_MEME_CODE_TAIL = MSG_ID_DM_MEME_CODE_BEGIN + 100,
    
    MSG_ID_DM_RRCE_CODE_BEGIN, MSG_ID_DM_RRCE_CODE_TAIL = MSG_ID_DM_RRCE_CODE_BEGIN + 100,
    
    MSG_ID_DM_RRCE_TDD_CODE_BEGIN, MSG_ID_DM_RRCE_TDD_CODE_TAIL = MSG_ID_DM_RRCE_TDD_CODE_BEGIN + 100,
    
    MSG_ID_GEMINI_UAS_CODE_BEGIN, MSG_ID_GEMINI_UAS_CODE_TAIL = MSG_ID_GEMINI_UAS_CODE_BEGIN + 100,
    
    MSG_ID_GEMINI_GAS_CODE_BEGIN, MSG_ID_GEMINI_GAS_CODE_TAIL = MSG_ID_GEMINI_GAS_CODE_BEGIN + 100,
    
    MSG_ID_FDD_UL1_MSG_CODE_BEGIN, MSG_ID_FDD_UL1_MSG_CODE_TAIL = MSG_ID_FDD_UL1_MSG_CODE_BEGIN + 300,
    
    MSG_ID_UL1DATA_MSG_CODE_BEGIN, MSG_ID_UL1DATA_MSG_CODE_TAIL = MSG_ID_UL1DATA_MSG_CODE_BEGIN + 20,
    
    MSG_ID_UL1HISR_MSG_CODE_BEGIN, MSG_ID_UL1HISR_MSG_CODE_TAIL = MSG_ID_UL1HISR_MSG_CODE_BEGIN + 5,
    
    MSG_ID_UL1C_MSG_CODE_BEGIN, MSG_ID_UL1C_MSG_CODE_TAIL = MSG_ID_UL1C_MSG_CODE_BEGIN + 20,
    
    MSG_ID_LL1_MSG_CODE_BEGIN, MSG_ID_LL1_MSG_CODE_TAIL = MSG_ID_LL1_MSG_CODE_BEGIN + 150,
    
    MSG_ID_UL1TST_MSG_CODE_BEGIN, MSG_ID_UL1TST_MSG_CODE_TAIL = MSG_ID_UL1TST_MSG_CODE_BEGIN + 50,
    
    MSG_ID_UAGPS_CP_CODE_BEGIN, MSG_ID_UAGPS_CP_CODE_TAIL = MSG_ID_UAGPS_CP_CODE_BEGIN + 30,
    
    MSG_ID_GPS_MSG_CODE_BEGIN, MSG_ID_GPS_MSG_CODE_TAIL = MSG_ID_GPS_MSG_CODE_BEGIN + 50,
    
    MSG_ID_TL1_MSG_CODE_BEGIN, MSG_ID_TL1_MSG_CODE_TAIL = MSG_ID_TL1_MSG_CODE_BEGIN + 200,
    
    MSG_ID_TL1DATA_AST_MSG_CODE_BEGIN, MSG_ID_TL1DATA_AST_MSG_CODE_TAIL = MSG_ID_TL1DATA_AST_MSG_CODE_BEGIN + 200,
    
    MSG_ID_TL1HISR_AST_MSG_CODE_BEGIN, MSG_ID_TL1HISR_AST_MSG_CODE_TAIL = MSG_ID_TL1HISR_AST_MSG_CODE_BEGIN + 50,
    
    MSG_ID_TL1FTA_AST_MSG_CODE_BEGIN, MSG_ID_TL1FTA_AST_MSG_CODE_TAIL = MSG_ID_TL1FTA_AST_MSG_CODE_BEGIN + 50,
    
    MSG_ID_RSVAS_CODE_BEGIN, MSG_ID_RSVAS_CODE_TAIL = MSG_ID_RSVAS_CODE_BEGIN + 100,
    
    MSG_ID_RSVAK_CODE_BEGIN, MSG_ID_RSVAK_CODE_TAIL = MSG_ID_RSVAK_CODE_BEGIN + 50,
    
    MSG_ID_RSVAU_CODE_BEGIN, MSG_ID_RSVAU_CODE_TAIL = MSG_ID_RSVAU_CODE_BEGIN + 50,
    
    MSG_ID_RSVAG_CODE_BEGIN, MSG_ID_RSVAG_CODE_TAIL = MSG_ID_RSVAG_CODE_BEGIN + 50,
    
    MSG_ID_RSVAE_CODE_BEGIN, MSG_ID_RSVAE_CODE_TAIL = MSG_ID_RSVAE_CODE_BEGIN + 50,
    
    MSG_ID_NDIS_MSG_CODE_BEGIN, MSG_ID_NDIS_MSG_CODE_TAIL = MSG_ID_NDIS_MSG_CODE_BEGIN + 20,
    
    MSG_ID_UPS_PUBLIC_CODE_BEGIN, MSG_ID_UPS_PUBLIC_CODE_TAIL = MSG_ID_UPS_PUBLIC_CODE_BEGIN + 20,
    
    MSG_ID_UPS_MSG_CODE_BEGIN, MSG_ID_UPS_MSG_CODE_TAIL = MSG_ID_UPS_MSG_CODE_BEGIN + 100,
    
    MSG_ID_KPALV_MSG_CODE_BEGIN, MSG_ID_KPALV_MSG_CODE_TAIL = MSG_ID_KPALV_MSG_CODE_BEGIN + 5,
    
    MSG_ID_PS_PUBLIC_SUPL_MSG_CODE_BEGIN, MSG_ID_PS_PUBLIC_SUPL_MSG_CODE_TAIL = MSG_ID_PS_PUBLIC_SUPL_MSG_CODE_BEGIN + 30,
    
    MSG_ID_SUPL_MSG_CODE_BEGIN, MSG_ID_SUPL_MSG_CODE_TAIL = MSG_ID_SUPL_MSG_CODE_BEGIN + 20,
    
    MSG_ID_CMUX_CODE_BEGIN, MSG_ID_CMUX_CODE_TAIL = MSG_ID_CMUX_CODE_BEGIN + 100,
    
    MSG_ID_PPP_CODE_BEGIN, MSG_ID_PPP_CODE_TAIL = MSG_ID_PPP_CODE_BEGIN + 100,
    
    MSG_ID_EXT_MODEM_CODE_BEGIN, MSG_ID_EXT_MODEM_CODE_TAIL = MSG_ID_EXT_MODEM_CODE_BEGIN + 50,
    
    MSG_ID_WMT_MSG_CODE_BEGIN, MSG_ID_WMT_MSG_CODE_TAIL = MSG_ID_WMT_MSG_CODE_BEGIN + 100,

    MSG_ID_EM_CODE_BEGIN, MSG_ID_EM_CODE_TAIL = MSG_ID_EM_CODE_BEGIN + 600,
    
    MSG_ID_HOSTAP_MSG_CODE_BEGIN, MSG_ID_HOSTAP_MSG_CODE_TAIL = MSG_ID_HOSTAP_MSG_CODE_BEGIN + 100,
    
    MSG_ID_FS_CODE_BEGIN, MSG_ID_FS_CODE_TAIL = MSG_ID_FS_CODE_BEGIN + 60,

    MSG_ID_MED_CODE_BEGIN, MSG_ID_MED_CODE_TAIL = MSG_ID_MED_CODE_BEGIN + 100,
    
    MSG_ID_DPS_CODE_BEGIN, MSG_ID_DPS_CODE_TAIL = MSG_ID_DPS_CODE_BEGIN + 150,
    
    MSG_ID_UDPS_CODE_BEGIN, MSG_ID_UDPS_CODE_TAIL = MSG_ID_UDPS_CODE_BEGIN + 1000,
    
    MSG_ID_DRIVER_CODE_BEGIN, MSG_ID_DRIVER_CODE_TAIL = MSG_ID_DRIVER_CODE_BEGIN + 1000,
    
    MSG_ID_MEUT_MSG_CODE_BEGIN, MSG_ID_MEUT_MSG_CODE_TAIL = MSG_ID_MEUT_MSG_CODE_BEGIN + 500,

	MSG_ID_L1_EXT_CODE_BEGIN,MSG_ID_L1_EXT_CODE_TAIL = MSG_ID_L1_EXT_CODE_BEGIN + 30,

	MSG_ID_HAPLUS_MSG_CODE_BEGIN,MSG_ID_HAPLUS_MSG_CODE_TAIL = MSG_ID_HAPLUS_MSG_CODE_BEGIN + 200,

	MSG_ID_MRS_CODE_BEGIN,MSG_ID_MRS_CODE_TAIL = MSG_ID_MRS_CODE_BEGIN + 30,
	
    /* Add by LTE SS */
    MSG_ID_EL1_CODE_BEGIN, MSG_ID_EL1_CODE_TAIL = MSG_ID_EL1_CODE_BEGIN + 300,

    MSG_ID_L1EDPS_CODE_BEGIN, MSG_ID_L1EDPS_CODE_TAIL = MSG_ID_L1EDPS_CODE_BEGIN + 1000,

    MSG_ID_MLL1_MSG_CODE_BEGIN, MSG_ID_MLL1_MSG_CODE_TAIL = MSG_ID_MLL1_MSG_CODE_BEGIN + 200,

    MSG_ID_EL2_CODE_BEGIN, MSG_ID_EL2_CODE_TAIL = MSG_ID_EL2_CODE_BEGIN + 200,

    MSG_ID_LTT_CODE_BEGIN, MSG_ID_LTT_CODE_TAIL = MSG_ID_LTT_CODE_BEGIN + 100,

    MSG_ID_ERRC_CODE_BEGIN, MSG_ID_ERRC_CODE_TAIL = MSG_ID_ERRC_CODE_BEGIN + 600,

    MSG_ID_EL1_PHS_CODE_BEGIN, MSG_ID_EL1_PHS_CODE_TAIL = MSG_ID_EL1_PHS_CODE_BEGIN + 40,

    MSG_ID_EL1_TX_CODE_BEGIN, MSG_ID_EL1_TX_CODE_TAIL = MSG_ID_EL1_TX_CODE_BEGIN + 10,

#if defined(L1_SIM) || defined(ESIM_BUILD_CONFIG)
    MSG_ID_SCRIPT_CODE_BEGIN, MSG_ID_SCRIPT_CODE_TAIL = MSG_ID_SCRIPT_CODE_BEGIN + 150,
#endif
    MSG_ID_CLDMACORE_CODE_BEGIN, MSG_ID_CLDMACORE_CODE_END = MSG_ID_CLDMACORE_CODE_BEGIN + 5,

    MSG_ID_CCIFCORE_CODE_BEGIN, MSG_ID_CCIFCORE_CODE_END = MSG_ID_CCIFCORE_CODE_BEGIN + 5,

    MSG_ID_TFTLIB_CODE_BEGIN, MSG_ID_TFTLIB_CODE_TAIL = MSG_ID_TFTLIB_CODE_BEGIN + 150,
    
    MSG_ID_NWSEL_CODE_BEGIN, MSG_ID_NWSEL_CODE_TAIL = MSG_ID_NWSEL_CODE_BEGIN + 200,
    
    MSG_ID_EMM_CODE_BEGIN, MSG_ID_EMM_CODE_TAIL = MSG_ID_EMM_CODE_BEGIN + 900,
    
    MSG_ID_EVAL_CODE_BEGIN, MSG_ID_EVAL_CODE_TAIL = MSG_ID_EVAL_CODE_BEGIN + 250,
    
    MSG_ID_ETC_CODE_BEGIN, MSG_ID_ETC_CODE_TAIL = MSG_ID_ETC_CODE_BEGIN + 150,
    
    MSG_ID_ESM_CODE_BEGIN, MSG_ID_ESM_CODE_TAIL = MSG_ID_ESM_CODE_BEGIN + 100,

    MSG_ID_HIF_MW_CODE_BEGIN, MSG_ID_HIF_MW_CODE_TAIL = MSG_ID_HIF_MW_CODE_BEGIN + 1500,
    
    MSG_ID_HIF_SVC_CODE_BEGIN, MSG_ID_HIF_SVC_CODE_TAIL = MSG_ID_HIF_SVC_CODE_BEGIN + 1000,

    MSG_ID_UPCM_CODE_BEGIN ,  MSG_ID_UPCM_CODE_TAIL = MSG_ID_UPCM_CODE_BEGIN+50,

    MSG_ID_PROXY_CODE_BEGIN, MSG_ID_PROXY_CODE_TAIL = MSG_ID_PROXY_CODE_BEGIN + 20,

    MSG_ID_LTECSR_CODE_BEGIN, MSG_ID_LTECSR_CODE_TAIL = MSG_ID_LTECSR_CODE_BEGIN + 50,

    MSG_ID_IMC_CODE_BEGIN, MSG_ID_IMC_CODE_TAIL = MSG_ID_IMC_CODE_BEGIN + 1000,

    MSG_ID_SDM_CODE_BEGIN, MSG_ID_SDM_CODE_TAIL = MSG_ID_SDM_CODE_BEGIN + 500,

    MSG_ID_VDM_CODE_BEGIN, MSG_ID_VDM_CODE_TAIL = MSG_ID_VDM_CODE_BEGIN + 1000,

    MSG_ID_IMCSMS_CODE_BEGIN, MSG_ID_IMCSMS_CODE_TAIL = MSG_ID_IMCSMS_CODE_BEGIN + 20,

    MSG_ID_ATP_CODE_BEGIN, MSG_ID_ATP_CODE_TAIL = MSG_ID_ATP_CODE_BEGIN + 500,

    MSG_ID_AS_LOG_CODE_BEGIN, MSG_ID_AS_LOG_CODE_TAIL = MSG_ID_AS_LOG_CODE_BEGIN + 100,

    MSG_ID_LBS_CODE_BEGIN ,  MSG_ID_LBS_CODE_TAIL = MSG_ID_LBS_CODE_BEGIN + 50,

    MSG_ID_LPP_CODE_BEGIN, MSG_ID_LPP_CODE_TAIL = MSG_ID_LPP_CODE_BEGIN + 100,

    MSG_ID_UL1B_CODE_BEGIN, MSG_ID_UL1B_CODE_TAIL = MSG_ID_UL1B_CODE_BEGIN+100,

    MSG_ID_EL1B_CODE_BEGIN, MSG_ID_EL1B_CODE_TAIL = MSG_ID_EL1B_CODE_BEGIN+100,

    MSG_ID_MBMSAL_CODE_BEGIN, MSG_ID_MBMSAL_CODE_TAIL = MSG_ID_MBMSAL_CODE_BEGIN + 20,

    MSG_ID_MMRF_CODE_BEGIN, MSG_ID_MMRF_CODE_TAIL = MSG_ID_MMRF_CODE_BEGIN + 20,

    MSG_ID_MMRF_PCORE_CODE_BEGIN, MSG_ID_MMRF_PCORE_CODE_TAIL = MSG_ID_MMRF_PCORE_CODE_BEGIN + 20,

    MSG_ID_LAS_CODE_BEGIN, MSG_ID_LAS_CODE_TAIL = MSG_ID_LAS_CODE_BEGIN + 150,

    MSG_ID_EL1TST_CODE_BEGIN, MSG_ID_EL1TST_CODE_TAIL = MSG_ID_EL1TST_CODE_BEGIN + 10,

    MSG_ID_CL1TST_CODE_BEGIN, MSG_ID_CL1TST_CODE_TAIL = MSG_ID_CL1TST_CODE_BEGIN + 10,
    MSG_ID_CL1TST_L1PS_CODE_BEGIN, MSG_ID_CL1TST_L1PS_CODE_TAIL = MSG_ID_CL1TST_L1PS_CODE_BEGIN + 30,

    MSG_ID_GL1TST_CODE_BEGIN, MSG_ID_GL1TST_CODE_TAIL = MSG_ID_GL1TST_CODE_BEGIN + 100,

    MSG_ID_GMSS_CODE_BEGIN, MSG_ID_GMSS_CODE_TAIL = MSG_ID_GMSS_CODE_BEGIN + 200,

    MSG_ID_CCISMCORE_CODE_BEGIN, MSG_ID_CCISMCORE_CODE_END = MSG_ID_CCISMCORE_CODE_BEGIN + 10,

    MSG_ID_CCISMCORE_SCP_CODE_BEGIN, MSG_ID_CCISMCORE_SCP_CODE_END = MSG_ID_CCISMCORE_SCP_CODE_BEGIN + 10,
    
    MSG_ID_CSCDCORE_CODE_BEGIN, MSG_ID_CSCDCORE_CODE_END = MSG_ID_CSCDCORE_CODE_BEGIN + 10,
    
    MSG_ID_LHIFCORE_CODE_BEGIN, MSG_ID_LHIFCORE_CODE_END = MSG_ID_LHIFCORE_CODE_BEGIN + 10,

    MSG_ID_IWLAN_CODE_BEGIN, MSG_ID_IWLAN_CODE_TAIL = MSG_ID_IWLAN_CODE_BEGIN + 1000,

    MSG_ID_WIPC_CODE_BEGIN, MSG_ID_WIPC_CODE_TAIL = MSG_ID_WIPC_CODE_BEGIN + 200,

    /* C2K message Ranges */
    MSG_ID_XL1_CODE_BEGIN, MSG_ID_XL1_CODE_TAIL = MSG_ID_XL1_CODE_BEGIN + 160,
    MSG_ID_VRF_CODE_BEGIN, MSG_ID_VRF_CODE_TAIL = MSG_ID_VRF_CODE_BEGIN + 20,

    /* 1xRTT MSG ID Range */
    MSG_ID_L1D_MDM_CODE_BEGIN, MSG_ID_L1D_MDM_CODE_TAIL = MSG_ID_L1D_MDM_CODE_BEGIN + 300,

    MSG_ID_LMD_CODE_BEGIN, MSG_ID_LMD_CODE_TAIL = MSG_ID_LMD_CODE_BEGIN + 100,
    
    MSG_ID_LMDS_CODE_BEGIN, MSG_ID_LMDS_CODE_TAIL = MSG_ID_LMDS_CODE_BEGIN + 30,

    MSG_ID_CXRLP_CODE_BEGIN, MSG_ID_CXRLP_CODE_TAIL = MSG_ID_CXRLP_CODE_BEGIN + 30,

    MSG_ID_CPSW_CODE_BEGIN, MSG_ID_CPSW_CODE_TAIL = MSG_ID_CPSW_CODE_BEGIN + 500,

    MSG_ID_CPSWS_CODE_BEGIN, MSG_ID_CPSWS_CODE_TAIL = MSG_ID_CPSWS_CODE_BEGIN + 30,

    /* EVDO MSG ID Range */
    MSG_ID_DO_CODE_BEGIN,

    /* HSC */
    MSG_ID_HSC_CODE_BEGIN       = MSG_ID_DO_CODE_BEGIN,
    MSG_ID_HSC_CODE_TAIL        = MSG_ID_HSC_CODE_BEGIN + 200,

    /* SLC */
    MSG_ID_SLC_CODE_BEGIN, MSG_ID_SLC_CODE_TAIL = MSG_ID_SLC_CODE_BEGIN + 100,
    /* CLC */
    MSG_ID_CLC_CODE_BEGIN, MSG_ID_CLC_CODE_TAIL = MSG_ID_CLC_CODE_BEGIN + 200,
    /* RMC */
    MSG_ID_RMC_CODE_BEGIN, MSG_ID_RMC_CODE_TAIL = MSG_ID_RMC_CODE_BEGIN + 300,

    /* FCP */
    MSG_ID_FCP_CODE_BEGIN, MSG_ID_FCP_CODE_TAIL = MSG_ID_FCP_CODE_BEGIN + 300,

    /* RCP */
    MSG_ID_RCP_CODE_BEGIN, MSG_ID_RCP_CODE_TAIL = MSG_ID_RCP_CODE_BEGIN + 300,

    /* SEC */
    MSG_ID_SEC_CODE_BEGIN, MSG_ID_SEC_CODE_TAIL = MSG_ID_SEC_CODE_BEGIN + 100,

    MSG_ID_DO_CODE_TAIL         = MSG_ID_SEC_CODE_TAIL,

    MSG_ID_CHLP_CODE_BEGIN, MSG_ID_CHLP_CODE_TAIL = MSG_ID_CHLP_CODE_BEGIN + 350,

    MSG_ID_CSS_CODE_BEGIN, MSG_ID_CSS_CODE_TAIL = MSG_ID_CSS_CODE_BEGIN + 300,

    MSG_ID_CVAL_CODE_BEGIN, MSG_ID_CVAL_CODE_TAIL = MSG_ID_CVAL_CODE_BEGIN + 1250,

    MSG_ID_LEC_CODE_BEGIN, MSG_ID_LEC_CODE_TAIL = MSG_ID_LEC_CODE_BEGIN + 300,

    MSG_ID_CUIM_CODE_BEGIN, MSG_ID_CUIM_CODE_TAIL = MSG_ID_CUIM_CODE_BEGIN + 1000,

    MSG_ID_ELT_CODE_BEGIN, MSG_ID_ELT_CODE_TAIL = MSG_ID_ELT_CODE_BEGIN + 1000,

    MSG_ID_ELT_OTA_CODE_BEGIN, MSG_ID_ELT_OTA_CODE_TAIL = MSG_ID_ELT_OTA_CODE_BEGIN + 30,

    // For demo/integration verification
    MSG_ID_C2K_DUMMY_L1_CODE_BEGIN, MSG_ID_C2K_DUMMY_L1_CODE_TAIL = MSG_ID_C2K_DUMMY_L1_CODE_BEGIN + 30,

    /* for MD1UT */
    MSG_ID_C2K_MD1UT_CODE_BEGIN, MSG_ID_C2K_MD1UT_CODE_TAIL  = MSG_ID_C2K_MD1UT_CODE_BEGIN + 50,

    MSG_ID_C2K_IRAT_CODE_BEGIN, MSG_ID_C2K_IRAT_CODE_TAIL  = MSG_ID_C2K_IRAT_CODE_BEGIN + 50,

    MSG_ID_MON_CODE_BEGIN, MSG_ID_MON_CODE_TAIL = MSG_ID_MON_CODE_BEGIN + 1000,
    
    MSG_ID_NVRAM_TEST_CODE_BEGIN, MSG_ID_NVRAM_TEST_CODE_TAIL = MSG_ID_NVRAM_TEST_CODE_BEGIN + 20,

    MSG_ID_STUB_CODE_BEGIN, MSG_ID_STUB_CODE_TAIL = MSG_ID_STUB_CODE_BEGIN + 200,

    MSG_ID_L4C2K_CODE_BEGIN, MSG_ID_L4C2K_CODE_TAIL = MSG_ID_L4C2K_CODE_BEGIN + 30,

    MSG_ID_RSVAC_CODE_BEGIN, MSG_ID_RSVAC_CODE_TAIL = MSG_ID_RSVAC_CODE_BEGIN + 50,

    MSG_ID_MD_BOOT_MODE_BEGIN, MSG_ID_MD_BOOT_MODE_TAIL = MSG_ID_MD_BOOT_MODE_BEGIN + 10,

    MSG_ID_ATPIO_CODE_BEGIN, MSG_ID_ATPIO_CODE_TAIL = MSG_ID_ATPIO_CODE_BEGIN + 20,
    
    MSG_ID_L4B_CODE_BEGIN, MSG_ID_L4B_CODE_TAIL = MSG_ID_L4B_CODE_BEGIN + 500,
    
    MSG_ID_L4BPDN_CODE_BEGIN, MSG_ID_L4BPDN_CODE_TAIL = MSG_ID_L4BPDN_CODE_BEGIN + 250,

    MSG_ID_D2_CODE_BEGIN, MSG_ID_D2_CODE_TAIL = MSG_ID_D2_CODE_BEGIN + 250,

    MSG_ID_DDM_CODE_BEGIN, MSG_ID_DDM_CODE_TAIL = MSG_ID_DDM_CODE_BEGIN + 160,

    MSG_ID_SIMMNGR_CODE_BEGIN, MSG_ID_SIMMNGR_CODE_TAIL = MSG_ID_SIMMNGR_CODE_BEGIN + 100,

    MSG_ID_WO_CODE_BEGIN, MSG_ID_WO_CODE_TAIL = MSG_ID_WO_CODE_BEGIN + 100,

    MSG_ID_TCPIP_BEGIN, MSG_ID_TCPIP_TAIL = MSG_ID_TCPIP_BEGIN + 50,

    MSG_ID_BIP_CODE_BEGIN, MSG_ID_BIP_CODE_TAIL = MSG_ID_BIP_CODE_BEGIN + 100,

    MSG_ID_RR_SMP_BEGIN, MSG_ID_RR_SMP_TAIL = MSG_ID_RR_SMP_BEGIN + 10,

    MSG_ID_IMSM_CODE_BEGIN, MSG_ID_IMSM_CODE_TAIL = MSG_ID_IMSM_CODE_BEGIN + 20,

    MSG_ID_SSDS_CODE_BEGIN, MSG_ID_SSDS_CODE_TAIL = MSG_ID_SSDS_CODE_BEGIN + 30,

    /* Reserved for CCCI, please should add mew MSG group before this line */
    MSG_ID_CCCI_MSG_CODE_BEGIN = 0xFF00, MSG_ID_CCCI_MSG_CODE_TAIL = MSG_ID_CCCI_MSG_CODE_BEGIN + 254,
    
    MSG_ID_CODE_END,  
    END_OF_MSG_ID_BEGIN = MSG_ID_CODE_END,
    END_OF_MSG_ID_TAIL = MSG_ID_CODE_END,
} MSG_ID_CODE_BEGIN;

#ifdef GEN_FOR_PC
    #define MODULE_MSG_BEGIN(BEGIN_POS)  typedef enum __cgen_msg_type_id_##BEGIN_POS{MSG_TAG_##BEGIN_POS = BEGIN_POS,
    #define MODULE_MSG_END(END_POS) MSG_ID_CGEN_PARSE_LAST_ID=END_POS }_cgen_msg_type_id_##END_POS;
#else
    #define MODULE_MSG_BEGIN(BEGIN_POS)   enum { MSG_TAG_##BEGIN_POS = BEGIN_POS,
    #define MODULE_MSG_END(END_POS)     };    
#endif /* GEN_FOR_PC */

/* user defined name */
#define CMUX_MSG_CODE_BEGIN                    MSG_ID_CMUX_CODE_BEGIN
#define DRIVER_MSG_CODE_BEGIN                  MSG_ID_DRIVER_CODE_BEGIN
#define FT_MSG_CODE_BEGIN                      MSG_ID_FT_CODE_BEGIN
#define L1_MSG_CODE_BEGIN                      MSG_ID_L1_CODE_BEGIN
#define TST_MSG_CODE_BEGIN                     MSG_ID_TST_CODE_BEGIN

MODULE_MSG_BEGIN(END_OF_MSG_ID_BEGIN)
    MSG_ID_END = END_OF_MSG_ID_BEGIN,
MODULE_MSG_END(END_OF_MSG_ID_TAIL)

#endif /* MODULE_MSG_RANGE_H */
