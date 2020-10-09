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
 * sbp_utility.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file is intends for SBP definition
 *
 * Author:
 * -------
 * -------
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
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#define SBP_UTILITY_C

#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "kal_public_api.h"
#include "ps_em_enum.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "nvram_editor_data_item.h"
#include "sim_ps_api.h"
#include "md_sap.h"
#include "custom_imc_config.h"
#include "custom_ltecsr_config.h"

#include "sbp_trc.h"
#include "kal_trace.h"

#define SBP_TEST_MODE 8286

extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);
extern ps_conf_test_mode_enum query_ps_conf_test_mode(void);

extern kal_uint8 ValCurrentActiveSimIndex();

typedef struct
{
    kal_uint32 sbp_id;
    kal_uint32 sbp_sub_id;
    kal_uint32 test_mode;
} sbp_common_context_struct;

typedef struct
{
    kal_uint32 sim_sbp_id;
    kal_uint8 modem_sbp_config[(SBP_MAX_MD_FEATURE/8)+1]; //the size depends on SBP_MAX_MD_FEATURE
    kal_uint8 modem_sbp_data_config[SBP_DATA_MAX_MD_FEATURE];
} sbp_context_struct;

kal_uint32 default_sbp_id = SBP_ID_INVALID;
kal_uint32 default_sbp_sub_id = 0;

nvram_ef_sbp_modem_config_struct sbp_config;
nvram_ef_sbp_modem_data_config_struct sbp_data_config;

static sbp_common_context_struct sbp_common_cntxt_g;
static sbp_context_struct sbp_cntxt_g[MAX_SIM_NUM];


/*****************************************************************************
 * FUNCTION
 *  sbp_is_test_mode
 *
 * DESCRIPTION
 * query if it is under test mode or not
 *
 * PARAMETERS
 *  [IN]    N/A
 * RETURNS
 *   KAL_TRUE    : SBP is in test mode
 *   KAL_FALSE   : SBP is not in test mode
 *****************************************************************************/
kal_bool sbp_is_test_mode (void)
{
    return sbp_common_cntxt_g.test_mode == SBP_TEST_MODE;
}

/*****************************************************************************
 * FUNCTION
 *  sbp_set_test_mode
 *
 * DESCRIPTION
 * Set SBP to test mode.
 * In test mode, we read current values of nvram files instead of using default values before applying SBP settings.
 *
 * PARAMETERS
 *  [IN]    N/A
 * RETURNS
 *   KAL_TRUE    : success
 *   KAL_FALSE   : fail
 *****************************************************************************/
kal_bool sbp_set_test_mode (kal_uint8 test_mode)
{
    kal_uint8 *nvram_buf_ptr = (kal_uint8 *)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_SBP_IDS_SIZE);
    nvram_ef_sbp_ids_struct *nvram_ef_sbp_ids_ptr;

    if (test_mode == 0)
        sbp_common_cntxt_g.test_mode = 0;
    else if (test_mode == 1)
        sbp_common_cntxt_g.test_mode = SBP_TEST_MODE;

     nvram_external_read_data(NVRAM_EF_SBP_IDS_LID,
                             1,
                             nvram_buf_ptr,
                             NVRAM_EF_SBP_IDS_SIZE);
                             
     nvram_ef_sbp_ids_ptr = (nvram_ef_sbp_ids_struct *)nvram_buf_ptr;

     nvram_ef_sbp_ids_ptr->test_mode = sbp_common_cntxt_g.test_mode;

     nvram_external_write_data(NVRAM_EF_SBP_IDS_LID,
                               1,
                               nvram_buf_ptr,
                               NVRAM_EF_SBP_IDS_SIZE);
 
     free_ctrl_buffer(nvram_buf_ptr);

     return KAL_TRUE;
}


/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature()
*
* DESCRIPTION
*   This function is used to query modem configuration
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
kal_bool sbp_query_md_feature(sbp_md_feature_enum feature)
{
    return sbp_query_md_feature_by_ps(feature, PROTOCOL_1);
}

