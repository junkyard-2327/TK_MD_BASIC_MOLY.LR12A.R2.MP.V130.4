/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __EL1_NVRAM_EDITOR_H__
#define __EL1_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "el1_nvram_def.h"

// Data Structure of Each LID

typedef struct
{
    ERF_TX_POWER_BACKOFF_PARAM_T rf_tx_power_backoff_by_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
}nvram_el1_rf_tx_power_backoff_struct;

typedef struct
{
    ERF_TX_MULTI_CLUSTER_VCC_SHIFT_PARAM_T rf_tx_multi_cluster_vcc_ofs_by_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
}nvram_el1_rf_tx_mc_vcc_idx_ofs_struct;

typedef struct
{
    ERF_TX_MULTI_CLUSTER_POW_BF_PARAM_T rf_tx_multi_cluster_pow_bf_by_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
}nvram_el1_rf_tx_mc_pow_bf_struct;

typedef struct
{
    ERF_TX_POWER_BACKOFF_CONDITION_T rf_tx_power_backoff_condition_by_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
}nvram_el1_rf_tx_power_backoff_condition_struct;

typedef struct
{
    ERF_TX_POWER_CONDITIONAL_BACKOFF_TABLE_T rf_tx_power_conditional_backoff_table[LTE_TX_CONDI_BF_TBL_CNT];
}nvram_el1_rf_tx_power_conditional_backoff_tbl_struct;

typedef struct
{
    ERF_TX_NSFT_POWER_BACKOFF_T rf_tx_nsft_power_backoff_by_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
}nvram_el1_rf_tx_nsft_power_backoff_struct;

