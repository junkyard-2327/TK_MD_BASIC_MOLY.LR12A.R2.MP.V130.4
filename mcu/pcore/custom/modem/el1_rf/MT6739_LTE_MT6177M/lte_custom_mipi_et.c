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
*   lte_custom_mipi_et.c
*
* Project:
* --------
*   MT6291
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
#include "el1d_rf_cid.h"
#include "lte_rf_public.h"

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
// TX frequency table
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

kal_uint16 LTE_BandNone_freq_SetDefault[8]=
{
   ET_LTE_BandNone_SUB_0_Freq_SetDefault,
   ET_LTE_BandNone_SUB_1_Freq_SetDefault,
   ET_LTE_BandNone_SUB_2_Freq_SetDefault,
   ET_LTE_BandNone_SUB_3_Freq_SetDefault,
   ET_LTE_BandNone_SUB_4_Freq_SetDefault,
   ET_LTE_BandNone_SUB_5_Freq_SetDefault,
   ET_LTE_BandNone_SUB_6_Freq_SetDefault,
   ET_LTE_BandNone_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band1_freq_SetDefault[8]=
{
   ET_LTE_Band1_SUB_0_Freq_SetDefault,
   ET_LTE_Band1_SUB_1_Freq_SetDefault,
   ET_LTE_Band1_SUB_2_Freq_SetDefault,
   ET_LTE_Band1_SUB_3_Freq_SetDefault,
   ET_LTE_Band1_SUB_4_Freq_SetDefault,
   ET_LTE_Band1_SUB_5_Freq_SetDefault,
   ET_LTE_Band1_SUB_6_Freq_SetDefault,
   ET_LTE_Band1_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band2_freq_SetDefault[8]=
{
   ET_LTE_Band2_SUB_0_Freq_SetDefault,
   ET_LTE_Band2_SUB_1_Freq_SetDefault,
   ET_LTE_Band2_SUB_2_Freq_SetDefault,
   ET_LTE_Band2_SUB_3_Freq_SetDefault,
   ET_LTE_Band2_SUB_4_Freq_SetDefault,
   ET_LTE_Band2_SUB_5_Freq_SetDefault,
   ET_LTE_Band2_SUB_6_Freq_SetDefault,
   ET_LTE_Band2_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band3_freq_SetDefault[8]=
{
   ET_LTE_Band3_SUB_0_Freq_SetDefault,
   ET_LTE_Band3_SUB_1_Freq_SetDefault,
   ET_LTE_Band3_SUB_2_Freq_SetDefault,
   ET_LTE_Band3_SUB_3_Freq_SetDefault,
   ET_LTE_Band3_SUB_4_Freq_SetDefault,
   ET_LTE_Band3_SUB_5_Freq_SetDefault,
   ET_LTE_Band3_SUB_6_Freq_SetDefault,
   ET_LTE_Band3_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band4_freq_SetDefault[8]=
{
   ET_LTE_Band4_SUB_0_Freq_SetDefault,
   ET_LTE_Band4_SUB_1_Freq_SetDefault,
   ET_LTE_Band4_SUB_2_Freq_SetDefault,
   ET_LTE_Band4_SUB_3_Freq_SetDefault,
   ET_LTE_Band4_SUB_4_Freq_SetDefault,
   ET_LTE_Band4_SUB_5_Freq_SetDefault,
   ET_LTE_Band4_SUB_6_Freq_SetDefault,
   ET_LTE_Band4_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band5_freq_SetDefault[8]=
{
   ET_LTE_Band5_SUB_0_Freq_SetDefault,
   ET_LTE_Band5_SUB_1_Freq_SetDefault,
   ET_LTE_Band5_SUB_2_Freq_SetDefault,
   ET_LTE_Band5_SUB_3_Freq_SetDefault,
   ET_LTE_Band5_SUB_4_Freq_SetDefault,
   ET_LTE_Band5_SUB_5_Freq_SetDefault,
   ET_LTE_Band5_SUB_6_Freq_SetDefault,
   ET_LTE_Band5_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band7_freq_SetDefault[8]=
{
   ET_LTE_Band7_SUB_0_Freq_SetDefault,
   ET_LTE_Band7_SUB_1_Freq_SetDefault,
   ET_LTE_Band7_SUB_2_Freq_SetDefault,
   ET_LTE_Band7_SUB_3_Freq_SetDefault,
   ET_LTE_Band7_SUB_4_Freq_SetDefault,
   ET_LTE_Band7_SUB_5_Freq_SetDefault,
   ET_LTE_Band7_SUB_6_Freq_SetDefault,
   ET_LTE_Band7_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band8_freq_SetDefault[8]=
{
   ET_LTE_Band8_SUB_0_Freq_SetDefault,
   ET_LTE_Band8_SUB_1_Freq_SetDefault,
   ET_LTE_Band8_SUB_2_Freq_SetDefault,
   ET_LTE_Band8_SUB_3_Freq_SetDefault,
   ET_LTE_Band8_SUB_4_Freq_SetDefault,
   ET_LTE_Band8_SUB_5_Freq_SetDefault,
   ET_LTE_Band8_SUB_6_Freq_SetDefault,
   ET_LTE_Band8_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band9_freq_SetDefault[8]=
{
   ET_LTE_Band9_SUB_0_Freq_SetDefault,
   ET_LTE_Band9_SUB_1_Freq_SetDefault,
   ET_LTE_Band9_SUB_2_Freq_SetDefault,
   ET_LTE_Band9_SUB_3_Freq_SetDefault,
   ET_LTE_Band9_SUB_4_Freq_SetDefault,
   ET_LTE_Band9_SUB_5_Freq_SetDefault,
   ET_LTE_Band9_SUB_6_Freq_SetDefault,
   ET_LTE_Band9_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band11_freq_SetDefault[8]=
{
   ET_LTE_Band11_SUB_0_Freq_SetDefault,
   ET_LTE_Band11_SUB_1_Freq_SetDefault,
   ET_LTE_Band11_SUB_2_Freq_SetDefault,
   ET_LTE_Band11_SUB_3_Freq_SetDefault,
   ET_LTE_Band11_SUB_4_Freq_SetDefault,
   ET_LTE_Band11_SUB_5_Freq_SetDefault,
   ET_LTE_Band11_SUB_6_Freq_SetDefault,
   ET_LTE_Band11_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band12_freq_SetDefault[8]=
{
   ET_LTE_Band12_SUB_0_Freq_SetDefault,
   ET_LTE_Band12_SUB_1_Freq_SetDefault,
   ET_LTE_Band12_SUB_2_Freq_SetDefault,
   ET_LTE_Band12_SUB_3_Freq_SetDefault,
   ET_LTE_Band12_SUB_4_Freq_SetDefault,
   ET_LTE_Band12_SUB_5_Freq_SetDefault,
   ET_LTE_Band12_SUB_6_Freq_SetDefault,
   ET_LTE_Band12_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band13_freq_SetDefault[8]=
{
   ET_LTE_Band13_SUB_0_Freq_SetDefault,
   ET_LTE_Band13_SUB_1_Freq_SetDefault,
   ET_LTE_Band13_SUB_2_Freq_SetDefault,
   ET_LTE_Band13_SUB_3_Freq_SetDefault,
   ET_LTE_Band13_SUB_4_Freq_SetDefault,
   ET_LTE_Band13_SUB_5_Freq_SetDefault,
   ET_LTE_Band13_SUB_6_Freq_SetDefault,
   ET_LTE_Band13_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band17_freq_SetDefault[8]=
{
   ET_LTE_Band17_SUB_0_Freq_SetDefault,
   ET_LTE_Band17_SUB_1_Freq_SetDefault,
   ET_LTE_Band17_SUB_2_Freq_SetDefault,
   ET_LTE_Band17_SUB_3_Freq_SetDefault,
   ET_LTE_Band17_SUB_4_Freq_SetDefault,
   ET_LTE_Band17_SUB_5_Freq_SetDefault,
   ET_LTE_Band17_SUB_6_Freq_SetDefault,
   ET_LTE_Band17_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band18_freq_SetDefault[8]=
{
   ET_LTE_Band18_SUB_0_Freq_SetDefault,
   ET_LTE_Band18_SUB_1_Freq_SetDefault,
   ET_LTE_Band18_SUB_2_Freq_SetDefault,
   ET_LTE_Band18_SUB_3_Freq_SetDefault,
   ET_LTE_Band18_SUB_4_Freq_SetDefault,
   ET_LTE_Band18_SUB_5_Freq_SetDefault,
   ET_LTE_Band18_SUB_6_Freq_SetDefault,
   ET_LTE_Band18_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band19_freq_SetDefault[8]=
{
   ET_LTE_Band19_SUB_0_Freq_SetDefault,
   ET_LTE_Band19_SUB_1_Freq_SetDefault,
   ET_LTE_Band19_SUB_2_Freq_SetDefault,
   ET_LTE_Band19_SUB_3_Freq_SetDefault,
   ET_LTE_Band19_SUB_4_Freq_SetDefault,
   ET_LTE_Band19_SUB_5_Freq_SetDefault,
   ET_LTE_Band19_SUB_6_Freq_SetDefault,
   ET_LTE_Band19_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band20_freq_SetDefault[8]=
{
   ET_LTE_Band20_SUB_0_Freq_SetDefault,
   ET_LTE_Band20_SUB_1_Freq_SetDefault,
   ET_LTE_Band20_SUB_2_Freq_SetDefault,
   ET_LTE_Band20_SUB_3_Freq_SetDefault,
   ET_LTE_Band20_SUB_4_Freq_SetDefault,
   ET_LTE_Band20_SUB_5_Freq_SetDefault,
   ET_LTE_Band20_SUB_6_Freq_SetDefault,
   ET_LTE_Band20_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band21_freq_SetDefault[8]=
{
   ET_LTE_Band21_SUB_0_Freq_SetDefault,
   ET_LTE_Band21_SUB_1_Freq_SetDefault,
   ET_LTE_Band21_SUB_2_Freq_SetDefault,
   ET_LTE_Band21_SUB_3_Freq_SetDefault,
   ET_LTE_Band21_SUB_4_Freq_SetDefault,
   ET_LTE_Band21_SUB_5_Freq_SetDefault,
   ET_LTE_Band21_SUB_6_Freq_SetDefault,
   ET_LTE_Band21_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band22_freq_SetDefault[8]=
{
   ET_LTE_Band22_SUB_0_Freq_SetDefault,
   ET_LTE_Band22_SUB_1_Freq_SetDefault,
   ET_LTE_Band22_SUB_2_Freq_SetDefault,
   ET_LTE_Band22_SUB_3_Freq_SetDefault,
   ET_LTE_Band22_SUB_4_Freq_SetDefault,
   ET_LTE_Band22_SUB_5_Freq_SetDefault,
   ET_LTE_Band22_SUB_6_Freq_SetDefault,
   ET_LTE_Band22_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band25_freq_SetDefault[8]=
{
   ET_LTE_Band25_SUB_0_Freq_SetDefault,
   ET_LTE_Band25_SUB_1_Freq_SetDefault,
   ET_LTE_Band25_SUB_2_Freq_SetDefault,
   ET_LTE_Band25_SUB_3_Freq_SetDefault,
   ET_LTE_Band25_SUB_4_Freq_SetDefault,
   ET_LTE_Band25_SUB_5_Freq_SetDefault,
   ET_LTE_Band25_SUB_6_Freq_SetDefault,
   ET_LTE_Band25_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band26_freq_SetDefault[8]=
{
   ET_LTE_Band26_SUB_0_Freq_SetDefault,
   ET_LTE_Band26_SUB_1_Freq_SetDefault,
   ET_LTE_Band26_SUB_2_Freq_SetDefault,
   ET_LTE_Band26_SUB_3_Freq_SetDefault,
   ET_LTE_Band26_SUB_4_Freq_SetDefault,
   ET_LTE_Band26_SUB_5_Freq_SetDefault,
   ET_LTE_Band26_SUB_6_Freq_SetDefault,
   ET_LTE_Band26_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band27_freq_SetDefault[8]=
{
   ET_LTE_Band27_SUB_0_Freq_SetDefault,
   ET_LTE_Band27_SUB_1_Freq_SetDefault,
   ET_LTE_Band27_SUB_2_Freq_SetDefault,
   ET_LTE_Band27_SUB_3_Freq_SetDefault,
   ET_LTE_Band27_SUB_4_Freq_SetDefault,
   ET_LTE_Band27_SUB_5_Freq_SetDefault,
   ET_LTE_Band27_SUB_6_Freq_SetDefault,
   ET_LTE_Band27_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band28_freq_SetDefault[8]=
{
   ET_LTE_Band28_SUB_0_Freq_SetDefault,
   ET_LTE_Band28_SUB_1_Freq_SetDefault,
   ET_LTE_Band28_SUB_2_Freq_SetDefault,
   ET_LTE_Band28_SUB_3_Freq_SetDefault,
   ET_LTE_Band28_SUB_4_Freq_SetDefault,
   ET_LTE_Band28_SUB_5_Freq_SetDefault,
   ET_LTE_Band28_SUB_6_Freq_SetDefault,
   ET_LTE_Band28_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band29_freq_SetDefault[8]=
{
   ET_LTE_Band29_SUB_0_Freq_SetDefault,
   ET_LTE_Band29_SUB_1_Freq_SetDefault,
   ET_LTE_Band29_SUB_2_Freq_SetDefault,
   ET_LTE_Band29_SUB_3_Freq_SetDefault,
   ET_LTE_Band29_SUB_4_Freq_SetDefault,
   ET_LTE_Band29_SUB_5_Freq_SetDefault,
   ET_LTE_Band29_SUB_6_Freq_SetDefault,
   ET_LTE_Band29_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band30_freq_SetDefault[8]=
{
   ET_LTE_Band30_SUB_0_Freq_SetDefault,
   ET_LTE_Band30_SUB_1_Freq_SetDefault,
   ET_LTE_Band30_SUB_2_Freq_SetDefault,
   ET_LTE_Band30_SUB_3_Freq_SetDefault,
   ET_LTE_Band30_SUB_4_Freq_SetDefault,
   ET_LTE_Band30_SUB_5_Freq_SetDefault,
   ET_LTE_Band30_SUB_6_Freq_SetDefault,
   ET_LTE_Band30_SUB_7_Freq_SetDefault
};


kal_uint16 LTE_Band32_freq_SetDefault[8]=
{
   ET_LTE_Band32_SUB_0_Freq_SetDefault,
   ET_LTE_Band32_SUB_1_Freq_SetDefault,
   ET_LTE_Band32_SUB_2_Freq_SetDefault,
   ET_LTE_Band32_SUB_3_Freq_SetDefault,
   ET_LTE_Band32_SUB_4_Freq_SetDefault,
   ET_LTE_Band32_SUB_5_Freq_SetDefault,
   ET_LTE_Band32_SUB_6_Freq_SetDefault,
   ET_LTE_Band32_SUB_7_Freq_SetDefault
};


kal_uint16 LTE_Band34_freq_SetDefault[8]=
{
   ET_LTE_Band34_SUB_0_Freq_SetDefault,
   ET_LTE_Band34_SUB_1_Freq_SetDefault,
   ET_LTE_Band34_SUB_2_Freq_SetDefault,
   ET_LTE_Band34_SUB_3_Freq_SetDefault,
   ET_LTE_Band34_SUB_4_Freq_SetDefault,
   ET_LTE_Band34_SUB_5_Freq_SetDefault,
   ET_LTE_Band34_SUB_6_Freq_SetDefault,
   ET_LTE_Band34_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band38_freq_SetDefault[8]=
{
   ET_LTE_Band38_SUB_0_Freq_SetDefault,
   ET_LTE_Band38_SUB_1_Freq_SetDefault,
   ET_LTE_Band38_SUB_2_Freq_SetDefault,
   ET_LTE_Band38_SUB_3_Freq_SetDefault,
   ET_LTE_Band38_SUB_4_Freq_SetDefault,
   ET_LTE_Band38_SUB_5_Freq_SetDefault,
   ET_LTE_Band38_SUB_6_Freq_SetDefault,
   ET_LTE_Band38_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band39_freq_SetDefault[8]=
{
   ET_LTE_Band39_SUB_0_Freq_SetDefault,
   ET_LTE_Band39_SUB_1_Freq_SetDefault,
   ET_LTE_Band39_SUB_2_Freq_SetDefault,
   ET_LTE_Band39_SUB_3_Freq_SetDefault,
   ET_LTE_Band39_SUB_4_Freq_SetDefault,
   ET_LTE_Band39_SUB_5_Freq_SetDefault,
   ET_LTE_Band39_SUB_6_Freq_SetDefault,
   ET_LTE_Band39_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band40_freq_SetDefault[8]=
{
   ET_LTE_Band40_SUB_0_Freq_SetDefault,
   ET_LTE_Band40_SUB_1_Freq_SetDefault,
   ET_LTE_Band40_SUB_2_Freq_SetDefault,
   ET_LTE_Band40_SUB_3_Freq_SetDefault,
   ET_LTE_Band40_SUB_4_Freq_SetDefault,
   ET_LTE_Band40_SUB_5_Freq_SetDefault,
   ET_LTE_Band40_SUB_6_Freq_SetDefault,
   ET_LTE_Band40_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band41_freq_SetDefault[8]=
{
   ET_LTE_Band41_SUB_0_Freq_SetDefault,
   ET_LTE_Band41_SUB_1_Freq_SetDefault,
   ET_LTE_Band41_SUB_2_Freq_SetDefault,
   ET_LTE_Band41_SUB_3_Freq_SetDefault,
   ET_LTE_Band41_SUB_4_Freq_SetDefault,
   ET_LTE_Band41_SUB_5_Freq_SetDefault,
   ET_LTE_Band41_SUB_6_Freq_SetDefault,
   ET_LTE_Band41_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band42_freq_SetDefault[8]=
{
   ET_LTE_Band42_SUB_0_Freq_SetDefault,
   ET_LTE_Band42_SUB_1_Freq_SetDefault,
   ET_LTE_Band42_SUB_2_Freq_SetDefault,
   ET_LTE_Band42_SUB_3_Freq_SetDefault,
   ET_LTE_Band42_SUB_4_Freq_SetDefault,
   ET_LTE_Band42_SUB_5_Freq_SetDefault,
   ET_LTE_Band42_SUB_6_Freq_SetDefault,
   ET_LTE_Band42_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band43_freq_SetDefault[8]=
{
   ET_LTE_Band43_SUB_0_Freq_SetDefault,
   ET_LTE_Band43_SUB_1_Freq_SetDefault,
   ET_LTE_Band43_SUB_2_Freq_SetDefault,
   ET_LTE_Band43_SUB_3_Freq_SetDefault,
   ET_LTE_Band43_SUB_4_Freq_SetDefault,
   ET_LTE_Band43_SUB_5_Freq_SetDefault,
   ET_LTE_Band43_SUB_6_Freq_SetDefault,
   ET_LTE_Band43_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band44_freq_SetDefault[8]=
{
   ET_LTE_Band44_SUB_0_Freq_SetDefault,
   ET_LTE_Band44_SUB_1_Freq_SetDefault,
   ET_LTE_Band44_SUB_2_Freq_SetDefault,
   ET_LTE_Band44_SUB_3_Freq_SetDefault,
   ET_LTE_Band44_SUB_4_Freq_SetDefault,
   ET_LTE_Band44_SUB_5_Freq_SetDefault,
   ET_LTE_Band44_SUB_6_Freq_SetDefault,
   ET_LTE_Band44_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band66_freq_SetDefault[8]=
{
   ET_LTE_Band66_SUB_0_Freq_SetDefault,
   ET_LTE_Band66_SUB_1_Freq_SetDefault,
   ET_LTE_Band66_SUB_2_Freq_SetDefault,
   ET_LTE_Band66_SUB_3_Freq_SetDefault,
   ET_LTE_Band66_SUB_4_Freq_SetDefault,
   ET_LTE_Band66_SUB_5_Freq_SetDefault,
   ET_LTE_Band66_SUB_6_Freq_SetDefault,
   ET_LTE_Band66_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band71_freq_SetDefault[8]=
{
   ET_LTE_Band71_SUB_0_Freq_SetDefault,
   ET_LTE_Band71_SUB_1_Freq_SetDefault,
   ET_LTE_Band71_SUB_2_Freq_SetDefault,
   ET_LTE_Band71_SUB_3_Freq_SetDefault,
   ET_LTE_Band71_SUB_4_Freq_SetDefault,
   ET_LTE_Band71_SUB_5_Freq_SetDefault,
   ET_LTE_Band71_SUB_6_Freq_SetDefault,
   ET_LTE_Band71_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band38_Filter_freq_SetDefault[8]=
{
   ET_LTE_Band38_FILTER_SUB_0_Freq_SetDefault,
   ET_LTE_Band38_FILTER_SUB_1_Freq_SetDefault,
   ET_LTE_Band38_FILTER_SUB_2_Freq_SetDefault,
   ET_LTE_Band38_FILTER_SUB_3_Freq_SetDefault,
   ET_LTE_Band38_FILTER_SUB_4_Freq_SetDefault,
   ET_LTE_Band38_FILTER_SUB_5_Freq_SetDefault,
   ET_LTE_Band38_FILTER_SUB_6_Freq_SetDefault,
   ET_LTE_Band38_FILTER_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band40_Filter_freq_SetDefault[8]=
{
   ET_LTE_Band40_FILTER_SUB_0_Freq_SetDefault,
   ET_LTE_Band40_FILTER_SUB_1_Freq_SetDefault,
   ET_LTE_Band40_FILTER_SUB_2_Freq_SetDefault,
   ET_LTE_Band40_FILTER_SUB_3_Freq_SetDefault,
   ET_LTE_Band40_FILTER_SUB_4_Freq_SetDefault,
   ET_LTE_Band40_FILTER_SUB_5_Freq_SetDefault,
   ET_LTE_Band40_FILTER_SUB_6_Freq_SetDefault,
   ET_LTE_Band40_FILTER_SUB_7_Freq_SetDefault
};

kal_uint16 LTE_Band41_Filter_freq_SetDefault[8]=
{
   ET_LTE_Band41_FILTER_SUB_0_Freq_SetDefault,
   ET_LTE_Band41_FILTER_SUB_1_Freq_SetDefault,
   ET_LTE_Band41_FILTER_SUB_2_Freq_SetDefault,
   ET_LTE_Band41_FILTER_SUB_3_Freq_SetDefault,
   ET_LTE_Band41_FILTER_SUB_4_Freq_SetDefault,
   ET_LTE_Band41_FILTER_SUB_5_Freq_SetDefault,
   ET_LTE_Band41_FILTER_SUB_6_Freq_SetDefault,
   ET_LTE_Band41_FILTER_SUB_7_Freq_SetDefault
};

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

LTE_ET_EVENT_TABLE_T LTE_BandNone_ET_TX_EVENT_SetDefault[] =
{
   /* No.        data idx,              evt_type,                       evt_offset                   */
   { /* 0  */  { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0              },
};

LTE_ET_EVENT_TABLE_T LTE_BandNone_FILTER_ET_TX_EVENT_SetDefault[] =
{
   /* No.        data idx,              evt_type,                       evt_offset                   */
   { /* 0  */  { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0              },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_BandNone_ET_TX_DATA_SetDefault[] =
{
   //No.         etm index ,   data_seq , { {  subband freq /*0*/, addr , data}, { subband freq /*1*/     , addr , data}, { subband freq /*2*/     , addr , data}, { subband freq /*3*/     , addr , data}, { subband freq /*4*/     , addr , data}, { subband freq /*5*/     , addr , data}, { subband freq /*6*/     , addr , data}, { subband freq /*7*/     , addr , data},} },
   { /* 0  */ USE_ETM_INDEX_0, 0, { {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},} },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_BandNone_FILTER_ET_TX_DATA_SetDefault[] =
{
   //No.         etm index ,   data_seq , { {  subband freq /*0*/, addr , data}, { subband freq /*1*/     , addr , data}, { subband freq /*2*/     , addr , data}, { subband freq /*3*/     , addr , data}, { subband freq /*4*/     , addr , data}, { subband freq /*5*/     , addr , data}, { subband freq /*6*/     , addr , data}, { subband freq /*7*/     , addr , data},} },
   { /* 0  */ USE_ETM_INDEX_0, 0, { {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},} },
};

/*ET control event and data align with Tx TPC index*/
/*Design for FD mode volatage setting and ET mode warm up sequence base on TPC index*/
LTE_ET_EVENT_TABLE_T LTE_BandNone_ET_TPC_EVENT_SetDefault[] =
{
   /* No.        data idx,              evt_type,                       evt_offset                   */
   { /* 0  */  { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0              },
};

LTE_ET_EVENT_TABLE_T LTE_BandNone_FILTER_ET_TPC_EVENT_SetDefault[] =
{
   /* No.        data idx,              evt_type,                       evt_offset                   */
   { /* 0  */  { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0              },
};

LTE_ET_DATA_TABLE_T LTE_BandNone_ET_TPC_DATA_SetDefault[] =
{
   //No.     elm type      , data_seq  , address, data
   {/* 0  */ LTE_MIPI_NULL        , 0      , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_BandNone_FILTER_ET_TPC_DATA_SetDefault[] =
{
   //No.     elm type      , data_seq  , address, data
   {/* 0  */ LTE_MIPI_NULL        , 0      , 0      , 0               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.      address, data
   {/* 0  */  0      , 0               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_BandNone_FILTER_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.      address, data
   {/* 0  */  0      , 0               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */  0      , 0               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_BandNone_FILTER_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.        address, data
   {/* 0  */    0      , 0               },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //SEC_DATA0, SEC_DATA1, SEC_DATA2
   /* 0*/{{ 0x0, 0x0, 0x0 }},
   /* 1*/{{ 0x0, 0x0, 0x0 }},
   /* 2*/{{ 0x0, 0x0, 0x0 }},
   /* 3*/{{ 0x0, 0x0, 0x0 }},
   /* 4*/{{ 0x0, 0x0, 0x0 }},
   /* 5*/{{ 0x0, 0x0, 0x0 }},
   /* 6*/{{ 0x0, 0x0, 0x0 }},
   /* 7*/{{ 0x0, 0x0, 0x0 }},
   /* 8*/{{ 0x0, 0x0, 0x0 }},
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_BandNone_FILTER_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //SEC_DATA0, SEC_DATA1, SEC_DATA2
   /* 0*/{{ 0x0, 0x0, 0x0 }},
   /* 1*/{{ 0x0, 0x0, 0x0 }},
   /* 2*/{{ 0x0, 0x0, 0x0 }},
   /* 3*/{{ 0x0, 0x0, 0x0 }},
   /* 4*/{{ 0x0, 0x0, 0x0 }},
   /* 5*/{{ 0x0, 0x0, 0x0 }},
   /* 6*/{{ 0x0, 0x0, 0x0 }},
   /* 7*/{{ 0x0, 0x0, 0x0 }},
   /* 8*/{{ 0x0, 0x0, 0x0 }},
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_BandNone_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //SEC_DATA0, SEC_DATA1, SEC_DATA2
   /* 0*/{{ 0x0, 0x0, 0x0 }},
   /* 1*/{{ 0x0, 0x0, 0x0 }},
   /* 2*/{{ 0x0, 0x0, 0x0 }},
   /* 3*/{{ 0x0, 0x0, 0x0 }},
   /* 4*/{{ 0x0, 0x0, 0x0 }},
   /* 5*/{{ 0x0, 0x0, 0x0 }},
   /* 6*/{{ 0x0, 0x0, 0x0 }},
   /* 7*/{{ 0x0, 0x0, 0x0 }},
   /* 8*/{{ 0x0, 0x0, 0x0 }},
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_BandNone_FILTER_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //SEC_DATA0, SEC_DATA1, SEC_DATA2
   /* 0*/{{ 0x0, 0x0, 0x0 }},
   /* 1*/{{ 0x0, 0x0, 0x0 }},
   /* 2*/{{ 0x0, 0x0, 0x0 }},
   /* 3*/{{ 0x0, 0x0, 0x0 }},
   /* 4*/{{ 0x0, 0x0, 0x0 }},
   /* 5*/{{ 0x0, 0x0, 0x0 }},
   /* 6*/{{ 0x0, 0x0, 0x0 }},
   /* 7*/{{ 0x0, 0x0, 0x0 }},
   /* 8*/{{ 0x0, 0x0, 0x0 }},
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.        address, data
   {/* 0  */    0      , 0               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_BandNone_FILTER_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.        address, data
   {/* 0  */    0      , 0               },
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault[] =
{
   {
      0, /*100kHz*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 } }},
      }
   },
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_BandNone_FILTER_ET_MIPI_PA_SECTION_DATA_SetDefault[] =
{
   {
      0, /*100kHz*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 } }},
      }
   },
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_BandNone_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] =
{
   {
      0, /*100kHz*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 } }},
      }
   },
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_BandNone_FILTER_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] =
{
   {
      0, /*100kHz*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 } }},
      }
   },
};


#if IS_LTE_ET_FRONT_END_ENABLE_SetDefault

LTE_ET_EVENT_TABLE_T LTE_Band1_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band2_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band3_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band4_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band5_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band7_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band8_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band9_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band11_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band12_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band13_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band17_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band18_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band19_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band20_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band21_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band22_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band25_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band26_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band27_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band28_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band29_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band30_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band32_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band34_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band38_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band39_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band40_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band41_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band42_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band43_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band44_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band66_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band71_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band38_FILTER_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band40_FILTER_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};

LTE_ET_EVENT_TABLE_T LTE_Band41_FILTER_ET_TX_EVENT_SetDefault[] =
{
   /* No.     data idx,                               evt_type,            evt_offset                    */
   /*                        { start,                                        stop                                        },                      ( us )                        */
   { /* 0  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON00_SetDefault  },	 //ET On
   { /* 1  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON0_SetDefault   },	 //ET On
   { /* 2  */ { LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault, LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault }, LTE_MIPI_TRX_ON,     LTE_ET_TX_ON1_SetDefault   },	 //ET On
   { /* 3  */ { LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault,   LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, LTE_MIPI_TRX_OFF,    LTE_ET_TX_OFF0_SetDefault },       //ET Off
   { /* 4  */ { 0, 0}, LTE_MIPI_EVENT_NULL, 0}
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band1_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band2_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};



LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band3_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band4_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band5_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band7_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band8_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band9_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band11_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};



LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band12_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band13_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band17_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band18_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band19_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band20_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band21_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band22_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band25_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band26_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band27_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band28_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band29_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band30_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band32_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band34_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band38_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band39_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band40_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band41_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band42_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band43_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band44_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band66_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band71_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band38_FILTER_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band40_FILTER_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};


LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band41_FILTER_ET_TX_DATA_SetDefault[] =
{
   //No.      etm index,          data_seq,           { { subband freq /*0*/,                  data,                                             },      { subband freq /*1*/,                  data,                                             },       { subband freq /*2*/,       addr,                    data,                              },      { subband freq /*3*/,                 data,                                             },      { subband freq /*4*/,                  data,                                             },      { subband freq /*5*/,                  data,                                             },      { subband freq /*6*/,                  data,                                             },      { subband freq /*7*/,                  data,                                             },} },
   { /* 0  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 1  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 2  */ USE_ETM_INDEX_0, LTE_REG_W_EXT,      { { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },       { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100, LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,   LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault     },      { ETM_REGISTER_INDEX_100,  LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault      },} },
   { /* 3  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },       { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,  LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },      { ETM_REGISTER_INDEX_01,   LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault  },} },
   { /* 4  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },       { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,  LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },      { ETM_REGISTER_INDEX_08,   LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault },} },
   { /* 5  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_APT_MODE_SetDefault           },} },
   { /* 6  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault          },} },
   { /* 7  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },       { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,  LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },      { ETM_REGISTER_INDEX_09,   LTE_ET_RG09_SETTING_DISABLE_SetDefault            },} },
   { /* 8  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault          },} },
   { /* 9  */ USE_ETM_INDEX_0, LTE_REG_W,          { { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },       { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,  LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },      { ETM_REGISTER_INDEX_00,   LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault        },} },
   { /* 10 */ USE_ETM_INDEX_0, 0,                  { {0, 0}, {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},} },
};

LTE_ET_EVENT_TABLE_T LTE_Band1_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band2_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band3_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band4_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band5_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band7_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band8_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band9_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band11_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band12_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band13_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band17_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band18_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band19_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band20_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band21_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band22_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band25_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band26_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band27_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band28_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band29_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band30_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band32_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band34_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band38_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band39_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band40_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band41_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band42_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band43_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band44_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band66_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band71_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band38_FILTER_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band40_FILTER_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_EVENT_TABLE_T LTE_Band41_FILTER_ET_TPC_EVENT_SetDefault[] =
{
   /* No.     data idx,                                                                                                evt_type,                evt_offset                                 */
   /*                        { start,                                              stop                                              },                          ( us )                                     */
   { /* 0  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault },
   { /* 1  */ { LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault, LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault },
   { /* 2  */ { LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault,      LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault    },   LTE_ET_TPC_BANK_SEL,         LTE_ET_TPC_OFFSET_SetDefault            },
   { /* 3  */ { 0, 0}, LTE_MIPI_EVENT_NULL,     0},
};

LTE_ET_DATA_TABLE_T LTE_Band1_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band2_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band3_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band4_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band5_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band7_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band8_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band9_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band11_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band12_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band13_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band17_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band18_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band19_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band20_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band21_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band22_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band25_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band26_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band27_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band28_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band29_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};


LTE_ET_DATA_TABLE_T LTE_Band30_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band32_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band34_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band38_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band39_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band40_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band41_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band42_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band43_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band44_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band66_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band71_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band38_FILTER_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band40_FILTER_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_ET_DATA_TABLE_T LTE_Band41_FILTER_ET_TPC_DATA_SetDefault[] =
{
   // No.      etm index,            elm type,          data_seq,     address,               data
   {/* 0    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_01, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Register Bank Writing Target Switch
   {/* 1    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_10, LTE_ET_SEC_DATA2                                         }, // LFP power selection mode
   {/* 2    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VAB,   LTE_REG_W,    ETM_REGISTER_INDEX_08, LTE_ET_SEC_DATA1                                         }, // APT mode HFP DAC value
   {/* 3    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_VST,   LTE_REG_W,    ETM_REGISTER_INDEX_11, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // APT mode LFP DAC value is not used.
   {/* 4    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_13, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 5    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_14, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 6    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_BW,    LTE_REG_W,    ETM_REGISTER_INDEX_15, LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault       }, // Bandwidth setting
   {/* 7    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_12, LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE_SetDefault}, // VPA offset value
   {/* 8    */ USE_ETM_INDEX_0,      LTE_MIPI_ET_SEC,   LTE_REG_W,    ETM_REGISTER_INDEX_09, LTE_ET_SEC_DATA0                                         }, // APT or ET mode settings
   {/* 9    */ USE_ETM_INDEX_0,      LTE_MIPI_ET,       LTE_REG_W,    ETM_REGISTER_INDEX_00, LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                 }, // Register Bank Using Target Switch
   {/* 10   */ USE_ETM_INDEX_0, LTE_MIPI_NULL, 0, 0, 0},
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band1_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band2_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band3_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};
LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band4_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band5_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band7_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band8_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band9_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band11_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band12_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band13_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band17_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band18_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band19_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band20_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band21_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band22_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band25_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band26_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band27_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band28_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band29_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band30_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band34_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band38_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band39_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band40_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band41_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band42_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band43_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band44_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band66_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band71_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band38_FILTER_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band40_FILTER_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band41_FILTER_ET_LOOKUP_VPA_DATA_SetDefault[] =
{
   //No.         address,                                data
   {/* 0  */  ETM_REGISTER_INDEX_10      , LTE_ET_LOOKUP_VPA_SEC_DATA0               },
   {/* 1  */  0                                        , 0                                                            },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band1_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band2_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band3_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band4_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band5_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band7_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band8_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band9_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band11_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band12_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band13_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band17_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band18_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band19_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band20_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band21_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band22_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band25_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band26_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band27_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band28_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band29_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band30_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band32_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band34_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band38_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band39_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band40_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band41_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band42_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band43_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band44_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band66_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band71_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band38_FILTER_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band40_FILTER_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band41_FILTER_ET_BW_SWITCH_DATA_SetDefault[] =
{
   //No.         address, data
   {/* 0  */  ETM_REGISTER_INDEX_13      , LTE_ET_BW_SEC_DATA0               },
   {/* 1  */  ETM_REGISTER_INDEX_14      , LTE_ET_BW_SEC_DATA1               },
   {/* 2  */  ETM_REGISTER_INDEX_15      , LTE_ET_BW_SEC_DATA2               },
   {/* 3  */  0                                       , 0                                               },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band1_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band2_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band3_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band4_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band5_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band7_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band8_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band9_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band11_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band12_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band13_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band17_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band18_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band19_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band20_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band21_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band22_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band25_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band26_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band27_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band28_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band29_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band30_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band32_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band34_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band38_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band39_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band40_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band41_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band42_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band43_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band44_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band66_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band71_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band38_FILTER_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                           SEC_DATA1,                                           SEC_DATA2,                                          } },
   /* 0*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band40_FILTER_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                           SEC_DATA1,                                           SEC_DATA2,                                          } },
   /* 0*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band41_FILTER_ET_BW_SWITCH_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                           SEC_DATA1,                                           SEC_DATA2,                                          } },
   /* 0*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band1_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND1_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND1_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND1_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band2_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND2_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND2_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND2_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band3_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND3_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND3_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND3_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band4_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND4_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND4_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND4_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band5_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND5_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND5_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND5_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band7_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND7_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND7_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND7_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band8_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND8_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND8_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND8_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band9_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                   SEC_DATA1,                                   SEC_DATA2,                                  } },
   /* 0*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND9_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND9_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND9_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band11_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND11_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND11_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND11_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band12_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND12_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND12_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND12_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band13_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND13_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND13_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND13_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band17_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND17_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND17_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND17_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band18_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND18_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND18_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND18_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band19_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND19_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND19_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND19_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band20_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND20_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND20_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND20_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band21_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND21_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND21_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND21_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band22_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND22_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND22_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND22_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band25_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND25_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND25_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND25_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band26_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND26_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND26_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND26_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band27_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND27_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND27_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND27_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band28_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND28_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND28_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND28_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band29_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND29_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND29_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND29_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band30_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND30_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND30_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND30_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band32_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND32_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND32_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND32_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band34_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND34_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND34_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND34_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band38_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND38_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND38_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND38_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band39_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND39_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND39_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND39_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band40_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND40_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND40_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND40_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band41_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND41_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND41_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND41_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band42_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND42_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND42_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND42_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band43_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND43_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND43_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND43_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band44_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND44_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND44_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND44_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band66_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND66_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND66_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND66_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band71_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                    SEC_DATA1,                                    SEC_DATA2,                                   } },
   /* 0*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND71_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND71_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND71_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band38_FILTER_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                           SEC_DATA1,                                           SEC_DATA2,                                          } },
   /* 0*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band40_FILTER_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                           SEC_DATA1,                                           SEC_DATA2,                                          } },
   /* 0*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band41_FILTER_ET_BW_SWITCH_CCA_SECTION_DATA_SetDefault[ LTE_ET_BW_SWITCH_SECTION_NUM ] =
{
   //        SEC_DATA0,                                           SEC_DATA1,                                           SEC_DATA2,                                          } },
   /* 0*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL0_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL0_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL0_SetDefault } },
   /* 1*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL1_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL1_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL1_SetDefault } },
   /* 2*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL2_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL2_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL2_SetDefault } },
   /* 3*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL3_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL3_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL3_SetDefault } },
   /* 4*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL4_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL4_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL4_SetDefault } },
   /* 5*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL5_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL5_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL5_SetDefault } },
   /* 6*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL6_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL6_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL6_SetDefault } },
   /* 7*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL7_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL7_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL7_SetDefault } },
   /* 8*/{ { LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL8_SetDefault, LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL8_SetDefault, LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL8_SetDefault } },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band1_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band2_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band3_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band4_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band5_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band7_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band8_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band9_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band11_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band12_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band13_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band17_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band18_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band19_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band20_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band21_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band22_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band25_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band26_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band27_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band28_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band29_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band30_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band32_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band34_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band38_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band39_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band40_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band41_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band42_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band43_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band44_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band66_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band71_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band38_FILTER_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band40_FILTER_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T LTE_Band41_FILTER_ET_MODE_SETTING_DATA_SetDefault[] =
{
   //No.       address, data
   {/* 0  */ ETM_REGISTER_INDEX_09      , LTE_ET_RG09_SETTING_ET_MODE_SetDefault         },
   {/* 1  */ 0                                       , 0                                                                       },
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band1_ET_MIPI_PA_SECTION_DATA_SetDefault[] =
{
   {
      ET_LTE_Band1_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band1_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band1_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band1_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band1_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band1_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band1_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band1_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band2_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band2_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band2_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band2_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band2_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band2_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band2_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band2_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band2_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band3_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band3_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band3_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band3_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band3_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band3_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band3_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band3_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band3_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band4_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band4_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band4_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band4_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band4_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band4_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band4_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band4_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band4_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band5_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band5_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band5_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band5_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band5_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band5_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band5_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band5_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band5_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band7_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band7_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band7_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band7_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band7_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band7_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band7_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band7_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band7_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band8_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band8_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band8_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band8_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band8_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band8_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band8_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band8_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band8_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band9_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band9_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band9_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band9_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band9_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band9_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band9_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band9_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band9_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band11_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band11_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band11_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band11_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band11_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band11_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band11_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band11_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band11_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band12_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band12_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band12_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band12_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band12_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band12_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band12_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band12_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band12_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band13_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band13_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band13_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band13_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band13_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band13_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band13_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band13_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band13_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band17_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band17_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band17_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band17_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band17_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band17_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band17_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band17_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band17_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band18_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band18_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band18_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band18_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band18_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band18_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band18_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band18_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band18_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band19_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band19_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band19_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band19_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band19_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band19_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band19_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band19_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band19_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band20_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band20_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band20_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band20_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band20_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band20_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band20_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band20_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band20_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band21_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band21_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band21_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band21_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band21_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band21_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band21_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band21_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band21_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band22_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band22_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band22_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band22_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band22_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band22_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band22_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band22_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band22_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band25_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band25_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band25_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band25_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band25_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band25_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band25_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band25_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band25_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band26_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band26_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band26_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band26_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band26_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band26_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band26_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band26_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band26_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band27_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band27_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band27_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band27_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band27_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band27_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band27_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band27_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band27_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band28_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band28_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band28_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band28_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band28_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band28_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band28_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band28_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band28_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band29_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band29_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band29_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band29_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band29_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band29_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band29_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band29_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band29_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band30_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band30_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band30_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band30_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band30_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band30_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band30_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band30_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band30_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band34_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band34_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band34_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band34_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band34_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band34_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band34_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band34_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band34_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band38_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band38_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band39_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band39_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band39_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band39_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band39_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band39_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band39_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band39_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band39_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};


LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band40_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band40_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band41_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band41_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band42_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band42_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band42_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band42_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band42_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band42_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band42_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band42_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band42_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band43_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band43_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band44_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band43_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band43_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band66_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band66_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band66_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band66_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band66_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band66_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band66_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band66_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band66_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band71_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band71_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band71_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band71_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band71_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band71_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band71_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band71_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band71_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band38_FILTER_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band38_FILTER_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_FILTER_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_FILTER_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_FILTER_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_FILTER_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_FILTER_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_FILTER_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band38_FILTER_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band40_FILTER_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band40_FILTER_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_FILTER_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_FILTER_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_FILTER_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_FILTER_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_FILTER_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_FILTER_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band40_FILTER_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band41_FILTER_ET_MIPI_PA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band41_FILTER_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3, PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_FILTER_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_FILTER_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_FILTER_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_FILTER_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_FILTER_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_FILTER_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   },
   {
      ET_LTE_Band41_FILTER_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0,  PA_SEC_DATA1,  PA_SEC_DATA2,  PA_SEC_DATA3,  PA_SEC_DATA4
         // { addr, data}, { addr, data}, { addr, data}, { addr, data}, { addr, data}
         {{ { 0x1 , 0xC8}, { 0x3 , 0xD3}, { 0x0 , 0x2C}, { 0x0, 0x0 }, { 0x0 , 0x0 }}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band1_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] =
{
   {
      ET_LTE_Band1_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band1_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band1_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band1_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band1_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band1_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band1_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band1_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band2_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band2_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band2_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band2_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band2_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band2_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band2_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band2_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band2_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band3_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band3_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band3_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band3_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band3_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band3_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band3_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band3_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band3_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band4_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band4_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band4_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band4_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band4_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band4_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band4_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band4_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band4_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band5_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band5_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band5_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band5_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band5_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band5_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band5_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band5_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band5_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band7_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band7_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band7_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band7_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band7_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band7_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band7_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band7_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band7_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band8_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band8_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band8_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band8_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band8_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band8_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band8_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band8_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band8_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band9_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band9_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band9_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band9_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band9_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band9_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band9_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band9_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band9_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band11_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band11_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band11_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band11_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band11_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band11_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band11_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band11_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band11_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band12_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band12_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band12_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band12_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band12_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band12_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band12_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band12_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band12_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band13_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band13_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band13_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band13_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band13_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band13_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band13_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band13_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band13_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band17_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band17_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band17_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band17_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band17_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band17_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band17_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band17_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band17_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band18_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band18_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band18_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band18_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band18_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band18_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band18_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band18_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band18_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band19_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band19_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band19_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band19_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band19_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band19_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band19_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band19_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band19_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band20_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band20_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band20_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band20_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band20_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band20_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band20_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band20_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band20_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band21_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band21_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band21_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band21_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band21_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band21_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band21_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band21_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band21_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band22_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band22_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band22_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band22_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band22_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band22_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band22_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band22_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band22_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band25_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band25_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band25_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band25_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band25_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band25_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band25_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band25_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band25_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band26_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band26_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band26_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band26_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band26_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band26_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band26_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band26_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band26_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band27_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band27_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band27_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band27_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band27_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band27_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band27_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band27_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band27_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band28_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band28_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band28_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band28_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band28_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band28_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band28_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band28_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band28_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band29_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band29_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band29_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band29_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band29_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band29_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band29_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band29_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band29_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};


LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band30_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band30_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band30_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band30_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band30_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band30_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band30_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band30_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band30_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band34_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] =
{
   {
      ET_LTE_Band34_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band34_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band34_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band34_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band1_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band34_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band34_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band34_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};


LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band38_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band38_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band39_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band39_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band39_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band39_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band39_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band39_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band39_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band39_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band39_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band40_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band40_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band41_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band40_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band42_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band42_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band42_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band42_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band42_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band42_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band42_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band42_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band42_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band43_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band43_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band43_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band43_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band43_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band43_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band43_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band43_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band43_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band44_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band44_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band66_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band44_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band44_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band71_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band71_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band71_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band71_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band71_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band71_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band71_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band71_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band71_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band38_FILTER_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band38_FILTER_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_FILTER_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_FILTER_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_FILTER_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_FILTER_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_FILTER_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_FILTER_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band38_FILTER_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band40_FILTER_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band40_FILTER_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_FILTER_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_FILTER_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_FILTER_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_FILTER_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_FILTER_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_FILTER_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band40_FILTER_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

LTE_ET_TPC_PA_SECTION_DATA_T LTE_Band41_FILTER_ET_MIPI_PA_CCA_SECTION_DATA_SetDefault[] = 
{
   {
      ET_LTE_Band41_FILTER_CCA_SUB_0_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band41_FILTER_CCA_SUB_1_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band41_FILTER_CCA_SUB_2_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band41_FILTER_CCA_SUB_3_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band41_FILTER_CCA_SUB_4_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band41_FILTER_CCA_SUB_5_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band41_FILTER_CCA_SUB_6_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   },
   {
      ET_LTE_Band41_FILTER_CCA_SUB_7_Freq_SetDefault, 
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0 , 0x2E}  , { 0x1 , 0x13} , { 0x3 , 0x80} , { 0x0 , 0x0} , { 0x0 , 0x0}}},
      }
   }
};

#endif // #if IS_MML1_ET_FRONT_END_ENABLE_SetDefault 

#if IS_LTE_ET_FRONT_END_ENABLE_SetDefault

//TX frequency Table size
kal_uint16* LTE_ET_BAND_FREQ_TABLE_SetDefault[LTE_ET_MAX_SUPPORT_ROUTE_NUM]=
{
   LTE_ET_TX_FREQ(BAND_INDICATOR0 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR1 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR2 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR3 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR4 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR5 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR6 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR7 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR8 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR9 , SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR10, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR11, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR12, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR13, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR14, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR15, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR16, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR17, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR18, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR19, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR20, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR21, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR22, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR23, SetDefault),
   LTE_ET_TX_FREQ(BAND_INDICATOR24, SetDefault),
   LTE_MIPI_NULL,
};

kal_uint16 LTE_ET_BAND_FREQ_SIZE_TABLE_SetDefault[LTE_ET_MAX_SUPPORT_ROUTE_NUM]=
{
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR4 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR5 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR6 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR7 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR8 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR9 , SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_TX_FREQ(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,
};

//ETTODO Table size 
LTE_ET_EVENT_TABLE_T* LTE_ET_TX_EVENT_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_ET_TX_EVENT(BAND_INDICATOR0 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR1 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR2 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR3 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR4 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR5 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR6 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR7 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR8 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR9 , SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR10, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR11, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR12, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR13, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR14, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR15, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR16, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR17, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR18, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR19, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR20, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR21, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR22, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR23, SetDefault),
   LTE_ET_TX_EVENT(BAND_INDICATOR24, SetDefault),
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ET_TX_EVENT_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR4 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR5 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR6 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR7 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR8 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR9 , SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_TX_EVENT(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_FILTER_TX_EVENT_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR0, SetDefault),
   LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR1, SetDefault),
   LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR2, SetDefault),
   LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR3, SetDefault),
   LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR4, SetDefault),
};

kal_uint32  LTE_ET_FILTER_TX_EVENT_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR0, SetDefault)),
   sizeof(LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR1, SetDefault)),
   sizeof(LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR2, SetDefault)),
   sizeof(LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR3, SetDefault)),
   sizeof(LTE_ET_FILTER_TX_EVENT(BAND_FILTER_INDICATOR4, SetDefault)),
};

LTE_ET_DATA_SUBBAND_TABLE_T* LTE_ET_TX_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_ET_TX_DATA(BAND_INDICATOR0 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR1 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR2 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR3 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR4 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR5 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR6 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR7 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR8 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR9 , SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR10, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR11, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR12, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR13, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR14, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR15, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR16, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR17, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR18, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR19, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR20, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR21, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR22, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR23, SetDefault),
   LTE_ET_TX_DATA(BAND_INDICATOR24, SetDefault),
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ET_TX_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR4 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR5 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR6 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR7 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR8 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR9 , SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_TX_DATA(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,
};

LTE_ET_DATA_SUBBAND_TABLE_T*  LTE_ET_FILTER_TX_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR0, SetDefault),
   LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR1, SetDefault),
   LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR2, SetDefault),
   LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR3, SetDefault),
   LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR4, SetDefault),
};

kal_uint32  LTE_ET_FILTER_TX_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR0, SetDefault)),
   sizeof(LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR1, SetDefault)),
   sizeof(LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR2, SetDefault)),
   sizeof(LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR3, SetDefault)),
   sizeof(LTE_ET_FILTER_TX_DATA(BAND_FILTER_INDICATOR4, SetDefault)),
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_TPC_EVENT_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_ET_TPC_EVENT(BAND_INDICATOR0 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR1 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR2 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR3 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR4 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR5 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR6 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR7 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR8 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR9 , SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR10, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR11, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR12, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR13, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR14, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR15, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR16, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR17, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR18, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR19, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR20, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR21, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR22, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR23, SetDefault),
   LTE_ET_TPC_EVENT(BAND_INDICATOR24, SetDefault),
   LTE_MIPI_NULL,  
};

kal_uint32 LTE_ET_TPC_EVENT_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR4 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR5 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR6 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR7 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR8 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR9 , SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_TPC_EVENT(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,  
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_FILTER_TPC_EVENT_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR0, SetDefault),
   LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR1, SetDefault),
   LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR2, SetDefault),
   LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR3, SetDefault),
   LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR4, SetDefault),
};

kal_uint32  LTE_ET_FILTER_TPC_EVENT_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR0, SetDefault)),
   sizeof(LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR1, SetDefault)),
   sizeof(LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR2, SetDefault)),
   sizeof(LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR3, SetDefault)),
   sizeof(LTE_ET_FILTER_TPC_EVENT(BAND_FILTER_INDICATOR4, SetDefault)),
};

LTE_ET_DATA_TABLE_T*  LTE_ET_TPC_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_ET_TPC_DATA(BAND_INDICATOR0 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR1 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR2 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR3 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR4 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR5 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR6 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR7 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR8 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR9 , SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR10, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR11, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR12, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR13, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR14, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR15, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR16, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR17, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR18, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR19, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR20, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR21, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR22, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR23, SetDefault),
   LTE_ET_TPC_DATA(BAND_INDICATOR24, SetDefault),
   LTE_MIPI_NULL,  
};

kal_uint32 LTE_ET_TPC_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR4 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR5 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR6 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR7 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR8 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR9 , SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_TPC_DATA(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,
};

LTE_ET_DATA_TABLE_T*  LTE_ET_FILTER_TPC_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR0, SetDefault),
   LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR1, SetDefault),
   LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR2, SetDefault),
   LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR3, SetDefault),
   LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR4, SetDefault),
};

kal_uint32  LTE_ET_FILTER_TPC_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR0, SetDefault)),
   sizeof(LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR1, SetDefault)),
   sizeof(LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR2, SetDefault)),
   sizeof(LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR3, SetDefault)),
   sizeof(LTE_ET_FILTER_TPC_DATA(BAND_FILTER_INDICATOR4, SetDefault)),
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ET_LOOKUP_VPA_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR0 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR1 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR2 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR3 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR4 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR5 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR6 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR7 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR8 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR9 , SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR10, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR11, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR12, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR13, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR14, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR15, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR16, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR17, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR18, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR19, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR20, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR21, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR22, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR23, SetDefault),
   LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR24, SetDefault),
   LTE_MIPI_NULL,   
};

