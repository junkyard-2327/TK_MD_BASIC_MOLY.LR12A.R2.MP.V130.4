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
 * l4_nvram_def.c
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef NVRAM_NOT_PRESENT

#include "kal_public_api.h" 
#include "kal_general_types.h"
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"

#if defined(__MMI_FMI__)
#include "nvram_user_defs.h"
#include "custom_nvram_editor_data_item.h"
#include "custom_mmi_default_value.h"

#endif

#ifdef __PS_SERVICE__
#include "custom_gprs_pdp_default_qos_config.h" // Carlson, for PS_QOS_PROFILE_DEFAULT_REQ_XXX and PS_QOS_PROFILE_DEFAULT_MIN_XXX
#endif

/* Add include statement above this line */
#ifndef __OPTR_NONE__
#include "op_nvram_common_config.h"
#endif

/*
 *   User Headers & Default value
 */
#include "l4_nvram_def.h" 
#include "l4_nvram_editor.h" 

/*The chip doesn't support A5/3*/
#if defined( MT6208) || defined( MT6205) || defined( MT6218) || defined( MT6219) || \
    defined( MT6217) || defined( MT6227) || defined( MT6226) || defined( MT6228) || \
    defined(MT6205B) || defined(MT6226M) || defined(MT6218B)
#define __NO_SUPPORT_A5_3__
#endif
#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
    extern nvram_ef_mobile_broadband_provision_context_struct COMMON_NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_DEFAULT[];
#endif

// Default Values
#if !defined(NVRAM_NOT_PRESENT) && !defined(__L1_STANDALONE__)
#if !defined(EXTERNAL_MMI)
#ifdef __MAX_MAILBOX_NAME_UPDATA_TO_30__
const kal_uint8 COMMON_NVRAM_EF_SMSAL_MAILBOX_ADDR_DEFAULT[] = 
{
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* Alpha ID */
    0x00,   /* Length of BCD number */
    0xff,   /* TON and NPI */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* Dailling number */
    0xff,   /* capability/configuration identifier */
    0xff    /* extension 1 record identifier */
};
#else
const kal_uint8 COMMON_NVRAM_EF_SMSAL_MAILBOX_ADDR_DEFAULT[] = 
{
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* Alpha ID */
    0x00,   /* Length of BCD number */
    0xff,   /* TON and NPI */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* Dailling number */
    0xff,   /* capability/configuration identifier */
    0xff    /* extension 1 record identifier */
};
#endif
#endif

kal_uint8 const COMMON_NVRAM_EF_MS_SECURITY_DEFAULT[] =
{
/*
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // reg_ps_key
*/
    0x00,                                                   /* security_indication */
/*
    0x00,                                                   // auto_lock_item
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // np_code
    0x21, 0x43, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,         // np_key
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // nsp_code
    0x65, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,         // nsp_key
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00,                                       // np_of_sp
    0x00, 0x00, 0x00,                                       // np_of_cp
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // gid1
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // gid2
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // sp_key
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // cp_key
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // imsi_code
    0x33, 0x44, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,         // imsi_key
*/
    0x11, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,         // phone_key
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // last_imsi
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // pin1
    0x00,                                                   // pin1_valid
    0x00,                                                    // phone_lock_verified
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 // iccid
};

#ifdef __CPHS__
const kal_uint8 COMMON_NVRAM_EF_ALS_LINE_ID_DEFAULT[NVRAM_EF_ALS_LINE_ID_SIZE] =
{
    0x0, 0x0
};
#endif /* __CPHS__ */

const kal_uint8 COMMON_NVRAM_EF_MSCAP_DEFAULT[NVRAM_EF_MSCAP_SIZE] =
{
/* Byte 1~4 describes MS supported codec
 * 1. Codec types is coded as the definition in TS26.103, Sec. 6.2, Codec Bitmap
 * 2. Spec Codec Bitmap combines GSM and UMTS together, whereas we separate codec
 *    types according to different radio access technologies. So GAS can directly
 *    read first 2 bytes for speech capability.
 */
#if defined(__AMR_SUPPORT__)
    0x1f,   /* Supported speech version (FR,HR,EFR,AMR FR,AMR HR) */
#else
    0x07,   /* Supported speech version (FR,HR,EFR) */
#endif 
//0528_AMRWB: Restructure EF_MSCAP, put speech codec bytes together
#if defined(__AMRWB_LINK_SUPPORT__)
#if defined(__AMR_WB_WHITE_LIST__)
    0x02,  /* byte 2 for GSM supported codec, (FR AMRWB) */
#else
    0x00,  /* byte 2 for GSM supported codec */
#endif
#else
    0x00,  /* byte 2 for GSM supported codec */
#endif
    0x60,  /* byte 1 for FDD UMTS supported codec,(UMTS_AMR, UMTS_AMR2) */
#if defined(__AMRWB_LINK_SUPPORT__)
    0x04,  /* byte 2 for FDD GSM supported codec, (UMTS_AMRWB) */
#else
    0x00,  /* byte 2 for FDD UMTS supported codec */
#endif
#if defined(__CSD_T__) && defined(__CSD_NT__) && defined(__CSD_FAX__)
#ifdef __SYNC_HDLC_CSD__
    0x6b,   /* Supported data capability 1 (T & NT & FAX_T) */
#else
    0x63,   /* Supported data capability 1 (T & NT & FAX_T) */
#endif /* __SYNC_HDLC_CSD__ */
#elif defined(__CSD_T__) && defined(__CSD_NT__)
#ifdef __SYNC_HDLC_CSD__
    0x69,   /* Supported data capability 1 (T & NT) */
#else
    0x61,   /* Supported data capability 1 (T & NT) */
#endif /* __SYNC_HDLC_CSD__ */
#elif defined(__CSD_T__) && defined(__CSD_FAX__)
#ifdef __SYNC_HDLC_CSD__
    0x2b,   /* Supported data capability 1 (T & FAX_T) */
#else
    0x23,   /* Supported data capability 1 (T & FAX_T) */
#endif /* __SYNC_HDLC_CSD__ */
#elif defined(__CSD_NT__) && defined(__CSD_FAX__)
    0x43,   /* Supported data capability 1 (NT & FAX_T) */
#elif defined(__CSD_T__)
#ifdef __SYNC_HDLC_CSD__
    0x29,   /* Supported data capability 1 (ONLY T) */
#else
    0x21,   /* Supported data capability 1 (ONLY T) */
#endif /* __SYNC_HDLC_CSD__ */
#elif defined(__CSD_NT__)
    0x41,   /* Supported data capability 1 (ONLY NT) */
#elif defined(__CSD_FAX__)
    0x02,   /* Supported data capability 1 (ONLY FAX_T) */
#else
    0x00,   /* Supported data capability 1 (NO SUPPORT CSD) */
#endif
    0x00,   /* Supported data capability 2 */
#if defined(CSD_SUPPORT) || defined(__CSD_FAX__)
    0x1f,    /* Supported channel coding (2.4k,4.8k,9.6k,14.4k,HR) */
#else /* defined(CSD_SUPPORT) || defined(__CSD_FAX__) */
    0x00,
#endif /* defined(CSD_SUPPORT) || defined(__CSD_FAX__) */
#if defined(__DISABLE_CSCALL__)
    0x01, /*0x01 mean disable call , 0x00 mean not disable call*/
#else
    0x00,
#endif

    0x00, /* Spare byte reserved for GAS */

    0x05, /*mm_non_drx_timer_value(sec), default value is 5 sec*/

    0x60, /*MOLY00003437*/ /* byte 1 for TDD UMTS supported codec,(UMTS_AMR, UMTS_AMR2) */ 

#if defined(__AMRWB_LINK_SUPPORT__)
    0x04,  /* byte 2 for TDD GSM supported codec, (UMTS_AMRWB) */
#else
    0x00   /* byte 2 for TDD UMTS supported codec */
#endif

/************************************ !!! GAS OWNERS MUST READ !!! ************************************
    If 
       (1) you want to add a setting value in this NVRAM file (NVRAM_EF_MSCAP_LID), and
       (2) The setting can be also read in NVRAM_EF_CLASSMARK_RACAP_LID

    You have to notice that the setting value may be overlapped by some procedures (for example, 
    dynamic band setting), which will re-read NVRAM_EF_CLASSMARK_RACAP_LID. As a result, the
    setting you want will be again changed to the original value. To avoid this, you must additionally
    do extra handling in mrs_gas_decode_ms_capability(..., ..., kal_bool is_dynmc_cfg).
    If the input "is_dynmc_cfg == TRUE", do not re-write the setting. VAMOS setting capability is an 
    examlpe you can refer to.

    To ensure everyone knows this, please do NOT add code after this comment. 

************************************ !!! GAS OWNERS MUST READ !!! ************************************/
};
kal_uint8 const COMMON_NVRAM_EF_RAC_PREFERENCE_DEFAULT[] =
{
/* 1th byte is PLMN selection mode(1) | Preferred Service in NMO III(2) | GPRS auto attach(1) | Reserved(3)  | PLMN list preference(1) */    
    // 0x80 /* PLMN selection mode and Preferred Service in NMO III */
    //mtk02475: merge MODEM project specific default value via compile option, set GPRS always on for single SIM modem project.
    //mtk02475: for NWSIM environment, set to GPRS always on for executing GCF TTCN
#ifdef __UE_SIMULATOR__
    0xD0    /* GPRS auto attach - always on */
#else /* __UE_SIMULATOR__ */
#if defined(__MMI_FMI__) || defined(__GEMINI__)
    0xC0    /* GPRS when needed */
#else /* __MMI_FMI__ || __GEMINI__ */
    0xD0    /* GPRS always on */
#endif /* __MMI_FMI__ || GEMINI__ */
//#ifdef __DYNAMIC_ROAMING_SUPPORT__
    + 0x02
//#endif
#endif /* __UE_SIMULATOR__ */
//#ifdef __PLMN_LIST_PREF_SUPPORT__
    + 0x00 /*PLMN_LIST_PREFERENCE: 0: ACCURACY FIRST, 1: SPEED_FIRST*/
//#endif
#ifdef __UE_SIMULATOR__
    + 0x04 /* CSG_AUTO_SEARCH_PREFERENCE: 0x0: DISABLE, 0x4: ENABLE */
#else
    + 0x00 /* CSG_AUTO_SEARCH_PREFERENCE: 0x0: DISABLE, 0x4: ENABLE */
#endif
#ifdef __MM_INTEGRITY_PREF__
    + 0x00 /* MM INTEGRITY CHECK PREFERENCE: 0x00: integrity check enabled, 0x08: integrity check disabled when test SIM */
#endif
,

/* 2nd  byte is RAT mode*/
    0
#if defined(__CDMA2000_RAT__)
    | 0x10 //RAT_C2K
#endif
    /* always disable LTE RAT whenver __MM_DISABLE_L__ flag is set */
#ifndef __MM_DISABLE_L__
#if defined(__LTE_RAT__)
    | 0x04
#endif
#endif /* __MM_DISABLE_L__ */
#if defined(__UMTS_RAT__)
    | 0x02
#endif
#ifndef __L1_TASK_DISABLE__
#if defined(__GSM_RAT__)
    | 0x01
#endif
#endif /* __L1_TASK_DISABLE__ */
,

/* 3th  byte is C2K preferred RAT and MM preferred RAT */
    // MM preferred RAT 0x00 : RAT_NONE  0x01 : RAT_GSM 0x02 : RAT_UMTS 0x04 : RAT_LTE 
    0x00
    +
    // C2K preferred RAT 0x20 : RAT_1xRTT  0x40 : RAT_HRPD 0x60 : RAT_HYBRID  
    0x00
, 

/* 4th byte is HSPA preference + GPRS transfer preference*/
    0
#ifdef __HSPA_PREFERENCE_SETTING__
    //mtk02475: default turn on maximum HSPA capability
#if defined(__UMTS_R7__)
    + 0x30
#elif defined(__HSUPA_SUPPORT__)
    + 0x20
#elif defined(__HSDPA_SUPPORT__)
    + 0x10
#else
    + 0x00  // 0x00 for HSPA_OFF, 0x10 for HSDPA_ON, 0x20 for HSDPA_HSUPA_ON, 0x30 for HSDPA & HSUPA & HSPAPLUS ON
#endif 

    //TDD HAPS PREFERENCE default value
#if defined(__HSUPA_SUPPORT__)
    + 0x80
#elif defined(__HSDPA_SUPPORT__)
    + 0x40
#else
    + 0x00  // 0x00 for HSPA_OFF, 0x40 for HSDPA_ON, 0x80 for HSDPA_HSUPA_ON, 0xC0 for HSDPA & HSUPA & HSPAPLUS ON
#endif

#endif /* __HSPA_PREFERENCE_SETTING__ */
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
    + 0x00  // 0x00 for NO_PREEMPTION, 0x04 for PREEMPT_PEER_PS_TRANSFER
#endif /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
#ifdef __MONITOR_PAGE_DURING_TRANSFER__
    + 0x00  // 0 for GPRS_PREFER, 1 for CALL prefer, // 2 for AS_OPTIMAL(reserved)
#endif /* __MONITOR_PAGE_DURING_TRANSFER__ */
,  //end of character

/* 5th byte roaming related setting, default off */
    0
#ifdef __RAC_REPORT_LIMIT_AFTER_TRYALLPLMN__
    + 0x08  // 0x00 disable roaming broker, 0x08 enable roaming broker
#endif     
,  //end of character
    
/* 6th byte: mobility management IMS voice termination, default disabled */
    1
,// end of character

/* 7th byte: voice domain preference for UTRAN, default CS voice only */
    1
    ,
/* 8th byte: supported RAT mode that report to network, default value is the same as RAT mode */
    0
#if defined(__LTE_RAT__) && defined(__CDMA2000_RAT__)
    | 0x14 //RAT_LTE_C2K
#else /* the same as RAT mode */
#if defined(__LTE_RAT__) && !defined(__MM_DISABLE_L__)
  	| 0x04
#endif
#if defined(__UMTS_RAT__)
    | 0x02
#endif
#ifndef __L1_TASK_DISABLE__
#if defined(__GSM_RAT__) && !defined(__SGLTE__)
    | 0x01
#endif
#endif /* __L1_TASK_DISABLE__ */
#endif /* !defined(__LTE_RAT__) || !defined(__CDMA2000_RAT__) */
,
/* 9th byte: IR preferred RAT*/
// IR preferred RAT 0x00 : RAT_NONE  0x10 : RAT_GSM 0x20 : RAT_UMTS  
    0
};
kal_uint8 const COMMON_NVRAM_EF_SMSAL_COMMON_PARAM_DEFAULT[] =
{
#if defined (__CS_SERVICE__) && defined (__SMS_OVER_PS_SUPPORT__)
    0x01,               /* bearer service : CS Only */
#elif defined (__SMS_OVER_PS_SUPPORT__)
    0x00,               /* bearer service : PS Only */
#else
    0x01,               /* bearer service : CS Only */
#endif
    0x00, 0x00,         /* status report, reply path OFF */
    0x02,               /* VP: Relative format */
#ifdef __UNIFIED_MESSAGE_SIMBOX_SUPPORT__
    0x01, 0x01, 0x01,   /* mem1, mem2, mem3 */
#else/* __UNIFIED_MESSAGE_SIMBOX_SUPPORT__ */
    0x05, 0x05, 0x05,   /* mem1, mem2, mem3 */
#endif /* __UNIFIED_MESSAGE_SIMBOX_SUPPORT__ */
#ifdef __UE_SIMULATOR__
    0x01, 0x01,         /* CB setting - ON */
#else
    0x00, 0x01,         /* CB setting */
#endif
    0xFF,               /* AT default profile ID.0xFF:invalid profile ID and SMSAL auto select profile id */
    0x00,               /* First Octet */
    0x00,               /* Turn Off SMS FDN */
    0x00,               /* last_used_tp_mr */
    0xFF,               /* mem_capacity_available. Default 0xFF means memory available.*/
    0x00,               /* selected_msp */
    0x00                /* reserve */
};

