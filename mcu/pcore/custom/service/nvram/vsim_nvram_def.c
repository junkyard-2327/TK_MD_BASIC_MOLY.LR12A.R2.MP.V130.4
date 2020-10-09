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
 * vsim_nvram_def.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for NVRAM security customization. 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 ****************************************************************************/

#ifndef NVRAM_NOT_PRESENT
#include "kal_general_types.h"
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"

/*
 *   User Headers & Default value
 */
#include "vsim_nvram_def.h" 
#include "vsim_nvram_editor.h" 

// Default Values

#ifdef __MDVSIM__
static kal_uint8 const NVRAM_EF_VSIM_SIM_IMSI_DEFAULT[] = {         // nvram_ef_vsim_ef_file_struct
    /* The first 96 is meta data : start*/
    0x0F, 0x00, 0x00, 0x00, 0x09, 0x6F, 0x07, 0x04, 0x00, 0x15, 0x00, 0x15, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    /* The first 96 is meta data : end*/
    /* File content data : start*/
    0x08, 0x09, 0x10, 0x10, 0x10, 0x32, 0x54, 0x06, 0x36, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    /* File content data : end*/
};
static kal_uint8 const NVRAM_EF_VSIM_U_IMSI_DEFAULT[] = {       // nvram_ef_vsim_ef_file_struct
    /* The first 96 is meta data : start*/
    0x22, 0x62, 0x20, 0x82, 0x02, 0x01, 0x21, 0x83, 0x02, 0x6F, 0x07, 0xA5, 0x06, 0x80, 0x01, 0x71,
    0xC0, 0x01, 0x00, 0x8A, 0x01, 0x05, 0x8B, 0x03, 0x2F, 0x06, 0x06, 0x80, 0x02, 0x00, 0x09, 0x81,
    0x02, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    /* The first 96 is meta data : end*/
    /* File content data : start*/
    0x08, 0x09, 0x10, 0x10, 0x10, 0x32, 0x54, 0x06, 0x36, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    /* File content data : end*/
};
static kal_uint8 const NVRAM_EF_VSIM_CONFIG_DEFAULT[] = {          // nvram_ef_vsim_config_struct

    0x00, // vsim_enabled , VSIM Mode, 0:Disabled; otherwise is Enabled
    0x00, // vsim profile id, 0-based index, for different operator EF (such as EF_IMSI) and secret key, Ki
};