kal_uint32 LTE_ET_LOOKUP_VPA_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR4 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR5 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR6 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR7 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR8 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR9 , SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,  
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ET_FILTER_LOOKUP_VPA_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR0 , SetDefault),
   LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR1 , SetDefault),
   LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR2 , SetDefault),
   LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR3 , SetDefault),
   LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR4 , SetDefault),
};

kal_uint32 LTE_ET_FILTER_LOOKUP_VPA_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_FILTER_LOOKUP_VPA_DATA(BAND_FILTER_INDICATOR4 , SetDefault)),
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ET_BW_SWITCH_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR0 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR1 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR2 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR3 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR4 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR5 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR6 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR7 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR8 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR9 , SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR10, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR11, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR12, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR13, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR14, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR15, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR16, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR17, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR18, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR19, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR20, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR21, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR22, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR23, SetDefault),
   LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR24, SetDefault),
   LTE_MIPI_NULL,     
};

kal_uint32 LTE_ET_BW_SWITCH_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR4 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR5 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR6 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR7 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR8 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR9 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,   
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ET_FILTER_BW_SWITCH_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR0 , SetDefault),
   LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR1 , SetDefault),
   LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR2 , SetDefault),
   LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR3 , SetDefault),
   LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR4 , SetDefault),
};

kal_uint32 LTE_ET_FILTER_BW_SWITCH_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_FILTER_BW_SWITCH_DATA(BAND_FILTER_INDICATOR4 , SetDefault)),
};

