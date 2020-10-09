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


/*****************************************************************************
 *
 * Filename:
 * ---------
 *   intrCtrl_MT6763.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   Definition for chipset interrupt table
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------

 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __INTRCTRL_MT6763_H__
#define __INTRCTRL_MT6763_H__


#include "reg_base.h"
#include "irqid.h"
//#include "drv_features_gpt.h"
//#include "drv_mdcirq.h"
#include "kal_public_api.h"
#include "isrentry.h"
#include "hisr_config.h"

/* Wait mode enable define */
#define __MDCIRQ_WAIT_MODE_ENABLE__

/*CIRQ Interrupt Sources*/

#define NUM_IRQ_SOURCES          (256)

#define 	IRQ_SHARE_D12MINT1_CODE	 MD_IRQID_SHARE_D12MINT1
#define 	IRQ_IRDBG_MCU_INT_CODE	 MD_IRQID_IRDBG_MCU_INT
#define 	IRQ_TDMA_CTIRQ1_CODE	 MD_IRQID_TDMA_CTIRQ1
#define 	IRQ_TDMA_CTIRQ2_CODE	 MD_IRQID_TDMA_CTIRQ2
#define 	IRQ_TDMA_CTIRQ3_CODE	 MD_IRQID_TDMA_CTIRQ3
#define 	IRQ_CSSYS_FDD_CS_IRQ_CODE	 MD_IRQID_CSSYS_FDD_CS_IRQ
#define 	IRQ_CSSYS_TDD_CS_IRQ_CODE	 MD_IRQID_CSSYS_TDD_CS_IRQ
#define 	IRQ_CSSYS_LTE_CS_IRQ_CODE	 MD_IRQID_CSSYS_LTE_CS_IRQ
#define 	IRQ_CSSYS_1X_CS_IRQ_CODE	 MD_IRQID_CSSYS_1X_CS_IRQ
#define 	IRQ_CSSYS_DO_CS_IRQ_CODE	 MD_IRQID_CSSYS_DO_CS_IRQ
#define 	IRQ_MDWDT_CODE	 MD_IRQID_MDWDT
#define 	IRQ_UART_MD0_CODE	 MD_IRQID_UART_MD0
#define 	IRQ_UART_MD1_CODE	 MD_IRQID_UART_MD1
#define 	IRQ_OST_CODE	 MD_IRQID_OST
#define 	IRQ_USIM0_CODE	 MD_IRQID_USIM0
#define 	IRQ_USIM1_CODE	 MD_IRQID_USIM1
#define 	IRQ_TOPSM_CODE	 MD_IRQID_TOPSM
#define 	IRQ_MDGDMA0_CODE	 MD_IRQID_MDGDMA0
#define 	IRQ_MDGDMA1_CODE	 MD_IRQID_MDGDMA1
#define 	IRQ_MDGDMA2_CODE	 MD_IRQID_MDGDMA2
#define 	IRQ_MDGDMA3_CODE	 MD_IRQID_MDGDMA3
#define 	IRQ_EINT0_CODE	 MD_IRQID_EINT0
#define 	IRQ_EINT1_CODE	 MD_IRQID_EINT1
#define 	IRQ_EINT2_CODE	 MD_IRQID_EINT2
#define 	IRQ_EINT_SHARE_CODE	 MD_IRQID_EINT_SHARE
#define 	IRQ_BUS_ERR_CODE	 MD_IRQID_BUS_ERR
#define 	IRQ_TXBRP0_CODE	 MD_IRQID_TXBRP0
#define 	IRQ_TXBRP1_CODE	 MD_IRQID_TXBRP1
#define 	IRQ_TXCRP_CODE	 MD_IRQID_TXCRP
#define 	IRQ_MML2_HRT_CODE	 MD_IRQ_ID_MML2_HRT
#define 	IRQ_MML2_NOTIF_CODE	 MD_IRQ_ID_MML2_NOTIF
#define 	IRQ_MML2_EXCEP_CODE	 MD_IRQ_ID_MML2_EXCEP
#define 	IRQ_DEM_TRIG_PS_INT_LE_CODE	 MD_IRQID_DEM_TRIG_PS_INT_LE
#define 	IRQ_ECT_CODE	 MD_IRQID_ECT
#define 	IRQ_PTP_THERM_INT_INT_CODE	 MD_IRQID_PTP_THERM_INT_INT
#define 	IRQ_CLDMA_CODE	 MD_IRQID_CLDMA
#define 	IRQ_MDINFRA_BUSMON_MATCH_STS_CODE	 MD_IRQID_MDINFRA_BUSMON_MATCH_STS
#define 	IRQ_ELM_DMA_IRQ_CODE	 MD_IRQID_ELM_DMA_IRQ
#define 	IRQ_SOE_CODE	 MD_IRQID_SOE
#define 	IRQ_ULSP_LOG_MD_INT_CODE	 MD_IRQID_ULSP_LOG_MD_INT
#define 	IRQ_ULSP_LOG_DSP_INT_CODE	 MD_IRQID_ULSP_LOG_DSP_INT
#define 	IRQ_USIP0_0_CODE	 MD_IRQID_USIP0_0
#define 	IRQ_USIP1_0_CODE	 MD_IRQID_USIP1_0
#define 	IRQ_USIP2_0_CODE	 MD_IRQID_USIP2_0
#define 	IRQ_USIP3_0_CODE	 MD_IRQID_USIP3_0
#define 	IRQ_USIP0_1_CODE	 MD_IRQID_USIP0_1
#define 	IRQ_USIP1_1_CODE	 MD_IRQID_USIP1_1
#define 	IRQ_USIP2_1_CODE	 MD_IRQID_USIP2_1
#define 	IRQ_USIP3_1_CODE	 MD_IRQID_USIP3_1
#define 	IRQ_SI_CM_ERR_CODE	 MD_IRQID_SI_CM_ERR
#define 	IRQ_ABM_INT_CODE	 MD_IRQID_ABM_INT
#define 	IRQ_ABM_ERROR_INT_CODE	 MD_IRQID_ABM_ERROR_INT
#define 	IRQ_MDMCU_BUSMON_MATCH_STS_CODE	 MD_IRQID_MDMCU_BUSMON_MATCH_STS
#define 	IRQ_ELMTOP_EMI_IRQ_CODE	 MD_IRQID_ELMTOP_EMI_IRQ
#define 	IRQ_PPPHA_ENC0_INT_CODE	 MD_IRQID_PPPHA_ENC0_INT
#define 	IRQ_PPPHA_ENC1_INT_CODE	 MD_IRQID_PPPHA_ENC1_INT
#define 	IRQ_PPPHA_DEC0_INT_CODE	 MD_IRQID_PPPHA_DEC0_INT
#define 	IRQ_PPPHA_DEC1_INT_CODE	 MD_IRQID_PPPHA_DEC1_INT
#define 	IRQ_PTP_FSM_INT_CODE	 MD_IRQID_PTP_FSM_INT
#define 	IRQ_PTP_SLPCTL_EVENT_CODE	 MD_IRQID_PTP_SLPCTL_EVENT
#define 	IRQ_IEBIT_CHECK_IRQ0_CODE	 MD_IRQID_IEBIT_CHECK_IRQ0
#define 	IRQ_IEBIT_CHECK_IRQ1_CODE	 MD_IRQID_IEBIT_CHECK_IRQ1
#define 	IRQ_IEBIT_CHECK_IRQ2_CODE	 MD_IRQID_IEBIT_CHECK_IRQ2
#define 	IRQ_IEBIT_CHECK_IRQ3_CODE	 MD_IRQID_IEBIT_CHECK_IRQ3
#define 	IRQ_MDCIRQ_WDT0_CODE	 MD_IRQID_MDCIRQ_WDT0
#define 	IRQ_MDCIRQ_WDT1_CODE	 MD_IRQID_MDCIRQ_WDT1
#define 	IRQ_TRACE_INT_CODE	 MD_IRQID_TRACE_INT
#define 	IRQ_SI_CM_PCINT_CODE	 MD_IRQID_SI_CM_PCINT
#define 	IRQ_PLL_GEARHP_RDY_CODE	 MD_IRQID_PLL_GEARHP_RDY
#define 	IRQ_DCXO_RDY_WO_ACK_IRQ_CODE	 MD_IRQID_DCXO_RDY_WO_ACK_IRQ
#define 	IRQ_REQ_ABNORM_IRQ_CODE	 MD_IRQID_REQ_ABNORM_IRQ
#define 	IRQ_TOP_PLL_DSNS_IRQ_CODE	 MD_IRQID_TOP_PLL_DSNS_IRQ
#define 	IRQ_BT_CVSD_CODE	 MD_IRQID_BT_CVSD
#define 	IRQ_SSUSB_USB_MCU_CODE	 MD_IRQID_SSUSB_USB_MCU
#define 	IRQ_SSUSB_DEV_CODE	 MD_IRQID_SSUSB_DEV
#define 	IRQ_AP2MD_DVFS_BLOCK_ELM_CODE	 MD_IRQID_AP2MD_DVFS_BLOCK_ELM
#define 	IRQ_AP2MD_CCIF0_0_CODE	 MD_IRQID_AP2MD_CCIF0_0
#define 	IRQ_AP2MD_CCIF0_1_CODE	 MD_IRQID_AP2MD_CCIF0_1
#define 	IRQ_AP2MD_CCIF1_0_CODE	 MD_IRQID_AP2MD_CCIF1_0
#define 	IRQ_AP2MD_CCIF1_1_CODE	 MD_IRQID_AP2MD_CCIF1_1
#define 	IRQ_RXDFE_RXK_READBACK_CODE	 MD_IRQID_RXDFE_RXK_READBACK
#define 	IRQ_BR_DMA_IRQ_CODE	 MD_IRQID_BR_DMA_IRQ
#define 	IRQ_IDC_PM_INT_CODE	 MD_IRQID_IDC_PM_INT
#define 	IRQ_IDC_UART_IRQ_CODE	 MD_IRQID_IDC_UART_IRQ
#define 	IRQ_MDRTT_CODE	 MD_IRQID_MDRTT
#define 	IRQ_MDEVDO_CODE	 MD_IRQID_MDEVDO
#define 	IRQ_MDM2C_U3G_CODE	 MD_IRQID_MDM2C_U3G
#define 	IRQ_MDDFE_DUMP_CODE	 MD_IRQID_MDDFE_DUMP
#define 	IRQ_RAKE_CMIF_M2C_IRQ_0_CODE	 MD_IRQID_RAKE_CMIF_M2C_IRQ_0
#define 	IRQ_RAKE_CMIF_M2C_IRQ_1_CODE	 MD_IRQID_RAKE_CMIF_M2C_IRQ_1
#define 	IRQ_RAKE_CMIF_FPC_1X_IRQ_CODE	 MD_IRQID_RAKE_CMIF_FPC_1X_IRQ
#define 	IRQ_RAKE_CMIF_FOE_1X_IRQ_CODE	 MD_IRQID_RAKE_CMIF_FOE_1X_IRQ
#define 	IRQ_RAKE_CMIF_PD_DO_IRQ_CODE	 MD_IRQID_RAKE_CMIF_PD_DO_IRQ
#define 	IRQ_BIGRAM_IRQ_CODE	 MD_IRQID_BIGRAM_IRQ
#define 	IRQ_BR_BDGE_IRQ_CODE	 MD_IRQID_BR_BDGE_IRQ
#define 	IRQ_L1_LTE_SLEEP_IRQ_CODE	 MD_IRQID_L1_LTE_SLEEP_IRQ
#define 	IRQ_L1M_PHY_LTMR_INFORM_DONE_IRQ0_CODE	 MD_IRQID_L1M_PHY_LTMR_INFORM_DONE_IRQ0
#define 	IRQ_L1M_PHY_LTMR_INFORM_DONE_IRQ1_CODE	 MD_IRQID_L1M_PHY_LTMR_INFORM_DONE_IRQ1
#define 	IRQ_L1M_PHY_LTMR_IRQ_0_CODE	 MD_IRQID_L1M_PHY_LTMR_IRQ_0
#define 	IRQ_L1M_PHY_LTMR_IRQ_1_CODE	 MD_IRQID_L1M_PHY_LTMR_IRQ_1
#define 	IRQ_L1M_PHY_LTMR_IRQ_2_CODE	 MD_IRQID_L1M_PHY_LTMR_IRQ_2
#define 	IRQ_L1M_PHY_LTMR_IRQ_3_CODE	 MD_IRQID_L1M_PHY_LTMR_IRQ_3
#define 	IRQ_L1M_PHY_LTMR_IRQ_4_CODE	 MD_IRQID_L1M_PHY_LTMR_IRQ_4
#define 	IRQ_L1M_PHY_LTMR_IRQ_5_CODE	 MD_IRQID_L1M_PHY_LTMR_IRQ_5
#define 	IRQ_L1M_PHY_LTMR_IRQ_6_CODE	 MD_IRQID_L1M_PHY_LTMR_IRQ_6
#define 	IRQ_L1M_PHY_LTMR_IRQ_7_CODE	 MD_IRQID_L1M_PHY_LTMR_IRQ_7
#define 	IRQ_L1_LTE_WAKEUP_IRQ_CODE	 MD_IRQID_L1_LTE_WAKEUP_IRQ
#define 	IRQ_MDL1_TOPSM_IRQ_CODE	 MD_IRQID_MDL1_TOPSM_IRQ
#define 	IRQ_TDD_WAKEUP_IRQ_CODE	 MD_IRQID_TDD_WAKEUP_IRQ
#define 	IRQ_TDD_TIMER_L1D_1_IRQ_CODE	 MD_IRQID_TDD_TIMER_L1D_1_IRQ
#define 	IRQ_TDD_TIMER_L1D_2_IRQ_CODE	 MD_IRQID_TDD_TIMER_L1D_2_IRQ
#define 	IRQ_RTR_FRAME_IRQ_CODE	 MD_IRQID_RTR_FRAME_IRQ
#define 	IRQ_RTR_SLT_0_IRQ_CODE	 MD_IRQID_RTR_SLT_0_IRQ
#define 	IRQ_RTR_SLT_1_IRQ_CODE	 MD_IRQID_RTR_SLT_1_IRQ
#define 	IRQ_FDD_SLP_IRQ_CODE	 MD_IRQID_FDD_SLP_IRQ
#define 	IRQ_TDMA_WAKEUP_IRQ_CODE	 MD_IRQID_TDMA_WAKEUP_IRQ
#define 	IRQ_MD_DVFS_CTRL_IRQ_CODE	 MD_IRQID_MD_DVFS_CTRL_IRQ
#define 	IRQ_BSI_MM_I_IRQ_RFIC_CODE	 MD_IRQID_BSI_MM_I_IRQ_RFIC
#define 	IRQ_BSI_MM_I_IRQ_MIPI_CODE	 MD_IRQID_BSI_MM_I_IRQ_MIPI
#define 	IRQ_ST1X_CPINT_CODE	 MD_IRQID_ST1X_CPINT
#define 	IRQ_ST1x_HALF_CPINT_CODE	 MD_IRQID_ST1x_HALF_CPINT
#define 	IRQ_ST1x_CFG_CPINT_CODE	 MD_IRQID_ST1x_CFG_CPINT
#define 	IRQ_ST1x_WAKEUP_IRQ_CODE	 MD_IRQID_ST1x_WAKEUP_IRQ
#define 	IRQ_STDO_CPINT_CODE	 MD_IRQID_STDO_CPINT
#define 	IRQ_STDO_HALF_CPINT_CODE	 MD_IRQID_STDO_HALF_CPINT
#define 	IRQ_STDO_CFG_CPINT_CODE	 MD_IRQID_STDO_CFG_CPINT
#define 	IRQ_STDO_WAKEUP_IRQ_CODE	 MD_IRQID_STDO_WAKEUP_IRQ
#define 	IRQ_FREQM_IRQ_CODE	 MD_IRQID_FREQM_IRQ
#define 	IRQ_SPM2MD_DVFS_MDPERISYS_CODE	 MD_IRQID_SPM2MD_DVFS_MDPERISYS
#define 	IRQ_TXDFE_BB_IRQ_CODE	 MD_IRQID_TXDFE_BB_IRQ
#define 	IRQ_PCC_TOP_FULL_IRQ_CODE	 MD_IRQID_PCC_TOP_FULL_IRQ
#define 	IRQ_GPTM1_CODE	 MD_IRQID_GPTM1
#define 	IRQ_GPTM2_CODE	 MD_IRQID_GPTM2
#define 	IRQ_GPTM3_CODE	 MD_IRQID_GPTM3
#define 	IRQ_GPTM4_CODE	 MD_IRQID_GPTM4
#define 	IRQ_GPTM5_CODE	 MD_IRQID_GPTM5
#define 	IRQ_GPTM6_CODE	 MD_IRQID_GPTM6
#define 	IRQ_GPTM7_CODE	 MD_IRQID_GPTM7
#define 	IRQ_GPTM8_CODE	 MD_IRQID_GPTM8
#define 	IRQ_GPTM9_CODE	 MD_IRQID_GPTM9
#define 	IRQ_GPTM10_CODE	 MD_IRQID_GPTM10
#define 	IRQ_GPTM11_CODE	 MD_IRQID_GPTM11
#define 	IRQ_BUSMPU_IRQ_CODE	 MD_IRQID_BUSMPU_IRQ
#define 	IRQ_SW_LISR1_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_0
#define 	IRQ_SW_LISR2_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_1
#define 	IRQ_SW_LISR3_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_2
#define 	IRQ_SW_LISR4_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_3
#define 	IRQ_SW_LISR5_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_4
#define 	IRQ_SW_LISR6_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_5
#define 	IRQ_SW_LISR7_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_6
#define 	IRQ_SW_LISR8_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_7
#define 	IRQ_SW_LISR9_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_8
#define 	IRQ_SW_LISR10_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_9
#define 	IRQ_SW_LISR11_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_10
#define 	IRQ_SW_LISR12_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_11
#define 	IRQ_SW_LISR13_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_12
#define 	IRQ_SW_LISR14_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_13
#define 	IRQ_SW_LISR15_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_14
#define 	IRQ_SW_LISR16_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_15
#define 	IRQ_SW_LISR17_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_16
#define 	IRQ_SW_LISR18_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_17
#define 	IRQ_SW_LISR19_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_18
#define 	IRQ_SW_LISR20_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_19
#define 	IRQ_SW_LISR21_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_20
#define 	IRQ_SW_LISR22_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_21
#define 	IRQ_SW_LISR23_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_22
#define 	IRQ_SW_LISR24_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_23
#define 	IRQ_SW_LISR25_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_24
#define 	IRQ_SW_LISR26_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_25
#define 	IRQ_SW_LISR27_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_26
#define 	IRQ_SW_LISR28_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_27
#define 	IRQ_SW_LISR29_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_28
#define 	IRQ_SW_LISR30_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_29
#define 	IRQ_SW_LISR31_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_30
#define 	IRQ_SW_LISR32_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_31
#define 	IRQ_SW_LISR33_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_32
#define 	IRQ_SW_LISR34_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_33
#define 	IRQ_SW_LISR35_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_34
#define 	IRQ_SW_LISR36_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_35
#define 	IRQ_SW_LISR37_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_36
#define 	IRQ_SW_LISR38_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_37
#define 	IRQ_SW_LISR39_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_38
#define 	IRQ_SW_LISR40_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_39
#define 	IRQ_SW_LISR41_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_40
#define 	IRQ_SW_LISR42_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_41
#define 	IRQ_SW_LISR43_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_42
#define 	IRQ_SW_LISR44_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_43
#define 	IRQ_SW_LISR45_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_44
#define 	IRQ_SW_LISR46_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_45
#define 	IRQ_SW_LISR47_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_46
#define 	IRQ_SW_LISR48_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_47
#define 	IRQ_SW_LISR49_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_48
#define 	IRQ_SW_LISR50_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_49
#define 	IRQ_SW_LISR51_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_50
#define 	IRQ_SW_LISR52_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_51
#define 	IRQ_SW_LISR53_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_52
#define 	IRQ_SW_LISR54_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_53
#define 	IRQ_SW_LISR55_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_54
#define 	IRQ_SW_LISR56_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_55
#define 	IRQ_SW_LISR57_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_56
#define 	IRQ_SW_LISR58_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_57
#define 	IRQ_SW_LISR59_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_58
#define 	IRQ_SW_LISR60_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_59
#define 	IRQ_SW_LISR61_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_60
#define 	IRQ_SW_LISR62_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_61
#define 	IRQ_SW_LISR63_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_62
#define 	IRQ_SW_LISR64_CODE	 MD_IRQID_SW_TRIGGER_RESERVED_63
#define     MCU_BUS_DECERR_CODE  MD_IRQID_MCU_BUS_DECERR
#define     GIC0_FDCInt_CODE  MD_IRQID_GIC0_FDCInt
#define     GIC0_FDCInt_1_CODE  MD_IRQID_GIC0_FDCInt_1
#define     GIC0_PCInt_CODE  MD_IRQID_GIC0_PCInt
#define     GIC0_PCInt_1_CODE  MD_IRQID_GIC0_PCInt_1
#define     GIC0_TimerInt_CODE  MD_IRQID_GIC0_TimerInt
#define     GIC0_TimerInt_1_CODE  MD_IRQID_GIC0_TimerInt_1
#define     GIC1_FDCInt_CODE  MD_IRQID_GIC1_FDCInt
#define     GIC1_FDCInt_1_CODE  MD_IRQID_GIC1_FDCInt_1
#define     GIC1_PCInt_CODE  MD_IRQID_GIC1_PCInt
#define     GIC1_PCInt_1_CODE  MD_IRQID_GIC1_PCInt_1
#define     GIC1_TimerInt_CODE  MD_IRQID_GIC1_TimerInt
#define     GIC1_TimerInt_1_CODE  MD_IRQID_GIC1_TimerInt_1
#define     IRQ_EINT3_CODE  MD_IRQID_EINT3
#define     MCUMMU_INT_CODE  MD_IRQID_MCUMMU_INT
#define     SPRAM_DECERR_CODE  MD_IRQID_IA_DECERR
#define     RMPU_CTIREIGIN_CODE  MD_IRQID_RMPU_CTIREIGIN
#define     MDSM_CORE_PWR_CTRL_CODE  MD_IRQID_MDSM_CORE_PWR_CTRL
#define     AP2MD_MSDC0_CODE  MD_IRQID_AP2MD_MSDC0