/* Cell Broadcast Default Channel Setting. */
/* The channels set will not shown in MMI, but it will received CB if CB is turned on. */
/* This setting may be changed by customer. DON'T remove it. */
kal_uint8 const COMMON_NVRAM_EF_CB_DEFAULT_CH_DEFAULT[] =
{
    0xFF, 0xFF, /* default CH 1 , for example:  chanel 50 is 0x00, 0x32 */
    0xFF, 0xFF, /* default CH 2  */
    0xFF, 0xFF, /* default CH 3  */
    0xFF, 0xFF, /* default CH 4  */
    0xFF, 0xFF, /* default CH 5  */
    0xFF, 0xFF, /* default CH 6  */
    0xFF, 0xFF, /* default CH 7  */
    0xFF, 0xFF, /* default CH 8  */
    0xFF, 0xFF, /* default CH 9  */
    0xFF, 0xFF  /* default CH 10 */
};

#endif


extern const kal_uint32 NVRAM_EF_CUST_HW_LEVEL_TBL_DEFAULT[NVRAM_EF_CUST_HW_LEVEL_TBL_SIZE];
#if defined(__IC_SLT__)
static kal_uint8 const NVRAM_EF_IMEI_DEFAULT[] = {0x53, 0x93,  0x91, 0x20, 0x65, 0x08, 0x31, 0x70, 0x00, 0x00};
#endif
#if !defined(__SMS_STORAGE_BY_MMI__) && (SMS_PHONE_ENTRY > 0)
static kal_uint8 const NVRAM_EF_SMSAL_SMS_DEFAULT[] = {
    0xfe,                            /* status */
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF
};
#endif


/* Cell Broadcast Setting. */
/* The channels set will shown in MMI */
/* This setting may be changed by customer. DON'T remove it. */
static kal_uint8 const COMMON_NVRAM_EF_CB_CH_INFO_DEFAULT[] =
{
    0xFF, 0xFF, 0xFF, 0xFF, /* cbmir_mask, default all cbmir turn on */
    0xFF, 0xFF, 0xFF, 0xFF, /* cbmir_me_mask, default all cbmir turn on */
    0xFF, 0xFF, 0xFF, 0xFF, /* dcs_mask, default all dcs turn on */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* dcs[0] ~ dcs[4] */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* dcs[5] ~ dcs[9] */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* dcs[10] ~ dcs[14] */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* dcs[15] ~ dcs[19] */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* dcs[20] ~ dcs[24] */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* dcs[25] ~ dcs[29] */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF,/* cbmi_me_mask, default all ME cbmi turn on */
    0xFF, 0xFF, 0xFF, /* cbmi_sim_mask, default all SIM cbmi turn on */
#ifndef __CMAS__
    0xFF, 0xFF, /* CH 1 , for example:  chanel 50 is 0x00, 0x32 */
    0xFF, 0xFF, /* CH 2  */
    0xFF, 0xFF, /* CH 3  */
    0xFF, 0xFF, /* CH 4  */
    0xFF, 0xFF, /* CH 5  */
    0xFF, 0xFF, /* CH 6  */
    0xFF, 0xFF, /* CH 7  */
    0xFF, 0xFF, /* CH 8  */
    0xFF, 0xFF, /* CH 9  */
    0xFF, 0xFF, /* CH 10 */
    0xFF, 0xFF, /* CH 11 */
    0xFF, 0xFF, /* CH 12 */
    0xFF, 0xFF, /* CH 13 */
#else
    0x11, 0x12, /* CH 1 , for example:  chanel 50 is 0x00, 0x32 */
    0x11, 0x13, /* CH 2  */
    0x11, 0x14, /* CH 3  */
    0x11, 0x15, /* CH 4  */
    0x11, 0x16, /* CH 5  */
    0x11, 0x17, /* CH 6  */
    0x11, 0x18, /* CH 7  */
    0x11, 0x19, /* CH 8  */
    0x11, 0x1A, /* CH 9  */
    0x11, 0x1B, /* CH 10 */
    0x11, 0x1C, /* CH 11 */
    0x11, 0x1D, /* CH 12 */
    0x11, 0x1E, /* CH 13 */
#endif
    0xFF, 0xFF, /* CH 14 */
    0xFF, 0xFF, /* CH 15 */
    0xFF, 0xFF, /* CH 16 */
    0xFF, 0xFF, /* CH 17 */
    0xFF, 0xFF, /* CH 18 */
    0xFF, 0xFF, /* CH 19 */
    0xFF, 0xFF, /* CH 20 */
    0xFF, 0xFF, /* CH 21 */
    0xFF, 0xFF, /* CH 22 */
    0xFF, 0xFF, /* CH 23 */
    0xFF, 0xFF, /* CH 24 */
    0xFF, 0xFF, /* CH 25 */
    0xFF, 0xFF, /* CH 26 */
    0xFF, 0xFF, /* CH 27 */
    0xFF, 0xFF, /* CH 28 */
    0xFF, 0xFF, /* CH 29 */
    0xFF, 0xFF, /* CH 30 */
    0xFF, 0xFF, /* CH 31 */
    0xFF, 0xFF, /* CH 32 */
    0xFF, 0xFF, /* CH 33 */
    0xFF, 0xFF, /* CH 34 */
    0xFF, 0xFF, /* CH 35 */
    0xFF, 0xFF, /* CH 36 */
    0xFF, 0xFF, /* CH 37 */
    0xFF, 0xFF, /* CH 38 */
    0xFF, 0xFF, /* CH 39 */
    0xFF, 0xFF, /* CH 40 */
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 1*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 2*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 3*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 4*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 5*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 6*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 7*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 8*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 9*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 10*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 11*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 12*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 13*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 14*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 15*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 16*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 17*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 18*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 19*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 20*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 21*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 22*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 23*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 24*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 25*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 26*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 27*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 28*/
    0xFF, 0xFF, 0xFF, 0xFF, /*Range 29*/
    0xFF, 0xFF, 0xFF, 0xFF  /*Range 30*/
};


