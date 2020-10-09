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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "kal_public_api.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "nvram_editor_data_item.h"


/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_rrc_dynamic_cap
 * DESCRIPTION
 *  Pre-process nvram data items forRRC at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_rrc_dynamic_cap(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_uint8* nvram_read_buf_ptr = NULL, *nvram_read_buf_tdd_ptr = NULL;
    nvram_ef_umts_usime_rrc_dynamic_fdd_struct* pUMTS_USIME_RRC_dynamic_cap;
    nvram_ef_umts_usime_rrc_dynamic_tdd_struct* pUMTS_USIME_RRC_dynamic_tdd_cap;
    kal_bool is_nvram_need_update = KAL_FALSE;
    kal_uint32 sbp_id = param_ptr->sbp_id;


    // Allocate buffer to read NVRAM setting
    nvram_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE);
    nvram_read_buf_tdd_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE);


    // Read NVRAM setting
    nvram_external_read_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
                             1,
                             nvram_read_buf_ptr,
                             NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE);
    pUMTS_USIME_RRC_dynamic_cap = (nvram_ef_umts_usime_rrc_dynamic_fdd_struct*)nvram_read_buf_ptr;
    nvram_external_read_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
                             1,
                             nvram_read_buf_tdd_ptr,
                             NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE);
    pUMTS_USIME_RRC_dynamic_tdd_cap = (nvram_ef_umts_usime_rrc_dynamic_tdd_struct*)nvram_read_buf_tdd_ptr;

    switch (sbp_id)
    {
        case 3: /* Orange */
            pUMTS_USIME_RRC_dynamic_cap->rrce_feature_cap |= 0x10;  
            pUMTS_USIME_RRC_dynamic_tdd_cap->rrce_feature_cap |= 0x10;  
           
            is_nvram_need_update = KAL_TRUE;
            break;
        case 20: /*Sprint*/
        case 50: /*Softbank*/
            /* ALPS02096485: SoftBank requests UE to set supportOfInterRATHOToEUTRAFDD
             * and supportOfInterRATHOToEUTRATDD to FALSE.
             */
            #ifdef __LTE_RAT__
            #if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R9__)
            pUMTS_USIME_RRC_dynamic_cap->r8_cap1 &= 0xF7; //set r8_cap1 bit 4 to 0
            pUMTS_USIME_RRC_dynamic_cap->r8_cap2 &= 0x7F; //set r8_cap2 bit 8 to 0

            is_nvram_need_update = KAL_TRUE;
            #endif
            #endif //LTE_RAT
            break;
        case 140: /* MTN */		
#if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R8__)
           /* eFACH/eRACH/eDRX feature enable */
        	  pUMTS_USIME_RRC_dynamic_cap->r7_cap1 |= 0x04; //_MAC_EHS_SUPPORT

        	  //__CUSTOMIZE_ENHANCED_COMMON_STATE_SUPPORT__
        	  pUMTS_USIME_RRC_dynamic_cap->r7_cap1 |= 0x40; //hsdschReceptionCellUraPch (bit 7)
        	  pUMTS_USIME_RRC_dynamic_cap->r7_cap1 |= 0x20; //hsdschReceptionCellFach (bit 6)

        	  //__CUSTOMIZE_HSDSCH_DRX_CELL_FACH_SUPPORT__
        	  pUMTS_USIME_RRC_dynamic_cap->r8_cap1 |= 0x02; //supportOfHsdschDrxOperation (bit 2)

        	  //__CUSTOMIZE_MAC_IIS_SUPPORT
        	  pUMTS_USIME_RRC_dynamic_cap->r8_cap2 |= 0x04; //supportOfMACiis  (bit 3)

        	  //__CUSTOMIZE_COMMON_EDCH_SUPPORT__
        	  pUMTS_USIME_RRC_dynamic_cap->r8_cap2 |= 0x02; // supportOfCommonEDCH  (bit 2)

        	  is_nvram_need_update = KAL_TRUE;
#endif
        	  break;
        default:
            // No need to update NVRAM
            is_nvram_need_update = KAL_FALSE;
            break;
    }

    // Update NVRAM setting if needed
    if (is_nvram_need_update == KAL_TRUE)
    {
        nvram_external_write_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
                                  1,
                                  nvram_read_buf_ptr,
                                  NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE);
        nvram_external_write_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
                                  1,
                                  nvram_read_buf_tdd_ptr,
                                  NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE);
    }

    // Free allocated buffer
    if (nvram_read_buf_ptr != NULL)
    {
        free_ctrl_buffer(nvram_read_buf_ptr);
        nvram_read_buf_ptr = NULL;
    }
    if (nvram_read_buf_tdd_ptr != NULL)
    {
        free_ctrl_buffer(nvram_read_buf_tdd_ptr);
        nvram_read_buf_tdd_ptr = NULL;
    }

    return is_nvram_need_update;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_reset_rrc_dynamic_cap
 * DESCRIPTION
 *  This function will reset nvram parameters to the default value for NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_LID.
 * PARAMETERS
 *   old_sbp_id   previously SBP ID which is used to change the configuration of NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_LID
 * RETURNS
 *****************************************************************************/
void nvram_custom_reset_rrc_dynamic_cap(kal_uint32 old_sbp_id)
{
    kal_uint8* nvram_write_buf_ptr = NULL;

    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
            1,
            &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
            1,
            nvram_write_buf_ptr,
            NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE);
    }

    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
            1,
            &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
            1,
            nvram_write_buf_ptr,
            NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE);
    }
}