/*
 * Define IRQ selection register assignment
 */
#define IRQSel()
//#define INVALID_ISR_ID           (0xFF)

#define INTERRUPT_PRIORITY_LIST \
/*  0 ~  7 */  69, 127,  67,  68,  66,  38,  32,  61, \
/*  8 ~ 15 */  88,  78, 127, 127, 127, 127, 127, 127, \
/* 16 ~ 23 */ 127, 110,  42, 127, 127, 127, 127, 127, \
/* 24 ~ 31 */ 127, 127,  64, 127, 127, 123, 124, 122, \
/* 32 ~ 39 */ 127,   6,   7, 127,   6, 127, 127, 127, \
/* 40 ~ 47 */ 127,  71,  41,  39,  62,  45, 127, 127, \
/* 48 ~ 55 */ 127, 127, 127, 127, 127, 127, 117, 118, \
/* 56 ~ 63 */ 119, 120, 126, 127,   6,   6,   6,   6, \
/* 64 ~ 71 */ 110, 110, 127, 127, 127, 127, 127, 127, \
/* 72 ~ 79 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/* 80 ~ 87 */  45, 127, 127, 127,  56,  54, 127, 115, \
/* 88 ~ 95 */  58,  36,  55,  33,  86,   6,   6,  51, \
/* 96 ~103 */  40,  47,  30, 127,  46,  43,  43,  43, \
/*104 ~111 */  46,  44,  28,  86,  27,  34,  35, 110, \
/*112 ~119 */  31,  49,  26,  64,  25, 127, 127,  59, \
/*120 ~127 */ 110,  58,  29,  59,  59,  58,  29,  90, \
/*128 ~135 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*136 ~143 */  70,  77,  44, 127, 127, 127, 127, 127, \
/*144 ~151 */ 110, 127, 110,   7,   7,  76,  71,  77, \
/*152 ~159 */  50,  51,  52,  79,  76,  77,  39,  72, \
/*160 ~167 */  74,  75,  48, 127, 127,  63,   8, 127, \
/*168 ~175 */ 110, 127, 110, 110,   6, 127, 127, 127, \
/*176 ~183 */  75,  75, 127, 127,   7, 111,   7, 111, \
/*184 ~191 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*192 ~199 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*200 ~207 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*208 ~215 */ 127, 110, 127, 110, 127, 110, 127, 110, \
/*216 ~223 */ 127, 110, 127, 110, 127, 127, 127,   6, \
/*224 ~231 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*232 ~239 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*240 ~247 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*248 ~255 */ 127, 127, 127, 127, 127, 127, 127, 127,