LTE_ET_BW_SWITCH_SECTION_TABLE_DEFAULT LTE_ET_BW_SWITCH_SECTION_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR0 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR0 , SetDefault),BAND_INDICATOR0_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR1 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR1 , SetDefault),BAND_INDICATOR1_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR2 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR2 , SetDefault),BAND_INDICATOR2_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR3 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR3 , SetDefault),BAND_INDICATOR3_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR4 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR4 , SetDefault),BAND_INDICATOR4_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR5 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR5 , SetDefault),BAND_INDICATOR5_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR6 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR6 , SetDefault),BAND_INDICATOR6_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR7 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR7 , SetDefault),BAND_INDICATOR7_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR8 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR8 , SetDefault),BAND_INDICATOR8_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR9 , SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR9 , SetDefault),BAND_INDICATOR9_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR10, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR10, SetDefault),BAND_INDICATOR10_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR11, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR11, SetDefault),BAND_INDICATOR11_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR12, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR12, SetDefault),BAND_INDICATOR12_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR13, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR13, SetDefault),BAND_INDICATOR13_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR14, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR14, SetDefault),BAND_INDICATOR14_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR15, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR15, SetDefault),BAND_INDICATOR15_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR16, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR16, SetDefault),BAND_INDICATOR16_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR17, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR17, SetDefault),BAND_INDICATOR17_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR18, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR18, SetDefault),BAND_INDICATOR18_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR19, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR19, SetDefault),BAND_INDICATOR19_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR20, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR20, SetDefault),BAND_INDICATOR20_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR21, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR21, SetDefault),BAND_INDICATOR21_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR22, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR22, SetDefault),BAND_INDICATOR22_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR23, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR23, SetDefault),BAND_INDICATOR23_CCA_Support_SetDefault},
   {LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR24, SetDefault),LTE_ET_BW_SWITCH_CCA_SECTION_DATA(BAND_INDICATOR24, SetDefault),BAND_INDICATOR24_CCA_Support_SetDefault},
   {LTE_MIPI_NULL, LTE_MIPI_NULL , NO_CCA_SUPPORT},
};

