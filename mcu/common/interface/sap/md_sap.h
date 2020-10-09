
#include "sap_range.h"

#ifndef MD_SAP_H
#define MD_SAP_H

MODULE_SAP_BEGIN(SAP_ID_MD_CODE_BEGIN)
    L1_L4C_SAP = SAP_ID_MD_CODE_BEGIN,
    L4C_L1_SAP,
    L4C_UL1_SAP,
    L4C_EL1_SAP,
    ADR_DRLC_SAP,
    ADR_TL1_SAP,
    ADR_UL1_SAP,
    ADR_ADR_SAP,
    AS_L4C_SAP,
    ATCI_SAP,
    //PROXY_ATCI_SAP,
    ATP_IO_SAP,
    BMC_DRLC_SAP,
    CISS_CISS_SAP,
    CSCE_CSE_SAP,
    CSCE_MEME_SAP,
    CSCE_SIBE_SAP,
    CSCE_SLCE_SAP,
    CSCE_TL1_SAP,
    CSCE_UL1_SAP,
    CSCE_USIME_SAP,
    CSCE_LCSCE_SAP,
    LCSCE_LMEME_SAP,
    LCSCE_MEME_SAP,
    LCSCE_UL1_SAP,
    CSE_MEME_SAP,
    CSE_RSVAU_SAP,
    CSE_SIBE_SAP,
    CSE_SLCE_SAP,
    CSE_TL1_SAP,
    CSE_UL1_SAP,
    CSM_L2R_SAP,
    CSM_L4C_SAP,
    CSM_SIM_SAP,
    CSM_T30_SAP,
    CSM_TDT_SAP,
    CSR_DRLC_SAP,
    CSR_L1AUD_SAP,
    CSR_UMAC_SAP,
    DRIVER_L1_SAP,
    DRLC_UMAC_SAP,
    DRLC_URLC_SAP,
    DT_L4C_SAP,
    EM_L1_SAP,
    EM_PS_SAP,
    EXTMODEM_L4C_SAP,
    FA_RA_SAP,
    FT_UL1TST_SAP,
    GAS_COMMON_SAP,
    GAS_CSCE_SAP,
    EAS_CSCE_SAP,
    GAS_MEME_SAP,
    EAS_MEME_SAP,
    GAS_MEME_MEAS_REPORT_SAP,
    GAS_RRCE_SAP,
    EAS_RRCE_SAP,
    GAS_RSVAG_SAP,
    GAS_UL2_SAP,
    GAS_UL2D_SAP,
    GAS_USIME_SAP,
    GAS_EAS_SAP,
    GMM_RLC_SAP,
    GMM_SM_SAP,
    GMMREG_SAP,
    GPS_L1_SAP,
    GPS_SUPL_SAP,
    GPS_UL1_SAP,
    GPS_EL1_SAP,
    L1_AS_SAP,
    L1_EM_SAP,
    L1_GAS_SAP,
    L1_L1_SAP,
    L1_LAPDM_SAP,
    L1_MPAL_SAP,
    L1_GL1PCORE_SAP,
    L1_UAS_SAP,
    L1HISR_AS_SAP,
    L1HISR_GAS_SAP,
    L2R_RLP_SAP,
    L2R_SMU_SAP,
    L4_AUD_SAP,
    L4C_MEME_SAP,
    L4C_RRCE_SAP,
    L4C_RATDM_SAP,
    L4C_RRLP_SAP, //agps_up_cp_conflict
    L4C_SAP,
    PSDM_L4C_SAP,
    LAPDM_MPAL_SAP,
    LLC_GMM_SAP,
    LLC_RLC_SAP,
    LLC_SMS_SAP,
    LLC_SNDCP_SAP,
    MAC_L1_SAP,
    MAC_MPAL_SAP,
    MAC_RRM_SAP,
    MEME_DRLC_SAP,
    MEME_SIBE_SAP,
    MEME_SLCE_SAP,
    MEME_TL1_SAP,
    MEME_TL1_MEAS_REPORT_SAP,
    MEME_UL1_SAP,
    MEME_UMAC_SAP,
    MEME_LMEME_SAP,
    LMEME_UL1_SAP,
    MM_AS_SAP,
    MM_CC_SAP,
    MM_RATCM_SAP,
    MM_RATDM_SAP,
    MM_SIM_SAP,
    MM_SMS_SAP,
    MM_SS_SAP,
    MMREG_SAP,
    MNCC_SAP,
    MNSMS_SAP,
    MNSS_SAP,
    MPAL_L1_SAP,
    MPAL_UL1_SAP,
    PDCP_DRLC_SAP,
    PDCP_RABM_SAP,
    PDCP_URLC_SAP,
    PHB_L4C_SAP,
    PS_SIM_SAP,
    PSDM_SAP,
    RAC_L4C_SAP,
    RAC_MEME_SAP,
    RATCM_BMC_SAP,
    RATCM_CSCE_SAP,
    RATCM_CSE_SAP,
    RATCM_CSR_SAP,
    RATCM_GAS_SAP,
    RATCM_L4C_SAP,
    RATCM_LLC_SAP,
    RATCM_RATDM_SAP,
    RATCM_RLC_SAP,
    RATCM_RRCE_SAP,
    RATCM_SLCE_SAP,
    RATCM_URLC_SAP,
    RATCM_USIME_SAP,
    RATCM_UL2_SAP,
    RATCM_UL2D_SAP,
    RATDM_RABM_SAP,
    RATDM_RATDM_SAP,
    RATDM_SNDCP_SAP,
    RATDM_URLC_SAP,
    RATDM_PDCP_SAP,
    RATDM_EPDCP_SAP,
    LTM_EPDCP_SAP = RATDM_EPDCP_SAP,
    RATDM_EMAC_SAP,
    LTM_EMAC_SAP = RATDM_EMAC_SAP,
    RLC_MAC_SAP,
    RLC_MPAL_SAP,
    MPAL_MPAL_SAP,
    RLC_REASM_SAP,
    RLC_RRM_SAP,
    RLP_RA_SAP,
    RR_PRR_SAP,
    RR_RRLP_SAP,
    RRCE_BMC_SAP,
    RRCE_CSCE_SAP,
    RRCE_DRLC_SAP,
    RRCE_MEME_SAP,
    RRCE_PDCP_SAP,
    RRCE_RABM_SAP,
    RRCE_RRCE_SAP,
    RRCE_SIBE_SAP,
    RRCE_SLCE_SAP,
    RRCE_TL1_SAP,
    RRCE_UL1_SAP,
    RRCE_UMAC_SAP,
    RRCE_URLC_SAP,
    RRCE_USIME_SAP,
	RRCE_LRRCE_SAP,//TISE PAGING,LRRCE->RRCE
	LRRCE_LURLC_SAP,//TISE PAGING,LURLC->LRRCE
    RRLP_GAS_SAP,
    RRLP_RATCM_SAP,
    RRM_LAPDM_SAP,
    RRM_MPAL_SAP,
    RSVAK_SAP,
    RSVAU_UL1_SAP,
    SEQ_SEQ_SAP,
    SEQ_UL1_SAP,
    SIBE_SLCE_SAP,
    SIBE_TL1_SAP,
    SIBE_UL1_SAP,
    SLCE_BMC_SAP,
    SLCE_CSR_SAP,
    SLCE_PDCP_SAP,
    SLCE_RABM_SAP,
    SLCE_RSVAU_SAP,
    SLCE_SLCE_SAP,
    SLCE_TL1_SAP,
    SLCE_UL1_SAP,
    SLCE_UL2SEQ_SAP,
    SLCE_UMAC_SAP,
    SLCE_URLC_SAP,
    SM_RATDM_SAP,
    SM_SNDCP_SAP,
    SME_TIMER_SAP,
    TCM_PAM_SAP, // UGTCM <--> PAM
    SMREG_SAP, // PAM <--> SM
    SMSAL_AS_SAP,
    SMSAL_L4C_SAP,
    SMSAL_RATCM_SAP,
    SMU_L4C_SAP,
    SNDCP_REG_SAP,
    T30_FA_SAP,
    T30_L4C_SAP,
    L4C_RAT_TCM_SAP,
    RAT_TCM_TCM_SAP,
    TCM_RATDM_SAP,
    TL1_FTA_SAP,
    TL1_LL1_SAP,
    TL1_TL1_SAP,
    TL1_TL1DATA_SAP,
    TL1_TL1HISR_SAP,
    UAGPS_CP_CSCE_SAP,
    UAGPS_CP_L4C_SAP,
    UAGPS_CP_MEME_SAP,
    UAGPS_CP_RATCM_SAP,
    UAGPS_CP_SIBE_SAP,
    UAS_GAS_SAP,
    UAS_L1_SAP,
    UEM_L4C_SAP,
    UL1_L1_SAP,
    UL1_L4C_SAP,
    UL1_MPAL_SAP,
    UL1_UL1_SAP,
    UL1_UL1DATA_SAP,
    UL1C_SAP,
    UL1HISR_UL1_SAP,
    UL1SM_SAP,
    UL1_L1SP_SAP,
    UL1TST_FT_SAP,
    UMAC_SEQ_SAP,
    UMAC_TL1_SAP,
    UMAC_TL1DATA_SAP,
    UMAC_UL1_SAP,
    UMAC_UL1PCORE_SAP,
    UMAC_UL2ACCRXHISR_SAP,
    UMAC_UMAC_SAP,
    URLC_SEQ_SAP,
    URLC_UL1_SAP,
    URLC_UL2ACCRXHISR_SAP,
    URLC_UMAC_SAP,
    URLC_URLC_SAP,
    URR_RSVAU_SAP,
    URR_SAP,
    LURR_SAP,
    GISE_SAP,
    EAS_SAP,
    EAS_RSVAE_SAP,
    WISE_L4C_SAP,
    DRLC_L2HWREASSIM_SAP,
    UL2_L2HWACCSIM_SAP,
    UL2_L2HWREASMSIM_SAP,
    L1SIM_MAIN_TASK_SAP,
    PROCCPU_TASK_SAP,
    HAPLUS_TASK_SAP,
    UEGW_L4C_SAP,
    VMMI_L4C_SAP,
    /* Add for LTE LAS related */
    ERRC_LAS_SAP,
    LAS_EL1_SAP,
    LAS_EL1MPC_SAP,
    MOB_LMOB_SAP,
    LMOB_EL1_SAP,
    LMOB_EL1MPC_SAP,
    LMOB_LMEME_SAP,
    LMOB_GISE_SAP,
    MOB_LMEME_SAP, //for original LMOB to LMEME_FDD/TDD usage
    MOB_GISE_SAP, //for original LMOB to GISE usage
    /* Add by LTE SS for LTE related */
    CLDMACORE_EL1_SAP,
    ERRC_EL1_SAP,
    ERRC_EL1MPC_SAP,
    EMAC_EL1_SAP,
    EL1HISR_EL1_SAP,
    EL1_EL1_SAP,
    EL1_EL1MPC_SAP,
    EL1_EL1_PHS_SAP,
    EL1_EL1_TX_SAP,
    EL1_EL1_LOW_PRIO_SAP,
    EL1_EL2_SAP,
    EL1_L4C_SAP,
    EMAC_EL1TX_SAP,
    EL1_EL1TX_SAP,
    LTE_DYN_SAP,
    LTT_SAP, /* SAP added for LTT module use */
	UTT_SAP,
    L1_MLL1_SAP, /* for MM LL1 sap*/
    MLL1_L1_SAP,
    UL1_MLL1_SAP,
    MLL1_UL1_SAP,
    TL1_MLL1_SAP,
    MLL1_TL1_SAP,
    EL1_MLL1_SAP,
    MLL1_EL1_SAP,
    LTE_TIMER_SAP,
    UPCM_SAP,
    UPCM_IMS_SAP,
    UPCM_DESC_SAP,
    UPCM_UL_IP_TAG_ALL_PKT_SAP,
    UPCM_DL_IP_TAG_ALL_PKT_SAP,
    LTM_SAP,
    HISR_EMAC_SAP,
    SIM_SIM_SAP,
    L4C_SM_SAP,

    /* TFTLIB */
    TFTLIB_SAP,
    TFTLIB2_SAP,
    TFTLIB_DHL_SAP,

    /* NWSEL */
    RAC_NWSEL_SAP,
    NWSEL_MM_SAP,
    NWSEL_RATCM_SAP,
    NWSEL_RATDM_SAP,
    PAM_NWSEL_SAP,
    NWSEL_USIME_SAP,
    DDM_NWSEL_SAP,
    DHL_NWSEL_SAP,
    
    /** ESM related SAP **/
    SM_ESM_SAP,
    ESM_RATDM_SAP,
    ESM_LTM_SAP = ESM_RATDM_SAP,
    NIL_ESM_SAP,

    /** ETC related SAP **/
    L4C_ESM_SAP, // L4C <--> ESM
    ESMREG_SAP, // PAM <--> ESM
    UPCM_ETC_SAP,
    ETC_EMM_SAP,

    /** EVAL related SAP **/
    NWSEL_EVAL_SAP,
    RAC_EVAL_SAP,
    TCM_EVAL_SAP,
    L4C_EVAL_SAP,
    SMS_EVAL_SAP,
    SMSAL_EVAL_SAP,
    CISS_EVAL_SAP,
    EVAL_EMM_SAP,
    EVAL_ESM_SAP,
    EVAL_ETC_SAP,
    EVAL_ERRC_SAP,    
	EVAL_ERRC_TEMP_SAP,
	EVAL_UPCM_SAP,

    /* EMM External Related SAP (by layer order) */
    EMM_ERRC_SAP,
    ESM_EMM_SAP,
    MM_EMM_SAP,

    /* EMM Internal Related SAP (by alphabetical order) */
    EMM_CALL_CONN_SAP,
    EMM_CALL_ERRCIF_SAP,
    EMM_CALL_ESMIF_SAP,
    EMM_CALL_EVALIF_SAP,
    EMM_CALL_EVTCTRL_SAP,
    EMM_CALL_MMIF_SAP,
    EMM_CALL_NASMSG_SAP,
    EMM_CALL_PLMNSEL_SAP,
    EMM_CALL_RATBAND_SAP,
    EMM_CALL_RATCHG_SAP,
    EMM_CALL_REG_SAP,
    EMM_CALL_SEC_SAP,
    EMM_CALL_SV_SAP,
    EMM_CALL_TIMERMNG_SAP,
    EMM_CMNPROC_ERRCIF_SAP,
    EMM_CMNPROC_EVALIF_SAP,
    EMM_CMNPROC_NASMSG_SAP,
    EMM_CMNPROC_PLMNSEL_SAP,
    EMM_CMNPROC_REG_SAP,
    EMM_CONN_ERRCIF_SAP,
    EMM_CONN_ESMIF_SAP,
    EMM_CONN_ETCIF_SAP,
    EMM_CONN_EVALIF_SAP,
    EMM_CONN_NASMSG_SAP,
    EMM_CONN_PLMNSEL_SAP,
    EMM_CONN_RATBAND_SAP,
    EMM_CONN_RATCHG_SAP,
    EMM_CONN_REG_SAP,
    EMM_CONN_SEC_SAP,
    EMM_CONN_SV_SAP,
    EMM_CONN_TIMERMNG_SAP,
    EMM_ERRCIF_ESMIF_SAP,
    EMM_ERRCIF_ETCIF_SAP,
    EMM_ERRCIF_NASMSG_SAP,
    EMM_ERRCIF_PLMNSEL_SAP,
    EMM_ERRCIF_RATBAND_SAP,
    EMM_ERRCIF_RATCHG_SAP,
    EMM_ERRCIF_REG_SAP,
    EMM_ERRCIF_SEC_SAP,
    EMM_ERRCIF_SV_SAP,
    EMM_ESMIF_NASMSG_SAP,
    EMM_ESMIF_RATCHG_SAP,
    EMM_ESMIF_REG_SAP,
    EMM_ESMIF_SV_SAP,
    EMM_ESMIF_PLMNSEL_SAP, // for IMS
    EMM_ESMIF_SEC_SAP, // for IMS
    EMM_ESMIF_TIMERMNG_SAP,
    EMM_ETCIF_NASMSG_SAP,
    EMM_ETCIF_REG_SAP,
    EMM_ETCIF_SV_SAP,
    EMM_ETCIF_TIMERMNG_SAP,
    EMM_ETCIF_PLMNSEL_SAP,
    EMM_EVALIF_NASMSG_SAP,
    EMM_EVALIF_PLMNSEL_SAP,
    EMM_EVALIF_RATBAND_SAP,
    EMM_EVALIF_RATCHG_SAP,
    EMM_EVALIF_REG_SAP,
    EMM_EVALIF_SEC_SAP,
    EMM_EVALIF_SV_SAP,
    EMM_EVALIF_TIMERMNG_SAP,
    EMM_EVALIF_ERRCIF_SAP,
    EMM_EVTCTRL_PLMNSEL_SAP,
    EMM_EVTCTRL_RATBAND_SAP,
    EMM_EVTCTRL_RATCHG_SAP,
    EMM_EVTCTRL_REG_SAP,
    EMM_EVTCTRL_SV_SAP,
    EMM_EVTCTRL_TIMERMNG_SAP,
    EMM_MMIF_RATCHG_SAP,
    EMM_MMIF_REG_SAP,
    EMM_MMIF_TIMERMNG_SAP,
    EMM_NASMSG_PLMNSEL_SAP,
    EMM_NASMSG_REG_SAP,
    EMM_NASMSG_SEC_SAP,
    EMM_PLMNSEL_RATCHG_SAP,
    EMM_PLMNSEL_REG_SAP,
    EMM_PLMNSEL_SEC_SAP,
    EMM_PLMNSEL_SV_SAP,
    EMM_PLMNSEL_TIMERMNG_SAP,
    EMM_RATBAND_RATCHG_SAP,
    EMM_RATBAND_REG_SAP,
    EMM_RATBAND_SV_SAP,
    EMM_RATBAND_TIMERMNG_SAP,
    EMM_RATBAND_PLMNSEL_SAP,
    EMM_RATCHG_REG_SAP,
    EMM_RATCHG_SEC_SAP,
    EMM_RATCHG_SV_SAP,
    EMM_RATCHG_TIMERMNG_SAP,
    EMM_REG_SEC_SAP,
    EMM_REG_SV_SAP,
    EMM_REG_TIMERMNG_SAP,
    EMM_SEC_SV_SAP,
    EMM_SEC_TIMERMNG_SAP,
    EMM_SV_TIMERMNG_SAP,

    /** ERRC related SAP **/
    //internal event use
    EVTH_ALL_SAP,
    RCM_CONN_SAP,
    RCM_MOB_SAP,
    RCM_SPV_SAP,
    RCM_CEL_SAP,
    RCM_LCEL_SAP,
    CEL_CHM_SAP,
    CEL_CONN_SAP,
    CEL_MOB_SAP,
    CEL_SPV_SAP,
    CEL_SYS_SAP,
    CHM_CONN_SAP,
    CHM_MOB_SAP,
    CHM_SPV_SAP,
    CHM_SYS_SAP,
    CONN_MOB_SAP,
    CONN_SPV_SAP,
    MOB_SPV_SAP,
    SPV_SYS_SAP,
    SPV_LSYS_SAP,
    LCEL_CEL_SAP,
    LCEL_SPV_SAP,
    LSYS_SYS_SAP,
    ERRC_CEL_SAP,
    ERRC_CHM_SAP,
    ERRC_CONN_SAP,
    ERRC_MOB_SAP,
    ERRC_RCM_SAP,
    ERRC_SPV_SAP,
    ERRC_SYS_SAP,
    ERRC_LCEL_SAP,
    ERRC_LSYS_SAP,
    ERRC_LBS_SAP,
    ERRC_GPS_SAP,

    /* LTE L2 */
    ERLCDL_ERLCUL_SAP,
    ERLCUL_EMAC_SAP,
    ERLCDL_EMAC_SAP,
    EPDCP_ERLCDL_SAP,
    EPDCP_ERLCUL_SAP,
    EPDCP_EMAC_SAP,
    EPDCP_EPDCP_SAP,
    EMAC_EMAC_SAP,
    ERRC_EMAC_SAP,
    ERRC_ERLCUL_SAP,
    ERRC_ERLCDL_SAP,
    ERRC_EPDCP_SAP,
    ERRC_EL2TASK_SAP,

    // MT6293 New Architecture
    EL2_ALL_SAP,
    EL2_DEBUG_SAP,
    EMAC_EMACDL_SAP,
    EMACDL_EMACMCH_SAP,
    EMACDL_ERLCDL_SAP,
    EMACDL_EPDCP_SAP,
    ERRC_EMACMCH_SAP,
    EMACMCH_EL1_SAP,
    ERLCDL_EMACMCH_SAP,
    ERRC_EL2HPORTAL_SAP,
    ERRC_EMACDLPORTAL_SAP,
    ERRC_EL2PORTAL_SAP,

    /* MRS */
    MRS_CAS_SAP,
    MRS_RAC_SAP,
    MRS_RRM_SAP,
    MRS_CSCE_SAP,
    MRS_RRCE_SAP,
    MRS_USIME_SAP,
    MRS_SIM_SAP,
    MRS_EAS_SAP,

    /* RSVAS */
    RSVAS_SAP,
    RSVAS_NIL_SAP,
    RSVAS_RSVAU_SAP,
    RSVAS_L4C_SAP,
    RSVAS_MRS_SAP,
    RSVAS_URR_SAP,
    RSVAS_RRCE_SAP,
    RSVAS_CSCE_SAP,
    RSVAS_UL2_SAP,
    RSVAS_UL2D_SAP,
    RSVAS_RRM_SAP,
    RSVAS_MPAL_SAP,
    RSVAS_ERRC_SAP,
    RSVAS_EL2HPORTAL_SAP,
    RSVAS_EMACDLPORTAL_SAP,
    RSVAS_EL2PORTAL_SAP,
    RSVAS_UL1_SAP,
    RSVAS_TL1_SAP,
    RSVAS_L1_SAP,
    RSVAS_LL1_SAP,
    RSVAS_EL1_SAP,
    RSVAS_LAS_SAP,

    /* EM SAP */
    EM_EL2_SAP,
    EM_EL1_SAP,
    SM_SM_SAP,
		MM_MM_SAP,

	/*RAC GAS SAP for MMDS_DC*/
	RAC_GAS_SAP,

    RAT_TCM_SAP,
    TCM_SAP,
    GAS_TL1_SAP,
    GAS_EL1_SAP,

    /* IMC */
    IMC_IMC_SAP,
    ATP_IMC_SAP,
    IMC_LTECSR_SAP,
    IMCB_IMC_SAP,
    DHL_IMC_SAP,
    IMC_UPCM_SAP,
    IMC_LBS_SAP,

    /* LTECSR */
    LTECSR_ERRC_SAP,
    LTECSR_DHL_SAP,

    /* EL1 to LTECSR */
    EL1_LTECSR_SAP,

    /* SDM */
    SDM_ATP_SAP,
    SDM_IMC_SAP,
    SDM_IWLAN_SAP,

    /* VDM */
    VDM_ATP_SAP,
    VDM_IMC_SAP,
    VDM_L4C_SAP,
    VDM_CTRL_TRK_SAP,
    VDM_CTRL_ADS_SAP,
    VDM_CTRL_VCC_SAP,
    VDM_TRK_ADS_SAP,
    VDM_TRK_VCC_SAP,
    VDM_ADS_VCC_SAP,

    /* IMCSMS */
    IMCSMS_IMC_SAP,

    SMSAL_SMSAL_SAP,

    /* LPP SAP */
    LCSP_GNSS_SAP,
    LPP_EVAL_SAP,
    LPP_ERRC_SAP,
    LPP_EL1MPC_SAP,
    LPP_L4C_SAP,
    LPP_LBS_SAP,
    L4C_LBS_SAP,
    ATCI_LBS_SAP,