typedef struct
{
    kal_uint8 txcca[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
} nvram_el1_band_ind_cca_support_struct;

typedef struct
{
    kal_uint8 flt_txcca[LTE_FILTER_MAX_SUPPORT_BAND_NUM];
} nvram_el1_band_ind_flt_cca_support_struct;

typedef struct
{
    LTE_Band lte_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
}nvram_el1_band_ind_struct;

typedef struct
{
   LTE_FE_CUSTOM_CA_LINKAGE_T rx_tx_ca_linkage_table[LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM];
}nvram_el1_fe_ca_linkage_struct;

typedef struct
{
    LTE_BPI_EVT_TIME_OFST_TABLE_T evt_time_offset;
}nvram_el1_evt_time_offset_struct;

typedef struct
{
    kal_uint16 OLAT_EN;
}nvram_el1_olat_feature_struct;

typedef struct
{
    LTE_ANT_ROUTE_TABLE_T ant_pdata_by_band[LTE_MAX_SUPPORT_FE_ROUTE_NUM];
}nvram_el1_ant_pdata_struct;

typedef struct
{
    LTE_ANT_CUSTOM_CA_LINKAGE_DATABASE_T ant_ca_linkage;
} nvram_el1_ant_ca_linkage_struct;

typedef struct
{
   LTE_MIPI_EVENT_TABLE_T mipi_antrx_event[LTE_MIPI_ANT_EVENT_NUM];
}nvram_el1_mipi_antrx_event_struct;

typedef struct
{
   LTE_MIPI_EVENT_TABLE_T mipi_anttx_event[LTE_MIPI_ANT_EVENT_NUM];
}nvram_el1_mipi_anttx_event_struct;

typedef struct
{
   LTE_MIPI_DATA_SUBBAND_TABLE_T mipi_antrx_data[LTE_MIPI_ANT_DATA_NUM];
}nvram_el1_mipi_antrx_data_struct;

typedef struct
{
   LTE_MIPI_DATA_SUBBAND_TABLE_T mipi_anttx_data[LTE_MIPI_ANT_DATA_NUM];
}nvram_el1_mipi_anttx_data_struct;

typedef struct
{
    LTE_VPA_SOURCE_CONFIGUATION_TYPE vpa_config_by_band[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
}nvram_el1_vpa_config_struct;

typedef struct
{
    ERF_BPI_EVT_RXON_T rxon_bpioffset;
}nvram_el1_rxon_bpioffset_struct;

typedef struct
{
    ERF_BPI_EVT_TXON_T txon_bpioffset;
}nvram_el1_txon_bpioffset_struct;

typedef struct
{
    ERF_BPI_EVT_RXOFF_T rxoff_bpioffset;
}nvram_el1_rxoff_bpioffset_struct;

typedef struct
{
    ERF_BPI_EVT_TXOFF_T txoff_bpioffset;
}nvram_el1_txoff_bpioffset_struct;

typedef struct
{
    LTE_MPRAdjust_T mpr_by_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
}nvram_el1_mpr_struct;

typedef struct
{
    LTE_AMPRAdjust_T ampr_by_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
}nvram_el1_ampr_struct;

/* MPR/AMPR for UL CA*/
typedef struct
{
    LTE_MPRAdjust_CA_T mpr_by_band_ca[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
} nvram_el1_mpr_ca_struct;

typedef struct
{
    LTE_AMPRAdjust_CA_T ampr_by_band_ca[LTE_TARGET_MAX_SUPPORT_AMPR_INTRACABAND_NUM];
} nvram_el1_ampr_ca_struct;

/* Verizon special handling structure */
typedef struct
{
    kal_uint16 AMPR_VZW_EN;
} nvram_el1_ampr_vzw_feature_struct;

/* HPUE structure */
typedef struct
{
    LTE_AMPR_HPUE_Adjust_T ampr_hpue;
} nvram_el1_ampr_hpue_struct;

/* AMPR table for 36.521 extra */
typedef struct
{
    LTE_AMPR_EXTRA_Adjust_T ampr_extra;
}nvram_el1_ampr_extra_struct;

typedef struct
{
    LTE_AMPR_EXTRA_CA_Adjust_T ampr_extra_ca;
}nvram_el1_ampr_extra_ca_struct;

/* Dynamic Radio-setting Dedicated Image (DRDI) */
/* Data structure shown in NVRAM Editor */
typedef struct
{
    kal_uint16 DRDI_STATUS;
}nvram_el1_dynamic_init_struct;

typedef struct
{
    //LTE_DRDI_DEBUG_INFO_T custom_dynamic_init_debug_info;
    kal_uint16 asd;
}nvram_el1_dynamic_init_debug_struct;

/* Single ANT Feature */
typedef struct
{
    kal_uint8 RF_RX_PATH0_EN;
    kal_uint8 RF_RX_PATH1_EN;
}nvram_el1_rf_rx_path_config_struct;

/* MIPI Feature */
typedef struct
{
    kal_uint16 MIPI_EN;
}nvram_el1_mipi_feature_struct;

/*** MIPI BYPASS Feature ***/
typedef struct
{
    kal_uint16 MIPI_BYPASS_EN;
} nvram_el1_mipi_bypass_feature_struct;

typedef struct
{
   LTE_MIPI_EVENT_TABLE_T mipi_rx_event[LTE_MIPI_RX_EVENT_NUM];
}nvram_el1_mipi_rx_event_struct;

typedef struct
{
   LTE_MIPI_EVENT_TABLE_T mipi_tx_event[LTE_MIPI_TX_EVENT_NUM];
}nvram_el1_mipi_tx_event_struct;


typedef struct
{
   LTE_MIPI_EVENT_TABLE_T mipi_tpc_event[LTE_MIPI_TPC_EVENT_NUM];
}nvram_el1_mipi_tpc_event_struct;

typedef struct
{
   LTE_MIPI_TPC_SECTION_TABLE_T mipi_tpc_sec_data[LTE_MIPI_SUBBAND_NUM_PER_DATA];
   LTE_MIPI_TPC_SECTION_TABLE_T mipi_tpc_sec_data_cca[LTE_MIPI_SUBBAND_NUM_PER_DATA];
   kal_uint8                    is_txcca;
}nvram_el1_mipi_tpc_data_struct;

typedef struct
{
   LTE_MIPI_DATA_SUBBAND_TABLE_T mipi_rx_data[LTE_MIPI_RX_DATA_NUM];
}nvram_el1_mipi_rx_data_struct;

typedef struct
{
   LTE_MIPI_DATA_SUBBAND_TABLE_T mipi_tx_data[LTE_MIPI_TX_DATA_NUM];
}nvram_el1_mipi_tx_data_struct;

typedef struct
{
   LTE_MIPI_DATA_SUBBAND_TABLE_T mipi_bypass_tx_data[LTE_MIPI_TX_DATA_NUM];
}nvram_el1_mipi_bypass_tx_data_struct;

typedef struct
{
   ERF_FILTER_BAND_INFO_T  bypass_power_comp[LTE_FILTER_MAX_SUPPORT_BAND_NUM];
}nvram_el1_bypass_band_ind_data_struct;

typedef struct
{
   ERF_FILTER_RFDATABASE_T bypass_rfdatabase[LTE_FILTER_MAX_SUPPORT_BAND_NUM];
}nvram_el1_bypass_rfdatabase_data_struct;

typedef struct
{
   LTE_CUSTOM_TAS_FEATURE_ENABLE_T   tas_feature_enable[LTE_TAS_MAX_FE_ROUTE_NUM];
}nvram_el1_tas_feature_enable_struct;

typedef struct
{
    kal_uint16 DAT_EN;
}nvram_el1_dat_feature_enable_struct;

typedef struct
{
    kal_uint8 dummy[2104];
}nvram_el1_ctrl_reg_rw_struct;

typedef struct
{
    kal_uint8 dummy[2048];
}nvram_el1_dsp_log_filter_struct;


#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA
#ifdef __LTE_RAT__
/** EL1 RF Calibration */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_FREQADJTBL_LID
* DESCRIPTION
*      Store AFC slope information with calculation(Initial AFC value/Slope)
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.This LID will update after calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_FREQADJTBL_LID)
     LTE_FreqAdjustTable *NVRAM_EF_EL1_FREQADJTBL_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_CTRL_REG_RW_LID)
     nvram_el1_ctrl_reg_rw_struct *NVRAM_EF_EL1_CTRL_REG_RW_TOTAL
     {

     };
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DSPLOGFILTER_LID)
     nvram_el1_dsp_log_filter_struct *NVRAM_EF_EL1_DSPLOGFILTER_TOTAL
     {

     };