#ifdef __CDMA2000_RAT__
/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_for_c2k()
*
* DESCRIPTION
*   This function is used to query modem configuration and used by C2K team only
*   The function will judge current active PS using C2K's API and return the corresponding setting.
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
kal_bool sbp_query_md_feature_for_c2k(sbp_md_feature_enum feature)
{
    protocol_id_enum ps_id = ValCurrentActiveSimIndex();

    if (ps_id >= MAX_SIM_NUM)
    {
    #ifndef __L1_STANDALONE__
        kal_brief_trace(TRACE_ERROR, ERROR_SBP_INVALID_PS_ID, ps_id);
    #endif
        return KAL_FALSE;
    }

    return sbp_query_md_feature_by_ps(feature, ps_id);
}
#endif

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_by_ps()
*
* DESCRIPTION
*   This function is used to query modem configuration according to the PS ID
*
* PARAMETERS
*   feature [IN]    modem feature
*   ps_id [IN]      PS ID
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
kal_bool sbp_query_md_feature_by_ps(sbp_md_feature_enum feature, protocol_id_enum ps_id)
{
    kal_uint8 *bitmask_ptr;
    kal_uint32 byte_offset;
    kal_uint8 bit_offset;
    kal_bool result;
#ifndef __L1_STANDALONE__
    static sbp_md_feature_enum latest_queried_sbp[MAX_SIM_NUM];
#endif


    if (feature >= SBP_MAX_MD_FEATURE)
    {
        ASSERT(0);
    }
    if (ps_id >=MAX_SIM_NUM)
    {
        kal_brief_trace(TRACE_ERROR, ERROR_SBP_INVALID_PS_ID, ps_id);
        return KAL_FALSE;
    }
    
    byte_offset = feature / 8;
    bit_offset = feature % 8;
    bitmask_ptr = &(sbp_cntxt_g[ps_id].modem_sbp_config[byte_offset]);

    result = (((*bitmask_ptr) & (0x01 << bit_offset)) != 0)? KAL_TRUE : KAL_FALSE;

    //For GCF or other test modes, you may overwrite the result.
    result = sbp_md_feature_overwrite(feature, result);

#ifndef __L1_STANDALONE__
    if (latest_queried_sbp[ps_id] != feature)
    {
        kal_brief_trace(TRACE_GROUP_1, INFO_SBP_FEATURE, ps_id, feature, result);
        latest_queried_sbp[ps_id] = feature;
    }
#endif

    return result;
}


/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_no_overwrite()
*
* DESCRIPTION
*   This function is used to query modem configuration without overwrite
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
kal_bool sbp_query_md_feature_no_overwrite(sbp_md_feature_enum feature)
{
    return sbp_query_md_feature_no_overwrite_by_ps(feature, PROTOCOL_1);
}

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_no_overwrite_by_ps()
*
* DESCRIPTION
*   This function is used to query modem configuration without overwrite according to the PS ID
*
* PARAMETERS
*   feature [IN]    modem feature
*   ps_id [IN]      PS ID
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
kal_bool sbp_query_md_feature_no_overwrite_by_ps(sbp_md_feature_enum feature, protocol_id_enum ps_id)
{
    kal_uint8 *bitmask_ptr;
    kal_uint32 byte_offset;
    kal_uint8 bit_offset;
    kal_bool result;

#ifndef __L1_STANDALONE__
    static sbp_md_feature_enum latest_queried_sbp[MAX_SIM_NUM];
#endif

    if (feature >= SBP_MAX_MD_FEATURE)
    {
        ASSERT(0);
    }
    if (ps_id >=MAX_SIM_NUM)
    {
        kal_brief_trace(TRACE_ERROR, ERROR_SBP_INVALID_PS_ID, ps_id);
        return KAL_FALSE;
    }

    byte_offset = feature / 8;
    bit_offset = feature % 8;
    bitmask_ptr = &(sbp_cntxt_g[ps_id].modem_sbp_config[byte_offset]);

    result = (((*bitmask_ptr) & (0x01 << bit_offset)) != 0)? KAL_TRUE : KAL_FALSE;

#ifndef __L1_STANDALONE__
    if (latest_queried_sbp[ps_id] != feature)
    {
        kal_brief_trace(TRACE_GROUP_1, INFO_SBP_FEATURE, ps_id, feature, result);
        latest_queried_sbp[ps_id] = feature;
    }
#endif


    return result;
}