#if defined(__ESL_MASE__)

/* for OS ICC
   IRQ_SW_LISR1_CODE
   IRQ_SW_LISR2_CODE
   IRQ_SW_LISR3_CODE
   IRQ_SW_LISR4_CODE
*/
#define INTERRUPT_GROUP_LIST \
	/*	0 ~  7 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*	8 ~ 15 */  0,  0,  0,  1,  0,  0,  0,  0, \
	/* 16 ~ 23 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 24 ~ 31 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 32 ~ 39 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 40 ~ 47 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 48 ~ 55 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 56 ~ 63 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 64 ~ 71 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 72 ~ 79 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 80 ~ 87 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 88 ~ 95 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/* 96 ~103 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*104 ~111 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*112 ~119 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*120 ~127 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*128 ~135 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*136 ~143 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*144 ~151 */  1,  2,  3,  0,  0,  0,  0,  0, \
	/*152 ~159 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*160 ~167 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*168 ~175 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*176 ~183 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*184 ~191 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*192 ~199 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*200 ~207 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*208 ~215 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*216 ~223 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*224 ~231 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*232 ~239 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*240 ~247 */  0,  0,  0,  0,  0,  0,  0,  0, \
	/*248 ~255 */  0,  0,  0,  0,  0,  0,  0,  0