/** EL1D RF RX RSSI Table */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_RSSIGAINTBL_TYPE1_LID
* DESCRIPTION
*      RX path loss data for single band and inter-band CA CASE 
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.This LID will update after calibration.
*********************************************************************************************/     
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_RSSIGAINTBL_TYPE1_LID)
     LTE_RX_PL_ROUTE_TYPE1_T *NVRAM_EF_EL1_RSSIGAINTBL_TYPE1_BAND_TOTAL
     {

     };
     
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_RSSIGAINTBL_TYPE2_LID
* DESCRIPTION
*      RX path loss data for NCCA CASE 
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.This LID will update after calibration.
*********************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_RSSIGAINTBL_TYPE2_LID)
     LTE_RX_PL_ROUTE_TYPE2_T *NVRAM_EF_EL1_RSSIGAINTBL_TYPE2_BAND_TOTAL
     {

     };

/** EL1D RF Tx DAC */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TXDAC_LID
* DESCRIPTION
*      PA gain/coupler loss compensation data by band
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.This LID will update after calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TXDAC_LID)
     LTE_sRAMP_DEFAULT_SIZE *NVRAM_EF_EL1_TXDAC_BAND_TOTAL
     {

     };

/** EL1D RF Tx PA OCT level */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TXPAOCTLEV_LID
* DESCRIPTION
*      PA gain setting by band
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.This LID will update after calibration.
*********************************************************************************************/     
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TXPAOCTLEV_LID)
     LTE_sPAOCTLVL_DEFAULT_SIZE *NVRAM_EF_EL1_TXPAOCTLEV_BAND_TOTAL
     {

     };

/** EL1D PWRON CAL */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_RF_SELF_CAL_RX_DC_IRR_LID
* DESCRIPTION
*      This LID is used to store internal use data.
* INFOMATION
*      Can OTA Reset:  No
*      Update Scenario: 1.This LID will be updated in initial task.
*                       2.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_RF_SELF_CAL_RX_DC_IRR_LID)
     LTE_RF_POC_RX_DC_IRR_COMP_PER_ROUTE_T *NVRAM_EF_EL1_RF_SELF_CAL_RX_DC_IRR_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_RF_SELF_CAL_RX_IIP2_LID
* DESCRIPTION
*      This LID is used to store internal use data.
* INFOMATION
*      Can OTA Reset:  No
*      Update Scenario: 1.This LID will be updated in initial task.
*                       2.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_RF_SELF_CAL_RX_IIP2_LID)
     LTE_RF_POC_RX_IIP2_COMP_PER_ROUTE_T *NVRAM_EF_EL1_RF_SELF_CAL_RX_IIP2_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_RF_SELF_CAL_DET_TX_LID
* DESCRIPTION
*      This LID is used to store internal use data.
* INFOMATION
*      Can OTA Reset:  No
*      Update Scenario: 1.This LID will be updated in initial task.
*                       2.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_RF_SELF_CAL_DET_TX_LID)
     LTE_RF_POC_DET_TX_COMP_CAL_DATA_ELEMENT_T *NVRAM_EF_EL1_RF_SELF_CAL_DET_TX_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_RF_SELF_CAL_TX_SB_LID
