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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __RR_NVRAM_DEF_H__
#define __RR_NVRAM_DEF_H__

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
        NVRAM_EF_BAND_INFO_LID          = NVRAM_LID_GRP_RR(0), 
        NVRAM_EF_BAND_BLOCK_LID,
        NVRAM_EF_GAS_CSG_FINGERPRINT_LID,
        /* GAS mcc and working band table */
        NVRAM_EF_GAS_WORKING_BAND_INFO_LID,     
        NVRAM_EF_RR_LAST_LID            = NVRAM_LID_GRP_RR(63)
}nvram_lid_rr_enum;

// VERNO
#define  NVRAM_EF_BAND_INFO_LID_VERNO                        "000"
#define  NVRAM_EF_GAS_WORKING_BAND_INFO_LID_VERNO            "000"
#ifdef __BAND_BLOCK__
#define NVRAM_EF_BAND_BLOCK_LID_VERNO                        "001"
#endif
#define  NVRAM_EF_GAS_CSG_FINGERPRINT_LID_VERNO              "000"



// Size and Total 
/** BAND_INFO
 *
 */
#define NVRAM_EF_BAND_INFO_SIZE            6
#define NVRAM_EF_BAND_INFO_TOTAL           (1 * NVRAM_DUAL_RECORD)

/** GAS_WORKING_BAND_INFO
 *
 */
#define NVRAM_EF_GAS_WORKING_BAND_INFO_SIZE            250
#define NVRAM_EF_GAS_WORKING_BAND_INFO_TOTAL           (1 * NVRAM_DUAL_RECORD)

/** GAS_CSG_FINGERPRINT
 *
 */

#define NVRAM_EF_GAS_CSG_FINGERPRINT_SIZE     sizeof(nvram_ef_gas_csg_fingerprint_struct)
#define NVRAM_EF_GAS_CSG_FINGERPRINT_TOTAL    1

/*
 * BAND_BLOCK
 */
#ifdef __BAND_BLOCK__
#define NVRAM_EF_BAND_BLOCK_SIZE            52
#define NVRAM_EF_BAND_BLOCK_TOTAL           1
#endif /* __BAND_BLOCK__ */

#ifdef __cplusplus
}
#endif 

#endif /* __RR_NVRAM_DEF_H__ */ 