/* UEM*/
static kal_uint8 const NVRAM_EF_UEM_MANUFACTURE_DATA_DEFAULT[NVRAM_EF_UEM_MANUFACTURE_DATA_SIZE] = {
                   'M',  'T',  'K',  '1', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#ifdef __DM_MO_SUPPORT__
                   'M',  'T',  'K',  '3', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#else
                   'M',  'T',  'K',  '2', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                   'M',  'T',  'K',  '3', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                   'M',  'T',  'K',  '4', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                   'M',  'T',  'K',  '5', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                   'M',  'T',  'K',  '6', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                   'M',  'T',  'K',  '7', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
                  };





static kal_uint8 const NVRAM_EF_PS_CONFORMANCE_TESTMODE_DEFAULT[] ={
    /* High 8 bit stores Test mode. Eg. CTA/FTA/IOT...
         * And the value follow the rule like this:
         * 0x00  ==> Real NW
         * 0x01  ==> CTA
         * 0x02  ==> FTA
         * 0x03  ==> IOT
         * 0x04  ==> OPERATOR
         * ...
         */
    0x00,
    /* Low 24 bit store the Special setting according to each MODE
         */
    0x00,0x00,
#ifdef __UE_SIMULATOR__
    0x02
#else
    0x00
#endif
};


#if !defined(__NVRAM_SUPPORT_CUSTPACK__)// && !defined(__L1_STANDALONE__)

#ifdef __MEDIATEK_SMART_QOS__
nvram_ef_msq_list_struct const NVRAM_EF_MSQ_LIST_DEFAULT[] = 
{
    {
        /* is_msq_on */
        /* - Format: 0 (OFF), 1 (ON) */
        1,
        0, /* padding */
        
        /* nvram_ef_msq_entry_struct msq_entry[MSQ_MAX_ENTRY_COUNT] 
         * - Format: {<entry_id>,"<PLMN_ID>",<check_nw>,<check_sim>}
         */
        {
            /* 01 ~ 10. */
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
                                                                  
            /* 11 ~ 20. */                                        
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
                                                                  
            /* 21 ~ 30. */                                        
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
                                                                  
            /* 31 ~ 40. */                                        
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
                                                                  
            /* 41 ~ 50. */                                        
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},

            /* 51 ~ 60. */
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},

            /* 61 ~ 70. */
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},

            /* 71 ~ 80. */
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},

            /* 81 ~ 90. */

            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},

            /* 91 ~ 100. */
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0},
            {0,"",0,0,0}
        }
    }
} ;
#endif /* __MEDIATEK_SMART_QOS__ */

#endif  /* __MMI_FMI__*/


#if defined (__PS_SERVICE__) && defined (__MOD_TCM__) && defined (__EXT_PDP_CONTEXT_ON__)
#define TCM_CONTEXT_ID_DEFAULT_VALUE (0xFF)
#define TCM_NAS_PRIORITY_CONFIG_NOT_SPECIFIED (0x00)
#define TCM_EAB_OVERRIDE_CONFIG_NOT_SPECIFIED (0x00)

static nvram_ef_tcm_PDP_profile_record_struct const NVRAM_EF_TCM_CID_0_PROFILE_DEFAULT[] = {
    {
                  /* context_id, pdp_addr_type, pdp_addr_len. */
                  TCM_CONTEXT_ID_DEFAULT_VALUE, 0x21, 0x01,

                  /* addr_val[16]. */
                  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

                  /* apn_len. */
                  0x00,

                  /* apn[100]. */
                  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

                  /* pcomp_algo, dcomp_algo, context_type(0:PRIMARY_CONTEXT), primary_context_id . */
                  0x02, 0x02, 0x00, TCM_CONTEXT_ID_DEFAULT_VALUE,

                  /* req_n201u. */
                  0x0000,

                  /* AT_definition. */
                  0x01, /* 0000 0001. Only TCM_CGDCONT_DEFINED is set. Others are not. */

                  /* p_cscf_discovery, im_cn_signalling_flag, request_type. */
                  0x00, 0x00, 0x01,


                  /* nas_priority, eab_override */
                  TCM_NAS_PRIORITY_CONFIG_NOT_SPECIFIED, TCM_EAB_OVERRIDE_CONFIG_NOT_SPECIFIED,

                  /* initial_attach. */
                  0x01
    },             
};