* DESCRIPTION
*      This LID is used to store internal use data.
* INFOMATION
*      Can OTA Reset:  No
*      Update Scenario: 1.This LID will be updated in initial task.
*                       2.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_RF_SELF_CAL_TX_SB_LID)
     LTE_RF_POC_TX_SB_COMP_CAL_DATA_PER_BAND_T *NVRAM_EF_EL1_RF_SELF_CAL_TX_SB_TOTAL
     {

     };

/** EL1D RF Tx ET */
/** EL1D RF General Parammeters */
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MPRADJTBL_LID)
     nvram_el1_mpr_struct *NVRAM_EF_EL1_MPRADJTBL_TOTAL
     {

     };
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_AMPRADJTBL_LID)
     nvram_el1_ampr_struct *NVRAM_EF_EL1_AMPRADJTBL_TOTAL
     {

     };

/* CA versions of MPR/AMPR */
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MPRADJTBLCA_LID)
     nvram_el1_mpr_ca_struct *NVRAM_EF_EL1_MPRADJTBLCA_TOTAL
     {

     };
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_AMPRADJTBLCA_LID)
     nvram_el1_ampr_ca_struct *NVRAM_EF_EL1_AMPRADJTBLCA_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID)
     nvram_el1_ampr_vzw_feature_struct *NVRAM_EF_EL1_AMPR_VZW_FEATURE_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_AMPR_HPUE_FEATURE_LID)
     nvram_el1_ampr_hpue_struct *NVRAM_EF_EL1_AMPR_HPUE_FEATURE_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_AMPRADJTBL_EXTRA_LID)
     nvram_el1_ampr_extra_struct *NVRAM_EF_EL1_AMPRADJTBL_EXTRA_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_AMPRADJTBLCA_EXTRA_LID)
     nvram_el1_ampr_extra_ca_struct *NVRAM_EF_EL1_AMPRADJTBLCA_EXTRA_TOTAL
     {

     };

/** EL1D RF Customization data */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_BAND_INDICATOR_LID
* DESCRIPTION
*      The single band support list 
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.To modify band indicator, suggest updating custom files and recalibrating.
*                       3.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_BAND_INDICATOR_LID)
     nvram_el1_band_ind_struct *NVRAM_EF_EL1_BAND_INDICATOR_TOTAL
     {

     };
     
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_FE_CA_LINKAGE_DATABASE_LID
* DESCRIPTION
*      The CA combinations support list 
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.To modify CA combination list, suggest updating custom files and recalibrating.
*                       3.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_FE_CA_LINKAGE_DATABASE_LID)
     nvram_el1_fe_ca_linkage_struct *NVRAM_EF_EL1_FE_CA_LINKAGE_DATABASE_TOTAL
     {

     };

/* RF BPI event offset */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_EVT_TIME_OFST_TABLE_LID
* DESCRIPTION
*      show event time offset of BPI event 
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_EVT_TIME_OFST_TABLE_LID)
     nvram_el1_evt_time_offset_struct *NVRAM_EF_EL1_EVT_TIME_OFST_TABLE_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_FE_RX_ROUTE_DATABASE_LID
* DESCRIPTION
*      RX FE route setting 
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_FE_RX_ROUTE_DATABASE_LID)
     LTE_FE_RX_ROUTE_TABLE_T *NVRAM_EF_EL1_FE_RX_ROUTE_DATABASE_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_FE_TX_ROUTE_DATABASE_LID
* DESCRIPTION
*      TX FE route setting 
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_FE_TX_ROUTE_DATABASE_LID)
     LTE_FE_TX_ROUTE_TABLE_T *NVRAM_EF_EL1_FE_TX_ROUTE_DATABASE_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_OLAT_FEATURE_LID
* DESCRIPTION
*      enable/disable OLAT feature
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_OLAT_FEATURE_LID)
     nvram_el1_olat_feature_struct *NVRAM_EF_EL1_OLAT_FEATURE_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_ANT_PDATABASE_LID
* DESCRIPTION
*      set antenna tuner BPI data(including split band and alternate Configuration)
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_ANT_PDATABASE_LID)
     nvram_el1_ant_pdata_struct *NVRAM_EF_EL1_ANT_PDATABASE_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_LID
* DESCRIPTION
*      shows ANT CA linkage table
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_LID)
     nvram_el1_ant_ca_linkage_struct *NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_ANTRX_EVENT_LID
