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
 ****************************************************************************/
#ifndef __VSIM_NVRAM_DEF_H__
#define __VSIM_NVRAM_DEF_H__
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"
// LID Enums

typedef enum
{
        NVRAM_EF_VSIM_RSA_KEY_LID               = NVRAM_LID_GRP_VSIM(0), // __REL10__: t3346    
        NVRAM_EF_KEYGEN_LID,
        NVRAM_EF_VSIM_CONFIG_LID,
        NVRAM_EF_VSIM_PROFILE_LID,        
        NVRAM_EF_VSIM_SIM_IMSI_LID,
        NVRAM_EF_VSIM_U_IMSI_LID,

        /* SIM CACHE Start*/
        NVRAM_EF_CACHE_EF_IMSI_LID,
        NVRAM_EF_CACHE_EF_DIR_LID,
        NVRAM_EF_CACHE_EF_AD_LID,
        NVRAM_EF_CACHE_EF_GID1_LID,
        NVRAM_EF_CACHE_EF_SPN_LID,
        NVRAM_EF_CACHE_EF_ICCID_LID,
        NVRAM_EF_CACHE_EF_SST_LID,
        NVRAM_EF_CACHE_EF_SMSP_LID,
        NVRAM_EF_CACHE_EF_MBI_LID,
        NVRAM_EF_CACHE_EF_GID2_LID,
        NVRAM_EF_CACHE_EF_LI_LID,
        NVRAM_EF_CACHE_EF_ELP_LID,
        NVRAM_EF_CACHE_EF_MSISDN_LID,
        NVRAM_EF_CACHE_EF_VM_WAIT_LID,
        NVRAM_EF_CACHE_EF_SPDI_LID,
        NVRAM_EF_CACHE_EF_CPHS_INFO_LID,
        NVRAM_EF_CACHE_EF_CSP_LID,
        NVRAM_EF_CACHE_EF_OP_STRING_LID,
        NVRAM_EF_CACHE_EF_OP_SHORTFORM_LID,
        NVRAM_EF_CACHE_EF_CFIS_LID,
        NVRAM_EF_CACHE_EF_PLMNWACT_LID,
        NVRAM_EF_CACHE_EF_OPLMNWACT_LID,
        NVRAM_EF_CACHE_EF_HPLMNWACT_LID,
        NVRAM_EF_CACHE_EF_EHPLMN_LID,
        NVRAM_EF_CACHE_EF_FPLMN_LID,
        NVRAM_EF_CACHE_EF_PERSO_LID,

        /* SIM CACHE End */
        NVRAM_EF_VSIM_LAST_LID                  = NVRAM_LID_GRP_VSIM(63)
}nvram_lid_vsim_enum;

/* Reserve old naming for current users */
#define NVRAM_VSIM_CONFIG_LID NVRAM_EF_VSIM_CONFIG_LID
#define NVRAM_VSIM_PROFILE_LID NVRAM_EF_VSIM_PROFILE_LID


// VERNO
#define NVRAM_EF_VSIM_RSA_KEY_LID_VERNO "000"
#define NVRAM_EF_KEYGEN_LID_VERNO "001"

#ifdef __MDVSIM__
/*
 * VSIM VERNO
 */
#define NVRAM_EF_VSIM_CONFIG_LID_VERNO "000"
#define NVRAM_EF_VSIM_PROFILE_LID_VERNO "000"
#define NVRAM_EF_VSIM_SIM_IMSI_LID_VERNO "000"
#define NVRAM_EF_VSIM_U_IMSI_LID_VERNO "000"
#endif
// Size and Total 

/**
  * VSIM file
  */

#define NVRAM_EF_VSIM_CONFIG_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_VSIM_CONFIG_SIZE          (2)
/* Reserve old naming for current users */
#define NVRAM_VSIM_CONFIG_TOTAL NVRAM_EF_VSIM_CONFIG_TOTAL
#define NVRAM_VSIM_CONFIG_SIZE NVRAM_EF_VSIM_CONFIG_SIZE


#ifdef __MDVSIM__
#define VSIM_PROFILE_ENTRY              (5)
#else
#define VSIM_PROFILE_ENTRY              (1)
#endif
#define NVRAM_EF_VSIM_PROFILE_TOTAL        (VSIM_PROFILE_ENTRY)
#define NVRAM_EF_VSIM_PROFILE_SIZE         (521)
/* Reserve old naming for current users */
#define NVRAM_VSIM_PROFILE_TOTAL NVRAM_EF_VSIM_PROFILE_TOTAL
#define NVRAM_VSIM_PROFILE_SIZE NVRAM_EF_VSIM_PROFILE_SIZE