#else  /* __ESL_MASE__*/ 
#define INTERRUPT_GROUP_LIST \
	/*  0 ~  7 */  1,  4,  1,  1,  1,  1,  1,  0, \
	/*  8 ~ 15 */  1,  1, 17,  4,  4,  0,  4,  4, \
	/* 16 ~ 23 */  4,  1,  1,  4,  4,  4,  4,  4, \
	/* 24 ~ 31 */  4,  4,  1,  4,  4,  4,  4,  4, \
	/* 32 ~ 39 */  0,  5,  0,  4,  5,  4,  4,  4, \
	/* 40 ~ 47 */  4,  0,  1,  1,  1,  3,  4,  4, \
	/* 48 ~ 55 */  4,  4,  0,  0,  4,  4,  4,  4, \
	/* 56 ~ 63 */  4,  4,  4,  4,  5,  5,  5,  5, \
	/* 64 ~ 71 */  1,  3,  0,  4,  4,  4,  4,  4, \
	/* 72 ~ 79 */  4,  4,  4,  4,  4,  5,  4,  4, \
	/* 80 ~ 87 */  3,  4,  4,  4,  1,  1,  4,  4, \
	/* 88 ~ 95 */  1,  1,  1,  1,  1,  5,  5,  3, \
	/* 96 ~103 */  1,  3,  1,  4,  3,  1,  1,  1, \
	/*104 ~111 */  3,  3,  3,  0,  1,  1,  1,  1, \
	/*112 ~119 */  1,  3,  1,  1,  0,  4,  4,  1, \
	/*120 ~127 */  1,  1,  1,  1,  1,  1,  1,  0, \
	/*128 ~135 */  4,  4,  0,  4,  4,  4,  4,  4, \
	/*136 ~143 */  1,  1,  3,  4,  4,  4,  4,  0, \
	/*144 ~151 */  1,  2,  3,  0,  2,  1,  1,  1, \
	/*152 ~159 */  3,  1,  3,  1,  1,  1,  1,  1, \
	/*160 ~167 */  1,  1,  6,  5,  4,  1,  0,  0, \
	/*168 ~175 */  1,  2,  3,  1,  5, 16,  0,  2, \
	/*176 ~183 */  1,  1,  0,  2,  0,  1,  2,  3, \
	/*184 ~191 */  4,  4,  4,  4,  4,  4,  4,  4, \
	/*192 ~199 */  4,  4,  4,  4,  4,  4,  4,  4, \
	/*200 ~207 */  4,  4,  4,  4,  4,  4,  4,  4, \
	/*208 ~215 */  0,  1,  0,  1,  0,  1,  2,  3, \
	/*216 ~223 */  2,  3,  2,  3,  4,  4,  4,  4, \
	/*224 ~231 */  4,  4,  4,  4,  4,  4,  4,  4, \
	/*232 ~239 */  4,  4,  4,  4,  4,  4,  4,  4, \
	/*240 ~247 */  4,  4,  4,  4,  4,  4,  4,  4, \
	/*248 ~255 */  4,  4,  4,  4,  4,  4,  4,  4