kal_uint32 LTE_ET_BW_SWITCH_SECTION_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR4 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR5 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR6 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR7 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR8 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR9 , SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,   
};

LTE_ET_BW_SWITCH_SECTION_TABLE_DEFAULT LTE_ET_FILTER_BW_SWITCH_SECTION_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   {LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR0 , SetDefault),LTE_ET_FILTER_BW_SWITCH_CCA_SECTION_DATA(BAND_FILTER_INDICATOR0 , SetDefault),BAND_FILTER_INDICATOR0_CCA_Support_SetDefault},
   {LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR1 , SetDefault),LTE_ET_FILTER_BW_SWITCH_CCA_SECTION_DATA(BAND_FILTER_INDICATOR1 , SetDefault),BAND_FILTER_INDICATOR1_CCA_Support_SetDefault},
   {LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR2 , SetDefault),LTE_ET_FILTER_BW_SWITCH_CCA_SECTION_DATA(BAND_FILTER_INDICATOR2 , SetDefault),BAND_FILTER_INDICATOR2_CCA_Support_SetDefault},
   {LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR3 , SetDefault),LTE_ET_FILTER_BW_SWITCH_CCA_SECTION_DATA(BAND_FILTER_INDICATOR3 , SetDefault),BAND_FILTER_INDICATOR3_CCA_Support_SetDefault},
   {LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR4 , SetDefault),LTE_ET_FILTER_BW_SWITCH_CCA_SECTION_DATA(BAND_FILTER_INDICATOR4 , SetDefault),BAND_FILTER_INDICATOR4_CCA_Support_SetDefault},
};