static nvram_ef_tcm_PDP_profile_record_struct const NVRAM_EF_TCM_PDP_PROFILE_DEFAULT[] = {
    {
                  /* context_id, pdp_addr_type, pdp_addr_len. */
                  TCM_CONTEXT_ID_DEFAULT_VALUE, 0x21, 0x01,

                  /* addr_val[16]. */
                  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

                  /* apn_len. */
                  0x08,

                  /* apn[100]. */
                  {0x69, 0x6E, 0x74, 0x65, 0x72, 0x6E, 0x65, 0x74, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

                  /* pcomp_algo, dcomp_algo, context_type(0:PRIMARY_CONTEXT), primary_context_id . */
                  0x02, 0x02, 0x00, TCM_CONTEXT_ID_DEFAULT_VALUE,

                  /* req_n201u. */
                  0x0000,

                  /* AT_definition. */
                  0x01, /* 0000 0001. Only TCM_CGDCONT_DEFINED is set. Others are not. */

                  /* p_cscf_discovery, im_cn_signalling_flag, request_type. */
                  0x00, 0x00, 0x01,

                  /* nas_priority, eab_override */
                  TCM_NAS_PRIORITY_CONFIG_NOT_SPECIFIED, TCM_EAB_OVERRIDE_CONFIG_NOT_SPECIFIED,

                  /* initial_attach. */
                  0x00
    },
};

static nvram_ef_sic_list_struct NVRAM_EF_SIC_LIST_DEFAULT[] = {
    {
        /* is_tst_config_valid */
        KAL_FALSE,

        /* Field: <sim-plmn-id>,<rat>,<qos>,<pdnReqType>,<v4AddrAlloc>,
         *         <v4dns>,<v4mtu>,<bcm>,<etft>.
         */
        /* tst_config */
        {"000000", 0, {SIC_CHECK_NONE, SIC_RESULT_QOS_R6}, {SIC_CHECK_NONE, SIC_RESULT_PDNREQTYPE_NOT_CARRY}, {SIC_CHECK_NONE, SIC_RESULT_V4ADDRALLOC_NONE},
                      {SIC_CHECK_NONE, SIC_RESULT_V4REQ_NONE}, {SIC_CHECK_NONE, SIC_RESULT_V4REQ_NONE},
                      {SIC_CHECK_NONE, SIC_RESULT_BCMETFT_NONE}, {SIC_CHECK_NONE, SIC_RESULT_BCMETFT_NONE}},

        /* default_config */
        {"000000", 0, {SIC_CHECK_NONE, SIC_RESULT_QOS_R6}, {SIC_CHECK_NONE, SIC_RESULT_PDNREQTYPE_CAN_CARRY}, {SIC_CHECK_NONE, SIC_RESULT_V4ADDRALLOC_VIA_NASSIG},
                      {SIC_CHECK_NONE, SIC_RESULT_V4REQ_DNSV4}, {SIC_CHECK_NONE, SIC_RESULT_V4REQ_MTUV4},
                      {SIC_CHECK_NONE, SIC_RESULT_BCMETFT_BCM}, {SIC_CHECK_NONE, SIC_RESULT_BCMETFT_ETFT}},

        /* emergency_config */
        {"000000", 0, {SIC_CHECK_NONE, SIC_RESULT_QOS_R6}, {SIC_CHECK_NONE, SIC_RESULT_PDNREQTYPE_CAN_CARRY}, {SIC_CHECK_NONE, SIC_RESULT_V4ADDRALLOC_NONE},
                      {SIC_CHECK_NONE, SIC_RESULT_V4REQ_NONE}, {SIC_CHECK_NONE, SIC_RESULT_V4REQ_NONE},
                      {SIC_CHECK_NONE, SIC_RESULT_BCMETFT_NONE}, {SIC_CHECK_NONE, SIC_RESULT_BCMETFT_NONE}},

        /* entry[SIC_MAX_ENTRY_COUNT] - Need to increment NVRAM_EF_SIC_LIST_LID_VERNO */
        {
            {"46001", NVRAM_EF_RAT_GSM_UMTS,
                      {SIC_CHECK_NONE, SIC_RESULT_QOS_R6}, {SIC_CHECK_NONE, SIC_RESULT_PDNREQTYPE_NOT_CARRY}, {SIC_CHECK_NONE, SIC_RESULT_V4ADDRALLOC_NONE},
                      {SIC_CHECK_NONE, SIC_RESULT_V4REQ_DNSV4}, {SIC_CHECK_SIM_OR_NW, SIC_RESULT_V4REQ_NONE},
                      {SIC_CHECK_NONE, SIC_RESULT_BCMETFT_BCM}, {SIC_CHECK_SIM_OR_NW, SIC_RESULT_BCMETFT_NONE}},

            // 0 - 9:
            #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif

            {"000000", 0, {SIC_CHECK_NONE, SIC_RESULT_QOS_R6}, {SIC_CHECK_NONE, SIC_RESULT_PDNREQTYPE_NOT_CARRY}, {SIC_CHECK_NONE, SIC_RESULT_V4ADDRALLOC_NONE},
                          {SIC_CHECK_NONE, SIC_RESULT_V4REQ_NONE}, {SIC_CHECK_NONE, SIC_RESULT_V4REQ_NONE},
                          {SIC_CHECK_NONE, SIC_RESULT_BCMETFT_NONE}, {SIC_CHECK_NONE, SIC_RESULT_BCMETFT_NONE}},
        }
    },    
} ;
#endif /* #if defined (__PS_SERVICE__) && defined (__MOD_TCM__) && defined (__EXT_PDP_CONTEXT_ON__) */


static kal_uint8 const NVRAM_EF_CFU_FLAG_DEFAULT[] = {
                  0x55, 0x55
};

/* MT6291_DEV_Raphael NVRAM Re-structure Start (/) */
static nvram_ef_mm_data_struct const NVRAM_EF_MM_DATA_DEFAULT[] = {
	{
    	{
			{0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}
		}, //nvram_locigprs
    	/* MT6291_DEV_Raphael 24.008 CR# 1791 RTC Start (/) */
    	{
    		0x00, //is plmn in eq plmn
    		{
    			0x0f, 0x0f, 0x0f, 0x0f,	0x0f, 0x0f //t3246 plmn
    		},
    		0x00  //size of time_t, max is 8, check
    	}
    	/* MT6291_DEV_Raphael 24.008 CR# 1791 RTC End (/) */
	}
};

/* MT6291_DEV_Raphael NVRAM Re-structure End (/) */


static kal_uint8 const NVRAM_EF_CLASSMARK_RACAP_DEFAULT[] = {
       /*---BYTE 1 to BYTE 6 : From MS CLASSMARK3 -------------------------*/

    /*Evelyn 071127 add compile option for EDGE CARD: different power class*/
#if defined ( __EDGE_CARD_CLASS_12__ )

#if defined( __EGSM900__) && defined( __DCS1800__)
#if defined ( __DISABLE_EGSM__ )
                  0x50,  /* MS supports P-GSM and DCS band */
#else
                  0x60,  /* MS supports E-GSM and DCS band */
#endif                  
                  0x25,  /* E-GSM power class 5, DCS power class 2 */
#elif defined( __PGSM900__) && defined( __DCS1800__)
                  0x50,  /* MS supports P-GSM and DCS band */
                  0x25,  /* P-GSM power class 5, DCS power class 2 */
#elif defined( __EGSM900__)
                  0x60,  /* MS supports E-GSM band only */
                  0x05,  /* E-GSM power class 5 */
#elif defined (__PGSM900__)
                  0x60,  /* MS supports P-GSM band only */
                  0x05,  /* P-GSM power class 5 */
#elif defined ( __DCS1800__ )
                  0x40,  /* MS supports DCS band only */
                  0x02,  /* DCS power class 2 */
#else
                  0x00,  /* None of GSM900 and DCS1800 are supported */
                  0x00,
#endif

#else /*__EDGE_CARD_CALSS_12__  */
       /* Claire 030922 change : Support multiband compile option */
#if defined( __EGSM900__) && defined( __DCS1800__)
#if defined ( __DISABLE_EGSM__ )
                  0x50,  /* MS supports P-GSM and DCS band */
#else
                  0x60,  /* MS supports E-GSM and DCS band */
#endif                  
                  0x14,  /* E-GSM power class 4, DCS power class 1 */
#elif defined( __PGSM900__) && defined( __DCS1800__)
                  0x50,  /* MS supports P-GSM and DCS band */
                  0x14,  /* P-GSM power class 4, DCS power class 1 */
#elif defined( __EGSM900__)
                  0x60,  /* MS supports E-GSM band only */
                  0x04,  /* E-GSM power class 4 */
#elif defined (__PGSM900__)
                  0x60,  /* MS supports P-GSM band only */
                  0x04,  /* P-GSM power class 4 */
#elif defined ( __DCS1800__ )
                  0x40,  /* MS supports DCS band only */
                  0x01,  /* DCS power class 1 */
#else
                  0x00,  /* None of GSM900 and DCS1800 are supported */
                  0x00,
#endif

#endif /* __EDGE_CARD_CALSS_12__  */
                  0x01,  /* HSCSD multislot cap not present, UCS2 =1 */
                  /* Claire 030922 change : Support multiband compile option */

                  0x80 + /* Extended Measurement cap=1(1 bit), AGPS support(6 bit), GSM400/480(1 bit) */
#ifdef __AGPS_CONTROL_PLANE__
                  0x4e +
#endif /* __AGPS_CONTROL_PLANE__ */
#if defined( __GSM450__) || defined( __GSM480__)
                  0x01 +
#endif /* defined( __GSM450__) || defined( __GSM480__) */
                  0x00,
#if 0
#if defined( __GSM450__) || defined( __GSM480__)
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif /* __AGPS_CONTROL_PLANE__ */
#else
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif /* __AGPS_CONTROL_PLANE__ */
#endif
#endif

#if !defined( __GSM450__) && !defined( __GSM480__) && !defined( __GSM850__)
                  0x00,  /* GSM 400 and GSM 850 are not suported */
#elif defined( __GSM450__) && !defined( __GSM480__) && !defined( __GSM850__)
                 0x90,  /* GSM 450 is supported with power class 4*/
#elif !defined( __GSM450__) && defined( __GSM480__) && !defined( __GSM850__)
                 0x50,  /* GSM 480 is supported with power class 4*/
#elif !defined( __GSM450__) && !defined( __GSM480__) && defined( __GSM850__)
                 0x02,  /* GSM 850 is supported*/
#elif defined( __GSM450__) && defined( __GSM480__) && !defined( __GSM850__)
                 0xd0,  /* GSM 450 and 480 are supported with power class 4*/
#elif defined( __GSM450__) && !defined( __GSM480__) && defined( __GSM850__)
                 0x92,  /* GSM 450 with power class 4 and GSM 850 are supported*/
#elif !defined( __GSM450__) && defined( __GSM480__) && defined( __GSM850__)
                 0x52,  /* GSM 450 with power class 4 and GSM 850 are supported*/
#else
                 0xd2,   /* GSM 450, 480 with power class 4 and 850 are supported*/
#endif

/*Evelyn 071127 add compile option for EDGE CARD: different power class*/
#if defined( __EDGE_CARD_CLASS_12__ )

#if defined( __GSM850__) && defined( __PCS1900__)
                  0xb2,  /* GSM 850 is power class 5 ,PCS 1900 is suportedwith power class 2*/
#elif  defined( __PCS1900__)
                  0x12,  /* PCS 1900 is suported , power class 2 */
#elif  defined( __GSM850__)
                  0xa0,  /* GSM 850 is power class 5 */
#else
                  0x00,  /* Both GSM 850 and DCS 1900 are not supported */
#endif

#else /* __EDGE_CARD_CALSS_12__  */

#if defined( __GSM850__) && defined( __PCS1900__)
                  0x91,  /* GSM 850 is power class 4 ,PCS 1900 is suportedwith power class 1*/
#elif  defined( __PCS1900__)
                  0x11,  /* PCS 1900 is suported , power class 1 */
#elif  defined( __GSM850__)
                  0x80,  /* GSM 850 is power class 4 */
#else
                  0x00,  /* Both GSM 850 and DCS 1900 are not supported */
#endif

#endif /* __EDGE_CARD_CALSS_12__  */


       /*---BYTE 7 to BYTE 9 : From MS CLASSMARK2 -----------  */
                  0x30,  /* CM2 Byte1: ES_IND =1, Revision level =01, A51 algo supported---*/
                  0x58,  /* CM2 Byte2: PS cap =1, SS sreen indicator =01, SM cap =1 */

                  0x80 + /* CM2 Byte3: CM3 is supported */
#ifdef __AGPS_CONTROL_PLANE__
                  0x20 +
#endif /* __AGPS_CONTROL_PLANE__ */
/* bit 2 RESERVED for further usage */
                  0x02 +
#ifndef __DISABLE_A5_2__
                  0x01 +
#endif /* __DISABLE_A5_2__ */
#ifdef __CCBS_SUPPORT__
                  0x04 +
#endif /* __CCBS_SUPPORT__ */
                  0x00,

#if 0
/* under construction !*/
#if defined(__NO_SUPPORT_A5_3__) && defined(__DISABLE_A5_2__) && defined(__CCBS_SUPPORT__)
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif
#elif !defined(__NO_SUPPORT_A5_3__) && defined(__DISABLE_A5_2__) && defined(__CCBS_SUPPORT__)
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif
#elif defined(__NO_SUPPORT_A5_3__) && !defined(__DISABLE_A5_2__) && defined(__CCBS_SUPPORT__)
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif
#elif !defined(__NO_SUPPORT_A5_3__) && !defined(__DISABLE_A5_2__) && defined(__CCBS_SUPPORT__)
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#elif defined(__NO_SUPPORT_A5_3__) && defined(__DISABLE_A5_2__) && !defined(__CCBS_SUPPORT__)
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif
#elif !defined(__NO_SUPPORT_A5_3__) && defined(__DISABLE_A5_2__) && !defined(__CCBS_SUPPORT__)
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif
#elif defined(__NO_SUPPORT_A5_3__) && !defined(__DISABLE_A5_2__) && !defined(__CCBS_SUPPORT__)
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif
#else //!defined(__NO_SUPPORT_A5_3__) && !defined(__DISABLE_A5_2__) && !defined(__CCBS_SUPPORT__)
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#else
/* under construction !*/
#endif
#endif
#endif
       /*---BYTE 10 to BYTE 12 : From MS RA capability and MS network capability --*/

                           /* BYTE 10:
                            * bit 8: multislot capability present,
                            * bit 7 ~ 3: mutlislot capability,
                            * bit 2: GPRS extended Dynamic Allocation cap =1
                            * bit 1 : RL indicator = 0 => R98 MS, 1 => R99 MS */
#ifdef __R99__
   #if defined(__EDGE_CARD_CLASS_10__) || defined(__GPRS_MULTISLOT_CLASS_10__)
                  0xab,   /* Default GPRS multislot class 10, ext DA support, R99 */
   #else
                  0xb3,  /* Default GPRS multislot class 12, ext DA support, R99 */
   #endif
#else /* __R99__*/
   #if defined(__EDGE_CARD_CLASS_10__) || defined(__GPRS_MULTISLOT_CLASS_10__)
                  0xaa,   /* Default GPRS multislot class 10, ext DA support, R98 */
   #else
                  0xb2,  /* Default GPRS multislot class 12, ext DA support, R98 */
   #endif
#endif /* __R99__ */

                           /* BYTE 11:
                            * bit 8 : GEA1
                            * bit 7 : GEA2
                            * bit 6 : GEA3
                            * bit 5 : GEA4
                            * bit 4 : GEA5
                            * bit 3 : GEA6
                            * bit 2 : GEA7
                            * bit 1 : SM cap in GPRS =1 */
/* Peter 080520: change complie option */
#ifdef __NO_SUPPORT_A5_3__
                  0xc1, /* GEA1, 2 and SM cap support */
#else // The chip support A5/3(GEA/3)
    0xf1, /* GEA1, 2, 3, 4 and SM cap support */
#endif

                           /* BYTE 12: Lanslo 20060215: for selecting GPRS or EGPRS capability
                             * bit 8: PFC mode = 0b
                             * bit 7: EDGE multislot class present / EDGE support = 1b
                             * bit 6 ~ 2: EDGE multislot capability = 01100b
                             * bit 1: EDGE extended dynamic allocation capability = 1b
                             * Old value 0x80, new 0xd9(PFC on), 0x59 (PFC off) */

/* Evelyn 20090511: open the PFC support bit */
#ifdef __EGPRS_MODE__
   #if defined(__EDGE_CARD_CLASS_10__) || defined(__EDGE_MULTISLOT_CLASS_10__)
                  0xD5,   /* PFC on, EGPRS multislot class 10, Ext DA support */
   #else
                  0xD9,   /* PFC on, EGPRS multislot class 12, Ext DA support */
   #endif
#else /* __EGPRS_MODE__ */
   #ifdef __R99__
                  0x80,   /* PFC on */
   #else
                  0x00,   /* PFC off */
   #endif
#endif /* __EGPRS_MODE__ */

// Jelly 20090602 Use __EPSK_TX__
#if (defined(__EGPRS_MODE__) && defined(__EPSK_TX__))
                  0xAA,   /* BYTE 13: Evelyn 20090422: set 8PSK power class in NVRAM
                            * bit8~7 : 8psk radio cap 2 = E2 *
                            * bit6~5 : 8psk radio cap 1 = E2 *
                            * bit4~3 : 8psk 850 Band    = E2 *
                            * bit2~1 : 8psk 1900 Band   = E2 */
#else /* __EGPRS_MODE__ */
                  0x00,   /* No 8PSK power class */
#endif /* __EGPRS_MODE__ */

/* Modify for High multislot class */
#if defined (__MULTISLOT_CLASS_34__) || defined (__MULTISLOT_CLASS_45__)
#if defined(__EPSK_TX__) && !defined(__EPSK_TX_SW_SWITCH_OFF__)
                  0xEc    /* BYTE 14: Evelyn 20090905: set high multislot class
                           *  bit 8   : EPSK_TX
                           *  bit 7   : high multislot class present or not
                           *  bit 6~1 : binany coding for high multislot value
                           *  For example, high multislot class 44 = 0x6c
                           */
#else
                  0x6c    /* BYTE 14: Evelyn 20090905: set high multislot class
                           *  bit 8   : EPSK_TX
                           *  bit 7   : high multislot class present or not
                           *  bit 6~1 : binany coding for high multislot value
                           *  For example, high multislot class 44 = 0x6c
                           */
#endif
#else
#if defined(__EPSK_TX__) && !defined(__EPSK_TX_SW_SWITCH_OFF__)
                  0x80   /* BYTE 14: Evelyn 20090905: set high multislot class
                           *  bit 8   : EPSK_TX
                           */
#else
                  0x00   /* BYTE 14: Evelyn 20090905: set high multislot class
                           *  bit 8   : EPSK_TX
                           */
#endif
#endif

/* Byte 15: Rel4 Capabiility: GSM 750 cap(1 bit), TDD cap(1 bit), GERAN FP1(1 bit), Extended DTM(1 bit), 4 bits are spared */
                 ,0x00 +
#ifdef __UMTS_TDD128_MODE__
                  0x40 +
#endif /* __UMTS_TDD128_MODE__ */
#ifdef __GERAN_R4__
                  0x20 +
#endif /* __GERAN_R4__ */
                  0x00

/* Byte 16: Rel5 Capabiility: High Multislot(1 bit), GERAN lu Mode(1 bit), GERAN FP2(1 bit), GMSK Multislot(2 bit), 8PSK Multislot(2 bit), 1 bit is spared */
                 ,0x00

/* Byte 17: Rel6 Capabiility: T-GSM 400 cap(1 bit), T-GSM 900 cap(1 bit), SAIC(2 bit), DTM enhancements(1 bit), DTM GPRS High Multislot(1 bit), Repeated ACCH(1 bit), 1 bit is spared */
                 ,0x00 +
#ifdef __SAIC__
                  0x10 +
#endif /* __SAIC__ */
#ifdef __REPEATED_ACCH__
                  0x02 +
#endif /* __REPEATED_ACCH__ */
                  0x00

/* Byte 18: Rel7 Capabiility: GSM 710 cap(1 bit), T-GSM 810 cap(1 bit), Ciphering Mode Setting(1 bit), Additional Positioning cap(1 bit), 4 bits are spared */
                 ,0x00 +
#ifdef __POS_CAP_TRANSFER_PROCEDURE_SUPPORT__
                  0x10 +
#endif /* __POS_CAP_TRANSFER_PROCEDURE_SUPPORT__ */
                  0x00

/* Byte 19: Rel8 Capabiility: E-UTRA FDD(1 bit), E-UTRA TDD(1 bit), E-UTRA Measurement(1 bit), APBCR(1 bit), 4 bits are spared */
                 ,0x00 +
#ifdef __LTE_RAT__
                  0xe0 +
#endif /* __LTE_RAT__ */
#if defined(__23G_PRI_RESEL_SUPPORT__) || defined(__LTE_RAT__)
                  0x10 +
#endif /* defined(__23G_PRI_RESEL_SUPPORT__) || defined(__LTE_RAT__) */
                  0x00

/* Byte 20: Rel9 Capabiility: CSG reporting cap(1 bit), 7 bits are spared (VAMOS controlled via SBP)*/
                 ,0x00 +
#if defined(__VAMOS_2__) && defined(__CUSTOMIZE_VAMOS__)
                  0x40 +
#elif defined(__VAMOS_1__) && defined(__CUSTOMIZE_VAMOS__)
                  0x20 +
#else
                  0x00 +
#endif /* VAMOS */
                  0x00

/* Byte 21: Rel10 Capabiility: TIGHTER Cap(2 bit), Selective Ciphering of Downlink SACCH(1 bit), 5 bits are spared */
                 ,0x00

/* Byte 22: Rel11 Capabiility: CS to PS SRVCC from GERAN to UTRA(2 bit), CS to PS SRVCC from GERAN to E-UTRA(2 bit) */
/* Byte 22: Rel11 Capabiility: GERAN Network Sharing support(1 bit), E-UTRA Wideband RSRQ measurements support(1 bit), 2 bits are spared*/
                 ,0x04

/* Byte 23: Rel12 Capabiility: ER Band Support(1 bit), UTRA Multiple Frequency Band Indicators support(1 bit) */
/* Byte 23: Rel12 Capabiility: E-UTRA Multiple Frequency Band Indicators support(1 bit), Extended TSC Set Capability support(1 bit), */
/* Byte 23: Rel12 Capabiility: Extended EARFCN value range(1 bit), 3 bits are spared */ 
                 ,0x00 +
#ifdef __GERAN_R11__
#ifdef __LTE_RAT__
                 0x08 + /*Extended EARFCN value range = 1*/
#endif /* __LTE_RAT__ */
#endif /* __GERAN_R11__ */
                 0x00

};
#if defined(__ATCMD_ONOFF_CHECK__)
const nvram_atcmd_check_context_struct NVRAM_EF_ATCMD_ONOFF_CHECK_DEFAULT =
{
        {ATCMD_CHECK_ENABLE, 0x26598088, ATCMD_CHECK_ENABLE, 0X26598088},
        ATCMD_CHECK_ENABLE,  /* enable */
        {0x26598088, ATCMD_CHECK_ENABLE, 0x26598088}
};
#endif

#if defined(__ETWS_SUPPORT__)
const nvram_ef_etws_setting_struct NVRAM_EF_ETWS_SETTING_DEFAULT =
{
#ifdef __UE_SIMULATOR__
        0x01  /* always ON */
#else
        0x00
#endif
};
#endif


#ifdef __TC02_SECURITY_REQUIREMENT__
static kal_uint8 const NVRAM_EF_MM_IMSI_LOCI_GLOCI_DEFAULT[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //EF_IMSI
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, //EF_LOCI
    0xff, 0xff, 0xff, 0xff,	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff //EF_GLOCI
};
#endif /* __TC02_SECURITY_REQUIREMENT__ */

#ifdef __CHANNEL_LOCK__
static nvram_ef_ch_lock_info_struct const NVRAM_EF_CH_LOCK_INFO_DEFAULT[] =
{
    {
        KAL_TRUE,    // lock_supported
        0x00,        // lock_state ,INACTIVE
        { 0x00, 0x00 },
        { 0x00, 0x00 },
        { 0x00, 0x00 },
        CH_LOCK_IDLE_ONLY
    }
};
#endif /* __CHANNEL_LOCK__ */
static nvram_ef_power_level_threshold_info_struct const NVRAM_EF_POWER_LEVEL_THRESHOLD_INFO_DEFAULT[] =
{
    {
        0x00,        // mode
	    0x00,        // upper_threshold
	    0x00,        // tup
	    0x00,        // lower_threshold
	    0x00         // tlo
    }
};

#ifdef __SUBSIDY_LOCK__
const nvram_sml_sl_blob_context_struct NVRAM_EF_SUBSIDY_LOCK_DEFAULT = 
{
	0x02,	/* major version */
	0x00,	/* minor version */
	0x01,	/* protection algrithm */
	0x00,	/* lock operation */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},	/* imei */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},	/* timestamp */
	{0x00, 0x00},	/* length */
	{{0x00, 0x00}, {0x00, 0x00}, {0x00, 0x00}},	/* sml_sl_blob_meta_struct */
	/* sml_sl_blob_key_struct */
	/* NP */
	{{{0x00, 0x00, 0x00, 0x00},	/* iteration count */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},	/* salt */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},	/* hck */
	/* NS */
	{{0x00, 0x00, 0x00, 0x00},	/* iteration count */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},	/* salt */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},	/* hck */
	/* SP */
	{{0x00, 0x00, 0x00, 0x00},	/* iteration count */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},	/* salt */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}}},	/* hck */
	/* NP code */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	/* NSP code */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	/* SP code */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	/* Signature */
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}	
};

