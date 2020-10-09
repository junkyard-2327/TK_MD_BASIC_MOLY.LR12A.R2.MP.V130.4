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
 *   mml1_rf_reg_elbrus.h
 *
 * Project:
 * --------
 *   MT6755
 *
 * Description:
 * ------------
 *   Multi-Mode RF Central Register address define
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _MML1_RF_REG_ELBRUS_H_
#define _MML1_RF_REG_ELBRUS_H_

/*=================================================================================================================================*/

typedef volatile unsigned short* SRAMADDR;         /* SRAM addr is 16 bits  */
typedef volatile unsigned short  SRAMDATA;         /* SRAM data is 16 bits  */
typedef volatile unsigned short* APBADDR;          /* APB addr is 16 bits   */
typedef volatile unsigned short  APBDATA;          /* APB data is 16 bits   */
typedef volatile unsigned long*  APBADDR32;        /* APB addr is 32 bits   */
typedef volatile unsigned long   APBDATA32;        /* APB data is 32 bits   */
typedef volatile unsigned short* DPRAMADDR;        /* DPRAM addr is 16 bits */
typedef volatile signed   short* DPRAMADDR_S;      /* DPRAM addr is 16 bits */
typedef volatile unsigned short  DPRAMDATA;        /* DPRAM data is 16 bits */

/*=================================================================================================================================*/

#if defined(L1_SIM)
//YYH add for build pass
   #if defined(MT6759)
#define BASE_MADDR_BPI_BSI_SLV0                                                 (0xC0320000)
#define BASE_MADDR_BPI_BSI_SLV1                                                 (0xC0321000)
   #else
#define BASE_MADDR_BPI_BSI_SLV0                                                 (0xC0350000)
#define BASE_MADDR_BPI_BSI_SLV1                                                 (0xC0351000)
   #endif
#endif
#define ABB_MIXEDSYS_BASE                                                       (0xA6160000)

#if IS_MML1_PARTIAL_DFE_FPGA && !defined(__LTE_L1SIM__)
#define MMRF_BSI_TOP_BASE                                                       (0xA7E38000)
#define MMRF_BPI_TOP_REG_BASE                                                   (0xA7E30800)
#define MMRF_PT_DFE_CON_REG_BASE                                                (0xA7E30000)
#else
#define MMRF_BSI_TOP_BASE                                                       (BASE_MADDR_BPI_BSI_SLV1)
#define MMRF_BPI_TOP_REG_BASE                                                   (BASE_MADDR_BPI_BSI_SLV0)
#define MMRF_PT_DFE_CON_REG_BASE                                                (0xA7E30000)
#endif
#define MMRF_DFE0_WTL_RX_FC_REG_BASE                                            (L1_BASE_MADDR_DFE0_WTL_RX_FC)
#define MMRF_DFE1_WTL_RX_FC_REG_BASE                                            (L1_BASE_MADDR_DFE1_WTL_RX_FC)
#define MMRF_DFE0_WTL_TXDFE_REG_BASE                                            (L1_BASE_MADDR_DFE0_WTL_TXDFE)
#define MMRF_DFE1_WTL_TXDFE_REG_BASE                                            (L1_BASE_MADDR_DFE1_WTL_TXDFE)

//ABB Mixedsys Register base
#define MMRF_ABB_APC_REG_BASE                                                   (ABB_MIXEDSYS_BASE + 0x0000C480)
#define MMRF_ABB_DIG0_DIG_REG_BASE                                              (ABB_MIXEDSYS_BASE + 0x0000C000)
#define MMRF_ABB_DIG1_DIG_REG_BASE                                              (ABB_MIXEDSYS_BASE + 0x0000D000)
#define MMRF_ABB_DPDADC0_DPDADC_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000C4A0)
#define MMRF_ABB_DPDADC1_DPDADC_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000D4A0)
#define MMRF_ABB_ETDAC0_ETDAC_REG_BASE                                          (ABB_MIXEDSYS_BASE + 0x0000C500)
#define MMRF_ABB_ETDAC1_ETDAC_REG_BASE                                          (ABB_MIXEDSYS_BASE + 0x0000D500)
#define MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000C700)
#define MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000C900)
#define MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000D700)
#define MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000D900)
#define MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000C800)
#define MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000CA00)
#define MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000D800)
#define MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE                                        (ABB_MIXEDSYS_BASE + 0x0000DA00)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE                                      (ABB_MIXEDSYS_BASE + 0x0000C600)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE                                      (ABB_MIXEDSYS_BASE + 0x0000D600)
#define MMRF_ABB_RSV_0_RSV_REG_BASE                                             (ABB_MIXEDSYS_BASE + 0x0000C400)
#define MMRF_ABB_RSV_1_RSV_REG_BASE                                             (ABB_MIXEDSYS_BASE + 0x0000D400)
#define MMRF_ABB_RSV2_0_RSV2_REG_BASE                                           (ABB_MIXEDSYS_BASE + 0x0000CB00)
#define MMRF_ABB_RSV2_1_RSV2_REG_BASE                                           (ABB_MIXEDSYS_BASE + 0x0000DB00)
#define MMRF_ABB_SWAP_REG_BASE                                                  (ABB_MIXEDSYS_BASE + 0x0000DB50)


//DFE0
#define MMRF_L_DFE0_RX_FC_REG_BASE                                              (MMRF_DFE0_WTL_RX_FC_REG_BASE)
#define MMRF_T_DFE0_RX_FC_REG_BASE                                              (MMRF_DFE0_WTL_RX_FC_REG_BASE)
#define MMRF_W_DFE0_RX_FC_REG_BASE                                              (MMRF_DFE0_WTL_RX_FC_REG_BASE)
//DFE1
#define MMRF_L_DFE1_RX_FC_REG_BASE                                              (MMRF_DFE1_WTL_RX_FC_REG_BASE)
#define MMRF_T_DFE1_RX_FC_REG_BASE                                              (MMRF_DFE1_WTL_RX_FC_REG_BASE)
#define MMRF_W_DFE1_RX_FC_REG_BASE                                              (MMRF_DFE1_WTL_RX_FC_REG_BASE)

//TXDFE0
#define MMRF_WTL_TXDFE0_REG_BASE                                                (MMRF_DFE0_WTL_TXDFE_REG_BASE)
//TXDFE1
#define MMRF_WTL_TXDFE1_REG_BASE                                                (MMRF_DFE1_WTL_TXDFE_REG_BASE)


//Define for HW Sim
#define MMRF_BSI_ARBSPI_REG_BASE                                                (MMRF_BSI_TOP_BASE + 0x8000)

#define MMRF_BSI_ARBSPI_end                                                     (MMRF_BSI_ARBSPI_REG_BASE + 0x0100 + 128*8)
#define MMRF_BSI_MM_end                                                         (MMRF_BSI_MM_REG_BASE     + 0x1004 + 344*8)
#define MMRF_BPI_TOP_end                                                        (MMRF_BPI_TOP_REG_BASE    + 0x00C4 + 1*4)


#define MMRF_BSI_ARBSPI_RFIC1_OFFSET                                            (0x2000)
#define MMRF_BSI_ARBSPI_RFIC2_OFFSET                                            (0x2800)
#define MMRF_BSI_ARBSPI_PMIC_OFFSET                                             (0x3000)
#define MMRF_BSI_ARBSPI_MIPI0_OFFSET                                            (0x3800)
#define MMRF_BSI_ARBSPI_MIPI1_OFFSET                                            (0x4000)
#define MMRF_BSI_ARBSPI_MIPI2_OFFSET                                            (0x4800)
#define MMRF_BSI_ARBSPI_MIPI3_OFFSET                                            (0x5000)
#define MMRF_BSI_ARBSPI_MIPI4_OFFSET                                            (0x5800)
#define MMRF_BSI_ARBSPI_MIPI5_OFFSET                                            (0x6000)
#define MMRF_BSI_ARBSPI_MIPI6_OFFSET                                            (0x6800)
#define MMRF_BSI_ARBSPI_MIPI7_OFFSET                                            (0x7000)


#define MMRF_BSISPI_PORT_PARAM                                                  ((APBADDR32)(MMRF_BSI_ARBSPI_REG_BASE + 0x0004))
#define MMRF_BSISPI_SW_MODE                                                     ((APBADDR32)(MMRF_BSI_ARBSPI_REG_BASE + 0x0008))
#define MMRF_BSISPI_IC0_PARAM1                                                  ((APBADDR32)(MMRF_BSI_ARBSPI_REG_BASE + 0x0010))
#define MMRF_BSISPI_IC0_PARAM2                                                  ((APBADDR32)(MMRF_BSI_ARBSPI_REG_BASE + 0x0014))
#define MMRF_BSISPI_IC1_PARAM1                                                  ((APBADDR32)(MMRF_BSI_ARBSPI_REG_BASE + 0x0020))
#define MMRF_BSISPI_IC1_PARAM2                                                  ((APBADDR32)(MMRF_BSI_ARBSPI_REG_BASE + 0x0024))
#define MMRF_BSISPI_LOGGER_PARAM                                                ((APBADDR32)(MMRF_BSI_ARBSPI_REG_BASE + 0x0030))
#define MMRF_BSISPI_LOGGER_DATA_L                                               ((APBADDR32)(MMRF_BSI_ARBSPI_REG_BASE + 0x0100))
#define MMRF_BSISPI_LOGGER_DATA_H                                               ((APBADDR32)(MMRF_BSI_ARBSPI_REG_BASE + 0x0104))

//Define for internal use
#define MMRF_BSI_MM_REG_BASE                                                    (MMRF_BSI_TOP_BASE)
#define MMRF_BSI_ARBSPI_RFIC1_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_RFIC1_OFFSET)
#define MMRF_BSI_ARBSPI_RFIC2_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_RFIC2_OFFSET)
#define MMRF_BSI_ARBSPI_PMIC_BASE                                               (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_PMIC_OFFSET)
#define MMRF_BSI_ARBSPI_MIPI0_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_MIPI0_OFFSET)
#define MMRF_BSI_ARBSPI_MIPI1_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_MIPI1_OFFSET)
#define MMRF_BSI_ARBSPI_MIPI2_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_MIPI2_OFFSET)
#define MMRF_BSI_ARBSPI_MIPI3_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_MIPI3_OFFSET)
#define MMRF_BSI_ARBSPI_MIPI4_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_MIPI4_OFFSET)
#define MMRF_BSI_ARBSPI_MIPI5_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_MIPI5_OFFSET)
#define MMRF_BSI_ARBSPI_MIPI6_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_MIPI6_OFFSET)
#define MMRF_BSI_ARBSPI_MIPI7_BASE                                              (MMRF_BSI_TOP_BASE + MMRF_BSI_ARBSPI_MIPI7_OFFSET)

#if defined(__LTE_L1SIM__)
#define MMRF_BSI_ARBSPI_end                                                     (MMRF_BSI_ARBSPI_REG_BASE + 0x0100 + 128*8)

#define MMRF_BSI_ARBSPI_RFIC1_end                                               (MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_RFIC2_end                                               (MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_PMIC_end                                                (MMRF_BSI_ARBSPI_PMIC_BASE  + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_MIPI0_end                                               (MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_MIPI1_end                                               (MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_MIPI2_end                                               (MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_MIPI3_end                                               (MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_MIPI4_end                                               (MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_MIPI5_end                                               (MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_MIPI6_end                                               (MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0104 + 128*8)
#define MMRF_BSI_ARBSPI_MIPI7_end                                               (MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0104 + 128*8)
#endif


#define MMRF_RFIC1_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0004))
#define MMRF_RFIC1_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0008))
#define MMRF_RFIC1_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0010))
#define MMRF_RFIC1_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0014))
#define MMRF_RFIC1_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0020))
#define MMRF_RFIC1_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0024))
#define MMRF_RFIC1_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0030))
#define MMRF_RFIC1_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_RFIC1_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC1_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_RFIC2_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0004))
#define MMRF_RFIC2_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0008))
#define MMRF_RFIC2_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0010))
#define MMRF_RFIC2_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0014))
#define MMRF_RFIC2_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0020))
#define MMRF_RFIC2_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0024))
#define MMRF_RFIC2_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0030))
#define MMRF_RFIC2_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_RFIC2_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_RFIC2_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_PMIC_BSISPI_PORT_PARAM                                             ((APBADDR32)(MMRF_BSI_ARBSPI_PMIC_BASE + 0x0004))
#define MMRF_PMIC_BSISPI_SW_MODE                                                ((APBADDR32)(MMRF_BSI_ARBSPI_PMIC_BASE + 0x0008))
#define MMRF_PMIC_BSISPI_IC0_PARAM1                                             ((APBADDR32)(MMRF_BSI_ARBSPI_PMIC_BASE + 0x0010))
#define MMRF_PMIC_BSISPI_IC0_PARAM2                                             ((APBADDR32)(MMRF_BSI_ARBSPI_PMIC_BASE + 0x0014))
#define MMRF_PMIC_BSISPI_IC1_PARAM1                                             ((APBADDR32)(MMRF_BSI_ARBSPI_PMIC_BASE + 0x0020))
#define MMRF_PMIC_BSISPI_IC1_PARAM2                                             ((APBADDR32)(MMRF_BSI_ARBSPI_PMIC_BASE + 0x0024))
#define MMRF_PMIC_BSISPI_LOGGER_PARAM                                           ((APBADDR32)(MMRF_BSI_ARBSPI_PMIC_BASE + 0x0030))
#define MMRF_PMIC_BSISPI_LOGGER_DATA_L(n)                                       ((APBADDR32)(MMRF_BSI_ARBSPI_PMIC_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_PMIC_BSISPI_LOGGER_DATA_H(n)                                       ((APBADDR32)(MMRF_BSI_ARBSPI_PMIC_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_MIPI0_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0004))
#define MMRF_MIPI0_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0008))
#define MMRF_MIPI0_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0010))
#define MMRF_MIPI0_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0014))
#define MMRF_MIPI0_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0020))
#define MMRF_MIPI0_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0024))
#define MMRF_MIPI0_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0030))
#define MMRF_MIPI0_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_MIPI0_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI0_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_MIPI1_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0004))
#define MMRF_MIPI1_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0008))
#define MMRF_MIPI1_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0010))
#define MMRF_MIPI1_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0014))
#define MMRF_MIPI1_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0020))
#define MMRF_MIPI1_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0024))
#define MMRF_MIPI1_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0030))
#define MMRF_MIPI1_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_MIPI1_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI1_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_MIPI2_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0004))
#define MMRF_MIPI2_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0008))
#define MMRF_MIPI2_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0010))
#define MMRF_MIPI2_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0014))
#define MMRF_MIPI2_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0020))
#define MMRF_MIPI2_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0024))
#define MMRF_MIPI2_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0030))
#define MMRF_MIPI2_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_MIPI2_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI2_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_MIPI3_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0004))
#define MMRF_MIPI3_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0008))
#define MMRF_MIPI3_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0010))
#define MMRF_MIPI3_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0014))
#define MMRF_MIPI3_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0020))
#define MMRF_MIPI3_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0024))
#define MMRF_MIPI3_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0030))
#define MMRF_MIPI3_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_MIPI3_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI3_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_MIPI4_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0004))
#define MMRF_MIPI4_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0008))
#define MMRF_MIPI4_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0010))
#define MMRF_MIPI4_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0014))
#define MMRF_MIPI4_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0020))
#define MMRF_MIPI4_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0024))
#define MMRF_MIPI4_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0030))
#define MMRF_MIPI4_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_MIPI4_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI4_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_MIPI5_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0004))
#define MMRF_MIPI5_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0008))
#define MMRF_MIPI5_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0010))
#define MMRF_MIPI5_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0014))
#define MMRF_MIPI5_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0020))
#define MMRF_MIPI5_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0024))
#define MMRF_MIPI5_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0030))
#define MMRF_MIPI5_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_MIPI5_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI5_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_MIPI6_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0004))
#define MMRF_MIPI6_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0008))
#define MMRF_MIPI6_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0010))
#define MMRF_MIPI6_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0014))
#define MMRF_MIPI6_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0020))
#define MMRF_MIPI6_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0024))
#define MMRF_MIPI6_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0030))
#define MMRF_MIPI6_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_MIPI6_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI6_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_MIPI7_BSISPI_PORT_PARAM                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0004))
#define MMRF_MIPI7_BSISPI_SW_MODE                                               ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0008))
#define MMRF_MIPI7_BSISPI_IC0_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0010))
#define MMRF_MIPI7_BSISPI_IC0_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0014))
#define MMRF_MIPI7_BSISPI_IC1_PARAM1                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0020))
#define MMRF_MIPI7_BSISPI_IC1_PARAM2                                            ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0024))
#define MMRF_MIPI7_BSISPI_LOGGER_PARAM                                          ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0030))
#define MMRF_MIPI7_BSISPI_LOGGER_DATA_L(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0100 + (n)*8))   //n is from 0 to 127
#define MMRF_MIPI7_BSISPI_LOGGER_DATA_H(n)                                      ((APBADDR32)(MMRF_BSI_ARBSPI_MIPI7_BASE + 0x0104 + (n)*8))   //n is from 0 to 127

#define MMRF_BSI_MM_IDC_RFICON_WDATA                                            ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0140))
#define MMRF_BSI_MM_IDC_RFICOFF_WDATA                                           ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0144))
#define MMRF_BSI_MM_IDC_RFIC2ON_WDATA                                           ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0148))
#define MMRF_BSI_MM_IDC_RFIC2OFF_WDATA                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x014C))
#define MMRF_BSI_MM_IDC_RFIC_CONF                                               ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0150))
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG                                            ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0154))
#define MMRF_BSI_MM_AP2RFIC_WDATA                                               ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0158))
#define MMRF_BSI_MM_AP2RFIC_SHIFT                                               ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x015C))
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0160))
#define MMRF_BSI_MM_IMM_MD1_RFIC1_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0164))
#define MMRF_BSI_MM_IMM_MD1_RFIC1_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0168))
#define MMRF_BSI_MM_IMM_MD1_RFIC1_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x016C))
#define MMRF_BSI_MM_IMM_MD1_RFIC1_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0170))
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0174))
#define MMRF_BSI_MM_IMM_MD1_RFIC2_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0178))
#define MMRF_BSI_MM_IMM_MD1_RFIC2_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x017C))
#define MMRF_BSI_MM_IMM_MD1_RFIC2_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0180))
#define MMRF_BSI_MM_IMM_MD1_RFIC2_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0184))
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0188))
#define MMRF_BSI_MM_IMM_MD1_MIPI0_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x018C))
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0190))
#define MMRF_BSI_MM_IMM_MD1_MIPI0_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0194))
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0198))
#define MMRF_BSI_MM_IMM_MD1_MIPI0_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x019C))
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01A0))
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01A4))
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01A8))
#define MMRF_BSI_MM_IMM_MD1_MIPI1_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01AC))
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01B0))
#define MMRF_BSI_MM_IMM_MD1_MIPI1_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01B4))
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01B8))
#define MMRF_BSI_MM_IMM_MD1_MIPI1_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01BC))
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01C0))
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01C4))
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01C8))
#define MMRF_BSI_MM_IMM_MD1_MIPI2_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01CC))
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01D0))
#define MMRF_BSI_MM_IMM_MD1_MIPI2_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01D4))
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01D8))
#define MMRF_BSI_MM_IMM_MD1_MIPI2_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01DC))
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01E0))
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01E4))
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01E8))
#define MMRF_BSI_MM_IMM_MD1_MIPI3_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01EC))
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01F0))
#define MMRF_BSI_MM_IMM_MD1_MIPI3_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01F4))
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01F8))
#define MMRF_BSI_MM_IMM_MD1_MIPI3_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x01FC))
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0200))
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0204))
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0208))
#define MMRF_BSI_MM_IMM_MD1_MIPI4_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x020C))
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0210))
#define MMRF_BSI_MM_IMM_MD1_MIPI4_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0214))
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0218))
#define MMRF_BSI_MM_IMM_MD1_MIPI4_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x021C))
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0220))
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0224))
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0228))
#define MMRF_BSI_MM_IMM_MD1_MIPI5_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x022C))
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0230))
#define MMRF_BSI_MM_IMM_MD1_MIPI5_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0234))
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0238))
#define MMRF_BSI_MM_IMM_MD1_MIPI5_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x023C))
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0240))
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0244))
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0248))
#define MMRF_BSI_MM_IMM_MD1_MIPI6_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x024C))
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0250))
#define MMRF_BSI_MM_IMM_MD1_MIPI6_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0254))
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0258))
#define MMRF_BSI_MM_IMM_MD1_MIPI6_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x025C))
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0260))
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0264))
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0268))
#define MMRF_BSI_MM_IMM_MD1_MIPI7_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x026C))
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0270))
#define MMRF_BSI_MM_IMM_MD1_MIPI7_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0274))
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0278))
#define MMRF_BSI_MM_IMM_MD1_MIPI7_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x027C))
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0280))
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0284))
#define MMRF_BSI_MM_L1CORE_PMIC_CONF                                            ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0288))
#define MMRF_BSI_MM_L1CORE_PMIC_WDATA_1                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x028C))
#define MMRF_BSI_MM_L1CORE_PMIC_STATUS                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0290))
#define MMRF_BSI_MM_L1CORE_PMIC_RDAT_L                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0294))
#define MMRF_BSI_MM_L1CORE_PMIC_RDAT_H                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0298))
#define MMRF_BSI_MM_PCORE_PMIC_CONF                                             ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x029C))
#define MMRF_BSI_MM_PCORE_PMIC_WDATA_1                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02A0))
#define MMRF_BSI_MM_PCORE_PMIC_STATUS                                           ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02A4))
#define MMRF_BSI_MM_PCORE_PMIC_RDAT_L                                           ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02A8))
#define MMRF_BSI_MM_PCORE_PMIC_RDAT_H                                           ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02AC))
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02B0))
#define MMRF_BSI_MM_IMM_MD2_RFIC1_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02B4))
#define MMRF_BSI_MM_IMM_MD2_RFIC1_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02B8))
#define MMRF_BSI_MM_IMM_MD2_RFIC1_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02BC))
#define MMRF_BSI_MM_IMM_MD2_RFIC1_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02C0))
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02C4))
#define MMRF_BSI_MM_IMM_MD2_RFIC2_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02C8))
#define MMRF_BSI_MM_IMM_MD2_RFIC2_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02CC))
#define MMRF_BSI_MM_IMM_MD2_RFIC2_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02D0))
#define MMRF_BSI_MM_IMM_MD2_RFIC2_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02D4))
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02D8))
#define MMRF_BSI_MM_IMM_MD2_MIPI0_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02DC))
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02E0))
#define MMRF_BSI_MM_IMM_MD2_MIPI0_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02E4))
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02E8))
#define MMRF_BSI_MM_IMM_MD2_MIPI0_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02EC))
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02F0))
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02F4))
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02F8))
#define MMRF_BSI_MM_IMM_MD2_MIPI1_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x02FC))
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0300))
#define MMRF_BSI_MM_IMM_MD2_MIPI1_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0304))
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0308))
#define MMRF_BSI_MM_IMM_MD2_MIPI1_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x030C))
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0310))
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0314))
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0318))
#define MMRF_BSI_MM_IMM_MD2_MIPI2_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x031C))
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0320))
#define MMRF_BSI_MM_IMM_MD2_MIPI2_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0324))
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0328))
#define MMRF_BSI_MM_IMM_MD2_MIPI2_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x032C))
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0330))
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0334))
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0338))
#define MMRF_BSI_MM_IMM_MD2_MIPI3_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x033C))
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0340))
#define MMRF_BSI_MM_IMM_MD2_MIPI3_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0344))
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0348))
#define MMRF_BSI_MM_IMM_MD2_MIPI3_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x034C))
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0350))
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0354))
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0358))
#define MMRF_BSI_MM_IMM_MD2_MIPI4_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x035C))
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0360))
#define MMRF_BSI_MM_IMM_MD2_MIPI4_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0364))
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0368))
#define MMRF_BSI_MM_IMM_MD2_MIPI4_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x036C))
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0370))
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0374))
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0378))
#define MMRF_BSI_MM_IMM_MD2_MIPI5_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x037C))
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0380))
#define MMRF_BSI_MM_IMM_MD2_MIPI5_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0384))
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0388))
#define MMRF_BSI_MM_IMM_MD2_MIPI5_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x038C))
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0390))
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0394))
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0398))
#define MMRF_BSI_MM_IMM_MD2_MIPI6_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x039C))
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03A0))
#define MMRF_BSI_MM_IMM_MD2_MIPI6_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03A4))
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03A8))
#define MMRF_BSI_MM_IMM_MD2_MIPI6_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03AC))
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03B0))
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03B4))
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03B8))
#define MMRF_BSI_MM_IMM_MD2_MIPI7_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03BC))
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03C0))
#define MMRF_BSI_MM_IMM_MD2_MIPI7_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03C4))
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03C8))
#define MMRF_BSI_MM_IMM_MD2_MIPI7_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03CC))
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03D0))
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03D4))
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF                                           ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03D8))
#define MMRF_BSI_MM_IMM_MD2_PMIC_WDATA_1                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03DC))
#define MMRF_BSI_MM_IMM_MD2_PMIC_STATUS                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03E0))
#define MMRF_BSI_MM_IMM_MD2_PMIC_RDAT_L                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03E4))
#define MMRF_BSI_MM_IMM_MD2_PMIC_RDAT_H                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03E8))
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03EC))
#define MMRF_BSI_MM_IMM_MD3_RFIC1_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03F0))
#define MMRF_BSI_MM_IMM_MD3_RFIC1_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03F4))
#define MMRF_BSI_MM_IMM_MD3_RFIC1_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03F8))
#define MMRF_BSI_MM_IMM_MD3_RFIC1_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x03FC))
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0400))
#define MMRF_BSI_MM_IMM_MD3_RFIC2_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0404))
#define MMRF_BSI_MM_IMM_MD3_RFIC2_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0408))
#define MMRF_BSI_MM_IMM_MD3_RFIC2_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x040C))
#define MMRF_BSI_MM_IMM_MD3_RFIC2_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0410))
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0414))
#define MMRF_BSI_MM_IMM_MD3_MIPI0_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0418))
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x041C))
#define MMRF_BSI_MM_IMM_MD3_MIPI0_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0420))
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0424))
#define MMRF_BSI_MM_IMM_MD3_MIPI0_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0428))
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x042C))
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0430))
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0434))
#define MMRF_BSI_MM_IMM_MD3_MIPI1_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0438))
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x043C))
#define MMRF_BSI_MM_IMM_MD3_MIPI1_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0440))
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0444))
#define MMRF_BSI_MM_IMM_MD3_MIPI1_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0448))
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x044C))
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0450))
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0454))
#define MMRF_BSI_MM_IMM_MD3_MIPI2_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0458))
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x045C))
#define MMRF_BSI_MM_IMM_MD3_MIPI2_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0460))
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0464))
#define MMRF_BSI_MM_IMM_MD3_MIPI2_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0468))
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x046C))
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0470))
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0474))
#define MMRF_BSI_MM_IMM_MD3_MIPI3_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0478))
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x047C))
#define MMRF_BSI_MM_IMM_MD3_MIPI3_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0480))
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0484))
#define MMRF_BSI_MM_IMM_MD3_MIPI3_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0488))
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x048C))
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0490))
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0494))
#define MMRF_BSI_MM_IMM_MD3_MIPI4_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0498))
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x049C))
#define MMRF_BSI_MM_IMM_MD3_MIPI4_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04A0))
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04A4))
#define MMRF_BSI_MM_IMM_MD3_MIPI4_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04A8))
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04AC))
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04B0))
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04B4))
#define MMRF_BSI_MM_IMM_MD3_MIPI5_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04B8))
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04BC))
#define MMRF_BSI_MM_IMM_MD3_MIPI5_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04C0))
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04C4))
#define MMRF_BSI_MM_IMM_MD3_MIPI5_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04C8))
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04CC))
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04D0))
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04D4))
#define MMRF_BSI_MM_IMM_MD3_MIPI6_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04D8))
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04DC))
#define MMRF_BSI_MM_IMM_MD3_MIPI6_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04E0))
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04E4))
#define MMRF_BSI_MM_IMM_MD3_MIPI6_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04E8))
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04EC))
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04F0))
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04F4))
#define MMRF_BSI_MM_IMM_MD3_MIPI7_WDATA_1                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04F8))
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x04FC))
#define MMRF_BSI_MM_IMM_MD3_MIPI7_WDATA_2                                       ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0500))
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_2                                      ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0504))
#define MMRF_BSI_MM_IMM_MD3_MIPI7_STATUS                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0508))
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RDAT_L                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x050C))
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RDAT_H                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0510))
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF                                           ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0514))
#define MMRF_BSI_MM_IMM_MD3_PMIC_WDATA_1                                        ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0518))
#define MMRF_BSI_MM_IMM_MD3_PMIC_STATUS                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x051C))
#define MMRF_BSI_MM_IMM_MD3_PMIC_RDAT_L                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0520))
#define MMRF_BSI_MM_IMM_MD3_PMIC_RDAT_H                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0524))
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR                                     ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0528))
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x052C))
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR                                     ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0530))
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0534))
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR                                     ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0538))
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS                                         ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x053C))
#define MMRF_BSI_MM_RFPOR_EVT_ENA                                               ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0540))
#define MMRF_BSI_MM_RFPOR_CONF                                                  ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0548))
#define MMRF_BSI_MM_RFPOR_STATUS                                                ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x054C))
#define MMRF_BSI_MM_RFPOR_STATUS_CLR                                            ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0550))
#define MMRF_BSI_MM_EVENT_OFFSET(n)                                             ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0700 + (n)*8))   //n is from 0 to 15
#define MMRF_BSI_MM_EVENT_CON(n)                                                ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x0704 + (n)*8))   //n is from 0 to 15   
#define MMRF_BSI_MM_RFPOR_DATA(n)                                               ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x1000 + (n)*8))   //n is from 0 to 343
#define MMRF_BSI_MM_RFPOR_MIPI_CONF(n)                                          ((APBADDR32)(MMRF_BSI_MM_REG_BASE + 0x1004 + (n)*8))   //n is from 0 to 343

/*=================================================================================================================================*/
#define MMRF_BPI_TOP_OUT_OR_3100                                                ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0004))
#define MMRF_BPI_TOP_OUT_OR_4732                                                ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0008))
#define MMRF_BPI_TOP_OUT_AND_3100                                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x000C))
#define MMRF_BPI_TOP_OUT_AND_4732                                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0010))
#define MMRF_BPI_TOP_MASK_MD1_G_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0014))
#define MMRF_BPI_TOP_MASK_MD1_G_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0018))
#define MMRF_BPI_TOP_MASK_MD1_W_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x001C))
#define MMRF_BPI_TOP_MASK_MD1_W_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0020))
#define MMRF_BPI_TOP_MASK_MD1_T_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0024))
#define MMRF_BPI_TOP_MASK_MD1_T_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0028))
#define MMRF_BPI_TOP_MASK_MD1_L_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x002C))
#define MMRF_BPI_TOP_MASK_MD1_L_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0030))
#define MMRF_BPI_TOP_MASK_MD1_L1_3100                                           ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0034))
#define MMRF_BPI_TOP_MASK_MD1_L1_4732                                           ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0038))
#define MMRF_BPI_TOP_MASK_MD2_G_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x003C))
#define MMRF_BPI_TOP_MASK_MD2_G_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0040))
#define MMRF_BPI_TOP_MASK_MD2_W_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0044))
#define MMRF_BPI_TOP_MASK_MD2_W_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0048))
#define MMRF_BPI_TOP_MASK_MD3_C_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x004C))
#define MMRF_BPI_TOP_MASK_MD3_C_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0050))
#define MMRF_BPI_TOP_CONFLICT_FLAG                                              ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0054))
#define MMRF_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_3100                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0058))
#define MMRF_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_4732                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x005C))
#define MMRF_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_3100                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0060))
#define MMRF_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_4732                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0064))
#define MMRF_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_3100                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0068))
#define MMRF_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_4732                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x006C))
#define MMRF_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_3100                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0070))
#define MMRF_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_4732                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0074))
#define MMRF_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_3100                              ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0078))
#define MMRF_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_4732                              ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x007C))
#define MMRF_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_3100                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0080))
#define MMRF_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_4732                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0084))
#define MMRF_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_3100                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0088))
#define MMRF_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_4732                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x008C))
#define MMRF_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_3100                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0090))
#define MMRF_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_4732                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0094))
#define MMRF_BPI_TOP_BUS_OUT_3100                                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x0098))
#define MMRF_BPI_TOP_BUS_OUT_4732                                               ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x009C))
#define MMRF_BPI_TOP_MD1_G_DATA_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00A0))
#define MMRF_BPI_TOP_MD1_G_DATA_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00A4))
#define MMRF_BPI_TOP_MD1_W_DATA_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00A8))
#define MMRF_BPI_TOP_MD1_W_DATA_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00AC))
#define MMRF_BPI_TOP_MD1_T_DATA_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00B0))
#define MMRF_BPI_TOP_MD1_T_DATA_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00B4))
#define MMRF_BPI_TOP_MD1_L_DATA_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00B8))
#define MMRF_BPI_TOP_MD1_L_DATA_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00BC))
#define MMRF_BPI_TOP_MD1_L1_DATA_3100                                           ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00C0))
#define MMRF_BPI_TOP_MD1_L1_DATA_4732                                           ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00C4))
#define MMRF_BPI_TOP_MD2_G_DATA_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00C8))
#define MMRF_BPI_TOP_MD2_G_DATA_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00CC))
#define MMRF_BPI_TOP_MD2_W_DATA_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00D0))
#define MMRF_BPI_TOP_MD2_W_DATA_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00D4))
#define MMRF_BPI_TOP_MD3_C_DATA_3100                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00D8))
#define MMRF_BPI_TOP_MD3_C_DATA_4732                                            ((APBADDR32)(MMRF_BPI_TOP_REG_BASE + 0x00DC))

/*=================================================================================================================================*/
//ABB Mixedsys 
#define MMRF_ABB_APC_CON1                                                       ((APBADDR)(MMRF_ABB_APC_REG_BASE + 0x0004))
#define MMRF_ABB_APC_CON2                                                       ((APBADDR)(MMRF_ABB_APC_REG_BASE + 0x0008))

#define MMRF_ABB_DIG0_DIG_CON1                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0004))
#define MMRF_ABB_DIG0_DIG_CON2                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0008))
#define MMRF_ABB_DIG0_DIG_CON3                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x000C))
#define MMRF_ABB_DIG0_DIG_CON4                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0010))
#define MMRF_ABB_DIG0_DIG_CON5                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0014))
#define MMRF_ABB_DIG0_DIG_CON6                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0018))
#define MMRF_ABB_DIG0_DIG_CON7                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x001C))
#define MMRF_ABB_DIG0_DIG_CON8                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0020))
#define MMRF_ABB_DIG0_DIG_CON9                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0024))
#define MMRF_ABB_DIG0_DIG_CONA                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0028))
#define MMRF_ABB_DIG0_DIG_CONB                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x002C))
#define MMRF_ABB_DIG0_DIG_COND                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0034))
#define MMRF_ABB_DIG0_DIG_CONE                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0038))
#define MMRF_ABB_DIG0_DIG_CONF                                                  ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x003C))
#define MMRF_ABB_DIG0_DIG_CON10                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0040))
#define MMRF_ABB_DIG0_DIG_CON11                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0044))
#define MMRF_ABB_DIG0_DIG_CON12                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0048))
#define MMRF_ABB_DIG0_DIG_CON13                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x004C))
#define MMRF_ABB_DIG0_DIG_CON14                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0050))
#define MMRF_ABB_DIG0_DIG_CON15                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0054))
#define MMRF_ABB_DIG0_DIG_CON16                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0058))
#define MMRF_ABB_DIG0_DIG_CON17                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x005C))
#define MMRF_ABB_DIG0_DIG_CON18                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0060))
#define MMRF_ABB_DIG0_DIG_CON19                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0064))
#define MMRF_ABB_DIG0_DIG_CON1A                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0068))
#define MMRF_ABB_DIG0_DIG_CON1B                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x006C))
#define MMRF_ABB_DIG0_DIG_CON1C                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0070))
#define MMRF_ABB_DIG0_DIG_CON1D                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0074))
#define MMRF_ABB_DIG0_DIG_CON1E                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0078))
#define MMRF_ABB_DIG0_DIG_CON1F                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x007C))
#define MMRF_ABB_DIG0_DIG_CON20                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0080))
#define MMRF_ABB_DIG0_DIG_CON21                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0084))
#define MMRF_ABB_DIG0_DIG_CON22                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0088))
#define MMRF_ABB_DIG0_DIG_CON23                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x008C))
#define MMRF_ABB_DIG0_DIG_CON24                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0090))
#define MMRF_ABB_DIG0_DIG_CON25                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0094))
#define MMRF_ABB_DIG0_DIG_CON26                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0098))
#define MMRF_ABB_DIG0_DIG_CON27                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x009C))
#define MMRF_ABB_DIG0_DIG_CON28                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00A0))
#define MMRF_ABB_DIG0_DIG_CON29                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00A4))
#define MMRF_ABB_DIG0_DIG_CON2A                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00A8))
#define MMRF_ABB_DIG0_DIG_CON2B                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00AC))
#define MMRF_ABB_DIG0_DIG_CON2C                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00B0))
#define MMRF_ABB_DIG0_DIG_CON2D                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00B4))
#define MMRF_ABB_DIG0_DIG_CON2E                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00B8))
#define MMRF_ABB_DIG0_DIG_CON2F                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00BC))
#define MMRF_ABB_DIG0_DIG_CON30                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00C0))
#define MMRF_ABB_DIG0_DIG_CON31                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00C4))
#define MMRF_ABB_DIG0_DIG_CON32                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00C8))
#define MMRF_ABB_DIG0_DIG_CON33                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00CC))
#define MMRF_ABB_DIG0_DIG_CON34                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00D0))
#define MMRF_ABB_DIG0_DIG_CON35                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00D4))
#define MMRF_ABB_DIG0_DIG_CON36                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00D8))
#define MMRF_ABB_DIG0_DIG_CON37                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00DC))
#define MMRF_ABB_DIG0_DIG_CON38                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00E0))
#define MMRF_ABB_DIG0_DIG_CON39                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00E4))
#define MMRF_ABB_DIG0_DIG_CON3A                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00E8))
#define MMRF_ABB_DIG0_DIG_CON3B                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00EC))
#define MMRF_ABB_DIG0_DIG_CON3C                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00F0))
#define MMRF_ABB_DIG0_DIG_CON3D                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00F4))
#define MMRF_ABB_DIG0_DIG_CON3E                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00F8))
#define MMRF_ABB_DIG0_DIG_CON3F                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x00FC))
#define MMRF_ABB_DIG0_DIG_CON40                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0100))
#define MMRF_ABB_DIG0_DIG_CON41                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0104))
#define MMRF_ABB_DIG0_DIG_CON42                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0108))
#define MMRF_ABB_DIG0_DIG_CON43                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x010C))
#define MMRF_ABB_DIG0_DIG_CON44                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0110))
#define MMRF_ABB_DIG0_DIG_CON45                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0114))
#define MMRF_ABB_DIG0_DIG_CON46                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0118))
#define MMRF_ABB_DIG0_DIG_CON47                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x011C))
#define MMRF_ABB_DIG0_DIG_CON48                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0120))
#define MMRF_ABB_DIG0_DIG_CON49                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0124))
#define MMRF_ABB_DIG0_DIG_CON4A                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0128))
#define MMRF_ABB_DIG0_DIG_CON4B                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x012C))
#define MMRF_ABB_DIG0_DIG_CON4C                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0130))
#define MMRF_ABB_DIG0_DIG_CON4D                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0134))
#define MMRF_ABB_DIG0_DIG_CON4E                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0138))
#define MMRF_ABB_DIG0_DIG_CON4F                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x013C))
#define MMRF_ABB_DIG0_DIG_CON50                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0140))
#define MMRF_ABB_DIG0_DIG_CON51                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0144))
#define MMRF_ABB_DIG0_DIG_CON52                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0148))
#define MMRF_ABB_DIG0_DIG_CON53                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x014C))
#define MMRF_ABB_DIG0_DIG_CON54                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0150))
#define MMRF_ABB_DIG0_DIG_CON55                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0154))
#define MMRF_ABB_DIG0_DIG_CON56                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0158))
#define MMRF_ABB_DIG0_DIG_CON57                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x015C))
#define MMRF_ABB_DIG0_DIG_CON58                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0160))
#define MMRF_ABB_DIG0_DIG_CON59                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0164))
#define MMRF_ABB_DIG0_DIG_CON5A                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0168))
#define MMRF_ABB_DIG0_DIG_CON5B                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x016C))
#define MMRF_ABB_DIG0_DIG_CON5C                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0170))
#define MMRF_ABB_DIG0_DIG_CON5D                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0174))
#define MMRF_ABB_DIG0_DIG_CON5E                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0178))
#define MMRF_ABB_DIG0_DIG_CON5F                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x017C))
#define MMRF_ABB_DIG0_DIG_CON60                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0180))
#define MMRF_ABB_DIG0_DIG_CON61                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0184))
#define MMRF_ABB_DIG0_DIG_CON62                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0188))
#define MMRF_ABB_DIG0_DIG_CON63                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x018C))
#define MMRF_ABB_DIG0_DIG_CON64                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0190))
#define MMRF_ABB_DIG0_DIG_CON65                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0194))
#define MMRF_ABB_DIG0_DIG_CON66                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0198))
#define MMRF_ABB_DIG0_DIG_CON67                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x019C))
#define MMRF_ABB_DIG0_DIG_CON68                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01A0))
#define MMRF_ABB_DIG0_DIG_CON69                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01A4))
#define MMRF_ABB_DIG0_DIG_CON6A                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01A8))
#define MMRF_ABB_DIG0_DIG_CON6B                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01AC))
#define MMRF_ABB_DIG0_DIG_CON6C                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01B0))
#define MMRF_ABB_DIG0_DIG_CON6D                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01B4))
#define MMRF_ABB_DIG0_DIG_CON6E                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01B8))
#define MMRF_ABB_DIG0_DIG_CON6F                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01BC))
#define MMRF_ABB_DIG0_DIG_CON70                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01C0))
#define MMRF_ABB_DIG0_DIG_CON71                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01C4))
#define MMRF_ABB_DIG0_DIG_CON72                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01C8))
#define MMRF_ABB_DIG0_DIG_CON73                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01CC))
#define MMRF_ABB_DIG0_DIG_CON74                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01D0))
#define MMRF_ABB_DIG0_DIG_CON75                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01D4))
#define MMRF_ABB_DIG0_DIG_CON76                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01D8))
#define MMRF_ABB_DIG0_DIG_CON77                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01DC))
#define MMRF_ABB_DIG0_DIG_CON78                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01E0))
#define MMRF_ABB_DIG0_DIG_CON79                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01E4))
#define MMRF_ABB_DIG0_DIG_CON7A                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01E8))
#define MMRF_ABB_DIG0_DIG_CON7B                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01EC))
#define MMRF_ABB_DIG0_DIG_CON7C                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01F0))
#define MMRF_ABB_DIG0_DIG_CON7D                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x01F4))
#define MMRF_ABB_DIG0_DIG_CON81                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0204))
#define MMRF_ABB_DIG0_DIG_CON82                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0208))
#define MMRF_ABB_DIG0_DIG_CON83                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x020C))
#define MMRF_ABB_DIG0_DIG_CON84                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0210))
#define MMRF_ABB_DIG0_DIG_CON85                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0214))
#define MMRF_ABB_DIG0_DIG_CON86                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0218))
#define MMRF_ABB_DIG0_DIG_CON87                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x021C))
#define MMRF_ABB_DIG0_DIG_CON88                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0220))
#define MMRF_ABB_DIG0_DIG_CON89                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0224))
#define MMRF_ABB_DIG0_DIG_CON8A                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0228))
#define MMRF_ABB_DIG0_DIG_CON8B                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x022C))
#define MMRF_ABB_DIG0_DIG_CON8C                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0230))
#define MMRF_ABB_DIG0_DIG_CON8D                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0234))
#define MMRF_ABB_DIG0_DIG_CON8E                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0238))
#define MMRF_ABB_DIG0_DIG_CON8F                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x023C))
#define MMRF_ABB_DIG0_DIG_CON90                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0240))
#define MMRF_ABB_DIG0_DIG_CON91                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0244))
#define MMRF_ABB_DIG0_DIG_CON92                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0248))
#define MMRF_ABB_DIG0_DIG_CON93                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x024C))
#define MMRF_ABB_DIG0_DIG_CON94                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0250))
#define MMRF_ABB_DIG0_DIG_CON95                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0254))
#define MMRF_ABB_DIG0_DIG_CON96                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0258))
#define MMRF_ABB_DIG0_DIG_CON97                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x025C))
#define MMRF_ABB_DIG0_DIG_CON98                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0260))
#define MMRF_ABB_DIG0_DIG_CON99                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0264))
#define MMRF_ABB_DIG0_DIG_CON9A                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0268))
#define MMRF_ABB_DIG0_DIG_CON9B                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x026C))
#define MMRF_ABB_DIG0_DIG_CON9C                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0270))
#define MMRF_ABB_DIG0_DIG_CON9D                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0274))
#define MMRF_ABB_DIG0_DIG_CON9E                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0278))
#define MMRF_ABB_DIG0_DIG_CONA0                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0280))
#define MMRF_ABB_DIG0_DIG_CONA1                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0284))
#define MMRF_ABB_DIG0_DIG_CONA2                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0288))
#define MMRF_ABB_DIG0_DIG_CONA3                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x028C))
#define MMRF_ABB_DIG0_DIG_CONA4                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0290))
#define MMRF_ABB_DIG0_DIG_CONA5                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0294))
#define MMRF_ABB_DIG0_DIG_CONA6                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x0298))
#define MMRF_ABB_DIG0_DIG_CONA7                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x029C))
#define MMRF_ABB_DIG0_DIG_CONA8                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02A0))
#define MMRF_ABB_DIG0_DIG_CONA9                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02A4))
#define MMRF_ABB_DIG0_DIG_CONAA                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02A8))
#define MMRF_ABB_DIG0_DIG_CONAB                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02AC))
#define MMRF_ABB_DIG0_DIG_CONAC                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02B0))
#define MMRF_ABB_DIG0_DIG_CONAD                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02B4))
#define MMRF_ABB_DIG0_DIG_CONAE                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02B8))
#define MMRF_ABB_DIG0_DIG_CONAF                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02BC))
#define MMRF_ABB_DIG0_DIG_CONB0                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02C0))
#define MMRF_ABB_DIG0_DIG_CONB1                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02C4))
#define MMRF_ABB_DIG0_DIG_CONB2                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02C8))
#define MMRF_ABB_DIG0_DIG_CONB3                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02CC))
#define MMRF_ABB_DIG0_DIG_CONB4                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02D0))
#define MMRF_ABB_DIG0_DIG_CONB5                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02D4))
#define MMRF_ABB_DIG0_DIG_CONB6                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02D8))
#define MMRF_ABB_DIG0_DIG_CONB7                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02DC))
#define MMRF_ABB_DIG0_DIG_CONB8                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02E0))
#define MMRF_ABB_DIG0_DIG_CONB9                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02E4))
#define MMRF_ABB_DIG0_DIG_CONBA                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02E8))
#define MMRF_ABB_DIG0_DIG_CONBB                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02EC))
#define MMRF_ABB_DIG0_DIG_CONBC                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02F0))
#define MMRF_ABB_DIG0_DIG_CONBD                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02F4))
#define MMRF_ABB_DIG0_DIG_CONBE                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02F8))
#define MMRF_ABB_DIG0_DIG_CONBF                                                 ((APBADDR)(MMRF_ABB_DIG0_DIG_REG_BASE + 0x02FC))

#define MMRF_ABB_DIG1_DIG_CON1                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0004))
#define MMRF_ABB_DIG1_DIG_CON2                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0008))
#define MMRF_ABB_DIG1_DIG_CON3                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x000C))
#define MMRF_ABB_DIG1_DIG_CON4                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0010))
#define MMRF_ABB_DIG1_DIG_CON5                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0014))
#define MMRF_ABB_DIG1_DIG_CON6                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0018))
#define MMRF_ABB_DIG1_DIG_CON7                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x001C))
#define MMRF_ABB_DIG1_DIG_CON8                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0020))
#define MMRF_ABB_DIG1_DIG_CON9                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0024))
#define MMRF_ABB_DIG1_DIG_CONA                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0028))
#define MMRF_ABB_DIG1_DIG_CONB                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x002C))
#define MMRF_ABB_DIG1_DIG_COND                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0034))
#define MMRF_ABB_DIG1_DIG_CONE                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0038))
#define MMRF_ABB_DIG1_DIG_CONF                                                  ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x003C))
#define MMRF_ABB_DIG1_DIG_CON10                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0040))
#define MMRF_ABB_DIG1_DIG_CON11                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0044))
#define MMRF_ABB_DIG1_DIG_CON12                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0048))
#define MMRF_ABB_DIG1_DIG_CON13                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x004C))
#define MMRF_ABB_DIG1_DIG_CON14                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0050))
#define MMRF_ABB_DIG1_DIG_CON15                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0054))
#define MMRF_ABB_DIG1_DIG_CON16                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0058))
#define MMRF_ABB_DIG1_DIG_CON17                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x005C))
#define MMRF_ABB_DIG1_DIG_CON18                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0060))
#define MMRF_ABB_DIG1_DIG_CON19                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0064))
#define MMRF_ABB_DIG1_DIG_CON1A                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0068))
#define MMRF_ABB_DIG1_DIG_CON1B                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x006C))
#define MMRF_ABB_DIG1_DIG_CON1C                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0070))
#define MMRF_ABB_DIG1_DIG_CON1D                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0074))
#define MMRF_ABB_DIG1_DIG_CON1E                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0078))
#define MMRF_ABB_DIG1_DIG_CON1F                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x007C))
#define MMRF_ABB_DIG1_DIG_CON20                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0080))
#define MMRF_ABB_DIG1_DIG_CON21                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0084))
#define MMRF_ABB_DIG1_DIG_CON22                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0088))
#define MMRF_ABB_DIG1_DIG_CON23                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x008C))
#define MMRF_ABB_DIG1_DIG_CON24                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0090))
#define MMRF_ABB_DIG1_DIG_CON25                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0094))
#define MMRF_ABB_DIG1_DIG_CON26                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0098))
#define MMRF_ABB_DIG1_DIG_CON27                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x009C))
#define MMRF_ABB_DIG1_DIG_CON28                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00A0))
#define MMRF_ABB_DIG1_DIG_CON29                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00A4))
#define MMRF_ABB_DIG1_DIG_CON2A                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00A8))
#define MMRF_ABB_DIG1_DIG_CON2B                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00AC))
#define MMRF_ABB_DIG1_DIG_CON2C                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00B0))
#define MMRF_ABB_DIG1_DIG_CON2D                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00B4))
#define MMRF_ABB_DIG1_DIG_CON2E                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00B8))
#define MMRF_ABB_DIG1_DIG_CON2F                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00BC))
#define MMRF_ABB_DIG1_DIG_CON30                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00C0))
#define MMRF_ABB_DIG1_DIG_CON31                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00C4))
#define MMRF_ABB_DIG1_DIG_CON32                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00C8))
#define MMRF_ABB_DIG1_DIG_CON33                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00CC))
#define MMRF_ABB_DIG1_DIG_CON34                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00D0))
#define MMRF_ABB_DIG1_DIG_CON35                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00D4))
#define MMRF_ABB_DIG1_DIG_CON36                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00D8))
#define MMRF_ABB_DIG1_DIG_CON37                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00DC))
#define MMRF_ABB_DIG1_DIG_CON38                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00E0))
#define MMRF_ABB_DIG1_DIG_CON39                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00E4))
#define MMRF_ABB_DIG1_DIG_CON3A                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00E8))
#define MMRF_ABB_DIG1_DIG_CON3B                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00EC))
#define MMRF_ABB_DIG1_DIG_CON3C                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00F0))
#define MMRF_ABB_DIG1_DIG_CON3D                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00F4))
#define MMRF_ABB_DIG1_DIG_CON3E                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00F8))
#define MMRF_ABB_DIG1_DIG_CON3F                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x00FC))
#define MMRF_ABB_DIG1_DIG_CON40                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0100))
#define MMRF_ABB_DIG1_DIG_CON41                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0104))
#define MMRF_ABB_DIG1_DIG_CON42                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0108))
#define MMRF_ABB_DIG1_DIG_CON43                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x010C))
#define MMRF_ABB_DIG1_DIG_CON44                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0110))
#define MMRF_ABB_DIG1_DIG_CON45                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0114))
#define MMRF_ABB_DIG1_DIG_CON46                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0118))
#define MMRF_ABB_DIG1_DIG_CON47                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x011C))
#define MMRF_ABB_DIG1_DIG_CON48                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0120))
#define MMRF_ABB_DIG1_DIG_CON49                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0124))
#define MMRF_ABB_DIG1_DIG_CON4A                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0128))
#define MMRF_ABB_DIG1_DIG_CON4B                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x012C))
#define MMRF_ABB_DIG1_DIG_CON4C                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0130))
#define MMRF_ABB_DIG1_DIG_CON4D                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0134))
#define MMRF_ABB_DIG1_DIG_CON4E                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0138))
#define MMRF_ABB_DIG1_DIG_CON4F                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x013C))
#define MMRF_ABB_DIG1_DIG_CON50                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0140))
#define MMRF_ABB_DIG1_DIG_CON51                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0144))
#define MMRF_ABB_DIG1_DIG_CON52                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0148))
#define MMRF_ABB_DIG1_DIG_CON53                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x014C))
#define MMRF_ABB_DIG1_DIG_CON54                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0150))
#define MMRF_ABB_DIG1_DIG_CON55                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0154))
#define MMRF_ABB_DIG1_DIG_CON56                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0158))
#define MMRF_ABB_DIG1_DIG_CON57                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x015C))
#define MMRF_ABB_DIG1_DIG_CON58                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0160))
#define MMRF_ABB_DIG1_DIG_CON59                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0164))
#define MMRF_ABB_DIG1_DIG_CON5A                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0168))
#define MMRF_ABB_DIG1_DIG_CON5B                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x016C))
#define MMRF_ABB_DIG1_DIG_CON5C                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0170))
#define MMRF_ABB_DIG1_DIG_CON5D                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0174))
#define MMRF_ABB_DIG1_DIG_CON5E                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0178))
#define MMRF_ABB_DIG1_DIG_CON5F                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x017C))
#define MMRF_ABB_DIG1_DIG_CON60                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0180))
#define MMRF_ABB_DIG1_DIG_CON61                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0184))
#define MMRF_ABB_DIG1_DIG_CON62                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0188))
#define MMRF_ABB_DIG1_DIG_CON63                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x018C))
#define MMRF_ABB_DIG1_DIG_CON64                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0190))
#define MMRF_ABB_DIG1_DIG_CON65                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0194))
#define MMRF_ABB_DIG1_DIG_CON66                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0198))
#define MMRF_ABB_DIG1_DIG_CON67                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x019C))
#define MMRF_ABB_DIG1_DIG_CON68                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01A0))
#define MMRF_ABB_DIG1_DIG_CON69                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01A4))
#define MMRF_ABB_DIG1_DIG_CON6A                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01A8))
#define MMRF_ABB_DIG1_DIG_CON6B                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01AC))
#define MMRF_ABB_DIG1_DIG_CON6C                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01B0))
#define MMRF_ABB_DIG1_DIG_CON6D                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01B4))
#define MMRF_ABB_DIG1_DIG_CON6E                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01B8))
#define MMRF_ABB_DIG1_DIG_CON6F                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01BC))
#define MMRF_ABB_DIG1_DIG_CON70                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01C0))
#define MMRF_ABB_DIG1_DIG_CON71                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01C4))
#define MMRF_ABB_DIG1_DIG_CON72                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01C8))
#define MMRF_ABB_DIG1_DIG_CON73                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01CC))
#define MMRF_ABB_DIG1_DIG_CON74                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01D0))
#define MMRF_ABB_DIG1_DIG_CON75                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01D4))
#define MMRF_ABB_DIG1_DIG_CON76                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01D8))
#define MMRF_ABB_DIG1_DIG_CON77                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01DC))
#define MMRF_ABB_DIG1_DIG_CON78                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01E0))
#define MMRF_ABB_DIG1_DIG_CON79                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01E4))
#define MMRF_ABB_DIG1_DIG_CON7A                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01E8))
#define MMRF_ABB_DIG1_DIG_CON7B                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01EC))
#define MMRF_ABB_DIG1_DIG_CON7C                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01F0))
#define MMRF_ABB_DIG1_DIG_CON7D                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x01F4))
#define MMRF_ABB_DIG1_DIG_CON81                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0204))
#define MMRF_ABB_DIG1_DIG_CON82                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0208))
#define MMRF_ABB_DIG1_DIG_CON83                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x020C))
#define MMRF_ABB_DIG1_DIG_CON84                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0210))
#define MMRF_ABB_DIG1_DIG_CON85                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0214))
#define MMRF_ABB_DIG1_DIG_CON86                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0218))
#define MMRF_ABB_DIG1_DIG_CON87                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x021C))
#define MMRF_ABB_DIG1_DIG_CON88                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0220))
#define MMRF_ABB_DIG1_DIG_CON89                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0224))
#define MMRF_ABB_DIG1_DIG_CON8A                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0228))
#define MMRF_ABB_DIG1_DIG_CON8B                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x022C))
#define MMRF_ABB_DIG1_DIG_CON8C                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0230))
#define MMRF_ABB_DIG1_DIG_CON8D                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0234))
#define MMRF_ABB_DIG1_DIG_CON8E                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0238))
#define MMRF_ABB_DIG1_DIG_CON8F                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x023C))
#define MMRF_ABB_DIG1_DIG_CON90                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0240))
#define MMRF_ABB_DIG1_DIG_CON91                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0244))
#define MMRF_ABB_DIG1_DIG_CON92                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0248))
#define MMRF_ABB_DIG1_DIG_CON93                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x024C))
#define MMRF_ABB_DIG1_DIG_CON94                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0250))
#define MMRF_ABB_DIG1_DIG_CON95                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0254))
#define MMRF_ABB_DIG1_DIG_CON96                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0258))
#define MMRF_ABB_DIG1_DIG_CON97                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x025C))
#define MMRF_ABB_DIG1_DIG_CON98                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0260))
#define MMRF_ABB_DIG1_DIG_CON99                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0264))
#define MMRF_ABB_DIG1_DIG_CON9A                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0268))
#define MMRF_ABB_DIG1_DIG_CON9B                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x026C))
#define MMRF_ABB_DIG1_DIG_CON9C                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0270))
#define MMRF_ABB_DIG1_DIG_CON9D                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0274))
#define MMRF_ABB_DIG1_DIG_CON9E                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0278))
#define MMRF_ABB_DIG1_DIG_CONA0                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0280))
#define MMRF_ABB_DIG1_DIG_CONA1                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0284))
#define MMRF_ABB_DIG1_DIG_CONA2                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0288))
#define MMRF_ABB_DIG1_DIG_CONA3                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x028C))
#define MMRF_ABB_DIG1_DIG_CONA4                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0290))
#define MMRF_ABB_DIG1_DIG_CONA5                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0294))
#define MMRF_ABB_DIG1_DIG_CONA6                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x0298))
#define MMRF_ABB_DIG1_DIG_CONA7                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x029C))
#define MMRF_ABB_DIG1_DIG_CONA8                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02A0))
#define MMRF_ABB_DIG1_DIG_CONA9                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02A4))
#define MMRF_ABB_DIG1_DIG_CONAA                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02A8))
#define MMRF_ABB_DIG1_DIG_CONAB                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02AC))
#define MMRF_ABB_DIG1_DIG_CONAC                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02B0))
#define MMRF_ABB_DIG1_DIG_CONAD                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02B4))
#define MMRF_ABB_DIG1_DIG_CONAE                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02B8))
#define MMRF_ABB_DIG1_DIG_CONAF                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02BC))
#define MMRF_ABB_DIG1_DIG_CONB0                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02C0))
#define MMRF_ABB_DIG1_DIG_CONB1                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02C4))
#define MMRF_ABB_DIG1_DIG_CONB2                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02C8))
#define MMRF_ABB_DIG1_DIG_CONB3                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02CC))
#define MMRF_ABB_DIG1_DIG_CONB4                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02D0))
#define MMRF_ABB_DIG1_DIG_CONB5                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02D4))
#define MMRF_ABB_DIG1_DIG_CONB6                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02D8))
#define MMRF_ABB_DIG1_DIG_CONB7                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02DC))
#define MMRF_ABB_DIG1_DIG_CONB8                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02E0))
#define MMRF_ABB_DIG1_DIG_CONB9                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02E4))
#define MMRF_ABB_DIG1_DIG_CONBA                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02E8))
#define MMRF_ABB_DIG1_DIG_CONBB                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02EC))
#define MMRF_ABB_DIG1_DIG_CONBC                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02F0))
#define MMRF_ABB_DIG1_DIG_CONBD                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02F4))
#define MMRF_ABB_DIG1_DIG_CONBE                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02F8))
#define MMRF_ABB_DIG1_DIG_CONBF                                                 ((APBADDR)(MMRF_ABB_DIG1_DIG_REG_BASE + 0x02FC))

#define MMRF_ABB_DPDADC0_DPDADC_CON0                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0000))
#define MMRF_ABB_DPDADC0_DPDADC_CON1                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0004))
#define MMRF_ABB_DPDADC0_DPDADC_CON2                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0008))
#define MMRF_ABB_DPDADC0_DPDADC_CON3                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x000C))
#define MMRF_ABB_DPDADC0_DPDADC_CON4                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0010))
#define MMRF_ABB_DPDADC0_DPDADC_CON5                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0014))
#define MMRF_ABB_DPDADC0_DPDADC_CON6                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0018))
#define MMRF_ABB_DPDADC0_DPDADC_CON7                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x001C))
#define MMRF_ABB_DPDADC0_DPDADC_CON8                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0020))
#define MMRF_ABB_DPDADC0_DPDADC_CON9                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0024))
#define MMRF_ABB_DPDADC0_DPDADC_CONA                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0028))
#define MMRF_ABB_DPDADC0_DPDADC_CONB                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x002C))
#define MMRF_ABB_DPDADC0_DPDADC_CONC                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0030))
#define MMRF_ABB_DPDADC0_DPDADC_COND                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0034))
#define MMRF_ABB_DPDADC0_DPDADC_CONE                                            ((APBADDR)(MMRF_ABB_DPDADC0_DPDADC_REG_BASE + 0x0038))

#define MMRF_ABB_DPDADC1_DPDADC_CON0                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0000))
#define MMRF_ABB_DPDADC1_DPDADC_CON1                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0004))
#define MMRF_ABB_DPDADC1_DPDADC_CON2                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0008))
#define MMRF_ABB_DPDADC1_DPDADC_CON3                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x000C))
#define MMRF_ABB_DPDADC1_DPDADC_CON4                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0010))
#define MMRF_ABB_DPDADC1_DPDADC_CON5                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0014))
#define MMRF_ABB_DPDADC1_DPDADC_CON6                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0018))
#define MMRF_ABB_DPDADC1_DPDADC_CON7                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x001C))
#define MMRF_ABB_DPDADC1_DPDADC_CON8                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0020))
#define MMRF_ABB_DPDADC1_DPDADC_CON9                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0024))
#define MMRF_ABB_DPDADC1_DPDADC_CONA                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0028))
#define MMRF_ABB_DPDADC1_DPDADC_CONB                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x002C))
#define MMRF_ABB_DPDADC1_DPDADC_CONC                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0030))
#define MMRF_ABB_DPDADC1_DPDADC_COND                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0034))
#define MMRF_ABB_DPDADC1_DPDADC_CONE                                            ((APBADDR)(MMRF_ABB_DPDADC1_DPDADC_REG_BASE + 0x0038))

#define MMRF_ABB_ETDAC0_ETDAC_CON0                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0000))
#define MMRF_ABB_ETDAC0_ETDAC_CON1                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0004))
#define MMRF_ABB_ETDAC0_ETDAC_CON3                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x000C))
#define MMRF_ABB_ETDAC0_ETDAC_CON4                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0010))
#define MMRF_ABB_ETDAC0_ETDAC_CON5                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0014))
#define MMRF_ABB_ETDAC0_ETDAC_CON6                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0018))
#define MMRF_ABB_ETDAC0_ETDAC_CON8                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0020))
#define MMRF_ABB_ETDAC0_ETDAC_CON9                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0024))
#define MMRF_ABB_ETDAC0_ETDAC_CONA                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0028))
#define MMRF_ABB_ETDAC0_ETDAC_CONB                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x002C))
#define MMRF_ABB_ETDAC0_ETDAC_CONE                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0038))
#define MMRF_ABB_ETDAC0_ETDAC_CONF                                              ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x003C))
#define MMRF_ABB_ETDAC0_ETDAC_CON10                                             ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0040))
#define MMRF_ABB_ETDAC0_ETDAC_CON11                                             ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0044))
#define MMRF_ABB_ETDAC0_ETDAC_CON12                                             ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0048))
#define MMRF_ABB_ETDAC0_ETDAC_CON13                                             ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x004C))
#define MMRF_ABB_ETDAC0_ETDAC_CON14                                             ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0050))
#define MMRF_ABB_ETDAC0_ETDAC_CON15                                             ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0054))
#define MMRF_ABB_ETDAC0_ETDAC_CON16                                             ((APBADDR)(MMRF_ABB_ETDAC0_ETDAC_REG_BASE + 0x0058))


#define MMRF_ABB_ETDAC1_ETDAC_CON0                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0000))
#define MMRF_ABB_ETDAC1_ETDAC_CON1                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0004))
#define MMRF_ABB_ETDAC1_ETDAC_CON3                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x000C))
#define MMRF_ABB_ETDAC1_ETDAC_CON4                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0010))
#define MMRF_ABB_ETDAC1_ETDAC_CON5                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0014))
#define MMRF_ABB_ETDAC1_ETDAC_CON6                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0018))
#define MMRF_ABB_ETDAC1_ETDAC_CON8                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0020))
#define MMRF_ABB_ETDAC1_ETDAC_CON9                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0024))
#define MMRF_ABB_ETDAC1_ETDAC_CONA                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0028))
#define MMRF_ABB_ETDAC1_ETDAC_CONB                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x002C))
#define MMRF_ABB_ETDAC1_ETDAC_CONE                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0038))
#define MMRF_ABB_ETDAC1_ETDAC_CONF                                              ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x003C))
#define MMRF_ABB_ETDAC1_ETDAC_CON10                                             ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0040))
#define MMRF_ABB_ETDAC1_ETDAC_CON11                                             ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0044))
#define MMRF_ABB_ETDAC1_ETDAC_CON12                                             ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0048))
#define MMRF_ABB_ETDAC1_ETDAC_CON13                                             ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x004C))
#define MMRF_ABB_ETDAC1_ETDAC_CON14                                             ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0050))
#define MMRF_ABB_ETDAC1_ETDAC_CON15                                             ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0054))
#define MMRF_ABB_ETDAC1_ETDAC_CON16                                             ((APBADDR)(MMRF_ABB_ETDAC1_ETDAC_REG_BASE + 0x0058))


#define MMRF_ABB_PBBRX0_LTEBBRX_CON0                                            ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0000))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON1                                            ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0004))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2                                            ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0008))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON10                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0040))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON11                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0044))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON12                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0048))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON13                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x004C))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0050))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON15                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0054))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON16                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0058))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON17                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x005C))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON18                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0060))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON19                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0064))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON20                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0080))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON21                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0084))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0088))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x008C))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON24                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0090))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON25                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0094))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x0098))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x009C))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON28                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00A0))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00A4))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00A8))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2B                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00AC))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2C                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00B0))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2D                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00B4))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2E                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00B8))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON30                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00C0))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON31                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00C4))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON32                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00C8))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON33                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00CC))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON34                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00D0))
#define MMRF_ABB_PBBRX0_LTEBBRX_CON35                                           ((APBADDR)(MMRF_ABB_PBBRX0_LTEBBRX_REG_BASE + 0x00D4))

#define MMRF_ABB_PBBRX1_LTEBBRX_CON0                                            ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0000))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON1                                            ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0004))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2                                            ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0008))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON10                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0040))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON11                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0044))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON12                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0048))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON13                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x004C))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0050))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON15                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0054))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON16                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0058))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON17                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x005C))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON18                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0060))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON19                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0064))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON20                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0080))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON21                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0084))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0088))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x008C))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON24                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0090))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON25                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0094))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x0098))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x009C))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON28                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00A0))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00A4))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00A8))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2B                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00AC))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2C                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00B0))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2D                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00B4))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2E                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00B8))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON30                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00C0))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON31                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00C4))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON32                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00C8))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON33                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00CC))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON34                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00D0))
#define MMRF_ABB_PBBRX1_LTEBBRX_CON35                                           ((APBADDR)(MMRF_ABB_PBBRX1_LTEBBRX_REG_BASE + 0x00D4))

#define MMRF_ABB_PBBRX2_LTEBBRX_CON0                                            ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0000))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON1                                            ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0004))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2                                            ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0008))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON10                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0040))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON11                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0044))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON12                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0048))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON13                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x004C))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0050))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON15                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0054))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON16                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0058))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON17                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x005C))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON18                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0060))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON19                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0064))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON20                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0080))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON21                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0084))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0088))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x008C))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON24                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0090))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON25                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0094))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x0098))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x009C))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON28                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00A0))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00A4))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00A8))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2B                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00AC))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2C                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00B0))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2D                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00B4))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2E                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00B8))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON30                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00C0))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON31                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00C4))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON32                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00C8))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON33                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00CC))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON34                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00D0))
#define MMRF_ABB_PBBRX2_LTEBBRX_CON35                                           ((APBADDR)(MMRF_ABB_PBBRX2_LTEBBRX_REG_BASE + 0x00D4))

#define MMRF_ABB_PBBRX3_LTEBBRX_CON0                                            ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0000))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON1                                            ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0004))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2                                            ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0008))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON10                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0040))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON11                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0044))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON12                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0048))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON13                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x004C))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0050))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON15                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0054))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON16                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0058))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON17                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x005C))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON18                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0060))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON19                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0064))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON20                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0080))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON21                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0084))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0088))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x008C))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON24                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0090))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON25                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0094))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x0098))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x009C))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON28                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00A0))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00A4))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00A8))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2B                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00AC))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2C                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00B0))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2D                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00B4))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2E                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00B8))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON30                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00C0))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON31                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00C4))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON32                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00C8))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON33                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00CC))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON34                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00D0))
#define MMRF_ABB_PBBRX3_LTEBBRX_CON35                                           ((APBADDR)(MMRF_ABB_PBBRX3_LTEBBRX_REG_BASE + 0x00D4))

#define MMRF_ABB_DBBRX0_LTEBBRX_CON0                                            ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0000))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON1                                            ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0004))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2                                            ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0008))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON10                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0040))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON11                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0044))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON12                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0048))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON13                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x004C))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0050))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON15                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0054))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON16                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0058))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON17                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x005C))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON18                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0060))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON19                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0064))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON20                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0080))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON21                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0084))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0088))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x008C))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON24                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0090))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON25                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0094))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x0098))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x009C))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON28                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00A0))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00A4))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00A8))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2B                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00AC))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2C                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00B0))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2D                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00B4))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2E                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00B8))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON30                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00C0))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON31                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00C4))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON32                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00C8))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON33                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00CC))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON34                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00D0))
#define MMRF_ABB_DBBRX0_LTEBBRX_CON35                                           ((APBADDR)(MMRF_ABB_DBBRX0_LTEBBRX_REG_BASE + 0x00D4))

#define MMRF_ABB_DBBRX1_LTEBBRX_CON0                                            ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0000))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON1                                            ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0004))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2                                            ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0008))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON10                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0040))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON11                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0044))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON12                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0048))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON13                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x004C))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0050))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON15                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0054))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON16                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0058))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON17                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x005C))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON18                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0060))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON19                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0064))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON20                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0080))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON21                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0084))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0088))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x008C))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON24                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0090))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON25                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0094))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x0098))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x009C))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON28                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00A0))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00A4))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00A8))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2B                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00AC))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2C                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00B0))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2D                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00B4))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2E                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00B8))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON30                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00C0))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON31                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00C4))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON32                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00C8))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON33                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00CC))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON34                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00D0))
#define MMRF_ABB_DBBRX1_LTEBBRX_CON35                                           ((APBADDR)(MMRF_ABB_DBBRX1_LTEBBRX_REG_BASE + 0x00D4))

#define MMRF_ABB_DBBRX2_LTEBBRX_CON0                                            ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0000))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON1                                            ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0004))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2                                            ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0008))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON10                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0040))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON11                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0044))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON12                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0048))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON13                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x004C))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0050))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON15                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0054))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON16                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0058))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON17                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x005C))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON18                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0060))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON19                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0064))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON20                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0080))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON21                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0084))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0088))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x008C))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON24                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0090))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON25                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0094))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x0098))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x009C))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON28                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00A0))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00A4))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00A8))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2B                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00AC))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2C                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00B0))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2D                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00B4))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2E                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00B8))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON30                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00C0))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON31                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00C4))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON32                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00C8))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON33                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00CC))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON34                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00D0))
#define MMRF_ABB_DBBRX2_LTEBBRX_CON35                                           ((APBADDR)(MMRF_ABB_DBBRX2_LTEBBRX_REG_BASE + 0x00D4))

#define MMRF_ABB_DBBRX3_LTEBBRX_CON0                                            ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0000))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON1                                            ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0004))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2                                            ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0008))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON10                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0040))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON11                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0044))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON12                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0048))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON13                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x004C))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0050))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON15                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0054))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON16                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0058))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON17                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x005C))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON18                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0060))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON19                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0064))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON20                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0080))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON21                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0084))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0088))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x008C))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON24                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0090))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON25                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0094))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x0098))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x009C))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON28                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00A0))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00A4))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00A8))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2B                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00AC))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2C                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00B0))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2D                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00B4))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2E                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00B8))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON30                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00C0))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON31                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00C4))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON32                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00C8))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON33                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00CC))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON34                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00D0))
#define MMRF_ABB_DBBRX3_LTEBBRX_CON35                                           ((APBADDR)(MMRF_ABB_DBBRX3_LTEBBRX_REG_BASE + 0x00D4))

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0000))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON1                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0004))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON3                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x000C))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON4                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0010))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0014))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON6                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0018))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON8                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0020))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON9                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0024))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONA                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0028))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x002C))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONC                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0030))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_COND                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0034))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONE                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0038))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONF                                          ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x003C))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON10                                         ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0040))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON11                                         ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0044))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON12                                         ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0048))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON13                                         ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x004C))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON14                                         ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0050))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON15                                         ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0054))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON16                                         ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0058))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON17                                         ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x005C))
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON18                                         ((APBADDR)(MMRF_ABB_LTEBBTX0_LTEBBTX_REG_BASE + 0x0060))

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0000))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON1                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0004))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON3                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x000C))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON4                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0010))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0014))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON6                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0018))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON8                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0020))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON9                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0024))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONA                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0028))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x002C))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONC                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0030))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_COND                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0034))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONE                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0038))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONF                                          ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x003C))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON10                                         ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0040))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON11                                         ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0044))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON12                                         ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0048))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON13                                         ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x004C))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON14                                         ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0050))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON15                                         ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0054))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON16                                         ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0058))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON17                                         ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x005C))
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON18                                         ((APBADDR)(MMRF_ABB_LTEBBTX1_LTEBBTX_REG_BASE + 0x0060))

#define MMRF_ABB_RSV_0_RSV_CON0                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x0000))
#define MMRF_ABB_RSV_0_RSV_CON1                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x0004))
#define MMRF_ABB_RSV_0_RSV_CON2                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x0008))
#define MMRF_ABB_RSV_0_RSV_CON3                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x000C))
#define MMRF_ABB_RSV_0_RSV_CON4                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x0010))
#define MMRF_ABB_RSV_0_RSV_CON5                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x0014))
#define MMRF_ABB_RSV_0_RSV_CON6                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x0018))
#define MMRF_ABB_RSV_0_RSV_CON7                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x001C))
#define MMRF_ABB_RSV_0_RSV_CON8                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x0020))
#define MMRF_ABB_RSV_0_RSV_CON9                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x0024))
#define MMRF_ABB_RSV_0_RSV_CONA                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x0028))
#define MMRF_ABB_RSV_0_RSV_CONB                                                 ((APBADDR)(MMRF_ABB_RSV_0_RSV_REG_BASE + 0x002C))

#define MMRF_ABB_RSV_1_RSV_CON0                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x0000))
#define MMRF_ABB_RSV_1_RSV_CON1                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x0004))
#define MMRF_ABB_RSV_1_RSV_CON2                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x0008))
#define MMRF_ABB_RSV_1_RSV_CON3                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x000C))
#define MMRF_ABB_RSV_1_RSV_CON4                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x0010))
#define MMRF_ABB_RSV_1_RSV_CON5                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x0014))
#define MMRF_ABB_RSV_1_RSV_CON6                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x0018))
#define MMRF_ABB_RSV_1_RSV_CON7                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x001C))
#define MMRF_ABB_RSV_1_RSV_CON8                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x0020))
#define MMRF_ABB_RSV_1_RSV_CON9                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x0024))
#define MMRF_ABB_RSV_1_RSV_CONA                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x0028))
#define MMRF_ABB_RSV_1_RSV_CONB                                                 ((APBADDR)(MMRF_ABB_RSV_1_RSV_REG_BASE + 0x002C))

#define MMRF_ABB_RSV2_0_RSV2_CON0                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0000))
#define MMRF_ABB_RSV2_0_RSV2_CON1                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0004))
#define MMRF_ABB_RSV2_0_RSV2_CON2                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0008))
#define MMRF_ABB_RSV2_0_RSV2_CON3                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x000C))
#define MMRF_ABB_RSV2_0_RSV2_CON4                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0010))
#define MMRF_ABB_RSV2_0_RSV2_CON5                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0014))
#define MMRF_ABB_RSV2_0_RSV2_CON6                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0018))
#define MMRF_ABB_RSV2_0_RSV2_CON7                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x001C))
#define MMRF_ABB_RSV2_0_RSV2_CON8                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0020))
#define MMRF_ABB_RSV2_0_RSV2_CON9                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0024))
#define MMRF_ABB_RSV2_0_RSV2_CONA                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0028))
#define MMRF_ABB_RSV2_0_RSV2_CONB                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x002C))
#define MMRF_ABB_RSV2_0_RSV2_CONC                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0030))
#define MMRF_ABB_RSV2_0_RSV2_COND                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0034))
#define MMRF_ABB_RSV2_0_RSV2_CONE                                               ((APBADDR)(MMRF_ABB_RSV2_0_RSV2_REG_BASE + 0x0038))

#define MMRF_ABB_RSV2_1_RSV2_CON0                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0000))
#define MMRF_ABB_RSV2_1_RSV2_CON1                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0004))
#define MMRF_ABB_RSV2_1_RSV2_CON2                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0008))
#define MMRF_ABB_RSV2_1_RSV2_CON3                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x000C))
#define MMRF_ABB_RSV2_1_RSV2_CON4                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0010))
#define MMRF_ABB_RSV2_1_RSV2_CON5                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0014))
#define MMRF_ABB_RSV2_1_RSV2_CON6                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0018))
#define MMRF_ABB_RSV2_1_RSV2_CON7                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x001C))
#define MMRF_ABB_RSV2_1_RSV2_CON8                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0020))
#define MMRF_ABB_RSV2_1_RSV2_CON9                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0024))
#define MMRF_ABB_RSV2_1_RSV2_CONA                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0028))
#define MMRF_ABB_RSV2_1_RSV2_CONB                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x002C))
#define MMRF_ABB_RSV2_1_RSV2_CONC                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0030))
#define MMRF_ABB_RSV2_1_RSV2_COND                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0034))
#define MMRF_ABB_RSV2_1_RSV2_CONE                                               ((APBADDR)(MMRF_ABB_RSV2_1_RSV2_REG_BASE + 0x0038))

#define MMRF_ABB_SWAP_CON0                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0000))
#define MMRF_ABB_SWAP_CON1                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0004))
#define MMRF_ABB_SWAP_CON2                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0008))
#define MMRF_ABB_SWAP_CON3                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x000C))
#define MMRF_ABB_SWAP_CON4                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0010))
#define MMRF_ABB_SWAP_CON5                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0014))
#define MMRF_ABB_SWAP_CON6                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0018))
#define MMRF_ABB_SWAP_CON7                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x001C))
#define MMRF_ABB_SWAP_CON8                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0020))
#define MMRF_ABB_SWAP_CON9                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0024))
#define MMRF_ABB_SWAP_CONA                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0028))
#define MMRF_ABB_SWAP_CONB                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x002C))
#define MMRF_ABB_SWAP_CONC                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0030))
#define MMRF_ABB_SWAP_COND                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0034))
#define MMRF_ABB_SWAP_CONE                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0038))
#define MMRF_ABB_SWAP_CONF                                                      ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x003C))
#define MMRF_ABB_SWAP_CON10                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0040))
#define MMRF_ABB_SWAP_CON11                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0044))
#define MMRF_ABB_SWAP_CON12                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0048))
#define MMRF_ABB_SWAP_CON13                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x004C))
#define MMRF_ABB_SWAP_CON14                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0050))
#define MMRF_ABB_SWAP_CON15                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0054))
#define MMRF_ABB_SWAP_CON16                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0058))
#define MMRF_ABB_SWAP_CON17                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x005C))
#define MMRF_ABB_SWAP_CON18                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0060))
#define MMRF_ABB_SWAP_CON19                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0064))
#define MMRF_ABB_SWAP_CON1A                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0068))
#define MMRF_ABB_SWAP_CON1B                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x006C))
#define MMRF_ABB_SWAP_CON1C                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0070))
#define MMRF_ABB_SWAP_CON1D                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0074))
#define MMRF_ABB_SWAP_CON1E                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x0078))
#define MMRF_ABB_SWAP_CON1F                                                     ((APBADDR)(MMRF_ABB_SWAP_REG_BASE + 0x007C))


#define MMRF_ABB_APC_CON1_RG_APC1_TEST_LSB                                      (15)
#define MMRF_ABB_APC_CON1_RG_APC1_TEST_WIDTH                                    (1)
#define MMRF_ABB_APC_CON1_RG_APC1_TEST_MASK                                     (0x8000)
#define MMRF_ABB_APC_CON1_RG_APC1_TEST_BIT                                      (0x8000)

#define MMRF_ABB_APC_CON1_RG_APC1_CALI_LSB                                      (10)
#define MMRF_ABB_APC_CON1_RG_APC1_CALI_WIDTH                                    (4)
#define MMRF_ABB_APC_CON1_RG_APC1_CALI_MASK                                     (0x3C00)

#define MMRF_ABB_APC_CON1_RG_APC1_TGSEL_LSB                                     (8)
#define MMRF_ABB_APC_CON1_RG_APC1_TGSEL_WIDTH                                   (1)
#define MMRF_ABB_APC_CON1_RG_APC1_TGSEL_MASK                                    (0x0100)
#define MMRF_ABB_APC_CON1_RG_APC1_TGSEL_BIT                                     (0x0100)

#define MMRF_ABB_APC_CON1_RG_APC1_BUF_TRIM_LSB                                  (4)
#define MMRF_ABB_APC_CON1_RG_APC1_BUF_TRIM_WIDTH                                (4)
#define MMRF_ABB_APC_CON1_RG_APC1_BUF_TRIM_MASK                                 (0x00F0)

#define MMRF_ABB_APC_CON1_RG_APC1_BUF_CALI_LSB                                  (0)
#define MMRF_ABB_APC_CON1_RG_APC1_BUF_CALI_WIDTH                                (4)
#define MMRF_ABB_APC_CON1_RG_APC1_BUF_CALI_MASK                                 (0x000F)

#define MMRF_ABB_APC_CON2_RG_APC2_TEST_LSB                                      (15)
#define MMRF_ABB_APC_CON2_RG_APC2_TEST_WIDTH                                    (1)
#define MMRF_ABB_APC_CON2_RG_APC2_TEST_MASK                                     (0x8000)
#define MMRF_ABB_APC_CON2_RG_APC2_TEST_BIT                                      (0x8000)

#define MMRF_ABB_APC_CON2_RG_APC2_CALI_LSB                                      (10)
#define MMRF_ABB_APC_CON2_RG_APC2_CALI_WIDTH                                    (4)
#define MMRF_ABB_APC_CON2_RG_APC2_CALI_MASK                                     (0x3C00)

#define MMRF_ABB_APC_CON2_RG_APC2_TGSEL_LSB                                     (8)
#define MMRF_ABB_APC_CON2_RG_APC2_TGSEL_WIDTH                                   (1)
#define MMRF_ABB_APC_CON2_RG_APC2_TGSEL_MASK                                    (0x0100)
#define MMRF_ABB_APC_CON2_RG_APC2_TGSEL_BIT                                     (0x0100)

#define MMRF_ABB_APC_CON2_RG_APC2_BUF_TRIM_LSB                                  (4)
#define MMRF_ABB_APC_CON2_RG_APC2_BUF_TRIM_WIDTH                                (4)
#define MMRF_ABB_APC_CON2_RG_APC2_BUF_TRIM_MASK                                 (0x00F0)

#define MMRF_ABB_APC_CON2_RG_APC2_BUF_CALI_LSB                                  (0)
#define MMRF_ABB_APC_CON2_RG_APC2_BUF_CALI_WIDTH                                (4)
#define MMRF_ABB_APC_CON2_RG_APC2_BUF_CALI_MASK                                 (0x000F)


#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_txdac_en_LSB                              (8)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_txdac_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_txdac_en_MASK                             (0x0100)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_txdac_en_BIT                              (0x0100)

#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_txcic_en_LSB                              (7)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_txcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_txcic_en_MASK                             (0x0080)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_txcic_en_BIT                              (0x0080)

#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_etcic_en_LSB                              (6)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_etcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_etcic_en_MASK                             (0x0040)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_etcic_en_BIT                              (0x0040)

#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_rxadc_en_LSB                              (5)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_rxadc_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_rxadc_en_MASK                             (0x0020)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_rxadc_en_BIT                              (0x0020)

#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_rxcic_en_LSB                              (4)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_rxcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_rxcic_en_MASK                             (0x0010)
#define MMRF_ABB_DIG0_DIG_CON1_inv_mm_rxcic_en_BIT                              (0x0010)

#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_txdac_en_LSB                              (3)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_txdac_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_txdac_en_MASK                             (0x0008)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_txdac_en_BIT                              (0x0008)

#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_txcic_en_LSB                              (2)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_txcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_txcic_en_MASK                             (0x0004)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_txcic_en_BIT                              (0x0004)

#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_rxadc_en_LSB                              (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_rxadc_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_rxadc_en_MASK                             (0x0002)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_rxadc_en_BIT                              (0x0002)

#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_rxcic_en_LSB                              (0)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_rxcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_rxcic_en_MASK                             (0x0001)
#define MMRF_ABB_DIG0_DIG_CON1_inv_2g_rxcic_en_BIT                              (0x0001)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_datapath_sel_LSB                        (15)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_datapath_sel_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_datapath_sel_MASK                       (0x8000)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_datapath_sel_BIT                        (0x8000)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_test_pattern_sel_LSB                    (14)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_test_pattern_sel_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_test_pattern_sel_MASK                   (0x4000)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_test_pattern_sel_BIT                    (0x4000)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_comp_datapath_sel_LSB                   (13)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_comp_datapath_sel_WIDTH                 (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_comp_datapath_sel_MASK                  (0x2000)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_comp_datapath_sel_BIT                   (0x2000)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_comp_test_pattern_sel_LSB               (12)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_comp_test_pattern_sel_WIDTH             (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_comp_test_pattern_sel_MASK              (0x1000)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_c2k_comp_test_pattern_sel_BIT               (0x1000)

#define MMRF_ABB_DIG0_DIG_CON2_BBET_mm_datapath_sel_LSB                         (11)
#define MMRF_ABB_DIG0_DIG_CON2_BBET_mm_datapath_sel_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBET_mm_datapath_sel_MASK                        (0x0800)
#define MMRF_ABB_DIG0_DIG_CON2_BBET_mm_datapath_sel_BIT                         (0x0800)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_q_path_test_pattern_sel_LSB                 (10)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_q_path_test_pattern_sel_WIDTH               (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_q_path_test_pattern_sel_MASK                (0x0400)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_q_path_test_pattern_sel_BIT                 (0x0400)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_datapath_sel_LSB                            (9)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_datapath_sel_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_datapath_sel_MASK                           (0x0200)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_datapath_sel_BIT                            (0x0200)

#define MMRF_ABB_DIG0_DIG_CON2_BBET_datapath_sel_LSB                            (8)
#define MMRF_ABB_DIG0_DIG_CON2_BBET_datapath_sel_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBET_datapath_sel_MASK                           (0x0100)
#define MMRF_ABB_DIG0_DIG_CON2_BBET_datapath_sel_BIT                            (0x0100)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_mm_datapath_sel_LSB                         (5)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_mm_datapath_sel_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_mm_datapath_sel_MASK                        (0x0020)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_mm_datapath_sel_BIT                         (0x0020)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_mm_test_pattern_sel_LSB                     (4)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_mm_test_pattern_sel_WIDTH                   (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_mm_test_pattern_sel_MASK                    (0x0010)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_mm_test_pattern_sel_BIT                     (0x0010)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_2g_datapath_sel_LSB                         (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_2g_datapath_sel_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_2g_datapath_sel_MASK                        (0x0002)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_2g_datapath_sel_BIT                         (0x0002)

#define MMRF_ABB_DIG0_DIG_CON2_BBTX_2g_test_pattern_sel_LSB                     (0)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_2g_test_pattern_sel_WIDTH                   (1)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_2g_test_pattern_sel_MASK                    (0x0001)
#define MMRF_ABB_DIG0_DIG_CON2_BBTX_2g_test_pattern_sel_BIT                     (0x0001)

#define MMRF_ABB_DIG0_DIG_CON3_apc_c2k_sel_LSB                                  (0)
#define MMRF_ABB_DIG0_DIG_CON3_apc_c2k_sel_WIDTH                                (2)
#define MMRF_ABB_DIG0_DIG_CON3_apc_c2k_sel_MASK                                 (0x0003)

#define MMRF_ABB_DIG0_DIG_CON4_apc_2g_sel_LSB                                   (0)
#define MMRF_ABB_DIG0_DIG_CON4_apc_2g_sel_WIDTH                                 (2)
#define MMRF_ABB_DIG0_DIG_CON4_apc_2g_sel_MASK                                  (0x0003)

#define MMRF_ABB_DIG0_DIG_CON5_apc_mm_sel_LSB                                   (0)
#define MMRF_ABB_DIG0_DIG_CON5_apc_mm_sel_WIDTH                                 (2)
#define MMRF_ABB_DIG0_DIG_CON5_apc_mm_sel_MASK                                  (0x0003)

#define MMRF_ABB_DIG0_DIG_CON6_apc1_swrst_b_LSB                                 (15)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_swrst_b_WIDTH                               (1)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_swrst_b_MASK                                (0x8000)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_swrst_b_BIT                                 (0x8000)

#define MMRF_ABB_DIG0_DIG_CON6_apc1_path_sel_LSB                                (12)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_path_sel_WIDTH                              (2)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_path_sel_MASK                               (0x3000)

#define MMRF_ABB_DIG0_DIG_CON6_apc1_pwdb_LSB                                    (11)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_pwdb_WIDTH                                  (1)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_pwdb_MASK                                   (0x0800)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_pwdb_BIT                                    (0x0800)

#define MMRF_ABB_DIG0_DIG_CON6_apc1_tg_LSB                                      (10)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_tg_WIDTH                                    (1)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_tg_MASK                                     (0x0400)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_tg_BIT                                      (0x0400)

#define MMRF_ABB_DIG0_DIG_CON6_apc1_bus_LSB                                     (0)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_bus_WIDTH                                   (10)
#define MMRF_ABB_DIG0_DIG_CON6_apc1_bus_MASK                                    (0x03FF)

#define MMRF_ABB_DIG0_DIG_CON7_apc1_status_LSB                                  (0)
#define MMRF_ABB_DIG0_DIG_CON7_apc1_status_WIDTH                                (16)
#define MMRF_ABB_DIG0_DIG_CON7_apc1_status_MASK                                 (0xFFFF)

#define MMRF_ABB_DIG0_DIG_CON8_apc2_swrst_b_LSB                                 (15)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_swrst_b_WIDTH                               (1)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_swrst_b_MASK                                (0x8000)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_swrst_b_BIT                                 (0x8000)

#define MMRF_ABB_DIG0_DIG_CON8_apc2_path_sel_LSB                                (12)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_path_sel_WIDTH                              (2)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_path_sel_MASK                               (0x3000)

#define MMRF_ABB_DIG0_DIG_CON8_apc2_pwdb_LSB                                    (11)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_pwdb_WIDTH                                  (1)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_pwdb_MASK                                   (0x0800)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_pwdb_BIT                                    (0x0800)

#define MMRF_ABB_DIG0_DIG_CON8_apc2_tg_LSB                                      (10)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_tg_WIDTH                                    (1)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_tg_MASK                                     (0x0400)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_tg_BIT                                      (0x0400)

#define MMRF_ABB_DIG0_DIG_CON8_apc2_bus_LSB                                     (0)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_bus_WIDTH                                   (10)
#define MMRF_ABB_DIG0_DIG_CON8_apc2_bus_MASK                                    (0x03FF)

#define MMRF_ABB_DIG0_DIG_CON9_apc2_status_LSB                                  (0)
#define MMRF_ABB_DIG0_DIG_CON9_apc2_status_WIDTH                                (16)
#define MMRF_ABB_DIG0_DIG_CON9_apc2_status_MASK                                 (0xFFFF)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_adc_en_ctl_LSB                       (15)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_adc_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_adc_en_ctl_MASK                      (0x8000)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_adc_en_ctl_BIT                       (0x8000)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_adc_en_ctl_LSB                       (14)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_adc_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_adc_en_ctl_MASK                      (0x4000)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_adc_en_ctl_BIT                       (0x4000)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_adc_en_ctl_LSB                       (13)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_adc_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_adc_en_ctl_MASK                      (0x2000)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_adc_en_ctl_BIT                       (0x2000)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_adc_en_ctl_LSB                       (12)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_adc_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_adc_en_ctl_MASK                      (0x1000)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_adc_en_ctl_BIT                       (0x1000)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_cic_en_ctl_LSB                       (11)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_cic_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_cic_en_ctl_MASK                      (0x0800)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_cic_en_ctl_BIT                       (0x0800)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_cic_en_ctl_LSB                       (10)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_cic_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_cic_en_ctl_MASK                      (0x0400)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_cic_en_ctl_BIT                       (0x0400)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_cic_en_ctl_LSB                       (9)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_cic_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_cic_en_ctl_MASK                      (0x0200)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_cic_en_ctl_BIT                       (0x0200)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_cic_en_ctl_LSB                       (8)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_cic_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_cic_en_ctl_MASK                      (0x0100)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_cic_en_ctl_BIT                       (0x0100)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_adc_sw_en_LSB                        (7)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_adc_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_adc_sw_en_MASK                       (0x0080)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_adc_sw_en_BIT                        (0x0080)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_adc_sw_en_LSB                        (6)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_adc_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_adc_sw_en_MASK                       (0x0040)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_adc_sw_en_BIT                        (0x0040)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_adc_sw_en_LSB                        (5)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_adc_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_adc_sw_en_MASK                       (0x0020)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_adc_sw_en_BIT                        (0x0020)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_adc_sw_en_LSB                        (4)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_adc_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_adc_sw_en_MASK                       (0x0010)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_adc_sw_en_BIT                        (0x0010)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_cic_sw_en_LSB                        (3)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_cic_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_cic_sw_en_MASK                       (0x0008)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx1_cic_sw_en_BIT                        (0x0008)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_cic_sw_en_LSB                        (2)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_cic_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_cic_sw_en_MASK                       (0x0004)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx1_cic_sw_en_BIT                        (0x0004)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_cic_sw_en_LSB                        (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_cic_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_cic_sw_en_MASK                       (0x0002)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_pbbrx2_cic_sw_en_BIT                        (0x0002)

#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_cic_sw_en_LSB                        (0)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_cic_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_cic_sw_en_MASK                       (0x0001)
#define MMRF_ABB_DIG0_DIG_CONA_bbrx_dbbrx2_cic_sw_en_BIT                        (0x0001)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_cic_ck_tgl_en_LSB                           (14)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_cic_ck_tgl_en_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_cic_ck_tgl_en_MASK                          (0x4000)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_cic_ck_tgl_en_BIT                           (0x4000)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_tgl_en_ctl_LSB                           (13)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_tgl_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_tgl_en_ctl_MASK                          (0x2000)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_tgl_en_ctl_BIT                           (0x2000)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_dac_en_ctl_LSB                           (12)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_dac_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_dac_en_ctl_MASK                          (0x1000)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_dac_en_ctl_BIT                           (0x1000)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_cic_en_ctl_LSB                           (11)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_cic_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_cic_en_ctl_MASK                          (0x0800)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_cic_en_ctl_BIT                           (0x0800)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_dac_en_ctl_LSB                           (10)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_dac_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_dac_en_ctl_MASK                          (0x0400)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_dac_en_ctl_BIT                           (0x0400)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_cic_en_ctl_LSB                           (9)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_cic_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_cic_en_ctl_MASK                          (0x0200)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_cic_en_ctl_BIT                           (0x0200)

#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_dac_en_ctl_LSB                           (8)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_dac_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_dac_en_ctl_MASK                          (0x0100)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_dac_en_ctl_BIT                           (0x0100)

#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_cic_en_ctl_LSB                           (7)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_cic_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_cic_en_ctl_MASK                          (0x0080)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_cic_en_ctl_BIT                           (0x0080)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_tgl_sw_en_LSB                            (6)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_tgl_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_tgl_sw_en_MASK                           (0x0040)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_tgl_sw_en_BIT                            (0x0040)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_dac_sw_en_LSB                            (5)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_dac_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_dac_sw_en_MASK                           (0x0020)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_dac_sw_en_BIT                            (0x0020)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_cic_sw_en_LSB                            (4)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_cic_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_cic_sw_en_MASK                           (0x0010)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_2g_cic_sw_en_BIT                            (0x0010)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_dac_sw_en_LSB                            (3)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_dac_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_dac_sw_en_MASK                           (0x0008)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_dac_sw_en_BIT                            (0x0008)

#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_cic_sw_en_LSB                            (2)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_cic_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_cic_sw_en_MASK                           (0x0004)
#define MMRF_ABB_DIG0_DIG_CONB_bbtx_mm_cic_sw_en_BIT                            (0x0004)

#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_dac_sw_en_LSB                            (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_dac_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_dac_sw_en_MASK                           (0x0002)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_dac_sw_en_BIT                            (0x0002)

#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_cic_sw_en_LSB                            (0)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_cic_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_cic_sw_en_MASK                           (0x0001)
#define MMRF_ABB_DIG0_DIG_CONB_bbet_mm_cic_sw_en_BIT                            (0x0001)

#define MMRF_ABB_DIG0_DIG_COND_ckgen_mm_bbtx_et_enable_LSB                      (0)
#define MMRF_ABB_DIG0_DIG_COND_ckgen_mm_bbtx_et_enable_WIDTH                    (1)
#define MMRF_ABB_DIG0_DIG_COND_ckgen_mm_bbtx_et_enable_MASK                     (0x0001)
#define MMRF_ABB_DIG0_DIG_COND_ckgen_mm_bbtx_et_enable_BIT                      (0x0001)

#define MMRF_ABB_DIG0_DIG_CONE_ckgen_pbbrx1_ckcnt_phase_cfg_LSB                 (5)
#define MMRF_ABB_DIG0_DIG_CONE_ckgen_pbbrx1_ckcnt_phase_cfg_WIDTH               (5)
#define MMRF_ABB_DIG0_DIG_CONE_ckgen_pbbrx1_ckcnt_phase_cfg_MASK                (0x03E0)

#define MMRF_ABB_DIG0_DIG_CONE_ckgen_dbbrx1_ckcnt_phase_cfg_LSB                 (0)
#define MMRF_ABB_DIG0_DIG_CONE_ckgen_dbbrx1_ckcnt_phase_cfg_WIDTH               (5)
#define MMRF_ABB_DIG0_DIG_CONE_ckgen_dbbrx1_ckcnt_phase_cfg_MASK                (0x001F)

#define MMRF_ABB_DIG0_DIG_CONF_ckgen_pbbrx2_ckcnt_phase_cfg_LSB                 (5)
#define MMRF_ABB_DIG0_DIG_CONF_ckgen_pbbrx2_ckcnt_phase_cfg_WIDTH               (5)
#define MMRF_ABB_DIG0_DIG_CONF_ckgen_pbbrx2_ckcnt_phase_cfg_MASK                (0x03E0)

#define MMRF_ABB_DIG0_DIG_CONF_ckgen_dbbrx2_ckcnt_phase_cfg_LSB                 (0)
#define MMRF_ABB_DIG0_DIG_CONF_ckgen_dbbrx2_ckcnt_phase_cfg_WIDTH               (5)
#define MMRF_ABB_DIG0_DIG_CONF_ckgen_dbbrx2_ckcnt_phase_cfg_MASK                (0x001F)

#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_ctrl_LSB                (15)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_ctrl_MASK               (0x8000)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_ctrl_BIT                (0x8000)

#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_ctrl_LSB                (14)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_ctrl_MASK               (0x4000)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_ctrl_BIT                (0x4000)

#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_sw_LSB                  (11)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_sw_MASK                 (0x3800)

#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_sw_LSB                  (8)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_sw_MASK                 (0x0700)

#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_ctrl_LSB                (7)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_ctrl_MASK               (0x0080)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_ctrl_BIT                (0x0080)

#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_ctrl_LSB                (6)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_ctrl_MASK               (0x0040)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_ctrl_BIT                (0x0040)

#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_sw_LSB                  (3)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_sw_MASK                 (0x0038)

#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_sw_LSB                  (0)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG0_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_sw_MASK                 (0x0007)

#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_ctrl_LSB                (15)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_ctrl_MASK               (0x8000)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_ctrl_BIT                (0x8000)

#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_ctrl_LSB                (14)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_ctrl_MASK               (0x4000)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_ctrl_BIT                (0x4000)

#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_sw_LSB                  (11)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_sw_MASK                 (0x3800)

#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_sw_LSB                  (8)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_sw_MASK                 (0x0700)

#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_ctrl_LSB                (7)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_ctrl_MASK               (0x0080)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_ctrl_BIT                (0x0080)

#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_ctrl_LSB                (6)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_ctrl_MASK               (0x0040)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_ctrl_BIT                (0x0040)

#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_sw_LSB                  (3)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_sw_MASK                 (0x0038)

#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_sw_LSB                  (0)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG0_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_sw_MASK                 (0x0007)

#define MMRF_ABB_DIG0_DIG_CON12_pbbrx1_wbuf_w_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON12_pbbrx1_wbuf_w_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON12_pbbrx1_wbuf_w_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON12_pbbrx1_wbuf_w_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON12_pbbrx1_wbuf_w_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON12_pbbrx1_wbuf_w_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON13_pbbrx1_wbuf_w_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON13_pbbrx1_wbuf_w_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON13_pbbrx1_wbuf_w_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON14_pbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON14_pbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON14_pbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON15_pbbrx1_wbuf_w_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON15_pbbrx1_wbuf_w_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON15_pbbrx1_wbuf_w_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON15_pbbrx1_wbuf_w_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON15_pbbrx1_wbuf_w_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON15_pbbrx1_wbuf_w_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON16_pbbrx1_wbuf_w_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON16_pbbrx1_wbuf_w_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON16_pbbrx1_wbuf_w_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON17_pbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON17_pbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON17_pbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON18_pbbrx1_wbuf_w_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON18_pbbrx1_wbuf_w_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON18_pbbrx1_wbuf_w_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON18_pbbrx1_wbuf_w_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON18_pbbrx1_wbuf_w_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON18_pbbrx1_wbuf_w_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON19_pbbrx1_wbuf_w_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON19_pbbrx1_wbuf_w_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON19_pbbrx1_wbuf_w_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON1B_pbbrx1_wbuf_t_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON1B_pbbrx1_wbuf_t_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON1B_pbbrx1_wbuf_t_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON1B_pbbrx1_wbuf_t_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON1B_pbbrx1_wbuf_t_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON1B_pbbrx1_wbuf_t_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON1C_pbbrx1_wbuf_t_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON1C_pbbrx1_wbuf_t_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON1C_pbbrx1_wbuf_t_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON1E_pbbrx1_wbuf_t_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON1E_pbbrx1_wbuf_t_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON1E_pbbrx1_wbuf_t_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON1E_pbbrx1_wbuf_t_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON1E_pbbrx1_wbuf_t_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON1E_pbbrx1_wbuf_t_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON1F_pbbrx1_wbuf_t_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON1F_pbbrx1_wbuf_t_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON1F_pbbrx1_wbuf_t_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON20_pbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON20_pbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON20_pbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON21_pbbrx1_wbuf_t_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON21_pbbrx1_wbuf_t_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON21_pbbrx1_wbuf_t_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON21_pbbrx1_wbuf_t_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON21_pbbrx1_wbuf_t_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON21_pbbrx1_wbuf_t_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON22_pbbrx1_wbuf_t_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON22_pbbrx1_wbuf_t_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON22_pbbrx1_wbuf_t_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON23_pbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON23_pbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON23_pbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON24_pbbrx1_wbuf_l_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON24_pbbrx1_wbuf_l_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON24_pbbrx1_wbuf_l_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON24_pbbrx1_wbuf_l_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON24_pbbrx1_wbuf_l_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON24_pbbrx1_wbuf_l_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON25_pbbrx1_wbuf_l_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON25_pbbrx1_wbuf_l_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON25_pbbrx1_wbuf_l_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON26_pbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON26_pbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON26_pbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON27_pbbrx1_wbuf_l_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON27_pbbrx1_wbuf_l_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON27_pbbrx1_wbuf_l_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON27_pbbrx1_wbuf_l_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON27_pbbrx1_wbuf_l_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON27_pbbrx1_wbuf_l_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON28_pbbrx1_wbuf_l_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON28_pbbrx1_wbuf_l_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON28_pbbrx1_wbuf_l_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON29_pbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON29_pbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON29_pbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON2A_pbbrx1_wbuf_l_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON2A_pbbrx1_wbuf_l_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON2A_pbbrx1_wbuf_l_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON2A_pbbrx1_wbuf_l_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON2A_pbbrx1_wbuf_l_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON2A_pbbrx1_wbuf_l_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON2B_pbbrx1_wbuf_l_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON2B_pbbrx1_wbuf_l_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON2B_pbbrx1_wbuf_l_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON2D_dbbrx1_wbuf_w_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON2D_dbbrx1_wbuf_w_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON2D_dbbrx1_wbuf_w_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON2D_dbbrx1_wbuf_w_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON2D_dbbrx1_wbuf_w_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON2D_dbbrx1_wbuf_w_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON2E_dbbrx1_wbuf_w_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON2E_dbbrx1_wbuf_w_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON2E_dbbrx1_wbuf_w_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON30_dbbrx1_wbuf_w_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON30_dbbrx1_wbuf_w_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON30_dbbrx1_wbuf_w_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON30_dbbrx1_wbuf_w_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON30_dbbrx1_wbuf_w_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON30_dbbrx1_wbuf_w_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON31_dbbrx1_wbuf_w_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON31_dbbrx1_wbuf_w_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON31_dbbrx1_wbuf_w_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON32_dbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON32_dbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON32_dbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON33_dbbrx1_wbuf_w_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON33_dbbrx1_wbuf_w_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON33_dbbrx1_wbuf_w_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON33_dbbrx1_wbuf_w_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON33_dbbrx1_wbuf_w_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON33_dbbrx1_wbuf_w_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON34_dbbrx1_wbuf_w_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON34_dbbrx1_wbuf_w_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON34_dbbrx1_wbuf_w_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON35_dbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON35_dbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON35_dbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON36_dbbrx1_wbuf_t_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON36_dbbrx1_wbuf_t_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON36_dbbrx1_wbuf_t_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON36_dbbrx1_wbuf_t_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON36_dbbrx1_wbuf_t_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON36_dbbrx1_wbuf_t_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON37_dbbrx1_wbuf_t_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON37_dbbrx1_wbuf_t_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON37_dbbrx1_wbuf_t_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON38_dbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON38_dbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON38_dbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON39_dbbrx1_wbuf_t_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON39_dbbrx1_wbuf_t_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON39_dbbrx1_wbuf_t_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON39_dbbrx1_wbuf_t_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON39_dbbrx1_wbuf_t_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON39_dbbrx1_wbuf_t_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON3A_dbbrx1_wbuf_t_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON3A_dbbrx1_wbuf_t_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON3A_dbbrx1_wbuf_t_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON3C_dbbrx1_wbuf_t_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON3C_dbbrx1_wbuf_t_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON3C_dbbrx1_wbuf_t_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON3C_dbbrx1_wbuf_t_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON3C_dbbrx1_wbuf_t_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON3C_dbbrx1_wbuf_t_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON3D_dbbrx1_wbuf_t_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON3D_dbbrx1_wbuf_t_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON3D_dbbrx1_wbuf_t_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON3F_dbbrx1_wbuf_l_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON3F_dbbrx1_wbuf_l_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON3F_dbbrx1_wbuf_l_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON3F_dbbrx1_wbuf_l_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON3F_dbbrx1_wbuf_l_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON3F_dbbrx1_wbuf_l_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON40_dbbrx1_wbuf_l_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON40_dbbrx1_wbuf_l_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON40_dbbrx1_wbuf_l_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON41_dbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON41_dbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON41_dbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON42_dbbrx1_wbuf_l_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON42_dbbrx1_wbuf_l_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON42_dbbrx1_wbuf_l_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON42_dbbrx1_wbuf_l_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON42_dbbrx1_wbuf_l_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON42_dbbrx1_wbuf_l_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON43_dbbrx1_wbuf_l_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON43_dbbrx1_wbuf_l_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON43_dbbrx1_wbuf_l_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON44_dbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON44_dbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON44_dbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON45_dbbrx1_wbuf_l_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON45_dbbrx1_wbuf_l_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON45_dbbrx1_wbuf_l_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON45_dbbrx1_wbuf_l_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON45_dbbrx1_wbuf_l_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON45_dbbrx1_wbuf_l_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON46_dbbrx1_wbuf_l_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON46_dbbrx1_wbuf_l_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON46_dbbrx1_wbuf_l_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON47_dbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON47_dbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON47_dbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON48_pbbrx2_wbuf_w_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON48_pbbrx2_wbuf_w_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON48_pbbrx2_wbuf_w_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON48_pbbrx2_wbuf_w_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON48_pbbrx2_wbuf_w_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON48_pbbrx2_wbuf_w_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON49_pbbrx2_wbuf_w_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON49_pbbrx2_wbuf_w_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON49_pbbrx2_wbuf_w_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON4B_pbbrx2_wbuf_w_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON4B_pbbrx2_wbuf_w_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON4B_pbbrx2_wbuf_w_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON4B_pbbrx2_wbuf_w_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON4B_pbbrx2_wbuf_w_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON4B_pbbrx2_wbuf_w_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON4C_pbbrx2_wbuf_w_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON4C_pbbrx2_wbuf_w_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON4C_pbbrx2_wbuf_w_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON4E_pbbrx2_wbuf_w_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON4E_pbbrx2_wbuf_w_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON4E_pbbrx2_wbuf_w_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON4E_pbbrx2_wbuf_w_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON4E_pbbrx2_wbuf_w_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON4E_pbbrx2_wbuf_w_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON4F_pbbrx2_wbuf_w_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON4F_pbbrx2_wbuf_w_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON4F_pbbrx2_wbuf_w_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON50_pbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON50_pbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON50_pbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON51_pbbrx2_wbuf_t_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON51_pbbrx2_wbuf_t_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON51_pbbrx2_wbuf_t_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON51_pbbrx2_wbuf_t_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON51_pbbrx2_wbuf_t_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON51_pbbrx2_wbuf_t_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON52_pbbrx2_wbuf_t_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON52_pbbrx2_wbuf_t_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON52_pbbrx2_wbuf_t_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON53_pbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON53_pbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON53_pbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON54_pbbrx2_wbuf_t_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON54_pbbrx2_wbuf_t_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON54_pbbrx2_wbuf_t_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON54_pbbrx2_wbuf_t_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON54_pbbrx2_wbuf_t_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON54_pbbrx2_wbuf_t_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON55_pbbrx2_wbuf_t_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON55_pbbrx2_wbuf_t_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON55_pbbrx2_wbuf_t_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON56_pbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON56_pbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON56_pbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON57_pbbrx2_wbuf_t_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON57_pbbrx2_wbuf_t_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON57_pbbrx2_wbuf_t_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON57_pbbrx2_wbuf_t_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON57_pbbrx2_wbuf_t_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON57_pbbrx2_wbuf_t_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON58_pbbrx2_wbuf_t_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON58_pbbrx2_wbuf_t_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON58_pbbrx2_wbuf_t_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON59_pbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON59_pbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON59_pbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON5A_pbbrx2_wbuf_l_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON5A_pbbrx2_wbuf_l_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON5A_pbbrx2_wbuf_l_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON5A_pbbrx2_wbuf_l_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON5A_pbbrx2_wbuf_l_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON5A_pbbrx2_wbuf_l_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON5B_pbbrx2_wbuf_l_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON5B_pbbrx2_wbuf_l_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON5B_pbbrx2_wbuf_l_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON5D_pbbrx2_wbuf_l_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON5D_pbbrx2_wbuf_l_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON5D_pbbrx2_wbuf_l_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON5D_pbbrx2_wbuf_l_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON5D_pbbrx2_wbuf_l_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON5D_pbbrx2_wbuf_l_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON5E_pbbrx2_wbuf_l_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON5E_pbbrx2_wbuf_l_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON5E_pbbrx2_wbuf_l_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON60_pbbrx2_wbuf_l_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON60_pbbrx2_wbuf_l_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON60_pbbrx2_wbuf_l_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON60_pbbrx2_wbuf_l_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON60_pbbrx2_wbuf_l_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON60_pbbrx2_wbuf_l_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON61_pbbrx2_wbuf_l_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON61_pbbrx2_wbuf_l_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON61_pbbrx2_wbuf_l_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON62_pbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON62_pbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON62_pbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON63_dbbrx2_wbuf_w_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON63_dbbrx2_wbuf_w_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON63_dbbrx2_wbuf_w_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON63_dbbrx2_wbuf_w_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON63_dbbrx2_wbuf_w_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON63_dbbrx2_wbuf_w_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON64_dbbrx2_wbuf_w_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON64_dbbrx2_wbuf_w_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON64_dbbrx2_wbuf_w_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON65_dbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON65_dbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON65_dbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON66_dbbrx2_wbuf_w_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON66_dbbrx2_wbuf_w_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON66_dbbrx2_wbuf_w_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON66_dbbrx2_wbuf_w_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON66_dbbrx2_wbuf_w_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON66_dbbrx2_wbuf_w_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON67_dbbrx2_wbuf_w_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON67_dbbrx2_wbuf_w_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON67_dbbrx2_wbuf_w_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON68_dbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON68_dbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON68_dbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON69_dbbrx2_wbuf_w_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON69_dbbrx2_wbuf_w_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON69_dbbrx2_wbuf_w_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON69_dbbrx2_wbuf_w_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON69_dbbrx2_wbuf_w_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON69_dbbrx2_wbuf_w_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON6A_dbbrx2_wbuf_w_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON6A_dbbrx2_wbuf_w_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON6A_dbbrx2_wbuf_w_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON6C_dbbrx2_wbuf_t_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON6C_dbbrx2_wbuf_t_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON6C_dbbrx2_wbuf_t_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON6C_dbbrx2_wbuf_t_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON6C_dbbrx2_wbuf_t_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON6C_dbbrx2_wbuf_t_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON6D_dbbrx2_wbuf_t_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON6D_dbbrx2_wbuf_t_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON6D_dbbrx2_wbuf_t_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON6F_dbbrx2_wbuf_t_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON6F_dbbrx2_wbuf_t_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON6F_dbbrx2_wbuf_t_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON6F_dbbrx2_wbuf_t_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON6F_dbbrx2_wbuf_t_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON6F_dbbrx2_wbuf_t_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON70_dbbrx2_wbuf_t_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON70_dbbrx2_wbuf_t_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON70_dbbrx2_wbuf_t_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON71_dbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON71_dbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON71_dbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON72_dbbrx2_wbuf_t_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON72_dbbrx2_wbuf_t_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON72_dbbrx2_wbuf_t_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON72_dbbrx2_wbuf_t_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON72_dbbrx2_wbuf_t_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON72_dbbrx2_wbuf_t_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON73_dbbrx2_wbuf_t_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON73_dbbrx2_wbuf_t_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON73_dbbrx2_wbuf_t_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON74_dbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON74_dbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON74_dbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON75_dbbrx2_wbuf_l_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON75_dbbrx2_wbuf_l_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON75_dbbrx2_wbuf_l_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON75_dbbrx2_wbuf_l_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON75_dbbrx2_wbuf_l_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON75_dbbrx2_wbuf_l_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON76_dbbrx2_wbuf_l_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON76_dbbrx2_wbuf_l_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON76_dbbrx2_wbuf_l_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON77_dbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON77_dbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON77_dbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON78_dbbrx2_wbuf_l_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON78_dbbrx2_wbuf_l_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON78_dbbrx2_wbuf_l_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON78_dbbrx2_wbuf_l_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON78_dbbrx2_wbuf_l_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON78_dbbrx2_wbuf_l_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON79_dbbrx2_wbuf_l_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON79_dbbrx2_wbuf_l_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON79_dbbrx2_wbuf_l_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON7B_dbbrx2_wbuf_l_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG0_DIG_CON7B_dbbrx2_wbuf_l_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG0_DIG_CON7B_dbbrx2_wbuf_l_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG0_DIG_CON7B_dbbrx2_wbuf_l_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG0_DIG_CON7B_dbbrx2_wbuf_l_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG0_DIG_CON7B_dbbrx2_wbuf_l_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON7C_dbbrx2_wbuf_l_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON7C_dbbrx2_wbuf_l_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG0_DIG_CON7C_dbbrx2_wbuf_l_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG0_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG0_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG0_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG0_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG0_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG0_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG0_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_occur_LSB                           (15)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_occur_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_occur_MASK                          (0x8000)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_occur_BIT                           (0x8000)

#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_occur_dly_LSB                       (14)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_occur_dly_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_occur_dly_MASK                      (0x4000)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_occur_dly_BIT                       (0x4000)

#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_dfe_ovld_clr_tgl_LSB                     (13)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_dfe_ovld_clr_tgl_WIDTH                   (1)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_dfe_ovld_clr_tgl_MASK                    (0x2000)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_dfe_ovld_clr_tgl_BIT                     (0x2000)

#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_cic_gain_mode_LSB                        (9)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_cic_gain_mode_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_cic_gain_mode_MASK                       (0x0200)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_cic_gain_mode_BIT                        (0x0200)

#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_cic_gain_sel_LSB                         (7)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_cic_gain_sel_WIDTH                       (2)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_cic_gain_sel_MASK                        (0x0180)

#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_clr_LSB                             (6)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_clr_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_clr_MASK                            (0x0040)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_clr_BIT                             (0x0040)

#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_en_LSB                              (5)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_en_MASK                             (0x0020)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_en_BIT                              (0x0020)

#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_dly_time_LSB                        (0)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_dly_time_WIDTH                      (5)
#define MMRF_ABB_DIG0_DIG_CON81_pbbrx1_ovld_dly_time_MASK                       (0x001F)

#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_occur_LSB                           (15)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_occur_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_occur_MASK                          (0x8000)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_occur_BIT                           (0x8000)

#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_occur_dly_LSB                       (14)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_occur_dly_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_occur_dly_MASK                      (0x4000)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_occur_dly_BIT                       (0x4000)

#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_dfe_ovld_clr_tgl_LSB                     (13)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_dfe_ovld_clr_tgl_WIDTH                   (1)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_dfe_ovld_clr_tgl_MASK                    (0x2000)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_dfe_ovld_clr_tgl_BIT                     (0x2000)

#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_cic_gain_mode_LSB                        (9)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_cic_gain_mode_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_cic_gain_mode_MASK                       (0x0200)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_cic_gain_mode_BIT                        (0x0200)

#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_cic_gain_sel_LSB                         (7)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_cic_gain_sel_WIDTH                       (2)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_cic_gain_sel_MASK                        (0x0180)

#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_clr_LSB                             (6)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_clr_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_clr_MASK                            (0x0040)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_clr_BIT                             (0x0040)

#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_en_LSB                              (5)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_en_MASK                             (0x0020)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_en_BIT                              (0x0020)

#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_dly_time_LSB                        (0)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_dly_time_WIDTH                      (5)
#define MMRF_ABB_DIG0_DIG_CON82_dbbrx1_ovld_dly_time_MASK                       (0x001F)

#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_occur_LSB                           (15)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_occur_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_occur_MASK                          (0x8000)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_occur_BIT                           (0x8000)

#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_occur_dly_LSB                       (14)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_occur_dly_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_occur_dly_MASK                      (0x4000)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_occur_dly_BIT                       (0x4000)

#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_dfe_ovld_clr_tgl_LSB                     (13)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_dfe_ovld_clr_tgl_WIDTH                   (1)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_dfe_ovld_clr_tgl_MASK                    (0x2000)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_dfe_ovld_clr_tgl_BIT                     (0x2000)

#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_cic_gain_mode_LSB                        (9)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_cic_gain_mode_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_cic_gain_mode_MASK                       (0x0200)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_cic_gain_mode_BIT                        (0x0200)

#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_cic_gain_sel_LSB                         (7)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_cic_gain_sel_WIDTH                       (2)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_cic_gain_sel_MASK                        (0x0180)

#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_clr_LSB                             (6)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_clr_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_clr_MASK                            (0x0040)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_clr_BIT                             (0x0040)

#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_en_LSB                              (5)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_en_MASK                             (0x0020)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_en_BIT                              (0x0020)

#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_dly_time_LSB                        (0)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_dly_time_WIDTH                      (5)
#define MMRF_ABB_DIG0_DIG_CON83_pbbrx2_ovld_dly_time_MASK                       (0x001F)

#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_occur_LSB                           (15)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_occur_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_occur_MASK                          (0x8000)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_occur_BIT                           (0x8000)

#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_occur_dly_LSB                       (14)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_occur_dly_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_occur_dly_MASK                      (0x4000)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_occur_dly_BIT                       (0x4000)

#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_dfe_ovld_clr_tgl_LSB                     (13)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_dfe_ovld_clr_tgl_WIDTH                   (1)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_dfe_ovld_clr_tgl_MASK                    (0x2000)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_dfe_ovld_clr_tgl_BIT                     (0x2000)

#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_cic_gain_mode_LSB                        (9)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_cic_gain_mode_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_cic_gain_mode_MASK                       (0x0200)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_cic_gain_mode_BIT                        (0x0200)

#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_cic_gain_sel_LSB                         (7)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_cic_gain_sel_WIDTH                       (2)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_cic_gain_sel_MASK                        (0x0180)

#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_clr_LSB                             (6)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_clr_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_clr_MASK                            (0x0040)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_clr_BIT                             (0x0040)

#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_en_LSB                              (5)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_en_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_en_MASK                             (0x0020)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_en_BIT                              (0x0020)

#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_dly_time_LSB                        (0)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_dly_time_WIDTH                      (5)
#define MMRF_ABB_DIG0_DIG_CON84_dbbrx2_ovld_dly_time_MASK                       (0x001F)

#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel0_normal_LSB                     (10)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel0_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel0_normal_MASK                    (0x0C00)

#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel1_normal_LSB                     (8)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel1_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel1_normal_MASK                    (0x0300)

#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel2_normal_LSB                     (6)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel2_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel2_normal_MASK                    (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel0_ovld_LSB                       (4)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel0_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel0_ovld_MASK                      (0x0030)

#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel1_ovld_LSB                       (2)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel1_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel1_ovld_MASK                      (0x000C)

#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel2_ovld_LSB                       (0)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel2_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON85_pbbrx1_inputsel2_ovld_MASK                      (0x0003)

#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel0_normal_LSB                     (10)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel0_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel0_normal_MASK                    (0x0C00)

#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel1_normal_LSB                     (8)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel1_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel1_normal_MASK                    (0x0300)

#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel2_normal_LSB                     (6)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel2_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel2_normal_MASK                    (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel0_ovld_LSB                       (4)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel0_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel0_ovld_MASK                      (0x0030)

#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel1_ovld_LSB                       (2)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel1_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel1_ovld_MASK                      (0x000C)

#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel2_ovld_LSB                       (0)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel2_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON86_dbbrx1_inputsel2_ovld_MASK                      (0x0003)

#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel0_normal_LSB                     (10)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel0_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel0_normal_MASK                    (0x0C00)

#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel1_normal_LSB                     (8)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel1_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel1_normal_MASK                    (0x0300)

#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel2_normal_LSB                     (6)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel2_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel2_normal_MASK                    (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel0_ovld_LSB                       (4)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel0_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel0_ovld_MASK                      (0x0030)

#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel1_ovld_LSB                       (2)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel1_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel1_ovld_MASK                      (0x000C)

#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel2_ovld_LSB                       (0)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel2_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON87_pbbrx2_inputsel2_ovld_MASK                      (0x0003)

#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel0_normal_LSB                     (10)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel0_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel0_normal_MASK                    (0x0C00)

#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel1_normal_LSB                     (8)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel1_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel1_normal_MASK                    (0x0300)

#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel2_normal_LSB                     (6)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel2_normal_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel2_normal_MASK                    (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel0_ovld_LSB                       (4)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel0_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel0_ovld_MASK                      (0x0030)

#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel1_ovld_LSB                       (2)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel1_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel1_ovld_MASK                      (0x000C)

#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel2_ovld_LSB                       (0)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel2_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG0_DIG_CON88_dbbrx2_inputsel2_ovld_MASK                      (0x0003)

#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sel_ctl_LSB                         (5)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sel_ctl_WIDTH                       (2)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sel_ctl_MASK                        (0x0060)

#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sel_sw_LSB                          (4)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sel_sw_WIDTH                        (1)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sel_sw_MASK                         (0x0010)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sel_sw_BIT                          (0x0010)

#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_en_ctl_LSB                          (3)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_en_ctl_WIDTH                        (1)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_en_ctl_MASK                         (0x0008)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_en_ctl_BIT                          (0x0008)

#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_cic_en_ctl_LSB                          (2)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_cic_en_ctl_WIDTH                        (1)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_cic_en_ctl_MASK                         (0x0004)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_cic_en_ctl_BIT                          (0x0004)

#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sw_en_LSB                           (1)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sw_en_MASK                          (0x0002)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_adc_sw_en_BIT                           (0x0002)

#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_cic_sw_en_LSB                           (0)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_cic_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_cic_sw_en_MASK                          (0x0001)
#define MMRF_ABB_DIG0_DIG_CON89_bbrx_2g_cic_sw_en_BIT                           (0x0001)

#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_en_LSB                            (4)
#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_en_MASK                           (0x0010)
#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_en_BIT                            (0x0010)

#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_ckin_sel_LSB                      (2)
#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_ckin_sel_WIDTH                    (2)
#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_ckin_sel_MASK                     (0x000C)

#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_ckout_sel_LSB                     (0)
#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_ckout_sel_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON8A_packer_pbbrx1_ckout_sel_MASK                    (0x0003)

#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_en_LSB                            (4)
#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_en_MASK                           (0x0010)
#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_en_BIT                            (0x0010)

#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_ckin_sel_LSB                      (2)
#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_ckin_sel_WIDTH                    (2)
#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_ckin_sel_MASK                     (0x000C)

#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_ckout_sel_LSB                     (0)
#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_ckout_sel_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON8B_packer_dbbrx1_ckout_sel_MASK                    (0x0003)

#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_en_LSB                            (4)
#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_en_MASK                           (0x0010)
#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_en_BIT                            (0x0010)

#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_ckin_sel_LSB                      (2)
#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_ckin_sel_WIDTH                    (2)
#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_ckin_sel_MASK                     (0x000C)

#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_ckout_sel_LSB                     (0)
#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_ckout_sel_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON8C_packer_pbbrx2_ckout_sel_MASK                    (0x0003)

#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_en_LSB                            (4)
#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_en_MASK                           (0x0010)
#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_en_BIT                            (0x0010)

#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_ckin_sel_LSB                      (2)
#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_ckin_sel_WIDTH                    (2)
#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_ckin_sel_MASK                     (0x000C)

#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_ckout_sel_LSB                     (0)
#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_ckout_sel_WIDTH                   (2)
#define MMRF_ABB_DIG0_DIG_CON8D_packer_dbbrx2_ckout_sel_MASK                    (0x0003)

#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdfe_rat_ctlsel_LSB                    (4)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdfe_rat_ctlsel_WIDTH                  (4)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdfe_rat_ctlsel_MASK                   (0x00F0)

#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdac_rate_ctlsel_LSB                   (2)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdac_rate_ctlsel_WIDTH                 (2)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdac_rate_ctlsel_MASK                  (0x000C)

#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdfe_rat_sw_LSB                        (1)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdfe_rat_sw_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdfe_rat_sw_MASK                       (0x0002)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdfe_rat_sw_BIT                        (0x0002)

#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdac_rate_sw_LSB                       (0)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdac_rate_sw_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdac_rate_sw_MASK                      (0x0001)
#define MMRF_ABB_DIG0_DIG_CON8E_bbtx_mm_txdac_rate_sw_BIT                       (0x0001)

#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdfe_rat_ctlsel_LSB                    (4)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdfe_rat_ctlsel_WIDTH                  (4)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdfe_rat_ctlsel_MASK                   (0x00F0)

#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdac_rate_ctlsel_LSB                   (2)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdac_rate_ctlsel_WIDTH                 (2)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdac_rate_ctlsel_MASK                  (0x000C)

#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdfe_rat_sw_LSB                        (1)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdfe_rat_sw_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdfe_rat_sw_MASK                       (0x0002)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdfe_rat_sw_BIT                        (0x0002)

#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdac_rate_sw_LSB                       (0)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdac_rate_sw_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdac_rate_sw_MASK                      (0x0001)
#define MMRF_ABB_DIG0_DIG_CON8F_bbtx_2g_txdac_rate_sw_BIT                       (0x0001)

#define MMRF_ABB_DIG0_DIG_CON90_sinegen_ck_out_sel_LSB                          (2)
#define MMRF_ABB_DIG0_DIG_CON90_sinegen_ck_out_sel_WIDTH                        (2)
#define MMRF_ABB_DIG0_DIG_CON90_sinegen_ck_out_sel_MASK                         (0x000C)

#define MMRF_ABB_DIG0_DIG_CON90_ckgen_sinclk_rate_sel_LSB                       (1)
#define MMRF_ABB_DIG0_DIG_CON90_ckgen_sinclk_rate_sel_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CON90_ckgen_sinclk_rate_sel_MASK                      (0x0002)
#define MMRF_ABB_DIG0_DIG_CON90_ckgen_sinclk_rate_sel_BIT                       (0x0002)

#define MMRF_ABB_DIG0_DIG_CON90_ckgen_sinclk_enable_LSB                         (0)
#define MMRF_ABB_DIG0_DIG_CON90_ckgen_sinclk_enable_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CON90_ckgen_sinclk_enable_MASK                        (0x0001)
#define MMRF_ABB_DIG0_DIG_CON90_ckgen_sinclk_enable_BIT                         (0x0001)

#define MMRF_ABB_DIG0_DIG_CON91_singen_en_LSB                                   (7)
#define MMRF_ABB_DIG0_DIG_CON91_singen_en_WIDTH                                 (1)
#define MMRF_ABB_DIG0_DIG_CON91_singen_en_MASK                                  (0x0080)
#define MMRF_ABB_DIG0_DIG_CON91_singen_en_BIT                                   (0x0080)

#define MMRF_ABB_DIG0_DIG_CON91_singen_from_txcal_LSB                           (6)
#define MMRF_ABB_DIG0_DIG_CON91_singen_from_txcal_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CON91_singen_from_txcal_MASK                          (0x0040)
#define MMRF_ABB_DIG0_DIG_CON91_singen_from_txcal_BIT                           (0x0040)

#define MMRF_ABB_DIG0_DIG_CON91_singen_olt_mode_LSB                             (5)
#define MMRF_ABB_DIG0_DIG_CON91_singen_olt_mode_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CON91_singen_olt_mode_MASK                            (0x0020)
#define MMRF_ABB_DIG0_DIG_CON91_singen_olt_mode_BIT                             (0x0020)

#define MMRF_ABB_DIG0_DIG_CON91_singen_fix_en_i_LSB                             (1)
#define MMRF_ABB_DIG0_DIG_CON91_singen_fix_en_i_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CON91_singen_fix_en_i_MASK                            (0x0002)
#define MMRF_ABB_DIG0_DIG_CON91_singen_fix_en_i_BIT                             (0x0002)

#define MMRF_ABB_DIG0_DIG_CON91_singen_fix_en_q_LSB                             (0)
#define MMRF_ABB_DIG0_DIG_CON91_singen_fix_en_q_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CON91_singen_fix_en_q_MASK                            (0x0001)
#define MMRF_ABB_DIG0_DIG_CON91_singen_fix_en_q_BIT                             (0x0001)

#define MMRF_ABB_DIG0_DIG_CON92_singen_fix_i_LSB                                (0)
#define MMRF_ABB_DIG0_DIG_CON92_singen_fix_i_WIDTH                              (11)
#define MMRF_ABB_DIG0_DIG_CON92_singen_fix_i_MASK                               (0x07FF)

#define MMRF_ABB_DIG0_DIG_CON93_singen_fix_q_LSB                                (0)
#define MMRF_ABB_DIG0_DIG_CON93_singen_fix_q_WIDTH                              (11)
#define MMRF_ABB_DIG0_DIG_CON93_singen_fix_q_MASK                               (0x07FF)

#define MMRF_ABB_DIG0_DIG_CON94_singen_clkdiv_n_LSB                             (8)
#define MMRF_ABB_DIG0_DIG_CON94_singen_clkdiv_n_WIDTH                           (2)
#define MMRF_ABB_DIG0_DIG_CON94_singen_clkdiv_n_MASK                            (0x0300)

#define MMRF_ABB_DIG0_DIG_CON94_singen_mode_i_LSB                               (4)
#define MMRF_ABB_DIG0_DIG_CON94_singen_mode_i_WIDTH                             (4)
#define MMRF_ABB_DIG0_DIG_CON94_singen_mode_i_MASK                              (0x00F0)

#define MMRF_ABB_DIG0_DIG_CON94_singen_mode_q_LSB                               (0)
#define MMRF_ABB_DIG0_DIG_CON94_singen_mode_q_WIDTH                             (4)
#define MMRF_ABB_DIG0_DIG_CON94_singen_mode_q_MASK                              (0x000F)

#define MMRF_ABB_DIG0_DIG_CON95_singen_clkdiv_i_LSB                             (0)
#define MMRF_ABB_DIG0_DIG_CON95_singen_clkdiv_i_WIDTH                           (10)
#define MMRF_ABB_DIG0_DIG_CON95_singen_clkdiv_i_MASK                            (0x03FF)

#define MMRF_ABB_DIG0_DIG_CON96_singen_clkdiv_q_LSB                             (0)
#define MMRF_ABB_DIG0_DIG_CON96_singen_clkdiv_q_WIDTH                           (10)
#define MMRF_ABB_DIG0_DIG_CON96_singen_clkdiv_q_MASK                            (0x03FF)

#define MMRF_ABB_DIG0_DIG_CON97_singen_gain_i_LSB                               (4)
#define MMRF_ABB_DIG0_DIG_CON97_singen_gain_i_WIDTH                             (3)
#define MMRF_ABB_DIG0_DIG_CON97_singen_gain_i_MASK                              (0x0070)

#define MMRF_ABB_DIG0_DIG_CON97_singen_gain_q_LSB                               (0)
#define MMRF_ABB_DIG0_DIG_CON97_singen_gain_q_WIDTH                             (3)
#define MMRF_ABB_DIG0_DIG_CON97_singen_gain_q_MASK                              (0x0007)

#define MMRF_ABB_DIG0_DIG_CON98_singen_gain_mode_LSB                            (7)
#define MMRF_ABB_DIG0_DIG_CON98_singen_gain_mode_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CON98_singen_gain_mode_MASK                           (0x0080)
#define MMRF_ABB_DIG0_DIG_CON98_singen_gain_mode_BIT                            (0x0080)

#define MMRF_ABB_DIG0_DIG_CON99_singen_inc_step0_i_LSB                          (0)
#define MMRF_ABB_DIG0_DIG_CON99_singen_inc_step0_i_WIDTH                        (10)
#define MMRF_ABB_DIG0_DIG_CON99_singen_inc_step0_i_MASK                         (0x03FF)

#define MMRF_ABB_DIG0_DIG_CON9A_singen_inc_step0_q_LSB                          (0)
#define MMRF_ABB_DIG0_DIG_CON9A_singen_inc_step0_q_WIDTH                        (10)
#define MMRF_ABB_DIG0_DIG_CON9A_singen_inc_step0_q_MASK                         (0x03FF)

#define MMRF_ABB_DIG0_DIG_CON9B_singen_start_addr0_i_LSB                        (0)
#define MMRF_ABB_DIG0_DIG_CON9B_singen_start_addr0_i_WIDTH                      (10)
#define MMRF_ABB_DIG0_DIG_CON9B_singen_start_addr0_i_MASK                       (0x03FF)

#define MMRF_ABB_DIG0_DIG_CON9C_singen_start_addr0_q_LSB                        (0)
#define MMRF_ABB_DIG0_DIG_CON9C_singen_start_addr0_q_WIDTH                      (10)
#define MMRF_ABB_DIG0_DIG_CON9C_singen_start_addr0_q_MASK                       (0x03FF)

#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel1_normal_LSB                  (14)
#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel1_normal_WIDTH                (2)
#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel1_normal_MASK                 (0xC000)

#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel2_normal_LSB                  (12)
#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel2_normal_WIDTH                (2)
#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel2_normal_MASK                 (0x3000)

#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel1_ovld_LSB                    (10)
#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel1_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel1_ovld_MASK                   (0x0C00)

#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel2_ovld_LSB                    (8)
#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel2_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG0_DIG_CON9D_pbbrx1_3g_inputsel2_ovld_MASK                   (0x0300)

#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel1_normal_LSB                  (6)
#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel1_normal_WIDTH                (2)
#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel1_normal_MASK                 (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel2_normal_LSB                  (4)
#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel2_normal_WIDTH                (2)
#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel2_normal_MASK                 (0x0030)

#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel1_ovld_LSB                    (2)
#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel1_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel1_ovld_MASK                   (0x000C)

#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel2_ovld_LSB                    (0)
#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel2_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG0_DIG_CON9D_dbbrx1_3g_inputsel2_ovld_MASK                   (0x0003)

#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel1_normal_LSB                  (14)
#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel1_normal_WIDTH                (2)
#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel1_normal_MASK                 (0xC000)

#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel2_normal_LSB                  (12)
#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel2_normal_WIDTH                (2)
#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel2_normal_MASK                 (0x3000)

#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel1_ovld_LSB                    (10)
#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel1_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel1_ovld_MASK                   (0x0C00)

#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel2_ovld_LSB                    (8)
#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel2_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG0_DIG_CON9E_pbbrx2_3g_inputsel2_ovld_MASK                   (0x0300)

#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel1_normal_LSB                  (6)
#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel1_normal_WIDTH                (2)
#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel1_normal_MASK                 (0x00C0)

#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel2_normal_LSB                  (4)
#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel2_normal_WIDTH                (2)
#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel2_normal_MASK                 (0x0030)

#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel1_ovld_LSB                    (2)
#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel1_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel1_ovld_MASK                   (0x000C)

#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel2_ovld_LSB                    (0)
#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel2_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG0_DIG_CON9E_dbbrx2_3g_inputsel2_ovld_MASK                   (0x0003)

#define MMRF_ABB_DIG0_DIG_CONA0_rccal_lte_ck_en_LSB                             (15)
#define MMRF_ABB_DIG0_DIG_CONA0_rccal_lte_ck_en_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CONA0_rccal_lte_ck_en_MASK                            (0x8000)
#define MMRF_ABB_DIG0_DIG_CONA0_rccal_lte_ck_en_BIT                             (0x8000)

#define MMRF_ABB_DIG0_DIG_CONA0_rccal_lte_seq_ck_en_LSB                         (0)
#define MMRF_ABB_DIG0_DIG_CONA0_rccal_lte_seq_ck_en_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONA0_rccal_lte_seq_ck_en_MASK                        (0x0001)
#define MMRF_ABB_DIG0_DIG_CONA0_rccal_lte_seq_ck_en_BIT                         (0x0001)

#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_done_LSB                              (12)
#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_done_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_done_MASK                             (0x1000)
#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_done_BIT                              (0x1000)

#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_state_LSB                             (4)
#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_state_WIDTH                           (5)
#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_state_MASK                            (0x01F0)

#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_start_LSB                             (0)
#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_start_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_start_MASK                            (0x0001)
#define MMRF_ABB_DIG0_DIG_CONA1_rccal_lte_start_BIT                             (0x0001)

#define MMRF_ABB_DIG0_DIG_CONA2_rccal_lte_out_inv_LSB                           (12)
#define MMRF_ABB_DIG0_DIG_CONA2_rccal_lte_out_inv_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONA2_rccal_lte_out_inv_MASK                          (0x1000)
#define MMRF_ABB_DIG0_DIG_CONA2_rccal_lte_out_inv_BIT                           (0x1000)

#define MMRF_ABB_DIG0_DIG_CONA2_rccal_lte_osc_cnt_dbg_LSB                       (0)
#define MMRF_ABB_DIG0_DIG_CONA2_rccal_lte_osc_cnt_dbg_WIDTH                     (10)
#define MMRF_ABB_DIG0_DIG_CONA2_rccal_lte_osc_cnt_dbg_MASK                      (0x03FF)

#define MMRF_ABB_DIG0_DIG_CONA3_rccal_lte_trim_cnt_LSB                          (0)
#define MMRF_ABB_DIG0_DIG_CONA3_rccal_lte_trim_cnt_WIDTH                        (12)
#define MMRF_ABB_DIG0_DIG_CONA3_rccal_lte_trim_cnt_MASK                         (0x0FFF)

#define MMRF_ABB_DIG0_DIG_CONA4_rccal_lte_cmp_th_LSB                            (0)
#define MMRF_ABB_DIG0_DIG_CONA4_rccal_lte_cmp_th_WIDTH                          (10)
#define MMRF_ABB_DIG0_DIG_CONA4_rccal_lte_cmp_th_MASK                           (0x03FF)

#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_sel_cap_LSB                           (8)
#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_sel_cap_WIDTH                         (6)
#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_sel_cap_MASK                          (0x3F00)

#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_sel_cap_sw_LSB                        (7)
#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_sel_cap_sw_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_sel_cap_sw_MASK                       (0x0080)
#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_sel_cap_sw_BIT                        (0x0080)

#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_offset_cap_LSB                        (0)
#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_offset_cap_WIDTH                      (6)
#define MMRF_ABB_DIG0_DIG_CONA5_rccal_lte_offset_cap_MASK                       (0x003F)

#define MMRF_ABB_DIG0_DIG_CONA6_rccal_lte_offset_sat_inv_out_LSB                (8)
#define MMRF_ABB_DIG0_DIG_CONA6_rccal_lte_offset_sat_inv_out_WIDTH              (6)
#define MMRF_ABB_DIG0_DIG_CONA6_rccal_lte_offset_sat_inv_out_MASK               (0x3F00)

#define MMRF_ABB_DIG0_DIG_CONA6_rccal_lte_sar_out_LSB                           (0)
#define MMRF_ABB_DIG0_DIG_CONA6_rccal_lte_sar_out_WIDTH                         (6)
#define MMRF_ABB_DIG0_DIG_CONA6_rccal_lte_sar_out_MASK                          (0x003F)

#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_dac_en_ctl_LSB                         (3)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_dac_en_ctl_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_dac_en_ctl_MASK                        (0x0008)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_dac_en_ctl_BIT                         (0x0008)

#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_cic_en_ctl_LSB                         (2)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_cic_en_ctl_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_cic_en_ctl_MASK                        (0x0004)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_cic_en_ctl_BIT                         (0x0004)

#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_dac_sw_en_LSB                          (1)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_dac_sw_en_WIDTH                        (1)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_dac_sw_en_MASK                         (0x0002)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_dac_sw_en_BIT                          (0x0002)

#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_cic_sw_en_LSB                          (0)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_cic_sw_en_WIDTH                        (1)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_cic_sw_en_MASK                         (0x0001)
#define MMRF_ABB_DIG0_DIG_CONA7_bbtx_c2k_cic_sw_en_BIT                          (0x0001)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_et_swap_i_pn_LSB                            (15)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_et_swap_i_pn_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_et_swap_i_pn_MASK                           (0x8000)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_et_swap_i_pn_BIT                            (0x8000)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_i_pn_LSB                            (14)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_i_pn_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_i_pn_MASK                           (0x4000)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_i_pn_BIT                            (0x4000)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_q_pn_LSB                            (13)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_q_pn_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_q_pn_MASK                           (0x2000)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_q_pn_BIT                            (0x2000)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_iq_LSB                              (12)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_iq_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_iq_MASK                             (0x1000)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_tx_swap_iq_BIT                              (0x1000)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_i_pn_LSB                    (11)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_i_pn_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_i_pn_MASK                   (0x0800)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_i_pn_BIT                    (0x0800)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_q_pn_LSB                    (10)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_q_pn_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_q_pn_MASK                   (0x0400)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_q_pn_BIT                    (0x0400)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_iq_LSB                      (9)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_iq_WIDTH                    (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_iq_MASK                     (0x0200)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx1_swap_iq_BIT                      (0x0200)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_i_pn_LSB                    (8)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_i_pn_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_i_pn_MASK                   (0x0100)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_i_pn_BIT                    (0x0100)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_q_pn_LSB                    (7)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_q_pn_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_q_pn_MASK                   (0x0080)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_q_pn_BIT                    (0x0080)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_iq_LSB                      (6)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_iq_WIDTH                    (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_iq_MASK                     (0x0040)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx1_swap_iq_BIT                      (0x0040)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_i_pn_LSB                    (5)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_i_pn_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_i_pn_MASK                   (0x0020)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_i_pn_BIT                    (0x0020)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_q_pn_LSB                    (4)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_q_pn_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_q_pn_MASK                   (0x0010)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_q_pn_BIT                    (0x0010)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_iq_LSB                      (3)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_iq_WIDTH                    (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_iq_MASK                     (0x0008)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_pbbrx2_swap_iq_BIT                      (0x0008)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_i_pn_LSB                    (2)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_i_pn_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_i_pn_MASK                   (0x0004)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_i_pn_BIT                    (0x0004)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_q_pn_LSB                    (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_q_pn_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_q_pn_MASK                   (0x0002)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_q_pn_BIT                    (0x0002)

#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_iq_LSB                      (0)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_iq_WIDTH                    (1)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_iq_MASK                     (0x0001)
#define MMRF_ABB_DIG0_DIG_CONA9_abb_c2k_dbbrx2_swap_iq_BIT                      (0x0001)

#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_adc_sw_ctrl_LSB                         (7)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_adc_sw_ctrl_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_adc_sw_ctrl_MASK                        (0x0080)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_adc_sw_ctrl_BIT                         (0x0080)

#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_adc_sw_ctrl_LSB                         (6)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_adc_sw_ctrl_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_adc_sw_ctrl_MASK                        (0x0040)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_adc_sw_ctrl_BIT                         (0x0040)

#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_cic_sw_ctrl_LSB                         (5)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_cic_sw_ctrl_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_cic_sw_ctrl_MASK                        (0x0020)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_cic_sw_ctrl_BIT                         (0x0020)

#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_cic_sw_ctrl_LSB                         (4)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_cic_sw_ctrl_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_cic_sw_ctrl_MASK                        (0x0010)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_cic_sw_ctrl_BIT                         (0x0010)

#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_adc_sw_en_LSB                           (3)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_adc_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_adc_sw_en_MASK                          (0x0008)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_adc_sw_en_BIT                           (0x0008)

#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_adc_sw_en_LSB                           (2)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_adc_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_adc_sw_en_MASK                          (0x0004)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_adc_sw_en_BIT                           (0x0004)

#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_cic_sw_en_LSB                           (1)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_cic_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_cic_sw_en_MASK                          (0x0002)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx1_cic_sw_en_BIT                           (0x0002)

#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_cic_sw_en_LSB                           (0)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_cic_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_cic_sw_en_MASK                          (0x0001)
#define MMRF_ABB_DIG0_DIG_CONAA_c2k_rx2_cic_sw_en_BIT                           (0x0001)

#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txdac_sw_en_sel_LSB                         (5)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txdac_sw_en_sel_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txdac_sw_en_sel_MASK                        (0x0020)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txdac_sw_en_sel_BIT                         (0x0020)

#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txdac_sw_en_LSB                             (4)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txdac_sw_en_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txdac_sw_en_MASK                            (0x0010)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txdac_sw_en_BIT                             (0x0010)

#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txcic_sw_en_sel_LSB                         (1)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txcic_sw_en_sel_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txcic_sw_en_sel_MASK                        (0x0002)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txcic_sw_en_sel_BIT                         (0x0002)

#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txcic_sw_en_LSB                             (0)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txcic_sw_en_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txcic_sw_en_MASK                            (0x0001)
#define MMRF_ABB_DIG0_DIG_CONAB_c2k_txcic_sw_en_BIT                             (0x0001)

#define MMRF_ABB_DIG0_DIG_CONAC_ckgen_bbtx_ckcnt_phase_cfg_LSB                  (8)
#define MMRF_ABB_DIG0_DIG_CONAC_ckgen_bbtx_ckcnt_phase_cfg_WIDTH                (5)
#define MMRF_ABB_DIG0_DIG_CONAC_ckgen_bbtx_ckcnt_phase_cfg_MASK                 (0x1F00)

#define MMRF_ABB_DIG0_DIG_CONAC_c2k_txcic_ck_dly_cfg_LSB                        (0)
#define MMRF_ABB_DIG0_DIG_CONAC_c2k_txcic_ck_dly_cfg_WIDTH                      (8)
#define MMRF_ABB_DIG0_DIG_CONAC_c2k_txcic_ck_dly_cfg_MASK                       (0x00FF)

#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_occur_LSB                       (15)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_occur_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_occur_MASK                      (0x8000)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_occur_BIT                       (0x8000)

#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_occur_dly_LSB                   (14)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_occur_dly_WIDTH                 (1)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_occur_dly_MASK                  (0x4000)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_occur_dly_BIT                   (0x4000)

#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_cic_gain_mode_LSB                    (9)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_cic_gain_mode_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_cic_gain_mode_MASK                   (0x0200)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_cic_gain_mode_BIT                    (0x0200)

#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_cic_gain_sel_LSB                (7)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_cic_gain_sel_WIDTH              (2)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_cic_gain_sel_MASK               (0x0180)

#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_clr_LSB                         (6)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_clr_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_clr_MASK                        (0x0040)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_clr_BIT                         (0x0040)

#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_en_LSB                          (5)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_en_WIDTH                        (1)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_en_MASK                         (0x0020)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_en_BIT                          (0x0020)

#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_dly_time_LSB                    (0)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_dly_time_WIDTH                  (5)
#define MMRF_ABB_DIG0_DIG_CONAD_c2k_pbbrx1_ovld_dly_time_MASK                   (0x001F)

#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_occur_LSB                       (15)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_occur_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_occur_MASK                      (0x8000)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_occur_BIT                       (0x8000)

#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_occur_dly_LSB                   (14)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_occur_dly_WIDTH                 (1)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_occur_dly_MASK                  (0x4000)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_occur_dly_BIT                   (0x4000)

#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_cic_gain_mode_LSB                    (9)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_cic_gain_mode_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_cic_gain_mode_MASK                   (0x0200)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_cic_gain_mode_BIT                    (0x0200)

#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_cic_gain_sel_LSB                (7)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_cic_gain_sel_WIDTH              (2)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_cic_gain_sel_MASK               (0x0180)

#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_clr_LSB                         (6)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_clr_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_clr_MASK                        (0x0040)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_clr_BIT                         (0x0040)

#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_en_LSB                          (5)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_en_WIDTH                        (1)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_en_MASK                         (0x0020)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_en_BIT                          (0x0020)

#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_dly_time_LSB                    (0)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_dly_time_WIDTH                  (5)
#define MMRF_ABB_DIG0_DIG_CONAE_c2k_dbbrx1_ovld_dly_time_MASK                   (0x001F)

#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_occur_LSB                       (15)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_occur_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_occur_MASK                      (0x8000)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_occur_BIT                       (0x8000)

#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_occur_dly_LSB                   (14)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_occur_dly_WIDTH                 (1)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_occur_dly_MASK                  (0x4000)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_occur_dly_BIT                   (0x4000)

#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_cic_gain_mode_LSB                    (9)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_cic_gain_mode_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_cic_gain_mode_MASK                   (0x0200)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_cic_gain_mode_BIT                    (0x0200)

#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_cic_gain_sel_LSB                (7)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_cic_gain_sel_WIDTH              (2)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_cic_gain_sel_MASK               (0x0180)

#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_clr_LSB                         (6)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_clr_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_clr_MASK                        (0x0040)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_clr_BIT                         (0x0040)

#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_en_LSB                          (5)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_en_WIDTH                        (1)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_en_MASK                         (0x0020)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_en_BIT                          (0x0020)

#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_dly_time_LSB                    (0)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_dly_time_WIDTH                  (5)
#define MMRF_ABB_DIG0_DIG_CONAF_c2k_pbbrx2_ovld_dly_time_MASK                   (0x001F)

#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_occur_LSB                       (15)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_occur_WIDTH                     (1)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_occur_MASK                      (0x8000)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_occur_BIT                       (0x8000)

#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_occur_dly_LSB                   (14)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_occur_dly_WIDTH                 (1)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_occur_dly_MASK                  (0x4000)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_occur_dly_BIT                   (0x4000)

#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_cic_gain_mode_LSB                    (9)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_cic_gain_mode_WIDTH                  (1)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_cic_gain_mode_MASK                   (0x0200)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_cic_gain_mode_BIT                    (0x0200)

#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_cic_gain_sel_LSB                (7)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_cic_gain_sel_WIDTH              (2)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_cic_gain_sel_MASK               (0x0180)

#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_clr_LSB                         (6)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_clr_WIDTH                       (1)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_clr_MASK                        (0x0040)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_clr_BIT                         (0x0040)

#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_en_LSB                          (5)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_en_WIDTH                        (1)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_en_MASK                         (0x0020)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_en_BIT                          (0x0020)

#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_dly_time_LSB                    (0)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_dly_time_WIDTH                  (5)
#define MMRF_ABB_DIG0_DIG_CONB0_c2k_dbbrx2_ovld_dly_time_MASK                   (0x001F)

#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_sc_normal_LSB               (14)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_sc_normal_WIDTH             (2)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_sc_normal_MASK              (0xC000)

#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_dc_normal_LSB               (12)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_dc_normal_WIDTH             (2)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_dc_normal_MASK              (0x3000)

#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_sc_ovld_LSB                 (10)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_sc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_sc_ovld_MASK                (0x0C00)

#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_dc_ovld_LSB                 (8)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_dc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_pbbrx1_inputsel_dc_ovld_MASK                (0x0300)

#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_sc_normal_LSB               (6)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_sc_normal_WIDTH             (2)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_sc_normal_MASK              (0x00C0)

#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_dc_normal_LSB               (4)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_dc_normal_WIDTH             (2)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_dc_normal_MASK              (0x0030)

#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_sc_ovld_LSB                 (2)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_sc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_sc_ovld_MASK                (0x000C)

#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_dc_ovld_LSB                 (0)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_dc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG0_DIG_CONB1_c2k_dbbrx1_inputsel_dc_ovld_MASK                (0x0003)

#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_sc_normal_LSB               (14)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_sc_normal_WIDTH             (2)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_sc_normal_MASK              (0xC000)

#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_dc_normal_LSB               (12)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_dc_normal_WIDTH             (2)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_dc_normal_MASK              (0x3000)

#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_sc_ovld_LSB                 (10)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_sc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_sc_ovld_MASK                (0x0C00)

#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_dc_ovld_LSB                 (8)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_dc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_pbbrx2_inputsel_dc_ovld_MASK                (0x0300)

#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_sc_normal_LSB               (6)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_sc_normal_WIDTH             (2)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_sc_normal_MASK              (0x00C0)

#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_dc_normal_LSB               (4)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_dc_normal_WIDTH             (2)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_dc_normal_MASK              (0x0030)

#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_sc_ovld_LSB                 (2)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_sc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_sc_ovld_MASK                (0x000C)

#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_dc_ovld_LSB                 (0)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_dc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG0_DIG_CONB2_c2k_dbbrx2_inputsel_dc_ovld_MASK                (0x0003)

#define MMRF_ABB_DIG0_DIG_CONB3_dc_comp_sw_mode_LSB                             (12)
#define MMRF_ABB_DIG0_DIG_CONB3_dc_comp_sw_mode_WIDTH                           (1)
#define MMRF_ABB_DIG0_DIG_CONB3_dc_comp_sw_mode_MASK                            (0x1000)
#define MMRF_ABB_DIG0_DIG_CONB3_dc_comp_sw_mode_BIT                             (0x1000)

#define MMRF_ABB_DIG0_DIG_CONB3_dc_comp_sw_tgl_LSB                              (8)
#define MMRF_ABB_DIG0_DIG_CONB3_dc_comp_sw_tgl_WIDTH                            (1)
#define MMRF_ABB_DIG0_DIG_CONB3_dc_comp_sw_tgl_MASK                             (0x0100)
#define MMRF_ABB_DIG0_DIG_CONB3_dc_comp_sw_tgl_BIT                              (0x0100)

#define MMRF_ABB_DIG0_DIG_CONB3_CRC_reset_toggle_LSB                            (4)
#define MMRF_ABB_DIG0_DIG_CONB3_CRC_reset_toggle_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONB3_CRC_reset_toggle_MASK                           (0x0010)
#define MMRF_ABB_DIG0_DIG_CONB3_CRC_reset_toggle_BIT                            (0x0010)

#define MMRF_ABB_DIG0_DIG_CONB3_CRC_done_LSB                                    (0)
#define MMRF_ABB_DIG0_DIG_CONB3_CRC_done_WIDTH                                  (1)
#define MMRF_ABB_DIG0_DIG_CONB3_CRC_done_MASK                                   (0x0001)
#define MMRF_ABB_DIG0_DIG_CONB3_CRC_done_BIT                                    (0x0001)

#define MMRF_ABB_DIG0_DIG_CONB4_dc_comp_i_sw_LSB                                (0)
#define MMRF_ABB_DIG0_DIG_CONB4_dc_comp_i_sw_WIDTH                              (15)
#define MMRF_ABB_DIG0_DIG_CONB4_dc_comp_i_sw_MASK                               (0x7FFF)

#define MMRF_ABB_DIG0_DIG_CONB5_dc_comp_q_sw_LSB                                (0)
#define MMRF_ABB_DIG0_DIG_CONB5_dc_comp_q_sw_WIDTH                              (15)
#define MMRF_ABB_DIG0_DIG_CONB5_dc_comp_q_sw_MASK                               (0x7FFF)

#define MMRF_ABB_DIG0_DIG_CONB6_CRC_start_I_data_LSB                            (0)
#define MMRF_ABB_DIG0_DIG_CONB6_CRC_start_I_data_WIDTH                          (15)
#define MMRF_ABB_DIG0_DIG_CONB6_CRC_start_I_data_MASK                           (0x7FFF)

#define MMRF_ABB_DIG0_DIG_CONB7_CRC_start_Q_data_LSB                            (0)
#define MMRF_ABB_DIG0_DIG_CONB7_CRC_start_Q_data_WIDTH                          (15)
#define MMRF_ABB_DIG0_DIG_CONB7_CRC_start_Q_data_MASK                           (0x7FFF)

#define MMRF_ABB_DIG0_DIG_CONB8_CRC_length_hi_LSB                               (0)
#define MMRF_ABB_DIG0_DIG_CONB8_CRC_length_hi_WIDTH                             (16)
#define MMRF_ABB_DIG0_DIG_CONB8_CRC_length_hi_MASK                              (0xFFFF)

#define MMRF_ABB_DIG0_DIG_CONB9_CRC_length_lo_LSB                               (0)
#define MMRF_ABB_DIG0_DIG_CONB9_CRC_length_lo_WIDTH                             (16)
#define MMRF_ABB_DIG0_DIG_CONB9_CRC_length_lo_MASK                              (0xFFFF)

#define MMRF_ABB_DIG0_DIG_CONBA_CRC_result_i_LSB                                (0)
#define MMRF_ABB_DIG0_DIG_CONBA_CRC_result_i_WIDTH                              (16)
#define MMRF_ABB_DIG0_DIG_CONBA_CRC_result_i_MASK                               (0xFFFF)

#define MMRF_ABB_DIG0_DIG_CONBB_CRC_result_q_LSB                                (0)
#define MMRF_ABB_DIG0_DIG_CONBB_CRC_result_q_WIDTH                              (16)
#define MMRF_ABB_DIG0_DIG_CONBB_CRC_result_q_MASK                               (0xFFFF)

#define MMRF_ABB_DIG0_DIG_CONBC_CRC_cnt_hi_LSB                                  (0)
#define MMRF_ABB_DIG0_DIG_CONBC_CRC_cnt_hi_WIDTH                                (16)
#define MMRF_ABB_DIG0_DIG_CONBC_CRC_cnt_hi_MASK                                 (0xFFFF)

#define MMRF_ABB_DIG0_DIG_CONBD_CRC_cnt_lo_LSB                                  (0)
#define MMRF_ABB_DIG0_DIG_CONBD_CRC_cnt_lo_WIDTH                                (16)
#define MMRF_ABB_DIG0_DIG_CONBD_CRC_cnt_lo_MASK                                 (0xFFFF)

#define MMRF_ABB_DIG0_DIG_CONBE_c2k_26m_en_LSB                                  (15)
#define MMRF_ABB_DIG0_DIG_CONBE_c2k_26m_en_WIDTH                                (1)
#define MMRF_ABB_DIG0_DIG_CONBE_c2k_26m_en_MASK                                 (0x8000)
#define MMRF_ABB_DIG0_DIG_CONBE_c2k_26m_en_BIT                                  (0x8000)

#define MMRF_ABB_DIG0_DIG_CONBE_c2k_rx1_out_sel_LSB                             (4)
#define MMRF_ABB_DIG0_DIG_CONBE_c2k_rx1_out_sel_WIDTH                           (4)
#define MMRF_ABB_DIG0_DIG_CONBE_c2k_rx1_out_sel_MASK                            (0x00F0)

#define MMRF_ABB_DIG0_DIG_CONBE_c2k_rx2_out_sel_LSB                             (0)
#define MMRF_ABB_DIG0_DIG_CONBE_c2k_rx2_out_sel_WIDTH                           (4)
#define MMRF_ABB_DIG0_DIG_CONBE_c2k_rx2_out_sel_MASK                            (0x000F)

#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_en_LSB                            (5)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_en_MASK                           (0x0020)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_en_BIT                            (0x0020)

#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_ck_inv_LSB                        (4)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_ck_inv_WIDTH                      (1)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_ck_inv_MASK                       (0x0010)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_ck_inv_BIT                        (0x0010)

#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_ck_out_sel_LSB                    (2)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_ck_out_sel_WIDTH                  (2)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_packer_ck_out_sel_MASK                   (0x000C)

#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_en_ctl_LSB                               (1)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_en_ctl_WIDTH                             (1)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_en_ctl_MASK                              (0x0002)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_en_ctl_BIT                               (0x0002)

#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_en_sw_LSB                                (0)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_en_sw_WIDTH                              (1)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_en_sw_MASK                               (0x0001)
#define MMRF_ABB_DIG0_DIG_CONBF_dpdadc_en_sw_BIT                                (0x0001)

#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx1_i_en_LSB                            (7)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx1_i_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx1_i_en_MASK                           (0x0080)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx1_i_en_BIT                            (0x0080)

#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx1_q_en_LSB                            (6)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx1_q_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx1_q_en_MASK                           (0x0040)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx1_q_en_BIT                            (0x0040)

#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx1_i_en_LSB                            (5)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx1_i_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx1_i_en_MASK                           (0x0020)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx1_i_en_BIT                            (0x0020)

#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx1_q_en_LSB                            (4)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx1_q_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx1_q_en_MASK                           (0x0010)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx1_q_en_BIT                            (0x0010)

#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx2_i_en_LSB                            (3)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx2_i_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx2_i_en_MASK                           (0x0008)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx2_i_en_BIT                            (0x0008)

#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx2_q_en_LSB                            (2)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx2_q_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx2_q_en_MASK                           (0x0004)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_pbbrx2_q_en_BIT                            (0x0004)

#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx2_i_en_LSB                            (1)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx2_i_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx2_i_en_MASK                           (0x0002)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx2_i_en_BIT                            (0x0002)

#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx2_q_en_LSB                            (0)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx2_q_en_WIDTH                          (1)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx2_q_en_MASK                           (0x0001)
#define MMRF_ABB_DIG0_DIG_CONA8_loop_dbbrx2_q_en_BIT                            (0x0001)


#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_txdac_en_LSB                              (8)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_txdac_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_txdac_en_MASK                             (0x0100)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_txdac_en_BIT                              (0x0100)

#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_txcic_en_LSB                              (7)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_txcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_txcic_en_MASK                             (0x0080)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_txcic_en_BIT                              (0x0080)

#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_etcic_en_LSB                              (6)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_etcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_etcic_en_MASK                             (0x0040)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_etcic_en_BIT                              (0x0040)

#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_rxadc_en_LSB                              (5)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_rxadc_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_rxadc_en_MASK                             (0x0020)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_rxadc_en_BIT                              (0x0020)

#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_rxcic_en_LSB                              (4)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_rxcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_rxcic_en_MASK                             (0x0010)
#define MMRF_ABB_DIG1_DIG_CON1_inv_mm_rxcic_en_BIT                              (0x0010)

#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_txdac_en_LSB                              (3)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_txdac_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_txdac_en_MASK                             (0x0008)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_txdac_en_BIT                              (0x0008)

#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_txcic_en_LSB                              (2)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_txcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_txcic_en_MASK                             (0x0004)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_txcic_en_BIT                              (0x0004)

#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_rxadc_en_LSB                              (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_rxadc_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_rxadc_en_MASK                             (0x0002)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_rxadc_en_BIT                              (0x0002)

#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_rxcic_en_LSB                              (0)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_rxcic_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_rxcic_en_MASK                             (0x0001)
#define MMRF_ABB_DIG1_DIG_CON1_inv_2g_rxcic_en_BIT                              (0x0001)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_datapath_sel_LSB                        (15)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_datapath_sel_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_datapath_sel_MASK                       (0x8000)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_datapath_sel_BIT                        (0x8000)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_test_pattern_sel_LSB                    (14)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_test_pattern_sel_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_test_pattern_sel_MASK                   (0x4000)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_test_pattern_sel_BIT                    (0x4000)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_comp_datapath_sel_LSB                   (13)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_comp_datapath_sel_WIDTH                 (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_comp_datapath_sel_MASK                  (0x2000)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_comp_datapath_sel_BIT                   (0x2000)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_comp_test_pattern_sel_LSB               (12)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_comp_test_pattern_sel_WIDTH             (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_comp_test_pattern_sel_MASK              (0x1000)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_c2k_comp_test_pattern_sel_BIT               (0x1000)

#define MMRF_ABB_DIG1_DIG_CON2_BBET_mm_datapath_sel_LSB                         (11)
#define MMRF_ABB_DIG1_DIG_CON2_BBET_mm_datapath_sel_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBET_mm_datapath_sel_MASK                        (0x0800)
#define MMRF_ABB_DIG1_DIG_CON2_BBET_mm_datapath_sel_BIT                         (0x0800)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_q_path_test_pattern_sel_LSB                 (10)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_q_path_test_pattern_sel_WIDTH               (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_q_path_test_pattern_sel_MASK                (0x0400)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_q_path_test_pattern_sel_BIT                 (0x0400)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_datapath_sel_LSB                            (9)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_datapath_sel_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_datapath_sel_MASK                           (0x0200)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_datapath_sel_BIT                            (0x0200)

#define MMRF_ABB_DIG1_DIG_CON2_BBET_datapath_sel_LSB                            (8)
#define MMRF_ABB_DIG1_DIG_CON2_BBET_datapath_sel_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBET_datapath_sel_MASK                           (0x0100)
#define MMRF_ABB_DIG1_DIG_CON2_BBET_datapath_sel_BIT                            (0x0100)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_mm_datapath_sel_LSB                         (5)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_mm_datapath_sel_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_mm_datapath_sel_MASK                        (0x0020)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_mm_datapath_sel_BIT                         (0x0020)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_mm_test_pattern_sel_LSB                     (4)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_mm_test_pattern_sel_WIDTH                   (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_mm_test_pattern_sel_MASK                    (0x0010)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_mm_test_pattern_sel_BIT                     (0x0010)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_2g_datapath_sel_LSB                         (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_2g_datapath_sel_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_2g_datapath_sel_MASK                        (0x0002)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_2g_datapath_sel_BIT                         (0x0002)

#define MMRF_ABB_DIG1_DIG_CON2_BBTX_2g_test_pattern_sel_LSB                     (0)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_2g_test_pattern_sel_WIDTH                   (1)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_2g_test_pattern_sel_MASK                    (0x0001)
#define MMRF_ABB_DIG1_DIG_CON2_BBTX_2g_test_pattern_sel_BIT                     (0x0001)

#define MMRF_ABB_DIG1_DIG_CON3_apc_c2k_sel_LSB                                  (0)
#define MMRF_ABB_DIG1_DIG_CON3_apc_c2k_sel_WIDTH                                (2)
#define MMRF_ABB_DIG1_DIG_CON3_apc_c2k_sel_MASK                                 (0x0003)

#define MMRF_ABB_DIG1_DIG_CON4_apc_2g_sel_LSB                                   (0)
#define MMRF_ABB_DIG1_DIG_CON4_apc_2g_sel_WIDTH                                 (2)
#define MMRF_ABB_DIG1_DIG_CON4_apc_2g_sel_MASK                                  (0x0003)

#define MMRF_ABB_DIG1_DIG_CON5_apc_mm_sel_LSB                                   (0)
#define MMRF_ABB_DIG1_DIG_CON5_apc_mm_sel_WIDTH                                 (2)
#define MMRF_ABB_DIG1_DIG_CON5_apc_mm_sel_MASK                                  (0x0003)

#define MMRF_ABB_DIG1_DIG_CON6_apc1_swrst_b_LSB                                 (15)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_swrst_b_WIDTH                               (1)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_swrst_b_MASK                                (0x8000)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_swrst_b_BIT                                 (0x8000)

#define MMRF_ABB_DIG1_DIG_CON6_apc1_path_sel_LSB                                (12)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_path_sel_WIDTH                              (2)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_path_sel_MASK                               (0x3000)

#define MMRF_ABB_DIG1_DIG_CON6_apc1_pwdb_LSB                                    (11)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_pwdb_WIDTH                                  (1)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_pwdb_MASK                                   (0x0800)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_pwdb_BIT                                    (0x0800)

#define MMRF_ABB_DIG1_DIG_CON6_apc1_tg_LSB                                      (10)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_tg_WIDTH                                    (1)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_tg_MASK                                     (0x0400)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_tg_BIT                                      (0x0400)

#define MMRF_ABB_DIG1_DIG_CON6_apc1_bus_LSB                                     (0)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_bus_WIDTH                                   (10)
#define MMRF_ABB_DIG1_DIG_CON6_apc1_bus_MASK                                    (0x03FF)

#define MMRF_ABB_DIG1_DIG_CON7_apc1_status_LSB                                  (0)
#define MMRF_ABB_DIG1_DIG_CON7_apc1_status_WIDTH                                (16)
#define MMRF_ABB_DIG1_DIG_CON7_apc1_status_MASK                                 (0xFFFF)

#define MMRF_ABB_DIG1_DIG_CON8_apc2_swrst_b_LSB                                 (15)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_swrst_b_WIDTH                               (1)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_swrst_b_MASK                                (0x8000)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_swrst_b_BIT                                 (0x8000)

#define MMRF_ABB_DIG1_DIG_CON8_apc2_path_sel_LSB                                (12)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_path_sel_WIDTH                              (2)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_path_sel_MASK                               (0x3000)

#define MMRF_ABB_DIG1_DIG_CON8_apc2_pwdb_LSB                                    (11)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_pwdb_WIDTH                                  (1)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_pwdb_MASK                                   (0x0800)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_pwdb_BIT                                    (0x0800)

#define MMRF_ABB_DIG1_DIG_CON8_apc2_tg_LSB                                      (10)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_tg_WIDTH                                    (1)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_tg_MASK                                     (0x0400)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_tg_BIT                                      (0x0400)

#define MMRF_ABB_DIG1_DIG_CON8_apc2_bus_LSB                                     (0)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_bus_WIDTH                                   (10)
#define MMRF_ABB_DIG1_DIG_CON8_apc2_bus_MASK                                    (0x03FF)

#define MMRF_ABB_DIG1_DIG_CON9_apc2_status_LSB                                  (0)
#define MMRF_ABB_DIG1_DIG_CON9_apc2_status_WIDTH                                (16)
#define MMRF_ABB_DIG1_DIG_CON9_apc2_status_MASK                                 (0xFFFF)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_adc_en_ctl_LSB                       (15)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_adc_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_adc_en_ctl_MASK                      (0x8000)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_adc_en_ctl_BIT                       (0x8000)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_adc_en_ctl_LSB                       (14)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_adc_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_adc_en_ctl_MASK                      (0x4000)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_adc_en_ctl_BIT                       (0x4000)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_adc_en_ctl_LSB                       (13)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_adc_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_adc_en_ctl_MASK                      (0x2000)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_adc_en_ctl_BIT                       (0x2000)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_adc_en_ctl_LSB                       (12)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_adc_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_adc_en_ctl_MASK                      (0x1000)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_adc_en_ctl_BIT                       (0x1000)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_cic_en_ctl_LSB                       (11)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_cic_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_cic_en_ctl_MASK                      (0x0800)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_cic_en_ctl_BIT                       (0x0800)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_cic_en_ctl_LSB                       (10)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_cic_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_cic_en_ctl_MASK                      (0x0400)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_cic_en_ctl_BIT                       (0x0400)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_cic_en_ctl_LSB                       (9)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_cic_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_cic_en_ctl_MASK                      (0x0200)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_cic_en_ctl_BIT                       (0x0200)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_cic_en_ctl_LSB                       (8)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_cic_en_ctl_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_cic_en_ctl_MASK                      (0x0100)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_cic_en_ctl_BIT                       (0x0100)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_adc_sw_en_LSB                        (7)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_adc_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_adc_sw_en_MASK                       (0x0080)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_adc_sw_en_BIT                        (0x0080)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_adc_sw_en_LSB                        (6)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_adc_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_adc_sw_en_MASK                       (0x0040)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_adc_sw_en_BIT                        (0x0040)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_adc_sw_en_LSB                        (5)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_adc_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_adc_sw_en_MASK                       (0x0020)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_adc_sw_en_BIT                        (0x0020)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_adc_sw_en_LSB                        (4)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_adc_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_adc_sw_en_MASK                       (0x0010)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_adc_sw_en_BIT                        (0x0010)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_cic_sw_en_LSB                        (3)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_cic_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_cic_sw_en_MASK                       (0x0008)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx1_cic_sw_en_BIT                        (0x0008)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_cic_sw_en_LSB                        (2)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_cic_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_cic_sw_en_MASK                       (0x0004)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx1_cic_sw_en_BIT                        (0x0004)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_cic_sw_en_LSB                        (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_cic_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_cic_sw_en_MASK                       (0x0002)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_pbbrx2_cic_sw_en_BIT                        (0x0002)

#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_cic_sw_en_LSB                        (0)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_cic_sw_en_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_cic_sw_en_MASK                       (0x0001)
#define MMRF_ABB_DIG1_DIG_CONA_bbrx_dbbrx2_cic_sw_en_BIT                        (0x0001)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_cic_ck_tgl_en_LSB                           (14)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_cic_ck_tgl_en_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_cic_ck_tgl_en_MASK                          (0x4000)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_cic_ck_tgl_en_BIT                           (0x4000)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_tgl_en_ctl_LSB                           (13)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_tgl_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_tgl_en_ctl_MASK                          (0x2000)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_tgl_en_ctl_BIT                           (0x2000)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_dac_en_ctl_LSB                           (12)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_dac_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_dac_en_ctl_MASK                          (0x1000)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_dac_en_ctl_BIT                           (0x1000)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_cic_en_ctl_LSB                           (11)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_cic_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_cic_en_ctl_MASK                          (0x0800)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_cic_en_ctl_BIT                           (0x0800)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_dac_en_ctl_LSB                           (10)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_dac_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_dac_en_ctl_MASK                          (0x0400)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_dac_en_ctl_BIT                           (0x0400)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_cic_en_ctl_LSB                           (9)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_cic_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_cic_en_ctl_MASK                          (0x0200)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_cic_en_ctl_BIT                           (0x0200)

#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_dac_en_ctl_LSB                           (8)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_dac_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_dac_en_ctl_MASK                          (0x0100)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_dac_en_ctl_BIT                           (0x0100)

#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_cic_en_ctl_LSB                           (7)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_cic_en_ctl_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_cic_en_ctl_MASK                          (0x0080)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_cic_en_ctl_BIT                           (0x0080)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_tgl_sw_en_LSB                            (6)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_tgl_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_tgl_sw_en_MASK                           (0x0040)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_tgl_sw_en_BIT                            (0x0040)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_dac_sw_en_LSB                            (5)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_dac_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_dac_sw_en_MASK                           (0x0020)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_dac_sw_en_BIT                            (0x0020)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_cic_sw_en_LSB                            (4)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_cic_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_cic_sw_en_MASK                           (0x0010)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_2g_cic_sw_en_BIT                            (0x0010)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_dac_sw_en_LSB                            (3)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_dac_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_dac_sw_en_MASK                           (0x0008)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_dac_sw_en_BIT                            (0x0008)

#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_cic_sw_en_LSB                            (2)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_cic_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_cic_sw_en_MASK                           (0x0004)
#define MMRF_ABB_DIG1_DIG_CONB_bbtx_mm_cic_sw_en_BIT                            (0x0004)

#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_dac_sw_en_LSB                            (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_dac_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_dac_sw_en_MASK                           (0x0002)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_dac_sw_en_BIT                            (0x0002)

#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_cic_sw_en_LSB                            (0)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_cic_sw_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_cic_sw_en_MASK                           (0x0001)
#define MMRF_ABB_DIG1_DIG_CONB_bbet_mm_cic_sw_en_BIT                            (0x0001)

#define MMRF_ABB_DIG1_DIG_COND_ckgen_mm_bbtx_et_enable_LSB                      (0)
#define MMRF_ABB_DIG1_DIG_COND_ckgen_mm_bbtx_et_enable_WIDTH                    (1)
#define MMRF_ABB_DIG1_DIG_COND_ckgen_mm_bbtx_et_enable_MASK                     (0x0001)
#define MMRF_ABB_DIG1_DIG_COND_ckgen_mm_bbtx_et_enable_BIT                      (0x0001)

#define MMRF_ABB_DIG1_DIG_CONE_ckgen_pbbrx1_ckcnt_phase_cfg_LSB                 (5)
#define MMRF_ABB_DIG1_DIG_CONE_ckgen_pbbrx1_ckcnt_phase_cfg_WIDTH               (5)
#define MMRF_ABB_DIG1_DIG_CONE_ckgen_pbbrx1_ckcnt_phase_cfg_MASK                (0x03E0)

#define MMRF_ABB_DIG1_DIG_CONE_ckgen_dbbrx1_ckcnt_phase_cfg_LSB                 (0)
#define MMRF_ABB_DIG1_DIG_CONE_ckgen_dbbrx1_ckcnt_phase_cfg_WIDTH               (5)
#define MMRF_ABB_DIG1_DIG_CONE_ckgen_dbbrx1_ckcnt_phase_cfg_MASK                (0x001F)

#define MMRF_ABB_DIG1_DIG_CONF_ckgen_pbbrx2_ckcnt_phase_cfg_LSB                 (5)
#define MMRF_ABB_DIG1_DIG_CONF_ckgen_pbbrx2_ckcnt_phase_cfg_WIDTH               (5)
#define MMRF_ABB_DIG1_DIG_CONF_ckgen_pbbrx2_ckcnt_phase_cfg_MASK                (0x03E0)

#define MMRF_ABB_DIG1_DIG_CONF_ckgen_dbbrx2_ckcnt_phase_cfg_LSB                 (0)
#define MMRF_ABB_DIG1_DIG_CONF_ckgen_dbbrx2_ckcnt_phase_cfg_WIDTH               (5)
#define MMRF_ABB_DIG1_DIG_CONF_ckgen_dbbrx2_ckcnt_phase_cfg_MASK                (0x001F)

#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_ctrl_LSB                (15)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_ctrl_MASK               (0x8000)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_ctrl_BIT                (0x8000)

#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_ctrl_LSB                (14)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_ctrl_MASK               (0x4000)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_ctrl_BIT                (0x4000)

#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_sw_LSB                  (11)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_adc_reg_sel_sw_MASK                 (0x3800)

#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_sw_LSB                  (8)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_pbbrx1_wtl_reg_sel_sw_MASK                 (0x0700)

#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_ctrl_LSB                (7)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_ctrl_MASK               (0x0080)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_ctrl_BIT                (0x0080)

#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_ctrl_LSB                (6)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_ctrl_MASK               (0x0040)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_ctrl_BIT                (0x0040)

#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_sw_LSB                  (3)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_adc_reg_sel_sw_MASK                 (0x0038)

#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_sw_LSB                  (0)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG1_DIG_CON10_bbrx_dbbrx1_wtl_reg_sel_sw_MASK                 (0x0007)

#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_ctrl_LSB                (15)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_ctrl_MASK               (0x8000)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_ctrl_BIT                (0x8000)

#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_ctrl_LSB                (14)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_ctrl_MASK               (0x4000)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_ctrl_BIT                (0x4000)

#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_sw_LSB                  (11)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_adc_reg_sel_sw_MASK                 (0x3800)

#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_sw_LSB                  (8)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_pbbrx2_wtl_reg_sel_sw_MASK                 (0x0700)

#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_ctrl_LSB                (7)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_ctrl_MASK               (0x0080)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_ctrl_BIT                (0x0080)

#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_ctrl_LSB                (6)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_ctrl_WIDTH              (1)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_ctrl_MASK               (0x0040)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_ctrl_BIT                (0x0040)

#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_sw_LSB                  (3)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_adc_reg_sel_sw_MASK                 (0x0038)

#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_sw_LSB                  (0)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_sw_WIDTH                (3)
#define MMRF_ABB_DIG1_DIG_CON11_bbrx_dbbrx2_wtl_reg_sel_sw_MASK                 (0x0007)

#define MMRF_ABB_DIG1_DIG_CON12_pbbrx1_wbuf_w_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON12_pbbrx1_wbuf_w_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON12_pbbrx1_wbuf_w_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON12_pbbrx1_wbuf_w_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON12_pbbrx1_wbuf_w_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON12_pbbrx1_wbuf_w_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON13_pbbrx1_wbuf_w_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON13_pbbrx1_wbuf_w_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON13_pbbrx1_wbuf_w_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON14_pbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON14_pbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON14_pbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON14_pbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON15_pbbrx1_wbuf_w_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON15_pbbrx1_wbuf_w_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON15_pbbrx1_wbuf_w_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON15_pbbrx1_wbuf_w_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON15_pbbrx1_wbuf_w_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON15_pbbrx1_wbuf_w_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON16_pbbrx1_wbuf_w_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON16_pbbrx1_wbuf_w_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON16_pbbrx1_wbuf_w_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON17_pbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON17_pbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON17_pbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON17_pbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON18_pbbrx1_wbuf_w_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON18_pbbrx1_wbuf_w_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON18_pbbrx1_wbuf_w_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON18_pbbrx1_wbuf_w_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON18_pbbrx1_wbuf_w_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON18_pbbrx1_wbuf_w_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON19_pbbrx1_wbuf_w_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON19_pbbrx1_wbuf_w_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON19_pbbrx1_wbuf_w_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON1A_pbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON1B_pbbrx1_wbuf_t_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON1B_pbbrx1_wbuf_t_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON1B_pbbrx1_wbuf_t_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON1B_pbbrx1_wbuf_t_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON1B_pbbrx1_wbuf_t_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON1B_pbbrx1_wbuf_t_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON1C_pbbrx1_wbuf_t_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON1C_pbbrx1_wbuf_t_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON1C_pbbrx1_wbuf_t_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON1D_pbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON1E_pbbrx1_wbuf_t_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON1E_pbbrx1_wbuf_t_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON1E_pbbrx1_wbuf_t_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON1E_pbbrx1_wbuf_t_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON1E_pbbrx1_wbuf_t_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON1E_pbbrx1_wbuf_t_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON1F_pbbrx1_wbuf_t_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON1F_pbbrx1_wbuf_t_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON1F_pbbrx1_wbuf_t_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON20_pbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON20_pbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON20_pbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON20_pbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON21_pbbrx1_wbuf_t_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON21_pbbrx1_wbuf_t_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON21_pbbrx1_wbuf_t_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON21_pbbrx1_wbuf_t_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON21_pbbrx1_wbuf_t_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON21_pbbrx1_wbuf_t_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON22_pbbrx1_wbuf_t_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON22_pbbrx1_wbuf_t_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON22_pbbrx1_wbuf_t_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON23_pbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON23_pbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON23_pbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON23_pbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON24_pbbrx1_wbuf_l_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON24_pbbrx1_wbuf_l_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON24_pbbrx1_wbuf_l_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON24_pbbrx1_wbuf_l_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON24_pbbrx1_wbuf_l_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON24_pbbrx1_wbuf_l_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON25_pbbrx1_wbuf_l_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON25_pbbrx1_wbuf_l_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON25_pbbrx1_wbuf_l_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON26_pbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON26_pbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON26_pbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON26_pbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON27_pbbrx1_wbuf_l_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON27_pbbrx1_wbuf_l_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON27_pbbrx1_wbuf_l_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON27_pbbrx1_wbuf_l_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON27_pbbrx1_wbuf_l_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON27_pbbrx1_wbuf_l_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON28_pbbrx1_wbuf_l_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON28_pbbrx1_wbuf_l_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON28_pbbrx1_wbuf_l_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON29_pbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON29_pbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON29_pbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON29_pbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON2A_pbbrx1_wbuf_l_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON2A_pbbrx1_wbuf_l_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON2A_pbbrx1_wbuf_l_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON2A_pbbrx1_wbuf_l_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON2A_pbbrx1_wbuf_l_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON2A_pbbrx1_wbuf_l_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON2B_pbbrx1_wbuf_l_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON2B_pbbrx1_wbuf_l_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON2B_pbbrx1_wbuf_l_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON2C_pbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON2D_dbbrx1_wbuf_w_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON2D_dbbrx1_wbuf_w_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON2D_dbbrx1_wbuf_w_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON2D_dbbrx1_wbuf_w_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON2D_dbbrx1_wbuf_w_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON2D_dbbrx1_wbuf_w_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON2E_dbbrx1_wbuf_w_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON2E_dbbrx1_wbuf_w_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON2E_dbbrx1_wbuf_w_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON2F_dbbrx1_wbuf_w_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON30_dbbrx1_wbuf_w_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON30_dbbrx1_wbuf_w_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON30_dbbrx1_wbuf_w_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON30_dbbrx1_wbuf_w_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON30_dbbrx1_wbuf_w_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON30_dbbrx1_wbuf_w_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON31_dbbrx1_wbuf_w_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON31_dbbrx1_wbuf_w_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON31_dbbrx1_wbuf_w_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON32_dbbrx1_wbuf_w_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON32_dbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON32_dbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON32_dbbrx1_wbuf_w_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON33_dbbrx1_wbuf_w_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON33_dbbrx1_wbuf_w_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON33_dbbrx1_wbuf_w_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON33_dbbrx1_wbuf_w_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON33_dbbrx1_wbuf_w_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON33_dbbrx1_wbuf_w_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON34_dbbrx1_wbuf_w_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON34_dbbrx1_wbuf_w_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON34_dbbrx1_wbuf_w_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON35_dbbrx1_wbuf_w_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON35_dbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON35_dbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON35_dbbrx1_wbuf_w_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON36_dbbrx1_wbuf_t_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON36_dbbrx1_wbuf_t_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON36_dbbrx1_wbuf_t_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON36_dbbrx1_wbuf_t_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON36_dbbrx1_wbuf_t_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON36_dbbrx1_wbuf_t_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON37_dbbrx1_wbuf_t_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON37_dbbrx1_wbuf_t_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON37_dbbrx1_wbuf_t_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON38_dbbrx1_wbuf_t_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON38_dbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON38_dbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON38_dbbrx1_wbuf_t_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON39_dbbrx1_wbuf_t_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON39_dbbrx1_wbuf_t_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON39_dbbrx1_wbuf_t_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON39_dbbrx1_wbuf_t_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON39_dbbrx1_wbuf_t_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON39_dbbrx1_wbuf_t_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON3A_dbbrx1_wbuf_t_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON3A_dbbrx1_wbuf_t_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON3A_dbbrx1_wbuf_t_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON3B_dbbrx1_wbuf_t_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON3C_dbbrx1_wbuf_t_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON3C_dbbrx1_wbuf_t_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON3C_dbbrx1_wbuf_t_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON3C_dbbrx1_wbuf_t_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON3C_dbbrx1_wbuf_t_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON3C_dbbrx1_wbuf_t_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON3D_dbbrx1_wbuf_t_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON3D_dbbrx1_wbuf_t_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON3D_dbbrx1_wbuf_t_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON3E_dbbrx1_wbuf_t_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON3F_dbbrx1_wbuf_l_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON3F_dbbrx1_wbuf_l_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON3F_dbbrx1_wbuf_l_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON3F_dbbrx1_wbuf_l_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON3F_dbbrx1_wbuf_l_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON3F_dbbrx1_wbuf_l_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON40_dbbrx1_wbuf_l_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON40_dbbrx1_wbuf_l_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON40_dbbrx1_wbuf_l_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON41_dbbrx1_wbuf_l_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON41_dbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON41_dbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON41_dbbrx1_wbuf_l_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON42_dbbrx1_wbuf_l_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON42_dbbrx1_wbuf_l_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON42_dbbrx1_wbuf_l_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON42_dbbrx1_wbuf_l_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON42_dbbrx1_wbuf_l_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON42_dbbrx1_wbuf_l_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON43_dbbrx1_wbuf_l_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON43_dbbrx1_wbuf_l_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON43_dbbrx1_wbuf_l_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON44_dbbrx1_wbuf_l_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON44_dbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON44_dbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON44_dbbrx1_wbuf_l_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON45_dbbrx1_wbuf_l_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON45_dbbrx1_wbuf_l_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON45_dbbrx1_wbuf_l_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON45_dbbrx1_wbuf_l_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON45_dbbrx1_wbuf_l_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON45_dbbrx1_wbuf_l_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON46_dbbrx1_wbuf_l_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON46_dbbrx1_wbuf_l_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON46_dbbrx1_wbuf_l_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON47_dbbrx1_wbuf_l_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON47_dbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON47_dbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON47_dbbrx1_wbuf_l_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON48_pbbrx2_wbuf_w_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON48_pbbrx2_wbuf_w_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON48_pbbrx2_wbuf_w_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON48_pbbrx2_wbuf_w_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON48_pbbrx2_wbuf_w_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON48_pbbrx2_wbuf_w_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON49_pbbrx2_wbuf_w_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON49_pbbrx2_wbuf_w_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON49_pbbrx2_wbuf_w_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON4A_pbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON4B_pbbrx2_wbuf_w_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON4B_pbbrx2_wbuf_w_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON4B_pbbrx2_wbuf_w_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON4B_pbbrx2_wbuf_w_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON4B_pbbrx2_wbuf_w_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON4B_pbbrx2_wbuf_w_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON4C_pbbrx2_wbuf_w_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON4C_pbbrx2_wbuf_w_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON4C_pbbrx2_wbuf_w_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON4D_pbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON4E_pbbrx2_wbuf_w_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON4E_pbbrx2_wbuf_w_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON4E_pbbrx2_wbuf_w_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON4E_pbbrx2_wbuf_w_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON4E_pbbrx2_wbuf_w_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON4E_pbbrx2_wbuf_w_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON4F_pbbrx2_wbuf_w_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON4F_pbbrx2_wbuf_w_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON4F_pbbrx2_wbuf_w_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON50_pbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON50_pbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON50_pbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON50_pbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON51_pbbrx2_wbuf_t_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON51_pbbrx2_wbuf_t_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON51_pbbrx2_wbuf_t_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON51_pbbrx2_wbuf_t_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON51_pbbrx2_wbuf_t_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON51_pbbrx2_wbuf_t_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON52_pbbrx2_wbuf_t_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON52_pbbrx2_wbuf_t_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON52_pbbrx2_wbuf_t_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON53_pbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON53_pbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON53_pbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON53_pbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON54_pbbrx2_wbuf_t_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON54_pbbrx2_wbuf_t_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON54_pbbrx2_wbuf_t_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON54_pbbrx2_wbuf_t_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON54_pbbrx2_wbuf_t_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON54_pbbrx2_wbuf_t_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON55_pbbrx2_wbuf_t_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON55_pbbrx2_wbuf_t_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON55_pbbrx2_wbuf_t_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON56_pbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON56_pbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON56_pbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON56_pbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON57_pbbrx2_wbuf_t_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON57_pbbrx2_wbuf_t_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON57_pbbrx2_wbuf_t_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON57_pbbrx2_wbuf_t_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON57_pbbrx2_wbuf_t_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON57_pbbrx2_wbuf_t_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON58_pbbrx2_wbuf_t_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON58_pbbrx2_wbuf_t_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON58_pbbrx2_wbuf_t_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON59_pbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON59_pbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON59_pbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON59_pbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON5A_pbbrx2_wbuf_l_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON5A_pbbrx2_wbuf_l_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON5A_pbbrx2_wbuf_l_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON5A_pbbrx2_wbuf_l_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON5A_pbbrx2_wbuf_l_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON5A_pbbrx2_wbuf_l_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON5B_pbbrx2_wbuf_l_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON5B_pbbrx2_wbuf_l_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON5B_pbbrx2_wbuf_l_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON5C_pbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON5D_pbbrx2_wbuf_l_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON5D_pbbrx2_wbuf_l_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON5D_pbbrx2_wbuf_l_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON5D_pbbrx2_wbuf_l_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON5D_pbbrx2_wbuf_l_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON5D_pbbrx2_wbuf_l_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON5E_pbbrx2_wbuf_l_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON5E_pbbrx2_wbuf_l_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON5E_pbbrx2_wbuf_l_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON5F_pbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON60_pbbrx2_wbuf_l_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON60_pbbrx2_wbuf_l_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON60_pbbrx2_wbuf_l_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON60_pbbrx2_wbuf_l_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON60_pbbrx2_wbuf_l_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON60_pbbrx2_wbuf_l_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON61_pbbrx2_wbuf_l_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON61_pbbrx2_wbuf_l_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON61_pbbrx2_wbuf_l_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON62_pbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON62_pbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON62_pbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON62_pbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON63_dbbrx2_wbuf_w_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON63_dbbrx2_wbuf_w_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON63_dbbrx2_wbuf_w_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON63_dbbrx2_wbuf_w_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON63_dbbrx2_wbuf_w_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON63_dbbrx2_wbuf_w_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON64_dbbrx2_wbuf_w_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON64_dbbrx2_wbuf_w_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON64_dbbrx2_wbuf_w_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON65_dbbrx2_wbuf_w_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON65_dbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON65_dbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON65_dbbrx2_wbuf_w_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON66_dbbrx2_wbuf_w_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON66_dbbrx2_wbuf_w_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON66_dbbrx2_wbuf_w_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON66_dbbrx2_wbuf_w_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON66_dbbrx2_wbuf_w_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON66_dbbrx2_wbuf_w_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON67_dbbrx2_wbuf_w_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON67_dbbrx2_wbuf_w_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON67_dbbrx2_wbuf_w_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON68_dbbrx2_wbuf_w_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON68_dbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON68_dbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON68_dbbrx2_wbuf_w_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON69_dbbrx2_wbuf_w_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON69_dbbrx2_wbuf_w_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON69_dbbrx2_wbuf_w_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON69_dbbrx2_wbuf_w_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON69_dbbrx2_wbuf_w_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON69_dbbrx2_wbuf_w_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON6A_dbbrx2_wbuf_w_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON6A_dbbrx2_wbuf_w_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON6A_dbbrx2_wbuf_w_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON6B_dbbrx2_wbuf_w_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON6C_dbbrx2_wbuf_t_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON6C_dbbrx2_wbuf_t_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON6C_dbbrx2_wbuf_t_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON6C_dbbrx2_wbuf_t_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON6C_dbbrx2_wbuf_t_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON6C_dbbrx2_wbuf_t_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON6D_dbbrx2_wbuf_t_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON6D_dbbrx2_wbuf_t_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON6D_dbbrx2_wbuf_t_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON6E_dbbrx2_wbuf_t_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON6F_dbbrx2_wbuf_t_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON6F_dbbrx2_wbuf_t_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON6F_dbbrx2_wbuf_t_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON6F_dbbrx2_wbuf_t_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON6F_dbbrx2_wbuf_t_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON6F_dbbrx2_wbuf_t_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON70_dbbrx2_wbuf_t_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON70_dbbrx2_wbuf_t_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON70_dbbrx2_wbuf_t_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON71_dbbrx2_wbuf_t_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON71_dbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON71_dbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON71_dbbrx2_wbuf_t_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON72_dbbrx2_wbuf_t_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON72_dbbrx2_wbuf_t_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON72_dbbrx2_wbuf_t_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON72_dbbrx2_wbuf_t_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON72_dbbrx2_wbuf_t_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON72_dbbrx2_wbuf_t_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON73_dbbrx2_wbuf_t_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON73_dbbrx2_wbuf_t_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON73_dbbrx2_wbuf_t_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON74_dbbrx2_wbuf_t_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON74_dbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON74_dbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON74_dbbrx2_wbuf_t_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON75_dbbrx2_wbuf_l_g0_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON75_dbbrx2_wbuf_l_g0_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON75_dbbrx2_wbuf_l_g0_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON75_dbbrx2_wbuf_l_g0_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON75_dbbrx2_wbuf_l_g0_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON75_dbbrx2_wbuf_l_g0_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON76_dbbrx2_wbuf_l_g0_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON76_dbbrx2_wbuf_l_g0_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON76_dbbrx2_wbuf_l_g0_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON77_dbbrx2_wbuf_l_g0_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON77_dbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON77_dbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON77_dbbrx2_wbuf_l_g0_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON78_dbbrx2_wbuf_l_g1_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON78_dbbrx2_wbuf_l_g1_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON78_dbbrx2_wbuf_l_g1_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON78_dbbrx2_wbuf_l_g1_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON78_dbbrx2_wbuf_l_g1_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON78_dbbrx2_wbuf_l_g1_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON79_dbbrx2_wbuf_l_g1_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON79_dbbrx2_wbuf_l_g1_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON79_dbbrx2_wbuf_l_g1_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON7A_dbbrx2_wbuf_l_g1_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON7B_dbbrx2_wbuf_l_g2_rxdfe_mode_sel_LSB             (12)
#define MMRF_ABB_DIG1_DIG_CON7B_dbbrx2_wbuf_l_g2_rxdfe_mode_sel_WIDTH           (2)
#define MMRF_ABB_DIG1_DIG_CON7B_dbbrx2_wbuf_l_g2_rxdfe_mode_sel_MASK            (0x3000)

#define MMRF_ABB_DIG1_DIG_CON7B_dbbrx2_wbuf_l_g2_rxadc_rate_sel_LSB             (0)
#define MMRF_ABB_DIG1_DIG_CON7B_dbbrx2_wbuf_l_g2_rxadc_rate_sel_WIDTH           (12)
#define MMRF_ABB_DIG1_DIG_CON7B_dbbrx2_wbuf_l_g2_rxadc_rate_sel_MASK            (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON7C_dbbrx2_wbuf_l_g2_cic_out_rate_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON7C_dbbrx2_wbuf_l_g2_cic_out_rate_sel_WIDTH         (12)
#define MMRF_ABB_DIG1_DIG_CON7C_dbbrx2_wbuf_l_g2_cic_out_rate_sel_MASK          (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_LSB            (6)
#define MMRF_ABB_DIG1_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_WIDTH          (2)
#define MMRF_ABB_DIG1_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_r_sel_MASK           (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_LSB            (3)
#define MMRF_ABB_DIG1_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_WIDTH          (3)
#define MMRF_ABB_DIG1_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_fdd_p_c_sel_MASK           (0x0038)

#define MMRF_ABB_DIG1_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_LSB           (0)
#define MMRF_ABB_DIG1_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_WIDTH         (3)
#define MMRF_ABB_DIG1_DIG_CON7D_dbbrx2_wbuf_l_g2_cic_lte_p_zp_sel_MASK          (0x0007)

#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_occur_LSB                           (15)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_occur_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_occur_MASK                          (0x8000)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_occur_BIT                           (0x8000)

#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_occur_dly_LSB                       (14)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_occur_dly_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_occur_dly_MASK                      (0x4000)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_occur_dly_BIT                       (0x4000)

#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_dfe_ovld_clr_tgl_LSB                     (13)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_dfe_ovld_clr_tgl_WIDTH                   (1)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_dfe_ovld_clr_tgl_MASK                    (0x2000)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_dfe_ovld_clr_tgl_BIT                     (0x2000)

#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_cic_gain_mode_LSB                        (9)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_cic_gain_mode_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_cic_gain_mode_MASK                       (0x0200)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_cic_gain_mode_BIT                        (0x0200)

#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_cic_gain_sel_LSB                         (7)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_cic_gain_sel_WIDTH                       (2)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_cic_gain_sel_MASK                        (0x0180)

#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_clr_LSB                             (6)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_clr_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_clr_MASK                            (0x0040)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_clr_BIT                             (0x0040)

#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_en_LSB                              (5)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_en_MASK                             (0x0020)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_en_BIT                              (0x0020)

#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_dly_time_LSB                        (0)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_dly_time_WIDTH                      (5)
#define MMRF_ABB_DIG1_DIG_CON81_pbbrx1_ovld_dly_time_MASK                       (0x001F)

#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_occur_LSB                           (15)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_occur_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_occur_MASK                          (0x8000)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_occur_BIT                           (0x8000)

#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_occur_dly_LSB                       (14)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_occur_dly_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_occur_dly_MASK                      (0x4000)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_occur_dly_BIT                       (0x4000)

#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_dfe_ovld_clr_tgl_LSB                     (13)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_dfe_ovld_clr_tgl_WIDTH                   (1)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_dfe_ovld_clr_tgl_MASK                    (0x2000)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_dfe_ovld_clr_tgl_BIT                     (0x2000)

#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_cic_gain_mode_LSB                        (9)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_cic_gain_mode_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_cic_gain_mode_MASK                       (0x0200)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_cic_gain_mode_BIT                        (0x0200)

#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_cic_gain_sel_LSB                         (7)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_cic_gain_sel_WIDTH                       (2)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_cic_gain_sel_MASK                        (0x0180)

#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_clr_LSB                             (6)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_clr_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_clr_MASK                            (0x0040)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_clr_BIT                             (0x0040)

#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_en_LSB                              (5)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_en_MASK                             (0x0020)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_en_BIT                              (0x0020)

#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_dly_time_LSB                        (0)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_dly_time_WIDTH                      (5)
#define MMRF_ABB_DIG1_DIG_CON82_dbbrx1_ovld_dly_time_MASK                       (0x001F)

#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_occur_LSB                           (15)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_occur_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_occur_MASK                          (0x8000)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_occur_BIT                           (0x8000)

#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_occur_dly_LSB                       (14)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_occur_dly_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_occur_dly_MASK                      (0x4000)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_occur_dly_BIT                       (0x4000)

#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_dfe_ovld_clr_tgl_LSB                     (13)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_dfe_ovld_clr_tgl_WIDTH                   (1)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_dfe_ovld_clr_tgl_MASK                    (0x2000)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_dfe_ovld_clr_tgl_BIT                     (0x2000)

#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_cic_gain_mode_LSB                        (9)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_cic_gain_mode_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_cic_gain_mode_MASK                       (0x0200)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_cic_gain_mode_BIT                        (0x0200)

#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_cic_gain_sel_LSB                         (7)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_cic_gain_sel_WIDTH                       (2)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_cic_gain_sel_MASK                        (0x0180)

#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_clr_LSB                             (6)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_clr_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_clr_MASK                            (0x0040)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_clr_BIT                             (0x0040)

#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_en_LSB                              (5)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_en_MASK                             (0x0020)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_en_BIT                              (0x0020)

#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_dly_time_LSB                        (0)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_dly_time_WIDTH                      (5)
#define MMRF_ABB_DIG1_DIG_CON83_pbbrx2_ovld_dly_time_MASK                       (0x001F)

#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_occur_LSB                           (15)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_occur_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_occur_MASK                          (0x8000)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_occur_BIT                           (0x8000)

#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_occur_dly_LSB                       (14)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_occur_dly_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_occur_dly_MASK                      (0x4000)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_occur_dly_BIT                       (0x4000)

#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_dfe_ovld_clr_tgl_LSB                     (13)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_dfe_ovld_clr_tgl_WIDTH                   (1)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_dfe_ovld_clr_tgl_MASK                    (0x2000)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_dfe_ovld_clr_tgl_BIT                     (0x2000)

#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_cic_gain_mode_LSB                        (9)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_cic_gain_mode_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_cic_gain_mode_MASK                       (0x0200)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_cic_gain_mode_BIT                        (0x0200)

#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_cic_gain_sel_LSB                         (7)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_cic_gain_sel_WIDTH                       (2)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_cic_gain_sel_MASK                        (0x0180)

#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_clr_LSB                             (6)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_clr_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_clr_MASK                            (0x0040)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_clr_BIT                             (0x0040)

#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_en_LSB                              (5)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_en_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_en_MASK                             (0x0020)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_en_BIT                              (0x0020)

#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_dly_time_LSB                        (0)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_dly_time_WIDTH                      (5)
#define MMRF_ABB_DIG1_DIG_CON84_dbbrx2_ovld_dly_time_MASK                       (0x001F)

#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel0_normal_LSB                     (10)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel0_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel0_normal_MASK                    (0x0C00)

#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel1_normal_LSB                     (8)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel1_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel1_normal_MASK                    (0x0300)

#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel2_normal_LSB                     (6)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel2_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel2_normal_MASK                    (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel0_ovld_LSB                       (4)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel0_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel0_ovld_MASK                      (0x0030)

#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel1_ovld_LSB                       (2)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel1_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel1_ovld_MASK                      (0x000C)

#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel2_ovld_LSB                       (0)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel2_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON85_pbbrx1_inputsel2_ovld_MASK                      (0x0003)

#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel0_normal_LSB                     (10)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel0_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel0_normal_MASK                    (0x0C00)

#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel1_normal_LSB                     (8)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel1_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel1_normal_MASK                    (0x0300)

#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel2_normal_LSB                     (6)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel2_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel2_normal_MASK                    (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel0_ovld_LSB                       (4)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel0_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel0_ovld_MASK                      (0x0030)

#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel1_ovld_LSB                       (2)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel1_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel1_ovld_MASK                      (0x000C)

#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel2_ovld_LSB                       (0)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel2_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON86_dbbrx1_inputsel2_ovld_MASK                      (0x0003)

#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel0_normal_LSB                     (10)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel0_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel0_normal_MASK                    (0x0C00)

#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel1_normal_LSB                     (8)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel1_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel1_normal_MASK                    (0x0300)

#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel2_normal_LSB                     (6)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel2_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel2_normal_MASK                    (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel0_ovld_LSB                       (4)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel0_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel0_ovld_MASK                      (0x0030)

#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel1_ovld_LSB                       (2)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel1_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel1_ovld_MASK                      (0x000C)

#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel2_ovld_LSB                       (0)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel2_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON87_pbbrx2_inputsel2_ovld_MASK                      (0x0003)

#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel0_normal_LSB                     (10)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel0_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel0_normal_MASK                    (0x0C00)

#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel1_normal_LSB                     (8)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel1_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel1_normal_MASK                    (0x0300)

#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel2_normal_LSB                     (6)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel2_normal_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel2_normal_MASK                    (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel0_ovld_LSB                       (4)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel0_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel0_ovld_MASK                      (0x0030)

#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel1_ovld_LSB                       (2)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel1_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel1_ovld_MASK                      (0x000C)

#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel2_ovld_LSB                       (0)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel2_ovld_WIDTH                     (2)
#define MMRF_ABB_DIG1_DIG_CON88_dbbrx2_inputsel2_ovld_MASK                      (0x0003)

#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sel_ctl_LSB                         (5)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sel_ctl_WIDTH                       (2)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sel_ctl_MASK                        (0x0060)

#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sel_sw_LSB                          (4)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sel_sw_WIDTH                        (1)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sel_sw_MASK                         (0x0010)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sel_sw_BIT                          (0x0010)

#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_en_ctl_LSB                          (3)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_en_ctl_WIDTH                        (1)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_en_ctl_MASK                         (0x0008)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_en_ctl_BIT                          (0x0008)

#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_cic_en_ctl_LSB                          (2)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_cic_en_ctl_WIDTH                        (1)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_cic_en_ctl_MASK                         (0x0004)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_cic_en_ctl_BIT                          (0x0004)

#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sw_en_LSB                           (1)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sw_en_MASK                          (0x0002)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_adc_sw_en_BIT                           (0x0002)

#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_cic_sw_en_LSB                           (0)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_cic_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_cic_sw_en_MASK                          (0x0001)
#define MMRF_ABB_DIG1_DIG_CON89_bbrx_2g_cic_sw_en_BIT                           (0x0001)

#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_en_LSB                            (4)
#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_en_MASK                           (0x0010)
#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_en_BIT                            (0x0010)

#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_ckin_sel_LSB                      (2)
#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_ckin_sel_WIDTH                    (2)
#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_ckin_sel_MASK                     (0x000C)

#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_ckout_sel_LSB                     (0)
#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_ckout_sel_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON8A_packer_pbbrx1_ckout_sel_MASK                    (0x0003)

#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_en_LSB                            (4)
#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_en_MASK                           (0x0010)
#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_en_BIT                            (0x0010)

#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_ckin_sel_LSB                      (2)
#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_ckin_sel_WIDTH                    (2)
#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_ckin_sel_MASK                     (0x000C)

#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_ckout_sel_LSB                     (0)
#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_ckout_sel_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON8B_packer_dbbrx1_ckout_sel_MASK                    (0x0003)

#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_en_LSB                            (4)
#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_en_MASK                           (0x0010)
#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_en_BIT                            (0x0010)

#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_ckin_sel_LSB                      (2)
#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_ckin_sel_WIDTH                    (2)
#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_ckin_sel_MASK                     (0x000C)

#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_ckout_sel_LSB                     (0)
#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_ckout_sel_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON8C_packer_pbbrx2_ckout_sel_MASK                    (0x0003)

#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_en_LSB                            (4)
#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_en_MASK                           (0x0010)
#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_en_BIT                            (0x0010)

#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_ckin_sel_LSB                      (2)
#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_ckin_sel_WIDTH                    (2)
#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_ckin_sel_MASK                     (0x000C)

#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_ckout_sel_LSB                     (0)
#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_ckout_sel_WIDTH                   (2)
#define MMRF_ABB_DIG1_DIG_CON8D_packer_dbbrx2_ckout_sel_MASK                    (0x0003)

#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdfe_rat_ctlsel_LSB                    (4)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdfe_rat_ctlsel_WIDTH                  (4)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdfe_rat_ctlsel_MASK                   (0x00F0)

#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdac_rate_ctlsel_LSB                   (2)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdac_rate_ctlsel_WIDTH                 (2)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdac_rate_ctlsel_MASK                  (0x000C)

#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdfe_rat_sw_LSB                        (1)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdfe_rat_sw_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdfe_rat_sw_MASK                       (0x0002)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdfe_rat_sw_BIT                        (0x0002)

#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdac_rate_sw_LSB                       (0)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdac_rate_sw_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdac_rate_sw_MASK                      (0x0001)
#define MMRF_ABB_DIG1_DIG_CON8E_bbtx_mm_txdac_rate_sw_BIT                       (0x0001)

#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdfe_rat_ctlsel_LSB                    (4)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdfe_rat_ctlsel_WIDTH                  (4)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdfe_rat_ctlsel_MASK                   (0x00F0)

#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdac_rate_ctlsel_LSB                   (2)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdac_rate_ctlsel_WIDTH                 (2)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdac_rate_ctlsel_MASK                  (0x000C)

#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdfe_rat_sw_LSB                        (1)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdfe_rat_sw_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdfe_rat_sw_MASK                       (0x0002)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdfe_rat_sw_BIT                        (0x0002)

#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdac_rate_sw_LSB                       (0)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdac_rate_sw_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdac_rate_sw_MASK                      (0x0001)
#define MMRF_ABB_DIG1_DIG_CON8F_bbtx_2g_txdac_rate_sw_BIT                       (0x0001)

#define MMRF_ABB_DIG1_DIG_CON90_sinegen_ck_out_sel_LSB                          (2)
#define MMRF_ABB_DIG1_DIG_CON90_sinegen_ck_out_sel_WIDTH                        (2)
#define MMRF_ABB_DIG1_DIG_CON90_sinegen_ck_out_sel_MASK                         (0x000C)

#define MMRF_ABB_DIG1_DIG_CON90_ckgen_sinclk_rate_sel_LSB                       (1)
#define MMRF_ABB_DIG1_DIG_CON90_ckgen_sinclk_rate_sel_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CON90_ckgen_sinclk_rate_sel_MASK                      (0x0002)
#define MMRF_ABB_DIG1_DIG_CON90_ckgen_sinclk_rate_sel_BIT                       (0x0002)

#define MMRF_ABB_DIG1_DIG_CON90_ckgen_sinclk_enable_LSB                         (0)
#define MMRF_ABB_DIG1_DIG_CON90_ckgen_sinclk_enable_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CON90_ckgen_sinclk_enable_MASK                        (0x0001)
#define MMRF_ABB_DIG1_DIG_CON90_ckgen_sinclk_enable_BIT                         (0x0001)

#define MMRF_ABB_DIG1_DIG_CON91_singen_en_LSB                                   (7)
#define MMRF_ABB_DIG1_DIG_CON91_singen_en_WIDTH                                 (1)
#define MMRF_ABB_DIG1_DIG_CON91_singen_en_MASK                                  (0x0080)
#define MMRF_ABB_DIG1_DIG_CON91_singen_en_BIT                                   (0x0080)

#define MMRF_ABB_DIG1_DIG_CON91_singen_from_txcal_LSB                           (6)
#define MMRF_ABB_DIG1_DIG_CON91_singen_from_txcal_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CON91_singen_from_txcal_MASK                          (0x0040)
#define MMRF_ABB_DIG1_DIG_CON91_singen_from_txcal_BIT                           (0x0040)

#define MMRF_ABB_DIG1_DIG_CON91_singen_olt_mode_LSB                             (5)
#define MMRF_ABB_DIG1_DIG_CON91_singen_olt_mode_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CON91_singen_olt_mode_MASK                            (0x0020)
#define MMRF_ABB_DIG1_DIG_CON91_singen_olt_mode_BIT                             (0x0020)

#define MMRF_ABB_DIG1_DIG_CON91_singen_fix_en_i_LSB                             (1)
#define MMRF_ABB_DIG1_DIG_CON91_singen_fix_en_i_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CON91_singen_fix_en_i_MASK                            (0x0002)
#define MMRF_ABB_DIG1_DIG_CON91_singen_fix_en_i_BIT                             (0x0002)

#define MMRF_ABB_DIG1_DIG_CON91_singen_fix_en_q_LSB                             (0)
#define MMRF_ABB_DIG1_DIG_CON91_singen_fix_en_q_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CON91_singen_fix_en_q_MASK                            (0x0001)
#define MMRF_ABB_DIG1_DIG_CON91_singen_fix_en_q_BIT                             (0x0001)

#define MMRF_ABB_DIG1_DIG_CON92_singen_fix_i_LSB                                (0)
#define MMRF_ABB_DIG1_DIG_CON92_singen_fix_i_WIDTH                              (11)
#define MMRF_ABB_DIG1_DIG_CON92_singen_fix_i_MASK                               (0x07FF)

#define MMRF_ABB_DIG1_DIG_CON93_singen_fix_q_LSB                                (0)
#define MMRF_ABB_DIG1_DIG_CON93_singen_fix_q_WIDTH                              (11)
#define MMRF_ABB_DIG1_DIG_CON93_singen_fix_q_MASK                               (0x07FF)

#define MMRF_ABB_DIG1_DIG_CON94_singen_clkdiv_n_LSB                             (8)
#define MMRF_ABB_DIG1_DIG_CON94_singen_clkdiv_n_WIDTH                           (2)
#define MMRF_ABB_DIG1_DIG_CON94_singen_clkdiv_n_MASK                            (0x0300)

#define MMRF_ABB_DIG1_DIG_CON94_singen_mode_i_LSB                               (4)
#define MMRF_ABB_DIG1_DIG_CON94_singen_mode_i_WIDTH                             (4)
#define MMRF_ABB_DIG1_DIG_CON94_singen_mode_i_MASK                              (0x00F0)

#define MMRF_ABB_DIG1_DIG_CON94_singen_mode_q_LSB                               (0)
#define MMRF_ABB_DIG1_DIG_CON94_singen_mode_q_WIDTH                             (4)
#define MMRF_ABB_DIG1_DIG_CON94_singen_mode_q_MASK                              (0x000F)

#define MMRF_ABB_DIG1_DIG_CON95_singen_clkdiv_i_LSB                             (0)
#define MMRF_ABB_DIG1_DIG_CON95_singen_clkdiv_i_WIDTH                           (10)
#define MMRF_ABB_DIG1_DIG_CON95_singen_clkdiv_i_MASK                            (0x03FF)

#define MMRF_ABB_DIG1_DIG_CON96_singen_clkdiv_q_LSB                             (0)
#define MMRF_ABB_DIG1_DIG_CON96_singen_clkdiv_q_WIDTH                           (10)
#define MMRF_ABB_DIG1_DIG_CON96_singen_clkdiv_q_MASK                            (0x03FF)

#define MMRF_ABB_DIG1_DIG_CON97_singen_gain_i_LSB                               (4)
#define MMRF_ABB_DIG1_DIG_CON97_singen_gain_i_WIDTH                             (3)
#define MMRF_ABB_DIG1_DIG_CON97_singen_gain_i_MASK                              (0x0070)

#define MMRF_ABB_DIG1_DIG_CON97_singen_gain_q_LSB                               (0)
#define MMRF_ABB_DIG1_DIG_CON97_singen_gain_q_WIDTH                             (3)
#define MMRF_ABB_DIG1_DIG_CON97_singen_gain_q_MASK                              (0x0007)

#define MMRF_ABB_DIG1_DIG_CON98_singen_gain_mode_LSB                            (7)
#define MMRF_ABB_DIG1_DIG_CON98_singen_gain_mode_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CON98_singen_gain_mode_MASK                           (0x0080)
#define MMRF_ABB_DIG1_DIG_CON98_singen_gain_mode_BIT                            (0x0080)

#define MMRF_ABB_DIG1_DIG_CON99_singen_inc_step0_i_LSB                          (0)
#define MMRF_ABB_DIG1_DIG_CON99_singen_inc_step0_i_WIDTH                        (10)
#define MMRF_ABB_DIG1_DIG_CON99_singen_inc_step0_i_MASK                         (0x03FF)

#define MMRF_ABB_DIG1_DIG_CON9A_singen_inc_step0_q_LSB                          (0)
#define MMRF_ABB_DIG1_DIG_CON9A_singen_inc_step0_q_WIDTH                        (10)
#define MMRF_ABB_DIG1_DIG_CON9A_singen_inc_step0_q_MASK                         (0x03FF)

#define MMRF_ABB_DIG1_DIG_CON9B_singen_start_addr0_i_LSB                        (0)
#define MMRF_ABB_DIG1_DIG_CON9B_singen_start_addr0_i_WIDTH                      (10)
#define MMRF_ABB_DIG1_DIG_CON9B_singen_start_addr0_i_MASK                       (0x03FF)

#define MMRF_ABB_DIG1_DIG_CON9C_singen_start_addr0_q_LSB                        (0)
#define MMRF_ABB_DIG1_DIG_CON9C_singen_start_addr0_q_WIDTH                      (10)
#define MMRF_ABB_DIG1_DIG_CON9C_singen_start_addr0_q_MASK                       (0x03FF)

#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel1_normal_LSB                  (14)
#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel1_normal_WIDTH                (2)
#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel1_normal_MASK                 (0xC000)

#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel2_normal_LSB                  (12)
#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel2_normal_WIDTH                (2)
#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel2_normal_MASK                 (0x3000)

#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel1_ovld_LSB                    (10)
#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel1_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel1_ovld_MASK                   (0x0C00)

#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel2_ovld_LSB                    (8)
#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel2_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG1_DIG_CON9D_pbbrx1_3g_inputsel2_ovld_MASK                   (0x0300)

#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel1_normal_LSB                  (6)
#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel1_normal_WIDTH                (2)
#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel1_normal_MASK                 (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel2_normal_LSB                  (4)
#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel2_normal_WIDTH                (2)
#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel2_normal_MASK                 (0x0030)

#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel1_ovld_LSB                    (2)
#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel1_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel1_ovld_MASK                   (0x000C)

#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel2_ovld_LSB                    (0)
#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel2_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG1_DIG_CON9D_dbbrx1_3g_inputsel2_ovld_MASK                   (0x0003)

#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel1_normal_LSB                  (14)
#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel1_normal_WIDTH                (2)
#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel1_normal_MASK                 (0xC000)

#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel2_normal_LSB                  (12)
#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel2_normal_WIDTH                (2)
#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel2_normal_MASK                 (0x3000)

#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel1_ovld_LSB                    (10)
#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel1_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel1_ovld_MASK                   (0x0C00)

#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel2_ovld_LSB                    (8)
#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel2_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG1_DIG_CON9E_pbbrx2_3g_inputsel2_ovld_MASK                   (0x0300)

#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel1_normal_LSB                  (6)
#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel1_normal_WIDTH                (2)
#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel1_normal_MASK                 (0x00C0)

#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel2_normal_LSB                  (4)
#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel2_normal_WIDTH                (2)
#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel2_normal_MASK                 (0x0030)

#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel1_ovld_LSB                    (2)
#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel1_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel1_ovld_MASK                   (0x000C)

#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel2_ovld_LSB                    (0)
#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel2_ovld_WIDTH                  (2)
#define MMRF_ABB_DIG1_DIG_CON9E_dbbrx2_3g_inputsel2_ovld_MASK                   (0x0003)

#define MMRF_ABB_DIG1_DIG_CONA0_rccal_lte_ck_en_LSB                             (15)
#define MMRF_ABB_DIG1_DIG_CONA0_rccal_lte_ck_en_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CONA0_rccal_lte_ck_en_MASK                            (0x8000)
#define MMRF_ABB_DIG1_DIG_CONA0_rccal_lte_ck_en_BIT                             (0x8000)

#define MMRF_ABB_DIG1_DIG_CONA0_rccal_lte_seq_ck_en_LSB                         (0)
#define MMRF_ABB_DIG1_DIG_CONA0_rccal_lte_seq_ck_en_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONA0_rccal_lte_seq_ck_en_MASK                        (0x0001)
#define MMRF_ABB_DIG1_DIG_CONA0_rccal_lte_seq_ck_en_BIT                         (0x0001)

#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_done_LSB                              (12)
#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_done_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_done_MASK                             (0x1000)
#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_done_BIT                              (0x1000)

#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_state_LSB                             (4)
#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_state_WIDTH                           (5)
#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_state_MASK                            (0x01F0)

#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_start_LSB                             (0)
#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_start_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_start_MASK                            (0x0001)
#define MMRF_ABB_DIG1_DIG_CONA1_rccal_lte_start_BIT                             (0x0001)

#define MMRF_ABB_DIG1_DIG_CONA2_rccal_lte_out_inv_LSB                           (12)
#define MMRF_ABB_DIG1_DIG_CONA2_rccal_lte_out_inv_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONA2_rccal_lte_out_inv_MASK                          (0x1000)
#define MMRF_ABB_DIG1_DIG_CONA2_rccal_lte_out_inv_BIT                           (0x1000)

#define MMRF_ABB_DIG1_DIG_CONA2_rccal_lte_osc_cnt_dbg_LSB                       (0)
#define MMRF_ABB_DIG1_DIG_CONA2_rccal_lte_osc_cnt_dbg_WIDTH                     (10)
#define MMRF_ABB_DIG1_DIG_CONA2_rccal_lte_osc_cnt_dbg_MASK                      (0x03FF)

#define MMRF_ABB_DIG1_DIG_CONA3_rccal_lte_trim_cnt_LSB                          (0)
#define MMRF_ABB_DIG1_DIG_CONA3_rccal_lte_trim_cnt_WIDTH                        (12)
#define MMRF_ABB_DIG1_DIG_CONA3_rccal_lte_trim_cnt_MASK                         (0x0FFF)

#define MMRF_ABB_DIG1_DIG_CONA4_rccal_lte_cmp_th_LSB                            (0)
#define MMRF_ABB_DIG1_DIG_CONA4_rccal_lte_cmp_th_WIDTH                          (10)
#define MMRF_ABB_DIG1_DIG_CONA4_rccal_lte_cmp_th_MASK                           (0x03FF)

#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_sel_cap_LSB                           (8)
#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_sel_cap_WIDTH                         (6)
#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_sel_cap_MASK                          (0x3F00)

#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_sel_cap_sw_LSB                        (7)
#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_sel_cap_sw_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_sel_cap_sw_MASK                       (0x0080)
#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_sel_cap_sw_BIT                        (0x0080)

#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_offset_cap_LSB                        (0)
#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_offset_cap_WIDTH                      (6)
#define MMRF_ABB_DIG1_DIG_CONA5_rccal_lte_offset_cap_MASK                       (0x003F)

#define MMRF_ABB_DIG1_DIG_CONA6_rccal_lte_offset_sat_inv_out_LSB                (8)
#define MMRF_ABB_DIG1_DIG_CONA6_rccal_lte_offset_sat_inv_out_WIDTH              (6)
#define MMRF_ABB_DIG1_DIG_CONA6_rccal_lte_offset_sat_inv_out_MASK               (0x3F00)

#define MMRF_ABB_DIG1_DIG_CONA6_rccal_lte_sar_out_LSB                           (0)
#define MMRF_ABB_DIG1_DIG_CONA6_rccal_lte_sar_out_WIDTH                         (6)
#define MMRF_ABB_DIG1_DIG_CONA6_rccal_lte_sar_out_MASK                          (0x003F)

#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_dac_en_ctl_LSB                         (3)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_dac_en_ctl_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_dac_en_ctl_MASK                        (0x0008)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_dac_en_ctl_BIT                         (0x0008)

#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_cic_en_ctl_LSB                         (2)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_cic_en_ctl_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_cic_en_ctl_MASK                        (0x0004)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_cic_en_ctl_BIT                         (0x0004)

#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_dac_sw_en_LSB                          (1)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_dac_sw_en_WIDTH                        (1)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_dac_sw_en_MASK                         (0x0002)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_dac_sw_en_BIT                          (0x0002)

#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_cic_sw_en_LSB                          (0)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_cic_sw_en_WIDTH                        (1)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_cic_sw_en_MASK                         (0x0001)
#define MMRF_ABB_DIG1_DIG_CONA7_bbtx_c2k_cic_sw_en_BIT                          (0x0001)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_et_swap_i_pn_LSB                            (15)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_et_swap_i_pn_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_et_swap_i_pn_MASK                           (0x8000)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_et_swap_i_pn_BIT                            (0x8000)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_i_pn_LSB                            (14)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_i_pn_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_i_pn_MASK                           (0x4000)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_i_pn_BIT                            (0x4000)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_q_pn_LSB                            (13)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_q_pn_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_q_pn_MASK                           (0x2000)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_q_pn_BIT                            (0x2000)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_iq_LSB                              (12)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_iq_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_iq_MASK                             (0x1000)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_tx_swap_iq_BIT                              (0x1000)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_i_pn_LSB                    (11)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_i_pn_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_i_pn_MASK                   (0x0800)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_i_pn_BIT                    (0x0800)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_q_pn_LSB                    (10)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_q_pn_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_q_pn_MASK                   (0x0400)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_q_pn_BIT                    (0x0400)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_iq_LSB                      (9)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_iq_WIDTH                    (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_iq_MASK                     (0x0200)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx1_swap_iq_BIT                      (0x0200)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_i_pn_LSB                    (8)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_i_pn_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_i_pn_MASK                   (0x0100)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_i_pn_BIT                    (0x0100)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_q_pn_LSB                    (7)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_q_pn_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_q_pn_MASK                   (0x0080)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_q_pn_BIT                    (0x0080)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_iq_LSB                      (6)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_iq_WIDTH                    (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_iq_MASK                     (0x0040)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx1_swap_iq_BIT                      (0x0040)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_i_pn_LSB                    (5)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_i_pn_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_i_pn_MASK                   (0x0020)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_i_pn_BIT                    (0x0020)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_q_pn_LSB                    (4)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_q_pn_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_q_pn_MASK                   (0x0010)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_q_pn_BIT                    (0x0010)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_iq_LSB                      (3)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_iq_WIDTH                    (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_iq_MASK                     (0x0008)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_pbbrx2_swap_iq_BIT                      (0x0008)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_i_pn_LSB                    (2)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_i_pn_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_i_pn_MASK                   (0x0004)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_i_pn_BIT                    (0x0004)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_q_pn_LSB                    (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_q_pn_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_q_pn_MASK                   (0x0002)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_q_pn_BIT                    (0x0002)

#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_iq_LSB                      (0)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_iq_WIDTH                    (1)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_iq_MASK                     (0x0001)
#define MMRF_ABB_DIG1_DIG_CONA9_abb_c2k_dbbrx2_swap_iq_BIT                      (0x0001)

#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_adc_sw_ctrl_LSB                         (7)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_adc_sw_ctrl_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_adc_sw_ctrl_MASK                        (0x0080)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_adc_sw_ctrl_BIT                         (0x0080)

#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_adc_sw_ctrl_LSB                         (6)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_adc_sw_ctrl_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_adc_sw_ctrl_MASK                        (0x0040)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_adc_sw_ctrl_BIT                         (0x0040)

#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_cic_sw_ctrl_LSB                         (5)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_cic_sw_ctrl_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_cic_sw_ctrl_MASK                        (0x0020)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_cic_sw_ctrl_BIT                         (0x0020)

#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_cic_sw_ctrl_LSB                         (4)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_cic_sw_ctrl_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_cic_sw_ctrl_MASK                        (0x0010)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_cic_sw_ctrl_BIT                         (0x0010)

#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_adc_sw_en_LSB                           (3)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_adc_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_adc_sw_en_MASK                          (0x0008)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_adc_sw_en_BIT                           (0x0008)

#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_adc_sw_en_LSB                           (2)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_adc_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_adc_sw_en_MASK                          (0x0004)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_adc_sw_en_BIT                           (0x0004)

#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_cic_sw_en_LSB                           (1)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_cic_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_cic_sw_en_MASK                          (0x0002)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx1_cic_sw_en_BIT                           (0x0002)

#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_cic_sw_en_LSB                           (0)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_cic_sw_en_WIDTH                         (1)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_cic_sw_en_MASK                          (0x0001)
#define MMRF_ABB_DIG1_DIG_CONAA_c2k_rx2_cic_sw_en_BIT                           (0x0001)

#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txdac_sw_en_sel_LSB                         (5)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txdac_sw_en_sel_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txdac_sw_en_sel_MASK                        (0x0020)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txdac_sw_en_sel_BIT                         (0x0020)

#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txdac_sw_en_LSB                             (4)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txdac_sw_en_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txdac_sw_en_MASK                            (0x0010)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txdac_sw_en_BIT                             (0x0010)

#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txcic_sw_en_sel_LSB                         (1)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txcic_sw_en_sel_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txcic_sw_en_sel_MASK                        (0x0002)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txcic_sw_en_sel_BIT                         (0x0002)

#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txcic_sw_en_LSB                             (0)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txcic_sw_en_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txcic_sw_en_MASK                            (0x0001)
#define MMRF_ABB_DIG1_DIG_CONAB_c2k_txcic_sw_en_BIT                             (0x0001)

#define MMRF_ABB_DIG1_DIG_CONAC_ckgen_bbtx_ckcnt_phase_cfg_LSB                  (8)
#define MMRF_ABB_DIG1_DIG_CONAC_ckgen_bbtx_ckcnt_phase_cfg_WIDTH                (5)
#define MMRF_ABB_DIG1_DIG_CONAC_ckgen_bbtx_ckcnt_phase_cfg_MASK                 (0x1F00)

#define MMRF_ABB_DIG1_DIG_CONAC_c2k_txcic_ck_dly_cfg_LSB                        (0)
#define MMRF_ABB_DIG1_DIG_CONAC_c2k_txcic_ck_dly_cfg_WIDTH                      (8)
#define MMRF_ABB_DIG1_DIG_CONAC_c2k_txcic_ck_dly_cfg_MASK                       (0x00FF)

#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_occur_LSB                       (15)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_occur_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_occur_MASK                      (0x8000)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_occur_BIT                       (0x8000)

#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_occur_dly_LSB                   (14)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_occur_dly_WIDTH                 (1)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_occur_dly_MASK                  (0x4000)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_occur_dly_BIT                   (0x4000)

#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_cic_gain_mode_LSB                    (9)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_cic_gain_mode_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_cic_gain_mode_MASK                   (0x0200)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_cic_gain_mode_BIT                    (0x0200)

#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_cic_gain_sel_LSB                (7)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_cic_gain_sel_WIDTH              (2)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_cic_gain_sel_MASK               (0x0180)

#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_clr_LSB                         (6)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_clr_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_clr_MASK                        (0x0040)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_clr_BIT                         (0x0040)

#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_en_LSB                          (5)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_en_WIDTH                        (1)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_en_MASK                         (0x0020)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_en_BIT                          (0x0020)

#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_dly_time_LSB                    (0)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_dly_time_WIDTH                  (5)
#define MMRF_ABB_DIG1_DIG_CONAD_c2k_pbbrx1_ovld_dly_time_MASK                   (0x001F)

#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_occur_LSB                       (15)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_occur_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_occur_MASK                      (0x8000)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_occur_BIT                       (0x8000)

#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_occur_dly_LSB                   (14)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_occur_dly_WIDTH                 (1)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_occur_dly_MASK                  (0x4000)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_occur_dly_BIT                   (0x4000)

#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_cic_gain_mode_LSB                    (9)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_cic_gain_mode_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_cic_gain_mode_MASK                   (0x0200)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_cic_gain_mode_BIT                    (0x0200)

#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_cic_gain_sel_LSB                (7)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_cic_gain_sel_WIDTH              (2)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_cic_gain_sel_MASK               (0x0180)

#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_clr_LSB                         (6)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_clr_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_clr_MASK                        (0x0040)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_clr_BIT                         (0x0040)

#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_en_LSB                          (5)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_en_WIDTH                        (1)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_en_MASK                         (0x0020)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_en_BIT                          (0x0020)

#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_dly_time_LSB                    (0)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_dly_time_WIDTH                  (5)
#define MMRF_ABB_DIG1_DIG_CONAE_c2k_dbbrx1_ovld_dly_time_MASK                   (0x001F)

#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_occur_LSB                       (15)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_occur_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_occur_MASK                      (0x8000)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_occur_BIT                       (0x8000)

#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_occur_dly_LSB                   (14)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_occur_dly_WIDTH                 (1)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_occur_dly_MASK                  (0x4000)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_occur_dly_BIT                   (0x4000)

#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_cic_gain_mode_LSB                    (9)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_cic_gain_mode_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_cic_gain_mode_MASK                   (0x0200)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_cic_gain_mode_BIT                    (0x0200)

#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_cic_gain_sel_LSB                (7)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_cic_gain_sel_WIDTH              (2)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_cic_gain_sel_MASK               (0x0180)

#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_clr_LSB                         (6)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_clr_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_clr_MASK                        (0x0040)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_clr_BIT                         (0x0040)

#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_en_LSB                          (5)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_en_WIDTH                        (1)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_en_MASK                         (0x0020)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_en_BIT                          (0x0020)

#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_dly_time_LSB                    (0)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_dly_time_WIDTH                  (5)
#define MMRF_ABB_DIG1_DIG_CONAF_c2k_pbbrx2_ovld_dly_time_MASK                   (0x001F)

#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_occur_LSB                       (15)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_occur_WIDTH                     (1)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_occur_MASK                      (0x8000)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_occur_BIT                       (0x8000)

#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_occur_dly_LSB                   (14)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_occur_dly_WIDTH                 (1)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_occur_dly_MASK                  (0x4000)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_occur_dly_BIT                   (0x4000)

#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_cic_gain_mode_LSB                    (9)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_cic_gain_mode_WIDTH                  (1)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_cic_gain_mode_MASK                   (0x0200)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_cic_gain_mode_BIT                    (0x0200)

#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_cic_gain_sel_LSB                (7)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_cic_gain_sel_WIDTH              (2)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_cic_gain_sel_MASK               (0x0180)

#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_clr_LSB                         (6)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_clr_WIDTH                       (1)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_clr_MASK                        (0x0040)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_clr_BIT                         (0x0040)

#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_en_LSB                          (5)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_en_WIDTH                        (1)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_en_MASK                         (0x0020)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_en_BIT                          (0x0020)

#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_dly_time_LSB                    (0)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_dly_time_WIDTH                  (5)
#define MMRF_ABB_DIG1_DIG_CONB0_c2k_dbbrx2_ovld_dly_time_MASK                   (0x001F)

#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_sc_normal_LSB               (14)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_sc_normal_WIDTH             (2)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_sc_normal_MASK              (0xC000)

#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_dc_normal_LSB               (12)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_dc_normal_WIDTH             (2)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_dc_normal_MASK              (0x3000)

#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_sc_ovld_LSB                 (10)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_sc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_sc_ovld_MASK                (0x0C00)

#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_dc_ovld_LSB                 (8)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_dc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_pbbrx1_inputsel_dc_ovld_MASK                (0x0300)

#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_sc_normal_LSB               (6)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_sc_normal_WIDTH             (2)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_sc_normal_MASK              (0x00C0)

#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_dc_normal_LSB               (4)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_dc_normal_WIDTH             (2)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_dc_normal_MASK              (0x0030)

#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_sc_ovld_LSB                 (2)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_sc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_sc_ovld_MASK                (0x000C)

#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_dc_ovld_LSB                 (0)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_dc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG1_DIG_CONB1_c2k_dbbrx1_inputsel_dc_ovld_MASK                (0x0003)

#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_sc_normal_LSB               (14)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_sc_normal_WIDTH             (2)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_sc_normal_MASK              (0xC000)

#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_dc_normal_LSB               (12)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_dc_normal_WIDTH             (2)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_dc_normal_MASK              (0x3000)

#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_sc_ovld_LSB                 (10)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_sc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_sc_ovld_MASK                (0x0C00)

#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_dc_ovld_LSB                 (8)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_dc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_pbbrx2_inputsel_dc_ovld_MASK                (0x0300)

#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_sc_normal_LSB               (6)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_sc_normal_WIDTH             (2)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_sc_normal_MASK              (0x00C0)

#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_dc_normal_LSB               (4)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_dc_normal_WIDTH             (2)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_dc_normal_MASK              (0x0030)

#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_sc_ovld_LSB                 (2)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_sc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_sc_ovld_MASK                (0x000C)

#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_dc_ovld_LSB                 (0)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_dc_ovld_WIDTH               (2)
#define MMRF_ABB_DIG1_DIG_CONB2_c2k_dbbrx2_inputsel_dc_ovld_MASK                (0x0003)

#define MMRF_ABB_DIG1_DIG_CONB3_dc_comp_sw_mode_LSB                             (12)
#define MMRF_ABB_DIG1_DIG_CONB3_dc_comp_sw_mode_WIDTH                           (1)
#define MMRF_ABB_DIG1_DIG_CONB3_dc_comp_sw_mode_MASK                            (0x1000)
#define MMRF_ABB_DIG1_DIG_CONB3_dc_comp_sw_mode_BIT                             (0x1000)

#define MMRF_ABB_DIG1_DIG_CONB3_dc_comp_sw_tgl_LSB                              (8)
#define MMRF_ABB_DIG1_DIG_CONB3_dc_comp_sw_tgl_WIDTH                            (1)
#define MMRF_ABB_DIG1_DIG_CONB3_dc_comp_sw_tgl_MASK                             (0x0100)
#define MMRF_ABB_DIG1_DIG_CONB3_dc_comp_sw_tgl_BIT                              (0x0100)

#define MMRF_ABB_DIG1_DIG_CONB3_CRC_reset_toggle_LSB                            (4)
#define MMRF_ABB_DIG1_DIG_CONB3_CRC_reset_toggle_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONB3_CRC_reset_toggle_MASK                           (0x0010)
#define MMRF_ABB_DIG1_DIG_CONB3_CRC_reset_toggle_BIT                            (0x0010)

#define MMRF_ABB_DIG1_DIG_CONB3_CRC_done_LSB                                    (0)
#define MMRF_ABB_DIG1_DIG_CONB3_CRC_done_WIDTH                                  (1)
#define MMRF_ABB_DIG1_DIG_CONB3_CRC_done_MASK                                   (0x0001)
#define MMRF_ABB_DIG1_DIG_CONB3_CRC_done_BIT                                    (0x0001)

#define MMRF_ABB_DIG1_DIG_CONB4_dc_comp_i_sw_LSB                                (0)
#define MMRF_ABB_DIG1_DIG_CONB4_dc_comp_i_sw_WIDTH                              (15)
#define MMRF_ABB_DIG1_DIG_CONB4_dc_comp_i_sw_MASK                               (0x7FFF)

#define MMRF_ABB_DIG1_DIG_CONB5_dc_comp_q_sw_LSB                                (0)
#define MMRF_ABB_DIG1_DIG_CONB5_dc_comp_q_sw_WIDTH                              (15)
#define MMRF_ABB_DIG1_DIG_CONB5_dc_comp_q_sw_MASK                               (0x7FFF)

#define MMRF_ABB_DIG1_DIG_CONB6_CRC_start_I_data_LSB                            (0)
#define MMRF_ABB_DIG1_DIG_CONB6_CRC_start_I_data_WIDTH                          (15)
#define MMRF_ABB_DIG1_DIG_CONB6_CRC_start_I_data_MASK                           (0x7FFF)

#define MMRF_ABB_DIG1_DIG_CONB7_CRC_start_Q_data_LSB                            (0)
#define MMRF_ABB_DIG1_DIG_CONB7_CRC_start_Q_data_WIDTH                          (15)
#define MMRF_ABB_DIG1_DIG_CONB7_CRC_start_Q_data_MASK                           (0x7FFF)

#define MMRF_ABB_DIG1_DIG_CONB8_CRC_length_hi_LSB                               (0)
#define MMRF_ABB_DIG1_DIG_CONB8_CRC_length_hi_WIDTH                             (16)
#define MMRF_ABB_DIG1_DIG_CONB8_CRC_length_hi_MASK                              (0xFFFF)

#define MMRF_ABB_DIG1_DIG_CONB9_CRC_length_lo_LSB                               (0)
#define MMRF_ABB_DIG1_DIG_CONB9_CRC_length_lo_WIDTH                             (16)
#define MMRF_ABB_DIG1_DIG_CONB9_CRC_length_lo_MASK                              (0xFFFF)

#define MMRF_ABB_DIG1_DIG_CONBA_CRC_result_i_LSB                                (0)
#define MMRF_ABB_DIG1_DIG_CONBA_CRC_result_i_WIDTH                              (16)
#define MMRF_ABB_DIG1_DIG_CONBA_CRC_result_i_MASK                               (0xFFFF)

#define MMRF_ABB_DIG1_DIG_CONBB_CRC_result_q_LSB                                (0)
#define MMRF_ABB_DIG1_DIG_CONBB_CRC_result_q_WIDTH                              (16)
#define MMRF_ABB_DIG1_DIG_CONBB_CRC_result_q_MASK                               (0xFFFF)

#define MMRF_ABB_DIG1_DIG_CONBC_CRC_cnt_hi_LSB                                  (0)
#define MMRF_ABB_DIG1_DIG_CONBC_CRC_cnt_hi_WIDTH                                (16)
#define MMRF_ABB_DIG1_DIG_CONBC_CRC_cnt_hi_MASK                                 (0xFFFF)

#define MMRF_ABB_DIG1_DIG_CONBD_CRC_cnt_lo_LSB                                  (0)
#define MMRF_ABB_DIG1_DIG_CONBD_CRC_cnt_lo_WIDTH                                (16)
#define MMRF_ABB_DIG1_DIG_CONBD_CRC_cnt_lo_MASK                                 (0xFFFF)

#define MMRF_ABB_DIG1_DIG_CONBE_c2k_26m_en_LSB                                  (15)
#define MMRF_ABB_DIG1_DIG_CONBE_c2k_26m_en_WIDTH                                (1)
#define MMRF_ABB_DIG1_DIG_CONBE_c2k_26m_en_MASK                                 (0x8000)
#define MMRF_ABB_DIG1_DIG_CONBE_c2k_26m_en_BIT                                  (0x8000)

#define MMRF_ABB_DIG1_DIG_CONBE_c2k_rx1_out_sel_LSB                             (4)
#define MMRF_ABB_DIG1_DIG_CONBE_c2k_rx1_out_sel_WIDTH                           (4)
#define MMRF_ABB_DIG1_DIG_CONBE_c2k_rx1_out_sel_MASK                            (0x00F0)

#define MMRF_ABB_DIG1_DIG_CONBE_c2k_rx2_out_sel_LSB                             (0)
#define MMRF_ABB_DIG1_DIG_CONBE_c2k_rx2_out_sel_WIDTH                           (4)
#define MMRF_ABB_DIG1_DIG_CONBE_c2k_rx2_out_sel_MASK                            (0x000F)

#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_en_LSB                            (5)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_en_MASK                           (0x0020)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_en_BIT                            (0x0020)

#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_ck_inv_LSB                        (4)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_ck_inv_WIDTH                      (1)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_ck_inv_MASK                       (0x0010)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_ck_inv_BIT                        (0x0010)

#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_ck_out_sel_LSB                    (2)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_ck_out_sel_WIDTH                  (2)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_packer_ck_out_sel_MASK                   (0x000C)

#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_en_ctl_LSB                               (1)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_en_ctl_WIDTH                             (1)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_en_ctl_MASK                              (0x0002)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_en_ctl_BIT                               (0x0002)

#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_en_sw_LSB                                (0)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_en_sw_WIDTH                              (1)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_en_sw_MASK                               (0x0001)
#define MMRF_ABB_DIG1_DIG_CONBF_dpdadc_en_sw_BIT                                (0x0001)

#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx1_i_en_LSB                            (7)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx1_i_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx1_i_en_MASK                           (0x0080)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx1_i_en_BIT                            (0x0080)

#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx1_q_en_LSB                            (6)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx1_q_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx1_q_en_MASK                           (0x0040)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx1_q_en_BIT                            (0x0040)

#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx1_i_en_LSB                            (5)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx1_i_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx1_i_en_MASK                           (0x0020)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx1_i_en_BIT                            (0x0020)

#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx1_q_en_LSB                            (4)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx1_q_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx1_q_en_MASK                           (0x0010)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx1_q_en_BIT                            (0x0010)

#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx2_i_en_LSB                            (3)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx2_i_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx2_i_en_MASK                           (0x0008)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx2_i_en_BIT                            (0x0008)

#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx2_q_en_LSB                            (2)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx2_q_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx2_q_en_MASK                           (0x0004)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_pbbrx2_q_en_BIT                            (0x0004)

#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx2_i_en_LSB                            (1)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx2_i_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx2_i_en_MASK                           (0x0002)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx2_i_en_BIT                            (0x0002)

#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx2_q_en_LSB                            (0)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx2_q_en_WIDTH                          (1)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx2_q_en_MASK                           (0x0001)
#define MMRF_ABB_DIG1_DIG_CONA8_loop_dbbrx2_q_en_BIT                            (0x0001)


#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_CLK_EN_LSB                       (12)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_CLK_EN_WIDTH                     (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_CLK_EN_MASK                      (0x1000)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_CLK_EN_BIT                       (0x1000)

#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_I_DELAY_LSB                      (6)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_I_DELAY_WIDTH                    (2)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_I_DELAY_MASK                     (0x00C0)

#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_Q_DELAY_LSB                      (4)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_Q_DELAY_WIDTH                    (2)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_Q_DELAY_MASK                     (0x0030)

#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_LSB_PWD_LSB                      (0)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_LSB_PWD_WIDTH                    (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_LSB_PWD_MASK                     (0x0001)
#define MMRF_ABB_DPDADC0_DPDADC_CON0_RG_DPDADC_LSB_PWD_BIT                      (0x0001)

#define MMRF_ABB_DPDADC0_DPDADC_CON1_RG_DPDADC_I_COMP_CP_LSB                    (8)
#define MMRF_ABB_DPDADC0_DPDADC_CON1_RG_DPDADC_I_COMP_CP_WIDTH                  (4)
#define MMRF_ABB_DPDADC0_DPDADC_CON1_RG_DPDADC_I_COMP_CP_MASK                   (0x0F00)

#define MMRF_ABB_DPDADC0_DPDADC_CON1_RG_DPDADC_I_COMP_CN_LSB                    (0)
#define MMRF_ABB_DPDADC0_DPDADC_CON1_RG_DPDADC_I_COMP_CN_WIDTH                  (4)
#define MMRF_ABB_DPDADC0_DPDADC_CON1_RG_DPDADC_I_COMP_CN_MASK                   (0x000F)

#define MMRF_ABB_DPDADC0_DPDADC_CON2_RG_DPDADC_Q_COMP_CP_LSB                    (8)
#define MMRF_ABB_DPDADC0_DPDADC_CON2_RG_DPDADC_Q_COMP_CP_WIDTH                  (4)
#define MMRF_ABB_DPDADC0_DPDADC_CON2_RG_DPDADC_Q_COMP_CP_MASK                   (0x0F00)

#define MMRF_ABB_DPDADC0_DPDADC_CON2_RG_DPDADC_Q_COMP_CN_LSB                    (0)
#define MMRF_ABB_DPDADC0_DPDADC_CON2_RG_DPDADC_Q_COMP_CN_WIDTH                  (4)
#define MMRF_ABB_DPDADC0_DPDADC_CON2_RG_DPDADC_Q_COMP_CN_MASK                   (0x000F)

#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_RSTB_LSB                     (13)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_RSTB_WIDTH                   (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_RSTB_MASK                    (0x2000)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_RSTB_BIT                     (0x2000)

#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_EN_LSB                       (12)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_EN_WIDTH                     (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_EN_MASK                      (0x1000)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_EN_BIT                       (0x1000)

#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_I_COR_EN_LSB                     (9)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_I_COR_EN_WIDTH                   (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_I_COR_EN_MASK                    (0x0200)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_I_COR_EN_BIT                     (0x0200)

#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_Q_COR_EN_LSB                     (8)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_Q_COR_EN_WIDTH                   (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_Q_COR_EN_MASK                    (0x0100)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_Q_COR_EN_BIT                     (0x0100)

#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CKO_INV_LSB                      (7)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CKO_INV_WIDTH                    (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CKO_INV_MASK                     (0x0080)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CKO_INV_BIT                      (0x0080)

#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_AVG_NP_LSB                   (4)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_AVG_NP_WIDTH                 (3)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_CAL_AVG_NP_MASK                  (0x0070)

#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_DATA_DIV_LSB                     (0)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_DATA_DIV_WIDTH                   (2)
#define MMRF_ABB_DPDADC0_DPDADC_CON3_RG_DPDADC_DATA_DIV_MASK                    (0x0003)

#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_EXTRABIT_OFF_LSB                 (15)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_EXTRABIT_OFF_WIDTH               (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_EXTRABIT_OFF_MASK                (0x8000)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_EXTRABIT_OFF_BIT                 (0x8000)

#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_CAL_EN_LSB                   (13)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_CAL_EN_WIDTH                 (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_CAL_EN_MASK                  (0x2000)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_CAL_EN_BIT                   (0x2000)

#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_MANUAL_LSB                   (12)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_MANUAL_WIDTH                 (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_MANUAL_MASK                  (0x1000)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_MANUAL_BIT                   (0x1000)

#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_CP_CN_SWP_LSB                (11)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_CP_CN_SWP_WIDTH              (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_CP_CN_SWP_MASK               (0x0800)
#define MMRF_ABB_DPDADC0_DPDADC_CON4_RG_DPDADC_OFS_CP_CN_SWP_BIT                (0x0800)

#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_SINGLE_P_EN_LSB                  (13)
#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_SINGLE_P_EN_WIDTH                (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_SINGLE_P_EN_MASK                 (0x2000)
#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_SINGLE_P_EN_BIT                  (0x2000)

#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_SINGLE_N_EN_LSB                  (12)
#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_SINGLE_N_EN_WIDTH                (1)
#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_SINGLE_N_EN_MASK                 (0x1000)
#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_SINGLE_N_EN_BIT                  (0x1000)

#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_RCCAL_CAP_SEL_LSB                (0)
#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_RCCAL_CAP_SEL_WIDTH              (6)
#define MMRF_ABB_DPDADC0_DPDADC_CON5_RG_DPDADC_RCCAL_CAP_SEL_MASK               (0x003F)

#define MMRF_ABB_DPDADC0_DPDADC_CON6_RG_DPDADC_01_LSB                           (0)
#define MMRF_ABB_DPDADC0_DPDADC_CON6_RG_DPDADC_01_WIDTH                         (16)
#define MMRF_ABB_DPDADC0_DPDADC_CON6_RG_DPDADC_01_MASK                          (0xFFFF)

#define MMRF_ABB_DPDADC0_DPDADC_CON7_RGS_DPDADC_01_LSB                    (0)
#define MMRF_ABB_DPDADC0_DPDADC_CON7_RGS_DPDADC_01_WIDTH                  (16)
#define MMRF_ABB_DPDADC0_DPDADC_CON7_RGS_DPDADC_01_MASK                   (0xFFFF)

#define MMRF_ABB_DPDADC0_DPDADC_CON8_RGS_DPDADC_01_LSB                   (0)
#define MMRF_ABB_DPDADC0_DPDADC_CON8_RGS_DPDADC_01_WIDTH                 (16)
#define MMRF_ABB_DPDADC0_DPDADC_CON8_RGS_DPDADC_01_MASK                  (0xFFFF)

#define MMRF_ABB_DPDADC0_DPDADC_CON9_RG_DPDADC_VREF_ADJ_LSB                     (8)
#define MMRF_ABB_DPDADC0_DPDADC_CON9_RG_DPDADC_VREF_ADJ_WIDTH                   (3)
#define MMRF_ABB_DPDADC0_DPDADC_CON9_RG_DPDADC_VREF_ADJ_MASK                    (0x0700)

#define MMRF_ABB_DPDADC0_DPDADC_CON9_RG_DPDADC_LDO1P1_ADJ_LSB                   (4)
#define MMRF_ABB_DPDADC0_DPDADC_CON9_RG_DPDADC_LDO1P1_ADJ_WIDTH                 (3)
#define MMRF_ABB_DPDADC0_DPDADC_CON9_RG_DPDADC_LDO1P1_ADJ_MASK                  (0x0070)

#define MMRF_ABB_DPDADC0_DPDADC_CON9_RG_DPDADC_LDO1P25_ADJ_LSB                  (0)
#define MMRF_ABB_DPDADC0_DPDADC_CON9_RG_DPDADC_LDO1P25_ADJ_WIDTH                (3)
#define MMRF_ABB_DPDADC0_DPDADC_CON9_RG_DPDADC_LDO1P25_ADJ_MASK                 (0x0007)

#define MMRF_ABB_DPDADC0_DPDADC_CONA_RG_DPDADC_BUF_EN_LSB                       (0)
#define MMRF_ABB_DPDADC0_DPDADC_CONA_RG_DPDADC_BUF_EN_WIDTH                     (1)
#define MMRF_ABB_DPDADC0_DPDADC_CONA_RG_DPDADC_BUF_EN_MASK                      (0x0001)
#define MMRF_ABB_DPDADC0_DPDADC_CONA_RG_DPDADC_BUF_EN_BIT                       (0x0001)

#define MMRF_ABB_DPDADC0_DPDADC_CONB_RG_DPDADC_BUF_TEST_EN_LSB                  (0)
#define MMRF_ABB_DPDADC0_DPDADC_CONB_RG_DPDADC_BUF_TEST_EN_WIDTH                (1)
#define MMRF_ABB_DPDADC0_DPDADC_CONB_RG_DPDADC_BUF_TEST_EN_MASK                 (0x0001)
#define MMRF_ABB_DPDADC0_DPDADC_CONB_RG_DPDADC_BUF_TEST_EN_BIT                  (0x0001)

#define MMRF_ABB_DPDADC0_DPDADC_CONC_RG_DPDADC_BUF_GAIN_ADJ_LSB                 (4)
#define MMRF_ABB_DPDADC0_DPDADC_CONC_RG_DPDADC_BUF_GAIN_ADJ_WIDTH               (4)
#define MMRF_ABB_DPDADC0_DPDADC_CONC_RG_DPDADC_BUF_GAIN_ADJ_MASK                (0x00F0)

#define MMRF_ABB_DPDADC0_DPDADC_CONC_RG_DPDADC_BUF_IB_ADJ_LSB                   (2)
#define MMRF_ABB_DPDADC0_DPDADC_CONC_RG_DPDADC_BUF_IB_ADJ_WIDTH                 (2)
#define MMRF_ABB_DPDADC0_DPDADC_CONC_RG_DPDADC_BUF_IB_ADJ_MASK                  (0x000C)

#define MMRF_ABB_DPDADC0_DPDADC_CONC_RG_DPDADC_BUF_LDO_ADJ_LSB                  (0)
#define MMRF_ABB_DPDADC0_DPDADC_CONC_RG_DPDADC_BUF_LDO_ADJ_WIDTH                (2)
#define MMRF_ABB_DPDADC0_DPDADC_CONC_RG_DPDADC_BUF_LDO_ADJ_MASK                 (0x0003)

#define MMRF_ABB_DPDADC0_DPDADC_COND_RG_DPDADC_BUF_LDO_EN_LSB                   (0)
#define MMRF_ABB_DPDADC0_DPDADC_COND_RG_DPDADC_BUF_LDO_EN_WIDTH                 (1)
#define MMRF_ABB_DPDADC0_DPDADC_COND_RG_DPDADC_BUF_LDO_EN_MASK                  (0x0001)
#define MMRF_ABB_DPDADC0_DPDADC_COND_RG_DPDADC_BUF_LDO_EN_BIT                   (0x0001)


#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_CLK_EN_LSB                       (12)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_CLK_EN_WIDTH                     (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_CLK_EN_MASK                      (0x1000)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_CLK_EN_BIT                       (0x1000)

#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_I_DELAY_LSB                      (6)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_I_DELAY_WIDTH                    (2)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_I_DELAY_MASK                     (0x00C0)

#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_Q_DELAY_LSB                      (4)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_Q_DELAY_WIDTH                    (2)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_Q_DELAY_MASK                     (0x0030)

#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_LSB_PWD_LSB                      (0)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_LSB_PWD_WIDTH                    (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_LSB_PWD_MASK                     (0x0001)
#define MMRF_ABB_DPDADC1_DPDADC_CON0_RG_DPDADC_LSB_PWD_BIT                      (0x0001)

#define MMRF_ABB_DPDADC1_DPDADC_CON1_RG_DPDADC_I_COMP_CP_LSB                    (8)
#define MMRF_ABB_DPDADC1_DPDADC_CON1_RG_DPDADC_I_COMP_CP_WIDTH                  (4)
#define MMRF_ABB_DPDADC1_DPDADC_CON1_RG_DPDADC_I_COMP_CP_MASK                   (0x0F00)

#define MMRF_ABB_DPDADC1_DPDADC_CON1_RG_DPDADC_I_COMP_CN_LSB                    (0)
#define MMRF_ABB_DPDADC1_DPDADC_CON1_RG_DPDADC_I_COMP_CN_WIDTH                  (4)
#define MMRF_ABB_DPDADC1_DPDADC_CON1_RG_DPDADC_I_COMP_CN_MASK                   (0x000F)

#define MMRF_ABB_DPDADC1_DPDADC_CON2_RG_DPDADC_Q_COMP_CP_LSB                    (8)
#define MMRF_ABB_DPDADC1_DPDADC_CON2_RG_DPDADC_Q_COMP_CP_WIDTH                  (4)
#define MMRF_ABB_DPDADC1_DPDADC_CON2_RG_DPDADC_Q_COMP_CP_MASK                   (0x0F00)

#define MMRF_ABB_DPDADC1_DPDADC_CON2_RG_DPDADC_Q_COMP_CN_LSB                    (0)
#define MMRF_ABB_DPDADC1_DPDADC_CON2_RG_DPDADC_Q_COMP_CN_WIDTH                  (4)
#define MMRF_ABB_DPDADC1_DPDADC_CON2_RG_DPDADC_Q_COMP_CN_MASK                   (0x000F)

#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_RSTB_LSB                     (13)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_RSTB_WIDTH                   (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_RSTB_MASK                    (0x2000)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_RSTB_BIT                     (0x2000)

#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_EN_LSB                       (12)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_EN_WIDTH                     (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_EN_MASK                      (0x1000)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_EN_BIT                       (0x1000)

#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_I_COR_EN_LSB                     (9)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_I_COR_EN_WIDTH                   (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_I_COR_EN_MASK                    (0x0200)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_I_COR_EN_BIT                     (0x0200)

#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_Q_COR_EN_LSB                     (8)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_Q_COR_EN_WIDTH                   (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_Q_COR_EN_MASK                    (0x0100)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_Q_COR_EN_BIT                     (0x0100)

#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CKO_INV_LSB                      (7)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CKO_INV_WIDTH                    (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CKO_INV_MASK                     (0x0080)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CKO_INV_BIT                      (0x0080)

#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_AVG_NP_LSB                   (4)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_AVG_NP_WIDTH                 (3)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_CAL_AVG_NP_MASK                  (0x0070)

#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_DATA_DIV_LSB                     (0)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_DATA_DIV_WIDTH                   (2)
#define MMRF_ABB_DPDADC1_DPDADC_CON3_RG_DPDADC_DATA_DIV_MASK                    (0x0003)

#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_EXTRABIT_OFF_LSB                 (15)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_EXTRABIT_OFF_WIDTH               (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_EXTRABIT_OFF_MASK                (0x8000)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_EXTRABIT_OFF_BIT                 (0x8000)

#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_CAL_EN_LSB                   (13)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_CAL_EN_WIDTH                 (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_CAL_EN_MASK                  (0x2000)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_CAL_EN_BIT                   (0x2000)

#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_MANUAL_LSB                   (12)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_MANUAL_WIDTH                 (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_MANUAL_MASK                  (0x1000)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_MANUAL_BIT                   (0x1000)

#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_CP_CN_SWP_LSB                (11)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_CP_CN_SWP_WIDTH              (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_CP_CN_SWP_MASK               (0x0800)
#define MMRF_ABB_DPDADC1_DPDADC_CON4_RG_DPDADC_OFS_CP_CN_SWP_BIT                (0x0800)

#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_SINGLE_P_EN_LSB                  (13)
#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_SINGLE_P_EN_WIDTH                (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_SINGLE_P_EN_MASK                 (0x2000)
#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_SINGLE_P_EN_BIT                  (0x2000)

#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_SINGLE_N_EN_LSB                  (12)
#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_SINGLE_N_EN_WIDTH                (1)
#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_SINGLE_N_EN_MASK                 (0x1000)
#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_SINGLE_N_EN_BIT                  (0x1000)

#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_RCCAL_CAP_SEL_LSB                (0)
#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_RCCAL_CAP_SEL_WIDTH              (6)
#define MMRF_ABB_DPDADC1_DPDADC_CON5_RG_DPDADC_RCCAL_CAP_SEL_MASK               (0x003F)

#define MMRF_ABB_DPDADC1_DPDADC_CON6_RG_DPDADC_01_LSB                           (0)
#define MMRF_ABB_DPDADC1_DPDADC_CON6_RG_DPDADC_01_WIDTH                         (16)
#define MMRF_ABB_DPDADC1_DPDADC_CON6_RG_DPDADC_01_MASK                          (0xFFFF)

#define MMRF_ABB_DPDADC1_DPDADC_CON7_RGS_DPDADC_01_15_0_LSB                    (0)
#define MMRF_ABB_DPDADC1_DPDADC_CON7_RGS_DPDADC_01_15_0_WIDTH                  (16)
#define MMRF_ABB_DPDADC1_DPDADC_CON7_RGS_DPDADC_01_15_0_MASK                   (0xFFFF)

#define MMRF_ABB_DPDADC1_DPDADC_CON8_RGS_DPDADC_01_31_16_LSB                   (0)
#define MMRF_ABB_DPDADC1_DPDADC_CON8_RGS_DPDADC_01_31_16_WIDTH                 (16)
#define MMRF_ABB_DPDADC1_DPDADC_CON8_RGS_DPDADC_01_31_16_MASK                  (0xFFFF)

#define MMRF_ABB_DPDADC1_DPDADC_CON9_RG_DPDADC_VREF_ADJ_LSB                     (8)
#define MMRF_ABB_DPDADC1_DPDADC_CON9_RG_DPDADC_VREF_ADJ_WIDTH                   (3)
#define MMRF_ABB_DPDADC1_DPDADC_CON9_RG_DPDADC_VREF_ADJ_MASK                    (0x0700)

#define MMRF_ABB_DPDADC1_DPDADC_CON9_RG_DPDADC_LDO1P1_ADJ_LSB                   (4)
#define MMRF_ABB_DPDADC1_DPDADC_CON9_RG_DPDADC_LDO1P1_ADJ_WIDTH                 (3)
#define MMRF_ABB_DPDADC1_DPDADC_CON9_RG_DPDADC_LDO1P1_ADJ_MASK                  (0x0070)

#define MMRF_ABB_DPDADC1_DPDADC_CON9_RG_DPDADC_LDO1P25_ADJ_LSB                  (0)
#define MMRF_ABB_DPDADC1_DPDADC_CON9_RG_DPDADC_LDO1P25_ADJ_WIDTH                (3)
#define MMRF_ABB_DPDADC1_DPDADC_CON9_RG_DPDADC_LDO1P25_ADJ_MASK                 (0x0007)

#define MMRF_ABB_DPDADC1_DPDADC_CONA_RG_DPDADC_BUF_EN_LSB                       (0)
#define MMRF_ABB_DPDADC1_DPDADC_CONA_RG_DPDADC_BUF_EN_WIDTH                     (1)
#define MMRF_ABB_DPDADC1_DPDADC_CONA_RG_DPDADC_BUF_EN_MASK                      (0x0001)
#define MMRF_ABB_DPDADC1_DPDADC_CONA_RG_DPDADC_BUF_EN_BIT                       (0x0001)

#define MMRF_ABB_DPDADC1_DPDADC_CONB_RG_DPDADC_BUF_TEST_EN_LSB                  (0)
#define MMRF_ABB_DPDADC1_DPDADC_CONB_RG_DPDADC_BUF_TEST_EN_WIDTH                (1)
#define MMRF_ABB_DPDADC1_DPDADC_CONB_RG_DPDADC_BUF_TEST_EN_MASK                 (0x0001)
#define MMRF_ABB_DPDADC1_DPDADC_CONB_RG_DPDADC_BUF_TEST_EN_BIT                  (0x0001)

#define MMRF_ABB_DPDADC1_DPDADC_CONC_RG_DPDADC_BUF_GAIN_ADJ_LSB                 (4)
#define MMRF_ABB_DPDADC1_DPDADC_CONC_RG_DPDADC_BUF_GAIN_ADJ_WIDTH               (4)
#define MMRF_ABB_DPDADC1_DPDADC_CONC_RG_DPDADC_BUF_GAIN_ADJ_MASK                (0x00F0)

#define MMRF_ABB_DPDADC1_DPDADC_CONC_RG_DPDADC_BUF_IB_ADJ_LSB                   (2)
#define MMRF_ABB_DPDADC1_DPDADC_CONC_RG_DPDADC_BUF_IB_ADJ_WIDTH                 (2)
#define MMRF_ABB_DPDADC1_DPDADC_CONC_RG_DPDADC_BUF_IB_ADJ_MASK                  (0x000C)

#define MMRF_ABB_DPDADC1_DPDADC_CONC_RG_DPDADC_BUF_LDO_ADJ_LSB                  (0)
#define MMRF_ABB_DPDADC1_DPDADC_CONC_RG_DPDADC_BUF_LDO_ADJ_WIDTH                (2)
#define MMRF_ABB_DPDADC1_DPDADC_CONC_RG_DPDADC_BUF_LDO_ADJ_MASK                 (0x0003)

#define MMRF_ABB_DPDADC1_DPDADC_COND_RG_DPDADC_BUF_LDO_EN_LSB                   (0)
#define MMRF_ABB_DPDADC1_DPDADC_COND_RG_DPDADC_BUF_LDO_EN_WIDTH                 (1)
#define MMRF_ABB_DPDADC1_DPDADC_COND_RG_DPDADC_BUF_LDO_EN_MASK                  (0x0001)
#define MMRF_ABB_DPDADC1_DPDADC_COND_RG_DPDADC_BUF_LDO_EN_BIT                   (0x0001)


#define MMRF_ABB_ETDAC0_ETDAC_CON0_RG_ETDAC_LDO16_VGEAR_VK10_LSB                (4)
#define MMRF_ABB_ETDAC0_ETDAC_CON0_RG_ETDAC_LDO16_VGEAR_VK10_WIDTH              (2)
#define MMRF_ABB_ETDAC0_ETDAC_CON0_RG_ETDAC_LDO16_VGEAR_VK10_MASK               (0x0030)

#define MMRF_ABB_ETDAC0_ETDAC_CON0_RG_ETDAC_LDO15_VGEAR_VK10_LSB                (2)
#define MMRF_ABB_ETDAC0_ETDAC_CON0_RG_ETDAC_LDO15_VGEAR_VK10_WIDTH              (2)
#define MMRF_ABB_ETDAC0_ETDAC_CON0_RG_ETDAC_LDO15_VGEAR_VK10_MASK               (0x000C)

#define MMRF_ABB_ETDAC0_ETDAC_CON0_RG_ETDAC_REF_VGEAR_VK10_LSB                  (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON0_RG_ETDAC_REF_VGEAR_VK10_WIDTH                (2)
#define MMRF_ABB_ETDAC0_ETDAC_CON0_RG_ETDAC_REF_VGEAR_VK10_MASK                 (0x0003)

#define MMRF_ABB_ETDAC0_ETDAC_CON1_RG_ETDAC_VCM_VGEAR_VK10_LSB                  (4)
#define MMRF_ABB_ETDAC0_ETDAC_CON1_RG_ETDAC_VCM_VGEAR_VK10_WIDTH                (3)
#define MMRF_ABB_ETDAC0_ETDAC_CON1_RG_ETDAC_VCM_VGEAR_VK10_MASK                 (0x0070)

#define MMRF_ABB_ETDAC0_ETDAC_CON1_RG_ETDAC_LDO10_VGEAR_VK10_LSB                (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON1_RG_ETDAC_LDO10_VGEAR_VK10_WIDTH              (3)
#define MMRF_ABB_ETDAC0_ETDAC_CON1_RG_ETDAC_LDO10_VGEAR_VK10_MASK               (0x0007)

#define MMRF_ABB_ETDAC0_ETDAC_CON3_RG_ETDAC_CLK_SEL_VK10_LSB                    (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON3_RG_ETDAC_CLK_SEL_VK10_WIDTH                  (1)
#define MMRF_ABB_ETDAC0_ETDAC_CON3_RG_ETDAC_CLK_SEL_VK10_MASK                   (0x0001)
#define MMRF_ABB_ETDAC0_ETDAC_CON3_RG_ETDAC_CLK_SEL_VK10_BIT                    (0x0001)

#define MMRF_ABB_ETDAC0_ETDAC_CON4_RG_ETDAC_SPARE_VK10_LSB                      (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON4_RG_ETDAC_SPARE_VK10_WIDTH                    (8)
#define MMRF_ABB_ETDAC0_ETDAC_CON4_RG_ETDAC_SPARE_VK10_MASK                     (0x00FF)

#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWDAC_VK10_LSB                      (5)
#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWDAC_VK10_WIDTH                    (1)
#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWDAC_VK10_MASK                     (0x0020)
#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWDAC_VK10_BIT                      (0x0020)

#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWLPF_VK10_LSB                      (4)
#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWLPF_VK10_WIDTH                    (1)
#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWLPF_VK10_MASK                     (0x0010)
#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWLPF_VK10_BIT                      (0x0010)

#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWPAD_VK10_LSB                      (3)
#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWPAD_VK10_WIDTH                    (1)
#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWPAD_VK10_MASK                     (0x0008)
#define MMRF_ABB_ETDAC0_ETDAC_CON5_RG_ETDAC_SWPAD_VK10_BIT                      (0x0008)

#define MMRF_ABB_ETDAC0_ETDAC_CON6_RG_ETDAC_RSEL_LSB                            (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON6_RG_ETDAC_RSEL_WIDTH                          (4)
#define MMRF_ABB_ETDAC0_ETDAC_CON6_RG_ETDAC_RSEL_MASK                           (0x000F)

#define MMRF_ABB_ETDAC0_ETDAC_CON8_RG_ETDAC_GAIN_LSB                            (12)
#define MMRF_ABB_ETDAC0_ETDAC_CON8_RG_ETDAC_GAIN_WIDTH                          (4)
#define MMRF_ABB_ETDAC0_ETDAC_CON8_RG_ETDAC_GAIN_MASK                           (0xF000)

#define MMRF_ABB_ETDAC0_ETDAC_CON8_RG_ETDAC_SEQ_RSV_LSB                         (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON8_RG_ETDAC_SEQ_RSV_WIDTH                       (12)
#define MMRF_ABB_ETDAC0_ETDAC_CON8_RG_ETDAC_SEQ_RSV_MASK                        (0x0FFF)

#define MMRF_ABB_ETDAC0_ETDAC_CON9_RG_ETDAC_BIAS_SELI_VK10_LSB                  (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON9_RG_ETDAC_BIAS_SELI_VK10_WIDTH                (8)
#define MMRF_ABB_ETDAC0_ETDAC_CON9_RG_ETDAC_BIAS_SELI_VK10_MASK                 (0x00FF)

#define MMRF_ABB_ETDAC0_ETDAC_CONA_DA_ETDAC_CSEL_VK10_LSB                       (0)
#define MMRF_ABB_ETDAC0_ETDAC_CONA_DA_ETDAC_CSEL_VK10_WIDTH                     (6)
#define MMRF_ABB_ETDAC0_ETDAC_CONA_DA_ETDAC_CSEL_VK10_MASK                      (0x003F)

#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_EN_LSB                          (12)
#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_EN_WIDTH                        (1)
#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_EN_MASK                         (0x1000)
#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_EN_BIT                          (0x1000)

#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_CFG_LSB                         (4)
#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_CFG_WIDTH                       (6)
#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_CFG_MASK                        (0x03F0)

#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_RSTB_LSB                        (0)
#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_RSTB_WIDTH                      (1)
#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_RSTB_MASK                       (0x0001)
#define MMRF_ABB_ETDAC0_ETDAC_CONB_DA_ETDAC_SEQ_RSTB_BIT                        (0x0001)

#define MMRF_ABB_ETDAC0_ETDAC_CONE_DA_ETDAC_BW_VK10_LTE_LSB                     (0)
#define MMRF_ABB_ETDAC0_ETDAC_CONE_DA_ETDAC_BW_VK10_LTE_WIDTH                   (1)
#define MMRF_ABB_ETDAC0_ETDAC_CONE_DA_ETDAC_BW_VK10_LTE_MASK                    (0x0001)
#define MMRF_ABB_ETDAC0_ETDAC_CONE_DA_ETDAC_BW_VK10_LTE_BIT                     (0x0001)

#define MMRF_ABB_ETDAC0_ETDAC_CONF_DA_ETDAC_BW_VK10_3G_LSB                      (1)
#define MMRF_ABB_ETDAC0_ETDAC_CONF_DA_ETDAC_BW_VK10_3G_WIDTH                    (1)
#define MMRF_ABB_ETDAC0_ETDAC_CONF_DA_ETDAC_BW_VK10_3G_MASK                     (0x0002)
#define MMRF_ABB_ETDAC0_ETDAC_CONF_DA_ETDAC_BW_VK10_3G_BIT                      (0x0002)

#define MMRF_ABB_ETDAC0_ETDAC_CONF_DA_ETDAC_BW_VK10_TDD_LSB                     (0)
#define MMRF_ABB_ETDAC0_ETDAC_CONF_DA_ETDAC_BW_VK10_TDD_WIDTH                   (1)
#define MMRF_ABB_ETDAC0_ETDAC_CONF_DA_ETDAC_BW_VK10_TDD_MASK                    (0x0001)
#define MMRF_ABB_ETDAC0_ETDAC_CONF_DA_ETDAC_BW_VK10_TDD_BIT                     (0x0001)

#define MMRF_ABB_ETDAC0_ETDAC_CON10_RG_ETDAC_CAL_EN_LSB                         (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON10_RG_ETDAC_CAL_EN_WIDTH                       (1)
#define MMRF_ABB_ETDAC0_ETDAC_CON10_RG_ETDAC_CAL_EN_MASK                        (0x0001)
#define MMRF_ABB_ETDAC0_ETDAC_CON10_RG_ETDAC_CAL_EN_BIT                         (0x0001)

#define MMRF_ABB_ETDAC0_ETDAC_CON11_RG_ETDAC_01_LSB                             (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON11_RG_ETDAC_01_WIDTH                           (16)
#define MMRF_ABB_ETDAC0_ETDAC_CON11_RG_ETDAC_01_MASK                            (0xFFFF)

#define MMRF_ABB_ETDAC0_ETDAC_CON12_RG_ETDAC_02_LSB                             (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON12_RG_ETDAC_02_WIDTH                           (16)
#define MMRF_ABB_ETDAC0_ETDAC_CON12_RG_ETDAC_02_MASK                            (0xFFFF)

#define MMRF_ABB_ETDAC0_ETDAC_CON13_RGS_ETDAC_01_LSB                            (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON13_RGS_ETDAC_01_WIDTH                          (16)
#define MMRF_ABB_ETDAC0_ETDAC_CON13_RGS_ETDAC_01_MASK                           (0xFFFF)

#define MMRF_ABB_ETDAC0_ETDAC_CON14_RGS_ETDAC_02_LSB                            (0)
#define MMRF_ABB_ETDAC0_ETDAC_CON14_RGS_ETDAC_02_WIDTH                          (16)
#define MMRF_ABB_ETDAC0_ETDAC_CON14_RGS_ETDAC_02_MASK                           (0xFFFF)


#define MMRF_ABB_ETDAC1_ETDAC_CON0_RG_ETDAC_LDO16_VGEAR_VK10_LSB                (4)
#define MMRF_ABB_ETDAC1_ETDAC_CON0_RG_ETDAC_LDO16_VGEAR_VK10_WIDTH              (2)
#define MMRF_ABB_ETDAC1_ETDAC_CON0_RG_ETDAC_LDO16_VGEAR_VK10_MASK               (0x0030)

#define MMRF_ABB_ETDAC1_ETDAC_CON0_RG_ETDAC_LDO15_VGEAR_VK10_LSB                (2)
#define MMRF_ABB_ETDAC1_ETDAC_CON0_RG_ETDAC_LDO15_VGEAR_VK10_WIDTH              (2)
#define MMRF_ABB_ETDAC1_ETDAC_CON0_RG_ETDAC_LDO15_VGEAR_VK10_MASK               (0x000C)

#define MMRF_ABB_ETDAC1_ETDAC_CON0_RG_ETDAC_REF_VGEAR_VK10_LSB                  (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON0_RG_ETDAC_REF_VGEAR_VK10_WIDTH                (2)
#define MMRF_ABB_ETDAC1_ETDAC_CON0_RG_ETDAC_REF_VGEAR_VK10_MASK                 (0x0003)

#define MMRF_ABB_ETDAC1_ETDAC_CON1_RG_ETDAC_VCM_VGEAR_VK10_LSB                  (4)
#define MMRF_ABB_ETDAC1_ETDAC_CON1_RG_ETDAC_VCM_VGEAR_VK10_WIDTH                (3)
#define MMRF_ABB_ETDAC1_ETDAC_CON1_RG_ETDAC_VCM_VGEAR_VK10_MASK                 (0x0070)

#define MMRF_ABB_ETDAC1_ETDAC_CON1_RG_ETDAC_LDO10_VGEAR_VK10_LSB                (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON1_RG_ETDAC_LDO10_VGEAR_VK10_WIDTH              (3)
#define MMRF_ABB_ETDAC1_ETDAC_CON1_RG_ETDAC_LDO10_VGEAR_VK10_MASK               (0x0007)

#define MMRF_ABB_ETDAC1_ETDAC_CON3_RG_ETDAC_CLK_SEL_VK10_LSB                    (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON3_RG_ETDAC_CLK_SEL_VK10_WIDTH                  (1)
#define MMRF_ABB_ETDAC1_ETDAC_CON3_RG_ETDAC_CLK_SEL_VK10_MASK                   (0x0001)
#define MMRF_ABB_ETDAC1_ETDAC_CON3_RG_ETDAC_CLK_SEL_VK10_BIT                    (0x0001)

#define MMRF_ABB_ETDAC1_ETDAC_CON4_RG_ETDAC_SPARE_VK10_LSB                      (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON4_RG_ETDAC_SPARE_VK10_WIDTH                    (8)
#define MMRF_ABB_ETDAC1_ETDAC_CON4_RG_ETDAC_SPARE_VK10_MASK                     (0x00FF)

#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWDAC_VK10_LSB                      (5)
#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWDAC_VK10_WIDTH                    (1)
#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWDAC_VK10_MASK                     (0x0020)
#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWDAC_VK10_BIT                      (0x0020)

#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWLPF_VK10_LSB                      (4)
#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWLPF_VK10_WIDTH                    (1)
#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWLPF_VK10_MASK                     (0x0010)
#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWLPF_VK10_BIT                      (0x0010)

#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWPAD_VK10_LSB                      (3)
#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWPAD_VK10_WIDTH                    (1)
#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWPAD_VK10_MASK                     (0x0008)
#define MMRF_ABB_ETDAC1_ETDAC_CON5_RG_ETDAC_SWPAD_VK10_BIT                      (0x0008)

#define MMRF_ABB_ETDAC1_ETDAC_CON6_RG_ETDAC_RSEL_LSB                            (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON6_RG_ETDAC_RSEL_WIDTH                          (4)
#define MMRF_ABB_ETDAC1_ETDAC_CON6_RG_ETDAC_RSEL_MASK                           (0x000F)

#define MMRF_ABB_ETDAC1_ETDAC_CON8_RG_ETDAC_GAIN_LSB                            (12)
#define MMRF_ABB_ETDAC1_ETDAC_CON8_RG_ETDAC_GAIN_WIDTH                          (4)
#define MMRF_ABB_ETDAC1_ETDAC_CON8_RG_ETDAC_GAIN_MASK                           (0xF000)

#define MMRF_ABB_ETDAC1_ETDAC_CON8_RG_ETDAC_SEQ_RSV_LSB                         (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON8_RG_ETDAC_SEQ_RSV_WIDTH                       (12)
#define MMRF_ABB_ETDAC1_ETDAC_CON8_RG_ETDAC_SEQ_RSV_MASK                        (0x0FFF)

#define MMRF_ABB_ETDAC1_ETDAC_CON9_RG_ETDAC_BIAS_SELI_VK10_LSB                  (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON9_RG_ETDAC_BIAS_SELI_VK10_WIDTH                (8)
#define MMRF_ABB_ETDAC1_ETDAC_CON9_RG_ETDAC_BIAS_SELI_VK10_MASK                 (0x00FF)

#define MMRF_ABB_ETDAC1_ETDAC_CONA_DA_ETDAC_CSEL_VK10_LSB                       (0)
#define MMRF_ABB_ETDAC1_ETDAC_CONA_DA_ETDAC_CSEL_VK10_WIDTH                     (6)
#define MMRF_ABB_ETDAC1_ETDAC_CONA_DA_ETDAC_CSEL_VK10_MASK                      (0x003F)

#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_EN_LSB                          (12)
#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_EN_WIDTH                        (1)
#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_EN_MASK                         (0x1000)
#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_EN_BIT                          (0x1000)

#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_CFG_LSB                         (4)
#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_CFG_WIDTH                       (6)
#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_CFG_MASK                        (0x03F0)

#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_RSTB_LSB                        (0)
#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_RSTB_WIDTH                      (1)
#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_RSTB_MASK                       (0x0001)
#define MMRF_ABB_ETDAC1_ETDAC_CONB_DA_ETDAC_SEQ_RSTB_BIT                        (0x0001)

#define MMRF_ABB_ETDAC1_ETDAC_CONE_DA_ETDAC_BW_VK10_LTE_LSB                     (0)
#define MMRF_ABB_ETDAC1_ETDAC_CONE_DA_ETDAC_BW_VK10_LTE_WIDTH                   (1)
#define MMRF_ABB_ETDAC1_ETDAC_CONE_DA_ETDAC_BW_VK10_LTE_MASK                    (0x0001)
#define MMRF_ABB_ETDAC1_ETDAC_CONE_DA_ETDAC_BW_VK10_LTE_BIT                     (0x0001)

#define MMRF_ABB_ETDAC1_ETDAC_CONF_DA_ETDAC_BW_VK10_3G_LSB                      (1)
#define MMRF_ABB_ETDAC1_ETDAC_CONF_DA_ETDAC_BW_VK10_3G_WIDTH                    (1)
#define MMRF_ABB_ETDAC1_ETDAC_CONF_DA_ETDAC_BW_VK10_3G_MASK                     (0x0002)
#define MMRF_ABB_ETDAC1_ETDAC_CONF_DA_ETDAC_BW_VK10_3G_BIT                      (0x0002)

#define MMRF_ABB_ETDAC1_ETDAC_CONF_DA_ETDAC_BW_VK10_TDD_LSB                     (0)
#define MMRF_ABB_ETDAC1_ETDAC_CONF_DA_ETDAC_BW_VK10_TDD_WIDTH                   (1)
#define MMRF_ABB_ETDAC1_ETDAC_CONF_DA_ETDAC_BW_VK10_TDD_MASK                    (0x0001)
#define MMRF_ABB_ETDAC1_ETDAC_CONF_DA_ETDAC_BW_VK10_TDD_BIT                     (0x0001)

#define MMRF_ABB_ETDAC1_ETDAC_CON10_RG_ETDAC_CAL_EN_LSB                         (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON10_RG_ETDAC_CAL_EN_WIDTH                       (1)
#define MMRF_ABB_ETDAC1_ETDAC_CON10_RG_ETDAC_CAL_EN_MASK                        (0x0001)
#define MMRF_ABB_ETDAC1_ETDAC_CON10_RG_ETDAC_CAL_EN_BIT                         (0x0001)

#define MMRF_ABB_ETDAC1_ETDAC_CON11_RG_ETDAC_01_LSB                             (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON11_RG_ETDAC_01_WIDTH                           (16)
#define MMRF_ABB_ETDAC1_ETDAC_CON11_RG_ETDAC_01_MASK                            (0xFFFF)

#define MMRF_ABB_ETDAC1_ETDAC_CON12_RG_ETDAC_02_LSB                             (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON12_RG_ETDAC_02_WIDTH                           (16)
#define MMRF_ABB_ETDAC1_ETDAC_CON12_RG_ETDAC_02_MASK                            (0xFFFF)

#define MMRF_ABB_ETDAC1_ETDAC_CON13_RGS_ETDAC_01_LSB                            (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON13_RGS_ETDAC_01_WIDTH                          (16)
#define MMRF_ABB_ETDAC1_ETDAC_CON13_RGS_ETDAC_01_MASK                           (0xFFFF)

#define MMRF_ABB_ETDAC1_ETDAC_CON14_RGS_ETDAC_02_LSB                            (0)
#define MMRF_ABB_ETDAC1_ETDAC_CON14_RGS_ETDAC_02_WIDTH                          (16)
#define MMRF_ABB_ETDAC1_ETDAC_CON14_RGS_ETDAC_02_MASK                           (0xFFFF)


#define MMRF_ABB_PBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_LSB  (15)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_WIDTH (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_MASK (0x8000)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_BIT  (0x8000)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_LSB           (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_WIDTH         (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_MASK          (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_LSB            (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_WIDTH          (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_MASK           (0x0003)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_LSB        (15)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_WIDTH      (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_MASK       (0x8000)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_BIT        (0x8000)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_LSB          (10)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_WIDTH        (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_MASK         (0x3C00)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_LSB        (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_WIDTH      (10)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_MASK       (0x03FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_LSB                (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_WIDTH              (16)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_MASK               (0xFFFF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_LSB            (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_WIDTH          (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_MASK           (0x000F)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_LSB             (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_WIDTH           (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_MASK            (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_LSB              (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_WIDTH            (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_MASK             (0x000F)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_LSB           (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_WIDTH         (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_MASK          (0x0004)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_BIT           (0x0004)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_LSB      (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_WIDTH    (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_MASK     (0x0002)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_BIT      (0x0002)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_LSB     (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_WIDTH   (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_MASK    (0x0001)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_BIT     (0x0001)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_LSB       (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_WIDTH     (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_MASK      (0xFF00)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_LSB       (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_WIDTH     (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_MASK      (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_LSB              (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_WIDTH            (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_MASK             (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_LSB              (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_WIDTH            (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_MASK             (0xFF00)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_LSB              (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_WIDTH            (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_MASK             (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_LSB              (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_WIDTH            (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_MASK             (0xFF00)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_LSB             (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_WIDTH           (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_MASK            (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_LSB               (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_WIDTH             (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_MASK              (0x000F)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_LSB            (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_WIDTH          (16)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_MASK           (0xFFFF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_LSB            (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_WIDTH          (16)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_MASK           (0xFFFF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_LSB    (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_WIDTH  (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_MASK   (0x0100)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_BIT    (0x0100)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_LSB     (6)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_WIDTH   (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_MASK    (0x00C0)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_LSB       (5)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_WIDTH     (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_MASK      (0x0020)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_BIT       (0x0020)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_LSB  (3)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_WIDTH (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_MASK (0x0018)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_LSB      (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_WIDTH    (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_MASK     (0x0004)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_BIT      (0x0004)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_LSB    (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_WIDTH  (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_MASK   (0x0003)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_LSB    (12)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_WIDTH  (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_MASK   (0xF000)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_LSB    (10)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_WIDTH  (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_MASK   (0x0400)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_BIT    (0x0400)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_LSB      (9)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_WIDTH    (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_MASK     (0x0200)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_BIT      (0x0200)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_LSB    (6)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_WIDTH  (3)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_MASK   (0x01C0)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_LSB        (5)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_WIDTH      (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_MASK       (0x0020)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_BIT        (0x0020)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_LSB        (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_WIDTH      (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_MASK       (0x0010)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_BIT        (0x0010)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_LSB             (3)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_WIDTH           (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_MASK            (0x0008)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_BIT             (0x0008)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_LSB     (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_WIDTH   (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_MASK    (0x0004)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_BIT     (0x0004)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_LSB     (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_WIDTH   (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_MASK    (0x0002)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_BIT     (0x0002)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_LSB   (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_WIDTH (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_MASK  (0x0001)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_BIT   (0x0001)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_LSB     (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_WIDTH   (10)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_MASK    (0x03FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_LSB     (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_WIDTH   (10)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_MASK    (0x03FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_LSB (3)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_WIDTH (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_MASK (0x0008)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_BIT (0x0008)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_LSB (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_WIDTH (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_MASK (0x0004)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_BIT (0x0004)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_LSB         (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_WIDTH       (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_MASK        (0x0002)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_BIT         (0x0002)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_LSB         (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_WIDTH       (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_MASK        (0x0001)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_BIT         (0x0001)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_LSB          (15)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_WIDTH        (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_MASK         (0x8000)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_BIT          (0x8000)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_LSB          (12)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_WIDTH        (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_MASK         (0x3000)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_LSB          (10)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_WIDTH        (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_MASK         (0x0C00)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_LSB          (9)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_WIDTH        (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_MASK         (0x0200)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_BIT          (0x0200)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_LSB    (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_WIDTH  (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_MASK   (0xFF00)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_LSB    (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_WIDTH  (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_MASK   (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_LSB   (12)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_WIDTH (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_MASK  (0x1000)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_BIT   (0x1000)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_LSB       (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_WIDTH     (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_MASK      (0x0300)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_LSB       (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_WIDTH     (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_MASK      (0x0030)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_LSB     (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_WIDTH   (2)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_MASK    (0x0003)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_LSB       (12)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_WIDTH     (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_MASK      (0xF000)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_LSB       (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_WIDTH     (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_MASK      (0x0F00)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_LSB      (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_WIDTH    (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_MASK     (0x00F0)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_LSB      (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_WIDTH    (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_MASK     (0x000F)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_LSB     (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_WIDTH   (6)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_MASK    (0x3F00)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_LSB     (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_WIDTH   (6)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_MASK    (0x003F)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_WIDTH                (16)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_MASK                 (0xFFFF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_LSB                 (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_WIDTH               (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_MASK                (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_WIDTH                (10)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_MASK                 (0x03FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_LSB                   (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_WIDTH                 (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_MASK                  (0x0100)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_BIT                   (0x0100)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_LSB                 (4)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_WIDTH               (1)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_MASK                (0x0010)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_BIT                 (0x0010)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_LSB          (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_WIDTH        (6)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_MASK         (0x003F)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_LSB        (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_WIDTH      (6)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_MASK       (0x003F)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_LSB                  (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_WIDTH                (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_MASK                 (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_LSB                 (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_WIDTH               (8)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_MASK                (0x00FF)

#define MMRF_ABB_PBBRX0_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_WIDTH                (16)
#define MMRF_ABB_PBBRX0_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_MASK                 (0xFFFF)


#define MMRF_ABB_PBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_LSB  (15)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_WIDTH (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_MASK (0x8000)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_BIT  (0x8000)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_LSB           (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_WIDTH         (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_MASK          (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_LSB            (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_WIDTH          (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_MASK           (0x0003)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_LSB        (15)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_WIDTH      (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_MASK       (0x8000)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_BIT        (0x8000)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_LSB          (10)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_WIDTH        (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_MASK         (0x3C00)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_LSB        (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_WIDTH      (10)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_MASK       (0x03FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_LSB                (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_WIDTH              (16)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_MASK               (0xFFFF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_LSB            (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_WIDTH          (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_MASK           (0x000F)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_LSB             (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_WIDTH           (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_MASK            (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_LSB              (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_WIDTH            (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_MASK             (0x000F)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_LSB           (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_WIDTH         (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_MASK          (0x0004)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_BIT           (0x0004)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_LSB      (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_WIDTH    (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_MASK     (0x0002)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_BIT      (0x0002)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_LSB     (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_WIDTH   (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_MASK    (0x0001)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_BIT     (0x0001)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_LSB       (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_WIDTH     (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_MASK      (0xFF00)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_LSB       (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_WIDTH     (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_MASK      (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_LSB              (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_WIDTH            (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_MASK             (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_LSB              (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_WIDTH            (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_MASK             (0xFF00)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_LSB              (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_WIDTH            (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_MASK             (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_LSB              (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_WIDTH            (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_MASK             (0xFF00)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_LSB             (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_WIDTH           (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_MASK            (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_LSB               (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_WIDTH             (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_MASK              (0x000F)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_LSB            (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_WIDTH          (16)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_MASK           (0xFFFF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_LSB            (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_WIDTH          (16)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_MASK           (0xFFFF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_LSB    (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_WIDTH  (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_MASK   (0x0100)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_BIT    (0x0100)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_LSB     (6)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_WIDTH   (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_MASK    (0x00C0)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_LSB       (5)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_WIDTH     (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_MASK      (0x0020)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_BIT       (0x0020)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_LSB  (3)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_WIDTH (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_MASK (0x0018)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_LSB      (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_WIDTH    (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_MASK     (0x0004)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_BIT      (0x0004)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_LSB    (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_WIDTH  (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_MASK   (0x0003)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_LSB    (12)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_WIDTH  (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_MASK   (0xF000)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_LSB    (10)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_WIDTH  (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_MASK   (0x0400)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_BIT    (0x0400)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_LSB      (9)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_WIDTH    (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_MASK     (0x0200)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_BIT      (0x0200)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_LSB    (6)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_WIDTH  (3)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_MASK   (0x01C0)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_LSB        (5)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_WIDTH      (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_MASK       (0x0020)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_BIT        (0x0020)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_LSB        (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_WIDTH      (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_MASK       (0x0010)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_BIT        (0x0010)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_LSB             (3)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_WIDTH           (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_MASK            (0x0008)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_BIT             (0x0008)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_LSB     (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_WIDTH   (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_MASK    (0x0004)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_BIT     (0x0004)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_LSB     (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_WIDTH   (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_MASK    (0x0002)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_BIT     (0x0002)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_LSB   (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_WIDTH (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_MASK  (0x0001)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_BIT   (0x0001)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_LSB     (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_WIDTH   (10)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_MASK    (0x03FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_LSB     (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_WIDTH   (10)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_MASK    (0x03FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_LSB (3)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_WIDTH (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_MASK (0x0008)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_BIT (0x0008)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_LSB (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_WIDTH (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_MASK (0x0004)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_BIT (0x0004)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_LSB         (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_WIDTH       (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_MASK        (0x0002)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_BIT         (0x0002)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_LSB         (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_WIDTH       (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_MASK        (0x0001)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_BIT         (0x0001)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_LSB          (15)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_WIDTH        (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_MASK         (0x8000)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_BIT          (0x8000)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_LSB          (12)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_WIDTH        (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_MASK         (0x3000)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_LSB          (10)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_WIDTH        (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_MASK         (0x0C00)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_LSB          (9)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_WIDTH        (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_MASK         (0x0200)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_BIT          (0x0200)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_LSB    (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_WIDTH  (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_MASK   (0xFF00)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_LSB    (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_WIDTH  (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_MASK   (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_LSB   (12)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_WIDTH (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_MASK  (0x1000)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_BIT   (0x1000)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_LSB       (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_WIDTH     (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_MASK      (0x0300)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_LSB       (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_WIDTH     (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_MASK      (0x0030)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_LSB     (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_WIDTH   (2)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_MASK    (0x0003)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_LSB       (12)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_WIDTH     (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_MASK      (0xF000)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_LSB       (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_WIDTH     (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_MASK      (0x0F00)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_LSB      (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_WIDTH    (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_MASK     (0x00F0)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_LSB      (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_WIDTH    (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_MASK     (0x000F)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_LSB     (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_WIDTH   (6)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_MASK    (0x3F00)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_LSB     (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_WIDTH   (6)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_MASK    (0x003F)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_WIDTH                (16)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_MASK                 (0xFFFF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_LSB                 (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_WIDTH               (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_MASK                (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_WIDTH                (10)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_MASK                 (0x03FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_LSB                   (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_WIDTH                 (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_MASK                  (0x0100)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_BIT                   (0x0100)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_LSB                 (4)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_WIDTH               (1)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_MASK                (0x0010)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_BIT                 (0x0010)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_LSB          (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_WIDTH        (6)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_MASK         (0x003F)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_LSB        (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_WIDTH      (6)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_MASK       (0x003F)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_LSB                  (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_WIDTH                (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_MASK                 (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_LSB                 (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_WIDTH               (8)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_MASK                (0x00FF)

#define MMRF_ABB_PBBRX1_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_WIDTH                (16)
#define MMRF_ABB_PBBRX1_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_MASK                 (0xFFFF)


#define MMRF_ABB_PBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_LSB  (15)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_WIDTH (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_MASK (0x8000)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_BIT  (0x8000)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_LSB           (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_WIDTH         (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_MASK          (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_LSB            (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_WIDTH          (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_MASK           (0x0003)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_LSB        (15)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_WIDTH      (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_MASK       (0x8000)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_BIT        (0x8000)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_LSB          (10)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_WIDTH        (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_MASK         (0x3C00)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_LSB        (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_WIDTH      (10)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_MASK       (0x03FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_LSB                (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_WIDTH              (16)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_MASK               (0xFFFF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_LSB            (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_WIDTH          (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_MASK           (0x000F)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_LSB             (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_WIDTH           (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_MASK            (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_LSB              (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_WIDTH            (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_MASK             (0x000F)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_LSB           (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_WIDTH         (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_MASK          (0x0004)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_BIT           (0x0004)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_LSB      (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_WIDTH    (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_MASK     (0x0002)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_BIT      (0x0002)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_LSB     (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_WIDTH   (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_MASK    (0x0001)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_BIT     (0x0001)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_LSB       (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_WIDTH     (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_MASK      (0xFF00)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_LSB       (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_WIDTH     (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_MASK      (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_LSB              (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_WIDTH            (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_MASK             (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_LSB              (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_WIDTH            (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_MASK             (0xFF00)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_LSB              (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_WIDTH            (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_MASK             (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_LSB              (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_WIDTH            (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_MASK             (0xFF00)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_LSB             (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_WIDTH           (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_MASK            (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_LSB               (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_WIDTH             (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_MASK              (0x000F)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_LSB            (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_WIDTH          (16)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_MASK           (0xFFFF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_LSB            (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_WIDTH          (16)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_MASK           (0xFFFF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_LSB    (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_WIDTH  (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_MASK   (0x0100)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_BIT    (0x0100)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_LSB     (6)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_WIDTH   (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_MASK    (0x00C0)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_LSB       (5)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_WIDTH     (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_MASK      (0x0020)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_BIT       (0x0020)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_LSB  (3)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_WIDTH (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_MASK (0x0018)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_LSB      (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_WIDTH    (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_MASK     (0x0004)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_BIT      (0x0004)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_LSB    (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_WIDTH  (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_MASK   (0x0003)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_LSB    (12)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_WIDTH  (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_MASK   (0xF000)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_LSB    (10)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_WIDTH  (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_MASK   (0x0400)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_BIT    (0x0400)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_LSB      (9)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_WIDTH    (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_MASK     (0x0200)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_BIT      (0x0200)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_LSB    (6)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_WIDTH  (3)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_MASK   (0x01C0)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_LSB        (5)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_WIDTH      (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_MASK       (0x0020)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_BIT        (0x0020)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_LSB        (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_WIDTH      (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_MASK       (0x0010)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_BIT        (0x0010)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_LSB             (3)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_WIDTH           (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_MASK            (0x0008)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_BIT             (0x0008)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_LSB     (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_WIDTH   (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_MASK    (0x0004)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_BIT     (0x0004)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_LSB     (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_WIDTH   (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_MASK    (0x0002)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_BIT     (0x0002)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_LSB   (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_WIDTH (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_MASK  (0x0001)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_BIT   (0x0001)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_LSB     (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_WIDTH   (10)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_MASK    (0x03FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_LSB     (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_WIDTH   (10)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_MASK    (0x03FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_LSB (3)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_WIDTH (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_MASK (0x0008)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_BIT (0x0008)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_LSB (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_WIDTH (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_MASK (0x0004)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_BIT (0x0004)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_LSB         (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_WIDTH       (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_MASK        (0x0002)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_BIT         (0x0002)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_LSB         (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_WIDTH       (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_MASK        (0x0001)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_BIT         (0x0001)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_LSB          (15)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_WIDTH        (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_MASK         (0x8000)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_BIT          (0x8000)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_LSB          (12)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_WIDTH        (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_MASK         (0x3000)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_LSB          (10)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_WIDTH        (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_MASK         (0x0C00)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_LSB          (9)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_WIDTH        (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_MASK         (0x0200)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_BIT          (0x0200)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_LSB    (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_WIDTH  (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_MASK   (0xFF00)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_LSB    (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_WIDTH  (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_MASK   (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_LSB   (12)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_WIDTH (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_MASK  (0x1000)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_BIT   (0x1000)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_LSB       (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_WIDTH     (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_MASK      (0x0300)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_LSB       (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_WIDTH     (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_MASK      (0x0030)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_LSB     (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_WIDTH   (2)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_MASK    (0x0003)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_LSB       (12)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_WIDTH     (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_MASK      (0xF000)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_LSB       (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_WIDTH     (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_MASK      (0x0F00)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_LSB      (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_WIDTH    (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_MASK     (0x00F0)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_LSB      (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_WIDTH    (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_MASK     (0x000F)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_LSB     (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_WIDTH   (6)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_MASK    (0x3F00)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_LSB     (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_WIDTH   (6)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_MASK    (0x003F)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_WIDTH                (16)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_MASK                 (0xFFFF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_LSB                 (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_WIDTH               (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_MASK                (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_WIDTH                (10)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_MASK                 (0x03FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_LSB                   (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_WIDTH                 (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_MASK                  (0x0100)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_BIT                   (0x0100)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_LSB                 (4)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_WIDTH               (1)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_MASK                (0x0010)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_BIT                 (0x0010)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_LSB          (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_WIDTH        (6)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_MASK         (0x003F)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_LSB        (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_WIDTH      (6)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_MASK       (0x003F)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_LSB                  (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_WIDTH                (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_MASK                 (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_LSB                 (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_WIDTH               (8)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_MASK                (0x00FF)

#define MMRF_ABB_PBBRX2_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_WIDTH                (16)
#define MMRF_ABB_PBBRX2_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_MASK                 (0xFFFF)


#define MMRF_ABB_PBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_LSB  (15)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_WIDTH (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_MASK (0x8000)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_BIT  (0x8000)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_LSB           (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_WIDTH         (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_MASK          (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_LSB            (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_WIDTH          (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_MASK           (0x0003)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_LSB        (15)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_WIDTH      (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_MASK       (0x8000)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_BIT        (0x8000)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_LSB          (10)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_WIDTH        (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_MASK         (0x3C00)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_LSB        (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_WIDTH      (10)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_MASK       (0x03FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_LSB                (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_WIDTH              (16)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_MASK               (0xFFFF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_LSB            (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_WIDTH          (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_MASK           (0x000F)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_LSB             (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_WIDTH           (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_MASK            (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_LSB              (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_WIDTH            (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_MASK             (0x000F)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_LSB           (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_WIDTH         (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_MASK          (0x0004)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_BIT           (0x0004)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_LSB      (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_WIDTH    (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_MASK     (0x0002)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_BIT      (0x0002)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_LSB     (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_WIDTH   (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_MASK    (0x0001)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_BIT     (0x0001)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_LSB       (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_WIDTH     (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_MASK      (0xFF00)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_LSB       (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_WIDTH     (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_MASK      (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_LSB              (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_WIDTH            (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_MASK             (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_LSB              (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_WIDTH            (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_MASK             (0xFF00)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_LSB              (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_WIDTH            (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_MASK             (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_LSB              (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_WIDTH            (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_MASK             (0xFF00)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_LSB             (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_WIDTH           (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_MASK            (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_LSB               (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_WIDTH             (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_MASK              (0x000F)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_LSB            (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_WIDTH          (16)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_MASK           (0xFFFF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_LSB            (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_WIDTH          (16)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_MASK           (0xFFFF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_LSB    (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_WIDTH  (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_MASK   (0x0100)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_BIT    (0x0100)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_LSB     (6)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_WIDTH   (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_MASK    (0x00C0)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_LSB       (5)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_WIDTH     (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_MASK      (0x0020)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_BIT       (0x0020)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_LSB  (3)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_WIDTH (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_MASK (0x0018)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_LSB      (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_WIDTH    (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_MASK     (0x0004)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_BIT      (0x0004)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_LSB    (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_WIDTH  (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_MASK   (0x0003)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_LSB    (12)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_WIDTH  (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_MASK   (0xF000)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_LSB    (10)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_WIDTH  (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_MASK   (0x0400)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_BIT    (0x0400)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_LSB      (9)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_WIDTH    (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_MASK     (0x0200)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_BIT      (0x0200)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_LSB    (6)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_WIDTH  (3)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_MASK   (0x01C0)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_LSB        (5)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_WIDTH      (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_MASK       (0x0020)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_BIT        (0x0020)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_LSB        (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_WIDTH      (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_MASK       (0x0010)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_BIT        (0x0010)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_LSB             (3)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_WIDTH           (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_MASK            (0x0008)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_BIT             (0x0008)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_LSB     (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_WIDTH   (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_MASK    (0x0004)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_BIT     (0x0004)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_LSB     (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_WIDTH   (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_MASK    (0x0002)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_BIT     (0x0002)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_LSB   (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_WIDTH (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_MASK  (0x0001)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_BIT   (0x0001)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_LSB     (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_WIDTH   (10)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_MASK    (0x03FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_LSB     (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_WIDTH   (10)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_MASK    (0x03FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_LSB (3)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_WIDTH (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_MASK (0x0008)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_BIT (0x0008)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_LSB (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_WIDTH (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_MASK (0x0004)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_BIT (0x0004)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_LSB         (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_WIDTH       (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_MASK        (0x0002)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_BIT         (0x0002)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_LSB         (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_WIDTH       (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_MASK        (0x0001)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_BIT         (0x0001)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_LSB          (15)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_WIDTH        (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_MASK         (0x8000)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_BIT          (0x8000)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_LSB          (12)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_WIDTH        (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_MASK         (0x3000)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_LSB          (10)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_WIDTH        (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_MASK         (0x0C00)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_LSB          (9)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_WIDTH        (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_MASK         (0x0200)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_BIT          (0x0200)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_LSB    (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_WIDTH  (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_MASK   (0xFF00)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_LSB    (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_WIDTH  (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_MASK   (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_LSB   (12)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_WIDTH (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_MASK  (0x1000)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_BIT   (0x1000)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_LSB       (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_WIDTH     (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_MASK      (0x0300)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_LSB       (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_WIDTH     (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_MASK      (0x0030)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_LSB     (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_WIDTH   (2)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_MASK    (0x0003)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_LSB       (12)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_WIDTH     (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_MASK      (0xF000)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_LSB       (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_WIDTH     (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_MASK      (0x0F00)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_LSB      (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_WIDTH    (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_MASK     (0x00F0)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_LSB      (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_WIDTH    (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_MASK     (0x000F)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_LSB     (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_WIDTH   (6)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_MASK    (0x3F00)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_LSB     (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_WIDTH   (6)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_MASK    (0x003F)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_WIDTH                (16)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_MASK                 (0xFFFF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_LSB                 (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_WIDTH               (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_MASK                (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_WIDTH                (10)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_MASK                 (0x03FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_LSB                   (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_WIDTH                 (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_MASK                  (0x0100)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_BIT                   (0x0100)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_LSB                 (4)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_WIDTH               (1)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_MASK                (0x0010)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_BIT                 (0x0010)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_LSB          (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_WIDTH        (6)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_MASK         (0x003F)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_LSB        (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_WIDTH      (6)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_MASK       (0x003F)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_LSB                  (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_WIDTH                (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_MASK                 (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_LSB                 (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_WIDTH               (8)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_MASK                (0x00FF)

#define MMRF_ABB_PBBRX3_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_WIDTH                (16)
#define MMRF_ABB_PBBRX3_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_MASK                 (0xFFFF)


#define MMRF_ABB_DBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_LSB  (15)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_WIDTH (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_MASK (0x8000)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_BIT  (0x8000)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_LSB           (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_WIDTH         (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_MASK          (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_LSB            (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_WIDTH          (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_MASK           (0x0003)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_LSB        (15)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_WIDTH      (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_MASK       (0x8000)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_BIT        (0x8000)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_LSB          (10)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_WIDTH        (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_MASK         (0x3C00)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_LSB        (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_WIDTH      (10)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_MASK       (0x03FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_LSB                (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_WIDTH              (16)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_MASK               (0xFFFF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_LSB            (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_WIDTH          (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_MASK           (0x000F)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_LSB             (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_WIDTH           (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_MASK            (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_LSB              (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_WIDTH            (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_MASK             (0x000F)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_LSB           (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_WIDTH         (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_MASK          (0x0004)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_BIT           (0x0004)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_LSB      (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_WIDTH    (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_MASK     (0x0002)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_BIT      (0x0002)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_LSB     (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_WIDTH   (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_MASK    (0x0001)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_BIT     (0x0001)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_LSB       (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_WIDTH     (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_MASK      (0xFF00)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_LSB       (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_WIDTH     (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_MASK      (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_LSB              (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_WIDTH            (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_MASK             (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_LSB              (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_WIDTH            (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_MASK             (0xFF00)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_LSB              (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_WIDTH            (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_MASK             (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_LSB              (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_WIDTH            (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_MASK             (0xFF00)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_LSB             (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_WIDTH           (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_MASK            (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_LSB               (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_WIDTH             (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_MASK              (0x000F)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_LSB            (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_WIDTH          (16)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_MASK           (0xFFFF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_LSB            (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_WIDTH          (16)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_MASK           (0xFFFF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_LSB    (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_WIDTH  (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_MASK   (0x0100)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_BIT    (0x0100)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_LSB     (6)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_WIDTH   (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_MASK    (0x00C0)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_LSB       (5)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_WIDTH     (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_MASK      (0x0020)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_BIT       (0x0020)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_LSB  (3)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_WIDTH (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_MASK (0x0018)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_LSB      (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_WIDTH    (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_MASK     (0x0004)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_BIT      (0x0004)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_LSB    (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_WIDTH  (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_MASK   (0x0003)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_LSB    (12)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_WIDTH  (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_MASK   (0xF000)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_LSB    (10)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_WIDTH  (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_MASK   (0x0400)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_BIT    (0x0400)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_LSB      (9)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_WIDTH    (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_MASK     (0x0200)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_BIT      (0x0200)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_LSB    (6)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_WIDTH  (3)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_MASK   (0x01C0)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_LSB        (5)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_WIDTH      (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_MASK       (0x0020)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_BIT        (0x0020)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_LSB        (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_WIDTH      (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_MASK       (0x0010)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_BIT        (0x0010)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_LSB             (3)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_WIDTH           (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_MASK            (0x0008)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_BIT             (0x0008)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_LSB     (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_WIDTH   (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_MASK    (0x0004)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_BIT     (0x0004)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_LSB     (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_WIDTH   (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_MASK    (0x0002)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_BIT     (0x0002)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_LSB   (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_WIDTH (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_MASK  (0x0001)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_BIT   (0x0001)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_LSB     (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_WIDTH   (10)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_MASK    (0x03FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_LSB     (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_WIDTH   (10)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_MASK    (0x03FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_LSB (3)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_WIDTH (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_MASK (0x0008)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_BIT (0x0008)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_LSB (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_WIDTH (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_MASK (0x0004)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_BIT (0x0004)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_LSB         (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_WIDTH       (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_MASK        (0x0002)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_BIT         (0x0002)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_LSB         (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_WIDTH       (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_MASK        (0x0001)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_BIT         (0x0001)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_LSB          (15)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_WIDTH        (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_MASK         (0x8000)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_BIT          (0x8000)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_LSB          (12)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_WIDTH        (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_MASK         (0x3000)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_LSB          (10)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_WIDTH        (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_MASK         (0x0C00)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_LSB          (9)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_WIDTH        (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_MASK         (0x0200)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_BIT          (0x0200)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_LSB    (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_WIDTH  (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_MASK   (0xFF00)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_LSB    (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_WIDTH  (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_MASK   (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_LSB   (12)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_WIDTH (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_MASK  (0x1000)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_BIT   (0x1000)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_LSB       (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_WIDTH     (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_MASK      (0x0300)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_LSB       (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_WIDTH     (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_MASK      (0x0030)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_LSB     (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_WIDTH   (2)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_MASK    (0x0003)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_LSB       (12)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_WIDTH     (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_MASK      (0xF000)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_LSB       (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_WIDTH     (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_MASK      (0x0F00)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_LSB      (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_WIDTH    (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_MASK     (0x00F0)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_LSB      (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_WIDTH    (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_MASK     (0x000F)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_LSB     (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_WIDTH   (6)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_MASK    (0x3F00)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_LSB     (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_WIDTH   (6)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_MASK    (0x003F)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_WIDTH                (16)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_MASK                 (0xFFFF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_LSB                 (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_WIDTH               (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_MASK                (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_WIDTH                (10)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_MASK                 (0x03FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_LSB                   (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_WIDTH                 (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_MASK                  (0x0100)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_BIT                   (0x0100)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_LSB                 (4)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_WIDTH               (1)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_MASK                (0x0010)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_BIT                 (0x0010)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_LSB          (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_WIDTH        (6)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_MASK         (0x003F)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_LSB        (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_WIDTH      (6)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_MASK       (0x003F)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_LSB                  (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_WIDTH                (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_MASK                 (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_LSB                 (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_WIDTH               (8)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_MASK                (0x00FF)

#define MMRF_ABB_DBBRX0_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_WIDTH                (16)
#define MMRF_ABB_DBBRX0_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_MASK                 (0xFFFF)


#define MMRF_ABB_DBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_LSB  (15)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_WIDTH (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_MASK (0x8000)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_BIT  (0x8000)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_LSB           (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_WIDTH         (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_MASK          (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_LSB            (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_WIDTH          (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_MASK           (0x0003)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_LSB        (15)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_WIDTH      (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_MASK       (0x8000)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_BIT        (0x8000)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_LSB          (10)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_WIDTH        (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_MASK         (0x3C00)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_LSB        (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_WIDTH      (10)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_MASK       (0x03FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_LSB                (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_WIDTH              (16)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_MASK               (0xFFFF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_LSB            (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_WIDTH          (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_MASK           (0x000F)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_LSB             (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_WIDTH           (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_MASK            (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_LSB              (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_WIDTH            (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_MASK             (0x000F)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_LSB           (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_WIDTH         (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_MASK          (0x0004)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_BIT           (0x0004)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_LSB      (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_WIDTH    (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_MASK     (0x0002)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_BIT      (0x0002)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_LSB     (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_WIDTH   (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_MASK    (0x0001)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_BIT     (0x0001)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_LSB       (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_WIDTH     (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_MASK      (0xFF00)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_LSB       (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_WIDTH     (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_MASK      (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_LSB              (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_WIDTH            (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_MASK             (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_LSB              (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_WIDTH            (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_MASK             (0xFF00)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_LSB              (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_WIDTH            (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_MASK             (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_LSB              (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_WIDTH            (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_MASK             (0xFF00)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_LSB             (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_WIDTH           (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_MASK            (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_LSB               (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_WIDTH             (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_MASK              (0x000F)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_LSB            (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_WIDTH          (16)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_MASK           (0xFFFF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_LSB            (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_WIDTH          (16)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_MASK           (0xFFFF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_LSB    (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_WIDTH  (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_MASK   (0x0100)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_BIT    (0x0100)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_LSB     (6)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_WIDTH   (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_MASK    (0x00C0)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_LSB       (5)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_WIDTH     (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_MASK      (0x0020)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_BIT       (0x0020)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_LSB  (3)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_WIDTH (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_MASK (0x0018)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_LSB      (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_WIDTH    (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_MASK     (0x0004)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_BIT      (0x0004)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_LSB    (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_WIDTH  (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_MASK   (0x0003)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_LSB    (12)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_WIDTH  (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_MASK   (0xF000)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_LSB    (10)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_WIDTH  (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_MASK   (0x0400)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_BIT    (0x0400)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_LSB      (9)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_WIDTH    (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_MASK     (0x0200)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_BIT      (0x0200)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_LSB    (6)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_WIDTH  (3)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_MASK   (0x01C0)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_LSB        (5)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_WIDTH      (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_MASK       (0x0020)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_BIT        (0x0020)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_LSB        (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_WIDTH      (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_MASK       (0x0010)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_BIT        (0x0010)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_LSB             (3)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_WIDTH           (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_MASK            (0x0008)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_BIT             (0x0008)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_LSB     (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_WIDTH   (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_MASK    (0x0004)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_BIT     (0x0004)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_LSB     (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_WIDTH   (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_MASK    (0x0002)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_BIT     (0x0002)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_LSB   (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_WIDTH (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_MASK  (0x0001)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_BIT   (0x0001)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_LSB     (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_WIDTH   (10)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_MASK    (0x03FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_LSB     (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_WIDTH   (10)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_MASK    (0x03FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_LSB (3)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_WIDTH (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_MASK (0x0008)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_BIT (0x0008)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_LSB (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_WIDTH (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_MASK (0x0004)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_BIT (0x0004)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_LSB         (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_WIDTH       (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_MASK        (0x0002)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_BIT         (0x0002)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_LSB         (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_WIDTH       (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_MASK        (0x0001)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_BIT         (0x0001)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_LSB          (15)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_WIDTH        (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_MASK         (0x8000)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_BIT          (0x8000)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_LSB          (12)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_WIDTH        (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_MASK         (0x3000)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_LSB          (10)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_WIDTH        (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_MASK         (0x0C00)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_LSB          (9)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_WIDTH        (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_MASK         (0x0200)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_BIT          (0x0200)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_LSB    (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_WIDTH  (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_MASK   (0xFF00)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_LSB    (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_WIDTH  (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_MASK   (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_LSB   (12)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_WIDTH (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_MASK  (0x1000)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_BIT   (0x1000)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_LSB       (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_WIDTH     (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_MASK      (0x0300)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_LSB       (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_WIDTH     (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_MASK      (0x0030)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_LSB     (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_WIDTH   (2)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_MASK    (0x0003)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_LSB       (12)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_WIDTH     (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_MASK      (0xF000)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_LSB       (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_WIDTH     (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_MASK      (0x0F00)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_LSB      (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_WIDTH    (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_MASK     (0x00F0)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_LSB      (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_WIDTH    (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_MASK     (0x000F)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_LSB     (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_WIDTH   (6)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_MASK    (0x3F00)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_LSB     (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_WIDTH   (6)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_MASK    (0x003F)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_WIDTH                (16)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_MASK                 (0xFFFF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_LSB                 (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_WIDTH               (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_MASK                (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_WIDTH                (10)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_MASK                 (0x03FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_LSB                   (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_WIDTH                 (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_MASK                  (0x0100)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_BIT                   (0x0100)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_LSB                 (4)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_WIDTH               (1)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_MASK                (0x0010)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_BIT                 (0x0010)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_LSB          (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_WIDTH        (6)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_MASK         (0x003F)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_LSB        (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_WIDTH      (6)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_MASK       (0x003F)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_LSB                  (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_WIDTH                (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_MASK                 (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_LSB                 (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_WIDTH               (8)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_MASK                (0x00FF)

#define MMRF_ABB_DBBRX1_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_WIDTH                (16)
#define MMRF_ABB_DBBRX1_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_MASK                 (0xFFFF)


#define MMRF_ABB_DBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_LSB  (15)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_WIDTH (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_MASK (0x8000)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_BIT  (0x8000)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_LSB           (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_WIDTH         (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_MASK          (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_LSB            (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_WIDTH          (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_MASK           (0x0003)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_LSB        (15)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_WIDTH      (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_MASK       (0x8000)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_BIT        (0x8000)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_LSB          (10)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_WIDTH        (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_MASK         (0x3C00)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_LSB        (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_WIDTH      (10)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_MASK       (0x03FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_LSB                (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_WIDTH              (16)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_MASK               (0xFFFF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_LSB            (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_WIDTH          (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_MASK           (0x000F)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_LSB             (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_WIDTH           (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_MASK            (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_LSB              (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_WIDTH            (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_MASK             (0x000F)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_LSB           (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_WIDTH         (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_MASK          (0x0004)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_BIT           (0x0004)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_LSB      (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_WIDTH    (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_MASK     (0x0002)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_BIT      (0x0002)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_LSB     (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_WIDTH   (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_MASK    (0x0001)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_BIT     (0x0001)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_LSB       (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_WIDTH     (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_MASK      (0xFF00)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_LSB       (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_WIDTH     (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_MASK      (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_LSB              (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_WIDTH            (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_MASK             (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_LSB              (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_WIDTH            (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_MASK             (0xFF00)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_LSB              (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_WIDTH            (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_MASK             (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_LSB              (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_WIDTH            (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_MASK             (0xFF00)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_LSB             (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_WIDTH           (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_MASK            (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_LSB               (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_WIDTH             (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_MASK              (0x000F)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_LSB            (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_WIDTH          (16)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_MASK           (0xFFFF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_LSB            (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_WIDTH          (16)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_MASK           (0xFFFF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_LSB    (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_WIDTH  (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_MASK   (0x0100)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_BIT    (0x0100)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_LSB     (6)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_WIDTH   (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_MASK    (0x00C0)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_LSB       (5)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_WIDTH     (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_MASK      (0x0020)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_BIT       (0x0020)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_LSB  (3)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_WIDTH (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_MASK (0x0018)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_LSB      (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_WIDTH    (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_MASK     (0x0004)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_BIT      (0x0004)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_LSB    (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_WIDTH  (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_MASK   (0x0003)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_LSB    (12)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_WIDTH  (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_MASK   (0xF000)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_LSB    (10)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_WIDTH  (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_MASK   (0x0400)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_BIT    (0x0400)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_LSB      (9)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_WIDTH    (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_MASK     (0x0200)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_BIT      (0x0200)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_LSB    (6)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_WIDTH  (3)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_MASK   (0x01C0)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_LSB        (5)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_WIDTH      (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_MASK       (0x0020)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_BIT        (0x0020)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_LSB        (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_WIDTH      (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_MASK       (0x0010)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_BIT        (0x0010)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_LSB             (3)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_WIDTH           (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_MASK            (0x0008)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_BIT             (0x0008)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_LSB     (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_WIDTH   (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_MASK    (0x0004)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_BIT     (0x0004)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_LSB     (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_WIDTH   (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_MASK    (0x0002)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_BIT     (0x0002)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_LSB   (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_WIDTH (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_MASK  (0x0001)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_BIT   (0x0001)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_LSB     (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_WIDTH   (10)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_MASK    (0x03FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_LSB     (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_WIDTH   (10)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_MASK    (0x03FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_LSB (3)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_WIDTH (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_MASK (0x0008)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_BIT (0x0008)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_LSB (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_WIDTH (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_MASK (0x0004)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_BIT (0x0004)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_LSB         (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_WIDTH       (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_MASK        (0x0002)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_BIT         (0x0002)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_LSB         (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_WIDTH       (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_MASK        (0x0001)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_BIT         (0x0001)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_LSB          (15)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_WIDTH        (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_MASK         (0x8000)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_BIT          (0x8000)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_LSB          (12)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_WIDTH        (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_MASK         (0x3000)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_LSB          (10)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_WIDTH        (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_MASK         (0x0C00)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_LSB          (9)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_WIDTH        (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_MASK         (0x0200)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_BIT          (0x0200)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_LSB    (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_WIDTH  (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_MASK   (0xFF00)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_LSB    (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_WIDTH  (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_MASK   (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_LSB   (12)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_WIDTH (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_MASK  (0x1000)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_BIT   (0x1000)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_LSB       (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_WIDTH     (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_MASK      (0x0300)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_LSB       (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_WIDTH     (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_MASK      (0x0030)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_LSB     (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_WIDTH   (2)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_MASK    (0x0003)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_LSB       (12)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_WIDTH     (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_MASK      (0xF000)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_LSB       (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_WIDTH     (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_MASK      (0x0F00)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_LSB      (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_WIDTH    (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_MASK     (0x00F0)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_LSB      (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_WIDTH    (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_MASK     (0x000F)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_LSB     (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_WIDTH   (6)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_MASK    (0x3F00)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_LSB     (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_WIDTH   (6)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_MASK    (0x003F)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_WIDTH                (16)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_MASK                 (0xFFFF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_LSB                 (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_WIDTH               (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_MASK                (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_WIDTH                (10)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_MASK                 (0x03FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_LSB                   (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_WIDTH                 (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_MASK                  (0x0100)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_BIT                   (0x0100)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_LSB                 (4)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_WIDTH               (1)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_MASK                (0x0010)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_BIT                 (0x0010)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_LSB          (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_WIDTH        (6)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_MASK         (0x003F)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_LSB        (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_WIDTH      (6)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_MASK       (0x003F)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_LSB                  (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_WIDTH                (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_MASK                 (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_LSB                 (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_WIDTH               (8)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_MASK                (0x00FF)

#define MMRF_ABB_DBBRX2_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_WIDTH                (16)
#define MMRF_ABB_DBBRX2_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_MASK                 (0xFFFF)


#define MMRF_ABB_DBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_LSB  (15)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_WIDTH (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_MASK (0x8000)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_OP_FINAL_BIT  (0x8000)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_LSB           (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_WIDTH         (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON0_RG_LTE_BBRX1_SDM_INT_SEL_VCM_MASK          (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_LSB            (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_WIDTH          (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON1_RG_LTE_BBRX1_SDM_ESL_CONFIG_MASK           (0x0003)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_LSB        (15)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_WIDTH      (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_MASK       (0x8000)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_MANUAL_EN_BIT        (0x8000)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_LSB          (10)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_WIDTH        (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_SEL_MASK         (0x3C00)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_LSB        (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_WIDTH      (10)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2_RG_LTE_BBRX1_QUAN_CAL_REG_WRITE_MASK       (0x03FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_LSB                (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_WIDTH              (16)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON10_RG_LTE_BBRX1_BIAS_SELI_MASK               (0xFFFF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_LSB            (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_WIDTH          (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON11_RG_LTE_BBRX1_BIAS_DAC_SELI_MASK           (0x000F)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_LSB             (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_WIDTH           (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON12_RG_LTE_BBRX1_BIAS_SELI_TX_MASK            (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_LSB              (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_WIDTH            (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON13_RG_LTE_BBRX1_LDO155_SELV_MASK             (0x000F)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_LSB           (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_WIDTH         (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_MASK          (0x0004)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_LDO155_BIST_EN_BIT           (0x0004)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_LSB      (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_WIDTH    (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_MASK     (0x0002)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_AUTORST_ENB_BIT      (0x0002)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_LSB     (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_WIDTH   (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_MASK    (0x0001)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON14_RG_LTE_BBRX1_SDM_INT_OVERLOAD_ENB_BIT     (0x0001)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_LSB       (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_WIDTH     (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG1_MASK      (0xFF00)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_LSB       (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_WIDTH     (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON15_RG_LTE_BBRX1_SDM_INT_RC_CONFIG2_MASK      (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_LSB              (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_WIDTH            (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON16_RG_LTE_BBRX1_SDM_INT_RSV_MASK             (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_LSB              (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_WIDTH            (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_INT_LDO_MASK             (0xFF00)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_LSB              (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_WIDTH            (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON17_RG_LTE_BBRX1_SDM_DAC_LDO_MASK             (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_LSB              (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_WIDTH            (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC_RSV_MASK             (0xFF00)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_LSB             (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_WIDTH           (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON18_RG_LTE_BBRX1_SDM_DAC2_RSV_MASK            (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_LSB               (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_WIDTH             (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON19_RG_LTE_BBRX1_SDM_CK_SEL_MASK              (0x000F)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_LSB            (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_WIDTH          (16)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON20_RG_LTE_BBRX1_QUAN_REGDMY_I_MASK           (0xFFFF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_LSB            (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_WIDTH          (16)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON21_RG_LTE_BBRX1_QUAN_REGDMY_Q_MASK           (0xFFFF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_LSB    (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_WIDTH  (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_MASK   (0x0100)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DITHER_TYPE_BIT    (0x0100)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_LSB     (6)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_WIDTH   (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_OUTPUT_SEL_MASK    (0x00C0)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_LSB       (5)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_WIDTH     (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_MASK      (0x0020)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_DMYSW_EN_BIT       (0x0020)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_LSB  (3)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_WIDTH (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_MODE_MASK (0x0018)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_LSB      (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_WIDTH    (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_MASK     (0x0004)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_CAL_RESOLUTION_BIT      (0x0004)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_LSB    (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_WIDTH  (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON22_RG_LTE_BBRX1_QUAN_DOUT_TRACK_RANGE_MASK   (0x0003)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_LSB    (12)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_WIDTH  (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_CLIP_LENGTH_MASK   (0xF000)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_LSB    (10)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_WIDTH  (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_MASK   (0x0400)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_INNERDAC_EN_BIT    (0x0400)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_LSB      (9)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_WIDTH    (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_MASK     (0x0200)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_EN_BIT      (0x0200)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_LSB    (6)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_WIDTH  (3)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_DOUT_DITHER_FREQ_MASK   (0x01C0)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_LSB        (5)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_WIDTH      (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_MASK       (0x0020)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_FASTMODE_BIT        (0x0020)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_LSB        (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_WIDTH      (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_MASK       (0x0010)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_TRACK_EN_BIT        (0x0010)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_LSB             (3)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_WIDTH           (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_MASK            (0x0008)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_DRG_BIT             (0x0008)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_LSB     (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_WIDTH   (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_MASK    (0x0004)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_I_BIT     (0x0004)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_LSB     (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_WIDTH   (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_MASK    (0x0002)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_MANUAL_TG_Q_BIT     (0x0002)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_LSB   (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_WIDTH (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_MASK  (0x0001)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON23_RG_LTE_BBRX1_QUAN_CAL_BACKGROUND_EN_BIT   (0x0001)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_LSB     (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_WIDTH   (10)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON24_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_I_MASK    (0x03FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_LSB     (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_WIDTH   (10)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON25_RGS_LTE_BBRX1_QUAN_CAL_REG_READ_Q_MASK    (0x03FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_LSB (3)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_WIDTH (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_MASK (0x0008)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_I_BIT (0x0008)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_LSB (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_WIDTH (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_MASK (0x0004)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_FOREGROUND_DONE_Q_BIT (0x0004)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_LSB         (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_WIDTH       (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_MASK        (0x0002)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_I_BIT         (0x0002)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_LSB         (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_WIDTH       (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_MASK        (0x0001)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON26_RGS_LTE_BBRX1_QUAN_CAL_BUSY_Q_BIT         (0x0001)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_LSB          (15)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_WIDTH        (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_MASK         (0x8000)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_CLK_GATING_BIT          (0x8000)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_LSB          (12)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_WIDTH        (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_I_MASK         (0x3000)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_LSB          (10)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_WIDTH        (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_DCMSHIFT_Q_MASK         (0x0C00)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_LSB          (9)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_WIDTH        (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_MASK         (0x0200)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON27_RG_LTE_BBRX1_QUAN_SEARCHBEST_BIT          (0x0200)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_LSB    (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_WIDTH  (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_I_MASK   (0xFF00)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_LSB    (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_WIDTH  (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON28_RG_LTE_BBRX1_QUAN_DCMCAL_INITIAL_Q_MASK   (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_LSB   (12)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_WIDTH (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_MASK  (0x1000)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANCAL_ULTRA_FASTMODE_BIT   (0x1000)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_LSB       (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_WIDTH     (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_QUANDOUT_ZCD_RANGE_MASK      (0x0300)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_LSB       (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_WIDTH     (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_BOUNDARY_MASK      (0x0030)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_LSB     (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_WIDTH   (2)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON29_RG_LTE_BBRX1_SDM_RCCAL_ACCULENGTH_MASK    (0x0003)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_LSB       (12)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_WIDTH     (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_I_MASK      (0xF000)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_LSB       (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_WIDTH     (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_OFFSET_Q_MASK      (0x0F00)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_LSB      (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_WIDTH    (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_I_MASK     (0x00F0)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_LSB      (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_WIDTH    (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2A_RG_LTE_BBRX1_SDM_RCCAL_INITIAL_Q_MASK     (0x000F)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_LSB     (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_WIDTH   (6)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_I_MASK    (0x3F00)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_LSB     (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_WIDTH   (6)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2B_RGS_LTE_BBRX1_SDM_RCCAL_CAPCODE_Q_MASK    (0x003F)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_WIDTH                (16)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2C_RG_LTE_BBRX1_SEQ_RSV_MASK                 (0xFFFF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_LSB                 (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_WIDTH               (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2D_RG_LTE_BBRX1_SEQ_RSV1_MASK                (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_WIDTH                (10)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON2E_RG_LTE_BBRX1_TOP_RSV_MASK                 (0x03FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_LSB                   (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_WIDTH                 (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_MASK                  (0x0100)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_EN_BIT                   (0x0100)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_LSB                 (4)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_WIDTH               (1)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_MASK                (0x0010)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON30_DA_LTE_BBRX1_SEQ_RSTB_BIT                 (0x0010)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_LSB          (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_WIDTH        (6)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON31_DA_LTE_BBRX1_SDM_INT_SEL_CAP_MASK         (0x003F)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_LSB        (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_WIDTH      (6)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON32_DA_LTE_BBRX1_SDM_INT_SEL_CAP13_MASK       (0x003F)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_LSB                  (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_WIDTH                (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON33_DA_LTE_BBRX1_SEQ_CFG_MASK                 (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_LSB                 (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_WIDTH               (8)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON34_DA_LTE_BBRX1_SEQ_CFG1_MASK                (0x00FF)

#define MMRF_ABB_DBBRX3_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_LSB                  (0)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_WIDTH                (16)
#define MMRF_ABB_DBBRX3_LTEBBRX_CON35_DA_LTE_BBRX1_TOP_RSV_MASK                 (0xFFFF)


#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0_RG_LTEBBTX_LDO16_VGEAR_VK10_LSB          (4)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0_RG_LTEBBTX_LDO16_VGEAR_VK10_WIDTH        (2)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0_RG_LTEBBTX_LDO16_VGEAR_VK10_MASK         (0x0030)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0_RG_LTEBBTX_LDO15_VGEAR_VK10_LSB          (2)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0_RG_LTEBBTX_LDO15_VGEAR_VK10_WIDTH        (2)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0_RG_LTEBBTX_LDO15_VGEAR_VK10_MASK         (0x000C)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0_RG_LTEBBTX_REF_VGEAR_VK10_LSB            (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0_RG_LTEBBTX_REF_VGEAR_VK10_WIDTH          (2)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON0_RG_LTEBBTX_REF_VGEAR_VK10_MASK           (0x0003)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON1_RG_LTEBBTX_VCM_VGEAR_VK10_LSB            (4)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON1_RG_LTEBBTX_VCM_VGEAR_VK10_WIDTH          (3)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON1_RG_LTEBBTX_VCM_VGEAR_VK10_MASK           (0x0070)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON1_RG_LTEBBTX_LDO10_VGEAR_VK10_LSB          (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON1_RG_LTEBBTX_LDO10_VGEAR_VK10_WIDTH        (3)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON1_RG_LTEBBTX_LDO10_VGEAR_VK10_MASK         (0x0007)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON3_RG_LTEBBTX_CLK_SEL_VK10_LSB              (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON3_RG_LTEBBTX_CLK_SEL_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON3_RG_LTEBBTX_CLK_SEL_VK10_MASK             (0x0001)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON3_RG_LTEBBTX_CLK_SEL_VK10_BIT              (0x0001)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON4_RG_LTEBBTX_SPARE_VK10_LSB                (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON4_RG_LTEBBTX_SPARE_VK10_WIDTH              (8)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON4_RG_LTEBBTX_SPARE_VK10_MASK               (0x00FF)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWDAC_VK10_LSB              (5)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWDAC_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWDAC_VK10_MASK             (0x0020)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWDAC_VK10_BIT              (0x0020)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWLPF_VK10_LSB              (4)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWLPF_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWLPF_VK10_MASK             (0x0010)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWLPF_VK10_BIT              (0x0010)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWPAD_VK10_LSB              (3)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWPAD_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWPAD_VK10_MASK             (0x0008)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_I_SWPAD_VK10_BIT              (0x0008)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWDAC_VK10_LSB              (2)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWDAC_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWDAC_VK10_MASK             (0x0004)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWDAC_VK10_BIT              (0x0004)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWLPF_VK10_LSB              (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWLPF_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWLPF_VK10_MASK             (0x0002)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWLPF_VK10_BIT              (0x0002)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWPAD_VK10_LSB              (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWPAD_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWPAD_VK10_MASK             (0x0001)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON5_RG_LTEBBTX_Q_SWPAD_VK10_BIT              (0x0001)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON6_RG_LTEBBTX_I_RSEL_LSB                    (4)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON6_RG_LTEBBTX_I_RSEL_WIDTH                  (4)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON6_RG_LTEBBTX_I_RSEL_MASK                   (0x00F0)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON6_RG_LTEBBTX_Q_RSEL_LSB                    (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON6_RG_LTEBBTX_Q_RSEL_WIDTH                  (4)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON6_RG_LTEBBTX_Q_RSEL_MASK                   (0x000F)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON8_RG_LTEBBTX_GAIN_LSB                      (12)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON8_RG_LTEBBTX_GAIN_WIDTH                    (4)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON8_RG_LTEBBTX_GAIN_MASK                     (0xF000)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON8_RG_LTEBBTX_SEQ_RSV_LSB                   (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON8_RG_LTEBBTX_SEQ_RSV_WIDTH                 (12)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON8_RG_LTEBBTX_SEQ_RSV_MASK                  (0x0FFF)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON9_RG_LTEBBTX_BIAS_SELI_VK10_LSB            (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON9_RG_LTEBBTX_BIAS_SELI_VK10_WIDTH          (8)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON9_RG_LTEBBTX_BIAS_SELI_VK10_MASK           (0x00FF)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONA_DA_LTEBBTX_I_CSEL_VK10_LSB               (8)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONA_DA_LTEBBTX_I_CSEL_VK10_WIDTH             (6)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONA_DA_LTEBBTX_I_CSEL_VK10_MASK              (0x3F00)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONA_DA_LTEBBTX_Q_CSEL_VK10_LSB               (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONA_DA_LTEBBTX_Q_CSEL_VK10_WIDTH             (6)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONA_DA_LTEBBTX_Q_CSEL_VK10_MASK              (0x003F)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_EN_LSB                    (12)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_EN_WIDTH                  (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_EN_MASK                   (0x1000)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_EN_BIT                    (0x1000)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_CFG_LSB                   (4)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_CFG_WIDTH                 (6)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_CFG_MASK                  (0x03F0)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_RSTB_LSB                  (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_RSTB_WIDTH                (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_RSTB_MASK                 (0x0001)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONB_DA_LTEBBTX_SEQ_RSTB_BIT                  (0x0001)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONC_DA_LTEBBTX_BW_VK10_LTE_LSB               (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONC_DA_LTEBBTX_BW_VK10_LTE_WIDTH             (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONC_DA_LTEBBTX_BW_VK10_LTE_MASK              (0x0001)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONC_DA_LTEBBTX_BW_VK10_LTE_BIT               (0x0001)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_COND_DA_LTEBBTX_BW_VK10_3G_LSB                (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_COND_DA_LTEBBTX_BW_VK10_3G_WIDTH              (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_COND_DA_LTEBBTX_BW_VK10_3G_MASK               (0x0001)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_COND_DA_LTEBBTX_BW_VK10_3G_BIT                (0x0001)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONE_DA_LTEBBTX_BW_VK10_TDD_LSB               (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONE_DA_LTEBBTX_BW_VK10_TDD_WIDTH             (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONE_DA_LTEBBTX_BW_VK10_TDD_MASK              (0x0001)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONE_DA_LTEBBTX_BW_VK10_TDD_BIT               (0x0001)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONF_DA_LTEBBTX_BW_VK10_2G_LSB                (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONF_DA_LTEBBTX_BW_VK10_2G_WIDTH              (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONF_DA_LTEBBTX_BW_VK10_2G_MASK               (0x0001)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CONF_DA_LTEBBTX_BW_VK10_2G_BIT                (0x0001)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON10_DA_LTEBBTX_BW_VK10_C2K_LSB              (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON10_DA_LTEBBTX_BW_VK10_C2K_WIDTH            (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON10_DA_LTEBBTX_BW_VK10_C2K_MASK             (0x0001)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON10_DA_LTEBBTX_BW_VK10_C2K_BIT              (0x0001)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON11_DA_C2KBBTX_I_CSEL_VK10_LSB              (8)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON11_DA_C2KBBTX_I_CSEL_VK10_WIDTH            (6)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON11_DA_C2KBBTX_I_CSEL_VK10_MASK             (0x3F00)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON11_DA_C2KBBTX_Q_CSEL_VK10_LSB              (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON11_DA_C2KBBTX_Q_CSEL_VK10_WIDTH            (6)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON11_DA_C2KBBTX_Q_CSEL_VK10_MASK             (0x003F)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON12_RG_LTEBBTX_CAL_EN_LSB                   (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON12_RG_LTEBBTX_CAL_EN_WIDTH                 (1)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON12_RG_LTEBBTX_CAL_EN_MASK                  (0x0001)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON12_RG_LTEBBTX_CAL_EN_BIT                   (0x0001)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON13_RG_LTEBBTX_01_LSB                       (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON13_RG_LTEBBTX_01_WIDTH                     (16)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON13_RG_LTEBBTX_01_MASK                      (0xFFFF)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON14_RG_LTEBBTX_02_LSB                       (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON14_RG_LTEBBTX_02_WIDTH                     (16)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON14_RG_LTEBBTX_02_MASK                      (0xFFFF)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON15_RGS_LTEBBTX_01_LSB                      (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON15_RGS_LTEBBTX_01_WIDTH                    (16)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON15_RGS_LTEBBTX_01_MASK                     (0xFFFF)

#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON16_RGS_LTEBBTX_02_LSB                      (0)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON16_RGS_LTEBBTX_02_WIDTH                    (16)
#define MMRF_ABB_LTEBBTX0_LTEBBTX_CON16_RGS_LTEBBTX_02_MASK                     (0xFFFF)


#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0_RG_LTEBBTX_LDO16_VGEAR_VK10_LSB          (4)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0_RG_LTEBBTX_LDO16_VGEAR_VK10_WIDTH        (2)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0_RG_LTEBBTX_LDO16_VGEAR_VK10_MASK         (0x0030)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0_RG_LTEBBTX_LDO15_VGEAR_VK10_LSB          (2)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0_RG_LTEBBTX_LDO15_VGEAR_VK10_WIDTH        (2)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0_RG_LTEBBTX_LDO15_VGEAR_VK10_MASK         (0x000C)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0_RG_LTEBBTX_REF_VGEAR_VK10_LSB            (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0_RG_LTEBBTX_REF_VGEAR_VK10_WIDTH          (2)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON0_RG_LTEBBTX_REF_VGEAR_VK10_MASK           (0x0003)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON1_RG_LTEBBTX_VCM_VGEAR_VK10_LSB            (4)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON1_RG_LTEBBTX_VCM_VGEAR_VK10_WIDTH          (3)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON1_RG_LTEBBTX_VCM_VGEAR_VK10_MASK           (0x0070)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON1_RG_LTEBBTX_LDO10_VGEAR_VK10_LSB          (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON1_RG_LTEBBTX_LDO10_VGEAR_VK10_WIDTH        (3)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON1_RG_LTEBBTX_LDO10_VGEAR_VK10_MASK         (0x0007)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON3_RG_LTEBBTX_CLK_SEL_VK10_LSB              (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON3_RG_LTEBBTX_CLK_SEL_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON3_RG_LTEBBTX_CLK_SEL_VK10_MASK             (0x0001)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON3_RG_LTEBBTX_CLK_SEL_VK10_BIT              (0x0001)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON4_RG_LTEBBTX_SPARE_VK10_LSB                (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON4_RG_LTEBBTX_SPARE_VK10_WIDTH              (8)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON4_RG_LTEBBTX_SPARE_VK10_MASK               (0x00FF)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWDAC_VK10_LSB              (5)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWDAC_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWDAC_VK10_MASK             (0x0020)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWDAC_VK10_BIT              (0x0020)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWLPF_VK10_LSB              (4)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWLPF_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWLPF_VK10_MASK             (0x0010)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWLPF_VK10_BIT              (0x0010)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWPAD_VK10_LSB              (3)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWPAD_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWPAD_VK10_MASK             (0x0008)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_I_SWPAD_VK10_BIT              (0x0008)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWDAC_VK10_LSB              (2)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWDAC_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWDAC_VK10_MASK             (0x0004)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWDAC_VK10_BIT              (0x0004)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWLPF_VK10_LSB              (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWLPF_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWLPF_VK10_MASK             (0x0002)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWLPF_VK10_BIT              (0x0002)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWPAD_VK10_LSB              (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWPAD_VK10_WIDTH            (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWPAD_VK10_MASK             (0x0001)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON5_RG_LTEBBTX_Q_SWPAD_VK10_BIT              (0x0001)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON6_RG_LTEBBTX_I_RSEL_LSB                    (4)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON6_RG_LTEBBTX_I_RSEL_WIDTH                  (4)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON6_RG_LTEBBTX_I_RSEL_MASK                   (0x00F0)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON6_RG_LTEBBTX_Q_RSEL_LSB                    (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON6_RG_LTEBBTX_Q_RSEL_WIDTH                  (4)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON6_RG_LTEBBTX_Q_RSEL_MASK                   (0x000F)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON8_RG_LTEBBTX_GAIN_LSB                      (12)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON8_RG_LTEBBTX_GAIN_WIDTH                    (4)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON8_RG_LTEBBTX_GAIN_MASK                     (0xF000)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON8_RG_LTEBBTX_SEQ_RSV_LSB                   (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON8_RG_LTEBBTX_SEQ_RSV_WIDTH                 (12)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON8_RG_LTEBBTX_SEQ_RSV_MASK                  (0x0FFF)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON9_RG_LTEBBTX_BIAS_SELI_VK10_LSB            (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON9_RG_LTEBBTX_BIAS_SELI_VK10_WIDTH          (8)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON9_RG_LTEBBTX_BIAS_SELI_VK10_MASK           (0x00FF)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONA_DA_LTEBBTX_I_CSEL_VK10_LSB               (8)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONA_DA_LTEBBTX_I_CSEL_VK10_WIDTH             (6)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONA_DA_LTEBBTX_I_CSEL_VK10_MASK              (0x3F00)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONA_DA_LTEBBTX_Q_CSEL_VK10_LSB               (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONA_DA_LTEBBTX_Q_CSEL_VK10_WIDTH             (6)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONA_DA_LTEBBTX_Q_CSEL_VK10_MASK              (0x003F)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_EN_LSB                    (12)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_EN_WIDTH                  (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_EN_MASK                   (0x1000)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_EN_BIT                    (0x1000)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_CFG_LSB                   (4)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_CFG_WIDTH                 (6)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_CFG_MASK                  (0x03F0)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_RSTB_LSB                  (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_RSTB_WIDTH                (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_RSTB_MASK                 (0x0001)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONB_DA_LTEBBTX_SEQ_RSTB_BIT                  (0x0001)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONC_DA_LTEBBTX_BW_VK10_LTE_LSB               (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONC_DA_LTEBBTX_BW_VK10_LTE_WIDTH             (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONC_DA_LTEBBTX_BW_VK10_LTE_MASK              (0x0001)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONC_DA_LTEBBTX_BW_VK10_LTE_BIT               (0x0001)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_COND_DA_LTEBBTX_BW_VK10_3G_LSB                (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_COND_DA_LTEBBTX_BW_VK10_3G_WIDTH              (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_COND_DA_LTEBBTX_BW_VK10_3G_MASK               (0x0001)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_COND_DA_LTEBBTX_BW_VK10_3G_BIT                (0x0001)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONE_DA_LTEBBTX_BW_VK10_TDD_LSB               (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONE_DA_LTEBBTX_BW_VK10_TDD_WIDTH             (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONE_DA_LTEBBTX_BW_VK10_TDD_MASK              (0x0001)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONE_DA_LTEBBTX_BW_VK10_TDD_BIT               (0x0001)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONF_DA_LTEBBTX_BW_VK10_2G_LSB                (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONF_DA_LTEBBTX_BW_VK10_2G_WIDTH              (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONF_DA_LTEBBTX_BW_VK10_2G_MASK               (0x0001)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CONF_DA_LTEBBTX_BW_VK10_2G_BIT                (0x0001)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON10_DA_LTEBBTX_BW_VK10_C2K_LSB              (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON10_DA_LTEBBTX_BW_VK10_C2K_WIDTH            (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON10_DA_LTEBBTX_BW_VK10_C2K_MASK             (0x0001)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON10_DA_LTEBBTX_BW_VK10_C2K_BIT              (0x0001)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON11_DA_C2KBBTX_I_CSEL_VK10_LSB              (8)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON11_DA_C2KBBTX_I_CSEL_VK10_WIDTH            (6)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON11_DA_C2KBBTX_I_CSEL_VK10_MASK             (0x3F00)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON11_DA_C2KBBTX_Q_CSEL_VK10_LSB              (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON11_DA_C2KBBTX_Q_CSEL_VK10_WIDTH            (6)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON11_DA_C2KBBTX_Q_CSEL_VK10_MASK             (0x003F)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON12_RG_LTEBBTX_CAL_EN_LSB                   (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON12_RG_LTEBBTX_CAL_EN_WIDTH                 (1)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON12_RG_LTEBBTX_CAL_EN_MASK                  (0x0001)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON12_RG_LTEBBTX_CAL_EN_BIT                   (0x0001)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON13_RG_LTEBBTX_01_LSB                       (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON13_RG_LTEBBTX_01_WIDTH                     (16)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON13_RG_LTEBBTX_01_MASK                      (0xFFFF)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON14_RG_LTEBBTX_02_LSB                       (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON14_RG_LTEBBTX_02_WIDTH                     (16)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON14_RG_LTEBBTX_02_MASK                      (0xFFFF)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON15_RGS_LTEBBTX_01_LSB                      (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON15_RGS_LTEBBTX_01_WIDTH                    (16)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON15_RGS_LTEBBTX_01_MASK                     (0xFFFF)

#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON16_RGS_LTEBBTX_02_LSB                      (0)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON16_RGS_LTEBBTX_02_WIDTH                    (16)
#define MMRF_ABB_LTEBBTX1_LTEBBTX_CON16_RGS_LTEBBTX_02_MASK                     (0xFFFF)


#define MMRF_ABB_RSV_0_RSV_CON0_mixed_rsv0_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON0_mixed_rsv0_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON0_mixed_rsv0_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CON1_mixed_rsv1_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON1_mixed_rsv1_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON1_mixed_rsv1_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CON2_mixed_rsv2_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON2_mixed_rsv2_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON2_mixed_rsv2_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CON3_mixed_rsv3_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON3_mixed_rsv3_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON3_mixed_rsv3_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CON4_mixed_rsv4_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON4_mixed_rsv4_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON4_mixed_rsv4_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CON5_mixed_rsv5_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON5_mixed_rsv5_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON5_mixed_rsv5_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CON6_mixed_rsv6_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON6_mixed_rsv6_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON6_mixed_rsv6_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CON7_mixed_rsv7_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON7_mixed_rsv7_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON7_mixed_rsv7_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CON8_mixed_rsv8_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON8_mixed_rsv8_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON8_mixed_rsv8_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CON9_mixed_rsv9_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CON9_mixed_rsv9_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CON9_mixed_rsv9_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CONA_mixed_rsva_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CONA_mixed_rsva_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CONA_mixed_rsva_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_0_RSV_CONB_mixed_rsvb_LSB                                  (0)
#define MMRF_ABB_RSV_0_RSV_CONB_mixed_rsvb_WIDTH                                (16)
#define MMRF_ABB_RSV_0_RSV_CONB_mixed_rsvb_MASK                                 (0xFFFF)


#define MMRF_ABB_RSV_1_RSV_CON0_mixed_rsv0_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON0_mixed_rsv0_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON0_mixed_rsv0_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CON1_mixed_rsv1_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON1_mixed_rsv1_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON1_mixed_rsv1_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CON2_mixed_rsv2_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON2_mixed_rsv2_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON2_mixed_rsv2_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CON3_mixed_rsv3_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON3_mixed_rsv3_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON3_mixed_rsv3_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CON4_mixed_rsv4_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON4_mixed_rsv4_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON4_mixed_rsv4_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CON5_mixed_rsv5_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON5_mixed_rsv5_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON5_mixed_rsv5_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CON6_mixed_rsv6_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON6_mixed_rsv6_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON6_mixed_rsv6_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CON7_mixed_rsv7_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON7_mixed_rsv7_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON7_mixed_rsv7_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CON8_mixed_rsv8_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON8_mixed_rsv8_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON8_mixed_rsv8_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CON9_mixed_rsv9_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CON9_mixed_rsv9_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CON9_mixed_rsv9_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CONA_mixed_rsva_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CONA_mixed_rsva_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CONA_mixed_rsva_MASK                                 (0xFFFF)

#define MMRF_ABB_RSV_1_RSV_CONB_mixed_rsvb_LSB                                  (0)
#define MMRF_ABB_RSV_1_RSV_CONB_mixed_rsvb_WIDTH                                (16)
#define MMRF_ABB_RSV_1_RSV_CONB_mixed_rsvb_MASK                                 (0xFFFF)


#define MMRF_ABB_RSV2_0_RSV2_CON0_mixed_rsv20_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON0_mixed_rsv20_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON0_mixed_rsv20_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CON1_mixed_rsv21_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON1_mixed_rsv21_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON1_mixed_rsv21_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CON2_mixed_rsv22_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON2_mixed_rsv22_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON2_mixed_rsv22_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CON3_mixed_rsv23_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON3_mixed_rsv23_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON3_mixed_rsv23_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CON4_mixed_rsv24_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON4_mixed_rsv24_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON4_mixed_rsv24_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CON5_mixed_rsv25_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON5_mixed_rsv25_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON5_mixed_rsv25_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CON6_mixed_rsv26_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON6_mixed_rsv26_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON6_mixed_rsv26_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CON7_mixed_rsv27_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON7_mixed_rsv27_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON7_mixed_rsv27_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CON8_mixed_rsv28_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON8_mixed_rsv28_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON8_mixed_rsv28_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CON9_mixed_rsv29_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CON9_mixed_rsv29_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CON9_mixed_rsv29_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CONA_mixed_rsv2a_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CONA_mixed_rsv2a_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CONA_mixed_rsv2a_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CONB_mixed_rsv2b_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CONB_mixed_rsv2b_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CONB_mixed_rsv2b_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CONC_mixed_rsv2c_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CONC_mixed_rsv2c_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CONC_mixed_rsv2c_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_COND_mixed_rsv2d_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_COND_mixed_rsv2d_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_COND_mixed_rsv2d_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CONE_mixed_rsv2f_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CONE_mixed_rsv2f_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CONE_mixed_rsv2f_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_0_RSV2_CONE_mixed_rsv2e_LSB                               (0)
#define MMRF_ABB_RSV2_0_RSV2_CONE_mixed_rsv2e_WIDTH                             (16)
#define MMRF_ABB_RSV2_0_RSV2_CONE_mixed_rsv2e_MASK                              (0xFFFF)


#define MMRF_ABB_RSV2_1_RSV2_CON0_mixed_rsv20_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON0_mixed_rsv20_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON0_mixed_rsv20_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CON1_mixed_rsv21_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON1_mixed_rsv21_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON1_mixed_rsv21_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CON2_mixed_rsv22_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON2_mixed_rsv22_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON2_mixed_rsv22_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CON3_mixed_rsv23_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON3_mixed_rsv23_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON3_mixed_rsv23_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CON4_mixed_rsv24_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON4_mixed_rsv24_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON4_mixed_rsv24_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CON5_mixed_rsv25_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON5_mixed_rsv25_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON5_mixed_rsv25_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CON6_mixed_rsv26_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON6_mixed_rsv26_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON6_mixed_rsv26_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CON7_mixed_rsv27_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON7_mixed_rsv27_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON7_mixed_rsv27_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CON8_mixed_rsv28_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON8_mixed_rsv28_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON8_mixed_rsv28_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CON9_mixed_rsv29_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CON9_mixed_rsv29_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CON9_mixed_rsv29_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CONA_mixed_rsv2a_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CONA_mixed_rsv2a_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CONA_mixed_rsv2a_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CONB_mixed_rsv2b_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CONB_mixed_rsv2b_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CONB_mixed_rsv2b_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CONC_mixed_rsv2c_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CONC_mixed_rsv2c_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CONC_mixed_rsv2c_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_COND_mixed_rsv2d_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_COND_mixed_rsv2d_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_COND_mixed_rsv2d_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CONE_mixed_rsv2f_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CONE_mixed_rsv2f_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CONE_mixed_rsv2f_MASK                              (0xFFFF)

#define MMRF_ABB_RSV2_1_RSV2_CONE_mixed_rsv2e_LSB                               (0)
#define MMRF_ABB_RSV2_1_RSV2_CONE_mixed_rsv2e_WIDTH                             (16)
#define MMRF_ABB_RSV2_1_RSV2_CONE_mixed_rsv2e_MASK                              (0xFFFF)


#define MMRF_ABB_SWAP_CON0_rx1_c2k_swap_LSB                                     (5)
#define MMRF_ABB_SWAP_CON0_rx1_c2k_swap_WIDTH                                   (1)
#define MMRF_ABB_SWAP_CON0_rx1_c2k_swap_MASK                                    (0x0020)
#define MMRF_ABB_SWAP_CON0_rx1_c2k_swap_BIT                                     (0x0020)

#define MMRF_ABB_SWAP_CON0_rx2_c2k_swap_LSB                                     (4)
#define MMRF_ABB_SWAP_CON0_rx2_c2k_swap_WIDTH                                   (1)
#define MMRF_ABB_SWAP_CON0_rx2_c2k_swap_MASK                                    (0x0010)
#define MMRF_ABB_SWAP_CON0_rx2_c2k_swap_BIT                                     (0x0010)

#define MMRF_ABB_SWAP_CON0_detadc_c2k_swap_sw_ctrl_LSB                          (3)
#define MMRF_ABB_SWAP_CON0_detadc_c2k_swap_sw_ctrl_WIDTH                        (1)
#define MMRF_ABB_SWAP_CON0_detadc_c2k_swap_sw_ctrl_MASK                         (0x0008)
#define MMRF_ABB_SWAP_CON0_detadc_c2k_swap_sw_ctrl_BIT                          (0x0008)

#define MMRF_ABB_SWAP_CON0_tx_c2k_swap_sw_ctrl_LSB                              (2)
#define MMRF_ABB_SWAP_CON0_tx_c2k_swap_sw_ctrl_WIDTH                            (1)
#define MMRF_ABB_SWAP_CON0_tx_c2k_swap_sw_ctrl_MASK                             (0x0004)
#define MMRF_ABB_SWAP_CON0_tx_c2k_swap_sw_ctrl_BIT                              (0x0004)

#define MMRF_ABB_SWAP_CON0_detadc_c2k_swap_LSB                                  (1)
#define MMRF_ABB_SWAP_CON0_detadc_c2k_swap_WIDTH                                (1)
#define MMRF_ABB_SWAP_CON0_detadc_c2k_swap_MASK                                 (0x0002)
#define MMRF_ABB_SWAP_CON0_detadc_c2k_swap_BIT                                  (0x0002)

#define MMRF_ABB_SWAP_CON0_tx_c2k_swap_LSB                                      (0)
#define MMRF_ABB_SWAP_CON0_tx_c2k_swap_WIDTH                                    (1)
#define MMRF_ABB_SWAP_CON0_tx_c2k_swap_MASK                                     (0x0001)
#define MMRF_ABB_SWAP_CON0_tx_c2k_swap_BIT                                      (0x0001)

#define MMRF_ABB_SWAP_CON1_mm_apc_swap_LSB                                      (0)
#define MMRF_ABB_SWAP_CON1_mm_apc_swap_WIDTH                                    (1)
#define MMRF_ABB_SWAP_CON1_mm_apc_swap_MASK                                     (0x0001)
#define MMRF_ABB_SWAP_CON1_mm_apc_swap_BIT                                      (0x0001)

#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON2_pbbrx_w_adc2dfe3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON3_pbbrx_w_dfe2adc3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON4_pbbrx_t_adc2dfe3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON5_pbbrx_t_dfe2adc3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON6_pbbrx_l_adc2dfe3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON7_pbbrx_l_dfe2adc3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CON8_pbbrx_w_imm_moode_LSB                                (2)
#define MMRF_ABB_SWAP_CON8_pbbrx_w_imm_moode_WIDTH                              (1)
#define MMRF_ABB_SWAP_CON8_pbbrx_w_imm_moode_MASK                               (0x0004)
#define MMRF_ABB_SWAP_CON8_pbbrx_w_imm_moode_BIT                                (0x0004)

#define MMRF_ABB_SWAP_CON8_pbbrx_t_imm_moode_LSB                                (1)
#define MMRF_ABB_SWAP_CON8_pbbrx_t_imm_moode_WIDTH                              (1)
#define MMRF_ABB_SWAP_CON8_pbbrx_t_imm_moode_MASK                               (0x0002)
#define MMRF_ABB_SWAP_CON8_pbbrx_t_imm_moode_BIT                                (0x0002)

#define MMRF_ABB_SWAP_CON8_pbbrx_l_imm_moode_LSB                                (0)
#define MMRF_ABB_SWAP_CON8_pbbrx_l_imm_moode_WIDTH                              (1)
#define MMRF_ABB_SWAP_CON8_pbbrx_l_imm_moode_MASK                               (0x0001)
#define MMRF_ABB_SWAP_CON8_pbbrx_l_imm_moode_BIT                                (0x0001)

#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CON9_dbbrx_w_adc2dfe3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONA_dbbrx_w_dfe2adc3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONB_dbbrx_t_adc2dfe3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONC_dbbrx_t_dfe2adc3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_COND_dbbrx_l_adc2dfe3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc0_sel_LSB                             (12)
#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc0_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc0_sel_MASK                            (0xF000)

#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc1_sel_LSB                             (8)
#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc1_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc1_sel_MASK                            (0x0F00)

#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc2_sel_LSB                             (4)
#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc2_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc2_sel_MASK                            (0x00F0)

#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc3_sel_LSB                             (0)
#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc3_sel_WIDTH                           (4)
#define MMRF_ABB_SWAP_CONE_dbbrx_l_dfe2adc3_sel_MASK                            (0x000F)

#define MMRF_ABB_SWAP_CONF_dbbrx_w_imm_moode_LSB                                (2)
#define MMRF_ABB_SWAP_CONF_dbbrx_w_imm_moode_WIDTH                              (1)
#define MMRF_ABB_SWAP_CONF_dbbrx_w_imm_moode_MASK                               (0x0004)
#define MMRF_ABB_SWAP_CONF_dbbrx_w_imm_moode_BIT                                (0x0004)

#define MMRF_ABB_SWAP_CONF_dbbrx_t_imm_moode_LSB                                (1)
#define MMRF_ABB_SWAP_CONF_dbbrx_t_imm_moode_WIDTH                              (1)
#define MMRF_ABB_SWAP_CONF_dbbrx_t_imm_moode_MASK                               (0x0002)
#define MMRF_ABB_SWAP_CONF_dbbrx_t_imm_moode_BIT                                (0x0002)

#define MMRF_ABB_SWAP_CONF_dbbrx_l_imm_moode_LSB                                (0)
#define MMRF_ABB_SWAP_CONF_dbbrx_l_imm_moode_WIDTH                              (1)
#define MMRF_ABB_SWAP_CONF_dbbrx_l_imm_moode_MASK                               (0x0001)
#define MMRF_ABB_SWAP_CONF_dbbrx_l_imm_moode_BIT                                (0x0001)

#define MMRF_ABB_SWAP_CON10_mixed_swap_rsv10_LSB                                (0)
#define MMRF_ABB_SWAP_CON10_mixed_swap_rsv10_WIDTH                              (16)
#define MMRF_ABB_SWAP_CON10_mixed_swap_rsv10_MASK                               (0xFFFF)

#define MMRF_ABB_SWAP_CON11_mixed_swap_rsv11_LSB                                (0)
#define MMRF_ABB_SWAP_CON11_mixed_swap_rsv11_WIDTH                              (16)
#define MMRF_ABB_SWAP_CON11_mixed_swap_rsv11_MASK                               (0xFFFF)

#define MMRF_ABB_SWAP_CON12_mixed_swap_rsv12_LSB                                (0)
#define MMRF_ABB_SWAP_CON12_mixed_swap_rsv12_WIDTH                              (16)
#define MMRF_ABB_SWAP_CON12_mixed_swap_rsv12_MASK                               (0xFFFF)

#define MMRF_ABB_SWAP_CON13_mixed_swap_rsv13_LSB                                (0)
#define MMRF_ABB_SWAP_CON13_mixed_swap_rsv13_WIDTH                              (16)
#define MMRF_ABB_SWAP_CON13_mixed_swap_rsv13_MASK                               (0xFFFF)

#define MMRF_ABB_SWAP_CON14_mixed_swap_rsv14_LSB                                (0)
#define MMRF_ABB_SWAP_CON14_mixed_swap_rsv14_WIDTH                              (16)
#define MMRF_ABB_SWAP_CON14_mixed_swap_rsv14_MASK                               (0xFFFF)

#define MMRF_ABB_SWAP_CON15_mixed_swap_rsv15_LSB                                (0)
#define MMRF_ABB_SWAP_CON15_mixed_swap_rsv15_WIDTH                              (16)
#define MMRF_ABB_SWAP_CON15_mixed_swap_rsv15_MASK                               (0xFFFF)

#define MMRF_ABB_SWAP_CON16_mixed_swap_rsv16_LSB                                (0)
#define MMRF_ABB_SWAP_CON16_mixed_swap_rsv16_WIDTH                              (16)
#define MMRF_ABB_SWAP_CON16_mixed_swap_rsv16_MASK                               (0xFFFF)

#define MMRF_ABB_SWAP_CON17_mixed_swap_status0_LSB                              (0)
#define MMRF_ABB_SWAP_CON17_mixed_swap_status0_WIDTH                            (16)
#define MMRF_ABB_SWAP_CON17_mixed_swap_status0_MASK                             (0xFFFF)

#define MMRF_ABB_SWAP_CON18_mixed_swap_status1_LSB                              (0)
#define MMRF_ABB_SWAP_CON18_mixed_swap_status1_WIDTH                            (16)
#define MMRF_ABB_SWAP_CON18_mixed_swap_status1_MASK                             (0xFFFF)

#define MMRF_ABB_SWAP_CON19_mixed_swap_status2_LSB                              (0)
#define MMRF_ABB_SWAP_CON19_mixed_swap_status2_WIDTH                            (16)
#define MMRF_ABB_SWAP_CON19_mixed_swap_status2_MASK                             (0xFFFF)

#define MMRF_ABB_SWAP_CON1A_mixed_swap_status3_LSB                              (0)
#define MMRF_ABB_SWAP_CON1A_mixed_swap_status3_WIDTH                            (16)
#define MMRF_ABB_SWAP_CON1A_mixed_swap_status3_MASK                             (0xFFFF)

#define MMRF_ABB_SWAP_CON1B_mixed_swap_status0_LSB                              (0)
#define MMRF_ABB_SWAP_CON1B_mixed_swap_status0_WIDTH                            (16)
#define MMRF_ABB_SWAP_CON1B_mixed_swap_status0_MASK                             (0xFFFF)

#define MMRF_ABB_SWAP_CON1C_mixed_swap_status1_LSB                              (0)
#define MMRF_ABB_SWAP_CON1C_mixed_swap_status1_WIDTH                            (16)
#define MMRF_ABB_SWAP_CON1C_mixed_swap_status1_MASK                             (0xFFFF)

#define MMRF_ABB_SWAP_CON10_mixed_swap_status2_LSB                              (0)
#define MMRF_ABB_SWAP_CON10_mixed_swap_status2_WIDTH                            (16)
#define MMRF_ABB_SWAP_CON10_mixed_swap_status2_MASK                             (0xFFFF)

#define MMRF_ABB_SWAP_CON11_mixed_swap_status3_LSB                              (0)
#define MMRF_ABB_SWAP_CON11_mixed_swap_status3_WIDTH                            (16)
#define MMRF_ABB_SWAP_CON11_mixed_swap_status3_MASK                             (0xFFFF)

#define MMRF_ABB_SWAP_CON12_mixed_swap_status3_LSB                              (0)
#define MMRF_ABB_SWAP_CON12_mixed_swap_status3_WIDTH                            (16)
#define MMRF_ABB_SWAP_CON12_mixed_swap_status3_MASK                             (0xFFFF)

/*=================================================================================================================================*/
//Partial DFE Register
#define MMRF_PT_DFE_VERSION_DATE                                                ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0000))
#define MMRF_PT_DFE_INTF_NEG_SAMPLE                                             ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0020))
#define MMRF_PT_DFE_INTF_IQ_SWAP                                                ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0024))
#define MMRF_PT_DFE_INTF_IQ_FORMAT                                              ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0028))
#define MMRF_PT_DFE_INTF_MIPI1_EN                                               ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x002C))
#define MMRF_PT_DFE_MON_SEL                                                     ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0040))
#define MMRF_PT_DFE_MON                                                         ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0044))
#define MMRF_PT_DFE_LTMR_IRQ_SW                                                 ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0060))
#define MMRF_PT_DFE_LTMR_INFORM_DONE_IRQ_SW                                     ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0064))
#define MMRF_PT_DFE_F26M_CK_COUNT                                               ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0100))
#define MMRF_PT_DFE_F13M_CK_COUNT                                               ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0104))
#define MMRF_PT_DFE_RXAD_INT_CK_COUNT                                           ((APBADDR32)(MMRF_PT_DFE_CON_REG_BASE + 0x0108))


/*=================================================================================================================================*/
//RXDFE0
#define MMRF_L_RXDFE0_FC_CON_P0                                                 ((APBADDR32)(MMRF_L_DFE0_RX_FC_REG_BASE + 0x00008000))
#define MMRF_L_RXDFE0_FC_CON_P1                                                 ((APBADDR32)(MMRF_L_DFE0_RX_FC_REG_BASE + 0x00008004))

#define MMRF_T_RXDFE0_FC_CON_P0                                                 ((APBADDR32)(MMRF_T_DFE0_RX_FC_REG_BASE + 0x00004000))
#define MMRF_T_RXDFE0_FC_CON_P1                                                 ((APBADDR32)(MMRF_T_DFE0_RX_FC_REG_BASE + 0x00004004))

#define MMRF_W_RXDFE0_FC_CON_P0                                                 ((APBADDR32)(MMRF_W_DFE0_RX_FC_REG_BASE + 0x00000000))
#define MMRF_W_RXDFE0_FC_CON_P1                                                 ((APBADDR32)(MMRF_W_DFE0_RX_FC_REG_BASE + 0x00000004))

//RXDFE1
#define MMRF_L_RXDFE1_FC_CON_P0                                                 ((APBADDR32)(MMRF_L_DFE1_RX_FC_REG_BASE + 0x00008000))
#define MMRF_L_RXDFE1_FC_CON_P1                                                 ((APBADDR32)(MMRF_L_DFE1_RX_FC_REG_BASE + 0x00008004))

#define MMRF_T_RXDFE1_FC_CON_P0                                                 ((APBADDR32)(MMRF_T_DFE1_RX_FC_REG_BASE + 0x00004000))
#define MMRF_T_RXDFE1_FC_CON_P1                                                 ((APBADDR32)(MMRF_T_DFE1_RX_FC_REG_BASE + 0x00004004))

#define MMRF_W_RXDFE1_FC_CON_P0                                                 ((APBADDR32)(MMRF_W_DFE1_RX_FC_REG_BASE + 0x00000000))
#define MMRF_W_RXDFE1_FC_CON_P1                                                 ((APBADDR32)(MMRF_W_DFE1_RX_FC_REG_BASE + 0x00000004))

//TXDFE0
#define MMRF_TXDFE0_BBTX_RF_CON                                                 ((APBADDR32)(MMRF_WTL_TXDFE0_REG_BASE + 0x840C))

//TXDFE1
#define MMRF_TXDFE1_BBTX_RF_CON                                                 ((APBADDR32)(MMRF_WTL_TXDFE1_REG_BASE + 0x840C))

/*=================================================================================================================================*/
//PT_DFE
#define MMRF_PT_DFE_VERSION_DATE_VERSION_DATE_LSB                               (0)
#define MMRF_PT_DFE_VERSION_DATE_VERSION_DATE_WIDTH                             (32)
#define MMRF_PT_DFE_VERSION_DATE_VERSION_DATE_MASK                              (0xFFFFFFFF)

#define MMRF_PT_DFE_INTF_NEG_SAMPLE_NEG_SAMPLE_LSB                              (0)
#define MMRF_PT_DFE_INTF_NEG_SAMPLE_NEG_SAMPLE_WIDTH                            (6)
#define MMRF_PT_DFE_INTF_NEG_SAMPLE_NEG_SAMPLE_MASK                             (0x0000003F)

#define MMRF_PT_DFE_INTF_IQ_SWAP_IQ_SWAP_LSB                                    (0)
#define MMRF_PT_DFE_INTF_IQ_SWAP_IQ_SWAP_WIDTH                                  (6)
#define MMRF_PT_DFE_INTF_IQ_SWAP_IQ_SWAP_MASK                                   (0x0000003F)

#define MMRF_PT_DFE_INTF_IQ_FORMAT_IQ_FORMAT_LSB                                (0)
#define MMRF_PT_DFE_INTF_IQ_FORMAT_IQ_FORMAT_WIDTH                              (6)
#define MMRF_PT_DFE_INTF_IQ_FORMAT_IQ_FORMAT_MASK                               (0x0000003F)

#define MMRF_PT_DFE_INTF_MIPI1_EN_MIPI1_EN_LSB                                  (0)
#define MMRF_PT_DFE_INTF_MIPI1_EN_MIPI1_EN_WIDTH                                (1)
#define MMRF_PT_DFE_INTF_MIPI1_EN_MIPI1_EN_MASK                                 (0x00000001)
#define MMRF_PT_DFE_INTF_MIPI1_EN_MIPI1_EN_BIT                                  (0x00000001)

#define MMRF_PT_DFE_MON_SEL_MON_SEL_LSB                                         (0)
#define MMRF_PT_DFE_MON_SEL_MON_SEL_WIDTH                                       (6)
#define MMRF_PT_DFE_MON_SEL_MON_SEL_MASK                                        (0x0000003F)

#define MMRF_PT_DFE_MON_PT_DFE_MON_LSB                                          (0)
#define MMRF_PT_DFE_MON_PT_DFE_MON_WIDTH                                        (32)
#define MMRF_PT_DFE_MON_PT_DFE_MON_MASK                                         (0xFFFFFFFF)

#define MMRF_PT_DFE_LTMR_IRQ_SW_LTMR_IRQ_SW_LSB                                 (0)
#define MMRF_PT_DFE_LTMR_IRQ_SW_LTMR_IRQ_SW_WIDTH                               (8)
#define MMRF_PT_DFE_LTMR_IRQ_SW_LTMR_IRQ_SW_MASK                                (0x000000FF)

#define MMRF_PT_DFE_LTMR_INFORM_DONE_IRQ_SW_LTMR_INFORM_DONE_IRQ_SW_LSB         (0)
#define MMRF_PT_DFE_LTMR_INFORM_DONE_IRQ_SW_LTMR_INFORM_DONE_IRQ_SW_WIDTH       (2)
#define MMRF_PT_DFE_LTMR_INFORM_DONE_IRQ_SW_LTMR_INFORM_DONE_IRQ_SW_MASK        (0x00000003)

#define MMRF_PT_DFE_F26M_CK_COUNT_F26M_CK_COUNT_LSB                             (0)
#define MMRF_PT_DFE_F26M_CK_COUNT_F26M_CK_COUNT_WIDTH                           (16)
#define MMRF_PT_DFE_F26M_CK_COUNT_F26M_CK_COUNT_MASK                            (0x0000FFFF)

#define MMRF_PT_DFE_F13M_CK_COUNT_F13M_CK_COUNT_LSB                             (0)
#define MMRF_PT_DFE_F13M_CK_COUNT_F13M_CK_COUNT_WIDTH                           (16)
#define MMRF_PT_DFE_F13M_CK_COUNT_F13M_CK_COUNT_MASK                            (0x0000FFFF)

#define MMRF_PT_DFE_RXAD_INT_CK_COUNT_RXAD_INT_CK_COUNT_LSB                     (0)
#define MMRF_PT_DFE_RXAD_INT_CK_COUNT_RXAD_INT_CK_COUNT_WIDTH                   (16)
#define MMRF_PT_DFE_RXAD_INT_CK_COUNT_RXAD_INT_CK_COUNT_MASK                    (0x0000FFFF)

/*=================================================================================================================================*/
//BSISPI
#define MMRF_BSISPI_PORT_PARAM_ORION_PLUS_TXDATA_FORMAT_LSB                     (31)
#define MMRF_BSISPI_PORT_PARAM_ORION_PLUS_TXDATA_FORMAT_WIDTH                   (1)
#define MMRF_BSISPI_PORT_PARAM_ORION_PLUS_TXDATA_FORMAT_MASK                    (0x80000000)
#define MMRF_BSISPI_PORT_PARAM_ORION_PLUS_TXDATA_FORMAT_BIT                     (0x80000000)

#define MMRF_BSISPI_PORT_PARAM_SW_CS_SEL_LSB                                    (16)
#define MMRF_BSISPI_PORT_PARAM_SW_CS_SEL_WIDTH                                  (1)
#define MMRF_BSISPI_PORT_PARAM_SW_CS_SEL_MASK                                   (0x00010000)
#define MMRF_BSISPI_PORT_PARAM_SW_CS_SEL_BIT                                    (0x00010000)

#define MMRF_BSISPI_PORT_PARAM_BSI_CW_INSERT_0_ENABLE_LSB                       (15)
#define MMRF_BSISPI_PORT_PARAM_BSI_CW_INSERT_0_ENABLE_WIDTH                     (1)
#define MMRF_BSISPI_PORT_PARAM_BSI_CW_INSERT_0_ENABLE_MASK                      (0x00008000)
#define MMRF_BSISPI_PORT_PARAM_BSI_CW_INSERT_0_ENABLE_BIT                       (0x00008000)

#define MMRF_BSISPI_PORT_PARAM_BSI_CW_INSERT_0_LSB                              (9)
#define MMRF_BSISPI_PORT_PARAM_BSI_CW_INSERT_0_WIDTH                            (6)
#define MMRF_BSISPI_PORT_PARAM_BSI_CW_INSERT_0_MASK                             (0x00007E00)

#define MMRF_BSISPI_PORT_PARAM_BSI_IO_MODE_LSB                                  (8)
#define MMRF_BSISPI_PORT_PARAM_BSI_IO_MODE_WIDTH                                (1)
#define MMRF_BSISPI_PORT_PARAM_BSI_IO_MODE_MASK                                 (0x00000100)
#define MMRF_BSISPI_PORT_PARAM_BSI_IO_MODE_BIT                                  (0x00000100)

#define MMRF_BSISPI_PORT_PARAM_RESET_MODE_LSB                                   (7)
#define MMRF_BSISPI_PORT_PARAM_RESET_MODE_WIDTH                                 (1)
#define MMRF_BSISPI_PORT_PARAM_RESET_MODE_MASK                                  (0x00000080)
#define MMRF_BSISPI_PORT_PARAM_RESET_MODE_BIT                                   (0x00000080)

#define MMRF_BSISPI_PORT_PARAM_READ_PHASE_LSB                                   (5)
#define MMRF_BSISPI_PORT_PARAM_READ_PHASE_WIDTH                                 (2)
#define MMRF_BSISPI_PORT_PARAM_READ_PHASE_MASK                                  (0x00000060)

#define MMRF_BSISPI_PORT_PARAM_DBG_EN_LSB                                       (4)
#define MMRF_BSISPI_PORT_PARAM_DBG_EN_WIDTH                                     (1)
#define MMRF_BSISPI_PORT_PARAM_DBG_EN_MASK                                      (0x00000010)
#define MMRF_BSISPI_PORT_PARAM_DBG_EN_BIT                                       (0x00000010)

#define MMRF_BSISPI_PORT_PARAM_SINGLE_DIR_LSB                                   (3)
#define MMRF_BSISPI_PORT_PARAM_SINGLE_DIR_WIDTH                                 (1)
#define MMRF_BSISPI_PORT_PARAM_SINGLE_DIR_MASK                                  (0x00000008)
#define MMRF_BSISPI_PORT_PARAM_SINGLE_DIR_BIT                                   (0x00000008)

#define MMRF_BSISPI_PORT_PARAM_BSI_MODE_LSB                                     (1)
#define MMRF_BSISPI_PORT_PARAM_BSI_MODE_WIDTH                                   (2)
#define MMRF_BSISPI_PORT_PARAM_BSI_MODE_MASK                                    (0x00000006)

#define MMRF_BSISPI_PORT_PARAM_MIPI_EN_LSB                                      (0)
#define MMRF_BSISPI_PORT_PARAM_MIPI_EN_WIDTH                                    (1)
#define MMRF_BSISPI_PORT_PARAM_MIPI_EN_MASK                                     (0x00000001)
#define MMRF_BSISPI_PORT_PARAM_MIPI_EN_BIT                                      (0x00000001)

#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN2_LSB                                     (10)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN2_WIDTH                                   (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN2_MASK                                    (0x00000400)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN2_BIT                                     (0x00000400)

#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN1_LSB                                     (9)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN1_WIDTH                                   (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN1_MASK                                    (0x00000200)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN1_BIT                                     (0x00000200)

#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN0_LSB                                     (8)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN0_WIDTH                                   (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN0_MASK                                    (0x00000100)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DIN0_BIT                                     (0x00000100)

#define MMRF_BSISPI_SW_MODE_SW_BSI_OE_LSB                                       (5)
#define MMRF_BSISPI_SW_MODE_SW_BSI_OE_WIDTH                                     (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_OE_MASK                                      (0x00000020)
#define MMRF_BSISPI_SW_MODE_SW_BSI_OE_BIT                                       (0x00000020)

#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA2_LSB                                    (4)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA2_WIDTH                                  (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA2_MASK                                   (0x00000010)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA2_BIT                                    (0x00000010)

#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA1_LSB                                    (3)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA1_WIDTH                                  (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA1_MASK                                   (0x00000008)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA1_BIT                                    (0x00000008)

#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA0_LSB                                    (2)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA0_WIDTH                                  (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA0_MASK                                   (0x00000004)
#define MMRF_BSISPI_SW_MODE_SW_BSI_DATA0_BIT                                    (0x00000004)

#define MMRF_BSISPI_SW_MODE_SW_BSI_CS_LSB                                       (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_CS_WIDTH                                     (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_CS_MASK                                      (0x00000002)
#define MMRF_BSISPI_SW_MODE_SW_BSI_CS_BIT                                       (0x00000002)

#define MMRF_BSISPI_SW_MODE_SW_BSI_CLK_LSB                                      (0)
#define MMRF_BSISPI_SW_MODE_SW_BSI_CLK_WIDTH                                    (1)
#define MMRF_BSISPI_SW_MODE_SW_BSI_CLK_MASK                                     (0x00000001)
#define MMRF_BSISPI_SW_MODE_SW_BSI_CLK_BIT                                      (0x00000001)

#define MMRF_BSISPI_IC0_PARAM1_WLEN0_LSB                                        (24)
#define MMRF_BSISPI_IC0_PARAM1_WLEN0_WIDTH                                      (6)
#define MMRF_BSISPI_IC0_PARAM1_WLEN0_MASK                                       (0x3F000000)

#define MMRF_BSISPI_IC0_PARAM1_BSI_IDLE_CNT0_LSB                                (16)
#define MMRF_BSISPI_IC0_PARAM1_BSI_IDLE_CNT0_WIDTH                              (5)
#define MMRF_BSISPI_IC0_PARAM1_BSI_IDLE_CNT0_MASK                               (0x001F0000)

#define MMRF_BSISPI_IC0_PARAM1_RD_TRANS_LEN0_LSB                                (12)
#define MMRF_BSISPI_IC0_PARAM1_RD_TRANS_LEN0_WIDTH                              (4)
#define MMRF_BSISPI_IC0_PARAM1_RD_TRANS_LEN0_MASK                               (0x0000F000)

#define MMRF_BSISPI_IC0_PARAM1_RD_TRANS_CLKON0_LSB                              (11)
#define MMRF_BSISPI_IC0_PARAM1_RD_TRANS_CLKON0_WIDTH                            (1)
#define MMRF_BSISPI_IC0_PARAM1_RD_TRANS_CLKON0_MASK                             (0x00000800)
#define MMRF_BSISPI_IC0_PARAM1_RD_TRANS_CLKON0_BIT                              (0x00000800)

#define MMRF_BSISPI_IC0_PARAM1_RD_CLK_SPD0_LSB                                  (8)
#define MMRF_BSISPI_IC0_PARAM1_RD_CLK_SPD0_WIDTH                                (3)
#define MMRF_BSISPI_IC0_PARAM1_RD_CLK_SPD0_MASK                                 (0x00000700)

#define MMRF_BSISPI_IC0_PARAM1_CS0_POL_LSB                                      (7)
#define MMRF_BSISPI_IC0_PARAM1_CS0_POL_WIDTH                                    (1)
#define MMRF_BSISPI_IC0_PARAM1_CS0_POL_MASK                                     (0x00000080)
#define MMRF_BSISPI_IC0_PARAM1_CS0_POL_BIT                                      (0x00000080)

#define MMRF_BSISPI_IC0_PARAM1_CS0_LEN_LSB                                      (5)
#define MMRF_BSISPI_IC0_PARAM1_CS0_LEN_WIDTH                                    (2)
#define MMRF_BSISPI_IC0_PARAM1_CS0_LEN_MASK                                     (0x00000060)

#define MMRF_BSISPI_IC0_PARAM1_CLK_SPD0_LSB                                     (2)
#define MMRF_BSISPI_IC0_PARAM1_CLK_SPD0_WIDTH                                   (3)
#define MMRF_BSISPI_IC0_PARAM1_CLK_SPD0_MASK                                    (0x0000001C)

#define MMRF_BSISPI_IC0_PARAM1_CLK_POL0_LSB                                     (0)
#define MMRF_BSISPI_IC0_PARAM1_CLK_POL0_WIDTH                                   (2)
#define MMRF_BSISPI_IC0_PARAM1_CLK_POL0_MASK                                    (0x00000003)

#define MMRF_BSISPI_IC0_PARAM2_RD_RLEN0_LSB                                     (24)
#define MMRF_BSISPI_IC0_PARAM2_RD_RLEN0_WIDTH                                   (6)
#define MMRF_BSISPI_IC0_PARAM2_RD_RLEN0_MASK                                    (0x3F000000)

#define MMRF_BSISPI_IC0_PARAM2_RD_WLEN0_LSB                                     (16)
#define MMRF_BSISPI_IC0_PARAM2_RD_WLEN0_WIDTH                                   (5)
#define MMRF_BSISPI_IC0_PARAM2_RD_WLEN0_MASK                                    (0x001F0000)

#define MMRF_BSISPI_IC0_PARAM2_RD_RDATA_CS0_POL_LSB                             (15)
#define MMRF_BSISPI_IC0_PARAM2_RD_RDATA_CS0_POL_WIDTH                           (1)
#define MMRF_BSISPI_IC0_PARAM2_RD_RDATA_CS0_POL_MASK                            (0x00008000)
#define MMRF_BSISPI_IC0_PARAM2_RD_RDATA_CS0_POL_BIT                             (0x00008000)

#define MMRF_BSISPI_IC0_PARAM2_RD_TRANS_CS0_WAVEFORM_LSB                        (0)
#define MMRF_BSISPI_IC0_PARAM2_RD_TRANS_CS0_WAVEFORM_WIDTH                      (15)
#define MMRF_BSISPI_IC0_PARAM2_RD_TRANS_CS0_WAVEFORM_MASK                       (0x00007FFF)

#define MMRF_BSISPI_IC1_PARAM1_WLEN1_LSB                                        (24)
#define MMRF_BSISPI_IC1_PARAM1_WLEN1_WIDTH                                      (6)
#define MMRF_BSISPI_IC1_PARAM1_WLEN1_MASK                                       (0x3F000000)

#define MMRF_BSISPI_IC1_PARAM1_BSI_IDLE_CNT1_LSB                                (16)
#define MMRF_BSISPI_IC1_PARAM1_BSI_IDLE_CNT1_WIDTH                              (5)
#define MMRF_BSISPI_IC1_PARAM1_BSI_IDLE_CNT1_MASK                               (0x001F0000)

#define MMRF_BSISPI_IC1_PARAM1_RD_TRANS_LEN1_LSB                                (12)
#define MMRF_BSISPI_IC1_PARAM1_RD_TRANS_LEN1_WIDTH                              (4)
#define MMRF_BSISPI_IC1_PARAM1_RD_TRANS_LEN1_MASK                               (0x0000F000)

#define MMRF_BSISPI_IC1_PARAM1_RD_TRANS_CLKON1_LSB                              (11)
#define MMRF_BSISPI_IC1_PARAM1_RD_TRANS_CLKON1_WIDTH                            (1)
#define MMRF_BSISPI_IC1_PARAM1_RD_TRANS_CLKON1_MASK                             (0x00000800)
#define MMRF_BSISPI_IC1_PARAM1_RD_TRANS_CLKON1_BIT                              (0x00000800)

#define MMRF_BSISPI_IC1_PARAM1_RD_CLK_SPD1_LSB                                  (8)
#define MMRF_BSISPI_IC1_PARAM1_RD_CLK_SPD1_WIDTH                                (3)
#define MMRF_BSISPI_IC1_PARAM1_RD_CLK_SPD1_MASK                                 (0x00000700)

#define MMRF_BSISPI_IC1_PARAM1_CS1_POL_LSB                                      (7)
#define MMRF_BSISPI_IC1_PARAM1_CS1_POL_WIDTH                                    (1)
#define MMRF_BSISPI_IC1_PARAM1_CS1_POL_MASK                                     (0x00000080)
#define MMRF_BSISPI_IC1_PARAM1_CS1_POL_BIT                                      (0x00000080)

#define MMRF_BSISPI_IC1_PARAM1_CS1_LEN_LSB                                      (5)
#define MMRF_BSISPI_IC1_PARAM1_CS1_LEN_WIDTH                                    (2)
#define MMRF_BSISPI_IC1_PARAM1_CS1_LEN_MASK                                     (0x00000060)

#define MMRF_BSISPI_IC1_PARAM1_CLK_SPD1_LSB                                     (2)
#define MMRF_BSISPI_IC1_PARAM1_CLK_SPD1_WIDTH                                   (3)
#define MMRF_BSISPI_IC1_PARAM1_CLK_SPD1_MASK                                    (0x0000001C)

#define MMRF_BSISPI_IC1_PARAM1_CLK_POL1_LSB                                     (0)
#define MMRF_BSISPI_IC1_PARAM1_CLK_POL1_WIDTH                                   (2)
#define MMRF_BSISPI_IC1_PARAM1_CLK_POL1_MASK                                    (0x00000003)

#define MMRF_BSISPI_IC1_PARAM2_RD_RLEN1_LSB                                     (24)
#define MMRF_BSISPI_IC1_PARAM2_RD_RLEN1_WIDTH                                   (6)
#define MMRF_BSISPI_IC1_PARAM2_RD_RLEN1_MASK                                    (0x3F000000)

#define MMRF_BSISPI_IC1_PARAM2_RD_WLEN1_LSB                                     (16)
#define MMRF_BSISPI_IC1_PARAM2_RD_WLEN1_WIDTH                                   (5)
#define MMRF_BSISPI_IC1_PARAM2_RD_WLEN1_MASK                                    (0x001F0000)

#define MMRF_BSISPI_IC1_PARAM2_RD_RDATA_CS1_POL_LSB                             (15)
#define MMRF_BSISPI_IC1_PARAM2_RD_RDATA_CS1_POL_WIDTH                           (1)
#define MMRF_BSISPI_IC1_PARAM2_RD_RDATA_CS1_POL_MASK                            (0x00008000)
#define MMRF_BSISPI_IC1_PARAM2_RD_RDATA_CS1_POL_BIT                             (0x00008000)

#define MMRF_BSISPI_IC1_PARAM2_RD_TRANS_CS1_WAVEFORM_LSB                        (0)
#define MMRF_BSISPI_IC1_PARAM2_RD_TRANS_CS1_WAVEFORM_WIDTH                      (15)
#define MMRF_BSISPI_IC1_PARAM2_RD_TRANS_CS1_WAVEFORM_MASK                       (0x00007FFF)

#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_WPTR_LSB                            (16)
#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_WPTR_WIDTH                          (7)
#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_WPTR_MASK                           (0x007F0000)

#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_TIMER_EN_LSB                        (1)
#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_TIMER_EN_WIDTH                      (1)
#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_TIMER_EN_MASK                       (0x00000002)
#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_TIMER_EN_BIT                        (0x00000002)

#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_EN_LSB                              (0)
#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_EN_WIDTH                            (1)
#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_EN_MASK                             (0x00000001)
#define MMRF_BSISPI_LOGGER_PARAM_BSI_LOGGER_EN_BIT                              (0x00000001)

#define MMRF_BSISPI_LOGGER_DATA_L_BSI_LOGGER_CW_LSB                             (0)
#define MMRF_BSISPI_LOGGER_DATA_L_BSI_LOGGER_CW_WIDTH                           (32)
#define MMRF_BSISPI_LOGGER_DATA_L_BSI_LOGGER_CW_MASK                            (0xFFFFFFFF)

#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_TIMING_LSB                         (5)
#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_TIMING_WIDTH                       (15)
#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_TIMING_MASK                        (0x000FFFE0)

#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_ID_LSB                             (1)
#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_ID_WIDTH                           (4)
#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_ID_MASK                            (0x0000001E)

#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_CW_RW_LSB                          (0)
#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_CW_RW_WIDTH                        (1)
#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_CW_RW_MASK                         (0x00000001)
#define MMRF_BSISPI_LOGGER_DATA_H_BSI_LOGGER_CW_RW_BIT                          (0x00000001)

/*=================================================================================================================================*/
//BSI_MM
#define MMRF_BSI_MM_IDC_RFICON_WDATA_IDC_RFICON_WDATA_LSB                       (0)
#define MMRF_BSI_MM_IDC_RFICON_WDATA_IDC_RFICON_WDATA_WIDTH                     (32)
#define MMRF_BSI_MM_IDC_RFICON_WDATA_IDC_RFICON_WDATA_MASK                      (0xFFFFFFFF)

#define MMRF_BSI_MM_IDC_RFICOFF_WDATA_IDC_RFICOFF_WDATA_LSB                     (0)
#define MMRF_BSI_MM_IDC_RFICOFF_WDATA_IDC_RFICOFF_WDATA_WIDTH                   (32)
#define MMRF_BSI_MM_IDC_RFICOFF_WDATA_IDC_RFICOFF_WDATA_MASK                    (0xFFFFFFFF)

#define MMRF_BSI_MM_IDC_RFIC2ON_WDATA_IDC_RFIC2ON_WDATA_LSB                     (0)
#define MMRF_BSI_MM_IDC_RFIC2ON_WDATA_IDC_RFIC2ON_WDATA_WIDTH                   (32)
#define MMRF_BSI_MM_IDC_RFIC2ON_WDATA_IDC_RFIC2ON_WDATA_MASK                    (0xFFFFFFFF)

#define MMRF_BSI_MM_IDC_RFIC2OFF_WDATA_IDC_RFIC2OFF_WDATA_LSB                   (0)
#define MMRF_BSI_MM_IDC_RFIC2OFF_WDATA_IDC_RFIC2OFF_WDATA_WIDTH                 (32)
#define MMRF_BSI_MM_IDC_RFIC2OFF_WDATA_IDC_RFIC2OFF_WDATA_MASK                  (0xFFFFFFFF)

#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFIC2OFF_FUNC_ENABLE_LSB                  (3)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFIC2OFF_FUNC_ENABLE_WIDTH                (1)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFIC2OFF_FUNC_ENABLE_MASK                 (0x00000008)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFIC2OFF_FUNC_ENABLE_BIT                  (0x00000008)

#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFIC2ON_FUNC_ENABLE_LSB                   (2)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFIC2ON_FUNC_ENABLE_WIDTH                 (1)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFIC2ON_FUNC_ENABLE_MASK                  (0x00000004)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFIC2ON_FUNC_ENABLE_BIT                   (0x00000004)

#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFICOFF_FUNC_ENABLE_LSB                   (1)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFICOFF_FUNC_ENABLE_WIDTH                 (1)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFICOFF_FUNC_ENABLE_MASK                  (0x00000002)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFICOFF_FUNC_ENABLE_BIT                   (0x00000002)

#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFICON_FUNC_ENABLE_LSB                    (0)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFICON_FUNC_ENABLE_WIDTH                  (1)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFICON_FUNC_ENABLE_MASK                   (0x00000001)
#define MMRF_BSI_MM_IDC_RFIC_CONF_IDC_RFICON_FUNC_ENABLE_BIT                    (0x00000001)

#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFIC2OFF_SW_TRIG_LSB                   (3)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFIC2OFF_SW_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFIC2OFF_SW_TRIG_MASK                  (0x00000008)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFIC2OFF_SW_TRIG_BIT                   (0x00000008)

#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFIC2ON_SW_TRIG_LSB                    (2)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFIC2ON_SW_TRIG_WIDTH                  (1)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFIC2ON_SW_TRIG_MASK                   (0x00000004)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFIC2ON_SW_TRIG_BIT                    (0x00000004)

#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFICOFF_SW_TRIG_LSB                    (1)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFICOFF_SW_TRIG_WIDTH                  (1)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFICOFF_SW_TRIG_MASK                   (0x00000002)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFICOFF_SW_TRIG_BIT                    (0x00000002)

#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFICON_SW_TRIG_LSB                     (0)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFICON_SW_TRIG_WIDTH                   (1)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFICON_SW_TRIG_MASK                    (0x00000001)
#define MMRF_BSI_MM_IDC_RFIC_SW_TRIG_IDC_RFICON_SW_TRIG_BIT                     (0x00000001)

#define MMRF_BSI_MM_AP2RFIC_WDATA_AP2RFIC_WDATA_LSB                             (0)
#define MMRF_BSI_MM_AP2RFIC_WDATA_AP2RFIC_WDATA_WIDTH                           (32)
#define MMRF_BSI_MM_AP2RFIC_WDATA_AP2RFIC_WDATA_MASK                            (0xFFFFFFFF)

#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_FUNC_ENABLE_LSB                       (31)
#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_FUNC_ENABLE_WIDTH                     (1)
#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_FUNC_ENABLE_MASK                      (0x80000000)
#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_FUNC_ENABLE_BIT                       (0x80000000)

#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_BIT2_SHIFT_LSB                        (16)
#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_BIT2_SHIFT_WIDTH                      (5)
#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_BIT2_SHIFT_MASK                       (0x001F0000)

#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_BIT1_SHIFT_LSB                        (8)
#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_BIT1_SHIFT_WIDTH                      (5)
#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_BIT1_SHIFT_MASK                       (0x00001F00)

#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_BIT0_SHIFT_LSB                        (0)
#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_BIT0_SHIFT_WIDTH                      (5)
#define MMRF_BSI_MM_AP2RFIC_SHIFT_AP2RFIC_BIT0_SHIFT_MASK                       (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_CONF_MD1_RFIC1_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_RFIC1_WDATA_1_MD1_RFIC1_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_WDATA_1_MD1_RFIC1_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_WDATA_1_MD1_RFIC1_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_RFIC1_STATUS_MD1_RFIC1_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_STATUS_MD1_RFIC1_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_STATUS_MD1_RFIC1_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_STATUS_MD1_RFIC1_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_RFIC1_RDAT_L_MD1_RFIC1_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_RDAT_L_MD1_RFIC1_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_RDAT_L_MD1_RFIC1_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_RFIC1_RDAT_H_MD1_RFIC1_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_RDAT_H_MD1_RFIC1_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_RFIC1_RDAT_H_MD1_RFIC1_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_CONF_MD1_RFIC2_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_RFIC2_WDATA_1_MD1_RFIC2_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_WDATA_1_MD1_RFIC2_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_WDATA_1_MD1_RFIC2_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_RFIC2_STATUS_MD1_RFIC2_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_STATUS_MD1_RFIC2_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_STATUS_MD1_RFIC2_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_STATUS_MD1_RFIC2_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_RFIC2_RDAT_L_MD1_RFIC2_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_RDAT_L_MD1_RFIC2_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_RDAT_L_MD1_RFIC2_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_RFIC2_RDAT_H_MD1_RFIC2_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_RDAT_H_MD1_RFIC2_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_RFIC2_RDAT_H_MD1_RFIC2_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_CONF_MD1_MIPI0_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_WDATA_1_MD1_MIPI0_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_WDATA_1_MD1_MIPI0_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_WDATA_1_MD1_MIPI0_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_1_MD1_MIPI0_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_WDATA_2_MD1_MIPI0_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_WDATA_2_MD1_MIPI0_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_WDATA_2_MD1_MIPI0_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_2_MD1_MIPI0_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_2_MD1_MIPI0_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_2_MD1_MIPI0_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_2_MD1_MIPI0_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_2_MD1_MIPI0_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RW_LEN_2_MD1_MIPI0_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_STATUS_MD1_MIPI0_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_STATUS_MD1_MIPI0_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_STATUS_MD1_MIPI0_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_STATUS_MD1_MIPI0_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_RDAT_L_MD1_MIPI0_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RDAT_L_MD1_MIPI0_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RDAT_L_MD1_MIPI0_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI0_RDAT_H_MD1_MIPI0_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RDAT_H_MD1_MIPI0_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_MIPI0_RDAT_H_MD1_MIPI0_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_CONF_MD1_MIPI1_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_WDATA_1_MD1_MIPI1_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_WDATA_1_MD1_MIPI1_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_WDATA_1_MD1_MIPI1_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_1_MD1_MIPI1_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_WDATA_2_MD1_MIPI1_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_WDATA_2_MD1_MIPI1_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_WDATA_2_MD1_MIPI1_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_2_MD1_MIPI1_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_2_MD1_MIPI1_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_2_MD1_MIPI1_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_2_MD1_MIPI1_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_2_MD1_MIPI1_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RW_LEN_2_MD1_MIPI1_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_STATUS_MD1_MIPI1_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_STATUS_MD1_MIPI1_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_STATUS_MD1_MIPI1_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_STATUS_MD1_MIPI1_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_RDAT_L_MD1_MIPI1_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RDAT_L_MD1_MIPI1_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RDAT_L_MD1_MIPI1_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI1_RDAT_H_MD1_MIPI1_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RDAT_H_MD1_MIPI1_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_MIPI1_RDAT_H_MD1_MIPI1_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_CONF_MD1_MIPI2_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_WDATA_1_MD1_MIPI2_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_WDATA_1_MD1_MIPI2_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_WDATA_1_MD1_MIPI2_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_1_MD1_MIPI2_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_WDATA_2_MD1_MIPI2_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_WDATA_2_MD1_MIPI2_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_WDATA_2_MD1_MIPI2_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_2_MD1_MIPI2_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_2_MD1_MIPI2_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_2_MD1_MIPI2_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_2_MD1_MIPI2_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_2_MD1_MIPI2_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RW_LEN_2_MD1_MIPI2_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_STATUS_MD1_MIPI2_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_STATUS_MD1_MIPI2_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_STATUS_MD1_MIPI2_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_STATUS_MD1_MIPI2_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_RDAT_L_MD1_MIPI2_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RDAT_L_MD1_MIPI2_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RDAT_L_MD1_MIPI2_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI2_RDAT_H_MD1_MIPI2_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RDAT_H_MD1_MIPI2_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_MIPI2_RDAT_H_MD1_MIPI2_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_CONF_MD1_MIPI3_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_WDATA_1_MD1_MIPI3_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_WDATA_1_MD1_MIPI3_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_WDATA_1_MD1_MIPI3_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_1_MD1_MIPI3_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_WDATA_2_MD1_MIPI3_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_WDATA_2_MD1_MIPI3_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_WDATA_2_MD1_MIPI3_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_2_MD1_MIPI3_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_2_MD1_MIPI3_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_2_MD1_MIPI3_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_2_MD1_MIPI3_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_2_MD1_MIPI3_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RW_LEN_2_MD1_MIPI3_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_STATUS_MD1_MIPI3_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_STATUS_MD1_MIPI3_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_STATUS_MD1_MIPI3_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_STATUS_MD1_MIPI3_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_RDAT_L_MD1_MIPI3_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RDAT_L_MD1_MIPI3_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RDAT_L_MD1_MIPI3_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI3_RDAT_H_MD1_MIPI3_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RDAT_H_MD1_MIPI3_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_MIPI3_RDAT_H_MD1_MIPI3_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_CONF_MD1_MIPI4_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_WDATA_1_MD1_MIPI4_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_WDATA_1_MD1_MIPI4_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_WDATA_1_MD1_MIPI4_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_1_MD1_MIPI4_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_WDATA_2_MD1_MIPI4_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_WDATA_2_MD1_MIPI4_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_WDATA_2_MD1_MIPI4_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_2_MD1_MIPI4_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_2_MD1_MIPI4_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_2_MD1_MIPI4_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_2_MD1_MIPI4_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_2_MD1_MIPI4_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RW_LEN_2_MD1_MIPI4_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_STATUS_MD1_MIPI4_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_STATUS_MD1_MIPI4_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_STATUS_MD1_MIPI4_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_STATUS_MD1_MIPI4_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_RDAT_L_MD1_MIPI4_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RDAT_L_MD1_MIPI4_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RDAT_L_MD1_MIPI4_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI4_RDAT_H_MD1_MIPI4_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RDAT_H_MD1_MIPI4_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_MIPI4_RDAT_H_MD1_MIPI4_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_CONF_MD1_MIPI5_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_WDATA_1_MD1_MIPI5_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_WDATA_1_MD1_MIPI5_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_WDATA_1_MD1_MIPI5_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_1_MD1_MIPI5_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_WDATA_2_MD1_MIPI5_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_WDATA_2_MD1_MIPI5_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_WDATA_2_MD1_MIPI5_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_2_MD1_MIPI5_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_2_MD1_MIPI5_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_2_MD1_MIPI5_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_2_MD1_MIPI5_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_2_MD1_MIPI5_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RW_LEN_2_MD1_MIPI5_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_STATUS_MD1_MIPI5_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_STATUS_MD1_MIPI5_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_STATUS_MD1_MIPI5_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_STATUS_MD1_MIPI5_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_RDAT_L_MD1_MIPI5_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RDAT_L_MD1_MIPI5_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RDAT_L_MD1_MIPI5_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI5_RDAT_H_MD1_MIPI5_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RDAT_H_MD1_MIPI5_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_MIPI5_RDAT_H_MD1_MIPI5_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_CONF_MD1_MIPI6_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_WDATA_1_MD1_MIPI6_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_WDATA_1_MD1_MIPI6_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_WDATA_1_MD1_MIPI6_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_1_MD1_MIPI6_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_WDATA_2_MD1_MIPI6_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_WDATA_2_MD1_MIPI6_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_WDATA_2_MD1_MIPI6_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_2_MD1_MIPI6_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_2_MD1_MIPI6_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_2_MD1_MIPI6_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_2_MD1_MIPI6_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_2_MD1_MIPI6_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RW_LEN_2_MD1_MIPI6_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_STATUS_MD1_MIPI6_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_STATUS_MD1_MIPI6_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_STATUS_MD1_MIPI6_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_STATUS_MD1_MIPI6_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_RDAT_L_MD1_MIPI6_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RDAT_L_MD1_MIPI6_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RDAT_L_MD1_MIPI6_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI6_RDAT_H_MD1_MIPI6_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RDAT_H_MD1_MIPI6_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_MIPI6_RDAT_H_MD1_MIPI6_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_CONF_MD1_MIPI7_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_WDATA_1_MD1_MIPI7_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_WDATA_1_MD1_MIPI7_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_WDATA_1_MD1_MIPI7_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_1_MD1_MIPI7_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_WDATA_2_MD1_MIPI7_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_WDATA_2_MD1_MIPI7_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_WDATA_2_MD1_MIPI7_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_2_MD1_MIPI7_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_2_MD1_MIPI7_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_2_MD1_MIPI7_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_2_MD1_MIPI7_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_2_MD1_MIPI7_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RW_LEN_2_MD1_MIPI7_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_STATUS_MD1_MIPI7_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_STATUS_MD1_MIPI7_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_STATUS_MD1_MIPI7_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_STATUS_MD1_MIPI7_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_RDAT_L_MD1_MIPI7_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RDAT_L_MD1_MIPI7_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RDAT_L_MD1_MIPI7_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD1_MIPI7_RDAT_H_MD1_MIPI7_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RDAT_H_MD1_MIPI7_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD1_MIPI7_RDAT_H_MD1_MIPI7_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_CS_LSB                         (3)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_CS_WIDTH                       (1)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_CS_MASK                        (0x00000008)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_CS_BIT                         (0x00000008)

#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_MIPI_EXTEND_LSB                (2)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_MIPI_EXTEND_WIDTH              (1)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_MIPI_EXTEND_MASK               (0x00000004)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_MIPI_EXTEND_BIT                (0x00000004)

#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_READ_STATE_LSB                 (1)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_READ_STATE_WIDTH               (1)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_READ_STATE_MASK                (0x00000002)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_READ_STATE_BIT                 (0x00000002)

#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_TRIG_LSB                       (0)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_TRIG_WIDTH                     (1)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_TRIG_MASK                      (0x00000001)
#define MMRF_BSI_MM_L1CORE_PMIC_CONF_PMIC_L1CORE_TRIG_BIT                       (0x00000001)

#define MMRF_BSI_MM_L1CORE_PMIC_WDATA_1_PMIC_L1CORE_WDATA_1_LSB                 (0)
#define MMRF_BSI_MM_L1CORE_PMIC_WDATA_1_PMIC_L1CORE_WDATA_1_WIDTH               (32)
#define MMRF_BSI_MM_L1CORE_PMIC_WDATA_1_PMIC_L1CORE_WDATA_1_MASK                (0xFFFFFFFF)

#define MMRF_BSI_MM_L1CORE_PMIC_STATUS_PMIC_L1CORE_RDY_LSB                      (0)
#define MMRF_BSI_MM_L1CORE_PMIC_STATUS_PMIC_L1CORE_RDY_WIDTH                    (1)
#define MMRF_BSI_MM_L1CORE_PMIC_STATUS_PMIC_L1CORE_RDY_MASK                     (0x00000001)
#define MMRF_BSI_MM_L1CORE_PMIC_STATUS_PMIC_L1CORE_RDY_BIT                      (0x00000001)

#define MMRF_BSI_MM_L1CORE_PMIC_RDAT_L_PMIC_L1CORE_RDAT_L_LSB                   (0)
#define MMRF_BSI_MM_L1CORE_PMIC_RDAT_L_PMIC_L1CORE_RDAT_L_WIDTH                 (32)
#define MMRF_BSI_MM_L1CORE_PMIC_RDAT_L_PMIC_L1CORE_RDAT_L_MASK                  (0xFFFFFFFF)

#define MMRF_BSI_MM_L1CORE_PMIC_RDAT_H_PMIC_L1CORE_RDAT_H_LSB                   (0)
#define MMRF_BSI_MM_L1CORE_PMIC_RDAT_H_PMIC_L1CORE_RDAT_H_WIDTH                 (4)
#define MMRF_BSI_MM_L1CORE_PMIC_RDAT_H_PMIC_L1CORE_RDAT_H_MASK                  (0x0000000F)

#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_CS_LSB                           (3)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_CS_WIDTH                         (1)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_CS_MASK                          (0x00000008)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_CS_BIT                           (0x00000008)

#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_MIPI_EXTEND_LSB                  (2)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_MIPI_EXTEND_WIDTH                (1)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_MIPI_EXTEND_MASK                 (0x00000004)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_MIPI_EXTEND_BIT                  (0x00000004)

#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_READ_STATE_LSB                   (1)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_READ_STATE_WIDTH                 (1)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_READ_STATE_MASK                  (0x00000002)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_READ_STATE_BIT                   (0x00000002)

#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_TRIG_LSB                         (0)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_TRIG_WIDTH                       (1)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_TRIG_MASK                        (0x00000001)
#define MMRF_BSI_MM_PCORE_PMIC_CONF_PMIC_PCORE_TRIG_BIT                         (0x00000001)

#define MMRF_BSI_MM_PCORE_PMIC_WDATA_1_PMIC_PCORE_WDATA_1_LSB                   (0)
#define MMRF_BSI_MM_PCORE_PMIC_WDATA_1_PMIC_PCORE_WDATA_1_WIDTH                 (32)
#define MMRF_BSI_MM_PCORE_PMIC_WDATA_1_PMIC_PCORE_WDATA_1_MASK                  (0xFFFFFFFF)

#define MMRF_BSI_MM_PCORE_PMIC_STATUS_PMIC_PCORE_RDY_LSB                        (0)
#define MMRF_BSI_MM_PCORE_PMIC_STATUS_PMIC_PCORE_RDY_WIDTH                      (1)
#define MMRF_BSI_MM_PCORE_PMIC_STATUS_PMIC_PCORE_RDY_MASK                       (0x00000001)
#define MMRF_BSI_MM_PCORE_PMIC_STATUS_PMIC_PCORE_RDY_BIT                        (0x00000001)

#define MMRF_BSI_MM_PCORE_PMIC_RDAT_L_PMIC_PCORE_RDAT_L_LSB                     (0)
#define MMRF_BSI_MM_PCORE_PMIC_RDAT_L_PMIC_PCORE_RDAT_L_WIDTH                   (32)
#define MMRF_BSI_MM_PCORE_PMIC_RDAT_L_PMIC_PCORE_RDAT_L_MASK                    (0xFFFFFFFF)

#define MMRF_BSI_MM_PCORE_PMIC_RDAT_H_PMIC_PCORE_RDAT_H_LSB                     (0)
#define MMRF_BSI_MM_PCORE_PMIC_RDAT_H_PMIC_PCORE_RDAT_H_WIDTH                   (4)
#define MMRF_BSI_MM_PCORE_PMIC_RDAT_H_PMIC_PCORE_RDAT_H_MASK                    (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_CONF_MD2_RFIC1_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_RFIC1_WDATA_1_MD2_RFIC1_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_WDATA_1_MD2_RFIC1_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_WDATA_1_MD2_RFIC1_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_RFIC1_STATUS_MD2_RFIC1_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_STATUS_MD2_RFIC1_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_STATUS_MD2_RFIC1_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_STATUS_MD2_RFIC1_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_RFIC1_RDAT_L_MD2_RFIC1_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_RDAT_L_MD2_RFIC1_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_RDAT_L_MD2_RFIC1_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_RFIC1_RDAT_H_MD2_RFIC1_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_RDAT_H_MD2_RFIC1_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_RFIC1_RDAT_H_MD2_RFIC1_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_CONF_MD2_RFIC2_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_RFIC2_WDATA_1_MD2_RFIC2_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_WDATA_1_MD2_RFIC2_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_WDATA_1_MD2_RFIC2_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_RFIC2_STATUS_MD2_RFIC2_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_STATUS_MD2_RFIC2_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_STATUS_MD2_RFIC2_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_STATUS_MD2_RFIC2_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_RFIC2_RDAT_L_MD2_RFIC2_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_RDAT_L_MD2_RFIC2_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_RDAT_L_MD2_RFIC2_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_RFIC2_RDAT_H_MD2_RFIC2_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_RDAT_H_MD2_RFIC2_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_RFIC2_RDAT_H_MD2_RFIC2_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_CONF_MD2_MIPI0_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_WDATA_1_MD2_MIPI0_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_WDATA_1_MD2_MIPI0_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_WDATA_1_MD2_MIPI0_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_1_MD2_MIPI0_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_WDATA_2_MD2_MIPI0_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_WDATA_2_MD2_MIPI0_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_WDATA_2_MD2_MIPI0_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_2_MD2_MIPI0_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_2_MD2_MIPI0_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_2_MD2_MIPI0_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_2_MD2_MIPI0_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_2_MD2_MIPI0_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RW_LEN_2_MD2_MIPI0_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_STATUS_MD2_MIPI0_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_STATUS_MD2_MIPI0_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_STATUS_MD2_MIPI0_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_STATUS_MD2_MIPI0_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_RDAT_L_MD2_MIPI0_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RDAT_L_MD2_MIPI0_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RDAT_L_MD2_MIPI0_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI0_RDAT_H_MD2_MIPI0_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RDAT_H_MD2_MIPI0_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_MIPI0_RDAT_H_MD2_MIPI0_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_CONF_MD2_MIPI1_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_WDATA_1_MD2_MIPI1_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_WDATA_1_MD2_MIPI1_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_WDATA_1_MD2_MIPI1_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_1_MD2_MIPI1_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_WDATA_2_MD2_MIPI1_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_WDATA_2_MD2_MIPI1_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_WDATA_2_MD2_MIPI1_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_2_MD2_MIPI1_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_2_MD2_MIPI1_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_2_MD2_MIPI1_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_2_MD2_MIPI1_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_2_MD2_MIPI1_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RW_LEN_2_MD2_MIPI1_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_STATUS_MD2_MIPI1_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_STATUS_MD2_MIPI1_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_STATUS_MD2_MIPI1_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_STATUS_MD2_MIPI1_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_RDAT_L_MD2_MIPI1_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RDAT_L_MD2_MIPI1_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RDAT_L_MD2_MIPI1_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI1_RDAT_H_MD2_MIPI1_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RDAT_H_MD2_MIPI1_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_MIPI1_RDAT_H_MD2_MIPI1_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_CONF_MD2_MIPI2_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_WDATA_1_MD2_MIPI2_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_WDATA_1_MD2_MIPI2_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_WDATA_1_MD2_MIPI2_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_1_MD2_MIPI2_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_WDATA_2_MD2_MIPI2_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_WDATA_2_MD2_MIPI2_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_WDATA_2_MD2_MIPI2_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_2_MD2_MIPI2_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_2_MD2_MIPI2_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_2_MD2_MIPI2_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_2_MD2_MIPI2_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_2_MD2_MIPI2_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RW_LEN_2_MD2_MIPI2_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_STATUS_MD2_MIPI2_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_STATUS_MD2_MIPI2_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_STATUS_MD2_MIPI2_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_STATUS_MD2_MIPI2_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_RDAT_L_MD2_MIPI2_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RDAT_L_MD2_MIPI2_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RDAT_L_MD2_MIPI2_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI2_RDAT_H_MD2_MIPI2_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RDAT_H_MD2_MIPI2_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_MIPI2_RDAT_H_MD2_MIPI2_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_CONF_MD2_MIPI3_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_WDATA_1_MD2_MIPI3_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_WDATA_1_MD2_MIPI3_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_WDATA_1_MD2_MIPI3_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_1_MD2_MIPI3_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_WDATA_2_MD2_MIPI3_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_WDATA_2_MD2_MIPI3_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_WDATA_2_MD2_MIPI3_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_2_MD2_MIPI3_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_2_MD2_MIPI3_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_2_MD2_MIPI3_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_2_MD2_MIPI3_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_2_MD2_MIPI3_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RW_LEN_2_MD2_MIPI3_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_STATUS_MD2_MIPI3_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_STATUS_MD2_MIPI3_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_STATUS_MD2_MIPI3_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_STATUS_MD2_MIPI3_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_RDAT_L_MD2_MIPI3_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RDAT_L_MD2_MIPI3_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RDAT_L_MD2_MIPI3_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI3_RDAT_H_MD2_MIPI3_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RDAT_H_MD2_MIPI3_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_MIPI3_RDAT_H_MD2_MIPI3_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_CONF_MD2_MIPI4_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_WDATA_1_MD2_MIPI4_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_WDATA_1_MD2_MIPI4_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_WDATA_1_MD2_MIPI4_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_1_MD2_MIPI4_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_WDATA_2_MD2_MIPI4_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_WDATA_2_MD2_MIPI4_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_WDATA_2_MD2_MIPI4_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_2_MD2_MIPI4_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_2_MD2_MIPI4_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_2_MD2_MIPI4_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_2_MD2_MIPI4_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_2_MD2_MIPI4_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RW_LEN_2_MD2_MIPI4_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_STATUS_MD2_MIPI4_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_STATUS_MD2_MIPI4_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_STATUS_MD2_MIPI4_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_STATUS_MD2_MIPI4_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_RDAT_L_MD2_MIPI4_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RDAT_L_MD2_MIPI4_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RDAT_L_MD2_MIPI4_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI4_RDAT_H_MD2_MIPI4_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RDAT_H_MD2_MIPI4_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_MIPI4_RDAT_H_MD2_MIPI4_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_CONF_MD2_MIPI5_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_WDATA_1_MD2_MIPI5_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_WDATA_1_MD2_MIPI5_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_WDATA_1_MD2_MIPI5_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_1_MD2_MIPI5_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_WDATA_2_MD2_MIPI5_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_WDATA_2_MD2_MIPI5_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_WDATA_2_MD2_MIPI5_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_2_MD2_MIPI5_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_2_MD2_MIPI5_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_2_MD2_MIPI5_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_2_MD2_MIPI5_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_2_MD2_MIPI5_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RW_LEN_2_MD2_MIPI5_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_STATUS_MD2_MIPI5_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_STATUS_MD2_MIPI5_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_STATUS_MD2_MIPI5_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_STATUS_MD2_MIPI5_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_RDAT_L_MD2_MIPI5_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RDAT_L_MD2_MIPI5_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RDAT_L_MD2_MIPI5_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI5_RDAT_H_MD2_MIPI5_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RDAT_H_MD2_MIPI5_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_MIPI5_RDAT_H_MD2_MIPI5_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_CONF_MD2_MIPI6_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_WDATA_1_MD2_MIPI6_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_WDATA_1_MD2_MIPI6_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_WDATA_1_MD2_MIPI6_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_1_MD2_MIPI6_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_WDATA_2_MD2_MIPI6_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_WDATA_2_MD2_MIPI6_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_WDATA_2_MD2_MIPI6_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_2_MD2_MIPI6_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_2_MD2_MIPI6_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_2_MD2_MIPI6_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_2_MD2_MIPI6_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_2_MD2_MIPI6_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RW_LEN_2_MD2_MIPI6_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_STATUS_MD2_MIPI6_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_STATUS_MD2_MIPI6_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_STATUS_MD2_MIPI6_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_STATUS_MD2_MIPI6_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_RDAT_L_MD2_MIPI6_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RDAT_L_MD2_MIPI6_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RDAT_L_MD2_MIPI6_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI6_RDAT_H_MD2_MIPI6_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RDAT_H_MD2_MIPI6_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_MIPI6_RDAT_H_MD2_MIPI6_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_CONF_MD2_MIPI7_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_WDATA_1_MD2_MIPI7_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_WDATA_1_MD2_MIPI7_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_WDATA_1_MD2_MIPI7_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_1_MD2_MIPI7_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_WDATA_2_MD2_MIPI7_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_WDATA_2_MD2_MIPI7_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_WDATA_2_MD2_MIPI7_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_2_MD2_MIPI7_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_2_MD2_MIPI7_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_2_MD2_MIPI7_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_2_MD2_MIPI7_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_2_MD2_MIPI7_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RW_LEN_2_MD2_MIPI7_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_STATUS_MD2_MIPI7_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_STATUS_MD2_MIPI7_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_STATUS_MD2_MIPI7_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_STATUS_MD2_MIPI7_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_RDAT_L_MD2_MIPI7_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RDAT_L_MD2_MIPI7_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RDAT_L_MD2_MIPI7_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_MIPI7_RDAT_H_MD2_MIPI7_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RDAT_H_MD2_MIPI7_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD2_MIPI7_RDAT_H_MD2_MIPI7_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_CS_LSB                       (3)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_CS_WIDTH                     (1)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_CS_MASK                      (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_CS_BIT                       (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_MIPI_EXTEND_LSB              (2)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_MIPI_EXTEND_WIDTH            (1)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_MIPI_EXTEND_MASK             (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_MIPI_EXTEND_BIT              (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_READ_STATE_LSB               (1)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_READ_STATE_WIDTH             (1)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_READ_STATE_MASK              (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_READ_STATE_BIT               (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_TRIG_LSB                     (0)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_TRIG_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_TRIG_MASK                    (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_PMIC_CONF_MD2_PMIC_IMM_TRIG_BIT                     (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_PMIC_WDATA_1_MD2_PMIC_IMM_WDATA_1_LSB               (0)
#define MMRF_BSI_MM_IMM_MD2_PMIC_WDATA_1_MD2_PMIC_IMM_WDATA_1_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD2_PMIC_WDATA_1_MD2_PMIC_IMM_WDATA_1_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_PMIC_STATUS_MD2_PMIC_IMM_RDY_LSB                    (0)
#define MMRF_BSI_MM_IMM_MD2_PMIC_STATUS_MD2_PMIC_IMM_RDY_WIDTH                  (1)
#define MMRF_BSI_MM_IMM_MD2_PMIC_STATUS_MD2_PMIC_IMM_RDY_MASK                   (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_PMIC_STATUS_MD2_PMIC_IMM_RDY_BIT                    (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_PMIC_RDAT_L_MD2_PMIC_IMM_RDAT_L_LSB                 (0)
#define MMRF_BSI_MM_IMM_MD2_PMIC_RDAT_L_MD2_PMIC_IMM_RDAT_L_WIDTH               (32)
#define MMRF_BSI_MM_IMM_MD2_PMIC_RDAT_L_MD2_PMIC_IMM_RDAT_L_MASK                (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD2_PMIC_RDAT_H_MD2_PMIC_IMM_RDAT_H_LSB                 (0)
#define MMRF_BSI_MM_IMM_MD2_PMIC_RDAT_H_MD2_PMIC_IMM_RDAT_H_WIDTH               (4)
#define MMRF_BSI_MM_IMM_MD2_PMIC_RDAT_H_MD2_PMIC_IMM_RDAT_H_MASK                (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_CONF_MD3_RFIC1_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_RFIC1_WDATA_1_MD3_RFIC1_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_WDATA_1_MD3_RFIC1_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_WDATA_1_MD3_RFIC1_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_RFIC1_STATUS_MD3_RFIC1_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_STATUS_MD3_RFIC1_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_STATUS_MD3_RFIC1_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_STATUS_MD3_RFIC1_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_RFIC1_RDAT_L_MD3_RFIC1_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_RDAT_L_MD3_RFIC1_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_RDAT_L_MD3_RFIC1_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_RFIC1_RDAT_H_MD3_RFIC1_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_RDAT_H_MD3_RFIC1_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_RFIC1_RDAT_H_MD3_RFIC1_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_CONF_MD3_RFIC2_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_RFIC2_WDATA_1_MD3_RFIC2_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_WDATA_1_MD3_RFIC2_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_WDATA_1_MD3_RFIC2_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_RFIC2_STATUS_MD3_RFIC2_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_STATUS_MD3_RFIC2_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_STATUS_MD3_RFIC2_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_STATUS_MD3_RFIC2_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_RFIC2_RDAT_L_MD3_RFIC2_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_RDAT_L_MD3_RFIC2_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_RDAT_L_MD3_RFIC2_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_RFIC2_RDAT_H_MD3_RFIC2_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_RDAT_H_MD3_RFIC2_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_RFIC2_RDAT_H_MD3_RFIC2_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_CONF_MD3_MIPI0_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_WDATA_1_MD3_MIPI0_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_WDATA_1_MD3_MIPI0_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_WDATA_1_MD3_MIPI0_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_1_MD3_MIPI0_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_WDATA_2_MD3_MIPI0_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_WDATA_2_MD3_MIPI0_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_WDATA_2_MD3_MIPI0_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_2_MD3_MIPI0_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_2_MD3_MIPI0_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_2_MD3_MIPI0_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_2_MD3_MIPI0_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_2_MD3_MIPI0_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RW_LEN_2_MD3_MIPI0_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_STATUS_MD3_MIPI0_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_STATUS_MD3_MIPI0_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_STATUS_MD3_MIPI0_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_STATUS_MD3_MIPI0_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_RDAT_L_MD3_MIPI0_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RDAT_L_MD3_MIPI0_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RDAT_L_MD3_MIPI0_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI0_RDAT_H_MD3_MIPI0_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RDAT_H_MD3_MIPI0_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_MIPI0_RDAT_H_MD3_MIPI0_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_CONF_MD3_MIPI1_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_WDATA_1_MD3_MIPI1_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_WDATA_1_MD3_MIPI1_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_WDATA_1_MD3_MIPI1_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_1_MD3_MIPI1_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_WDATA_2_MD3_MIPI1_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_WDATA_2_MD3_MIPI1_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_WDATA_2_MD3_MIPI1_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_2_MD3_MIPI1_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_2_MD3_MIPI1_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_2_MD3_MIPI1_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_2_MD3_MIPI1_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_2_MD3_MIPI1_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RW_LEN_2_MD3_MIPI1_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_STATUS_MD3_MIPI1_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_STATUS_MD3_MIPI1_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_STATUS_MD3_MIPI1_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_STATUS_MD3_MIPI1_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_RDAT_L_MD3_MIPI1_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RDAT_L_MD3_MIPI1_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RDAT_L_MD3_MIPI1_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI1_RDAT_H_MD3_MIPI1_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RDAT_H_MD3_MIPI1_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_MIPI1_RDAT_H_MD3_MIPI1_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_CONF_MD3_MIPI2_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_WDATA_1_MD3_MIPI2_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_WDATA_1_MD3_MIPI2_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_WDATA_1_MD3_MIPI2_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_1_MD3_MIPI2_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_WDATA_2_MD3_MIPI2_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_WDATA_2_MD3_MIPI2_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_WDATA_2_MD3_MIPI2_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_2_MD3_MIPI2_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_2_MD3_MIPI2_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_2_MD3_MIPI2_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_2_MD3_MIPI2_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_2_MD3_MIPI2_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RW_LEN_2_MD3_MIPI2_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_STATUS_MD3_MIPI2_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_STATUS_MD3_MIPI2_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_STATUS_MD3_MIPI2_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_STATUS_MD3_MIPI2_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_RDAT_L_MD3_MIPI2_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RDAT_L_MD3_MIPI2_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RDAT_L_MD3_MIPI2_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI2_RDAT_H_MD3_MIPI2_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RDAT_H_MD3_MIPI2_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_MIPI2_RDAT_H_MD3_MIPI2_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_CONF_MD3_MIPI3_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_WDATA_1_MD3_MIPI3_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_WDATA_1_MD3_MIPI3_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_WDATA_1_MD3_MIPI3_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_1_MD3_MIPI3_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_WDATA_2_MD3_MIPI3_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_WDATA_2_MD3_MIPI3_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_WDATA_2_MD3_MIPI3_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_2_MD3_MIPI3_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_2_MD3_MIPI3_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_2_MD3_MIPI3_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_2_MD3_MIPI3_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_2_MD3_MIPI3_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RW_LEN_2_MD3_MIPI3_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_STATUS_MD3_MIPI3_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_STATUS_MD3_MIPI3_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_STATUS_MD3_MIPI3_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_STATUS_MD3_MIPI3_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_RDAT_L_MD3_MIPI3_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RDAT_L_MD3_MIPI3_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RDAT_L_MD3_MIPI3_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI3_RDAT_H_MD3_MIPI3_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RDAT_H_MD3_MIPI3_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_MIPI3_RDAT_H_MD3_MIPI3_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_CONF_MD3_MIPI4_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_WDATA_1_MD3_MIPI4_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_WDATA_1_MD3_MIPI4_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_WDATA_1_MD3_MIPI4_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_1_MD3_MIPI4_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_WDATA_2_MD3_MIPI4_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_WDATA_2_MD3_MIPI4_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_WDATA_2_MD3_MIPI4_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_2_MD3_MIPI4_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_2_MD3_MIPI4_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_2_MD3_MIPI4_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_2_MD3_MIPI4_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_2_MD3_MIPI4_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RW_LEN_2_MD3_MIPI4_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_STATUS_MD3_MIPI4_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_STATUS_MD3_MIPI4_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_STATUS_MD3_MIPI4_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_STATUS_MD3_MIPI4_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_RDAT_L_MD3_MIPI4_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RDAT_L_MD3_MIPI4_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RDAT_L_MD3_MIPI4_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI4_RDAT_H_MD3_MIPI4_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RDAT_H_MD3_MIPI4_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_MIPI4_RDAT_H_MD3_MIPI4_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_CONF_MD3_MIPI5_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_WDATA_1_MD3_MIPI5_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_WDATA_1_MD3_MIPI5_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_WDATA_1_MD3_MIPI5_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_1_MD3_MIPI5_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_WDATA_2_MD3_MIPI5_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_WDATA_2_MD3_MIPI5_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_WDATA_2_MD3_MIPI5_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_2_MD3_MIPI5_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_2_MD3_MIPI5_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_2_MD3_MIPI5_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_2_MD3_MIPI5_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_2_MD3_MIPI5_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RW_LEN_2_MD3_MIPI5_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_STATUS_MD3_MIPI5_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_STATUS_MD3_MIPI5_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_STATUS_MD3_MIPI5_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_STATUS_MD3_MIPI5_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_RDAT_L_MD3_MIPI5_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RDAT_L_MD3_MIPI5_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RDAT_L_MD3_MIPI5_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI5_RDAT_H_MD3_MIPI5_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RDAT_H_MD3_MIPI5_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_MIPI5_RDAT_H_MD3_MIPI5_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_CONF_MD3_MIPI6_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_WDATA_1_MD3_MIPI6_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_WDATA_1_MD3_MIPI6_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_WDATA_1_MD3_MIPI6_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_1_MD3_MIPI6_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_WDATA_2_MD3_MIPI6_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_WDATA_2_MD3_MIPI6_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_WDATA_2_MD3_MIPI6_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_2_MD3_MIPI6_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_2_MD3_MIPI6_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_2_MD3_MIPI6_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_2_MD3_MIPI6_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_2_MD3_MIPI6_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RW_LEN_2_MD3_MIPI6_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_STATUS_MD3_MIPI6_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_STATUS_MD3_MIPI6_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_STATUS_MD3_MIPI6_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_STATUS_MD3_MIPI6_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_RDAT_L_MD3_MIPI6_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RDAT_L_MD3_MIPI6_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RDAT_L_MD3_MIPI6_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI6_RDAT_H_MD3_MIPI6_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RDAT_H_MD3_MIPI6_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_MIPI6_RDAT_H_MD3_MIPI6_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_CS_LSB                     (3)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_CS_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_CS_MASK                    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_CS_BIT                     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_MIPI_EXTEND_LSB            (2)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_MIPI_EXTEND_WIDTH          (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_MIPI_EXTEND_MASK           (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_MIPI_EXTEND_BIT            (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_READ_STATE_LSB             (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_READ_STATE_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_READ_STATE_MASK            (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_READ_STATE_BIT             (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_TRIG_LSB                   (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_TRIG_WIDTH                 (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_TRIG_MASK                  (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_CONF_MD3_MIPI7_IMM_TRIG_BIT                   (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_WDATA_1_MD3_MIPI7_IMM_WDATA_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_WDATA_1_MD3_MIPI7_IMM_WDATA_1_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_WDATA_1_MD3_MIPI7_IMM_WDATA_1_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_LOCK_1_LSB             (31)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_LOCK_1_WIDTH           (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_LOCK_1_MASK            (0x80000000)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_LOCK_1_BIT             (0x80000000)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_RLEN_1_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_RLEN_1_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_RLEN_1_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_WLEN_1_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_WLEN_1_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_1_MD3_MIPI7_IMM_WLEN_1_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_WDATA_2_MD3_MIPI7_IMM_WDATA_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_WDATA_2_MD3_MIPI7_IMM_WDATA_2_WIDTH           (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_WDATA_2_MD3_MIPI7_IMM_WDATA_2_MASK            (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_2_MD3_MIPI7_IMM_RLEN_2_LSB             (16)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_2_MD3_MIPI7_IMM_RLEN_2_WIDTH           (6)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_2_MD3_MIPI7_IMM_RLEN_2_MASK            (0x003F0000)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_2_MD3_MIPI7_IMM_WLEN_2_LSB             (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_2_MD3_MIPI7_IMM_WLEN_2_WIDTH           (5)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RW_LEN_2_MD3_MIPI7_IMM_WLEN_2_MASK            (0x0000001F)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_STATUS_MD3_MIPI7_IMM_RDY_LSB                  (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_STATUS_MD3_MIPI7_IMM_RDY_WIDTH                (1)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_STATUS_MD3_MIPI7_IMM_RDY_MASK                 (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_STATUS_MD3_MIPI7_IMM_RDY_BIT                  (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_RDAT_L_MD3_MIPI7_IMM_RDAT_L_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RDAT_L_MD3_MIPI7_IMM_RDAT_L_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RDAT_L_MD3_MIPI7_IMM_RDAT_L_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_MIPI7_RDAT_H_MD3_MIPI7_IMM_RDAT_H_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RDAT_H_MD3_MIPI7_IMM_RDAT_H_WIDTH             (4)
#define MMRF_BSI_MM_IMM_MD3_MIPI7_RDAT_H_MD3_MIPI7_IMM_RDAT_H_MASK              (0x0000000F)

#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_CS_LSB                       (3)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_CS_WIDTH                     (1)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_CS_MASK                      (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_CS_BIT                       (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_MIPI_EXTEND_LSB              (2)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_MIPI_EXTEND_WIDTH            (1)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_MIPI_EXTEND_MASK             (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_MIPI_EXTEND_BIT              (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_READ_STATE_LSB               (1)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_READ_STATE_WIDTH             (1)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_READ_STATE_MASK              (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_READ_STATE_BIT               (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_TRIG_LSB                     (0)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_TRIG_WIDTH                   (1)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_TRIG_MASK                    (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_PMIC_CONF_MD3_PMIC_IMM_TRIG_BIT                     (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_PMIC_WDATA_1_MD3_PMIC_IMM_WDATA_1_LSB               (0)
#define MMRF_BSI_MM_IMM_MD3_PMIC_WDATA_1_MD3_PMIC_IMM_WDATA_1_WIDTH             (32)
#define MMRF_BSI_MM_IMM_MD3_PMIC_WDATA_1_MD3_PMIC_IMM_WDATA_1_MASK              (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_PMIC_STATUS_MD3_PMIC_IMM_RDY_LSB                    (0)
#define MMRF_BSI_MM_IMM_MD3_PMIC_STATUS_MD3_PMIC_IMM_RDY_WIDTH                  (1)
#define MMRF_BSI_MM_IMM_MD3_PMIC_STATUS_MD3_PMIC_IMM_RDY_MASK                   (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_PMIC_STATUS_MD3_PMIC_IMM_RDY_BIT                    (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_PMIC_RDAT_L_MD3_PMIC_IMM_RDAT_L_LSB                 (0)
#define MMRF_BSI_MM_IMM_MD3_PMIC_RDAT_L_MD3_PMIC_IMM_RDAT_L_WIDTH               (32)
#define MMRF_BSI_MM_IMM_MD3_PMIC_RDAT_L_MD3_PMIC_IMM_RDAT_L_MASK                (0xFFFFFFFF)

#define MMRF_BSI_MM_IMM_MD3_PMIC_RDAT_H_MD3_PMIC_IMM_RDAT_H_LSB                 (0)
#define MMRF_BSI_MM_IMM_MD3_PMIC_RDAT_H_MD3_PMIC_IMM_RDAT_H_WIDTH               (4)
#define MMRF_BSI_MM_IMM_MD3_PMIC_RDAT_H_MD3_PMIC_IMM_RDAT_H_MASK                (0x0000000F)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI7_IMM_RD_STATUS_CLR_LSB     (11)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI7_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI7_IMM_RD_STATUS_CLR_MASK    (0x00000800)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI7_IMM_RD_STATUS_CLR_BIT     (0x00000800)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI6_IMM_RD_STATUS_CLR_LSB     (10)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI6_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI6_IMM_RD_STATUS_CLR_MASK    (0x00000400)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI6_IMM_RD_STATUS_CLR_BIT     (0x00000400)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI5_IMM_RD_STATUS_CLR_LSB     (9)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI5_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI5_IMM_RD_STATUS_CLR_MASK    (0x00000200)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI5_IMM_RD_STATUS_CLR_BIT     (0x00000200)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI4_IMM_RD_STATUS_CLR_LSB     (8)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI4_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI4_IMM_RD_STATUS_CLR_MASK    (0x00000100)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI4_IMM_RD_STATUS_CLR_BIT     (0x00000100)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI3_IMM_RD_STATUS_CLR_LSB     (7)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI3_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI3_IMM_RD_STATUS_CLR_MASK    (0x00000080)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI3_IMM_RD_STATUS_CLR_BIT     (0x00000080)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI2_IMM_RD_STATUS_CLR_LSB     (6)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI2_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI2_IMM_RD_STATUS_CLR_MASK    (0x00000040)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI2_IMM_RD_STATUS_CLR_BIT     (0x00000040)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI1_IMM_RD_STATUS_CLR_LSB     (5)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI1_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI1_IMM_RD_STATUS_CLR_MASK    (0x00000020)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI1_IMM_RD_STATUS_CLR_BIT     (0x00000020)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI0_IMM_RD_STATUS_CLR_LSB     (4)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI0_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI0_IMM_RD_STATUS_CLR_MASK    (0x00000010)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_MIPI0_IMM_RD_STATUS_CLR_BIT     (0x00000010)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_L1CORE_PMIC_IMM_RD_STATUS_CLR_LSB (3)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_L1CORE_PMIC_IMM_RD_STATUS_CLR_WIDTH (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_L1CORE_PMIC_IMM_RD_STATUS_CLR_MASK (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_L1CORE_PMIC_IMM_RD_STATUS_CLR_BIT (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_PCORE_PMIC_IMM_RD_STATUS_CLR_LSB (2)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_PCORE_PMIC_IMM_RD_STATUS_CLR_WIDTH (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_PCORE_PMIC_IMM_RD_STATUS_CLR_MASK (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_PCORE_PMIC_IMM_RD_STATUS_CLR_BIT (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_RFIC2_IMM_RD_STATUS_CLR_LSB     (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_RFIC2_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_RFIC2_IMM_RD_STATUS_CLR_MASK    (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_RFIC2_IMM_RD_STATUS_CLR_BIT     (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_RFIC1_IMM_RD_STATUS_CLR_LSB     (0)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_RFIC1_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_RFIC1_IMM_RD_STATUS_CLR_MASK    (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_CLR_MD1_RFIC1_IMM_RD_STATUS_CLR_BIT     (0x00000001)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI7_IMM_RD_RDY_LSB                (11)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI7_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI7_IMM_RD_RDY_MASK               (0x00000800)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI7_IMM_RD_RDY_BIT                (0x00000800)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI6_IMM_RD_RDY_LSB                (10)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI6_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI6_IMM_RD_RDY_MASK               (0x00000400)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI6_IMM_RD_RDY_BIT                (0x00000400)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI5_IMM_RD_RDY_LSB                (9)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI5_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI5_IMM_RD_RDY_MASK               (0x00000200)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI5_IMM_RD_RDY_BIT                (0x00000200)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI4_IMM_RD_RDY_LSB                (8)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI4_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI4_IMM_RD_RDY_MASK               (0x00000100)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI4_IMM_RD_RDY_BIT                (0x00000100)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI3_IMM_RD_RDY_LSB                (7)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI3_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI3_IMM_RD_RDY_MASK               (0x00000080)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI3_IMM_RD_RDY_BIT                (0x00000080)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI2_IMM_RD_RDY_LSB                (6)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI2_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI2_IMM_RD_RDY_MASK               (0x00000040)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI2_IMM_RD_RDY_BIT                (0x00000040)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI1_IMM_RD_RDY_LSB                (5)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI1_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI1_IMM_RD_RDY_MASK               (0x00000020)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI1_IMM_RD_RDY_BIT                (0x00000020)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI0_IMM_RD_RDY_LSB                (4)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI0_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI0_IMM_RD_RDY_MASK               (0x00000010)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_MIPI0_IMM_RD_RDY_BIT                (0x00000010)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_L1CORE_PMIC_IMM_RD_RDY_LSB          (3)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_L1CORE_PMIC_IMM_RD_RDY_WIDTH        (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_L1CORE_PMIC_IMM_RD_RDY_MASK         (0x00000008)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_L1CORE_PMIC_IMM_RD_RDY_BIT          (0x00000008)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_PCORE_PMIC_IMM_RD_RDY_LSB           (2)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_PCORE_PMIC_IMM_RD_RDY_WIDTH         (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_PCORE_PMIC_IMM_RD_RDY_MASK          (0x00000004)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_PCORE_PMIC_IMM_RD_RDY_BIT           (0x00000004)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_RFIC2_IMM_RD_RDY_LSB                (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_RFIC2_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_RFIC2_IMM_RD_RDY_MASK               (0x00000002)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_RFIC2_IMM_RD_RDY_BIT                (0x00000002)

#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_RFIC1_IMM_RD_RDY_LSB                (0)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_RFIC1_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_RFIC1_IMM_RD_RDY_MASK               (0x00000001)
#define MMRF_BSI_MM_IMM_MD1_READ_STATUS_MD1_RFIC1_IMM_RD_RDY_BIT                (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI7_IMM_RD_STATUS_CLR_LSB     (10)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI7_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI7_IMM_RD_STATUS_CLR_MASK    (0x00000400)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI7_IMM_RD_STATUS_CLR_BIT     (0x00000400)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI6_IMM_RD_STATUS_CLR_LSB     (9)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI6_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI6_IMM_RD_STATUS_CLR_MASK    (0x00000200)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI6_IMM_RD_STATUS_CLR_BIT     (0x00000200)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI5_IMM_RD_STATUS_CLR_LSB     (8)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI5_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI5_IMM_RD_STATUS_CLR_MASK    (0x00000100)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI5_IMM_RD_STATUS_CLR_BIT     (0x00000100)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI4_IMM_RD_STATUS_CLR_LSB     (7)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI4_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI4_IMM_RD_STATUS_CLR_MASK    (0x00000080)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI4_IMM_RD_STATUS_CLR_BIT     (0x00000080)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI3_IMM_RD_STATUS_CLR_LSB     (6)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI3_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI3_IMM_RD_STATUS_CLR_MASK    (0x00000040)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI3_IMM_RD_STATUS_CLR_BIT     (0x00000040)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI2_IMM_RD_STATUS_CLR_LSB     (5)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI2_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI2_IMM_RD_STATUS_CLR_MASK    (0x00000020)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI2_IMM_RD_STATUS_CLR_BIT     (0x00000020)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI1_IMM_RD_STATUS_CLR_LSB     (4)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI1_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI1_IMM_RD_STATUS_CLR_MASK    (0x00000010)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI1_IMM_RD_STATUS_CLR_BIT     (0x00000010)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI0_IMM_RD_STATUS_CLR_LSB     (3)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI0_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI0_IMM_RD_STATUS_CLR_MASK    (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_MIPI0_IMM_RD_STATUS_CLR_BIT     (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_PMIC_IMM_RD_STATUS_CLR_LSB      (2)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_PMIC_IMM_RD_STATUS_CLR_WIDTH    (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_PMIC_IMM_RD_STATUS_CLR_MASK     (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_PMIC_IMM_RD_STATUS_CLR_BIT      (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_RFIC2_IMM_RD_STATUS_CLR_LSB     (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_RFIC2_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_RFIC2_IMM_RD_STATUS_CLR_MASK    (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_RFIC2_IMM_RD_STATUS_CLR_BIT     (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_RFIC1_IMM_RD_STATUS_CLR_LSB     (0)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_RFIC1_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_RFIC1_IMM_RD_STATUS_CLR_MASK    (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_CLR_MD2_RFIC1_IMM_RD_STATUS_CLR_BIT     (0x00000001)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI7_IMM_RD_RDY_LSB                (10)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI7_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI7_IMM_RD_RDY_MASK               (0x00000400)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI7_IMM_RD_RDY_BIT                (0x00000400)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI6_IMM_RD_RDY_LSB                (9)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI6_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI6_IMM_RD_RDY_MASK               (0x00000200)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI6_IMM_RD_RDY_BIT                (0x00000200)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI5_IMM_RD_RDY_LSB                (8)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI5_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI5_IMM_RD_RDY_MASK               (0x00000100)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI5_IMM_RD_RDY_BIT                (0x00000100)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI4_IMM_RD_RDY_LSB                (7)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI4_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI4_IMM_RD_RDY_MASK               (0x00000080)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI4_IMM_RD_RDY_BIT                (0x00000080)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI3_IMM_RD_RDY_LSB                (6)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI3_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI3_IMM_RD_RDY_MASK               (0x00000040)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI3_IMM_RD_RDY_BIT                (0x00000040)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI2_IMM_RD_RDY_LSB                (5)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI2_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI2_IMM_RD_RDY_MASK               (0x00000020)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI2_IMM_RD_RDY_BIT                (0x00000020)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI1_IMM_RD_RDY_LSB                (4)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI1_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI1_IMM_RD_RDY_MASK               (0x00000010)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI1_IMM_RD_RDY_BIT                (0x00000010)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI0_IMM_RD_RDY_LSB                (3)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI0_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI0_IMM_RD_RDY_MASK               (0x00000008)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_MIPI0_IMM_RD_RDY_BIT                (0x00000008)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_PMIC_IMM_RD_RDY_LSB                 (2)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_PMIC_IMM_RD_RDY_WIDTH               (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_PMIC_IMM_RD_RDY_MASK                (0x00000004)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_PMIC_IMM_RD_RDY_BIT                 (0x00000004)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_RFIC2_IMM_RD_RDY_LSB                (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_RFIC2_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_RFIC2_IMM_RD_RDY_MASK               (0x00000002)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_RFIC2_IMM_RD_RDY_BIT                (0x00000002)

#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_RFIC1_IMM_RD_RDY_LSB                (0)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_RFIC1_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_RFIC1_IMM_RD_RDY_MASK               (0x00000001)
#define MMRF_BSI_MM_IMM_MD2_READ_STATUS_MD2_RFIC1_IMM_RD_RDY_BIT                (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI7_IMM_RD_STATUS_CLR_LSB     (10)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI7_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI7_IMM_RD_STATUS_CLR_MASK    (0x00000400)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI7_IMM_RD_STATUS_CLR_BIT     (0x00000400)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI6_IMM_RD_STATUS_CLR_LSB     (9)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI6_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI6_IMM_RD_STATUS_CLR_MASK    (0x00000200)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI6_IMM_RD_STATUS_CLR_BIT     (0x00000200)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI5_IMM_RD_STATUS_CLR_LSB     (8)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI5_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI5_IMM_RD_STATUS_CLR_MASK    (0x00000100)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI5_IMM_RD_STATUS_CLR_BIT     (0x00000100)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI4_IMM_RD_STATUS_CLR_LSB     (7)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI4_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI4_IMM_RD_STATUS_CLR_MASK    (0x00000080)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI4_IMM_RD_STATUS_CLR_BIT     (0x00000080)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI3_IMM_RD_STATUS_CLR_LSB     (6)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI3_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI3_IMM_RD_STATUS_CLR_MASK    (0x00000040)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI3_IMM_RD_STATUS_CLR_BIT     (0x00000040)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI2_IMM_RD_STATUS_CLR_LSB     (5)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI2_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI2_IMM_RD_STATUS_CLR_MASK    (0x00000020)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI2_IMM_RD_STATUS_CLR_BIT     (0x00000020)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI1_IMM_RD_STATUS_CLR_LSB     (4)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI1_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI1_IMM_RD_STATUS_CLR_MASK    (0x00000010)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI1_IMM_RD_STATUS_CLR_BIT     (0x00000010)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI0_IMM_RD_STATUS_CLR_LSB     (3)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI0_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI0_IMM_RD_STATUS_CLR_MASK    (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_MIPI0_IMM_RD_STATUS_CLR_BIT     (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_PMIC_IMM_RD_STATUS_CLR_LSB      (2)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_PMIC_IMM_RD_STATUS_CLR_WIDTH    (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_PMIC_IMM_RD_STATUS_CLR_MASK     (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_PMIC_IMM_RD_STATUS_CLR_BIT      (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_RFIC2_IMM_RD_STATUS_CLR_LSB     (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_RFIC2_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_RFIC2_IMM_RD_STATUS_CLR_MASK    (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_RFIC2_IMM_RD_STATUS_CLR_BIT     (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_RFIC1_IMM_RD_STATUS_CLR_LSB     (0)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_RFIC1_IMM_RD_STATUS_CLR_WIDTH   (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_RFIC1_IMM_RD_STATUS_CLR_MASK    (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_CLR_MD3_RFIC1_IMM_RD_STATUS_CLR_BIT     (0x00000001)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI7_IMM_RD_RDY_LSB                (10)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI7_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI7_IMM_RD_RDY_MASK               (0x00000400)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI7_IMM_RD_RDY_BIT                (0x00000400)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI6_IMM_RD_RDY_LSB                (9)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI6_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI6_IMM_RD_RDY_MASK               (0x00000200)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI6_IMM_RD_RDY_BIT                (0x00000200)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI5_IMM_RD_RDY_LSB                (8)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI5_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI5_IMM_RD_RDY_MASK               (0x00000100)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI5_IMM_RD_RDY_BIT                (0x00000100)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI4_IMM_RD_RDY_LSB                (7)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI4_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI4_IMM_RD_RDY_MASK               (0x00000080)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI4_IMM_RD_RDY_BIT                (0x00000080)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI3_IMM_RD_RDY_LSB                (6)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI3_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI3_IMM_RD_RDY_MASK               (0x00000040)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI3_IMM_RD_RDY_BIT                (0x00000040)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI2_IMM_RD_RDY_LSB                (5)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI2_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI2_IMM_RD_RDY_MASK               (0x00000020)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI2_IMM_RD_RDY_BIT                (0x00000020)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI1_IMM_RD_RDY_LSB                (4)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI1_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI1_IMM_RD_RDY_MASK               (0x00000010)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI1_IMM_RD_RDY_BIT                (0x00000010)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI0_IMM_RD_RDY_LSB                (3)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI0_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI0_IMM_RD_RDY_MASK               (0x00000008)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_MIPI0_IMM_RD_RDY_BIT                (0x00000008)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_PMIC_IMM_RD_RDY_LSB                 (2)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_PMIC_IMM_RD_RDY_WIDTH               (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_PMIC_IMM_RD_RDY_MASK                (0x00000004)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_PMIC_IMM_RD_RDY_BIT                 (0x00000004)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_RFIC2_IMM_RD_RDY_LSB                (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_RFIC2_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_RFIC2_IMM_RD_RDY_MASK               (0x00000002)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_RFIC2_IMM_RD_RDY_BIT                (0x00000002)

#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_RFIC1_IMM_RD_RDY_LSB                (0)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_RFIC1_IMM_RD_RDY_WIDTH              (1)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_RFIC1_IMM_RD_RDY_MASK               (0x00000001)
#define MMRF_BSI_MM_IMM_MD3_READ_STATUS_MD3_RFIC1_IMM_RD_RDY_BIT                (0x00000001)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT15_ENA_LSB                           (15)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT15_ENA_WIDTH                         (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT15_ENA_MASK                          (0x00008000)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT15_ENA_BIT                           (0x00008000)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT14_ENA_LSB                           (14)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT14_ENA_WIDTH                         (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT14_ENA_MASK                          (0x00004000)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT14_ENA_BIT                           (0x00004000)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT13_ENA_LSB                           (13)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT13_ENA_WIDTH                         (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT13_ENA_MASK                          (0x00002000)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT13_ENA_BIT                           (0x00002000)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT12_ENA_LSB                           (12)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT12_ENA_WIDTH                         (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT12_ENA_MASK                          (0x00001000)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT12_ENA_BIT                           (0x00001000)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT11_ENA_LSB                           (11)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT11_ENA_WIDTH                         (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT11_ENA_MASK                          (0x00000800)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT11_ENA_BIT                           (0x00000800)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT10_ENA_LSB                           (10)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT10_ENA_WIDTH                         (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT10_ENA_MASK                          (0x00000400)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT10_ENA_BIT                           (0x00000400)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT9_ENA_LSB                            (9)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT9_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT9_ENA_MASK                           (0x00000200)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT9_ENA_BIT                            (0x00000200)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT8_ENA_LSB                            (8)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT8_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT8_ENA_MASK                           (0x00000100)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT8_ENA_BIT                            (0x00000100)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT7_ENA_LSB                            (7)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT7_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT7_ENA_MASK                           (0x00000080)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT7_ENA_BIT                            (0x00000080)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT6_ENA_LSB                            (6)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT6_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT6_ENA_MASK                           (0x00000040)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT6_ENA_BIT                            (0x00000040)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT5_ENA_LSB                            (5)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT5_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT5_ENA_MASK                           (0x00000020)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT5_ENA_BIT                            (0x00000020)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT4_ENA_LSB                            (4)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT4_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT4_ENA_MASK                           (0x00000010)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT4_ENA_BIT                            (0x00000010)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT3_ENA_LSB                            (3)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT3_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT3_ENA_MASK                           (0x00000008)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT3_ENA_BIT                            (0x00000008)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT2_ENA_LSB                            (2)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT2_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT2_ENA_MASK                           (0x00000004)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT2_ENA_BIT                            (0x00000004)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT1_ENA_LSB                            (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT1_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT1_ENA_MASK                           (0x00000002)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT1_ENA_BIT                            (0x00000002)

#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT0_ENA_LSB                            (0)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT0_ENA_WIDTH                          (1)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT0_ENA_MASK                           (0x00000001)
#define MMRF_BSI_MM_RFPOR_EVT_ENA_RFPOR_EVT0_ENA_BIT                            (0x00000001)

#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_SW_TRIG_CLR_LSB                      (5)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_SW_TRIG_CLR_WIDTH                    (1)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_SW_TRIG_CLR_MASK                     (0x00000020)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_SW_TRIG_CLR_BIT                      (0x00000020)

#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_SW_FORCE_TRIG_LSB                    (4)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_SW_FORCE_TRIG_WIDTH                  (1)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_SW_FORCE_TRIG_MASK                   (0x00000010)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_SW_FORCE_TRIG_BIT                    (0x00000010)

#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_TRIG_ENA_LSB                         (3)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_TRIG_ENA_WIDTH                       (1)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_TRIG_ENA_MASK                        (0x00000008)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC2_TRIG_ENA_BIT                         (0x00000008)

#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_SW_TRIG_CLR_LSB                      (2)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_SW_TRIG_CLR_WIDTH                    (1)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_SW_TRIG_CLR_MASK                     (0x00000004)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_SW_TRIG_CLR_BIT                      (0x00000004)

#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_SW_FORCE_TRIG_LSB                    (1)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_SW_FORCE_TRIG_WIDTH                  (1)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_SW_FORCE_TRIG_MASK                   (0x00000002)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_SW_FORCE_TRIG_BIT                    (0x00000002)

#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_TRIG_ENA_LSB                         (0)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_TRIG_ENA_WIDTH                       (1)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_TRIG_ENA_MASK                        (0x00000001)
#define MMRF_BSI_MM_RFPOR_CONF_RFPOR_RFIC1_TRIG_ENA_BIT                         (0x00000001)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT15_STATUS_LSB                         (30)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT15_STATUS_WIDTH                       (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT15_STATUS_MASK                        (0xC0000000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT14_STATUS_LSB                         (28)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT14_STATUS_WIDTH                       (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT14_STATUS_MASK                        (0x30000000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT13_STATUS_LSB                         (26)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT13_STATUS_WIDTH                       (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT13_STATUS_MASK                        (0x0C000000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT12_STATUS_LSB                         (24)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT12_STATUS_WIDTH                       (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT12_STATUS_MASK                        (0x03000000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT11_STATUS_LSB                         (22)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT11_STATUS_WIDTH                       (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT11_STATUS_MASK                        (0x00C00000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT10_STATUS_LSB                         (20)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT10_STATUS_WIDTH                       (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT10_STATUS_MASK                        (0x00300000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT9_STATUS_LSB                          (18)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT9_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT9_STATUS_MASK                         (0x000C0000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT8_STATUS_LSB                          (16)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT8_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT8_STATUS_MASK                         (0x00030000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT7_STATUS_LSB                          (14)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT7_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT7_STATUS_MASK                         (0x0000C000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT6_STATUS_LSB                          (12)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT6_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT6_STATUS_MASK                         (0x00003000)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT5_STATUS_LSB                          (10)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT5_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT5_STATUS_MASK                         (0x00000C00)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT4_STATUS_LSB                          (8)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT4_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT4_STATUS_MASK                         (0x00000300)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT3_STATUS_LSB                          (6)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT3_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT3_STATUS_MASK                         (0x000000C0)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT2_STATUS_LSB                          (4)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT2_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT2_STATUS_MASK                         (0x00000030)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT1_STATUS_LSB                          (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT1_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT1_STATUS_MASK                         (0x0000000C)

#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT0_STATUS_LSB                          (0)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT0_STATUS_WIDTH                        (2)
#define MMRF_BSI_MM_RFPOR_STATUS_RFPOR_EVT0_STATUS_MASK                         (0x00000003)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT15_STATUS_CLR_LSB                 (15)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT15_STATUS_CLR_WIDTH               (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT15_STATUS_CLR_MASK                (0x00008000)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT15_STATUS_CLR_BIT                 (0x00008000)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT14_STATUS_CLR_LSB                 (14)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT14_STATUS_CLR_WIDTH               (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT14_STATUS_CLR_MASK                (0x00004000)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT14_STATUS_CLR_BIT                 (0x00004000)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT13_STATUS_CLR_LSB                 (13)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT13_STATUS_CLR_WIDTH               (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT13_STATUS_CLR_MASK                (0x00002000)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT13_STATUS_CLR_BIT                 (0x00002000)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT12_STATUS_CLR_LSB                 (12)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT12_STATUS_CLR_WIDTH               (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT12_STATUS_CLR_MASK                (0x00001000)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT12_STATUS_CLR_BIT                 (0x00001000)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT11_STATUS_CLR_LSB                 (11)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT11_STATUS_CLR_WIDTH               (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT11_STATUS_CLR_MASK                (0x00000800)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT11_STATUS_CLR_BIT                 (0x00000800)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT10_STATUS_CLR_LSB                 (10)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT10_STATUS_CLR_WIDTH               (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT10_STATUS_CLR_MASK                (0x00000400)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT10_STATUS_CLR_BIT                 (0x00000400)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT9_STATUS_CLR_LSB                  (9)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT9_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT9_STATUS_CLR_MASK                 (0x00000200)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT9_STATUS_CLR_BIT                  (0x00000200)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT8_STATUS_CLR_LSB                  (8)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT8_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT8_STATUS_CLR_MASK                 (0x00000100)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT8_STATUS_CLR_BIT                  (0x00000100)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT7_STATUS_CLR_LSB                  (7)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT7_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT7_STATUS_CLR_MASK                 (0x00000080)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT7_STATUS_CLR_BIT                  (0x00000080)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT6_STATUS_CLR_LSB                  (6)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT6_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT6_STATUS_CLR_MASK                 (0x00000040)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT6_STATUS_CLR_BIT                  (0x00000040)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT5_STATUS_CLR_LSB                  (5)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT5_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT5_STATUS_CLR_MASK                 (0x00000020)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT5_STATUS_CLR_BIT                  (0x00000020)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT4_STATUS_CLR_LSB                  (4)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT4_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT4_STATUS_CLR_MASK                 (0x00000010)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT4_STATUS_CLR_BIT                  (0x00000010)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT3_STATUS_CLR_LSB                  (3)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT3_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT3_STATUS_CLR_MASK                 (0x00000008)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT3_STATUS_CLR_BIT                  (0x00000008)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT2_STATUS_CLR_LSB                  (2)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT2_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT2_STATUS_CLR_MASK                 (0x00000004)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT2_STATUS_CLR_BIT                  (0x00000004)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT1_STATUS_CLR_LSB                  (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT1_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT1_STATUS_CLR_MASK                 (0x00000002)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT1_STATUS_CLR_BIT                  (0x00000002)

#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT0_STATUS_CLR_LSB                  (0)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT0_STATUS_CLR_WIDTH                (1)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT0_STATUS_CLR_MASK                 (0x00000001)
#define MMRF_BSI_MM_RFPOR_STATUS_CLR_RFPOR_EVT0_STATUS_CLR_BIT                  (0x00000001)

#define MMRF_BSI_MM_EVENT_OFFSET_OFFSET_TIME_LSB                                (0)
#define MMRF_BSI_MM_EVENT_OFFSET_OFFSET_TIME_WIDTH                              (20)
#define MMRF_BSI_MM_EVENT_OFFSET_OFFSET_TIME_MASK                               (0x000FFFFF)

#define MMRF_BSI_MM_EVENT_CON_GLO_OFST_SEL_LSB                                  (31)
#define MMRF_BSI_MM_EVENT_CON_GLO_OFST_SEL_WIDTH                                (1)
#define MMRF_BSI_MM_EVENT_CON_GLO_OFST_SEL_MASK                                 (0x80000000)
#define MMRF_BSI_MM_EVENT_CON_GLO_OFST_SEL_BIT                                  (0x80000000)

#define MMRF_BSI_MM_EVENT_CON_STOP_ADDR_LSB                                     (16)
#define MMRF_BSI_MM_EVENT_CON_STOP_ADDR_WIDTH                                   (9)
#define MMRF_BSI_MM_EVENT_CON_STOP_ADDR_MASK                                    (0x01FF0000)

#define MMRF_BSI_MM_EVENT_CON_CS_SEL_LSB                                        (15)
#define MMRF_BSI_MM_EVENT_CON_CS_SEL_WIDTH                                      (1)
#define MMRF_BSI_MM_EVENT_CON_CS_SEL_MASK                                       (0x00008000)
#define MMRF_BSI_MM_EVENT_CON_CS_SEL_BIT                                        (0x00008000)

#define MMRF_BSI_MM_EVENT_CON_START_ADDR_LSB                                    (0)
#define MMRF_BSI_MM_EVENT_CON_START_ADDR_WIDTH                                  (9)
#define MMRF_BSI_MM_EVENT_CON_START_ADDR_MASK                                   (0x000001FF)

#define MMRF_BSI_MM_RFPOR_DATA_RFPOR_DATA_LSB                                   (0)
#define MMRF_BSI_MM_RFPOR_DATA_RFPOR_DATA_WIDTH                                 (32)
#define MMRF_BSI_MM_RFPOR_DATA_RFPOR_DATA_MASK                                  (0xFFFFFFFF)

#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_LOCK_LSB                         (24)
#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_LOCK_WIDTH                       (1)
#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_LOCK_MASK                        (0x01000000)
#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_LOCK_BIT                         (0x01000000)

#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_RLEN_LSB                         (16)
#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_RLEN_WIDTH                       (6)
#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_RLEN_MASK                        (0x003F0000)

#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_WLEN_LSB                         (8)
#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_WLEN_WIDTH                       (5)
#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_MIPI_WLEN_MASK                        (0x00001F00)

#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_PORT_SEL_LSB                          (0)
#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_PORT_SEL_WIDTH                        (4)
#define MMRF_BSI_MM_RFPOR_MIPI_CONF_RFPOR_PORT_SEL_MASK                         (0x0000000F)

/*=================================================================================================================================*/
#define MMRF_BPI_TOP_OUT_OR_3100_BPI_TOP_OUT_OR_3100_LSB                        (0)
#define MMRF_BPI_TOP_OUT_OR_3100_BPI_TOP_OUT_OR_3100_WIDTH                      (32)
#define MMRF_BPI_TOP_OUT_OR_3100_BPI_TOP_OUT_OR_3100_MASK                       (0xFFFFFFFF)

#define MMRF_BPI_TOP_OUT_OR_4732_BPI_TOP_OUT_OR_4732_LSB                        (0)
#define MMRF_BPI_TOP_OUT_OR_4732_BPI_TOP_OUT_OR_4732_WIDTH                      (16)
#define MMRF_BPI_TOP_OUT_OR_4732_BPI_TOP_OUT_OR_4732_MASK                       (0x0000FFFF)

#define MMRF_BPI_TOP_OUT_AND_3100_BPI_TOP_OUT_AND_3100_LSB                      (0)
#define MMRF_BPI_TOP_OUT_AND_3100_BPI_TOP_OUT_AND_3100_WIDTH                    (32)
#define MMRF_BPI_TOP_OUT_AND_3100_BPI_TOP_OUT_AND_3100_MASK                     (0xFFFFFFFF)

#define MMRF_BPI_TOP_OUT_AND_4732_BPI_TOP_OUT_AND_4732_LSB                      (0)
#define MMRF_BPI_TOP_OUT_AND_4732_BPI_TOP_OUT_AND_4732_WIDTH                    (16)
#define MMRF_BPI_TOP_OUT_AND_4732_BPI_TOP_OUT_AND_4732_MASK                     (0x0000FFFF)

#define MMRF_BPI_TOP_MASK_MD1_G_3100_BPI_TOP_MASK_MD1_G_3100_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD1_G_3100_BPI_TOP_MASK_MD1_G_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MASK_MD1_G_3100_BPI_TOP_MASK_MD1_G_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MASK_MD1_G_4732_BPI_TOP_MASK_MD1_G_4732_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD1_G_4732_BPI_TOP_MASK_MD1_G_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MASK_MD1_G_4732_BPI_TOP_MASK_MD1_G_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MASK_MD1_W_3100_BPI_TOP_MASK_MD1_W_3100_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD1_W_3100_BPI_TOP_MASK_MD1_W_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MASK_MD1_W_3100_BPI_TOP_MASK_MD1_W_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MASK_MD1_W_4732_BPI_TOP_MASK_MD1_W_4732_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD1_W_4732_BPI_TOP_MASK_MD1_W_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MASK_MD1_W_4732_BPI_TOP_MASK_MD1_W_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MASK_MD1_T_3100_BPI_TOP_MASK_MD1_T_3100_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD1_T_3100_BPI_TOP_MASK_MD1_T_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MASK_MD1_T_3100_BPI_TOP_MASK_MD1_T_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MASK_MD1_T_4732_BPI_TOP_MASK_MD1_T_4732_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD1_T_4732_BPI_TOP_MASK_MD1_T_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MASK_MD1_T_4732_BPI_TOP_MASK_MD1_T_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MASK_MD1_L_3100_BPI_TOP_MASK_MD1_L_3100_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD1_L_3100_BPI_TOP_MASK_MD1_L_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MASK_MD1_L_3100_BPI_TOP_MASK_MD1_L_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MASK_MD1_L_4732_BPI_TOP_MASK_MD1_L_4732_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD1_L_4732_BPI_TOP_MASK_MD1_L_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MASK_MD1_L_4732_BPI_TOP_MASK_MD1_L_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MASK_MD1_L1_3100_BPI_TOP_MASK_MD1_L1_3100_LSB              (0)
#define MMRF_BPI_TOP_MASK_MD1_L1_3100_BPI_TOP_MASK_MD1_L1_3100_WIDTH            (32)
#define MMRF_BPI_TOP_MASK_MD1_L1_3100_BPI_TOP_MASK_MD1_L1_3100_MASK             (0xFFFFFFFF)

#define MMRF_BPI_TOP_MASK_MD1_L1_4732_BPI_TOP_MASK_MD1_L1_4732_LSB              (0)
#define MMRF_BPI_TOP_MASK_MD1_L1_4732_BPI_TOP_MASK_MD1_L1_4732_WIDTH            (16)
#define MMRF_BPI_TOP_MASK_MD1_L1_4732_BPI_TOP_MASK_MD1_L1_4732_MASK             (0x0000FFFF)

#define MMRF_BPI_TOP_MASK_MD2_G_3100_BPI_TOP_MASK_MD2_G_3100_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD2_G_3100_BPI_TOP_MASK_MD2_G_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MASK_MD2_G_3100_BPI_TOP_MASK_MD2_G_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MASK_MD2_G_4732_BPI_TOP_MASK_MD2_G_4732_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD2_G_4732_BPI_TOP_MASK_MD2_G_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MASK_MD2_G_4732_BPI_TOP_MASK_MD2_G_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MASK_MD2_W_3100_BPI_TOP_MASK_MD2_W_3100_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD2_W_3100_BPI_TOP_MASK_MD2_W_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MASK_MD2_W_3100_BPI_TOP_MASK_MD2_W_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MASK_MD2_W_4732_BPI_TOP_MASK_MD2_W_4732_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD2_W_4732_BPI_TOP_MASK_MD2_W_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MASK_MD2_W_4732_BPI_TOP_MASK_MD2_W_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MASK_MD3_C_3100_BPI_TOP_MASK_MD3_C_3100_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD3_C_3100_BPI_TOP_MASK_MD3_C_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MASK_MD3_C_3100_BPI_TOP_MASK_MD3_C_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MASK_MD3_C_4732_BPI_TOP_MASK_MD3_C_4732_LSB                (0)
#define MMRF_BPI_TOP_MASK_MD3_C_4732_BPI_TOP_MASK_MD3_C_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MASK_MD3_C_4732_BPI_TOP_MASK_MD3_C_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_CONFLICT_FLAG_MD3_C_WINDOW_LSB                             (8)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD3_C_WINDOW_WIDTH                           (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD3_C_WINDOW_MASK                            (0x00000100)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD3_C_WINDOW_BIT                             (0x00000100)

#define MMRF_BPI_TOP_CONFLICT_FLAG_MD2_W_WINDOW_LSB                             (7)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD2_W_WINDOW_WIDTH                           (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD2_W_WINDOW_MASK                            (0x00000080)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD2_W_WINDOW_BIT                             (0x00000080)

#define MMRF_BPI_TOP_CONFLICT_FLAG_MD2_G_WINDOW_LSB                             (6)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD2_G_WINDOW_WIDTH                           (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD2_G_WINDOW_MASK                            (0x00000040)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD2_G_WINDOW_BIT                             (0x00000040)

#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_L1_WINDOW_LSB                            (5)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_L1_WINDOW_WIDTH                          (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_L1_WINDOW_MASK                           (0x00000020)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_L1_WINDOW_BIT                            (0x00000020)

#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_L_WINDOW_LSB                             (4)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_L_WINDOW_WIDTH                           (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_L_WINDOW_MASK                            (0x00000010)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_L_WINDOW_BIT                             (0x00000010)

#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_T_WINDOW_LSB                             (3)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_T_WINDOW_WIDTH                           (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_T_WINDOW_MASK                            (0x00000008)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_T_WINDOW_BIT                             (0x00000008)

#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_W_WINDOW_LSB                             (2)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_W_WINDOW_WIDTH                           (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_W_WINDOW_MASK                            (0x00000004)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_W_WINDOW_BIT                             (0x00000004)

#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_G_WINDOW_LSB                             (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_G_WINDOW_WIDTH                           (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_G_WINDOW_MASK                            (0x00000002)
#define MMRF_BPI_TOP_CONFLICT_FLAG_MD1_G_WINDOW_BIT                             (0x00000002)

#define MMRF_BPI_TOP_CONFLICT_FLAG_BPI_TOP_CONFLICT_FLAG_LSB                    (0)
#define MMRF_BPI_TOP_CONFLICT_FLAG_BPI_TOP_CONFLICT_FLAG_WIDTH                  (1)
#define MMRF_BPI_TOP_CONFLICT_FLAG_BPI_TOP_CONFLICT_FLAG_MASK                   (0x00000001)
#define MMRF_BPI_TOP_CONFLICT_FLAG_BPI_TOP_CONFLICT_FLAG_BIT                    (0x00000001)

#define MMRF_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_3100_LSB (0)
#define MMRF_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_3100_WIDTH (32)
#define MMRF_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_3100_MASK (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_4732_LSB (0)
#define MMRF_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_4732_WIDTH (16)
#define MMRF_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_G_CONFLICT_BUS_DATA_4732_MASK (0x0000FFFF)

#define MMRF_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_3100_LSB (0)
#define MMRF_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_3100_WIDTH (32)
#define MMRF_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_3100_MASK (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_4732_LSB (0)
#define MMRF_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_4732_WIDTH (16)
#define MMRF_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_W_CONFLICT_BUS_DATA_4732_MASK (0x0000FFFF)

#define MMRF_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_3100_LSB (0)
#define MMRF_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_3100_WIDTH (32)
#define MMRF_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_3100_MASK (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_4732_LSB (0)
#define MMRF_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_4732_WIDTH (16)
#define MMRF_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_T_CONFLICT_BUS_DATA_4732_MASK (0x0000FFFF)

#define MMRF_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_3100_LSB (0)
#define MMRF_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_3100_WIDTH (32)
#define MMRF_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_3100_MASK (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_4732_LSB (0)
#define MMRF_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_4732_WIDTH (16)
#define MMRF_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_L_CONFLICT_BUS_DATA_4732_MASK (0x0000FFFF)

#define MMRF_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_3100_LSB (0)
#define MMRF_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_3100_WIDTH (32)
#define MMRF_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_3100_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_3100_MASK (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_4732_LSB (0)
#define MMRF_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_4732_WIDTH (16)
#define MMRF_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_4732_BPI_TOP_MD1_L1_CONFLICT_BUS_DATA_4732_MASK (0x0000FFFF)

#define MMRF_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_3100_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_3100_LSB (0)
#define MMRF_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_3100_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_3100_WIDTH (32)
#define MMRF_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_3100_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_3100_MASK (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_4732_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_4732_LSB (0)
#define MMRF_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_4732_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_4732_WIDTH (16)
#define MMRF_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_4732_BPI_TOP_MD2_G_CONFLICT_BUS_DATA_4732_MASK (0x0000FFFF)

#define MMRF_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_3100_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_3100_LSB (0)
#define MMRF_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_3100_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_3100_WIDTH (32)
#define MMRF_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_3100_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_3100_MASK (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_4732_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_4732_LSB (0)
#define MMRF_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_4732_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_4732_WIDTH (16)
#define MMRF_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_4732_BPI_TOP_MD2_W_CONFLICT_BUS_DATA_4732_MASK (0x0000FFFF)

#define MMRF_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_3100_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_3100_LSB (0)
#define MMRF_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_3100_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_3100_WIDTH (32)
#define MMRF_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_3100_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_3100_MASK (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_4732_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_4732_LSB (0)
#define MMRF_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_4732_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_4732_WIDTH (16)
#define MMRF_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_4732_BPI_TOP_MD3_C_CONFLICT_BUS_DATA_4732_MASK (0x0000FFFF)

#define MMRF_BPI_TOP_BUS_OUT_3100_BPI_TOP_BUS_OUT_3100_LSB                      (0)
#define MMRF_BPI_TOP_BUS_OUT_3100_BPI_TOP_BUS_OUT_3100_WIDTH                    (32)
#define MMRF_BPI_TOP_BUS_OUT_3100_BPI_TOP_BUS_OUT_3100_MASK                     (0xFFFFFFFF)

#define MMRF_BPI_TOP_BUS_OUT_4732_BPI_TOP_BUS_OUT_4732_LSB                      (0)
#define MMRF_BPI_TOP_BUS_OUT_4732_BPI_TOP_BUS_OUT_4732_WIDTH                    (16)
#define MMRF_BPI_TOP_BUS_OUT_4732_BPI_TOP_BUS_OUT_4732_MASK                     (0x0000FFFF)

#define MMRF_BPI_TOP_MD1_G_DATA_3100_BPI_TOP_MD1_G_DATA_3100_LSB                (0)
#define MMRF_BPI_TOP_MD1_G_DATA_3100_BPI_TOP_MD1_G_DATA_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MD1_G_DATA_3100_BPI_TOP_MD1_G_DATA_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_G_DATA_4732_BPI_TOP_MD1_G_DATA_4732_LSB                (0)
#define MMRF_BPI_TOP_MD1_G_DATA_4732_BPI_TOP_MD1_G_DATA_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MD1_G_DATA_4732_BPI_TOP_MD1_G_DATA_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MD1_W_DATA_3100_BPI_TOP_MD1_W_DATA_3100_LSB                (0)
#define MMRF_BPI_TOP_MD1_W_DATA_3100_BPI_TOP_MD1_W_DATA_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MD1_W_DATA_3100_BPI_TOP_MD1_W_DATA_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_W_DATA_4732_BPI_TOP_MD1_W_DATA_4732_LSB                (0)
#define MMRF_BPI_TOP_MD1_W_DATA_4732_BPI_TOP_MD1_W_DATA_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MD1_W_DATA_4732_BPI_TOP_MD1_W_DATA_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MD1_T_DATA_3100_BPI_TOP_MD1_T_DATA_3100_LSB                (0)
#define MMRF_BPI_TOP_MD1_T_DATA_3100_BPI_TOP_MD1_T_DATA_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MD1_T_DATA_3100_BPI_TOP_MD1_T_DATA_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_T_DATA_4732_BPI_TOP_MD1_T_DATA_4732_LSB                (0)
#define MMRF_BPI_TOP_MD1_T_DATA_4732_BPI_TOP_MD1_T_DATA_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MD1_T_DATA_4732_BPI_TOP_MD1_T_DATA_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MD1_L_DATA_3100_BPI_TOP_MD1_L_DATA_3100_LSB                (0)
#define MMRF_BPI_TOP_MD1_L_DATA_3100_BPI_TOP_MD1_L_DATA_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MD1_L_DATA_3100_BPI_TOP_MD1_L_DATA_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_L_DATA_4732_BPI_TOP_MD1_L_DATA_4732_LSB                (0)
#define MMRF_BPI_TOP_MD1_L_DATA_4732_BPI_TOP_MD1_L_DATA_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MD1_L_DATA_4732_BPI_TOP_MD1_L_DATA_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MD1_L1_DATA_3100_BPI_TOP_MD1_L1_DATA_3100_LSB              (0)
#define MMRF_BPI_TOP_MD1_L1_DATA_3100_BPI_TOP_MD1_L1_DATA_3100_WIDTH            (32)
#define MMRF_BPI_TOP_MD1_L1_DATA_3100_BPI_TOP_MD1_L1_DATA_3100_MASK             (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD1_L1_DATA_4732_BPI_TOP_MD1_L1_DATA_4732_LSB              (0)
#define MMRF_BPI_TOP_MD1_L1_DATA_4732_BPI_TOP_MD1_L1_DATA_4732_WIDTH            (16)
#define MMRF_BPI_TOP_MD1_L1_DATA_4732_BPI_TOP_MD1_L1_DATA_4732_MASK             (0x0000FFFF)

#define MMRF_BPI_TOP_MD2_G_DATA_3100_BPI_TOP_MD2_G_DATA_3100_LSB                (0)
#define MMRF_BPI_TOP_MD2_G_DATA_3100_BPI_TOP_MD2_G_DATA_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MD2_G_DATA_3100_BPI_TOP_MD2_G_DATA_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD2_G_DATA_4732_BPI_TOP_MD2_G_DATA_4732_LSB                (0)
#define MMRF_BPI_TOP_MD2_G_DATA_4732_BPI_TOP_MD2_G_DATA_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MD2_G_DATA_4732_BPI_TOP_MD2_G_DATA_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MD2_W_DATA_3100_BPI_TOP_MD2_W_DATA_3100_LSB                (0)
#define MMRF_BPI_TOP_MD2_W_DATA_3100_BPI_TOP_MD2_W_DATA_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MD2_W_DATA_3100_BPI_TOP_MD2_W_DATA_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD2_W_DATA_4732_BPI_TOP_MD2_W_DATA_4732_LSB                (0)
#define MMRF_BPI_TOP_MD2_W_DATA_4732_BPI_TOP_MD2_W_DATA_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MD2_W_DATA_4732_BPI_TOP_MD2_W_DATA_4732_MASK               (0x0000FFFF)

#define MMRF_BPI_TOP_MD3_C_DATA_3100_BPI_TOP_MD3_C_DATA_3100_LSB                (0)
#define MMRF_BPI_TOP_MD3_C_DATA_3100_BPI_TOP_MD3_C_DATA_3100_WIDTH              (32)
#define MMRF_BPI_TOP_MD3_C_DATA_3100_BPI_TOP_MD3_C_DATA_3100_MASK               (0xFFFFFFFF)

#define MMRF_BPI_TOP_MD3_C_DATA_4732_BPI_TOP_MD3_C_DATA_4732_LSB                (0)
#define MMRF_BPI_TOP_MD3_C_DATA_4732_BPI_TOP_MD3_C_DATA_4732_WIDTH              (16)
#define MMRF_BPI_TOP_MD3_C_DATA_4732_BPI_TOP_MD3_C_DATA_4732_MASK               (0x0000FFFF)

/*=================================================================================================================================*/
#define MMRF_L_RXDFE_FC_CON_P0_L_ANT_SWAP_LSB                                   (31)
#define MMRF_L_RXDFE_FC_CON_P0_L_ANT_SWAP_WIDTH                                 (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_ANT_SWAP_MASK                                  (0x80000000)
#define MMRF_L_RXDFE_FC_CON_P0_L_ANT_SWAP_BIT                                   (0x80000000)

#define MMRF_L_RXDFE_FC_CON_P0_L_FPGA_EQUIP_SEL_P0_A1_LSB                       (11)
#define MMRF_L_RXDFE_FC_CON_P0_L_FPGA_EQUIP_SEL_P0_A1_WIDTH                     (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_FPGA_EQUIP_SEL_P0_A1_MASK                      (0x00000800)
#define MMRF_L_RXDFE_FC_CON_P0_L_FPGA_EQUIP_SEL_P0_A1_BIT                       (0x00000800)

#define MMRF_L_RXDFE_FC_CON_P0_L_IQ_SWAP_P0_A1_LSB                              (10)
#define MMRF_L_RXDFE_FC_CON_P0_L_IQ_SWAP_P0_A1_WIDTH                            (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_IQ_SWAP_P0_A1_MASK                             (0x00000400)
#define MMRF_L_RXDFE_FC_CON_P0_L_IQ_SWAP_P0_A1_BIT                              (0x00000400)

#define MMRF_L_RXDFE_FC_CON_P0_L_Q_INV_P0_A1_LSB                                (9)
#define MMRF_L_RXDFE_FC_CON_P0_L_Q_INV_P0_A1_WIDTH                              (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_Q_INV_P0_A1_MASK                               (0x00000200)
#define MMRF_L_RXDFE_FC_CON_P0_L_Q_INV_P0_A1_BIT                                (0x00000200)

#define MMRF_L_RXDFE_FC_CON_P0_L_I_INV_P0_A1_LSB                                (8)
#define MMRF_L_RXDFE_FC_CON_P0_L_I_INV_P0_A1_WIDTH                              (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_I_INV_P0_A1_MASK                               (0x00000100)
#define MMRF_L_RXDFE_FC_CON_P0_L_I_INV_P0_A1_BIT                                (0x00000100)

#define MMRF_L_RXDFE_FC_CON_P0_L_FPGA_EQUIP_SEL_P0_A0_LSB                       (3)
#define MMRF_L_RXDFE_FC_CON_P0_L_FPGA_EQUIP_SEL_P0_A0_WIDTH                     (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_FPGA_EQUIP_SEL_P0_A0_MASK                      (0x00000008)
#define MMRF_L_RXDFE_FC_CON_P0_L_FPGA_EQUIP_SEL_P0_A0_BIT                       (0x00000008)

#define MMRF_L_RXDFE_FC_CON_P0_L_IQ_SWAP_P0_A0_LSB                              (2)
#define MMRF_L_RXDFE_FC_CON_P0_L_IQ_SWAP_P0_A0_WIDTH                            (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_IQ_SWAP_P0_A0_MASK                             (0x00000004)
#define MMRF_L_RXDFE_FC_CON_P0_L_IQ_SWAP_P0_A0_BIT                              (0x00000004)

#define MMRF_L_RXDFE_FC_CON_P0_L_Q_INV_P0_A0_LSB                                (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_Q_INV_P0_A0_WIDTH                              (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_Q_INV_P0_A0_MASK                               (0x00000002)
#define MMRF_L_RXDFE_FC_CON_P0_L_Q_INV_P0_A0_BIT                                (0x00000002)

#define MMRF_L_RXDFE_FC_CON_P0_L_I_INV_P0_A0_LSB                                (0)
#define MMRF_L_RXDFE_FC_CON_P0_L_I_INV_P0_A0_WIDTH                              (1)
#define MMRF_L_RXDFE_FC_CON_P0_L_I_INV_P0_A0_MASK                               (0x00000001)
#define MMRF_L_RXDFE_FC_CON_P0_L_I_INV_P0_A0_BIT                                (0x00000001)

#define MMRF_L_RXDFE_FC_CON_P1_L_FPGA_EQUIP_SEL_P1_A1_LSB                       (11)
#define MMRF_L_RXDFE_FC_CON_P1_L_FPGA_EQUIP_SEL_P1_A1_WIDTH                     (1)
#define MMRF_L_RXDFE_FC_CON_P1_L_FPGA_EQUIP_SEL_P1_A1_MASK                      (0x00000800)
#define MMRF_L_RXDFE_FC_CON_P1_L_FPGA_EQUIP_SEL_P1_A1_BIT                       (0x00000800)

#define MMRF_L_RXDFE_FC_CON_P1_L_IQ_SWAP_P1_A1_LSB                              (10)
#define MMRF_L_RXDFE_FC_CON_P1_L_IQ_SWAP_P1_A1_WIDTH                            (1)
#define MMRF_L_RXDFE_FC_CON_P1_L_IQ_SWAP_P1_A1_MASK                             (0x00000400)
#define MMRF_L_RXDFE_FC_CON_P1_L_IQ_SWAP_P1_A1_BIT                              (0x00000400)

#define MMRF_L_RXDFE_FC_CON_P1_L_Q_INV_P1_A1_LSB                                (9)
#define MMRF_L_RXDFE_FC_CON_P1_L_Q_INV_P1_A1_WIDTH                              (1)
#define MMRF_L_RXDFE_FC_CON_P1_L_Q_INV_P1_A1_MASK                               (0x00000200)
#define MMRF_L_RXDFE_FC_CON_P1_L_Q_INV_P1_A1_BIT                                (0x00000200)

#define MMRF_L_RXDFE_FC_CON_P1_L_I_INV_P1_A1_LSB                                (8)
#define MMRF_L_RXDFE_FC_CON_P1_L_I_INV_P1_A1_WIDTH                              (1)
#define MMRF_L_RXDFE_FC_CON_P1_L_I_INV_P1_A1_MASK                               (0x00000100)
#define MMRF_L_RXDFE_FC_CON_P1_L_I_INV_P1_A1_BIT                                (0x00000100)

#define MMRF_L_RXDFE_FC_CON_P1_L_FPGA_EQUIP_SEL_P1_A0_LSB                       (3)
#define MMRF_L_RXDFE_FC_CON_P1_L_FPGA_EQUIP_SEL_P1_A0_WIDTH                     (1)
#define MMRF_L_RXDFE_FC_CON_P1_L_FPGA_EQUIP_SEL_P1_A0_MASK                      (0x00000008)
#define MMRF_L_RXDFE_FC_CON_P1_L_FPGA_EQUIP_SEL_P1_A0_BIT                       (0x00000008)

#define MMRF_L_RXDFE_FC_CON_P1_L_IQ_SWAP_P1_A0_LSB                              (2)
#define MMRF_L_RXDFE_FC_CON_P1_L_IQ_SWAP_P1_A0_WIDTH                            (1)
#define MMRF_L_RXDFE_FC_CON_P1_L_IQ_SWAP_P1_A0_MASK                             (0x00000004)
#define MMRF_L_RXDFE_FC_CON_P1_L_IQ_SWAP_P1_A0_BIT                              (0x00000004)

#define MMRF_L_RXDFE_FC_CON_P1_L_Q_INV_P1_A0_LSB                                (1)
#define MMRF_L_RXDFE_FC_CON_P1_L_Q_INV_P1_A0_WIDTH                              (1)
#define MMRF_L_RXDFE_FC_CON_P1_L_Q_INV_P1_A0_MASK                               (0x00000002)
#define MMRF_L_RXDFE_FC_CON_P1_L_Q_INV_P1_A0_BIT                                (0x00000002)

#define MMRF_L_RXDFE_FC_CON_P1_L_I_INV_P1_A0_LSB                                (0)
#define MMRF_L_RXDFE_FC_CON_P1_L_I_INV_P1_A0_WIDTH                              (1)
#define MMRF_L_RXDFE_FC_CON_P1_L_I_INV_P1_A0_MASK                               (0x00000001)
#define MMRF_L_RXDFE_FC_CON_P1_L_I_INV_P1_A0_BIT                                (0x00000001)


#define MMRF_T_RXDFE_FC_CON_P0_T_ANT_SWAP_LSB                                   (31)
#define MMRF_T_RXDFE_FC_CON_P0_T_ANT_SWAP_WIDTH                                 (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_ANT_SWAP_MASK                                  (0x80000000)
#define MMRF_T_RXDFE_FC_CON_P0_T_ANT_SWAP_BIT                                   (0x80000000)

#define MMRF_T_RXDFE_FC_CON_P0_T_FPGA_EQUIP_SEL_P0_A1_LSB                       (11)
#define MMRF_T_RXDFE_FC_CON_P0_T_FPGA_EQUIP_SEL_P0_A1_WIDTH                     (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_FPGA_EQUIP_SEL_P0_A1_MASK                      (0x00000800)
#define MMRF_T_RXDFE_FC_CON_P0_T_FPGA_EQUIP_SEL_P0_A1_BIT                       (0x00000800)

#define MMRF_T_RXDFE_FC_CON_P0_T_IQ_SWAP_P0_A1_LSB                              (10)
#define MMRF_T_RXDFE_FC_CON_P0_T_IQ_SWAP_P0_A1_WIDTH                            (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_IQ_SWAP_P0_A1_MASK                             (0x00000400)
#define MMRF_T_RXDFE_FC_CON_P0_T_IQ_SWAP_P0_A1_BIT                              (0x00000400)

#define MMRF_T_RXDFE_FC_CON_P0_T_Q_INV_P0_A1_LSB                                (9)
#define MMRF_T_RXDFE_FC_CON_P0_T_Q_INV_P0_A1_WIDTH                              (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_Q_INV_P0_A1_MASK                               (0x00000200)
#define MMRF_T_RXDFE_FC_CON_P0_T_Q_INV_P0_A1_BIT                                (0x00000200)

#define MMRF_T_RXDFE_FC_CON_P0_T_I_INV_P0_A1_LSB                                (8)
#define MMRF_T_RXDFE_FC_CON_P0_T_I_INV_P0_A1_WIDTH                              (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_I_INV_P0_A1_MASK                               (0x00000100)
#define MMRF_T_RXDFE_FC_CON_P0_T_I_INV_P0_A1_BIT                                (0x00000100)

#define MMRF_T_RXDFE_FC_CON_P0_T_FPGA_EQUIP_SEL_P0_A0_LSB                       (3)
#define MMRF_T_RXDFE_FC_CON_P0_T_FPGA_EQUIP_SEL_P0_A0_WIDTH                     (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_FPGA_EQUIP_SEL_P0_A0_MASK                      (0x00000008)
#define MMRF_T_RXDFE_FC_CON_P0_T_FPGA_EQUIP_SEL_P0_A0_BIT                       (0x00000008)

#define MMRF_T_RXDFE_FC_CON_P0_T_IQ_SWAP_P0_A0_LSB                              (2)
#define MMRF_T_RXDFE_FC_CON_P0_T_IQ_SWAP_P0_A0_WIDTH                            (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_IQ_SWAP_P0_A0_MASK                             (0x00000004)
#define MMRF_T_RXDFE_FC_CON_P0_T_IQ_SWAP_P0_A0_BIT                              (0x00000004)

#define MMRF_T_RXDFE_FC_CON_P0_T_Q_INV_P0_A0_LSB                                (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_Q_INV_P0_A0_WIDTH                              (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_Q_INV_P0_A0_MASK                               (0x00000002)
#define MMRF_T_RXDFE_FC_CON_P0_T_Q_INV_P0_A0_BIT                                (0x00000002)

#define MMRF_T_RXDFE_FC_CON_P0_T_I_INV_P0_A0_LSB                                (0)
#define MMRF_T_RXDFE_FC_CON_P0_T_I_INV_P0_A0_WIDTH                              (1)
#define MMRF_T_RXDFE_FC_CON_P0_T_I_INV_P0_A0_MASK                               (0x00000001)
#define MMRF_T_RXDFE_FC_CON_P0_T_I_INV_P0_A0_BIT                                (0x00000001)

#define MMRF_T_RXDFE_FC_CON_P1_T_FPGA_EQUIP_SEL_P1_A1_LSB                       (11)
#define MMRF_T_RXDFE_FC_CON_P1_T_FPGA_EQUIP_SEL_P1_A1_WIDTH                     (1)
#define MMRF_T_RXDFE_FC_CON_P1_T_FPGA_EQUIP_SEL_P1_A1_MASK                      (0x00000800)
#define MMRF_T_RXDFE_FC_CON_P1_T_FPGA_EQUIP_SEL_P1_A1_BIT                       (0x00000800)

#define MMRF_T_RXDFE_FC_CON_P1_T_IQ_SWAP_P1_A1_LSB                              (10)
#define MMRF_T_RXDFE_FC_CON_P1_T_IQ_SWAP_P1_A1_WIDTH                            (1)
#define MMRF_T_RXDFE_FC_CON_P1_T_IQ_SWAP_P1_A1_MASK                             (0x00000400)
#define MMRF_T_RXDFE_FC_CON_P1_T_IQ_SWAP_P1_A1_BIT                              (0x00000400)

#define MMRF_T_RXDFE_FC_CON_P1_T_Q_INV_P1_A1_LSB                                (9)
#define MMRF_T_RXDFE_FC_CON_P1_T_Q_INV_P1_A1_WIDTH                              (1)
#define MMRF_T_RXDFE_FC_CON_P1_T_Q_INV_P1_A1_MASK                               (0x00000200)
#define MMRF_T_RXDFE_FC_CON_P1_T_Q_INV_P1_A1_BIT                                (0x00000200)

#define MMRF_T_RXDFE_FC_CON_P1_T_I_INV_P1_A1_LSB                                (8)
#define MMRF_T_RXDFE_FC_CON_P1_T_I_INV_P1_A1_WIDTH                              (1)
#define MMRF_T_RXDFE_FC_CON_P1_T_I_INV_P1_A1_MASK                               (0x00000100)
#define MMRF_T_RXDFE_FC_CON_P1_T_I_INV_P1_A1_BIT                                (0x00000100)

#define MMRF_T_RXDFE_FC_CON_P1_T_FPGA_EQUIP_SEL_P1_A0_LSB                       (3)
#define MMRF_T_RXDFE_FC_CON_P1_T_FPGA_EQUIP_SEL_P1_A0_WIDTH                     (1)
#define MMRF_T_RXDFE_FC_CON_P1_T_FPGA_EQUIP_SEL_P1_A0_MASK                      (0x00000008)
#define MMRF_T_RXDFE_FC_CON_P1_T_FPGA_EQUIP_SEL_P1_A0_BIT                       (0x00000008)

#define MMRF_T_RXDFE_FC_CON_P1_T_IQ_SWAP_P1_A0_LSB                              (2)
#define MMRF_T_RXDFE_FC_CON_P1_T_IQ_SWAP_P1_A0_WIDTH                            (1)
#define MMRF_T_RXDFE_FC_CON_P1_T_IQ_SWAP_P1_A0_MASK                             (0x00000004)
#define MMRF_T_RXDFE_FC_CON_P1_T_IQ_SWAP_P1_A0_BIT                              (0x00000004)

#define MMRF_T_RXDFE_FC_CON_P1_T_Q_INV_P1_A0_LSB                                (1)
#define MMRF_T_RXDFE_FC_CON_P1_T_Q_INV_P1_A0_WIDTH                              (1)
#define MMRF_T_RXDFE_FC_CON_P1_T_Q_INV_P1_A0_MASK                               (0x00000002)
#define MMRF_T_RXDFE_FC_CON_P1_T_Q_INV_P1_A0_BIT                                (0x00000002)

#define MMRF_T_RXDFE_FC_CON_P1_T_I_INV_P1_A0_LSB                                (0)
#define MMRF_T_RXDFE_FC_CON_P1_T_I_INV_P1_A0_WIDTH                              (1)
#define MMRF_T_RXDFE_FC_CON_P1_T_I_INV_P1_A0_MASK                               (0x00000001)
#define MMRF_T_RXDFE_FC_CON_P1_T_I_INV_P1_A0_BIT                                (0x00000001)


#define MMRF_W_RXDFE_FC_CON_P0_W_ANT_SWAP_LSB                                   (31)
#define MMRF_W_RXDFE_FC_CON_P0_W_ANT_SWAP_WIDTH                                 (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_ANT_SWAP_MASK                                  (0x80000000)
#define MMRF_W_RXDFE_FC_CON_P0_W_ANT_SWAP_BIT                                   (0x80000000)

#define MMRF_W_RXDFE_FC_CON_P0_W_FPGA_EQUIP_SEL_P0_A1_LSB                       (11)
#define MMRF_W_RXDFE_FC_CON_P0_W_FPGA_EQUIP_SEL_P0_A1_WIDTH                     (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_FPGA_EQUIP_SEL_P0_A1_MASK                      (0x00000800)
#define MMRF_W_RXDFE_FC_CON_P0_W_FPGA_EQUIP_SEL_P0_A1_BIT                       (0x00000800)

#define MMRF_W_RXDFE_FC_CON_P0_W_IQ_SWAP_P0_A1_LSB                              (10)
#define MMRF_W_RXDFE_FC_CON_P0_W_IQ_SWAP_P0_A1_WIDTH                            (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_IQ_SWAP_P0_A1_MASK                             (0x00000400)
#define MMRF_W_RXDFE_FC_CON_P0_W_IQ_SWAP_P0_A1_BIT                              (0x00000400)

#define MMRF_W_RXDFE_FC_CON_P0_W_Q_INV_P0_A1_LSB                                (9)
#define MMRF_W_RXDFE_FC_CON_P0_W_Q_INV_P0_A1_WIDTH                              (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_Q_INV_P0_A1_MASK                               (0x00000200)
#define MMRF_W_RXDFE_FC_CON_P0_W_Q_INV_P0_A1_BIT                                (0x00000200)

#define MMRF_W_RXDFE_FC_CON_P0_W_I_INV_P0_A1_LSB                                (8)
#define MMRF_W_RXDFE_FC_CON_P0_W_I_INV_P0_A1_WIDTH                              (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_I_INV_P0_A1_MASK                               (0x00000100)
#define MMRF_W_RXDFE_FC_CON_P0_W_I_INV_P0_A1_BIT                                (0x00000100)

#define MMRF_W_RXDFE_FC_CON_P0_W_FPGA_EQUIP_SEL_P0_A0_LSB                       (3)
#define MMRF_W_RXDFE_FC_CON_P0_W_FPGA_EQUIP_SEL_P0_A0_WIDTH                     (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_FPGA_EQUIP_SEL_P0_A0_MASK                      (0x00000008)
#define MMRF_W_RXDFE_FC_CON_P0_W_FPGA_EQUIP_SEL_P0_A0_BIT                       (0x00000008)

#define MMRF_W_RXDFE_FC_CON_P0_W_IQ_SWAP_P0_A0_LSB                              (2)
#define MMRF_W_RXDFE_FC_CON_P0_W_IQ_SWAP_P0_A0_WIDTH                            (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_IQ_SWAP_P0_A0_MASK                             (0x00000004)
#define MMRF_W_RXDFE_FC_CON_P0_W_IQ_SWAP_P0_A0_BIT                              (0x00000004)

#define MMRF_W_RXDFE_FC_CON_P0_W_Q_INV_P0_A0_LSB                                (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_Q_INV_P0_A0_WIDTH                              (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_Q_INV_P0_A0_MASK                               (0x00000002)
#define MMRF_W_RXDFE_FC_CON_P0_W_Q_INV_P0_A0_BIT                                (0x00000002)

#define MMRF_W_RXDFE_FC_CON_P0_W_I_INV_P0_A0_LSB                                (0)
#define MMRF_W_RXDFE_FC_CON_P0_W_I_INV_P0_A0_WIDTH                              (1)
#define MMRF_W_RXDFE_FC_CON_P0_W_I_INV_P0_A0_MASK                               (0x00000001)
#define MMRF_W_RXDFE_FC_CON_P0_W_I_INV_P0_A0_BIT                                (0x00000001)

#define MMRF_W_RXDFE_FC_CON_P1_W_FPGA_EQUIP_SEL_P1_A1_LSB                       (11)
#define MMRF_W_RXDFE_FC_CON_P1_W_FPGA_EQUIP_SEL_P1_A1_WIDTH                     (1)
#define MMRF_W_RXDFE_FC_CON_P1_W_FPGA_EQUIP_SEL_P1_A1_MASK                      (0x00000800)
#define MMRF_W_RXDFE_FC_CON_P1_W_FPGA_EQUIP_SEL_P1_A1_BIT                       (0x00000800)

#define MMRF_W_RXDFE_FC_CON_P1_W_IQ_SWAP_P1_A1_LSB                              (10)
#define MMRF_W_RXDFE_FC_CON_P1_W_IQ_SWAP_P1_A1_WIDTH                            (1)
#define MMRF_W_RXDFE_FC_CON_P1_W_IQ_SWAP_P1_A1_MASK                             (0x00000400)
#define MMRF_W_RXDFE_FC_CON_P1_W_IQ_SWAP_P1_A1_BIT                              (0x00000400)

#define MMRF_W_RXDFE_FC_CON_P1_W_Q_INV_P1_A1_LSB                                (9)
#define MMRF_W_RXDFE_FC_CON_P1_W_Q_INV_P1_A1_WIDTH                              (1)
#define MMRF_W_RXDFE_FC_CON_P1_W_Q_INV_P1_A1_MASK                               (0x00000200)
#define MMRF_W_RXDFE_FC_CON_P1_W_Q_INV_P1_A1_BIT                                (0x00000200)

#define MMRF_W_RXDFE_FC_CON_P1_W_I_INV_P1_A1_LSB                                (8)
#define MMRF_W_RXDFE_FC_CON_P1_W_I_INV_P1_A1_WIDTH                              (1)
#define MMRF_W_RXDFE_FC_CON_P1_W_I_INV_P1_A1_MASK                               (0x00000100)
#define MMRF_W_RXDFE_FC_CON_P1_W_I_INV_P1_A1_BIT                                (0x00000100)

#define MMRF_W_RXDFE_FC_CON_P1_W_FPGA_EQUIP_SEL_P1_A0_LSB                       (3)
#define MMRF_W_RXDFE_FC_CON_P1_W_FPGA_EQUIP_SEL_P1_A0_WIDTH                     (1)
#define MMRF_W_RXDFE_FC_CON_P1_W_FPGA_EQUIP_SEL_P1_A0_MASK                      (0x00000008)
#define MMRF_W_RXDFE_FC_CON_P1_W_FPGA_EQUIP_SEL_P1_A0_BIT                       (0x00000008)

#define MMRF_W_RXDFE_FC_CON_P1_W_IQ_SWAP_P1_A0_LSB                              (2)
#define MMRF_W_RXDFE_FC_CON_P1_W_IQ_SWAP_P1_A0_WIDTH                            (1)
#define MMRF_W_RXDFE_FC_CON_P1_W_IQ_SWAP_P1_A0_MASK                             (0x00000004)
#define MMRF_W_RXDFE_FC_CON_P1_W_IQ_SWAP_P1_A0_BIT                              (0x00000004)

#define MMRF_W_RXDFE_FC_CON_P1_W_Q_INV_P1_A0_LSB                                (1)
#define MMRF_W_RXDFE_FC_CON_P1_W_Q_INV_P1_A0_WIDTH                              (1)
#define MMRF_W_RXDFE_FC_CON_P1_W_Q_INV_P1_A0_MASK                               (0x00000002)
#define MMRF_W_RXDFE_FC_CON_P1_W_Q_INV_P1_A0_BIT                                (0x00000002)

#define MMRF_W_RXDFE_FC_CON_P1_W_I_INV_P1_A0_LSB                                (0)
#define MMRF_W_RXDFE_FC_CON_P1_W_I_INV_P1_A0_WIDTH                              (1)
#define MMRF_W_RXDFE_FC_CON_P1_W_I_INV_P1_A0_MASK                               (0x00000001)
#define MMRF_W_RXDFE_FC_CON_P1_W_I_INV_P1_A0_BIT                                (0x00000001)


/*=================================================================================================================================*/
#define MMRF_TXDFE_BBTX_RF_CON_TXDFE_MASTER_FLAG_LSB                            (8)
#define MMRF_TXDFE_BBTX_RF_CON_TXDFE_MASTER_FLAG_WIDTH                          (1)
#define MMRF_TXDFE_BBTX_RF_CON_TXDFE_MASTER_FLAG_MASK                           (0x00000100)
#define MMRF_TXDFE_BBTX_RF_CON_TXDFE_MASTER_FLAG_BIT                            (0x00000100)

#define MMRF_TXDFE_BBTX_RF_CON_BBTX_MUX_IMM_MODE_EN_LSB                         (4)
#define MMRF_TXDFE_BBTX_RF_CON_BBTX_MUX_IMM_MODE_EN_WIDTH                       (1)
#define MMRF_TXDFE_BBTX_RF_CON_BBTX_MUX_IMM_MODE_EN_MASK                        (0x00000010)
#define MMRF_TXDFE_BBTX_RF_CON_BBTX_MUX_IMM_MODE_EN_BIT                         (0x00000010)

#define MMRF_TXDFE_BBTX_RF_CON_BBTX_RF_SEL_LSB                                  (0)
#define MMRF_TXDFE_BBTX_RF_CON_BBTX_RF_SEL_WIDTH                                (1)
#define MMRF_TXDFE_BBTX_RF_CON_BBTX_RF_SEL_MASK                                 (0x00000001)
#define MMRF_TXDFE_BBTX_RF_CON_BBTX_RF_SEL_BIT                                  (0x00000001)


/*=================================================================================================================================*/

#endif //#ifndef _MML1_RF_REG_ELBRUS_H_