kal_uint32 LTE_ET_FILTER_BW_SWITCH_SECTION_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_FILTER_BW_SWITCH_SECTION_DATA(BAND_FILTER_INDICATOR4 , SetDefault)),
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ETM_MODE_SETTING_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR0 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR1 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR2 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR3 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR4 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR5 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR6 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR7 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR8 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR9 , SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR10, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR11, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR12, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR13, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR14, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR15, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR16, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR17, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR18, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR19, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR20, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR21, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR22, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR23, SetDefault),
   LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR24, SetDefault),
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ETM_MODE_SETTING_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR4 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR5 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR6 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR7 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR8 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR9 , SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_MODE_SETTING_DATA(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,      
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ETM_FILTER_MODE_SETTING_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM  ] =
{
   LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR0 , SetDefault),
   LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR1 , SetDefault),
   LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR2 , SetDefault),
   LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR3 , SetDefault),
   LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR4 , SetDefault),
};

kal_uint32 LTE_ETM_FILTER_MODE_SETTING_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR0 , SetDefault)),
   sizeof(LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR1 , SetDefault)),
   sizeof(LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR2 , SetDefault)),
   sizeof(LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR3 , SetDefault)),
   sizeof(LTE_ET_FILTER_MODE_SETTING_DATA(BAND_FILTER_INDICATOR4 , SetDefault)),
};