/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature()
*
* DESCRIPTION
*   This function is used to set modem configuration
*
* PARAMETERS
*   feature         [IN]    modem feature
*   is_turned_on    [IN]
*   sbp_feature_ptr [IN/OUT]
*
* RETURNS
*   KAL_TRUE if success; otherwise KAL_FALSE
*****************************************************************************/
kal_bool sbp_set_md_feature(sbp_md_feature_enum feature,
                            kal_bool is_turned_on, 
                            nvram_ef_sbp_modem_config_struct *sbp_feature_ptr)
{
    kal_uint8 *bitmask_ptr;
    kal_uint32 byte_offset;
    kal_uint8 bit_offset;
    

    if (feature >= SBP_MAX_MD_FEATURE)
    {
        return KAL_FALSE;
    }
    else
    {
        byte_offset = feature / 8;
        bit_offset = feature % 8;
        bitmask_ptr = &(sbp_feature_ptr->modem_sbp_config[byte_offset]);
        if (is_turned_on == KAL_TRUE)
        {
            *bitmask_ptr = ((*bitmask_ptr) | (0x01 << bit_offset));
        }
        else
        {
            *bitmask_ptr = ((*bitmask_ptr) & ~(0x01 << bit_offset));
        }
    }
    
    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature_by_ps()
*
* DESCRIPTION
*   This function is used to set modem configuration by PS
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   feature         [IN]    modem feature
*   is_turned_on    [IN]
*   sbp_feature_ptr [IN/OUT]
*
* RETURNS
*   KAL_TRUE if success; otherwise KAL_FALSE
*****************************************************************************/
kal_bool sbp_set_md_feature_by_ps(sbp_md_feature_enum feature,
                            kal_bool is_turned_on, 
                            protocol_id_enum ps_id)
{
    kal_uint8 *bitmask_ptr;
    kal_uint32 byte_offset;
    kal_uint8 bit_offset;

    if (feature >= SBP_MAX_MD_FEATURE)
    {
        return KAL_FALSE;
    }
    else
    {
        byte_offset = feature / 8;
        bit_offset = feature % 8;
        bitmask_ptr = &(sbp_cntxt_g[ps_id].modem_sbp_config[byte_offset]);
        if (is_turned_on == KAL_TRUE)
        {
            *bitmask_ptr = ((*bitmask_ptr) | (0x01 << bit_offset));
        }
        else
        {
            *bitmask_ptr = ((*bitmask_ptr) & ~(0x01 << bit_offset));
        }

#ifndef __L1_STANDALONE__
        kal_brief_trace(TRACE_INFO, INFO_SBP_SET_FEATURE, ps_id, feature, is_turned_on);
#endif
    }
    
    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_general_set_md_feature()
*
* DESCRIPTION
*   This function is used to set modem configuration.
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   feature         [IN]    modem feature
*   is_turned_on    [IN]
*
* RETURNS
*   KAL_TRUE if success; otherwise KAL_FALSE
*****************************************************************************/
kal_bool sbp_general_set_md_feature(sbp_md_feature_enum feature, kal_bool is_turned_on)
{
    kal_uint8 i;

    if (feature >= SBP_MAX_MD_FEATURE)
    {
        return KAL_FALSE;
    }
    else
    {
        for (i=0; i<MAX_SIM_NUM; i++)
            sbp_set_md_feature_by_ps( feature, is_turned_on, i);
    }

    return KAL_TRUE;
}



/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data()
*
* DESCRIPTION
*   This function is used to query modem configuration data
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
kal_uint8 sbp_query_md_feature_data(sbp_md_feature_data_enum feature)
{

    return sbp_query_md_feature_data_by_ps(feature, PROTOCOL_1);
}

#ifdef __CDMA2000_RAT__
/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data_for_c2k()
*
* DESCRIPTION
*   This function is used to query modem configuration and used by C2K team only
*   The function will judge current active PS using C2K's API and return the corresponding setting.
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
kal_uint8 sbp_query_md_feature_data_for_c2k(sbp_md_feature_data_enum feature)
{
    protocol_id_enum ps_id = ValCurrentActiveSimIndex();

    if (ps_id >= MAX_SIM_NUM)
    {
        #ifndef __L1_STANDALONE__
        kal_brief_trace(TRACE_ERROR, ERROR_SBP_INVALID_PS_ID, ps_id);
        #endif
        
        return 0;
    }

    return sbp_query_md_feature_data_by_ps(feature, ps_id);
}
#endif


/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data_by_ps()
*
* DESCRIPTION
*   This function is used to query modem configuration data
*
* PARAMETERS
*   feature [IN]    modem feature
*   ps_id [IN]      PS ID
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
kal_uint8 sbp_query_md_feature_data_by_ps(sbp_md_feature_data_enum feature, protocol_id_enum ps_id)
{
    kal_uint8 result;
#ifndef __L1_STANDALONE__
    static sbp_md_feature_data_enum latest_queried_sbp[MAX_SIM_NUM];
#endif

    if (feature >= SBP_DATA_MAX_MD_FEATURE)
    {
        ASSERT(0);
    }
    if (ps_id >=MAX_SIM_NUM)
    {
        kal_brief_trace(TRACE_ERROR, ERROR_SBP_INVALID_PS_ID, ps_id);
        return 0;
    }

    result = sbp_cntxt_g[ps_id].modem_sbp_data_config[feature];

    //For GCF or other test modes, you may overwrite the result.
    result = sbp_md_feature_data_overwrite(feature, result);

#ifndef __L1_STANDALONE__
    if (latest_queried_sbp[ps_id] != feature)
    {
        kal_brief_trace(TRACE_GROUP_1, INFO_SBP_DATA, ps_id, feature, result);
        latest_queried_sbp[ps_id] = feature;
    }
#endif

    return result;
}

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data_no_overwrite()
*
* DESCRIPTION
*   This function is used to query modem configuration data without overwrite
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
kal_uint8 sbp_query_md_feature_data_no_overwrite(sbp_md_feature_data_enum feature)
{
    return sbp_query_md_feature_data_no_overwrite_by_ps(feature, PROTOCOL_1);
}

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data_no_overwrite_by_ps()
*
* DESCRIPTION
*   This function is used to query modem configuration data without overwrite
*
* PARAMETERS
*   feature [IN]    modem feature
*   ps_id [IN]      PS ID
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
kal_uint8 sbp_query_md_feature_data_no_overwrite_by_ps(sbp_md_feature_data_enum feature, protocol_id_enum ps_id)
{
    kal_uint8 result;
#ifndef __L1_STANDALONE__
    static sbp_md_feature_data_enum latest_queried_sbp[MAX_SIM_NUM];
#endif

    if (feature >= SBP_DATA_MAX_MD_FEATURE)
    {
        ASSERT(0);
    }
    if (ps_id >=MAX_SIM_NUM)
    {
        kal_brief_trace(TRACE_ERROR, ERROR_SBP_INVALID_PS_ID, ps_id);
        return 0;
    }

    result = sbp_cntxt_g[ps_id].modem_sbp_data_config[feature];


#ifndef __L1_STANDALONE__
    if (latest_queried_sbp[ps_id] != feature)
    {
        kal_brief_trace(TRACE_GROUP_1, INFO_SBP_DATA, ps_id, feature, result);
        latest_queried_sbp[ps_id] = feature;
    }
#endif

    return result;
}


/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature_data()
*
* DESCRIPTION
*   This function is used to set modem configuration data
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
kal_bool sbp_set_md_feature_data(sbp_md_feature_data_enum feature, 
                                 kal_uint8 data, 
                                 nvram_ef_sbp_modem_data_config_struct *sbp_data_ptr)
{
    if (feature >= SBP_DATA_MAX_MD_FEATURE)
    {
        return KAL_FALSE;
    }
    else
    {
        sbp_data_ptr->modem_sbp_data_config[feature] = data;
    }
    
    return KAL_TRUE;
}


/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature_data_by_ps()
*
* DESCRIPTION
*   This function is used to set modem configuration data by PS
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
kal_bool sbp_set_md_feature_data_by_ps(sbp_md_feature_data_enum feature, 
        kal_uint8 data, 
        protocol_id_enum ps_id)
{
    if (feature >= SBP_DATA_MAX_MD_FEATURE)
    {
        return KAL_FALSE;
    }
    else
    {
        sbp_cntxt_g[ps_id].modem_sbp_data_config[feature]= data;

#ifndef __L1_STANDALONE__
        kal_brief_trace(TRACE_INFO, INFO_SBP_SET_DATA, ps_id, feature, data);
#endif
    }
    
    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_general_set_md_feature_data()
*
* DESCRIPTION
*   This function is used to set modem configuration data
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
kal_bool sbp_general_set_md_feature_data(sbp_md_feature_data_enum feature, kal_uint8 data)
{
    kal_uint8 i;

    if (feature >= SBP_DATA_MAX_MD_FEATURE)
    {
        return KAL_FALSE;
    }
    else
    {
        for (i=0; i< MAX_SIM_NUM; i++)
            sbp_set_md_feature_data_by_ps(feature, data, i);
    }
    
    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_query_id()
*
* DESCRIPTION
*   This function is used to query SBP ID received by modem
*
* PARAMETERS
*   [IN]    N/A
*
* RETURNS
*   the unsigned 4-byte value for the SBP ID
*****************************************************************************/
kal_uint32 sbp_query_id(void)
{
    return sbp_common_cntxt_g.sbp_id;
}

/*****************************************************************************
* FUNCTION
*   sbp_query_sub_id()
*
* DESCRIPTION
*   This function is used to query SBP Sub ID received by modem
*
* PARAMETERS
*   [IN]    N/A
* RETURNS
*   the unsigned 4-byte value for the SBP Sub ID
*****************************************************************************/
kal_uint32 sbp_query_sub_id(void)
{
    return sbp_common_cntxt_g.sbp_sub_id;
}


/*****************************************************************************
* FUNCTION
*   sbp_init_contexts()
*
* DESCRIPTION
*   This function is used to init SBP Contexts
*
* PARAMETERS
*   [IN]    N/A
*
* RETURNS
*   KAL_TRUE or KAL_FALSE
*****************************************************************************/
kal_bool sbp_init_contexts()
{
//    kal_uint8 i;
    nvram_ef_sbp_ids_struct sbp_id_buf;

    nvram_external_read_data(NVRAM_EF_SBP_IDS_LID, 
            1, 
            (kal_uint8*)&sbp_id_buf, 
            NVRAM_EF_SBP_IDS_SIZE);

    // prepare SBP Context
    sbp_common_cntxt_g.sbp_id = sbp_id_buf.sbp_id;
    sbp_common_cntxt_g.sbp_sub_id= 0;
    sbp_common_cntxt_g.test_mode = sbp_id_buf.test_mode;
//    for (i=0; i<MAX_SIM_NUM; i++)
//        sbp_cntxt_g[i].sim_sbp_id = sbp_id_buf.sim_sbp_id[i];

    default_sbp_id = sbp_id_buf.sbp_id;

    //kal_prompt_trace(MOD_SBP, "NVRAM SBP ID: ", sbp_common_cntxt_g.sbp_id);


    return KAL_TRUE;
}


/*****************************************************************************
* FUNCTION
*   sbp_set_sbp_id()
*
* DESCRIPTION
*   This function is used to set SBP ID into SBP contexts and its NVRAM
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   [IN]    N/A
*
* RETURNS
*   KAL_TRUE or KAL_FALSE
*****************************************************************************/
kal_bool sbp_set_sbp_id(kal_uint32 sbp_id)
{
    nvram_ef_sbp_ids_struct sbp_id_buf;

    sbp_common_cntxt_g.sbp_id = sbp_id;
    // Currently, SBP sub ID in the conext will be always the same with default SBP Sub ID form CCCI.
    sbp_common_cntxt_g.sbp_sub_id = default_sbp_sub_id;     

    nvram_external_read_data(NVRAM_EF_SBP_IDS_LID, 
            1, 
            (kal_uint8*)&sbp_id_buf, 
            NVRAM_EF_SBP_IDS_SIZE);

    sbp_id_buf.sbp_id = sbp_id;

    nvram_external_write_data(NVRAM_EF_SBP_IDS_LID,
            1,
            (kal_uint8*)&sbp_id_buf,
            NVRAM_EF_SBP_IDS_SIZE);


    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  sbp_convert_mcc_mnc_string_from_imsi
 * DESCRIPTION
 *  get mcc, mnc from imsi with string format
 * PARAMETERS
 *  imsi
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool sbp_convert_mcc_mnc_string_from_imsi(kal_uint8* mcc_ptr, kal_uint32 mcc_size, kal_uint8 *mnc_ptr, kal_uint32 mnc_size, kal_uint8* imsi_ptr, kal_uint8 mnc_len)
{
    if (!mcc_ptr || !mnc_ptr || !imsi_ptr)
    {
        return KAL_FALSE;
    }

    if ((mcc_size < MAX_MCC_STR_LEN) || (mnc_size < MAX_MNC_STR_LEN ))
    {
        return KAL_FALSE;
    }

    if ((mnc_len != 2) && (mnc_len != 3))
    {
        return KAL_FALSE;
    }
    
    /* get mcc/mnc and convert to ASCII */
    mcc_ptr[0] = (imsi_ptr[0] >> 4) + 48;   //mcc1
    mcc_ptr[1] = (imsi_ptr[1] & 0x0F) + 48; //mcc2
    mcc_ptr[2] = (imsi_ptr[1] >> 4) + 48;   //mcc3
    mcc_ptr[3] = 0;
    
    mnc_ptr[0] = (imsi_ptr[2] & 0x0F) + 48; //mnc1
    mnc_ptr[1] = (imsi_ptr[2] >> 4) + 48;   //mnc2
    if (mnc_len == 3)
    {
        mnc_ptr[2] = (imsi_ptr[3] & 0x0F) + 48; //mnc3
    }

    mnc_ptr[mnc_len] = 0;

    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_get_sim_sbp_id()
*
* DESCRIPTION
*   get SIM SBP ID for current PS
*
* PARAMETERS
*   ps_id   [IN]    protocol ID
*
* RETURNS
*   the unsigned 4-byte value for the SIM SBP ID
*
*****************************************************************************/
kal_uint32 sbp_get_sim_sbp_id(protocol_id_enum ps_id)
{
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
#endif
    return sbp_cntxt_g[ps_id].sim_sbp_id;
     
}


/*****************************************************************************
* FUNCTION
*   sbp_set_sim_sbp_id()
*
* DESCRIPTION
*   set SIM SBP ID for current PS
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*   sim_sbp_id  [IN]    SIM SBP ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
kal_bool sbp_set_sim_sbp_id(protocol_id_enum ps_id, kal_uint32 sim_sbp_id)
{
    kal_uint8 *nvram_buf_ptr = (kal_uint8 *)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_SBP_IDS_SIZE);
    nvram_ef_sbp_ids_struct *nvram_ef_sbp_ids_ptr;

    sbp_cntxt_g[ps_id].sim_sbp_id = sim_sbp_id;

     // read VDM ims_reconfig_enable setting first
     /* to use ps_id instead of l4c_gemini_get_actual_sim_id(ps_id),
        SIM SBP ID NVRAM LID is combined with protocol stack, not SIM slot
     */
     nvram_external_read_data(NVRAM_EF_SBP_IDS_LID,
                             1,
                             nvram_buf_ptr,
                             NVRAM_EF_SBP_IDS_SIZE);
                             
     nvram_ef_sbp_ids_ptr = (nvram_ef_sbp_ids_struct *)nvram_buf_ptr;

     nvram_ef_sbp_ids_ptr->sim_sbp_id[ps_id] = sim_sbp_id;

     nvram_external_write_data(NVRAM_EF_SBP_IDS_LID,
                               1,
                               nvram_buf_ptr,
                               NVRAM_EF_SBP_IDS_SIZE);
 
     // Free allocated buffer
     if (nvram_buf_ptr != NULL)
     {
         free_ctrl_buffer(nvram_buf_ptr);
         nvram_buf_ptr = NULL;
     }

     return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_get_sbp_feature_raw_config()
*
* DESCRIPTION
*   Get SBP Feature Raw Data according to the ps_id
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
kal_bool sbp_get_sbp_feature_raw_config(protocol_id_enum ps_id, kal_uint8 *raw_config)
{
    kal_mem_cpy(raw_config, sbp_cntxt_g[ps_id].modem_sbp_config, (SBP_MAX_MD_FEATURE/8)+1);
    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_get_sbp_data_raw_config()
*
* DESCRIPTION
*   Get SBP Data Raw Data according to the ps_id
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
kal_bool sbp_get_sbp_data_raw_config(protocol_id_enum ps_id, kal_uint8 *raw_config)
{
    kal_mem_cpy(raw_config, sbp_cntxt_g[ps_id].modem_sbp_data_config, SBP_DATA_MAX_MD_FEATURE);
    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_update_features_to_nvram()
*
* DESCRIPTION
*   This function is used to store current config of features from SBP contexts into NVRAM_EF_SBP_MODEM_CONFIG_LID
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
kal_bool sbp_update_features_to_nvram()
{
    nvram_ef_sbp_modem_config_struct sbp_local_config;

    sbp_local_config.sbp_mode = SBP_ID_INVALID;
    kal_mem_cpy(sbp_local_config.modem_sbp_config, sbp_cntxt_g[SIM1].modem_sbp_config, (SBP_MAX_MD_FEATURE/8)+1);

    nvram_external_write_data(NVRAM_EF_SBP_MODEM_CONFIG_LID, 
            1, 
            (kal_uint8*)&sbp_local_config, 
            NVRAM_EF_SBP_MODEM_CONFIG_SIZE);

    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_update_data_to_nvram()
*
* DESCRIPTION
*   This function is used to store current config of data from SBP contexts into NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
kal_bool sbp_update_data_to_nvram()
{
    nvram_ef_sbp_modem_data_config_struct sbp_local_config;

    sbp_local_config.sbp_mode = SBP_ID_INVALID;
    kal_mem_cpy(sbp_local_config.modem_sbp_data_config, sbp_cntxt_g[SIM1].modem_sbp_data_config, SBP_DATA_MAX_MD_FEATURE);

    nvram_external_write_data(NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID, 
            1, 
            (kal_uint8*)&sbp_local_config, 
            NVRAM_EF_SBP_MODEM_DATA_CONFIG_SIZE);

    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sbp_reload_config()
*
* DESCRIPTION
*   This function is used to reload SBP related feature/data configuration
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
void sbp_reload_config()
{
    kal_bool result;
    kal_uint8 i;
    nvram_ef_sbp_modem_config_struct sbp_feature_buf;
    nvram_ef_sbp_modem_data_config_struct sbp_data_buf;

    /* load SBP file */
    result = nvram_external_read_data(NVRAM_EF_SBP_MODEM_CONFIG_LID, 
            1, 
            (kal_uint8*)&sbp_feature_buf, 
            NVRAM_EF_SBP_MODEM_CONFIG_SIZE);
    if (result == KAL_TRUE)
    {
        for (i=0; i<MAX_SIM_NUM; i++)
        {
            kal_mem_cpy(&sbp_cntxt_g[i].modem_sbp_config, sbp_feature_buf.modem_sbp_config, (SBP_MAX_MD_FEATURE/8)+1);
        }
    }
    else
    {
        kal_sys_trace("Reload SBP features settings from NVRAM fail");
    }
        

    result = nvram_external_read_data(NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID, 
            1, 
            (kal_uint8*)&sbp_data_buf, 
            NVRAM_EF_SBP_MODEM_DATA_CONFIG_SIZE);

    if (result == KAL_TRUE)
    {
        for (i=0; i<MAX_SIM_NUM; i++)
        {
            kal_mem_cpy(&sbp_cntxt_g[i].modem_sbp_data_config, sbp_data_buf.modem_sbp_data_config, SBP_DATA_MAX_MD_FEATURE);
        }
    }
    else
    {
        kal_sys_trace("Reload SBP data settings from NVRAM fail");
    }

    
}