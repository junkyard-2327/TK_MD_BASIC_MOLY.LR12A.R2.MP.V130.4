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
*   lte_custom_rf_et.c
*
* Project:
* --------
*   MT6293
*
*============================================================================*/

#include "kal_general_types.h"
#include "el1d_rf_ca.h"
#include "el1d_rf_custom_data_et.h"
#include "lte_custom_rf.h"
#include "lte_custom_rf_ca.h"
#include "lte_custom_mipi_et.h"
#include "el1d_rf_ca.h"
#include "lte_custom_rf_et.h"


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
// SetDefault BandNone
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_BandNone_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_BandNone_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_BandNone_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_BandNone_FILTER_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_BandNone_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_BandNone_FILTER_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_BandNone_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_BandNone_ET_DRIVER_PARA_SetDefault =
{
   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_BandNone_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_VAB_MAX_SetDefault,
   {
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
   },
   LTE_BandNone_ET_VSET_MAX_SetDefault,
   LTE_BandNone_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_BandNone_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_VAB_MAX_SetDefault,
   {
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
   },
   LTE_BandNone_ET_VSET_MAX_SetDefault,
   LTE_BandNone_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_BandNone_FILTER_ET_DRIVER_PARA_SetDefault =
{
   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_BandNone_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_VAB_MAX_SetDefault,
   {
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
   },
   LTE_BandNone_ET_VSET_MAX_SetDefault,
   LTE_BandNone_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_BandNone_FILTER_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_BandNone_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_BandNone_ET_VAB_MAX_SetDefault,
   {
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
      LTE_BandNone_ET_VAB_MIN_SetDefault,
   },
   LTE_BandNone_ET_VSET_MAX_SetDefault,
   LTE_BandNone_ET_VSET_MIN_SetDefault
};

#if IS_LTE_ET_FRONT_END_ENABLE_SetDefault

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band1_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band1_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band2_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band2_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band3_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band3_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band4_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band4_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band5_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band5_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band6_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band6_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band7_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band7_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band8_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band8_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band9_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band9_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band11_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band11_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band12_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band12_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band13_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band13_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band14_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band14_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band17_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band17_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band18_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band18_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band19_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band19_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band20_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band20_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band21_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band21_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band22_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band22_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band25_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band25_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band26_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band26_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band27_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band27_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band28_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band28_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band29_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band29_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band30_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band30_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band32_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band32_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band34_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band34_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band38_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band38_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band39_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band39_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band40_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band40_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band41_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band41_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band42_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band42_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band43_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band43_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band44_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band44_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band66_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band66_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band252_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band252_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band255_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band255_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route25_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route25_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route26_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route26_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route27_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route27_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route28_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route28_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route29_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route29_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route30_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route30_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route31_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route31_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route32_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route32_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route33_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route33_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route34_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route34_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route35_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route35_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route36_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route36_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route37_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route37_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route38_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route38_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band1_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band1_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band2_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band2_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band3_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band3_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band4_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band4_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band5_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band5_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band6_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band6_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band7_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band7_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band8_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band8_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band9_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band9_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band11_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band11_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band12_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band12_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band13_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band13_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band14_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band14_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band17_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band17_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band18_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band18_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band19_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band19_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band20_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band20_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band21_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band21_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band22_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band22_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band25_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band25_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band26_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band26_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band27_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band27_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band28_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band28_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band29_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band29_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band30_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band30_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band32_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band32_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band34_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band34_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band38_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band38_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band39_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band39_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band40_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band40_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band41_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band41_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band42_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band42_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band43_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band43_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band44_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band44_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band66_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band66_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band252_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band252_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band255_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band255_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route25_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route25_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route26_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route26_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route27_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route27_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route28_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route28_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route29_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route29_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route30_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route30_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route31_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route31_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route32_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route32_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route33_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route33_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route34_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route34_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route35_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route35_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route36_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route36_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route37_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route37_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Route38_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Route38_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band38_FILTER_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band38_FILTER_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band40_FILTER_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band40_FILTER_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band41_FILTER_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band41_FILTER_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band38_FILTER_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band38_FILTER_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band40_FILTER_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band40_FILTER_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T LTE_Band41_FILTER_CCA_ET_MANUAL_PARA_SetDefault =
{

   /*swOptMode*/
   LTE_Band41_FILTER_CCA_ETM_SW_OPT_MODE_SetDefault,
   /*backoff_thres*/
   20,
   /*backoff_case*/
   { 
      0x0060, 0x0060
   },

};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band1_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band1_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band1_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band1_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band1_ET_VAB_MAX_SetDefault,
   {
      LTE_Band1_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band1_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band1_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band1_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band1_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band1_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band1_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band1_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band1_ET_VSET_MAX_SetDefault,
   LTE_Band1_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band2_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band2_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band2_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band2_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band2_ET_VAB_MAX_SetDefault,
   {
      LTE_Band2_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band2_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band2_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band2_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band2_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band2_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band2_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band2_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band2_ET_VSET_MAX_SetDefault,
   LTE_Band2_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band3_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band3_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band3_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band3_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band3_ET_VAB_MAX_SetDefault,
   {
      LTE_Band3_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band3_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band3_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band3_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band3_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band3_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band3_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band3_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band3_ET_VSET_MAX_SetDefault,
   LTE_Band3_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band4_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band4_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band4_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band4_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band4_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band4_ET_VAB_MAX_SetDefault,
   {
      LTE_Band4_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band4_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band4_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band4_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band4_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band4_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band4_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band4_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band4_ET_VSET_MAX_SetDefault,
   LTE_Band4_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band5_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band5_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band5_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band5_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band5_ET_VAB_MAX_SetDefault,
   {
      LTE_Band5_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band5_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band5_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band5_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band5_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band5_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band5_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band5_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band5_ET_VSET_MAX_SetDefault,
   LTE_Band5_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band6_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band6_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band6_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band6_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band6_ET_VAB_MAX_SetDefault,
   {
      LTE_Band6_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band6_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band6_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band6_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band6_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band6_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band6_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band6_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band6_ET_VSET_MAX_SetDefault,
   LTE_Band6_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band7_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band7_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band7_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band7_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band7_ET_VAB_MAX_SetDefault,
   {
      LTE_Band7_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band7_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band7_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band7_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band7_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band7_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band7_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band7_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band7_ET_VSET_MAX_SetDefault,
   LTE_Band7_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band8_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band8_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band8_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band8_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band8_ET_VAB_MAX_SetDefault,
   {
      LTE_Band8_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band8_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band8_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band8_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band8_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band8_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band8_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band8_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band8_ET_VSET_MAX_SetDefault,
   LTE_Band8_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band9_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band9_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band9_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band9_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band9_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band9_ET_VAB_MAX_SetDefault,
   {
      LTE_Band9_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band9_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band9_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band9_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band9_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band9_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band9_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band9_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band9_ET_VSET_MAX_SetDefault,
   LTE_Band9_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band11_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band11_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band11_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band11_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band11_ET_VAB_MAX_SetDefault,
   {
      LTE_Band11_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band11_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band11_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band11_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band11_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band11_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band11_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band11_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band11_ET_VSET_MAX_SetDefault,
   LTE_Band11_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band12_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band12_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band12_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band12_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band12_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band12_ET_VAB_MAX_SetDefault,
   {
      LTE_Band12_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band12_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band12_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band12_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band12_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band12_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band12_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band12_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band12_ET_VSET_MAX_SetDefault,
   LTE_Band12_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band13_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band13_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band13_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band13_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band13_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band13_ET_VAB_MAX_SetDefault,
   {
      LTE_Band13_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band13_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band13_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band13_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band13_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band13_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band13_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band13_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band13_ET_VSET_MAX_SetDefault,
   LTE_Band13_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band14_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band14_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band14_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band14_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band14_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band14_ET_VAB_MAX_SetDefault,
   {
      LTE_Band14_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band14_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band14_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band14_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band14_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band14_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band14_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band14_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band14_ET_VSET_MAX_SetDefault,
   LTE_Band14_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band17_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band17_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band17_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band17_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band17_ET_VAB_MAX_SetDefault,
   {
      LTE_Band17_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band17_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band17_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band17_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band17_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band17_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band17_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band17_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band17_ET_VSET_MAX_SetDefault,
   LTE_Band17_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band18_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band18_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band18_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band18_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band18_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band18_ET_VAB_MAX_SetDefault,
   {
      LTE_Band18_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band18_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band18_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band18_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band18_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band18_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band18_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band18_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band18_ET_VSET_MAX_SetDefault,
   LTE_Band18_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band19_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band19_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band19_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band19_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band19_ET_VAB_MAX_SetDefault,
   {
      LTE_Band19_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band19_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band19_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band19_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band19_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band19_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band19_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band19_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band19_ET_VSET_MAX_SetDefault,
   LTE_Band19_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band20_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band20_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band20_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band20_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band20_ET_VAB_MAX_SetDefault,
   {
      LTE_Band20_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band20_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band20_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band20_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band20_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band20_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band20_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band20_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band20_ET_VSET_MAX_SetDefault,
   LTE_Band20_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band21_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band21_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band21_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band21_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band21_ET_VAB_MAX_SetDefault,
   {
      LTE_Band21_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band21_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band21_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band21_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band21_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band21_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band21_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band21_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band21_ET_VSET_MAX_SetDefault,
   LTE_Band21_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band22_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band22_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band22_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band22_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band22_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band22_ET_VAB_MAX_SetDefault,
   {
      LTE_Band22_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band22_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band22_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band22_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band22_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band22_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band22_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band22_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band22_ET_VSET_MAX_SetDefault,
   LTE_Band22_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band25_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band25_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band25_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band25_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band25_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band25_ET_VAB_MAX_SetDefault,
   {
      LTE_Band25_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band25_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band25_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band25_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band25_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band25_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band25_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band25_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band25_ET_VSET_MAX_SetDefault,
   LTE_Band25_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band26_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band26_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band26_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band26_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band26_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band26_ET_VAB_MAX_SetDefault,
   {
      LTE_Band26_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band26_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band26_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band26_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band26_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band26_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band26_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band26_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band26_ET_VSET_MAX_SetDefault,
   LTE_Band26_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band27_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band27_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band27_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band27_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band27_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band27_ET_VAB_MAX_SetDefault,
   {
      LTE_Band27_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band27_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band27_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band27_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band27_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band27_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band27_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band27_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band27_ET_VSET_MAX_SetDefault,
   LTE_Band27_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band28_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band28_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band28_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band28_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band28_ET_VAB_MAX_SetDefault,
   {
      LTE_Band28_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band28_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band28_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band28_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band28_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band28_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band28_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band28_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band28_ET_VSET_MAX_SetDefault,
   LTE_Band28_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band29_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band29_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band29_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band29_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band29_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band29_ET_VAB_MAX_SetDefault,
   {
      LTE_Band29_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band29_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band29_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band29_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band29_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band29_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band29_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band29_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band29_ET_VSET_MAX_SetDefault,
   LTE_Band29_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band30_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band30_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band30_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band30_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band30_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band30_ET_VAB_MAX_SetDefault,
   {
      LTE_Band30_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band30_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band30_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band30_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band30_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band30_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band30_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band30_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band30_ET_VSET_MAX_SetDefault,
   LTE_Band30_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band32_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band32_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band32_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band32_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band32_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band32_ET_VAB_MAX_SetDefault,
   {
      LTE_Band32_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band32_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band32_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band32_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band32_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band32_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band32_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band32_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band32_ET_VSET_MAX_SetDefault,
   LTE_Band32_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band34_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band34_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band34_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band34_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band34_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band34_ET_VAB_MAX_SetDefault,
   {
      LTE_Band34_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band34_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band34_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band34_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band34_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band34_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band34_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band34_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band34_ET_VSET_MAX_SetDefault,
   LTE_Band34_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band38_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band38_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_ET_VAB_MAX_SetDefault,
   {
      LTE_Band38_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band38_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band38_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band38_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band38_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band38_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band38_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band38_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band38_ET_VSET_MAX_SetDefault,
   LTE_Band38_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band39_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band39_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band39_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band39_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band39_ET_VAB_MAX_SetDefault,
   {
      LTE_Band39_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band39_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band39_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band39_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band39_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band39_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band39_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band39_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band39_ET_VSET_MAX_SetDefault,
   LTE_Band39_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band40_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band40_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_ET_VAB_MAX_SetDefault,
   {
      LTE_Band40_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band40_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band40_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band40_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band40_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band40_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band40_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band40_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band40_ET_VSET_MAX_SetDefault,
   LTE_Band40_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band41_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band41_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_ET_VAB_MAX_SetDefault,
   {
      LTE_Band41_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band41_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band41_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band41_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band41_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band41_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band41_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band41_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band41_ET_VSET_MAX_SetDefault,
   LTE_Band41_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band42_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band42_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band42_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band42_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band42_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band42_ET_VAB_MAX_SetDefault,
   {
      LTE_Band42_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band42_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band42_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band42_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band42_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band42_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band42_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band42_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band42_ET_VSET_MAX_SetDefault,
   LTE_Band42_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band43_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band43_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band43_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band43_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band43_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band43_ET_VAB_MAX_SetDefault,
   {
      LTE_Band43_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band43_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band43_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band43_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band43_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band43_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band43_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band43_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band43_ET_VSET_MAX_SetDefault,
   LTE_Band43_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band44_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band44_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band44_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band44_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band44_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band44_ET_VAB_MAX_SetDefault,
   {
      LTE_Band44_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band44_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band44_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band44_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band44_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band44_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band44_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band44_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band44_ET_VSET_MAX_SetDefault,
   LTE_Band44_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band66_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band66_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band66_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band66_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band66_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band66_ET_VAB_MAX_SetDefault,
   {
      LTE_Band66_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band66_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band66_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band66_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band66_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band66_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band66_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band66_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band66_ET_VSET_MAX_SetDefault,
   LTE_Band66_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band252_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band252_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band252_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band252_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band252_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band252_ET_VAB_MAX_SetDefault,
   {
      LTE_Band252_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band252_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band252_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band252_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band252_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band252_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band252_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band252_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band252_ET_VSET_MAX_SetDefault,
   LTE_Band252_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band255_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band255_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band255_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band255_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band255_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band255_ET_VAB_MAX_SetDefault,
   {
      LTE_Band255_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band255_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band255_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band255_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band255_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band255_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band255_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band255_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band255_ET_VSET_MAX_SetDefault,
   LTE_Band255_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route25_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route25_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route25_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route25_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route25_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route25_ET_VAB_MAX_SetDefault,
   {
      LTE_Route25_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route25_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route25_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route25_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route25_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route25_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route25_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route25_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route25_ET_VSET_MAX_SetDefault,
   LTE_Route25_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route26_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route26_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route26_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route26_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route26_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route26_ET_VAB_MAX_SetDefault,
   {
      LTE_Route26_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route26_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route26_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route26_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route26_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route26_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route26_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route26_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route26_ET_VSET_MAX_SetDefault,
   LTE_Route26_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route27_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route27_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route27_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route27_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route27_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route27_ET_VAB_MAX_SetDefault,
   {
      LTE_Route27_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route27_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route27_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route27_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route27_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route27_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route27_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route27_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route27_ET_VSET_MAX_SetDefault,
   LTE_Route27_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route28_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route28_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route28_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route28_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route28_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route28_ET_VAB_MAX_SetDefault,
   {
      LTE_Route28_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route28_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route28_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route28_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route28_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route28_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route28_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route28_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route28_ET_VSET_MAX_SetDefault,
   LTE_Route28_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route29_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route29_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route29_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route29_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route29_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route29_ET_VAB_MAX_SetDefault,
   {
      LTE_Route29_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route29_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route29_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route29_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route29_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route29_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route29_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route29_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route29_ET_VSET_MAX_SetDefault,
   LTE_Route29_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route30_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route30_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route30_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route30_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route30_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route30_ET_VAB_MAX_SetDefault,
   {
      LTE_Route30_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route30_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route30_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route30_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route30_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route30_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route30_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route30_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route30_ET_VSET_MAX_SetDefault,
   LTE_Route30_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route31_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route31_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route31_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route31_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route31_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route31_ET_VAB_MAX_SetDefault,
   {
      LTE_Route31_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route31_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route31_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route31_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route31_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route31_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route31_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route31_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route31_ET_VSET_MAX_SetDefault,
   LTE_Route31_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route32_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route32_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route32_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route32_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route32_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route32_ET_VAB_MAX_SetDefault,
   {
      LTE_Route32_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route32_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route32_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route32_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route32_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route32_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route32_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route32_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route32_ET_VSET_MAX_SetDefault,
   LTE_Route32_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route33_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route33_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route33_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route33_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route33_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route33_ET_VAB_MAX_SetDefault,
   {
      LTE_Route33_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route33_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route33_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route33_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route33_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route33_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route33_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route33_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route33_ET_VSET_MAX_SetDefault,
   LTE_Route33_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route34_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route34_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route34_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route34_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route34_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route34_ET_VAB_MAX_SetDefault,
   {
      LTE_Route34_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route34_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route34_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route34_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route34_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route34_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route34_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route34_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route34_ET_VSET_MAX_SetDefault,
   LTE_Route34_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route35_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route35_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route35_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route35_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route35_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route35_ET_VAB_MAX_SetDefault,
   {
      LTE_Route35_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route35_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route35_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route35_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route35_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route35_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route35_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route35_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route35_ET_VSET_MAX_SetDefault,
   LTE_Route35_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route36_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route36_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route36_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route36_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route36_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route36_ET_VAB_MAX_SetDefault,
   {
      LTE_Route36_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route36_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route36_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route36_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route36_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route36_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route36_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route36_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route36_ET_VSET_MAX_SetDefault,
   LTE_Route36_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route37_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route37_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route37_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route37_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route37_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route37_ET_VAB_MAX_SetDefault,
   {
      LTE_Route37_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route37_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route37_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route37_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route37_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route37_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route37_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route37_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route37_ET_VSET_MAX_SetDefault,
   LTE_Route37_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route38_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route38_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route38_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route38_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route38_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route38_ET_VAB_MAX_SetDefault,
   {
      LTE_Route38_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route38_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route38_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route38_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route38_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route38_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route38_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route38_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route38_ET_VSET_MAX_SetDefault,
   LTE_Route38_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band1_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band1_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band1_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band1_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band1_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band1_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band1_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band1_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band1_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band1_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band1_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band1_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band1_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band1_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band1_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band1_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band2_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band2_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band2_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band2_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band2_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band2_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band2_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band2_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band2_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band2_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band2_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band2_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band2_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band2_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band2_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band2_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band3_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band3_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band3_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band3_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band3_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band3_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band3_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band3_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band3_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band3_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band3_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band3_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band3_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band3_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band3_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band3_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band4_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band4_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band4_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band4_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band4_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band4_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band4_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band4_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band4_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band4_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band4_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band4_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band4_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band4_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band4_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band4_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band5_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band5_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band5_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band5_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band5_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band5_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band5_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band5_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band5_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band5_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band5_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band5_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band5_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band5_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band5_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band5_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band6_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band6_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band6_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band6_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band6_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band6_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band6_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band6_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band6_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band6_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band6_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band6_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band6_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band6_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band6_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band6_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band7_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band7_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band7_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band7_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band7_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band7_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band7_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band7_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band7_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band7_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band7_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band7_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band7_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band7_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band7_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band7_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band8_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band8_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band8_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band8_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band8_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band8_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band8_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band8_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band8_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band8_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band8_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band8_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band8_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band8_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band8_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band8_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band9_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band9_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band9_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band9_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band9_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band9_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band9_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band9_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band9_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band9_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band9_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band9_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band9_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band9_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band9_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band9_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band11_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band11_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band11_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band11_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band11_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band11_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band11_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band11_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band11_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band11_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band11_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band11_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band11_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band11_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band11_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band11_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band12_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band12_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band12_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band12_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band12_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band12_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band12_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band12_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band12_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band12_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band12_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band12_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band12_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band12_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band12_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band12_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band13_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band13_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band13_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band13_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band13_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band13_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band13_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band13_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band13_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band13_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band13_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band13_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band13_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band13_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band13_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band13_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band14_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band14_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band14_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band14_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band14_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band14_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band14_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band14_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band14_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band14_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band14_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band14_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band14_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band14_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band14_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band14_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band17_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band17_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band17_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band17_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band17_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band17_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band17_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band17_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band17_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band17_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band17_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band17_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band17_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band17_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band17_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band17_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band18_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band18_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band18_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band18_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band18_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band18_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band18_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band18_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band18_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band18_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band18_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band18_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band18_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band18_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band18_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band18_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band19_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band19_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band19_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band19_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band19_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band19_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band19_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band19_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band19_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band19_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band19_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band19_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band19_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band19_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band19_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band19_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band20_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band20_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band20_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band20_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band20_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band20_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band20_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band20_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band20_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band20_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band20_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band20_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band20_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band20_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band20_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band20_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band21_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band21_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band21_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band21_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band21_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band21_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band21_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band21_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band21_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band21_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band21_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band21_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band21_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band21_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band21_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band21_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band22_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band22_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band22_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band22_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band22_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band22_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band22_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band22_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band22_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band22_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band22_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band22_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band22_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band22_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band22_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band22_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band25_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band25_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band25_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band25_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band25_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band25_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band25_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band25_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band25_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band25_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band25_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band25_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band25_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band25_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band25_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band25_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band26_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band26_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band26_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band26_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band26_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band26_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band26_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band26_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band26_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band26_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band26_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band26_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band26_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band26_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band26_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band26_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band27_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band27_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band27_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band27_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band27_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band27_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band27_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band27_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band27_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band27_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band27_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band27_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band27_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band27_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band27_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band27_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band28_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band28_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band28_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band28_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band28_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band28_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band28_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band28_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band28_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band28_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band28_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band28_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band28_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band28_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band28_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band28_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band29_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band29_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band29_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band29_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band29_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band29_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band29_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band29_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band29_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band29_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band29_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band29_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band29_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band29_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band29_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band29_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band30_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band30_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band30_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band30_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band30_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band30_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band30_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band30_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band30_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band30_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band30_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band30_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band30_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band30_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band30_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band30_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band32_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band32_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band32_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band32_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band32_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band32_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band32_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band32_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band32_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band32_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band32_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band32_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band32_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band32_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band32_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band32_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band34_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band34_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band34_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band34_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band34_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band34_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band34_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band34_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band34_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band34_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band34_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band34_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band34_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band34_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band34_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band34_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band38_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band38_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band38_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band38_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band38_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band38_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band38_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band38_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band38_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band38_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band38_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band38_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band38_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band39_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band39_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band39_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band39_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band39_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band39_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band39_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band39_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band39_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band39_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band39_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band39_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band39_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band39_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band39_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band39_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band40_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band40_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band40_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band40_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band40_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band40_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band40_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band40_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band40_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band40_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band40_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band40_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band40_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band41_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band41_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band41_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band41_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band41_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band41_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band41_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band41_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band41_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band41_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band41_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band41_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band41_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band42_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band42_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band42_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band42_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band42_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band42_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band42_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band42_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band42_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band42_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band42_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band42_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band42_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band42_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band42_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band42_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band43_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band43_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band43_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band43_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band43_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band43_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band43_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band43_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band43_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band43_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band43_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band43_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band43_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band43_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band43_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band43_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band44_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band44_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band44_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band44_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band44_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band44_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band44_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band44_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band44_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band44_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band44_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band44_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band44_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band44_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band44_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band44_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band66_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band66_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band66_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band66_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band66_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band66_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band66_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band66_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band66_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band66_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band66_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band66_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band66_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band66_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band66_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band66_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band252_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band252_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band252_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band252_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band252_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band252_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band252_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band252_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band252_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band252_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band252_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band252_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band252_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band252_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band252_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band252_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band255_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band255_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band255_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band255_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band255_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band255_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band255_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band255_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band255_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band255_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band255_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band255_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band255_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band255_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band255_CCA_ET_VSET_MAX_SetDefault,
   LTE_Band255_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route25_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route25_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route25_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route25_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route25_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route25_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route25_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route25_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route25_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route25_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route25_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route25_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route25_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route25_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route25_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route25_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route26_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route26_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route26_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route26_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route26_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route26_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route26_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route26_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route26_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route26_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route26_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route26_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route26_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route26_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route26_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route26_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route27_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route27_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route27_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route27_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route27_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route27_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route27_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route27_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route27_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route27_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route27_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route27_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route27_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route27_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route27_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route27_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route28_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route28_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route28_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route28_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route28_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route28_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route28_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route28_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route28_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route28_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route28_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route28_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route28_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route28_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route28_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route28_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route29_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route29_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route29_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route29_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route29_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route29_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route29_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route29_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route29_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route29_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route29_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route29_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route29_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route29_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route29_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route29_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route30_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route30_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route30_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route30_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route30_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route30_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route30_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route30_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route30_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route30_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route30_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route30_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route30_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route30_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route30_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route30_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route31_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route31_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route31_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route31_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route31_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route31_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route31_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route31_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route31_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route31_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route31_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route31_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route31_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route31_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route31_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route31_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route32_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route32_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route32_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route32_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route32_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route32_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route32_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route32_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route32_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route32_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route32_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route32_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route32_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route32_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route32_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route32_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route33_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route33_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route33_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route33_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route33_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route33_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route33_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route33_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route33_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route33_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route33_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route33_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route33_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route33_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route33_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route33_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route34_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route34_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route34_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route34_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route34_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route34_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route34_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route34_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route34_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route34_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route34_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route34_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route34_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route34_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route34_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route34_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route35_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route35_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route35_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route35_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route35_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route35_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route35_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route35_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route35_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route35_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route35_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route35_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route35_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route35_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route35_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route35_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route36_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route36_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route36_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route36_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route36_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route36_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route36_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route36_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route36_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route36_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route36_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route36_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route36_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route36_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route36_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route36_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route37_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route37_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route37_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route37_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route37_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route37_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route37_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route37_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route37_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route37_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route37_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route37_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route37_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route37_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route37_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route37_CCA_ET_VSET_MIN_SetDefault
};


const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Route38_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Route38_CCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Route38_CCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Route38_CCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route38_CCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Route38_CCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Route38_CCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Route38_CCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Route38_CCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Route38_CCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Route38_CCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Route38_CCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Route38_CCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Route38_CCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Route38_CCA_ET_VSET_MAX_SetDefault,
   LTE_Route38_CCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band38_FILTER_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band38_FILTER_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band38_FILTER_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_FILTER_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_FILTER_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_FILTER_ET_VAB_MAX_SetDefault,
   {
      LTE_Band38_FILTER_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTER_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTER_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTER_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTER_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTER_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTER_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTER_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band38_FILTER_ET_VSET_MAX_SetDefault,
   LTE_Band38_FILTER_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band40_FILTER_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band40_FILTER_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band40_FILTER_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_FILTER_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_FILTER_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_FILTER_ET_VAB_MAX_SetDefault,
   {
      LTE_Band40_FILTER_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTER_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTER_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTER_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTER_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTER_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTER_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTER_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band40_FILTER_ET_VSET_MAX_SetDefault,
   LTE_Band40_FILTER_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band41_FILTER_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band41_FILTER_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band41_FILTER_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_FILTER_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_FILTER_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_FILTER_ET_VAB_MAX_SetDefault,
   {
      LTE_Band41_FILTER_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTER_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTER_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTER_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTER_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTER_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTER_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTER_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band41_FILTER_ET_VSET_MAX_SetDefault,
   LTE_Band41_FILTER_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band38_FILTER_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band38_FILTERCCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band38_FILTERCCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_FILTERCCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_FILTERCCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band38_FILTERCCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band38_FILTERCCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTERCCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTERCCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTERCCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTERCCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTERCCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTERCCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band38_FILTERCCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band38_FILTERCCA_ET_VSET_MAX_SetDefault,
   LTE_Band38_FILTERCCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band40_FILTER_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band40_FILTERCCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band40_FILTERCCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_FILTERCCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_FILTERCCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band40_FILTERCCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band40_FILTERCCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTERCCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTERCCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTERCCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTERCCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTERCCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTERCCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band40_FILTERCCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band40_FILTERCCA_ET_VSET_MAX_SetDefault,
   LTE_Band40_FILTERCCA_ET_VSET_MIN_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T LTE_Band41_FILTER_CCA_ET_DRIVER_PARA_SetDefault =
{
   LTE_Band41_FILTERCCA_ET_OUTER_LOOP_GAIN_SETTING_SetDefault,
   LTE_Band41_FILTERCCA_ET_VPA_OFFSET_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_FILTERCCA_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_FILTERCCA_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING_SetDefault,
   LTE_Band41_FILTERCCA_ET_VAB_MAX_SetDefault,
   {
      LTE_Band41_FILTERCCA_SUB0_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTERCCA_SUB1_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTERCCA_SUB2_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTERCCA_SUB3_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTERCCA_SUB4_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTERCCA_SUB5_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTERCCA_SUB6_ET_VAB_MIN_SetDefault,
      LTE_Band41_FILTERCCA_SUB7_ET_VAB_MIN_SetDefault,
   },
   LTE_Band41_FILTERCCA_ET_VSET_MAX_SetDefault,
   LTE_Band41_FILTERCCA_ET_VSET_MIN_SetDefault
};

#endif // IS_LTE_ET_FRONT_END_ENABLE_SetDefault

#if IS_LTE_ET_FRONT_END_ENABLE_SetDefault

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T* LTE_ET_MANUAL_PARA_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR0,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR1,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR2,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR3,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR4,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR5,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR6,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR7,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR8,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR9,  SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR10, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR11, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR12, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR13, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR14, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR15, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR16, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR17, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR18, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR19, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR20, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR21, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR22, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR23, SetDefault),
   &LTE_ET_MANUAL_PARA(BAND_INDICATOR24, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route25, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route26, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route27, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route28, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route29, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route30, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route31, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route32, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route33, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route34, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route35, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route36, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route37, SetDefault),
   &LTE_ET_MANUAL_PARA_ROUTE(LTE_Route38, SetDefault)
};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T* LTE_CCA_ET_MANUAL_PARA_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR0,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR1,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR2,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR3,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR4,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR5,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR6,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR7,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR8,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR9,  SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR10, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR11, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR12, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR13, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR14, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR15, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR16, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR17, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR18, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR19, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR20, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR21, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR22, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR23, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA(BAND_INDICATOR24, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route25, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route26, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route27, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route28, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route29, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route30, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route31, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route32, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route33, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route34, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route35, SetDefault),
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route36, SetDefault),  
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route37, SetDefault),   
   &LTE_CCA_ET_MANUAL_PARA_ROUTE(LTE_Route38, SetDefault)  
};

kal_uint32  LTE_ET_MANUAL_PARA_Size_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR0,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR1,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR2,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR3,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR4,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR5,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR6,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR7,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR8,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR9,  SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR10, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR11, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR12, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR13, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR14, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR15, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR16, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR17, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR18, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR19, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR20, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR21, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR22, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR23, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA(BAND_INDICATOR24, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route25, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route26, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route27, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route28, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route29, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route30, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route31, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route32, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route33, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route34, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route35, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route36, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route37, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_ROUTE(LTE_Route38, SetDefault))
};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T*  LTE_FILTER_ET_MANUAL_PARA_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   &LTE_ET_MANUAL_PARA_FILTER(BAND_FILTER_INDICATOR0, SetDefault),
   &LTE_ET_MANUAL_PARA_FILTER(BAND_FILTER_INDICATOR1, SetDefault),
   &LTE_ET_MANUAL_PARA_FILTER(BAND_FILTER_INDICATOR2, SetDefault)
};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T*  LTE_FILTER_CCA_ET_MANUAL_PARA_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   &LTE_ET_MANUAL_PARA_FILTERCCA(BAND_FILTER_INDICATOR0, SetDefault),
   &LTE_ET_MANUAL_PARA_FILTERCCA(BAND_FILTER_INDICATOR1, SetDefault),
   &LTE_ET_MANUAL_PARA_FILTERCCA(BAND_FILTER_INDICATOR2, SetDefault)
};

kal_uint32  LTE_FILTER_ET_MANUAL_PARA_Size_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   sizeof(&LTE_ET_MANUAL_PARA_FILTER(BAND_FILTER_INDICATOR0, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_FILTER(BAND_FILTER_INDICATOR1, SetDefault)),
   sizeof(&LTE_ET_MANUAL_PARA_FILTER(BAND_FILTER_INDICATOR2, SetDefault))
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T*  LTE_ET_DRIVER_PARA_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR0,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR1,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR2,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR3,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR4,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR5,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR6,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR7,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR8,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR9,  SetDefault),  
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR10, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR11, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR12, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR13, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR14, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR15, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR16, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR17, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR18, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR19, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR20, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR21, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR22, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR23, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR24, SetDefault), 
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route25, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route26, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route27, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route28, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route29, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route30, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route31, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route32, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route33, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route34, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route35, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route36, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route37, SetDefault),
   &LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route38, SetDefault)
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T*  LTE_ET_CCA_DRIVER_PARA_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR0,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR1,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR2,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR3,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR4,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR5,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR6,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR7,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR8,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR9,  SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR10, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR11, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR12, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR13, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR14, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR15, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR16, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR17, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR18, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR19, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR20, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR21, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR22, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR23, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING(BAND_INDICATOR24, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route25, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route26, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route27, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route28, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route29, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route30, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route31, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route32, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route33, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route34, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route35, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route36, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route37, SetDefault),
   &LTE_ET_CCA_DRIVER_PARA_SETTING_ROUTE(LTE_Route38, SetDefault)
};

kal_uint32  LTE_ET_DRIVER_PARA_Size_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR0,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR1,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR2,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR3,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR4,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR5,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR6,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR7,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR8,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR9,  SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR10, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR11, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR12, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR13, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR14, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR15, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR16, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR17, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR18, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR19, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR20, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR21, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR22, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR23, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING(BAND_INDICATOR24, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route25, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route26, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route27, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route28, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route29, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route30, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route31, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route32, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route33, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route34, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route35, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route36, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route37, SetDefault)),
   sizeof(&LTE_ET_DRIVER_PARA_SETTING_ROUTE(LTE_Route38, SetDefault))
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T*  LTE_FILTER_ET_DRIVER_PARA_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   &LTE_ET_FILTER_DRIVER_PARA_SETTING(BAND_FILTER_INDICATOR0, SetDefault),
   &LTE_ET_FILTER_DRIVER_PARA_SETTING(BAND_FILTER_INDICATOR1, SetDefault),
   &LTE_ET_FILTER_DRIVER_PARA_SETTING(BAND_FILTER_INDICATOR2, SetDefault)
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T*  LTE_FILTER_CCA_ET_DRIVER_PARA_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   &LTE_ET_FILTER_CCA_DRIVER_PARA_SETTING(BAND_FILTER_INDICATOR0, SetDefault),
   &LTE_ET_FILTER_CCA_DRIVER_PARA_SETTING(BAND_FILTER_INDICATOR1, SetDefault),
   &LTE_ET_FILTER_CCA_DRIVER_PARA_SETTING(BAND_FILTER_INDICATOR2, SetDefault)
};

kal_uint32  LTE_FILTER_ET_DRIVER_PARA_Size_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   sizeof(&LTE_ET_FILTER_DRIVER_PARA_SETTING(BAND_FILTER_INDICATOR0, SetDefault)),
   sizeof(&LTE_ET_FILTER_DRIVER_PARA_SETTING(BAND_FILTER_INDICATOR1, SetDefault)),
   sizeof(&LTE_ET_FILTER_DRIVER_PARA_SETTING(BAND_FILTER_INDICATOR2, SetDefault))
};

#else

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T* LTE_ET_MANUAL_PARA_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_ET_MANUAL_PARA_SetDefault
};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T* LTE_CCA_ET_MANUAL_PARA_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_MANUAL_PARA_SetDefault
};

kal_uint32  LTE_ET_MANUAL_PARA_Size_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_MANUAL_PARA_SetDefault)
};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T*  LTE_FILTER_ET_MANUAL_PARA_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   &LTE_BandNone_FILTER_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_FILTER_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_FILTER_ET_MANUAL_PARA_SetDefault
};

const LTE_ET_MANUAL_PARAMETER_NVRAM_CUSTOM_T*  LTE_FILTER_CCA_ET_MANUAL_PARA_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   &LTE_BandNone_FILTER_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_FILTER_CCA_ET_MANUAL_PARA_SetDefault,
   &LTE_BandNone_FILTER_CCA_ET_MANUAL_PARA_SetDefault
};

kal_uint32  LTE_FILTER_ET_MANUAL_PARA_Size_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   sizeof(&LTE_BandNone_FILTER_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_FILTER_ET_MANUAL_PARA_SetDefault),
   sizeof(&LTE_BandNone_FILTER_ET_MANUAL_PARA_SetDefault)
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T*  LTE_ET_DRIVER_PARA_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault, 
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault,  
   &LTE_BandNone_ET_DRIVER_PARA_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T*  LTE_ET_CCA_DRIVER_PARA_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_CCA_ET_DRIVER_PARA_SetDefault
};

kal_uint32  LTE_ET_DRIVER_PARA_Size_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_ET_DRIVER_PARA_SetDefault)
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T*  LTE_FILTER_ET_DRIVER_PARA_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   &LTE_BandNone_FILTER_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_FILTER_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_FILTER_ET_DRIVER_PARA_SetDefault
};

const LTE_ET_DRIVER_PARAMETER_NVRAM_CUSTOM_T*  LTE_FILTER_CCA_ET_DRIVER_PARA_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   &LTE_BandNone_FILTER_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_FILTER_CCA_ET_DRIVER_PARA_SetDefault,
   &LTE_BandNone_FILTER_CCA_ET_DRIVER_PARA_SetDefault
};

kal_uint32  LTE_FILTER_ET_DRIVER_PARA_Size_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   sizeof(&LTE_BandNone_FILTER_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_FILTER_ET_DRIVER_PARA_SetDefault),
   sizeof(&LTE_BandNone_FILTER_ET_DRIVER_PARA_SetDefault)
};

#endif

const LTE_ET_Narrow_Band_T NARROW_BAND_SUPPORT_Setdefault=
{
   {
      LTE_BandNone,
      LTE_BandNone,
      LTE_BandNone,
      LTE_BandNone,
      LTE_BandNone,
   }
};

const LTE_ET_Narrow_Band_T* p_NARROW_BAND_SUPPORT_Setdefault =
{
   &NARROW_BAND_SUPPORT_Setdefault,
};