LTE_ET_TPC_PA_SECTION_TABLE_DEFAULT  LTE_ET_PA_TPC_SECTION_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR0,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR0,   SetDefault),BAND_INDICATOR0_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR1,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR1,   SetDefault),BAND_INDICATOR1_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR2,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR2,   SetDefault),BAND_INDICATOR2_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR3,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR3,   SetDefault),BAND_INDICATOR3_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR4,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR4,   SetDefault),BAND_INDICATOR4_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR5,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR5,   SetDefault),BAND_INDICATOR5_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR6,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR6,   SetDefault),BAND_INDICATOR6_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR7,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR7,   SetDefault),BAND_INDICATOR7_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR8,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR8,   SetDefault),BAND_INDICATOR8_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR9,  SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR9,   SetDefault),BAND_INDICATOR9_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR10, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR10,  SetDefault),BAND_INDICATOR10_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR11, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR11,  SetDefault),BAND_INDICATOR11_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR12, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR12,  SetDefault),BAND_INDICATOR12_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR13, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR13,  SetDefault),BAND_INDICATOR13_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR14, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR14,  SetDefault),BAND_INDICATOR14_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR15, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR15,  SetDefault),BAND_INDICATOR15_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR16, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR16,  SetDefault),BAND_INDICATOR16_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR17, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR17,  SetDefault),BAND_INDICATOR17_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR18, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR18,  SetDefault),BAND_INDICATOR18_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR19, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR19,  SetDefault),BAND_INDICATOR19_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR20, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR20,  SetDefault),BAND_INDICATOR20_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR21, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR21,  SetDefault),BAND_INDICATOR21_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR22, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR22,  SetDefault),BAND_INDICATOR22_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR23, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR23,  SetDefault),BAND_INDICATOR23_CCA_Support_SetDefault},
   {LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR24, SetDefault), LTE_ET_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR24,  SetDefault),BAND_INDICATOR24_CCA_Support_SetDefault},
   {LTE_MIPI_NULL, LTE_MIPI_NULL, NO_CCA_SUPPORT},
};

