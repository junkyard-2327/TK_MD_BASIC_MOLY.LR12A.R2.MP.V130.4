/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

/*******************************************************************************
 * Filename:
 * ---------
 *  l1edps_SCH_Handover_CA_04.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *  Parameters define value between SS and UE
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 06 09 2015 david.tang
 * [MOLY00112427] [MT6291][E1EVB][EL1S] Update l1edps files from CBr4
 * .[l1edps] update l1edps from cbr
 *
 ****************************************************************************/



#ifndef _L1SS_SCH_Handover_CA_04_H
#define _L1SS_SCH_Handover_CA_04_H

#include "l1edps_common_parameters.h"

#undef DL_EARFCN_BTS1
#undef DL_EARFCN_BTS2
#undef DL_EARFCN_BTS3
#undef MIB_DL_BANDWIDTH_BTS1	
#undef MIB_DL_BANDWIDTH_BTS2	
#undef MIB_DL_BANDWIDTH_BTS3
#undef RRC_SETUP_DRX_CONFIG_BTS1
#undef RRC_SETUP_ON_DURATION_TIMER_BTS1
#undef RRC_SETUP_DRX_INACTIVITY_TIMER_BTS1
#undef RRC_SETUP_DRX_RETRANSMISSION_TIMER_BTS1
#undef RRC_SETUP_LONG_DRX_CYCLE_BTS1
#undef RRC_SETUP_SHORT_DRX_SETUP_BTS1
#undef RRC_RECONFIG_REPORT_EVENT_A3_OFFSET_BTS1
#undef RRC_RECONFIG_GAP_CONFIG_SETUP_BTS1
#undef RRC_RECONFIG_FILTER_COEFFICIENT_RSRP_BTS1
#undef RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_BTS1
#undef RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_SCHEDULING_CELLID_BTS1
#undef RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_PDSCH_START_BTS1
#undef RRC_SETUP_CIF_PRESENCE_BTS1
#undef RRC_SETUP_PUCCH_FORMAT_BTS1
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_0_BTS1
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_1_BTS1
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_2_BTS1
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_3_BTS1
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_0_BTS1
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_1_BTS1
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_2_BTS1
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_3_BTS1
#undef RRC_RECONFIG_PUCCH_FORMAT_BTS1
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_0_BTS1
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_1_BTS1
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_2_BTS1
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_3_BTS1
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_0_BTS1
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_1_BTS1
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_2_BTS1
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_3_BTS1
#undef RRC_SETUP_DRX_CONFIG_BTS2
#undef RRC_SETUP_ON_DURATION_TIMER_BTS2
#undef RRC_SETUP_DRX_INACTIVITY_TIMER_BTS2
#undef RRC_SETUP_DRX_RETRANSMISSION_TIMER_BTS2
#undef RRC_SETUP_LONG_DRX_CYCLE_BTS2
#undef RRC_SETUP_SHORT_DRX_SETUP_BTS2
#undef RRC_RECONFIG_REPORT_EVENT_A3_OFFSET_BTS2
#undef RRC_RECONFIG_GAP_CONFIG_SETUP_BTS2
#undef RRC_RECONFIG_FILTER_COEFFICIENT_RSRP_BTS2
#undef RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_BTS2
#undef RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_SCHEDULING_CELLID_BTS2
#undef RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_PDSCH_START_BTS2
#undef RRC_SETUP_CIF_PRESENCE_BTS2
#undef RRC_SETUP_PUCCH_FORMAT_BTS2
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_0_BTS2
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_1_BTS2
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_2_BTS2
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_3_BTS2
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_0_BTS2
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_1_BTS2
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_2_BTS2
#undef RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_3_BTS2
#undef RRC_RECONFIG_PUCCH_FORMAT_BTS2
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_0_BTS2
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_1_BTS2
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_2_BTS2
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_3_BTS2
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_0_BTS2
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_1_BTS2
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_2_BTS2
#undef RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_3_BTS2