* DESCRIPTION
*      Set LTE MIPI ANT RX evnet for configuring Antenna tuner RX setting by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_ANTRX_EVENT_LID)
     nvram_el1_mipi_antrx_event_struct *NVRAM_EF_EL1_MIPI_ANTRX_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_ANTTX_EVENT_LID
* DESCRIPTION
*      Set LTE MIPI ANT TX evnet for configuring Antenna tuner TX setting by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_ANTTX_EVENT_LID)
     nvram_el1_mipi_anttx_event_struct *NVRAM_EF_EL1_MIPI_ANTTX_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_ANTRX_DATA_LID
* DESCRIPTION
*      Set LTE MIPI ANT RX DATA for configuring Antenna tuner RX setting by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_ANTRX_DATA_LID)
     nvram_el1_mipi_antrx_data_struct *NVRAM_EF_EL1_MIPI_ANTRX_DATA_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_ANTTX_DATA_LID
* DESCRIPTION
*      Set LTE MIPI ANT TX DATA for configuring Antenna tuner TX setting by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_ANTTX_DATA_LID)
     nvram_el1_mipi_anttx_data_struct *NVRAM_EF_EL1_MIPI_ANTTX_DATA_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_VPA_CONFIG_DATABASE_LID
* DESCRIPTION
*      shows the VPA setting 
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_VPA_CONFIG_DATABASE_LID)
     nvram_el1_vpa_config_struct *NVRAM_EF_EL1_VPA_CONFIG_DATABASE_TOTAL
     {

     };

/* Dynamic Radio-setting Dedicated Image (DRDI) */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_CUSTOM_DYNAMIC_INIT_DEBUG_LID
* DESCRIPTION
*      use this LID to get DRDI set ID(For DRDI debug usage) but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_CUSTOM_DYNAMIC_INIT_DEBUG_LID)
     nvram_el1_dynamic_init_debug_struct *NVRAM_EF_EL1_CUSTOM_DYNAMIC_INIT_DEBUG_TOTAL
     {

     };

/* Single ANT Feature */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_RF_RX_PATH_CONFIG_LID
* DESCRIPTION
*      RX Path Selection and control which RX ANT(s) to be activated
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_RF_RX_PATH_CONFIG_LID)
     nvram_el1_rf_rx_path_config_struct *NVRAM_EF_EL1_RF_RX_PATH_CONFIG_TOTAL
     {

     };

/*MIPI Feature*/
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_FEATURE_LID
* DESCRIPTION
*      Use to set LTE MIPI feature enable/disable 
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_FEATURE_LID)
     nvram_el1_mipi_feature_struct *NVRAM_EF_EL1_MIPI_FEATURE_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_RX_EVENT_LID
* DESCRIPTION
*      Set LTE MIPI RX event for configuring ASM ON/OFF by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_RX_EVENT_LID)
     nvram_el1_mipi_rx_event_struct *NVRAM_EF_EL1_MIPI_RX_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_TX_EVENT_LID
* DESCRIPTION
*      Set LTE MIPI TX event for configuring ASM and PA ON/OFF by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_TX_EVENT_LID)
     nvram_el1_mipi_tx_event_struct *NVRAM_EF_EL1_MIPI_TX_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_RX_DATA_LID
* DESCRIPTION
*      Set LTE MIPI RX data for configuring ASM by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_RX_DATA_LID)
     nvram_el1_mipi_rx_data_struct *NVRAM_EF_EL1_MIPI_RX_DATA_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_TX_DATA_LID
* DESCRIPTION
*      Set LTE MIPI TX data for configuring ASM and PA bias by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_TX_DATA_LID)
     nvram_el1_mipi_tx_data_struct *NVRAM_EF_EL1_MIPI_TX_DATA_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_TPC_EVENT_LID
* DESCRIPTION
*      Set MIPI TPC event time offset by band  
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_TPC_EVENT_LID)
     nvram_el1_mipi_tpc_event_struct *NVRAM_EF_EL1_MIPI_TPC_EVENT_TOTAL
     {

     };
     
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_LID
* DESCRIPTION
*      shows the MIPI PA TPC actual setting by band
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.Must do calibration again after modifying this setting.
*                       3.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_LID)
     nvram_el1_mipi_tpc_data_struct *NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_TOTAL
     {

     };