kal_uint32  LTE_ET_PA_TPC_SECTION_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR0,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR1,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR2,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR3,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR4,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR5,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR6,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR7,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR8,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR9,  SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR10, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR11, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR12, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR13, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR14, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR15, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR16, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR17, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR18, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR19, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR20, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR21, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR22, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR23, SetDefault)),
   sizeof(LTE_ET_MIPI_PA_SECTION_DATA(BAND_INDICATOR24, SetDefault)),
   LTE_MIPI_NULL,
};

LTE_ET_TPC_PA_SECTION_TABLE_DEFAULT  LTE_ET_FILTER_PA_TPC_SECTION_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   {LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR0, SetDefault), LTE_ET_MIPI_FILTER_PA_CCA_SECTION_DATA(BAND_FILTER_INDICATOR0,  SetDefault), BAND_FILTER_INDICATOR0_CCA_Support_SetDefault},
   {LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR1, SetDefault), LTE_ET_MIPI_FILTER_PA_CCA_SECTION_DATA(BAND_FILTER_INDICATOR1,  SetDefault), BAND_FILTER_INDICATOR1_CCA_Support_SetDefault},
   {LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR2, SetDefault), LTE_ET_MIPI_FILTER_PA_CCA_SECTION_DATA(BAND_FILTER_INDICATOR2,  SetDefault), BAND_FILTER_INDICATOR2_CCA_Support_SetDefault},
   {LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR3, SetDefault), LTE_ET_MIPI_FILTER_PA_CCA_SECTION_DATA(BAND_FILTER_INDICATOR3,  SetDefault), BAND_FILTER_INDICATOR3_CCA_Support_SetDefault},
   {LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR4, SetDefault), LTE_ET_MIPI_FILTER_PA_CCA_SECTION_DATA(BAND_FILTER_INDICATOR4,  SetDefault), BAND_FILTER_INDICATOR4_CCA_Support_SetDefault},
};

kal_uint32  LTE_ET_FILTER_PA_TPC_SECTION_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR0, SetDefault)),
   sizeof(LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR1, SetDefault)),
   sizeof(LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR2, SetDefault)),
   sizeof(LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR0, SetDefault)),
   sizeof(LTE_ET_MIPI_FILTER_PA_SECTION_DATA(BAND_FILTER_INDICATOR1, SetDefault)),
};
#else  

//TX frequency Table size
kal_uint16* LTE_ET_BAND_FREQ_TABLE_SetDefault[LTE_ET_MAX_SUPPORT_ROUTE_NUM]=
{
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_BandNone_freq_SetDefault,
   LTE_MIPI_NULL,
};

kal_uint16 LTE_ET_BAND_FREQ_SIZE_TABLE_SetDefault[LTE_ET_MAX_SUPPORT_ROUTE_NUM]=
{
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   sizeof( LTE_BandNone_freq_SetDefault ),
   LTE_MIPI_NULL,
};



LTE_ET_EVENT_TABLE_T* LTE_ET_TX_EVENT_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band1  */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band2  */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band3  */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band4  */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band5  */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band6  */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band7  */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band8  */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band9  */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band10 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band11 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band12 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band13 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band14 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band15 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band16 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band17 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band18 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band19 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band20 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band20 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band21 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band22 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band23 */
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*Band24 */
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ET_TX_EVENT_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band1  */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band2  */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band3  */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band4  */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band5  */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band6  */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band7  */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band8  */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band9  */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band10 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band11 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band12 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band13 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band14 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band15 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band16 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band17 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band18 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band19 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band21 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band22 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band23 */
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*Band24 */
   LTE_MIPI_NULL,
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_FILTER_TX_EVENT_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*FilterBand0*/
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*FilterBand1*/
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*FilterBand2*/
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*FilterBand3*/
   LTE_BandNone_ET_TX_EVENT_SetDefault,/*FilterBand4*/
};

kal_uint32  LTE_ET_FILTER_TX_EVENT_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*FilterBand0*/
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*FilterBand1*/
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*FilterBand2*/
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*FilterBand3*/
   sizeof( LTE_BandNone_ET_TX_EVENT_SetDefault ),/*FilterBand4*/
};

