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
#ifndef __VSIM_NVRAM_EDITOR_H__
#define __VSIM_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "vsim_nvram_def.h"

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

#ifdef __MDVSIM__
LID_BIT VER_LID(NVRAM_EF_VSIM_CONFIG_LID)
nvram_ef_vsim_config_struct * NVRAM_EF_VSIM_CONFIG_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_VSIM_PROFILE_LID)
nvram_ef_vsim_profile_struct * NVRAM_EF_VSIM_PROFILE_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_VSIM_SIM_IMSI_LID)
nvram_ef_vsim_sim_imsi_struct * NVRAM_EF_VSIM_SIM_IMSI_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_VSIM_U_IMSI_LID)
nvram_ef_vsim_u_imsi_struct * NVRAM_EF_VSIM_U_IMSI_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_VSIM_RSA_KEY_LID
* DESCRIPTION
*       RSA KEY for VSIM authentication   
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will be updated only when first power on
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_VSIM_RSA_KEY_LID)
nvram_ef_vsim_rsa_key_struct * NVRAM_EF_VSIM_RSA_KEY_TOTAL
{
    enc_rsa_key:"enc_rsa_key"
    {
    };
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_KEYGEN_LID
* DESCRIPTION
*       Number of RSA KEY for VSIM authentication   
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will be updated only when first power on
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_KEYGEN_LID)
nvram_ef_keygen_struct * NVRAM_EF_KEYGEN_TOTAL
{
    num_of_key:"num_of_key"
    {
    };
};

#endif


/* EF_IMSI */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_IMSI_LID)
nvram_ef_cache_ef_imsi_struct * NVRAM_EF_CACHE_EF_IMSI_TOTAL
{
};

/* EF_DIR */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_DIR_LID)
nvram_ef_cache_ef_dir_struct * NVRAM_EF_CACHE_EF_DIR_TOTAL
{
};

/* EF_AD */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_AD_LID)
nvram_ef_cache_ef_ad_struct * NVRAM_EF_CACHE_EF_AD_TOTAL
{
};

/* EF_GID1 */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_GID1_LID)
nvram_ef_cache_ef_gid1_struct * NVRAM_EF_CACHE_EF_GID1_TOTAL
{
};

/* EF_SPN */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_SPN_LID)
nvram_ef_cache_ef_spn_struct * NVRAM_EF_CACHE_EF_GID1_TOTAL
{
};

/* EF_ICCID */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_ICCID_LID)
nvram_ef_cache_ef_iccid_struct * NVRAM_EF_CACHE_EF_ICCID_TOTAL
{
};

/* EF_SST */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_SST_LID)
nvram_ef_cache_ef_sst_struct * NVRAM_EF_CACHE_EF_SST_TOTAL
{
};

/* EF_SMSP */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_SMSP_LID)
nvram_ef_cache_ef_smsp_struct * NVRAM_EF_CACHE_EF_SMSP_TOTAL
{
};

/* EF_MBI */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_MBI_LID)
nvram_ef_cache_ef_mbi_struct * NVRAM_EF_CACHE_EF_MBI_TOTAL
{
};

/* EF_GID2 */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_GID2_LID)
nvram_ef_cache_ef_gid2_struct * NVRAM_EF_CACHE_EF_GID2_TOTAL
{
};

/* EF_LI_LP */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_LI_LID)
nvram_ef_cache_ef_li_struct * NVRAM_EF_CACHE_EF_LI_TOTAL
{
};

/* EF_ELP */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_ELP_LID)
nvram_ef_cache_ef_elp_struct * NVRAM_EF_CACHE_EF_ELP_TOTAL
{
};

/* EF_MSISDN */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_MSISDN_LID)
nvram_ef_cache_ef_msisdn_struct * NVRAM_EF_CACHE_EF_MSISDN_TOTAL
{
};

/* EF_VM_WAIT */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_VM_WAIT_LID)
nvram_ef_cache_ef_vm_wait_struct * NVRAM_EF_CACHE_EF_VM_WAIT_TOTAL
{
};

/* EF_SPDI */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_SPDI_LID)
nvram_ef_cache_ef_spdi_struct * NVRAM_EF_CACHE_EF_SPDI_TOTAL
{
};

/* EF_CPHS_INFO */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_CPHS_INFO_LID)
nvram_ef_cache_ef_cphs_info_struct * NVRAM_EF_CACHE_EF_CPHS_INFO_TOTAL
{
};

/* EF_CSP */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_CSP_LID)
nvram_ef_cache_ef_csp_struct * NVRAM_EF_CACHE_EF_CSP_TOTAL
{
};

/* EF_OP_STRING */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_OP_STRING_LID)
nvram_ef_cache_ef_op_string_struct * NVRAM_EF_CACHE_EF_OP_STRING_TOTAL
{
};

/* EF_OP_SHORTFORM */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_OP_SHORTFORM_LID)
nvram_ef_cache_ef_op_shortform_struct * NVRAM_EF_CACHE_EF_OP_SHORTFORM_TOTAL
{
};

/* EF_CFIS */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_CFIS_LID)
nvram_ef_cache_ef_cfis_struct * NVRAM_EF_CACHE_EF_CFIS_TOTAL
{
};

/* EF_PLMNWACT */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_PLMNWACT_LID)
nvram_ef_cache_ef_plmnwact_struct * NVRAM_EF_CACHE_EF_PLMNWACT_TOTAL
{
};

/* EF_OPLMNWACT */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_OPLMNWACT_LID)
nvram_ef_cache_ef_oplmnwact_struct * NVRAM_EF_CACHE_EF_OPLMNWACT_TOTAL
{
};

/* EF_HPLMNWACT */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_HPLMNWACT_LID)
nvram_ef_cache_ef_hplmnwact_struct * NVRAM_EF_CACHE_EF_HPLMNWACT_TOTAL
{
};

/* EF_EHPLMN */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_EHPLMN_LID)
nvram_ef_cache_ef_ehplmn_struct * NVRAM_EF_CACHE_EF_EHPLMN_TOTAL
{
};

/* EF_FPLMN */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_FPLMN_LID)
nvram_ef_cache_ef_fplmn_struct * NVRAM_EF_CACHE_EF_FPLMN_TOTAL
{
};

/* EF_PERSO */
LID_BIT VER_LID(NVRAM_EF_CACHE_EF_PERSO_LID)
nvram_ef_cache_ef_perso_struct * NVRAM_EF_CACHE_EF_PERSO_TOTAL
{
};

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __VSIM_NVRAM_EDITOR_H__ */
