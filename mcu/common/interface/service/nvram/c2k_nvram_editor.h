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
 * 
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __C2K_NVRAM_EDITOR_H__
#define __C2K_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#if defined (__C2K_RAT__)
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#ifdef GEN_FOR_PC
#include "c2k_nvram_def.h"

// Data Structure of Each LID

typedef struct
{
   uint8 data[PRL_MAX_SIZE];
}NvEditorPrlTableT;

typedef struct
{
   uint8 data[ERI_MAX_SIZE];
}NvEditorEriTableT;

typedef struct
{
   uint8 data[GPS_NV_SIZE];
}NvEditorGpsDataT;

typedef struct
{
   uint8 data[GPS_HASH_SIZE];
}NvEditorGpsHashDataT;

BEGIN_NVRAM_DATA

//add LID_BIT VER_LID here


LID_BIT VER_LID(NVRAM_EF_C2K_PSW_NAM1_LID)
PswIs95NamT * NVRAM_EF_C2K_PSW_NAM1_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_PSW_MS_CAP_LID)
MsCapDb * NVRAM_EF_C2K_PSW_MS_CAP_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_UICC_LID)
UiccDbmDataT * NVRAM_EF_C2K_UICC_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_UICC_CARD_DATA_LID)
UiccDbmCardDataT * NVRAM_EF_C2K_UICC_CARD_DATA_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_PSW_NAM2_LID)
PswIs95NamT * NVRAM_EF_C2K_PSW_NAM2_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_SECURE_DATA_LID)
SecureDataStructT * NVRAM_EF_C2K_SECURE_DATA_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_DO_DATA_LID)
ClcDoParmDataT * NVRAM_EF_C2K_DO_DATA_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_HLP_IPCOUNTERS_LID)
IPCounterStruct * NVRAM_EF_C2K_HLP_IPCOUNTERS_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_PSW_MRU1_LID)
CssDbmDataT * NVRAM_EF_C2K_PSW_MRU1_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_PSW_MRU2_LID)
CssDbmDataT * NVRAM_EF_C2K_PSW_MRU2_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_DO_MRU_LID)
CssDbmDataT * NVRAM_EF_C2K_DO_MRU_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_CSS_1X_LID)
css1xDbmSegment * NVRAM_EF_C2K_CSS_1X_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_CSS_DO_LID)
cssDODbmSegment * NVRAM_EF_C2K_CSS_DO_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_CSS_MISC_LID)
cssMiscDbmSegment * NVRAM_EF_C2K_CSS_MISC_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_PSW_MISC_LID)
PswMiscT * NVRAM_EF_C2K_PSW_MISC_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_CUSTOMIZE_LID)
ValCustomizedParmDataT * NVRAM_EF_C2K_CUSTOMIZE_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_HSPD_LID)
HlpHspdSegData * NVRAM_EF_C2K_HSPD_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_HSPD_SECURE_LID)
HlpHspdSecureSegData * NVRAM_EF_C2K_HSPD_SECURE_TOTAL
{
};

#ifdef CBP7_EHRPD
LID_BIT VER_LID(NVRAM_EF_C2K_EHRPD_LID)
HlpEHrpdSegDataT * NVRAM_EF_C2K_EHRPD_TOTAL
{
};
#endif

LID_BIT VER_LID(NVRAM_EF_C2K_PRL1_LID)
NvEditorPrlTableT * NVRAM_EF_C2K_PRL1_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_PRL2_LID)
NvEditorPrlTableT * NVRAM_EF_C2K_PRL2_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_ATC_PARMS_LID)
AtcDbmBinDataT * NVRAM_EF_C2K_ATC_PARMS_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_ERI1_LID)
NvEditorEriTableT * NVRAM_EF_C2K_ERI1_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_ERI2_LID)
NvEditorEriTableT * NVRAM_EF_C2K_ERI2_TOTAL
{
};


LID_BIT VER_LID(NVRAM_EF_C2K_DMUPUBKEY1_LID)
HlpRSAPublicKeyInfoT * NVRAM_EF_C2K_DMUPUBKEY1_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_DMUPUBKEY2_LID)
HlpRSAPublicKeyInfoT * NVRAM_EF_C2K_DMUPUBKEY2_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_DMUPUBKEY_ORG_LID)
HlpRSAPublicKeyInfoT * NVRAM_EF_C2K_DMUPUBKEY_ORG_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_FILE_SESSION_LID)
SessionDataT * NVRAM_EF_C2K_FILE_SESSION_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_FILE_SF_LID)
DScpPersonality * NVRAM_EF_C2K_FILE_SF_TOTAL
{
};

#ifdef MTK_CBP_ENCRYPT_VOICE
LID_BIT VER_LID(NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_LID)
PswDbmCryptDataT * NVRAM_EF_C2K_PSW_DBM_CRYPT_DATA_TOTAL
{
};
#endif

LID_BIT VER_LID(NVRAM_EF_C2K_VAL_SMS_CBS_LID)
ValSmsCbsInfoT* NVRAM_EF_C2K_VAL_SMS_CBS_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_MOBILE_ID_LID)
PswMobileIDT * NVRAM_EF_C2K_MOBILE_ID_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_VAL_DANDCN_LID)
ValSmsDanDcnInfoT* NVRAM_EF_C2K_VAL_DANDCN_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_LID)
ValVpValT* NVRAM_EF_C2K_SIDB_ITEM_MESSAGE_TOTAL
{	
};

LID_BIT VER_LID(NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_LID)
ValMem1ValT* NVRAM_EF_C2K_SIDB_ITEM_ATCONFIG_TOTAL
{	
};

LID_BIT VER_LID(NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_LID)
ValCnirDataT* NVRAM_EF_C2K_SIDB_ITEM_MANAGEMENT_CNIR_TOTAL
{	
};

LID_BIT VER_LID(NVRAM_EF_C2K_FILE_GPS_LID)
GpsDbmDataParms* NVRAM_EF_C2K_FILE_GPS_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_C2K_VSIM_LID)
UiccC2KVsimT * NVRAM_EF_C2K_VSIM_TOTAL
{
};

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 
#endif /* __C2K_RAT__ */
#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __C2K_NVRAM_EDITOR_H__ */