const nvram_sml_sl_odm_data_struct NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_DEFAULT = 
{
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* public key modulus */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x00}    /* public key exponent */
};

#endif /* __SUBSIDY_LOCK__ */

#if defined(__SMB_SIMME_LOCK__)
const nvram_sml_gblob_s_context_struct NVRAM_EF_SML_GBLOB_DEFAULT = 
{
    /* major version */
    0x00,

    /* minor version */
    0x00,

    /* device lock state */
    0x01,

    /* IMEI 1 */
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00},

    /* IMEI 2 */
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00},

    /* SML lock type */
    0xFF,

    /* SML sub lock type */
    {0x00, 0x00},

    /* Custom TLV Data 256 byte*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

    /* dev protection algo */
    0x00,

    /* dev max retry count */
    0x05,

    /* dev remain retry count */
    0x05,

    /* device interation cnt */
    {0x00, 0x00, 0x00, 0x00},

    /* device salt 32 bytes */
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00},

    /* device hck 64 bytes */
    {0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00},

    /* sig protection algo */
    0x00,

    /* Signature 256 byte*/
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

const nvram_sml_gblob_key_s_context_struct NVRAM_EF_SML_GBLOB_KEY_DEFAULT = 
{
    /* Key 1024 byte */
    {0x04, 0x00, 0x00, 0x00, // E key length, 4 bytes
     0x00, 0x01, 0x00, 0x00, // N key length, 4 bytes

     /* E Key 256 bytes */ 
     0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

     /* N Key 256 bytes */ 
     0xc1, 0x3f, 0xc9, 0xba, 0xfb, 0xa5, 0x0e, 0xc2, 0xe4, 0xf8, 
     0xcf, 0xc6, 0x51, 0xd1, 0x0e, 0x14, 0xe8, 0x9b, 0x53, 0x60, 
     0x3b, 0x0e, 0x37, 0x04, 0x40, 0xbc, 0x2b, 0x14, 0xd3, 0x67, 
     0x5a, 0x01, 0x28, 0x44, 0xcc, 0x34, 0x4d, 0x02, 0x93, 0xf8, 
     0x68, 0x6f, 0x25, 0xb2, 0x12, 0x1b, 0x5a, 0xac, 0xbb, 0x92, 
     0x8c, 0xbd, 0xdf, 0x0d, 0xc2, 0xb6, 0x0f, 0xf0, 0x39, 0x97, 
     0x6a, 0x36, 0xbb, 0x8c, 0x2f, 0x09, 0x5a, 0x85, 0xa2, 0x9e, 
     0xab, 0x60, 0x4e, 0xbb, 0xa6, 0x04, 0xd0, 0xb9, 0x5b, 0x36, 
     0xa3, 0xd4, 0xfe, 0xc7, 0x28, 0x2a, 0x45, 0x10, 0x50, 0x80, 
     0x2b, 0x65, 0x49, 0xe8, 0xa1, 0x42, 0x6a, 0x34, 0xd9, 0xc8, 
     0x01, 0x2a, 0x56, 0x34, 0xc2, 0xf5, 0x04, 0x5f, 0x2e, 0x02, 
     0x5e, 0x2e, 0xfa, 0x33, 0x58, 0x11, 0xf8, 0x27, 0x71, 0xd5, 
     0x82, 0x77, 0x7c, 0xf9, 0xcb, 0x7f, 0x59, 0xf6, 0xb0, 0xe1, 
     0x08, 0x61, 0x36, 0x8e, 0xcd, 0xf5, 0xf1, 0x35, 0x28, 0x63, 
     0x31, 0x0c, 0xff, 0x73, 0xf0, 0xb1, 0xf8, 0x6d, 0xea, 0x13, 
     0xf3, 0xe1, 0x3d, 0xa6, 0xe5, 0xad, 0xbc, 0x06, 0x66, 0xe0, 
     0x6e, 0xfe, 0x8f, 0x54, 0xe7, 0xc4, 0x84, 0x8d, 0x1c, 0x94, 
     0xb3, 0xf4, 0x2a, 0xa1, 0xb2, 0x9a, 0x65, 0x7e, 0x58, 0x6f, 
     0x4a, 0x78, 0x19, 0x34, 0xd3, 0x73, 0xee, 0x2f, 0x5d, 0xbb, 
     0x21, 0x5c, 0xdf, 0x73, 0x66, 0x9c, 0xd8, 0xe9, 0x61, 0x78, 
     0xc6, 0xa7, 0xb7, 0x03, 0xc5, 0xf6, 0xe1, 0x19, 0x96, 0x6b, 
     0xe7, 0x6d, 0xf4, 0x00, 0xa4, 0xbd, 0x36, 0x1f, 0x98, 0x9e, 
     0x2f, 0xcf, 0x29, 0x71, 0x80, 0x6a, 0x61, 0x65, 0x4e, 0x66, 
     0x37, 0xfa, 0x25, 0x34, 0x20, 0x40, 0xa0, 0x7b, 0x67, 0x6a, 
     0xc2, 0x34, 0xb5, 0x90, 0x5f, 0x9b, 0x70, 0x6c, 0x6d, 0x38, 
     0xb6, 0xb8, 0xd5, 0x79, 0x36, 0x6f,

     // Remained bytes: 504 bytes
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00}
};
#endif