/*** MIPI BYPASS Feature ***/
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_0THBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX event by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_0THBAND_LID)
     nvram_el1_mipi_tx_event_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_1STBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX event by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_1STBAND_LID)
     nvram_el1_mipi_tx_event_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_2NDBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX event by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_2NDBAND_LID)
     nvram_el1_mipi_tx_event_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_3RDBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX event by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_3RDBAND_LID)
     nvram_el1_mipi_tx_event_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_4THBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX event by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_4THBAND_LID)
     nvram_el1_mipi_tx_event_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_0THBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX data by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_0THBAND_LID)
     nvram_el1_mipi_bypass_tx_data_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_1STBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX data by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_1STBAND_LID)
     nvram_el1_mipi_bypass_tx_data_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_2NDBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX data by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_2NDBAND_LID)
     nvram_el1_mipi_bypass_tx_data_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_3RDBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX data by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_3RDBAND_LID)
     nvram_el1_mipi_bypass_tx_data_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_4THBAND_LID
* DESCRIPTION
*      Set LTE MIPI TX data by bybass mode but this LID is unused
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_4THBAND_LID)
     nvram_el1_mipi_bypass_tx_data_struct *NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_TOTAL
     {

     };
     
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_LID
* DESCRIPTION
*      Set MIPI TPC event time offset by filter band  
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_LID)
     nvram_el1_mipi_tpc_event_struct *NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_LID
* DESCRIPTION
*      shows the MIPI PA TPC actual setting by filter band
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.Must do calibration again after modifying this setting.
*                       3.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_LID)
     nvram_el1_mipi_tpc_data_struct *NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_LID
* DESCRIPTION
*      Set SAR MAX power offset by band(for adjusting MAX power)   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_LID)
     LTE_SAR_TX_POWER_OFFSET_DATA_T *NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID
* DESCRIPTION
*      Set SWTP power offset by band(for adjusting Tx output power)   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID)
     LTE_SWTP_TX_POWER_OFFSET_DATA_T *NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TX_POWER_OFFSET_LID
* DESCRIPTION
*      Set Tx power offset by band(for adjusting Tx output power)   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TX_POWER_OFFSET_LID)
     LTE_TX_POWER_OFFSET_DATA_T *NVRAM_EF_EL1_TX_POWER_OFFSET_TOTAL
     {

        /*Since SWTP is using new LID: NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID, it's need to be remove in 95*/

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_RX_POWER_OFFSET_SWITCH_LID
* DESCRIPTION
*      Set Rx power offset by band(enable for adjusting Rx output power)   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_RX_POWER_OFFSET_SWITCH_LID)
     LTE_CUSTOM_RPO_OPTION_T *NVRAM_EF_EL1_RX_POWER_OFFSET_SWITCH_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_RX_POWER_OFFSET_LID
* DESCRIPTION
*      Set Rx power offset by band(for adjusting Rx output power)   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_RX_POWER_OFFSET_LID)
     LTE_CUSTOM_RPO_ROUTE_T *NVRAM_EF_EL1_RX_POWER_OFFSET_TOTAL
     {

     };

/*** TX Power Backoff Feature ***/
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TX_POWER_BACKOFF_LID
* DESCRIPTION
*      Tx power backoff feature(for cases with small RB or temperature compensation)   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TX_POWER_BACKOFF_LID)
     nvram_el1_rf_tx_power_backoff_struct *NVRAM_EF_EL1_TX_POWER_BACKOFF_TOTAL
     {

     };

/*** TX Power Backoff Feature ***/
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TX_MC_VCC_IDX_OFS_LID
* DESCRIPTION
*      Set TX Multi-Cluster Vcc Index Offset Parameters   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TX_MC_VCC_IDX_OFS_LID)
     nvram_el1_rf_tx_mc_vcc_idx_ofs_struct *NVRAM_EF_EL1_TX_MC_VCC_IDX_OFS_TOTAL
     {

     };

/*** TX Power Backoff Feature ***/
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TX_MC_POW_BF_LID
* DESCRIPTION
*      Additional backoff for LTE TX multi-cluster bias tuning   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TX_MC_POW_BF_LID)
     nvram_el1_rf_tx_mc_pow_bf_struct *NVRAM_EF_EL1_TX_MC_POW_BF_TOTAL
     {

     };

/*** TX Power Conditional Backoff Feature ***/
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_LID
* DESCRIPTION
*      Tx power conditional backoff feature   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_LID)
     nvram_el1_rf_tx_power_backoff_condition_struct *NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_TOTAL
     {

     };

/*** TX Power Conditional Backoff Feature ***/
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_LID
* DESCRIPTION
*      Tx power conditional backoff feature   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_LID)
     nvram_el1_rf_tx_power_conditional_backoff_tbl_struct *NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_TOTAL
     {

     };