static kal_uint8 const NVRAM_EF_VSIM_PROFILE_DEFAULT[] = {          // nvram_ef_vsim_profile_struct

    0x00, // vsim_ki_enabled {0: disable, 1; enabled)
    0xFF, // vsim_protected_key_idx, 0-based index, assymetric key index for Ki protection
    0x00, // sim_auth_algo, 0: COMP128v2v3(same as 2 for license issue), 1:XOR, 2: OTHERS
    0x00, // usim_auth_algo, 0: MILENAGE, 1:OTHERS
    0x01, // vsim_type  (uicc_card_type_enum), 0: Not init, 1:SIM, 2:USIM for now

    // auth_res_len
    0x00, 0x00,

    // auth_res[256]
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,

    // enc_ki_len
    0x00, 0x00,

    // enc_ki[256]
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF

};
#endif /* __MDVSIM__ */
// LID Declaration
ltable_entry_struct logical_data_item_table_vsim[] =
{
#ifdef __MDVSIM__
    {
        NVRAM_EF_VSIM_CONFIG_LID,
        NVRAM_EF_VSIM_CONFIG_TOTAL,
        NVRAM_EF_VSIM_CONFIG_SIZE,
        NVRAM_NORMAL(NVRAM_EF_VSIM_CONFIG_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS8A",
        VER(NVRAM_EF_VSIM_CONFIG_LID)
    },

    {
        NVRAM_EF_VSIM_PROFILE_LID,
        NVRAM_EF_VSIM_PROFILE_TOTAL,
        NVRAM_EF_VSIM_PROFILE_SIZE,
        NVRAM_NORMAL(NVRAM_EF_VSIM_PROFILE_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS8B",
        VER(NVRAM_EF_VSIM_PROFILE_LID)
    },

    {
        NVRAM_EF_VSIM_SIM_IMSI_LID,
        NVRAM_EF_VSIM_SIM_IMSI_TOTAL,
        NVRAM_EF_VSIM_SIM_IMSI_SIZE,
        NVRAM_NORMAL(NVRAM_EF_VSIM_SIM_IMSI_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_CONFIDENTIAL,
        "VS8C",
        VER(NVRAM_EF_VSIM_SIM_IMSI_LID)
    },

    {
        NVRAM_EF_VSIM_U_IMSI_LID,
        NVRAM_EF_VSIM_U_IMSI_TOTAL,
        NVRAM_EF_VSIM_U_IMSI_SIZE,
        NVRAM_NORMAL(NVRAM_EF_VSIM_U_IMSI_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_CONFIDENTIAL,
        "VS8D",
        VER(NVRAM_EF_VSIM_U_IMSI_LID)
    },

    {
        NVRAM_EF_VSIM_RSA_KEY_LID,
        NVRAM_EF_VSIM_RSA_KEY_TOTAL,
        NVRAM_EF_VSIM_RSA_KEY_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS8E",
        VER(NVRAM_EF_VSIM_RSA_KEY_LID)
    },

    {
        NVRAM_EF_KEYGEN_LID,
        NVRAM_EF_KEYGEN_TOTAL,
        NVRAM_EF_KEYGEN_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        #if defined (__CCCIFS_SUPPORT__)
        NVRAM_CATEGORY_IMPORTANT_L4,
        #else
        NVRAM_CATEGORY_USER ,
        #endif
        NVRAM_ATTR_AVERAGE
        #if defined (__CCCIFS_SUPPORT__)
         | NVRAM_ATTR_COMMITTED
        #endif
        ,
        "VS8F",
        VER(NVRAM_EF_KEYGEN_LID)
    },
#endif /* __MDVSIM__ */

    {
        NVRAM_EF_CACHE_EF_IMSI_LID,
        NVRAM_EF_CACHE_EF_IMSI_TOTAL,
        NVRAM_EF_CACHE_EF_IMSI_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS90",
        VER(NVRAM_EF_CACHE_EF_IMSI_LID)
    },

    {
        NVRAM_EF_CACHE_EF_DIR_LID,
        NVRAM_EF_CACHE_EF_DIR_TOTAL,
        NVRAM_EF_CACHE_EF_DIR_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS91",
        VER(NVRAM_EF_CACHE_EF_DIR_LID)
    },
    {
        NVRAM_EF_CACHE_EF_AD_LID,
        NVRAM_EF_CACHE_EF_AD_TOTAL,
        NVRAM_EF_CACHE_EF_AD_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS92",
        VER(NVRAM_EF_CACHE_EF_AD_LID)
    },    
    {
        NVRAM_EF_CACHE_EF_GID1_LID,
        NVRAM_EF_CACHE_EF_GID1_TOTAL,
        NVRAM_EF_CACHE_EF_GID1_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS93",
        VER(NVRAM_EF_CACHE_EF_GID1_LID)
    },   
    {
        NVRAM_EF_CACHE_EF_SPN_LID,
        NVRAM_EF_CACHE_EF_SPN_TOTAL,
        NVRAM_EF_CACHE_EF_SPN_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS94",
        VER(NVRAM_EF_CACHE_EF_SPN_LID)
    },   
    {
        NVRAM_EF_CACHE_EF_ICCID_LID,
        NVRAM_EF_CACHE_EF_ICCID_TOTAL,
        NVRAM_EF_CACHE_EF_ICCID_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS95",
        VER(NVRAM_EF_CACHE_EF_ICCID_LID)
    },   
    {
        NVRAM_EF_CACHE_EF_SST_LID,
        NVRAM_EF_CACHE_EF_SST_TOTAL,
        NVRAM_EF_CACHE_EF_SST_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS96",
        VER(NVRAM_EF_CACHE_EF_SST_LID)
    },   
    {
        NVRAM_EF_CACHE_EF_SMSP_LID,
        NVRAM_EF_CACHE_EF_SMSP_TOTAL,
        NVRAM_EF_CACHE_EF_SMSP_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS97",
        VER(NVRAM_EF_CACHE_EF_SMSP_LID)
    }, 
    {
        NVRAM_EF_CACHE_EF_MBI_LID,
        NVRAM_EF_CACHE_EF_MBI_TOTAL,
        NVRAM_EF_CACHE_EF_MBI_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS98",
        VER(NVRAM_EF_CACHE_EF_MBI_LID)
    }, 
    {
        NVRAM_EF_CACHE_EF_GID2_LID,
        NVRAM_EF_CACHE_EF_GID2_TOTAL,
        NVRAM_EF_CACHE_EF_GID2_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS99",
        VER(NVRAM_EF_CACHE_EF_GID2_LID)
    },
    {
        NVRAM_EF_CACHE_EF_LI_LID,
        NVRAM_EF_CACHE_EF_LI_TOTAL,
        NVRAM_EF_CACHE_EF_LI_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS9A",
        VER(NVRAM_EF_CACHE_EF_LI_LID)
    },
    {
        NVRAM_EF_CACHE_EF_ELP_LID,
        NVRAM_EF_CACHE_EF_ELP_TOTAL,
        NVRAM_EF_CACHE_EF_ELP_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS9B",
        VER(NVRAM_EF_CACHE_EF_ELP_LID)
    },
    {
        NVRAM_EF_CACHE_EF_MSISDN_LID,
        NVRAM_EF_CACHE_EF_MSISDN_TOTAL,
        NVRAM_EF_CACHE_EF_MSISDN_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS9C",
        VER(NVRAM_EF_CACHE_EF_MSISDN_LID)
    },
    {
        NVRAM_EF_CACHE_EF_VM_WAIT_LID,
        NVRAM_EF_CACHE_EF_VM_WAIT_TOTAL,
        NVRAM_EF_CACHE_EF_VM_WAIT_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS9D",
        VER(NVRAM_EF_CACHE_EF_VM_WAIT_LID)
    },
    {
        NVRAM_EF_CACHE_EF_SPDI_LID,
        NVRAM_EF_CACHE_EF_SPDI_TOTAL,
        NVRAM_EF_CACHE_EF_SPDI_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS9E",
        VER(NVRAM_EF_CACHE_EF_SPDI_LID)
    },
    {
        NVRAM_EF_CACHE_EF_CPHS_INFO_LID,
        NVRAM_EF_CACHE_EF_CPHS_INFO_TOTAL,
        NVRAM_EF_CACHE_EF_CPHS_INFO_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VS9F",
        VER(NVRAM_EF_CACHE_EF_CPHS_INFO_LID)
    },
    {
        NVRAM_EF_CACHE_EF_CSP_LID,
        NVRAM_EF_CACHE_EF_CSP_TOTAL,
        NVRAM_EF_CACHE_EF_CSP_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA0",
        VER(NVRAM_EF_CACHE_EF_CSP_LID)
    },
    {
        NVRAM_EF_CACHE_EF_OP_STRING_LID,
        NVRAM_EF_CACHE_EF_OP_STRING_TOTAL,
        NVRAM_EF_CACHE_EF_OP_STRING_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA1",
        VER(NVRAM_EF_CACHE_EF_OP_STRING_LID)
    },
    {
        NVRAM_EF_CACHE_EF_OP_SHORTFORM_LID,
        NVRAM_EF_CACHE_EF_OP_SHORTFORM_TOTAL,
        NVRAM_EF_CACHE_EF_OP_SHORTFORM_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA2",
        VER(NVRAM_EF_CACHE_EF_OP_SHORTFORM_LID)
    },
    {
        NVRAM_EF_CACHE_EF_CFIS_LID,
        NVRAM_EF_CACHE_EF_CFIS_TOTAL,
        NVRAM_EF_CACHE_EF_CFIS_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA3",
        VER(NVRAM_EF_CACHE_EF_CFIS_LID)
    },
    {
        NVRAM_EF_CACHE_EF_PLMNWACT_LID,
        NVRAM_EF_CACHE_EF_PLMNWACT_TOTAL,
        NVRAM_EF_CACHE_EF_PLMNWACT_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA4",
        VER(NVRAM_EF_CACHE_EF_PLMNWACT_LID)
    },
    {
        NVRAM_EF_CACHE_EF_OPLMNWACT_LID,
        NVRAM_EF_CACHE_EF_OPLMNWACT_TOTAL,
        NVRAM_EF_CACHE_EF_OPLMNWACT_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA5",
        VER(NVRAM_EF_CACHE_EF_OPLMNWACT_LID)
    },
    {
        NVRAM_EF_CACHE_EF_HPLMNWACT_LID,
        NVRAM_EF_CACHE_EF_HPLMNWACT_TOTAL,
        NVRAM_EF_CACHE_EF_HPLMNWACT_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA6",
        VER(NVRAM_EF_CACHE_EF_HPLMNWACT_LID)
    },
    {
        NVRAM_EF_CACHE_EF_EHPLMN_LID,
        NVRAM_EF_CACHE_EF_EHPLMN_TOTAL,
        NVRAM_EF_CACHE_EF_EHPLMN_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA7",
        VER(NVRAM_EF_CACHE_EF_EHPLMN_LID)
    },
    {
        NVRAM_EF_CACHE_EF_FPLMN_LID,
        NVRAM_EF_CACHE_EF_FPLMN_TOTAL,
        NVRAM_EF_CACHE_EF_FPLMN_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA8",
        VER(NVRAM_EF_CACHE_EF_FPLMN_LID)
    },
    {
        NVRAM_EF_CACHE_EF_PERSO_LID,
        NVRAM_EF_CACHE_EF_PERSO_TOTAL,
        NVRAM_EF_CACHE_EF_PERSO_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "VSA9",
        VER(NVRAM_EF_CACHE_EF_PERSO_LID)
    },

    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