#endif /* __ESL_MASE__ */

#if defined(__ESL_SINGLE_CORE__)
#define INTERRUPT_GROUP_M2V_LIST \
        0xD, 0xD ,0xD, 0xD, 0xD, 0xD ,0xD, 0xD, \
        0xD, 0xD ,0xD, 0xD, 0xD, 0xD ,0xD, 0xD,
#else
#define INTERRUPT_GROUP_M2V_LIST \
	/* Group0(0) */                0xE, \
	/* Group1(1) */                0xD, \
	/* Group2(2) */                0xB, \
	/* Group3(3) */                0x7, \
	/* Group4(0,2) */              0xA, \
	/* Group5(0,1,2,3) */          0x0, \
	/* Group6(1,3) */              0x5, \
	/* Group7 */                   0xF, \
	/* Group8 */                   0xF, \
	/* Group9 */                   0xF, \
	/* Group10 */                  0xF, \
	/* Group11 */                  0xF, \
	/* Group12 */                  0xF, \
	/* Group13 */                  0xF, \
	/* Group14*/                   0xF, \
	/* Group15 */                  0xF,
#endif

#define NMI_GROUP_M2V_LIST \
	/* Group0(exception usage) */  0xF, \
	/* Group1 */                   0x0,

#if defined(__MDCIRQ_WAIT_MODE_ENABLE__)
#define INTERRUPT_BROADCAST_TYPE \
	/*  0-31 */                0x040627FD, \
	/* 32-63 */                0xF00C3E17, \
	/* 64-95 */                0xFF312007, \
	/* 96-127 */               0xFF9FFFF7, \
	/* 128-159 */              0xFFFF8704, \
	/* 160-191 */              0x00FFDFFF, \
	/* 192-223 */              0x0FFF0000, \
	/* 224-255 */              0x00000000,