/*** TX NSFT Power Backoff Feature ***/
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TX_NSFT_POWER_BACKOFF_TABLE_LID
* DESCRIPTION
*      Tx NSFT power backoff feature   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TX_NSFT_POWER_BACKOFF_LID)
     nvram_el1_rf_tx_nsft_power_backoff_struct *NVRAM_EF_EL1_TX_NSFT_POWER_BACKOFF_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_FILTER_TXDAC_LID
* DESCRIPTION
*      PA gain/coupler loss compensation data by filter band
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.This LID will update after calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_FILTER_TXDAC_LID)
     LTE_sRAMP_DEFAULT_SIZE *NVRAM_EF_EL1_FILTER_TXDAC_BAND_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_FILTER_TXPAOCTLEV_LID
* DESCRIPTION
*      PA gain setting by filter band
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.This LID will update after calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_FILTER_TXPAOCTLEV_LID)
     LTE_sPAOCTLVL_DEFAULT_SIZE *NVRAM_EF_EL1_FILTER_TXPAOCTLEV_BAND_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TAS_FORCE_PARAMETER_LID
* DESCRIPTION
*      Enable/Disable TAS force mode to specific state
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TAS_FORCE_PARAMETER_LID)
     LTE_RF_TAS_FORCE_PARAMETER_T *NVRAM_EF_EL1_TAS_FORCE_PARAMETER_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TAS_FEATURE_BY_RAT_LID
* DESCRIPTION
*      Enable/Disable TAS feature on realsim/testsim
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TAS_FEATURE_BY_RAT_LID)
     LTE_CUSTOM_TAS_FEATURE_BY_RAT_T *NVRAM_EF_EL1_TAS_FEATURE_BY_RAT_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_TAS_FEATURE_ENABLE_LID
* DESCRIPTION
*      Enable/Disable TAS feature by band on realsim/testsim(by route init setting)
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_TAS_FEATURE_ENABLE_LID)
     nvram_el1_tas_feature_enable_struct *NVRAM_EF_EL1_TAS_FEATURE_ENABLE_TOTAL
     {

     };

/*DAT Feature*/
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_DAT_FEATURE_ENABLE_LID
* DESCRIPTION
*      Enable/Disable DAT feature
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DAT_FEATURE_ENABLE_LID)
    nvram_el1_dat_feature_enable_struct *NVRAM_EF_EL1_DAT_FEATURE_ENABLE_TOTAL
    {
    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_DAT_ROUTE_DATABASE_LID
* DESCRIPTION
*      Show DAT feature by band setting
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DAT_ROUTE_DATABASE_LID)
    LTE_CUSTOM_DAT_FE_ROUTE_DATABASE_T *NVRAM_EF_EL1_DAT_ROUTE_DATABASE_TOTAL
    {
    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_ANT_ROUTE_DATABASE_LID
* DESCRIPTION
*      Show ANT feature by band setting
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/  
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_ANT_ROUTE_DATABASE_LID)
     LTE_CUSTOM_ANT_FE_ROUTE_DATABASE_T *NVRAM_EF_EL1_ANT_ROUTE_DATABASE_TOTAL
     {
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_SPLIT_BAND_DATABASE_LID
* DESCRIPTION
*      shows splitting band feature setting
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_SPLIT_BAND_DATABASE_LID)
     LTE_RF_SPLIT_BAND_DATABASE_T *NVRAM_EF_EL1_SPLIT_BAND_DATABASE_TOTAL
     {
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_FILTER_MODE_DATABASE_LID
* DESCRIPTION
*      shows filter mode setting
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_FILTER_MODE_DATABASE_LID)
     LTE_RF_FILTER_MODE_DATABASE_T *NVRAM_EF_EL1_FILTER_MODE_DATABASE_TOTAL
     {
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_BAND_IND_CCA_SUPPORT_LID
* DESCRIPTION
*      Indicate that whatever Tx CCA is supported by the band
*      (NO_CCA_SUPPORT/CLASS_B_CCA_SUPPORT/CLASS_C_CCA_SUPPORT) 
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_BAND_IND_CCA_SUPPORT_LID)
     nvram_el1_band_ind_cca_support_struct *NVRAM_EF_EL1_BAND_IND_CCA_SUPPORT_TOTAL
     {
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EL1_BAND_IND_FLT_CCA_SUPPORT_LID
* DESCRIPTION
*      Indicate that whatever Tx CCA is supported by the filter band
*      (NO_CCA_SUPPORT/CLASS_B_CCA_SUPPORT/CLASS_C_CCA_SUPPORT) 
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_BAND_IND_FLT_CCA_SUPPORT_LID)
     nvram_el1_band_ind_flt_cca_support_struct *NVRAM_EF_EL1_BAND_IND_FLT_CCA_SUPPORT_TOTAL
     {
     };