/* U4G adaptor.*/
    MLL1_UL1B_SAP,
    UMAC_UL1B_SAP,
    SLCE_UL1B_SAP,
    MEME_UL1B_SAP,
    SIBE_UL1B_SAP,
    ADR_UL1B_SAP,
    U4GL1_UL1B_SAP,

    ERRC_EL1B_SAP,
    EMAC_EL1B_SAP,
    EL1B_EL1B_SAP,
    EMAC_EL1BTX_SAP,
    EL1B_EL1BTX_SAP,
    U4GL1_EL1B_SAP,

    /* MBMSAL SAP */
    MBMSAL_SAP,
    MBMSAL_ERRC_SAP,

    /* GL1TST SAP */
    GL1TST_FT_SAP,
    FT_GL1TST_SAP,

    /*PCORE_UMAC_HISR SAP*/
    PCOREHISR_UMAC_SAP,
    /* L2 copro log DMA sap */
    L2CP_LOG_ENABLE_SAP,
    L2CP_POLL_PERIOD_LV_SAP,
    L2CP_BLOCK_SIZE_SAP,

    /* GMSS SAP */
    RAC_GMSS_SAP,
    GMSS_NWSEL_SAP,
    GMSS_LAS_SAP,
    GMSS_SAP,

    L4C_ME_SAP,
    /* dynamic SBP switch */
    L4C_EL2_SAP,

    /* Event scheduler: force timer expiry */
    NIL_RRCE_EXPIRY_TIMER_SAP,

    EM_LUMAC_SAP,

    /* LWA */
    L4C_ERRC_SAP,

    /* L4C-MMRF SAP */
    L4C_MMRF_SAP,

    /* L4C */
    L4C_LTECSR_SAP,

    LTECSR_ATP_SAP,

    /* C2K SAP IDs */
    CLEC_CPSW_SAP,
    CLEC_CVAL_SAP,
    CLEC_L1D_MDM_SAP,
    CLEC_CIPC_SAP,
    CPSW_XRLP_SAP,
    CPSW_L1D_MDM_SAP,
    CPSW_CVAL_SAP,
    CPSW_CVAL_ATC_SAP,
    CPSW_CVAL_STORAGE_SAP,
    CPSW_CSS_SAP,
    CPSW_EVCLC_SAP,
    CPSW_DBM_SAP,
    CPSW_CUIM_PROXY_SAP,
    CPSW_SLT_SAP,
    CPSW_CHWD_SAP,
    CPSW_CIOP_SAP,
    CPSW_S_CHLP_SAP,
    CPSW_S_CPSW_SAP,
    CPSW_SYSTEM_SAP,

    LMD_XRLP_SAP,
    LMD_CIPC_SAP,
    LMD_L1D_MDM_SAP,
    LMD_CPSW_SAP,
    LMD_LMDS_SAP,
    LMD_CHWD_SAP,
    LMD_CVAL_SAP,
    LMD_CVAL_ATC_SAP,
    LMD_CVAL_STORAGE_SAP,
    LMDS_CPSW_SAP,

    CVAL_CHWD_SAP,
    CVAL_ATC_CHWD_SAP,
    CVAL_STORAGE_CHWD_SAP,
    CVAL_CSS_SAP,
    CVAL_XRLP_SAP,
    CVAL_EVRMC_SAP,
    CVAL_DBM_SAP,
    CVAL_CUIM_SAP,
    CVAL_CIOP_SAP,

    CHLP_CVAL_SAP,
    CVAL_CVAL_ATC_SAP,
    CVAL_CLEC_SAP,
    CVAL_CMON_SAP,
    CVAL_CHSC_SAP,
    CVAL_CPSW_SAP,
    CVAL_CHLP_SAP,
    CVAL_CSEC_SAP,
    CVAL_VMMI_SAP,

    CVAL_ATC_XRLP_SAP,
    CVAL_ATC_EVRMC_SAP,
    CVAL_ATC_DBM_SAP,
    CVAL_ATC_CUIM_SAP,
    CVAL_ATC_CIOP_SAP,
    CVAL_ATC_CHSC_SAP,
    CVAL_ATC_CMON_SAP,
    CVAL_ATC_EVRCP_SAP,
    CHLP_CVAL_ATC_SAP,
    CVAL_ATC_SYSTEM_SAP,

    CVAL_STORAGE_XRLP_SAP,
    CVAL_STORAGE_EVRMC_SAP,
    CVAL_STORAGE_DBM_SAP,
    CVAL_STORAGE_CUIM_SAP,
    CVAL_STORAGE_CIOP_SAP,
    CHLP_CVAL_STORAGE_SAP,
    CHLP_CUIM_PROXY_SAP,
    CHLP_CIOP_SAP,
    CHLP_DBM_SAP,
    CHLP_CPSW_SAP,
    CHLP_XRLP_SAP,
    CHLP_CSS_SAP,
    CHLP_EVCLC_SAP,
    CHLP_EVFCP_SAP,
    CHLP_EVRCP_SAP,
    CHLP_EVSLC_SAP,
    CHLP_CIPC_SAP,
    CHLP_CSEC_SAP,
    CIOP_XRLP_SAP,
    CSEC_CVAL_SAP,
    CSEC_CVAL_ATC_SAP,
    CSEC_CVAL_STORAGE_SAP,
    CSEC_CIOP_SAP,
    CHSC_CSTUB_SAP,
    CHSC_EVRMC_SAP,
    CHSC_L1D_MDM_SAP,
    CHSC_CPSW_SAP,
    CMON_SAP,

    CSS_CHSC_SAP,
    CSS_CHLP_SAP,
    CSS_CVAL_SAP,
    CSS_CVAL_ATC_SAP,
    CSS_CVAL_STORAGE_SAP,
    CSS_DBM_SAP,
    CSS_CUIM_PROXY_SAP,
    CSS_CPSW_SAP,
    CSS_EVCLC_SAP,
    CSS_EVSLC_SAP,
    CSS_EVRMC_SAP,

    EVRMC_CSS_SAP,
    EVRMC_EVCLC_SAP,
    EVRMC_CHLP_SAP,
    EVRMC_CHWD_SAP,
    EVRMC_CIPC_SAP,
    EVRMC_CLEC_SAP,
    EVRMC_CIOP_SAP,
    EVSLC_EVCLC_SAP,
    EVSLC_EVRMC_SAP,
    EVSLC_CPSW_S_SAP,
    EVSLC_SLT_SAP,
    EVFCP_EVRCP_SAP,
    EVFCP_EVRMC_SAP,
    EVFCP_EVCLC_SAP,
    EVFCP_EVSLC_SAP,
    EVFCP_CHLP_SAP,
    EVRCP_EVRMC_SAP,
    EVRCP_EVSLC_SAP,
    EVRCP_EVCLC_SAP,
    EVRCP_CHLP_SAP,
    EVRCP_CSS_SAP,
    EVRCP_CHWD_SAP,
    EVCLC_CHSC_SAP,
    EVCLC_CVAL_SAP,
    EVCLC_CVAL_STORAGE_SAP,
    EVCLC_CVAL_ATC_SAP,
    EVCLC_ERRC_SAP,
    EVCLC_L1D_MDM_SAP,
    EVCLC_DBM_SAP,
    EVCLC_SLT_SAP,
    EVCLC_CHWD_SAP,
    L1D_MDM_CVAL_SAP,
    L1D_MDM_CVAL_STORAGE_SAP,
    L1D_MDM_CVAL_ATC_SAP,
    L1D_MDM_CLEC_SAP,
    L1D_MDM_CHWD_SAP,
    L1D_MDM_CSS_SAP,
    L1D_MDM_CIPC_SAP,
    CUIM_PROXY_UIM_SAP,
    XRLP_SAP,
    LMD_SAP,
    LMDS_SAP,
    CHLP_SAP,
    CPSW_SAP,
    EVRCP_SAP,
    EVFCP_SAP,
    EVCLC_SAP,
    CVAL_SAP,
    CVAL_ATC_SAP,
    CSS_SAP,
    EVSLC_SAP,
    EVRMC_SAP,
    CLEC_SAP,
    EVL1_C2K_HWSIM_SAP,

    CLEC_CHSC_SAP,


    CHSC_RTTACTIONHISR_SAP,
    LMD_RTTACTIONHISR_SAP,
    L1D_MDM_RTTACTIONHISR_SAP,
    CPSW_RTTACTIONHISR_SAP,
    XRLP_RTTACTIONHISR_SAP,
    EVCLC_RTTACTIONHISR_SAP,


    CHSC_DOACTIONHISR_SAP,
    LMD_DOACTIONHISR_SAP,
    EVRCP_DOACTIONHISR_SAP,
    EVFCP_DOACTIONHISR_SAP,
    EVRMC_DOACTIONHISR_SAP,
    EVCLC_DOACTIONHISR_SAP,


    CHSC_RTTSLOTHISR_SAP,
    LMD_RTTSLOTHISR_SAP,
    L1D_MDM_RTTSLOTHISR_SAP,
    CPSW_RTTSLOTHISR_SAP,
    XRLP_RTTSLOTHISR_SAP,
    EVCLC_RTTSLOTHISR_SAP,


    CHSC_DOSLOTHISR_SAP,
    LMD_DOSLOTHISR_SAP,
    EVRCP_DOSLOTHISR_SAP,
    EVFCP_DOSLOTHISR_SAP,
    EVRMC_DOSLOTHISR_SAP,
    EVCLC_DOSLOTHISR_SAP,


    CHSC_FHMSGDELI_HISR_SAP,
    LMD_FHMSGDELI_HISR_SAP,
    EVRCP_FHMSGDELI_HISR_SAP,
    L1D_MDM_FHMSGDELI_HISR_SAP,
    CPSW_FHMSGDELI_HISR_SAP,
    EVFCP_FHMSGDELI_HISR_SAP,
    EVRMC_FHMSGDELI_HISR_SAP,
    EVCLC_FHMSGDELI_HISR_SAP,


    CHSC_SHMSGDELI_HISR_SAP,
    LMD_SHMSGDELI_HISR_SAP,
    EVRCP_SHMSGDELI_HISR_SAP,
    L1D_MDM_SHMSGDELI_HISR_SAP,
    CPSW_SHMSGDELI_HISR_SAP,
    EVFCP_SHMSGDELI_HISR_SAP,
    EVRMC_SHMSGDELI_HISR_SAP,
    EVCLC_SHMSGDELI_HISR_SAP,
    CSS_VMMI_SAP,
    LMD_SPCH_SAP,
    CHLP_SPY_SAP,

    DBM_SAP,
    CVAL_EVSLC_SAP,

    /*For new irat sap */
    GMSS_CSS_SAP,
    RSVAS_CPSW_SAP,
    RSVAS_CHSC_SAP,
    CPSW_ERRC_SAP,
    CHSC_MLL1_SAP,
    VDM_CVAL_SAP,
    SDM_CVAL_SAP,
    EVAL_CPSW_SAP,
    L4C_CVAL_SAP,
    RSVAC_CSS_SAP,
    UIM_SIM_SAP,
    MRS_CSS_SAP,
    IMCSMS_CVAL_SAP,

    /* DHL */
    DHL_LBS_SAP,

    /* IWLAN */
    IWLAN_ERRC_SAP,
    IWLAN_WIPC_SAP,
    IWLAN_ATP_SAP,

    /* LHIF CORE */
    LHIF_HW_LOG_SAP,
    LHIF_UPCM_HW_LOG_SAP,

    RATDM_CHLP_SAP,
    CVAL_RATDM_SAP,

    EVSLC_CHLP_SAP,


    /* L4B */
    ATP_L4B_SAP,
    DDM_L4BPDN_SAP,
    L4B_ATCI_SAP,
    L4B_CVAL_SAP,
    L4B_L4BPWR_SAP,
    L4BPDN_L4C_SAP,
    L4BPDN_CVAL_SAP,
    L4BPDN_TCM_SAP,
    L4BPDN_SAP,
    L4B_L4BSMS_SAP,
    L4B_L4BSIM_SAP,
    L4B_L4BSAT_SAP,
    L4B_L4BSS_SAP,
    L4B_L4BCC_SAP,
    L4B_L4BNW_SAP,
    L4B_L4BSBP_SAP,
    VDM_L4B_SAP,

    TCM_CVAL_SAP,
    L4BNW_L4BPDN_SAP,
    ATP_IO_L4C_SAP,
    RAC_CVAL_SAP,
    CVAL_CUIM_PROXY_SAP,
    CVAL_ATC_CUIM_PROXY_SAP,
    PS_CUIM_SAP,
    L4C_META_SAP,

    /*ADT TEST*/
    L1ADT_TL1_SAP,
    L1ADT_UL1_SAP,
    L1ADT_EL1_SAP,

  	DUMMY_SAP, // for MoDIS UT

    /* IWLAN */
    IMSP_IWLAN_SAP,
    IWLAN_WMOB_SAP,
    D2RM_IWLAN_SAP,
    IWLAN_EVHD_WMOB_SAP,
    IWLAN_EVHD_WSEM_SAP,
    D2RM_DDM_SAP,
    
    /* ATP - D2/DDM */
    ATP_IMSM_SAP,
    ATP_D2AT_SAP,
    ATP_D2AM_SAP,
    ATP_D2CM_SAP,
    ATP_D2PM_SAP,
    ATP_DDM_SAP,

	/* IMSM */
    IMSM_DAST_SAP,
    IMSM_SIMMNGR_SAP,
    IMSM_D2CM_SAP,

    /* D2CM */
    ME_D2CM_SAP,

    /* D2PM */
    D2PM_D2RM_SAP,
    D2PM_DDM_SAP,
    D2AM_DDM_SAP,

    DHL_RAC_SAP,
    DDM_L4BNW_SAP,

    /*SIMMNGR*/
    SIMMNGR_PS_SAP,
    ATP_SIMMNGR_SAP,

    DHL_SIM_SAP,

    L4C_IPCORE_SAP,
    
    IMC_IWLAN_SAP,
    WIPC_IWLAN_SAP,
    ATP_IWLAN_SAP,

    /* WO */
    D2RM_WO_SAP,
    IWLAN_WO_SAP,
    SIMMNGR_WO_SAP,
    ATP_WO_SAP,
    WO_L4BNW_SAP,
    WO_ADPT_SAP,

    /* WIPC */
    WIPC_SAP,

   /*RRM to RR_SMP */
    RRM_RR_SMP_SAP,
   
    /* CSM SAP */
    CSM_RRCE_SAP,

    L4C_CSS_SAP,
    L4C_SMS_SAP,

    IWLAN_LTECSR_SAP,

    /* SSDS */
    ATP_SSDS_SAP,
    SSDS_XCAP_SAP,
    SSDS_SIMMNGR_SAP,
    SSDS_D2CM_SAP,
    IMSM_SSDS_SAP,
    SSDS_IMC_SAP,

    L1ADT_L4C_SAP,
    
    ATP_D2RM_SAP,
    IMSM_IMC_SAP,
    IMC_D2RM_SAP,
    L4BNW_L4C_SAP,

    DHL_L4C_SAP,
    D2AM_SAP,

    CVAL_PHB_SAP,
    ATP_L4BNW_SAP,
    IWLAN_L4C_SAP,
    IWLAN_L4BNW_SAP,
    IMSM_L4BNW_SAP,
    D2RM_D2RM_SAP,
    SSDS_EVAL_SAP,
    DDM_EVAL_SAP,
    SSDS_SSDS_SAP,
    L4BNW_SAP,