#else
#define INTERRUPT_BROADCAST_TYPE \
	/*  0-31 */                0x00000400, \
	/* 32-63 */                0xF0000012, \
	/* 64-95 */                0x60002000, \
	/* 96-127 */               0x00000000, \
	/* 128-159 */              0x00000000, \
	/* 160-191 */              0x0000101C, \
	/* 192-223 */              0x00000000, \
	/* 224-255 */              0x00000000,
#endif

#define INTERRUPT_TYPE \
	/*  0-31 */                0x00000400, \
	/* 32-63 */                0x00000000, \
	/* 64-95 */                0x00000000, \
	/* 96-127 */               0x00000000, \
	/* 128-159 */              0x00000000, \
	/* 160-191 */              0x00002000, \
	/* 192-223 */              0x00000000, \
	/* 224-255 */              0x00000000,

#define INTERRUPT_HRT_MT \
	/*  0-31 */                0x00000000, \
	/* 32-63 */                0x00000000, \
	/* 64-95 */                0x00000000, \
	/* 96-127 */               0x00000000, \
	/* 128-159 */              0x00000000, \
	/* 160-191 */              0x00000000, \
	/* 192-223 */              0x00000000, \
	/* 224-255 */              0x00000000,


#define INTERRUPT_TIMING_THRESHOLD \
	/*	VPE0 */  0xFFFFFFFF,\
	/*	VPE1 */  0xFFFFFFFF,\
	/*	VPE2 */  0xFFFFFFFF,\
	/*	VPE3 */  0xFFFFFFFF,