#define NVRAM_VSIM_SIM_EF_TOTAL         (1)
#define NVRAM_VSIM_USIM_EF_TOTAL        (VSIM_PROFILE_ENTRY)
#define VSIM_FILE_META_SIZE             (96)
#define VSIM_FILE_DATA_SIZE             (32)
#define NVRAM_VSIM_EF_DEFUALT_SIZE      (VSIM_FILE_META_SIZE+VSIM_FILE_DATA_SIZE)
#define NVRAM_VSIM_EF_U_DEFUALT_SIZE    (VSIM_FILE_META_SIZE+VSIM_FILE_DATA_SIZE)

#define NVRAM_EF_VSIM_SIM_IMSI_TOTAL NVRAM_VSIM_SIM_EF_TOTAL
#define NVRAM_EF_VSIM_SIM_IMSI_SIZE NVRAM_VSIM_EF_DEFUALT_SIZE
#define NVRAM_EF_VSIM_U_IMSI_TOTAL NVRAM_VSIM_USIM_EF_TOTAL
#define NVRAM_EF_VSIM_U_IMSI_SIZE NVRAM_VSIM_EF_U_DEFUALT_SIZE

// Data Structure of Each LID


typedef  struct 
{ 
    kal_uint8 meta[VSIM_FILE_META_SIZE];
    kal_uint8 data[VSIM_FILE_DATA_SIZE];
} nvram_vsim_ef_file_struct;

typedef nvram_vsim_ef_file_struct nvram_ef_vsim_sim_imsi_struct;
typedef nvram_vsim_ef_file_struct nvram_ef_vsim_u_imsi_struct;

typedef  struct 
{ 
    kal_uint8           vsim_ki_enabled;    /* VSIM Ki enable, 0: use fixed auth_res; otherwise use auth. algo*/
    kal_uint8           vsim_asym_key_idx;  /* 0-based index, assymetric key index for Ki protection */
    kal_uint8           sim_auth_algo;      /* 0: COMP128v2v3, 1:XOR, 2: OTHERS*/
    kal_uint8           usim_auth_algo;     /* 0: MILENAGE, 1:OTHERS*/
    kal_uint8           vsim_type;          /* uicc_card_type_enum, 0: Not init, 1:SIM, 2:USIM for now */
    kal_uint16          auth_res_len;
    kal_uint8           auth_res[256];
    kal_uint16          enc_ki_len;
    kal_uint8           enc_ki[256];        /* Ki(16Bytes), enc_ki(256Bytes) */
} nvram_vsim_profile_struct, nvram_ef_vsim_profile_struct;

typedef  struct 
{ 
    kal_uint8           vsim_enabled;       /* VSIM Mode, 0:Disabled; otherwise is Enabled */
    kal_uint8           vsim_profile_id;    /* 0-based index, for different operator EF (such as EF_IMSI) and secret key, Ki */
} nvram_vsim_config_struct, nvram_ef_vsim_config_struct;

typedef struct
{
    t_cust_chl_asym_key enc_rsa_key;  //800B
}nvram_ef_vsim_rsa_key_struct;

#define NVRAM_VSIM_RSA_KEY_NUM 3
#define NVRAM_EF_VSIM_RSA_KEY_SIZE   sizeof(nvram_ef_vsim_rsa_key_struct)
#define NVRAM_EF_VSIM_RSA_KEY_TOTAL   NVRAM_VSIM_RSA_KEY_NUM

typedef struct
{
    kal_uint8 num_of_key;
}nvram_ef_keygen_struct;

#define NVRAM_EF_KEYGEN_SIZE   sizeof(nvram_ef_keygen_struct)
#define NVRAM_EF_KEYGEN_TOTAL   1

/*
 * EF_IMSI 
 */
#define NVRAM_EF_CACHE_EF_IMSI_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_IMSI_SIZE          (9)
#define NVRAM_EF_CACHE_EF_IMSI_LID_VERNO "000"

typedef struct {
    kal_uint8   imsi_len;
    kal_uint8   imsi[8];
} nvram_ef_cache_ef_imsi_fmt_data_struct;

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_IMSI_SIZE];
} nvram_ef_cache_ef_imsi_raw_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_imsi_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_imsi_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_imsi_struct;


