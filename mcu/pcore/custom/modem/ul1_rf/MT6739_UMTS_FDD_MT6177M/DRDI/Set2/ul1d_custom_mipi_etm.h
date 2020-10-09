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
 *	u1ld_custom_mipi_etm.h
 *
 * Project:
 * --------
 * TK6291
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/

#ifndef  _UL1D_CUSTOM_MIPI_ETM_Set2_H_
#define  _UL1D_CUSTOM_MIPI_ETM_Set2_H_

/*===============================================================================*/
#include "kal_general_types.h"
#include "ul1d_rf_cid.h"
#include "ul1d_mipi_public.h"
#include "DRDI/Set2/mml1_custom_mipi.h"

/*===============================================================================*/
#if (IS_3G_MIPI_SUPPORT)

/* ====================================================================================================================== */
/*   UMTS ETM feature enable control flag                                                                                                                                                                                                                   */
/* ====================================================================================================================== */

#define IS_UMTS_ETM_FRONT_END_ENABLE_Set2                                IS_MML1_ETM_FRONT_END_ENABLE_Set2   // 0: Disable ET feature; 1:Enable ET feature.

#define UMTS_ETM_TX_ON0_Set2                                             US2CHIPCNT( 200 )
#define UMTS_ETM_TX_ON1_Set2                                             US2CHIPCNT( 175 )

#define UMTS_ETM_TX_OFF0_Set2                                            US2CHIPCNT(  10 )

#define UMTS_ETM_TIME_OFFSET_TPC_0_Set2                                  US2CHIPCNT(  24 )

#define UMTS_ETM_TX_ON_DATA_START_ADDRESS_0_Set2                         (  0 )
#define UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_0_Set2                          (  4 )

#define UMTS_ETM_TX_ON_DATA_START_ADDRESS_1_Set2                         (  5 )
#define UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_1_Set2                          (  5 )

#define UMTS_ETM_TX_OFF_DATA_START_ADDRESS_Set2                          (  6 )
#define UMTS_ETM_TX_OFF_DATA_STOP_ADDRESS_Set2                           (  8 )

#define UMTS_ETM_TPC_DATA_START_ADDRESS_0_Set2                           (  0 )
#define UMTS_ETM_TPC_DATA_STOP_ADDRESS_0_Set2                            (  3 )

#define UL1D_ETM_TX_DATA_0_ADDR_Set2                                     ( 0x00 )
#define UL1D_ETM_TX_DATA_1_ADDR_Set2                                     ( 0x64 )
#define UL1D_ETM_TX_DATA_2_ADDR_Set2                                     ( 0x01 )
#define UL1D_ETM_TX_DATA_3_ADDR_Set2                                     ( 0x08 )
#define UL1D_ETM_TX_DATA_4_ADDR_Set2                                     ( 0x09 )
#define UL1D_ETM_TX_DATA_5_ADDR_Set2                                     ( 0x00 )
#define UL1D_ETM_TX_DATA_6_ADDR_Set2                                     ( 0x09 )
#define UL1D_ETM_TX_DATA_7_ADDR_Set2                                     ( 0x00 )
#define UL1D_ETM_TX_DATA_8_ADDR_Set2                                     ( 0x00 )
                                                                                       
#define UL1D_ETM_TX_DATA_0_VAL_Set2                                      ( 0x70 )
#define UL1D_ETM_TX_DATA_1_VAL_Set2                                      ( 0x01 )
#define UL1D_ETM_TX_DATA_2_VAL_Set2                                      ( 0x00 )
#define UL1D_ETM_TX_DATA_3_VAL_Set2                                      ( 0x8C )
#define UL1D_ETM_TX_DATA_4_VAL_Set2                                      ( 0x02 )
#define UL1D_ETM_TX_DATA_5_VAL_Set2                                      ( 0x74 )
#define UL1D_ETM_TX_DATA_6_VAL_Set2                                      ( 0x00 )
#define UL1D_ETM_TX_DATA_7_VAL_Set2                                      ( 0x70 )
#define UL1D_ETM_TX_DATA_8_VAL_Set2                                      ( 0x00 )


#define UL1D_ETM_TPC_DATA_0_ADDR_Set2                                    ( 0x01 )
#define UL1D_ETM_TPC_DATA_1_ADDR_Set2                                    ( 0x08 )
#define UL1D_ETM_TPC_DATA_2_ADDR_Set2                                    ( 0x09 )
#define UL1D_ETM_TPC_DATA_3_ADDR_Set2                                    ( 0x00 )

#define UL1D_ETM_TPC_DATA_0_VAL_Set2                                     ( 0x00 )
#define UL1D_ETM_TPC_DATA_1_VAL_Set2                                     ( 0xD3 )
#define UL1D_ETM_TPC_DATA_2_VAL_Set2                                     ( 0x02 )
#define UL1D_ETM_TPC_DATA_3_VAL_Set2                                     ( 0x74 )

#if __IS_UL1D_ETM_SUPPORT__

extern const UL1_MIPI_SIMPLE_EVENT_TABLE_T*        const UMTS_MIPI_ETM_TX_EVENT_TABLE_Set2[];
extern const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_ETM_TX_DATA_TABLE_Set2[];
extern const UL1_MIPI_SIMPLE_EVENT_TABLE_T*        const UMTS_MIPI_ETM_TPC_EVENT_TABLE_Set2[];
extern const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_ETM_TPC_DATA_TABLE_Set2[];

#endif   // #if __IS_UL1D_ETM_SUPPORT__

#endif   // #if (IS_3G_MIPI_SUPPORT)

#endif /* End of #ifndef _UL1D_CUSTOM_MIPI_ETM_Set2_H_ */
