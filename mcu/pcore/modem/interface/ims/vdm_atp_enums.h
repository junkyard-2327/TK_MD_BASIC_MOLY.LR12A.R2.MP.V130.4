/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * Filename:
 * ------------
 *   vdm_atp_enums.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the enum between VDM and IMS Proxy.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 01 09 2018 yulong.chang
 * [MOLY00300875] ?于信?弱?，?打call時?成CSFB呼出需求
 * 	
 * 	[patch sync][ LR12 -> LR12A][ALPS03485188] ?于信?弱?，?打call時?成CSFB呼出需求
 *
 * 01 09 2018 yulong.chang
 * [MOLY00300875] ?于信?弱?，?打call時?成CSFB呼出需求
 * [patch sync][ LR12 -> LR12A][ALPS03485188] ?于信?弱?，?打call時?成CSFB呼出需求
 *
 * 07 14 2017 yulong.chang
 * [MOLY00259370] .EVADSMOD rearch
 * .
 *
 * 04 07 2017 jerry.cheng
 * [MOLY00240312] [93] CT VoLTE modem re-architecture
 * .[CT VoLTE]  hVoLTE / E911 configuration, VDM re-arch, extend AT+EVADMOD, AT+EMVSS
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] CLCCS .remove CLCC cnf check for unsync call(C2K) in order to fulfill C2K call waiting
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] STK/UTK
 *
 * 09 03 2015 lexel.yu
 * [MOLY00130859] [ViLTE] add AT+ECCP/AT+EIMSCCP in ADS
 * 	.
 *
 * 08 26 2015 ben.chiu
 * [MOLY00138217] [ViLTE] M0 migration ViLTE feature Interface
 * ViLTE interface patch back
 *
 * 12 05 2014 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	[MOLY00085717] [VoLTE] Android L release VoLTE refactory for VDM and ATP
 *****************************************************************************/

#ifndef _VDM_ATP_ENUMS_H_
#define _VDM_ATP_ENUMS_H_

#define VDM_ATP_CLCC_CLCCS_ERROR 255

typedef enum {
    CODE_NO_CARRIER = 0,
    CODE_ERROR,
    CODE_OK
} vdm_atp_at_cmd_result_enum;

typedef enum 
{
    VDM_ADS_MODE_AUTOMATIC = 0,     // LTE(IMS), WG(CS), 1x(C2K)
    VDM_ADS_MODE_CS_ONLY,           // WG(CS)
    VDM_ADS_MODE_3GPP_ONLY,         // LTE(IMS), WG(CS)
    VDM_ADS_MODE_3GPP2_ONLY,        // 1x(C2K)
    VDM_ADS_MODE_IMS_1xCS_ONLY,     // LTE(IMS), 1x(C2K)
    VDM_ADS_MODE_WGCS_1xCS_ONLY     // WG(CS), 1x(C2K)
} vdm_ads_mode_enum;

typedef enum 
{
    VDM_ADS_ECC_PREFERRED_DOMAIN_NONE = 0, // Not preferred
    VDM_ADS_ECC_PREFERRED_DOMAIN_WGCS,     // WG(CS)
    VDM_ADS_ECC_PREFERRED_DOMAIN_1xCS      // 1x(C2K)
} vdm_ads_ecc_preferred_domain_enum;

typedef enum 
{
    VDM_ADS_RESULT_REPORT_DISABLE = 0,
    VDM_ADS_RESULT_REPORT_ENABLE,
} vdm_ads_result_report_mode_enum;

typedef enum 
{
    VDM_ADS_RESULT_CS = 0,
    VDM_ADS_RESULT_IMS_VOLTE,
    VDM_ADS_RESULT_IMS_WIFI,
    VDM_ADS_RESULT_REJECT,
} vdm_ads_result_enum;

typedef enum 
{
    VDM_VIDEO_CAPABILITY_3GVT = 0x01,
    VDM_VIDEO_CAPABILITY_VILTE = 0x02,
    VDM_VIDEO_CAPABILITY_VIWIFI = 0x04,

    VDM_VIDEO_CAPABILITY_MAX = 0xff,
} vdm_video_capability_enum;

typedef enum
{
    VDM_TRK_TR_TRIGGER_MD_SEDN_STK_CALL_SETUP = 0,
    VDM_TRK_TR_TRIGGER_MD_SEDN_STK_CALL_SETUP_BUT_ICON_COULD_NOT_DSPL = 4
} vdm_stk_type_enum;

typedef enum
{
    VDM_SIGNAL_POWER_LEVEL_WEAK, //+ESLPIND:0, ...
    VDM_SIGNAL_POWER_LEVEL_GOOD, //+ESLPIND:1, ...
    VDM_SIGNAL_POWER_LEVEL_INVALID = 0xFF
}vdm_spl_ind_enum;//signal power level indication

#endif // _VDM_ATP_ENUMS_H_
