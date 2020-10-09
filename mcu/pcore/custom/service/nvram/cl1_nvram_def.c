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
 * cl1_nvram_def.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for NVRAM security customization. 
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
 *
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
 * removed!
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef NVRAM_NOT_PRESENT
#if defined (__C2K_RAT__)

#include "kal_general_types.h"
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"

/*
 *   User Headers & Default value
 */
#include "cl1_nvram_def.h" 
#include "cl1_nvram_editor.h" 
extern void nvram_get_cl1_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);
extern void nvram_get_cl1_poc_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);

extern void nvram_get_cl1_1xrtt_dpd_am_pm_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);
extern void nvram_get_cl1_evdo_dpd_am_pm_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);

#define CL1_L1D_ACC_PWR_OFFSET_BAND_0          0
#define CL1_L1D_ACC_PWR_OFFSET_BAND_1          0
#define CL1_L1D_ACC_PWR_OFFSET_BAND_10         0
#define CL1_L1D_MAX_PWR_BACKOFF_BAND_0         0
#define CL1_L1D_MAX_PWR_BACKOFF_BAND_1         0
#define CL1_L1D_MAX_PWR_BACKOFF_BAND_10        0

const CL1_L1D_TX_POWER_OFFSET_T cl1TxPwrOffset = 
{
  {CL1_L1D_ACC_PWR_OFFSET_BAND_0,CL1_L1D_ACC_PWR_OFFSET_BAND_1,0,0,0,0,0,0,0,0,CL1_L1D_ACC_PWR_OFFSET_BAND_10,0,0,0,0,0,0,0,0,0,0},  /*accTxPwrOffset*/
  {CL1_L1D_MAX_PWR_BACKOFF_BAND_0,CL1_L1D_MAX_PWR_BACKOFF_BAND_1,0,0,0,0,0,0,0,0,CL1_L1D_MAX_PWR_BACKOFF_BAND_10,0,0,0,0,0,0,0,0,0,0}  /*maxPwrbackoff*/
};