#ifdef __CARRIER_RESTRICTION__

/* Carrier Restriction */
const nvram_smu_carrier_match_context_struct NVRAM_EF_L4_CARRIER_RESTRICTION_DEFAULT =
{
    /* magic head */
    SML_CARRIER_RESTRICTION_MAGIC_HEAD_VALUE,
    /* key */
#ifdef __DISABLE_CRRST_LOCK__
    {SMU_CRRST_KEY_STATE_UNLOCKED,{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}},
#else
    {SMU_CRRST_KEY_STATE_LOCKED,{0x21,0x43,0x65,0x87,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}},
#endif
    /* black list */
    /* num of valid sets */
    {{{0}, {0}, {0}, {0}, {0}},
    /* category N code */
    {0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF},
    /* category SPN code */
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    /* category IMSI prefix */
     {0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF},
    /* category GID1 code */
     {0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF},
    /* category GID2 code */
     {0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF}},
    /* white list */
    /* num of valid sets */
    {{{0}, {0}, {0}, {0}, {0}},
    /* category N code */
    {0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF},
    /* category SPN code */
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    /* category IMSI prefix */
     {0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF},
    /* category GID1 code */
     {0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF},
    /* category GID2 code */
     {0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,0xFF}},
    /* allow_all */
     0x01,
    /* carrier rest state */
     SMU_CARRIER_RESTRICTION_ENABLED,
    /* allowed_carriers_prioritized */
     0x00,
    /* multi_sim_policy */
     0x00,
    /* magic tail */
     SML_CARRIER_RESTRICTION_MAGIC_TAIL_VALUE
};

#endif /* __CARRIER_RESTRICTION__ */

