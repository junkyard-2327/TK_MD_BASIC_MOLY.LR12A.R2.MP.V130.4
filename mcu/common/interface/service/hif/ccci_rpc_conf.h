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
 *   ccci_rpc_conf.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   CCCI RPC OP ID definition
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 08 16 2017 chien-hui.lu
 * [MOLY00271091] [CCCI RPC] add RPC OP ID for get AP system property
 * [CCCI_RPC] add RPC OP ID for AP system property. (OPPO feature request)
 *
 * 07 04 2017 chien-hui.lu
 * [MOLY00260407] [MML1][RF] drdi index from ap dtsi
 * [CCCI RPC] add for DTSI query.
 *
 * 05 24 2017 chien-hui.lu
 * [MOLY00251502] [IPCORE][LHIFCORE] dynamic queue mapping
 * [CCCI_RPC][LHIFCORE] dynamic queue mapping
 *
 * 11 13 2014 cs.huang
 * [MOLY00084393] [UMOLY][CCCI] CCCI common header arrangement
 * Merging
 * 	
 * 	//UMOLY/TRUNK/UMOLY/mcu/pcore/interface/service/hif/ccci_ch_cfg.h
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/common/interface/service/hif/ccci_ch_cfg.h
 *
 * 06 11 2014 ian.cheng
 * [MOLY00069231] [TK6291] MOLY CCCI merge
 * 	TK6291 CCCI migration
 *
 * 03 18 2014 cs.huang
 * [MOLY00059872] [CCCI RPC] Add ADC/GPIO pin value op id, and adjust RF_CLK_BUFFER op id
 * [CCCI RPC] Add ADC/GPIO pin value op id, and adjust RF_CLK_BUFFER op id.
 *
 ****************************************************************************/
// Format: 	OPNAME,					OPID (2 bytes) 
X_CCCI_RPC_CONF(IPC_RPC_CPSVC_SECURE_ALGO_OP	 	, 	0x2001)	 
X_CCCI_RPC_CONF(IPC_RPC_GET_SECURE_RO_OP		, 	0x2002)	
X_CCCI_RPC_CONF(IPC_RPC_EINT_GETNUM_OP			,	0x4001) 
X_CCCI_RPC_CONF(IPC_RPC_GPIO_GETPIN_OP			,	0x4002)
X_CCCI_RPC_CONF(IPC_RPC_ADC_GETNUM_OP			,	0x4003)
X_CCCI_RPC_CONF(IPC_RPC_QUERY_EMI_OP			,	0x4004)
X_CCCI_RPC_CONF(IPC_RPC_EINT_GETATTRIBUTE_OP		,	0x4005)
X_CCCI_RPC_CONF(IPC_RPC_GPIO_GETVALUE_OP		,	0x4006)
X_CCCI_RPC_CONF(IPC_RPC_ADC_GETVALUE_OP			,	0x4007)
X_CCCI_RPC_CONF(IPC_RPC_RF_CLK_BUFFER_OP		,	0x4008)
X_CCCI_RPC_CONF(IPC_RPC_GPIO_ADC_GET_PINVALUE_OP 	,	0x4009)
X_CCCI_RPC_CONF(IPC_RPC_USIM2NFC_OP		 	,	0x400A)
X_CCCI_RPC_CONF(IPC_RPC_DSP_EMI_MPU_SETTING	 	,	0x400B)
X_CCCI_RPC_CONF(IPC_RPC_CCCI_QUEUE_MAPPING      ,   0x400C)
X_CCCI_RPC_CONF(IPC_RPC_LHIFCORE_QUEUE_MAPPING  ,   0x400D)
X_CCCI_RPC_CONF(IPC_RPC_DTSI_QUERY_OP           ,   0x400E)
X_CCCI_RPC_CONF(IPC_RPC_QUERY_AP_SYS_PROPERTY   ,   0x400F)