/* 
 * EF_DIR 
 */
#define NVRAM_EF_CACHE_EF_DIR_REC_NUM 5
#define NVRAM_EF_CACHE_EF_DIR_TOTAL         (NVRAM_EF_CACHE_EF_DIR_REC_NUM * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_DIR_SIZE          (54)
#define NVRAM_EF_CACHE_EF_DIR_LID_VERNO "000"

/*ETSI 102.221, Table 13.2: Coding of an application template entry*/
typedef struct {
    kal_uint8   at_tag;         //  applicateion template tag = 0x61
    kal_uint8   at_len;         //  application template len = '03-7F'
    kal_uint8   aid_tag;        //  application id template tag = 0x4F
    kal_uint8   aid_len;        //  application id len = '01 - 10'
    kal_uint8   aid[16];
    kal_uint8   label_tag;      //  application label template tag = 0x50
    kal_uint8   label_len;      //  application label len < 32 bytes
    kal_uint8   label[32];
} nvram_ef_cache_ef_dir_fmt_data_struct;

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_DIR_SIZE];
} nvram_ef_cache_ef_dir_raw_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_dir_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_dir_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_dir_struct;


/*
 * EF_AD 
 */
#define NVRAM_EF_CACHE_EF_AD_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_AD_SIZE          (4)
#define NVRAM_EF_CACHE_EF_AD_LID_VERNO "000"

typedef struct {
    kal_uint8   ue_op_mode;
    kal_uint8   addition_info[2];
    kal_uint8   mnc_length;    
} nvram_ef_cache_ef_ad_fmt_data_struct;

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_AD_SIZE];
} nvram_ef_cache_ef_ad_raw_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_ad_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_ad_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_ad_struct;

/*
 * EF_GID1 
 */
#define NVRAM_EF_CACHE_EF_GID1_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_GID1_SIZE          (NUM_GID1)
#define NVRAM_EF_CACHE_EF_GID1_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_GID1_SIZE];
} nvram_ef_cache_ef_gid1_raw_data_struct, nvram_ef_cache_ef_gid1_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_gid1_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_gid1_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_gid1_struct;


/*
 * EF_SPN 
 */
#define NVRAM_EF_CACHE_EF_SPN_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_SPN_SIZE          (LEN_OF_SPN)
#define NVRAM_EF_CACHE_EF_SPN_LID_VERNO "000"

typedef struct {
    kal_uint8   display_cond;
    kal_uint8   spn[16];
} nvram_ef_cache_ef_spn_fmt_data_struct;

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_SPN_SIZE];
} nvram_ef_cache_ef_spn_raw_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_spn_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_spn_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_spn_struct;

/*
 * EF_ICCID
 */
#define NVRAM_EF_CACHE_EF_ICCID_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_ICCID_SIZE          (10)
#define NVRAM_EF_CACHE_EF_ICCID_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_ICCID_SIZE];
} nvram_ef_cache_ef_iccid_raw_data_struct, nvram_ef_cache_ef_iccid_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_iccid_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_iccid_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_iccid_struct;

/*
 * EF_SST
 */
#define NVRAM_EF_CACHE_EF_SST_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_SST_SIZE          (MAX_SST_LEN)
#define NVRAM_EF_CACHE_EF_SST_LID_VERNO "000"

typedef struct {
    kal_uint8   data[MAX_SST_LEN];
} nvram_ef_cache_ef_sst_raw_data_struct, nvram_ef_cache_ef_sst_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_sst_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_sst_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_sst_struct;

/*
 * EF_SMSP
 */
#define NVRAM_EF_CACHE_EF_SMSP_REC_NUM 2
#define NVRAM_EF_CACHE_EF_SMSP_TOTAL        (NVRAM_EF_CACHE_EF_SMSP_REC_NUM * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_SMSP_SIZE          (50)      /* 28(SMSAL_SMSP_LEN)+22 */
#define NVRAM_EF_CACHE_EF_SMSP_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_SMSP_SIZE];
} nvram_ef_cache_ef_smsp_raw_data_struct, nvram_ef_cache_ef_smsp_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_smsp_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_smsp_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_smsp_struct;

/*
 * EF_MBI
 */