// LID Declaration
ltable_entry_struct logical_data_item_table_l4[] =
{

#if !defined(__SMS_STORAGE_BY_MMI__) && (SMS_PHONE_ENTRY > 0)
    {
        NVRAM_EF_SMSAL_SMS_LID,
        NVRAM_EF_SMSAL_SMS_TOTAL,
        NVRAM_EF_SMSAL_SMS_SIZE,
        NVRAM_NORMAL(NVRAM_EF_SMSAL_SMS_DEFAULT),
    #if defined (__CCCIFS_SUPPORT__)
        NVRAM_CATEGORY_IMPORTANT_L4,
    #else
        NVRAM_CATEGORY_USER,
    #endif        
        NVRAM_ATTR_MULTIREC_READ | NVRAM_ATTR_GEN_DEFAULT
        #if defined (__CCCIFS_SUPPORT__)
         | NVRAM_ATTR_COMMITTED
        #endif
        ,
        "LD40",
        VER(NVRAM_EF_SMSAL_SMS_LID)
    },
#endif

#if !defined(EXTERNAL_MMI)
    {
        NVRAM_EF_SMSAL_MAILBOX_ADDR_LID,
        NVRAM_EF_SMSAL_MAILBOX_ADDR_TOTAL,
        NVRAM_EF_SMSAL_MAILBOX_ADDR_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_SMSAL_MAILBOX_ADDR_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE,
        "LD41",
        VER(NVRAM_EF_SMSAL_MAILBOX_ADDR_LID)
    },
#endif

    {
        NVRAM_EF_SMSAL_COMMON_PARAM_LID,
        NVRAM_EF_SMSAL_COMMON_PARAM_TOTAL,
        NVRAM_EF_SMSAL_COMMON_PARAM_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_SMSAL_COMMON_PARAM_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE,
        "LD42",
        VER(NVRAM_EF_SMSAL_COMMON_PARAM_LID)
    },

    {
        NVRAM_EF_SMSAL_SMSP_LID,
        NVRAM_EF_SMSAL_SMSP_TOTAL,
        NVRAM_EF_SMSAL_SMSP_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_MULTIREC_READ,
        "LD43",
        VER(NVRAM_EF_SMSAL_SMSP_LID)
    },

    {
        NVRAM_EF_SMSAL_MWIS_LID,
        NVRAM_EF_SMSAL_MWIS_TOTAL,
        NVRAM_EF_SMSAL_MWIS_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD44",
        VER(NVRAM_EF_SMSAL_MWIS_LID)
    },

    {
        NVRAM_EF_CB_DEFAULT_CH_LID,
        NVRAM_EF_CB_DEFAULT_CH_TOTAL,
        NVRAM_EF_CB_DEFAULT_CH_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_CB_DEFAULT_CH_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE,
        "LD45",
        VER(NVRAM_EF_CB_DEFAULT_CH_LID)
    },

    {
        NVRAM_EF_CB_CH_INFO_LID,
        NVRAM_EF_CB_CH_INFO_TOTAL,
        NVRAM_EF_CB_CH_INFO_SIZE,
        NVRAM_NORMAL(COMMON_NVRAM_EF_CB_CH_INFO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD46",
        VER(NVRAM_EF_CB_CH_INFO_LID)
    },

    #if defined (__PS_SERVICE__) && defined (__MOD_TCM__) && defined (__EXT_PDP_CONTEXT_ON__)
    {
        NVRAM_EF_TCM_CID_0_PROFILE_LID,
        NVRAM_EF_TCM_CID_0_PROFILE_TOTAL,
        NVRAM_EF_TCM_CID_0_PROFILE_SIZE,
        NVRAM_NORMAL(NVRAM_EF_TCM_CID_0_PROFILE_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD47",
        VER(NVRAM_EF_TCM_CID_0_PROFILE_LID)
    },

    {
        NVRAM_EF_TCM_PDP_PROFILE_LID,
        NVRAM_EF_TCM_PDP_PROFILE_TOTAL,
        NVRAM_EF_TCM_PDP_PROFILE_SIZE,
        NVRAM_NORMAL(NVRAM_EF_TCM_PDP_PROFILE_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD48",
        VER(NVRAM_EF_TCM_PDP_PROFILE_LID)
    },

    {
        NVRAM_EF_SIC_LIST_LID,
        NVRAM_EF_SIC_LIST_TOTAL,
        NVRAM_EF_SIC_LIST_SIZE,
        NVRAM_NORMAL(NVRAM_EF_SIC_LIST_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD7G",
        VER(NVRAM_EF_SIC_LIST_LID)
    },
    #endif // ~ #if defined (__PS_SERVICE__) && defined (__MOD_TCM__) && defined (__EXT_PDP_CONTEXT_ON__)

    #ifdef __PS_SERVICE__
    {
        NVRAM_EF_PAM_PIB_PROFILE_LID,
        NVRAM_EF_PAM_PIB_PROFILE_TOTAL,
        NVRAM_EF_PAM_PIB_PROFILE_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD4G",
        VER(NVRAM_EF_PAM_PIB_PROFILE_LID)
    },
    #endif /* __PS_SERVICE__ */

    {
        NVRAM_EF_CFU_FLAG_LID,
        NVRAM_EF_CFU_FLAG_TOTAL,
        NVRAM_EF_CFU_FLAG_SIZE,
        NVRAM_NORMAL(NVRAM_EF_CFU_FLAG_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD49",
        VER(NVRAM_EF_CFU_FLAG_LID)
    },

    {
    /* MT6291_DEV_Raphael NVRAM Re-structure Start (/) */
        NVRAM_EF_MM_DATA_LID,
        NVRAM_EF_MM_DATA_TOTAL,
        NVRAM_EF_MM_DATA_SIZE,
        NVRAM_NORMAL(NVRAM_EF_MM_DATA_DEFAULT),
    /* MT6291_DEV_Raphael NVRAM Re-structure End (/) */
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
#ifdef __UMTS_FDD_MODE__
        "LD4A",
#else
        "LD4E",
#endif
        /* MT6291_DEV_Raphael NVRAM Re-structure Start (/) */
        VER(NVRAM_EF_MM_DATA_LID)
        /* MT6291_DEV_Raphael NVRAM Re-structure End (/) */
    },

#if defined (__CPHS__) || defined (__CCM_NO_RESET__)
    {
        NVRAM_EF_ALS_LINE_ID_LID,
        NVRAM_EF_ALS_LINE_ID_TOTAL,
        NVRAM_EF_ALS_LINE_ID_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_ALS_LINE_ID_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE,
        "LD4C",
        VER(NVRAM_EF_ALS_LINE_ID_LID)
    },
#endif/* (__CPHS__) || (__CCM_NO_RESET__)*/

    {
        NVRAM_EF_MSCAP_LID,
        NVRAM_EF_MSCAP_TOTAL,
        NVRAM_EF_MSCAP_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_MSCAP_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE,
        "LD4D",
        VER(NVRAM_EF_MSCAP_LID)
    },

    {
        NVRAM_EF_CLASSMARK_RACAP_LID,
        NVRAM_EF_CLASSMARK_RACAP_TOTAL,
        NVRAM_EF_CLASSMARK_RACAP_SIZE,
        NVRAM_NORMAL(NVRAM_EF_CLASSMARK_RACAP_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
#ifdef __UMTS_TDD128_MODE__
        "LD16",
#else
        "LD17",
#endif
        VER(NVRAM_EF_CLASSMARK_RACAP_LID)
    },



#if defined(__ATCMD_ONOFF_CHECK__)
    {
        NVRAM_EF_ATCMD_ON_OFF_CHECK_LID,
        NVRAM_EF_ATCMD_ON_OFF_CHECK_TOTAL,
        NVRAM_EF_ATCMD_ON_OFF_CHECK_SIZE,
        NVRAM_NORMAL(&NVRAM_EF_ATCMD_ONOFF_CHECK_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_CONFIDENTIAL
        #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
         | NVRAM_ATTR_MSP | NVRAM_ATTR_MULTIPLE
        #endif
        ,
        "LD30",
        VER(NVRAM_EF_ATCMD_ON_OFF_CHECK_LID)
    },
#endif



#if defined(__ETWS_SUPPORT__)
    {
            NVRAM_EF_ETWS_SETTING_LID,
            NVRAM_EF_ETWS_SETTING_TOTAL,
            NVRAM_EF_ETWS_SETTING_SIZE,
            NVRAM_NORMAL(&NVRAM_EF_ETWS_SETTING_DEFAULT),
            NVRAM_CATEGORY_USER,
            NVRAM_ATTR_AVERAGE,
            "LD32",
            VER(NVRAM_EF_ETWS_SETTING_LID)
    },
#endif

    {
            NVRAM_EF_CSM_ESSP_LID,
            NVRAM_EF_CSM_ESSP_TOTAL,
            NVRAM_EF_CSM_ESSP_SIZE,
            NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
            NVRAM_CATEGORY_USER,
            NVRAM_ATTR_AVERAGE,
            "LD35",
            VER(NVRAM_EF_CSM_ESSP_LID)
    },

/* UEM*/
    {
        NVRAM_EF_CUST_HW_LEVEL_TBL_LID,
        NVRAM_EF_CUST_HW_LEVEL_TBL_TOTAL,
        NVRAM_EF_CUST_HW_LEVEL_TBL_SIZE,
    #if defined(__MMI_FMI__)
        NVRAM_NORMAL((const kal_uint8 *)NVRAM_EF_CUST_HW_LEVEL_TBL_DEFAULT),
    #else
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
    #endif
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_OTA_RESET,
        "LD67",
        VER(NVRAM_EF_CUST_HW_LEVEL_TBL_LID)
    },

    {
        NVRAM_EF_UEM_MANUFACTURE_DATA_LID,
        NVRAM_EF_UEM_MANUFACTURE_DATA_TOTAL,
        NVRAM_EF_UEM_MANUFACTURE_DATA_SIZE,
        NVRAM_NORMAL(NVRAM_EF_UEM_MANUFACTURE_DATA_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD68",
        VER(NVRAM_EF_UEM_MANUFACTURE_DATA_LID)
    },

    {
        NVRAM_EF_UEM_RMI_DATA_LID,
        NVRAM_EF_UEM_RMI_DATA_TOTAL,
        NVRAM_EF_UEM_RMI_DATA_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD69",
        VER(NVRAM_EF_UEM_RMI_DATA_LID)
    },

    {
        NVRAM_EF_IMEI_IMEISV_LID,
        NVRAM_EF_IMEI_IMEISV_TOTAL,
        NVRAM_EF_IMEI_IMEISV_SIZE,
	#if defined(__IC_SLT__)
	NVRAM_NORMAL(NVRAM_EF_IMEI_DEFAULT),
	#else
	NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
	#endif

    #ifdef __NVRAM_OTP__
        NVRAM_CATEGORY_OTP,
    #elif defined(__NVRAM_CUSTOM_DISK__)
        NVRAM_CATEGORY_CUSTOM_DISK,
    #else
        NVRAM_CATEGORY_IMPORTANT,
    #endif

    #if defined(__NVRAM_OTP__) || defined(__NVRAM_CUSTOM_DISK__)
        NVRAM_ATTR_AVERAGE,
    #else
        NVRAM_ATTR_WRITEPROTECT | NVRAM_ATTR_AVERAGE | NVRAM_ATTR_CONFIDENTIAL 
        #if defined (__CCCIFS_SUPPORT__)
         | NVRAM_ATTR_COMMITTED
        #endif
        ,
    #endif
        "LD0B",
        VER(NVRAM_EF_IMEI_IMEISV_LID)
    },

    {
        NVRAM_EF_SML_LID,
        NVRAM_EF_SML_TOTAL,
        NVRAM_EF_SML_SIZE,
        NVRAM_SECUPACK(&NVRAM_EF_SML_DEFAULT),
    #ifdef __SMART_PHONE_MODEM__
        NVRAM_CATEGORY_SECUPACK | NVRAM_CATEGORY_IMPORTANT_L4,
    #elif defined(__CUSTOMER_TC01_DISK__) && !defined(WISDOM_MMI)
        NVRAM_CATEGORY_SECUPACK,
    #else
        NVRAM_CATEGORY_SECUPACK | NVRAM_CATEGORY_IMPORTANT,
    #endif
        NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_FAULT_ASSERT | NVRAM_ATTR_GEN_DEFAULT
        #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
        | NVRAM_ATTR_MSP | NVRAM_ATTR_MULTIPLE
        #endif
        #if defined (__CCCIFS_SUPPORT__)
        | NVRAM_ATTR_COMMITTED
        #endif
        ,
        "LD33",
        VER(NVRAM_EF_SML_LID)
    },

#ifdef __SMART_PHONE_MODEM__
    {
        NVRAM_EF_SIM_LOCK_LID,
        NVRAM_EF_SIM_LOCK_TOTAL,
        NVRAM_EF_SIM_LOCK_SIZE,
        NVRAM_SECUPACK(&NVRAM_EF_SML_TMO_DEFAULT),
        NVRAM_CATEGORY_SECUPACK | NVRAM_CATEGORY_IMPORTANT_L4,
        NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_FAULT_ASSERT | NVRAM_ATTR_GEN_DEFAULT 
        #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
         | NVRAM_ATTR_MSP | NVRAM_ATTR_MULTIPLE
        #endif
        #if defined (__CCCIFS_SUPPORT__)
         | NVRAM_ATTR_COMMITTED
        #endif
        ,
        "LD34",
        VER(NVRAM_EF_SIM_LOCK_LID)
    },
#endif


    {
        NVRAM_EF_MS_SECURITY_LID,
        NVRAM_EF_MS_SECURITY_TOTAL,
        NVRAM_EF_MS_SECURITY_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_MS_SECURITY_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_CONFIDENTIAL,
        "LD6G",
        VER(NVRAM_EF_MS_SECURITY_LID)
    },


    {
        NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID,
        NVRAM_EF_PS_CONFORMANCE_TESTMODE_TOTAL,
        NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE,
#ifdef __UE_SIMULATOR__
        NVRAM_NORMAL(NVRAM_EF_PS_CONFORMANCE_TESTMODE_DEFAULT),
#else
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
#endif
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD6U",
        VER(NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID)
    },

#if !defined(L4_NOT_PRESENT)
#ifndef __PHB_STORAGE_BY_MMI__
    {
        NVRAM_EF_PHB_LID,
        NVRAM_EF_PHB_TOTAL,
        NVRAM_EF_PHB_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_MULTIREC_READ,
        "LD6V",
        VER(NVRAM_EF_PHB_LID)
    },
#endif
#endif

//__MOBILE_BROADBAND_PROVISION_CONTEXT__
#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
    {
        NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID,
        NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_TOTAL,
        NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_MULTI_DEFAULT,
        "LD70",
        VER(NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID)
        //"MB PROVISION CONTEXT",
        //NVRAM_APP_RESERVED
    },
#endif /* __MOBILE_BROADBAND_PROVISI*/


#if !defined(__PHB_NO_CALL_LOG__) & !defined(__L1_STANDALONE__)
    {
          NVRAM_EF_PHB_LN_ENTRY_LID,
          NVRAM_EF_PHB_LN_ENTRY_TOTAL,
          NVRAM_EF_PHB_LN_ENTRY_SIZE,
          NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
          NVRAM_CATEGORY_USER,
          NVRAM_ATTR_AVERAGE,
          "LD6H",
          VER(NVRAM_EF_PHB_LN_ENTRY_LID)
    },

    {
          NVRAM_EF_PHB_LN_TYPE_SEQ_LID,
          NVRAM_EF_PHB_LN_TYPE_SEQ_TOTAL,
          NVRAM_EF_PHB_LN_TYPE_SEQ_SIZE,
          NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
          NVRAM_CATEGORY_USER,
          NVRAM_ATTR_AVERAGE,
          "LD6I",
          VER(NVRAM_EF_PHB_LN_TYPE_SEQ_LID)
    },

#endif /* !defined(__PHB_NO_CALL_LOG__) & !defined(__L1_STANDALONE__) */

//__MEDIATEK_SMART_QOS__
#ifdef __MEDIATEK_SMART_QOS__
    {
        NVRAM_EF_MSQ_LIST_LID,
        NVRAM_EF_MSQ_LIST_TOTAL,
        NVRAM_EF_MSQ_LIST_SIZE,
        NVRAM_NORMAL(NVRAM_EF_MSQ_LIST_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD74",
        VER(NVRAM_EF_MSQ_LIST_LID)
    },
#endif /* __MEDIATEK_SMART_QOS__ */
    {
        NVRAM_EF_RAC_PREFERENCE_LID,
        NVRAM_EF_RAC_PREFERENCE_TOTAL,
        NVRAM_EF_RAC_PREFERENCE_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_RAC_PREFERENCE_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE,
        "LD6S",
        VER(NVRAM_EF_RAC_PREFERENCE_LID)
    },

#ifdef __TC02_SECURITY_REQUIREMENT__
    {
        NVRAM_EF_MM_IMSI_LOCI_GLOCI_LID,
        NVRAM_EF_MM_IMSI_LOCI_GLOCI_TOTAL,
        NVRAM_EF_MM_IMSI_LOCI_GLOCI_SIZE,
        NVRAM_SECUPACK(NVRAM_EF_MM_IMSI_LOCI_GLOCI_DEFAULT),
        NVRAM_CATEGORY_SECUPACK,
        NVRAM_ATTR_CONFIDENTIAL
        #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
         | NVRAM_ATTR_MSP | NVRAM_ATTR_MULTIPLE
        #endif
        ,
        "LD6T",
        VER(NVRAM_EF_MM_IMSI_LOCI_GLOCI_LID)
    },
#endif  /* __TC02_SECURITY_REQUIREMENT__ */

#ifdef __SYSSEL_SUPPORT__
    {
        NVRAM_EF_SYSSEL_SETTING_LID,
        NVRAM_EF_SYSSEL_SETTING_TOTAL,
        NVRAM_EF_SYSSEL_SETTING_SIZE,
        NVRAM_NORMAL((const kal_uint8 *)NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD73",
        VER(NVRAM_EF_SYSSEL_SETTING_LID),
    },
#endif /* __SYSSEL_SUPPORT__ */

    {
        NVRAM_EF_REGIONAL_PHONE_MODE_LID,
        NVRAM_EF_REGIONAL_PHONE_MODE_TOTAL,
        NVRAM_EF_REGIONAL_PHONE_MODE_SIZE,
    #ifdef __REGIONAL_PHONE__
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
    #else
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
    #endif
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD78",
        VER(NVRAM_EF_REGIONAL_PHONE_MODE_LID),
    },

#ifdef __CHANNEL_LOCK__
    {
            NVRAM_EF_CH_LOCK_INFO_LID,
            NVRAM_EF_CH_LOCK_INFO_TOTAL,
            NVRAM_EF_CH_LOCK_INFO_SIZE,
            NVRAM_NORMAL( NVRAM_EF_CH_LOCK_INFO_DEFAULT),
            NVRAM_CATEGORY_USER,
            NVRAM_ATTR_AVERAGE,
            "LD79",
            VER(NVRAM_EF_CH_LOCK_INFO_LID)
    },
#endif /* __CHANNEL_LOCK__ */

	{
    	 NVRAM_EF_LTE_ONLY_OPER_SIM_CUSTOMIZATION_LID,
    	 NVRAM_EF_LTE_ONLY_OPER_SIM_CUSTOMIZATION_TOTAL,
    	 NVRAM_EF_LTE_ONLY_OPER_SIM_CUSTOMIZATION_SIZE,
    	 NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
    	 NVRAM_CATEGORY_USER,
    	 NVRAM_ATTR_AVERAGE,
    	 "MT99",
    	 VER(NVRAM_EF_LTE_ONLY_OPER_SIM_CUSTOMIZATION_LID)
	 },

    {
        NVRAM_EF_POWER_LEVEL_THRESHOLD_INFO_LID,
        NVRAM_EF_POWER_LEVEL_THRESHOLD_INFO_TOTAL,
        NVRAM_EF_POWER_LEVEL_THRESHOLD_INFO_SIZE,
        NVRAM_NORMAL(NVRAM_EF_POWER_LEVEL_THRESHOLD_INFO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "LD80",
        VER(NVRAM_EF_POWER_LEVEL_THRESHOLD_INFO_LID)
    },

#ifdef __SUBSIDY_LOCK__
    {
        NVRAM_EF_SUBSIDY_LOCK_LID,
        NVRAM_EF_SUBSIDY_LOCK_TOTAL,
        NVRAM_EF_SUBSIDY_LOCK_SIZE,
        NVRAM_NORMAL(&NVRAM_EF_SUBSIDY_LOCK_DEFAULT),
        NVRAM_CATEGORY_IMPORTANT_L4,
        NVRAM_ATTR_MSP | NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_COMMITTED | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_FAULT_ASSERT,
        "SL00",
        VER(NVRAM_EF_SUBSIDY_LOCK_LID)
    },
    {
        NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_LID,
        NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_TOTAL,
        NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_SIZE,
        NVRAM_NORMAL(&NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_DEFAULT),
        NVRAM_CATEGORY_IMPORTANT_L4,
        NVRAM_ATTR_MSP | NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_COMMITTED | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_FAULT_ASSERT,
        "SL01",
        VER(NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_LID)
    },
#endif /* __SUBSIDY_LOCK__ */

#if defined(__SMB_SIMME_LOCK__)
    {
        NVRAM_EF_SML_GBLOB_LID,
        NVRAM_EF_SML_GBLOB_TOTAL,
        NVRAM_EF_SML_GBLOB_SIZE,
        NVRAM_SECUPACK(&NVRAM_EF_SML_GBLOB_DEFAULT),
        NVRAM_CATEGORY_SECUPACK | NVRAM_CATEGORY_IMPORTANT_L4,
        NVRAM_ATTR_MSP | NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_COMMITTED | NVRAM_ATTR_FAULT_ASSERT | NVRAM_ATTR_GEN_DEFAULT,
        "SL02",
        VER(NVRAM_EF_SML_GBLOB_LID)
    },

    {
        NVRAM_EF_SML_GBLOB_KEY_LID,
        NVRAM_EF_SML_GBLOB_KEY_TOTAL,
        NVRAM_EF_SML_GBLOB_KEY_SIZE,
        NVRAM_SECUPACK(&NVRAM_EF_SML_GBLOB_KEY_DEFAULT),
        NVRAM_CATEGORY_SECUPACK | NVRAM_CATEGORY_IMPORTANT_L4,
        NVRAM_ATTR_MSP | NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_COMMITTED | NVRAM_ATTR_FAULT_ASSERT | NVRAM_ATTR_GEN_DEFAULT,
        "SL03",
        VER(NVRAM_EF_SML_GBLOB_KEY_LID)
    },

    {
        NVRAM_EF_SML_S_LID,
        NVRAM_EF_SML_S_TOTAL,
        NVRAM_EF_SML_S_SIZE,
        NVRAM_SECUPACK(&NVRAM_EF_SML_S_DEFAULT),
        NVRAM_CATEGORY_SECUPACK | NVRAM_CATEGORY_IMPORTANT_L4,
        NVRAM_ATTR_MSP | NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_COMMITTED | NVRAM_ATTR_FAULT_ASSERT | NVRAM_ATTR_GEN_DEFAULT,
        "SL04",
        VER(NVRAM_EF_SML_S_LID)
    },

#endif /* __SMB_SIMME_LOCK__ */
#ifdef __CARRIER_RESTRICTION__
    {
        NVRAM_EF_L4_CARRIER_RESTRICTION_LID,
        NVRAM_EF_L4_CARRIER_RESTRICTION_TOTAL,
        NVRAM_EF_L4_CARRIER_RESTRICTION_SIZE,
        NVRAM_NORMAL(&NVRAM_EF_L4_CARRIER_RESTRICTION_DEFAULT),
        NVRAM_CATEGORY_IMPORTANT_L4,
        NVRAM_ATTR_MSP | NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_COMMITTED | 
        /*
         * Customer must enable this LID if Carrier Restriction Feature is
         * Used in the project. Other wise the LID will be exposed to
         * Tampering.
         
        NVRAM_ATTR_FAULT_ASSERT | 
        */
        NVRAM_ATTR_GEN_DEFAULT,
        "LDCR",
        VER(NVRAM_EF_L4_CARRIER_RESTRICTION_LID)
    },
#endif /* __CARRIER_RESTRICTION__ */
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