LID_BIT VER_LID(NVRAM_EF_EL1D_FEATURE_LID)
    LTE_EL1D_FEATURE_NVRAM_T * NVRAM_EF_EL1D_FEATURE_TOTAL
    {
        el1d_tx: "tx"
        {

        };
        el1d_rx: "rx"
        {

        };
        el1d_cs: "cs"
        {

        };
        el1d_cm: "cm"
        {

        };
        el1d_common: "common"
        {

        };
    };
/** EL1D DPD Feature */
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DPD_FACTORY_CAL_DATA_LID)
     LTE_DPD_GROUP_CAL_DEFAULT_SIZE *NVRAM_EF_EL1_DPD_FACTORY_CAL_DATA_TOTAL
     {

     };
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DPD_FILTER_FACTORY_CAL_DATA_LID)
     LTE_DPD_GROUP_CAL_DEFAULT_SIZE *NVRAM_EF_EL1_DPD_FILTER_FACTORY_CAL_DATA_TOTAL
     {

     };
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DPD_COMMON_CTRL_DATA_LID)
     LTE_DPD_COMMON_CTRL_DEFAULT_SIZE *NVRAM_EF_EL1_DPD_COMMON_CTRL_DATA_TOTAL
     {

     };
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DPD_FILTER_COMMON_CTRL_DATA_LID)
     LTE_DPD_COMMON_CTRL_DEFAULT_SIZE *NVRAM_EF_EL1_DPD_FILTER_COMMON_CTRL_DATA_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_LID)
     LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE *NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_TOTAL
     {

     };
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_LID)
     LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE *NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_TOTAL
     {

     };
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DPD_PCFE_OTFC_CUSTOM_PARA_LID)
     LTE_PCFE_DPD_OTFC_CUSTOM_PARA_T *NVRAM_EF_EL1_DPD_PCFE_OTFC_CUSTOM_PARA_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DPD_PCFE_OTFC_NONCUSTOM_PARA_LID)
     LTE_PCFE_DPD_OTFC_NONCUSTOM_PARA_T *NVRAM_EF_EL1_DPD_PCFE_OTFC_NONCUSTOM_PARA_TOTAL
     {

     };

/** EL1D ET */
//CAL DATA

   #if __IS_EL1D_ET_SUPPORT__
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_LTE_ET_CAL_DATA_LID)
     LTE_ET_NVRAM_CANNOT_OTA_T *NVRAM_EF_EL1_LTE_ET_CAL_DATA_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_LTE_ET_CAL_DATA_CCA_LID)
     LTE_ET_NVRAM_CANNOT_OTA_T *NVRAM_EF_EL1_LTE_ET_CAL_DATA_CCA_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_LTE_ET_CAL_DATA_FILTER_LID)
     LTE_ET_NVRAM_CANNOT_OTA_T *NVRAM_EF_EL1_LTE_ET_CAL_DATA_FILTER_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_LTE_ET_CAL_DATA_FILTER_CCA_LID)
     LTE_ET_NVRAM_CANNOT_OTA_T *NVRAM_EF_EL1_LTE_ET_CAL_DATA_FILTER_CCA_TOTAL
     {

     };

//MANUAL PARAMETER
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_LTE_ET_MANUAL_PARAMETER_LID)
     LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T *NVRAM_EF_EL1_LTE_ET_MANUAL_PARAMETER_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_LTE_ET_MANUAL_PARAMETER_CCA_LID)
     LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T *NVRAM_EF_EL1_LTE_ET_MANUAL_PARAMETER_CCA_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_LTE_ET_MANUAL_PARAMETER_FILTER_LID)
     LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T *NVRAM_EF_EL1_LTE_ET_MANUAL_PARAMETER_FILTER_TOTAL
     {

     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_LTE_ET_MANUAL_PARAMETER_FILTER_CCA_LID)
     LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T *NVRAM_EF_EL1_LTE_ET_MANUAL_PARAMETER_FILTER_CCA_TOTAL
     {

     };
   #endif

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_EL1_DPD_BYPASS_DPD_NS_INFO_LID)
     LTE_DPD_BYPASS_DPD_NS_INFO_T *NVRAM_EF_EL1_DPD_BYPASS_DPD_NS_INFO_TOTAL
     {

     };	 
#endif
END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __CSG_NVRAM_EDITOR_H__ */