#define NVRAM_EF_CACHE_EF_MBI_REC_NUM 10
#define NVRAM_EF_CACHE_EF_MBI_TOTAL        (NVRAM_EF_CACHE_EF_MBI_REC_NUM * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_MBI_SIZE          (26)      /* 14(SMSAL_MAILBOX_NUM_LEN)+12 */
#define NVRAM_EF_CACHE_EF_MBI_LID_VERNO "000"


typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_MBI_SIZE];
} nvram_ef_cache_ef_mbi_raw_data_struct, nvram_ef_cache_ef_mbi_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_mbi_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_mbi_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_mbi_struct;

/*
 * EF_GID2
 */
#define NVRAM_EF_CACHE_EF_GID2_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_GID2_SIZE          (NUM_GID2)
#define NVRAM_EF_CACHE_EF_GID2_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_GID2_SIZE];
} nvram_ef_cache_ef_gid2_raw_data_struct, nvram_ef_cache_ef_gid2_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_gid2_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_gid2_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_gid2_struct;

/*
 * EF_LI
 */
#define NVRAM_EF_CACHE_EF_LI_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_LI_SIZE          (30)
#define NVRAM_EF_CACHE_EF_LI_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_LI_SIZE];
} nvram_ef_cache_ef_li_raw_data_struct, nvram_ef_cache_ef_li_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_li_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_li_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_li_struct;

/*
 * EF_ELP
 */
#define NVRAM_EF_CACHE_EF_ELP_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_ELP_SIZE          (15)
#define NVRAM_EF_CACHE_EF_ELP_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_ELP_SIZE];
} nvram_ef_cache_ef_elp_raw_data_struct, nvram_ef_cache_ef_elp_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_elp_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_elp_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_elp_struct;

/*
 * EF_MSISDN
 */
#define NVRAM_EF_CACHE_EF_MSISDN_REC_NUM 2
#define NVRAM_EF_CACHE_EF_MSISDN_TOTAL        (NVRAM_EF_CACHE_EF_MSISDN_REC_NUM * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_MSISDN_SIZE          (34)      /* 20(AID_len)+14 */
#define NVRAM_EF_CACHE_EF_MSISDN_LID_VERNO "000"


typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_MSISDN_SIZE];
} nvram_ef_cache_ef_msisdn_raw_data_struct, nvram_ef_cache_ef_msisdn_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_msisdn_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_msisdn_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_msisdn_struct;  

/*
 * EF_VM_WAIT
 */
#define NVRAM_EF_CACHE_EF_VM_WAIT_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_VM_WAIT_SIZE          (5)
#define NVRAM_EF_CACHE_EF_VM_WAIT_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_VM_WAIT_SIZE];
} nvram_ef_cache_ef_vm_wait_raw_data_struct, nvram_ef_cache_ef_vm_wait_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_vm_wait_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_vm_wait_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_vm_wait_struct;

/*
 * EF_SPDI
 */
#define NVRAM_EF_CACHE_EF_SPDI_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_SPDI_SIZE          (256)
#define NVRAM_EF_CACHE_EF_SPDI_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_SPDI_SIZE];
} nvram_ef_cache_ef_spdi_raw_data_struct, nvram_ef_cache_ef_spdi_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_spdi_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_spdi_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_spdi_struct;

/*
 * EF_CPHS_INFO
 */
#define NVRAM_EF_CACHE_EF_CPHS_INFO_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_CPHS_INFO_SIZE          (3)
#define NVRAM_EF_CACHE_EF_CPHS_INFO_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_CPHS_INFO_SIZE];
} nvram_ef_cache_ef_cphs_info_raw_data_struct, nvram_ef_cache_ef_cphs_info_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_cphs_info_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_cphs_info_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_cphs_info_struct;

/*
 * EF_CSP
 */
#define NVRAM_EF_CACHE_EF_CSP_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_CSP_SIZE          (18)
#define NVRAM_EF_CACHE_EF_CSP_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_CSP_SIZE];
} nvram_ef_cache_ef_csp_raw_data_struct, nvram_ef_cache_ef_csp_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_csp_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_csp_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_csp_struct;

/*
 * EF_OP_STRING
 */
#define NVRAM_EF_CACHE_EF_OP_STRING_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_OP_STRING_SIZE          (40)
#define NVRAM_EF_CACHE_EF_OP_STRING_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_OP_STRING_SIZE];
} nvram_ef_cache_ef_op_string_raw_data_struct, nvram_ef_cache_ef_op_string_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_op_string_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_op_string_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_op_string_struct;