LTE_ET_DATA_SUBBAND_TABLE_T* LTE_ET_TX_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band1  */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band2  */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band3  */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band4  */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band5  */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band6  */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band7  */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band8  */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band9  */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band10 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band11 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band12 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band13 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band14 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band15 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band16 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band17 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band18 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band19 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band20 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band20 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band21 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band22 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band23 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Band24 */
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Route35*/
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Route36*/
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Route37*/
   LTE_BandNone_ET_TX_DATA_SetDefault,/*Route38*/
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ET_TX_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band1  */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band2  */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band3  */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band4  */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band5  */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band6  */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band7  */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band8  */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band9  */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band10 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band11 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band12 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band13 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band14 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band15 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band16 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band17 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band18 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band19 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band21 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band22 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band23 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Band24 */
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Route35*/
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Route36*/
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Route37*/
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*Route38*/
   LTE_MIPI_NULL,
};

LTE_ET_DATA_SUBBAND_TABLE_T*  LTE_ET_FILTER_TX_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_BandNone_ET_TX_DATA_SetDefault,/*FilterBand0*/
   LTE_BandNone_ET_TX_DATA_SetDefault,/*FilterBand1*/
   LTE_BandNone_ET_TX_DATA_SetDefault,/*FilterBand2*/
   LTE_BandNone_ET_TX_DATA_SetDefault,/*FilterBand3*/
   LTE_BandNone_ET_TX_DATA_SetDefault,/*FilterBand4*/
};

kal_uint32  LTE_ET_FILTER_TX_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*FilterBand0*/
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*FilterBand1*/
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*FilterBand2*/
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*FilterBand3*/
   sizeof( LTE_BandNone_ET_TX_DATA_SetDefault ),/*FilterBand4*/
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_TPC_EVENT_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band1  */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band2  */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band3  */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band4  */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band5  */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band6  */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band7  */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band8  */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band9  */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band10 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band11 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band12 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band13 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band14 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band15 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band16 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band17 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band18 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band19 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band20 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band20 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band21 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band22 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band23 */
   LTE_BandNone_ET_TPC_EVENT_SetDefault,/*Band24 */
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ET_TPC_EVENT_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band1  */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band2  */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band3  */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band4  */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band5  */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band6  */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band7  */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band8  */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band9  */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band10 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band11 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band12 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band13 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band14 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band15 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band16 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band17 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band18 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band19 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band21 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band22 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band23 */
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),/*Band24 */
   LTE_MIPI_NULL,
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_FILTER_TPC_EVENT_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_BandNone_FILTER_ET_TPC_EVENT_SetDefault,
   LTE_BandNone_FILTER_ET_TPC_EVENT_SetDefault,
   LTE_BandNone_FILTER_ET_TPC_EVENT_SetDefault,
   LTE_BandNone_FILTER_ET_TPC_EVENT_SetDefault,
   LTE_BandNone_FILTER_ET_TPC_EVENT_SetDefault
};

kal_uint32  LTE_ET_FILTER_TPC_EVENT_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),
   sizeof( LTE_BandNone_ET_TPC_EVENT_SetDefault ),
};

LTE_ET_DATA_TABLE_T* LTE_ET_TPC_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band1  */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band2  */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band3  */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band4  */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band5  */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band6  */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band7  */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band8  */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band9  */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band10 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band11 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band12 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band13 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band14 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band15 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band16 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band17 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band18 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band19 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band20 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band20 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band21 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band22 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band23 */
   LTE_BandNone_ET_TPC_DATA_SetDefault,/*Band24 */
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ET_TPC_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band1  */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band2  */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band3  */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band4  */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band5  */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band6  */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band7  */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band8  */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band9  */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band10 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band11 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band12 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band13 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band14 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band15 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band16 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band17 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band18 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band19 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band21 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band22 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band23 */
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),/*Band24 */
   LTE_MIPI_NULL,
};

LTE_ET_DATA_TABLE_T*  LTE_ET_FILTER_TPC_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_BandNone_ET_TPC_DATA_SetDefault,
   LTE_BandNone_ET_TPC_DATA_SetDefault,
   LTE_BandNone_ET_TPC_DATA_SetDefault,
   LTE_BandNone_ET_TPC_DATA_SetDefault,
   LTE_BandNone_ET_TPC_DATA_SetDefault,
};

kal_uint32  LTE_ET_FILTER_TPC_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_TPC_DATA_SetDefault ), 
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ET_LOOKUP_VPA_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band1  */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band2  */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band3  */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band4  */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band5  */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band6  */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band7  */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band8  */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band9  */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band10 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band11 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band12 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band13 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band14 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band15 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band16 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band17 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band18 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band19 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band20 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band20 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band21 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band22 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band23 */
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault, /*Band24 */
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ET_LOOKUP_VPA_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band1  */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band2  */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band3  */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band4  */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band5  */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band6  */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band7  */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band8  */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band9  */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band10 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band11 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band12 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band13 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band14 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band15 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band16 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band17 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band18 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band19 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band21 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band22 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band23 */
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),/*Band24 */
   LTE_MIPI_NULL,
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ET_FILTER_LOOKUP_VPA_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault,
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault,
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault,
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault,
   LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault,
};

kal_uint32 LTE_ET_FILTER_LOOKUP_VPA_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_LOOKUP_VPA_DATA_SetDefault ),   
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ET_BW_SWITCH_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band1  */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band2  */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band3  */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band4  */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band5  */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band6  */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band7  */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band8  */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band9  */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band10 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band11 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band12 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band13 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band14 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band15 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band16 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band17 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band18 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band19 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band20 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band20 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band21 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band22 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band23 */
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,/*Band24 */
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ET_BW_SWITCH_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band1  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band2  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band3  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band4  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band5  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band6  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band7  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band8  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band9  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band10 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band11 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band12 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band13 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band14 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band15 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band16 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band17 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band18 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band19 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band21 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band22 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band23 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),/*Band24 */
   LTE_MIPI_NULL,
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ET_FILTER_BW_SWITCH_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,
   LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault,
};

kal_uint32 LTE_ET_FILTER_BW_SWITCH_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_BW_SWITCH_DATA_SetDefault ),   
};

LTE_ET_BW_SWITCH_SECTION_TABLE_DEFAULT LTE_ET_BW_SWITCH_SECTION_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band1  */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band2  */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band3  */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band4  */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band5  */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band6  */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band7  */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band8  */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band9  */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band10 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band11 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band12 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band13 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band14 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band15 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band16 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band17 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band18 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band19 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band20 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band20 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band21 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band22 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band23 */
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},/*Band24 */  
   {LTE_MIPI_NULL, LTE_MIPI_NULL, NO_CCA_SUPPORT},
};

kal_uint32 LTE_ET_BW_SWITCH_SECTION_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band1  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band2  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band3  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band4  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band5  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band6  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band7  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band8  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band9  */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band10 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band11 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band12 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band13 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band14 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band15 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band16 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band17 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band18 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band19 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band21 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band22 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band23 */
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),/*Band24 */
   LTE_MIPI_NULL,
};

LTE_ET_BW_SWITCH_SECTION_TABLE_DEFAULT LTE_ET_FILTER_BW_SWITCH_SECTION_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},
   {LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault,NO_CCA_SUPPORT},
};

kal_uint32 LTE_ET_FILTER_BW_SWITCH_SECTION_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_BW_SWITCH_SECTION_DATA_SetDefault ),
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ETM_MODE_SETTING_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band1  */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band2  */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band3  */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band4  */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band5  */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band6  */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band7  */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band8  */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band9  */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band10 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band11 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band12 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band13 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band14 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band15 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band16 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band17 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band18 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band19 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band20 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band20 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band21 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band22 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band23 */
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,/*Band24 */
   LTE_MIPI_NULL,
};

kal_uint32 LTE_ETM_MODE_SETTING_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band1  */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band2  */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band3  */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band4  */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band5  */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band6  */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band7  */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band8  */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band9  */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band10 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band11 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band12 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band13 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band14 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band15 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band16 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band17 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band18 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band19 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band20 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band21 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band22 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band23 */
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),/*Band24 */  
   LTE_MIPI_NULL,
};

LTE_MIPI_adda_DATA_EXPAND_TABLE_T* LTE_ETM_FILTER_MODE_SETTING_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,
   LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault,
};

kal_uint32 LTE_ETM_FILTER_MODE_SETTING_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ),
   sizeof( LTE_BandNone_ET_MODE_SETTING_DATA_SetDefault ), 
};

LTE_ET_TPC_PA_SECTION_TABLE_DEFAULT  LTE_ET_PA_TPC_SECTION_DATA_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band1  */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band2  */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band3  */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band4  */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band5  */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band6  */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band7  */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band8  */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band9  */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band10 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band11 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band12 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band13 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band14 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band15 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band16 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band17 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band18 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band19 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band20 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band20 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band21 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band22 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band23 */
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},/*Band24 */
   {LTE_MIPI_NULL, LTE_MIPI_NULL, NO_CCA_SUPPORT},
};

kal_uint32  LTE_ET_PA_TPC_SECTION_DATA_SIZE_TABLE_SetDefault[ LTE_ET_MAX_SUPPORT_ROUTE_NUM ] =
{
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band1  */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band2  */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band3  */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band4  */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band5  */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band6  */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band7  */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band8  */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band9  */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band10 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band11 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band12 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band13 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band14 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band15 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band16 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band17 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band18 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band19 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band20 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band20 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band21 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band22 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band23 */
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),/*Band24 */
   LTE_MIPI_NULL,
};
LTE_ET_TPC_PA_SECTION_TABLE_DEFAULT LTE_ET_FILTER_PA_TPC_SECTION_DATA_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},
   {LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault, NO_CCA_SUPPORT},
};

kal_uint32  LTE_ET_FILTER_PA_TPC_SECTION_DATA_SIZE_TABLE_SetDefault[ LTE_FILTER_MAX_SUPPORT_BAND_NUM ] =
{
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault), 
   sizeof(LTE_BandNone_ET_MIPI_PA_SECTION_DATA_SetDefault),
};

#endif   //#if IS_LTE_ET_FRONT_END_ENABLE_SetDefault

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