#ifdef __SMB_SIMME_LOCK__
    DHL_SMU_SAP,
    L4BPWR_L4C_SAP,
#endif /* __SMB_SIMME_LOCK__ */

	NWSEL_NWSEL_SAP,
    CHLP_USER_SENSITIVE_SAP,
    LMD_USER_SENSITIVE_SAP,
    EVAL_USER_SENSITIVE_SAP,
    TCM_USER_SENSITIVE_SAP,
    RRM_USER_SENSITIVE_SAP,
    GISE_USER_SENSITIVE_SAP,
    CC_USER_SENSITIVE_SAP,
    UIM_PROXY_USER_SENSITIVE_SAP,
    CUIM_USER_SENSITIVE_SAP,
    SIM_USER_SENSITIVE_SAP,
    FCP_USER_SENSITIVE_SAP,
    RCP_USER_SENSITIVE_SAP,
    IWLAN_USER_SENSITIVE_SAP,
    PAM_USER_SENSITIVE_SAP,
    TFTLIB_USER_SENSITIVE_SAP,
    GMSS_USER_SENSITIVE_SAP,
    ESM_USER_SENSITIVE_SAP,
    IMC_USER_SENSITIVE_SAP,
    WO_USER_SENSITIVE_SAP,
    SMU_USER_SENSITIVE_SAP,
    EMM_USER_SENSITIVE_SAP,
    ETC_USER_SENSITIVE_SAP,
    SIMMNGR_USER_SENSITIVE_SAP,
	RAC_USER_SENSITIVE_SAP,
    UPCM_USER_SENSITIVE_SAP,
    ERRC_USER_SENSITIVE_SAP,
    SDM_USER_SENSITIVE_SAP,
	CLEC_USER_SENSITIVE_SAP,
    CPSW_USER_SENSITIVE_SAP,
	SYSTEM_USER_SENSITIVE_SAP,
	CVAL_USER_SENSITIVE_SAP,
    MM_USER_SENSITIVE_SAP,
    RATCM_USER_SENSITIVE_SAP,
	CSM_USER_SENSITIVE_SAP,
	VDM_USER_SENSITIVE_SAP,
    L4BPDN_USER_SENSITIVE_SAP,
    SMSAL_1_USER_SENSITIVE_SAP,
	SMSAL_2_USER_SENSITIVE_SAP,
    SMS_1_USER_SENSITIVE_SAP,
	SMS_2_USER_SENSITIVE_SAP,
    ATP_USER_SENSITIVE_SAP,
    L4B_USER_SENSITIVE_SAP,
    CISS_USER_SENSITIVE_SAP,
    ATCI_USER_SENSITIVE_SAP,
    SSDS_USER_SENSITIVE_SAP,
    L4BCC_USER_SENSITIVE_SAP,
    L4C_USER_SENSITIVE_SAP,
    SM_USER_SENSITIVE_SAP,
    SMREG_USER_SENSITIVE_SAP,
    RAT_TCM_USER_SENSITIVE_SAP,
    DDM_USER_SENSITIVE_SAP,
    NWSEL_USER_SENSITIVE_SAP,
    RRCE_USER_SENSITIVE_SAP,
    EL1_USER_SENSITIVE_SAP,
    L4C_IMC_SAP,
    CC_GAS_SAP,
    IMCSMS_1_USER_SENSITIVE_SAP,
    IMCSMS_2_USER_SENSITIVE_SAP,
    SMU_CVAL_SAP,
    IMCSMS_EVAL_SAP,
    SMS_IMCSMS_SAP,
MODULE_SAP_END(SAP_ID_MD_CODE_TAIL)

#endif /* MD_SAP_H */