/*
 * EF_OP_SHORTFORM
 */
#define NVRAM_EF_CACHE_EF_OP_SHORTFORM_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_OP_SHORTFORM_SIZE          (10)
#define NVRAM_EF_CACHE_EF_OP_SHORTFORM_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_OP_SHORTFORM_SIZE];
} nvram_ef_cache_ef_op_shortform_raw_data_struct, nvram_ef_cache_ef_op_shortform_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_op_shortform_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_op_shortform_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_op_shortform_struct;

/*
 * EF_CFIS
 */
#define NVRAM_EF_CACHE_EF_CFIS_REC_NUM 1
#define NVRAM_EF_CACHE_EF_CFIS_TOTAL        (NVRAM_EF_CACHE_EF_CFIS_REC_NUM * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_CFIS_SIZE          (16)
#define NVRAM_EF_CACHE_EF_CFIS_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_CFIS_SIZE];
} nvram_ef_cache_ef_cfis_raw_data_struct, nvram_ef_cache_ef_cfis_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_cfis_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_cfis_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_cfis_struct;

/*
 * EF_PLMNWACT
 */
#define NVRAM_EF_CACHE_EF_PLMNWACT_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_PLMNWACT_SIZE          (2048)
#define NVRAM_EF_CACHE_EF_PLMNWACT_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_PLMNWACT_SIZE];
} nvram_ef_cache_ef_plmnwact_raw_data_struct, nvram_ef_cache_ef_plmnwact_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_plmnwact_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_plmnwact_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_plmnwact_struct;

/*
 * EF_OPLMNWACT
 */
#define NVRAM_EF_CACHE_EF_OPLMNWACT_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_OPLMNWACT_SIZE          (2048)
#define NVRAM_EF_CACHE_EF_OPLMNWACT_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_OPLMNWACT_SIZE];
} nvram_ef_cache_ef_oplmnwact_raw_data_struct, nvram_ef_cache_ef_oplmnwact_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_oplmnwact_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_oplmnwact_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_oplmnwact_struct;

/*
 * EF_HPLMNWACT
 */
#define NVRAM_EF_CACHE_EF_HPLMNWACT_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_HPLMNWACT_SIZE          (2048)
#define NVRAM_EF_CACHE_EF_HPLMNWACT_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_HPLMNWACT_SIZE];
} nvram_ef_cache_ef_hplmnwact_raw_data_struct, nvram_ef_cache_ef_hplmnwact_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_hplmnwact_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_hplmnwact_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_hplmnwact_struct;

/*
 * EF_EHPLMN
 */
#define NVRAM_EF_CACHE_EF_EHPLMN_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_EHPLMN_SIZE          (MAX_EHPLMN_EF_LEN)
#define NVRAM_EF_CACHE_EF_EHPLMN_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_EHPLMN_SIZE];
} nvram_ef_cache_ef_ehplmn_raw_data_struct, nvram_ef_cache_ef_ehplmn_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_ehplmn_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_ehplmn_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_ehplmn_struct;

/*
 * EF_FPLMN
 */
#define NVRAM_EF_CACHE_EF_FPLMN_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_FPLMN_SIZE          (800)
#define NVRAM_EF_CACHE_EF_FPLMN_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_FPLMN_SIZE];
} nvram_ef_cache_ef_fplmn_raw_data_struct, nvram_ef_cache_ef_fplmn_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_fplmn_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_fplmn_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_fplmn_struct;

/*
 * EF_PERSO
 */
#define NVRAM_EF_CACHE_EF_PERSO_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_CACHE_EF_PERSO_SIZE          (1)
#define NVRAM_EF_CACHE_EF_PERSO_LID_VERNO "000"

typedef struct {
    kal_uint8   data[NVRAM_EF_CACHE_EF_PERSO_SIZE];
} nvram_ef_cache_ef_perso_raw_data_struct, nvram_ef_cache_ef_perso_fmt_data_struct;
typedef struct
{
    union
    {
        nvram_ef_cache_ef_perso_fmt_data_struct fmt_data;
        nvram_ef_cache_ef_perso_raw_data_struct raw_data;
    }data;
}nvram_ef_cache_ef_perso_struct;


#ifdef __cplusplus
}
#endif 

#endif /* __VSIM_NVRAM_DEF_H__ */ 