/*******************************************************************************
 * Special for display on SWDBG - MCU profiling
 *******************************************************************************/
#if (MDCIRQ_MAX_ISR_NUM<=256)
#define __CIRQ_MASK_REG_NR_8_NEW__
#else
#error "Unsupport mask number"
#endif

#define __ENABLE_SW_TRIGGER_INTERRUPT__

//#define EINT_TOTAL_CHANNEL 16

#define IRQ_MASK0              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x0000))
#define IRQ_MASK1              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x0004))
#define IRQ_MASK2              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x0008))
#define IRQ_MASK3              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x000C))
#define IRQ_MASK4              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x00010))
#define IRQ_MASK5              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x00014))
#define IRQ_MASK6              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x00018))
#define IRQ_MASK7              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x0001C))

typedef enum
{
    VPE_STATUS_DORMANT           = 0,
    VPE_STATUS_LISR_HIGHEST      = 1,
    VPE_STATUS_LISR_LOWEST       = 127,
    VPE_STATUS_HISR_TASK_HIGHEST = 128,
    VPE_STATUS_HISR_TASK_LOWEST  = 386, 
    VPE_STATUS_END               = 511,
} VPE_STATUS;

enum CIRQ_Code_Def_MET_Enum
{
    IRQ_OST = IRQ_OST_CODE,

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
};

enum GIC_Code_Def_MET_Enum
{
    GIC_END = 0,
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
};


#endif /* end of __INTRCTRL_MT6763_H__ */