// LID Declaration
ltable_entry_struct logical_data_item_table_cl1[] =
{
   {
      NVRAM_EF_CL1_CUST_PARAM_LID,
      NVRAM_EF_CL1_CUST_PARAM_TOTAL,
      NVRAM_EF_CL1_CUST_PARAM_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL00",
      VER(NVRAM_EF_CL1_CUST_PARAM_LID)
   },

   {
      NVRAM_EF_CL1_CUST_BPI_CFG_LID,
      NVRAM_EF_CL1_CUST_BPI_CFG_TOTAL,
      NVRAM_EF_CL1_CUST_BPI_CFG_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL01",
      VER(NVRAM_EF_CL1_CUST_BPI_CFG_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_PARAM_LID,
      NVRAM_EF_CL1_MIPI_PARAM_TOTAL,
      NVRAM_EF_CL1_MIPI_PARAM_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL02",
      VER(NVRAM_EF_CL1_MIPI_PARAM_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_RX_EVENT_LID,
      NVRAM_EF_CL1_MIPI_RX_EVENT_TOTAL,
      NVRAM_EF_CL1_MIPI_RX_EVENT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL03",
      VER(NVRAM_EF_CL1_MIPI_RX_EVENT_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_RX_DATA_LID,
      NVRAM_EF_CL1_MIPI_RX_DATA_TOTAL,
      NVRAM_EF_CL1_MIPI_RX_DATA_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL04",
      VER(NVRAM_EF_CL1_MIPI_RX_DATA_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_TX_EVENT_LID,
      NVRAM_EF_CL1_MIPI_TX_EVENT_TOTAL,
      NVRAM_EF_CL1_MIPI_TX_EVENT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL05",
      VER(NVRAM_EF_CL1_MIPI_TX_EVENT_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_TX_DATA_LID,
      NVRAM_EF_CL1_MIPI_TX_DATA_TOTAL,
      NVRAM_EF_CL1_MIPI_TX_DATA_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL06",
      VER(NVRAM_EF_CL1_MIPI_TX_DATA_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_TPC_EVENT_LID,
      NVRAM_EF_CL1_MIPI_TPC_EVENT_TOTAL,
      NVRAM_EF_CL1_MIPI_TPC_EVENT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL07",
      VER(NVRAM_EF_CL1_MIPI_TPC_EVENT_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_TPC_DATA_LID,
      NVRAM_EF_CL1_MIPI_TPC_DATA_TOTAL,
      NVRAM_EF_CL1_MIPI_TPC_DATA_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL08",
      VER(NVRAM_EF_CL1_MIPI_TPC_DATA_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_LID,
      NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_TOTAL,
      NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL09",
      VER(NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_LID,
      NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_TOTAL,
      NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0A",
      VER(NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_LID,
      NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_TOTAL,
      NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0B",
      VER(NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_ETM_TX_DATA_LID,
      NVRAM_EF_CL1_MIPI_ETM_TX_DATA_TOTAL,
      NVRAM_EF_CL1_MIPI_ETM_TX_DATA_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0C",
      VER(NVRAM_EF_CL1_MIPI_ETM_TX_DATA_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_LID,
      NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_TOTAL,
      NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0D",
      VER(NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_LID,
      NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_TOTAL,
      NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0E",
      VER(NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_LID,
      NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_TOTAL,
      NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0F",
      VER(NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_LID,
      NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_TOTAL,
      NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0G",
      VER(NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_FEATURE_LID,
      NVRAM_EF_CL1_CUST_TAS_FEATURE_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_FEATURE_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL0H",
      VER(NVRAM_EF_CL1_CUST_TAS_FEATURE_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_LID,
      NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL0I",
      VER(NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_LID,
      NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL0J",
      VER(NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_LID,
      NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL0K",
      VER(NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_LID,
      NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL0L",
      VER(NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_LID,
      NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_TOTAL,
      NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL0M",
      VER(NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TUNER_LID,
      NVRAM_EF_CL1_CUST_TUNER_TOTAL,
      NVRAM_EF_CL1_CUST_TUNER_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0N",
      VER(NVRAM_EF_CL1_CUST_TUNER_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_LID,
      NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_TOTAL,
      NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0O",
      VER(NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_LID,
      NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_TOTAL,
      NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0P",
      VER(NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_LID,
      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0Q",
      VER(NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_LID,
      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0R",
      VER(NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_LID,
      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0S",
      VER(NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_LID,
      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0T",
      VER(NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_LID,
      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0U",
      VER(NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_LID)
   },

   {
      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_LID,
      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_TOTAL,
      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0V",
      VER(NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_LID)
   },
   
   {
      NVRAM_EF_CL1_CUST_ELNA_CFG_LID,
      NVRAM_EF_CL1_CUST_ELNA_CFG_TOTAL,
      NVRAM_EF_CL1_CUST_ELNA_CFG_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL0X",
      VER(NVRAM_EF_CL1_CUST_ELNA_CFG_LID)
   },

   {
      NVRAM_EF_CL1_CUST_ELNA_EVENT_LID,
      NVRAM_EF_CL1_CUST_ELNA_EVENT_TOTAL,
      NVRAM_EF_CL1_CUST_ELNA_EVENT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0Y",
      VER(NVRAM_EF_CL1_CUST_ELNA_EVENT_LID)
   },

   {
      NVRAM_EF_CL1_CUST_ELNA_DATA_LID,
      NVRAM_EF_CL1_CUST_ELNA_DATA_TOTAL,
      NVRAM_EF_CL1_CUST_ELNA_DATA_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL0Z",
      VER(NVRAM_EF_CL1_CUST_ELNA_DATA_LID)
   },

   {
      NVRAM_EF_CL1_TX_POWER_BACK_OFF_LID,
      NVRAM_EF_CL1_TX_POWER_BACK_OFF_TOTAL,
      NVRAM_EF_CL1_TX_POWER_BACK_OFF_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL10",
      VER(NVRAM_EF_CL1_TX_POWER_BACK_OFF_LID)
   },
#if defined(__TX_POWER_OFFSET_SUPPORT__)  
	 {
      NVRAM_EF_CL1_TX_POWER_OFFSET_LID,
      NVRAM_EF_CL1_TX_POWER_OFFSET_TOTAL,
      NVRAM_EF_CL1_TX_POWER_OFFSET_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL11",
      VER(NVRAM_EF_CL1_TX_POWER_OFFSET_LID)
	 },
#endif
   {
	  NVRAM_EF_CL1_TAS_TST_CONFIG_LID,
	  NVRAM_EF_CL1_TAS_TST_CFG_TOTAL,
	  NVRAM_EF_CL1_TAS_TST_CONFIG_SZIE,
	  NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL12",
      VER(NVRAM_EF_CL1_TAS_TST_CONFIG_LID)
   },
#if IS_C2K_DAT_RFD_CTRL_EN
	{
	  NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_LID,
	  NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_TOTAL,
	  NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_SIZE,
	  NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL13",
      VER(NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_LID)
   },
   {
	  NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_LID,
	  NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_TOTAL,
	  NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_SIZE,
	  NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL14",
      VER(NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_LID)
   },
   {
	  NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_LID,
	  NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_TOTAL,
	  NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_SIZE,
	  NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL15",
      VER(NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_LID)
   },
   {
	  NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_LID,
	  NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_TOTAL,
	  NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_SIZE,
	  NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL16",
      VER(NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_LID)
   },
   {
	  NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_LID,
	  NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_TOTAL,
	  NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_SIZE,
	  NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL17",
      VER(NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_LID)
   },
   {
	  NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_LID,
	  NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_TOTAL,
	  NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_SIZE,
	  NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL18",
      VER(NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_LID)
   },
   {
	  NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_LID,
	  NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_TOTAL,
	  NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_SIZE,
	  NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL19",
      VER(NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_LID)
   },
#endif
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)   
	 {
      NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_LID,
      NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_TOTAL,
      NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL1A",
      VER(NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_LID)
	 },
#endif
   {
      NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_LID,
      NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_TOTAL,
      NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL1B",
      VER(NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_LID)
   },

   {
      NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_LID,
      NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_TOTAL,
      NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CL1C",
      VER(NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_LID)
   },
	{
		NVRAM_EF_CL1_DPD_COMMON_CTRL_LID,
		NVRAM_EF_CL1_DPD_COMMON_CTRL_TOTAL,
		NVRAM_EF_CL1_DPD_COMMON_CTRL_SIZE,
		NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
		NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
		NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
		"CL1D",
		VER(NVRAM_EF_CL1_DPD_COMMON_CTRL_LID)
	},
	{
		NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_LID,
		NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_TOTAL,
		NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_SIZE,
		NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
		NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
		NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
		"CL1E",
		VER(NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_LID)
	},
	{
      NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_LID,
      NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_TOTAL,
      NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_SIZE,
      NVRAM_NORMAL(&cl1TxPwrOffset),
      NVRAM_CATEGORY_USER,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "CL1F",
      VER(NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_LID)
   },
   
   NVRAM_LTABLE_END
};

#endif /* __C2K_RAT__ */

#endif /* NVRAM_NOT_PRESENT */