#define DL_EARFCN_BTS1 300
#define DL_EARFCN_BTS2 498
#define DL_EARFCN_BTS3 498
#define MIB_DL_BANDWIDTH_BTS1 BW_100_RB
#define MIB_DL_BANDWIDTH_BTS2 BW_100_RB
#define MIB_DL_BANDWIDTH_BTS3 BW_100_RB
#define RRC_SETUP_DRX_CONFIG_BTS1 L1S_SETUP
#define RRC_SETUP_ON_DURATION_TIMER_BTS1 ON_DURATION_TIMER_psf6 
#define RRC_SETUP_DRX_INACTIVITY_TIMER_BTS1 DRX_INACTIVITY_TIMER_psf1920
#define RRC_SETUP_DRX_RETRANSMISSION_TIMER_BTS1 DRX_RETRANSMISSION_TIMER_psf16
#define RRC_SETUP_LONG_DRX_CYCLE_BTS1 LONG_DRX_CYCLE_sf1280
#define RRC_SETUP_SHORT_DRX_SETUP_BTS1 L1S_RELEASE
#define RRC_RECONFIG_REPORT_EVENT_A3_OFFSET_BTS1 -4
#define RRC_RECONFIG_GAP_CONFIG_SETUP_BTS1 L1S_SETUP
#define RRC_RECONFIG_FILTER_COEFFICIENT_RSRP_BTS1 FILTER_COEFFICIENT_fc0
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_BTS1 L1S_RELEASE
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_SCHEDULING_CELLID_BTS1 0
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_PDSCH_START_BTS1 3
#define RRC_SETUP_CIF_PRESENCE_BTS1 KAL_FALSE
#define RRC_SETUP_PUCCH_FORMAT_BTS1 1 //0:FMT3; 1:CS
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_0_BTS1	101
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_1_BTS1	102
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_2_BTS1	103
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_3_BTS1	104
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_0_BTS1	105
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_1_BTS1	106
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_2_BTS1	107
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_3_BTS1	108
#define RRC_RECONFIG_PUCCH_FORMAT_BTS1 1 //0:FMT3; 1:CS
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_0_BTS1  101
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_1_BTS1  102
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_2_BTS1  103
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_3_BTS1  104
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_0_BTS1  105
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_1_BTS1  106
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_2_BTS1  107
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_3_BTS1  108
#define RRC_SETUP_DRX_CONFIG_BTS2 L1S_SETUP
#define RRC_SETUP_ON_DURATION_TIMER_BTS2 ON_DURATION_TIMER_psf6 
#define RRC_SETUP_DRX_INACTIVITY_TIMER_BTS2 DRX_INACTIVITY_TIMER_psf1920
#define RRC_SETUP_DRX_RETRANSMISSION_TIMER_BTS2 DRX_RETRANSMISSION_TIMER_psf16
#define RRC_SETUP_LONG_DRX_CYCLE_BTS2 LONG_DRX_CYCLE_sf1280
#define RRC_SETUP_SHORT_DRX_SETUP_BTS2 L1S_RELEASE
#define RRC_RECONFIG_REPORT_EVENT_A3_OFFSET_BTS2 -4
#define RRC_RECONFIG_GAP_CONFIG_SETUP_BTS2 L1S_SETUP
#define RRC_RECONFIG_FILTER_COEFFICIENT_RSRP_BTS2 FILTER_COEFFICIENT_fc0
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_BTS2 L1S_RELEASE
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_SCHEDULING_CELLID_BTS2 0
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_PDSCH_START_BTS2 3
#define RRC_SETUP_CIF_PRESENCE_BTS2 KAL_FALSE
#define RRC_SETUP_PUCCH_FORMAT_BTS2 1 //0:FMT3; 1:CS
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_0_BTS2	101
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_1_BTS2	102
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_2_BTS2	103
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_3_BTS2	104
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_0_BTS2	105
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_1_BTS2	106
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_2_BTS2	107
#define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_3_BTS2	108
#define RRC_RECONFIG_PUCCH_FORMAT_BTS2 1 //0:FMT3; 1:CS
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_0_BTS2  101
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_1_BTS2  102
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_2_BTS2  103
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_3_BTS2  104
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_0_BTS2  105
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_1_BTS2  106
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_2_BTS2  107
#define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_3_BTS2  108

#undef SIB2_REFERENCE_SIGNAL_POWER_BTS1
#define SIB2_REFERENCE_SIGNAL_POWER_BTS1 0

#undef SIB2_REFERENCE_SIGNAL_POWER_BTS2
#define SIB2_REFERENCE_SIGNAL_POWER_BTS2 0


#endif







