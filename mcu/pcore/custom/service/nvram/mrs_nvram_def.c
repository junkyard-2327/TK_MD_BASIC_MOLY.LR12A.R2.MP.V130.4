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
 * mrs_nvram_def.c
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file is used to set the default value of MRS NVRAM LID items.
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
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
#include "mrs_nvram_def.h" 
#include "mrs_nvram_editor.h" 


static nvram_ef_mrs_as_black_cell_list_struct const NVRAM_EF_MRS_AS_BLACK_CELL_LIST_DEFAULT[] = 
{
    {//NVRAM_EF_MRS_AS_BLACK_CELL_LIST_DEFAULT[0]
        0,  //num
        {   //black_list[50]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[0]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[1]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[2]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[3]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[4]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[5]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[6]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[7]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[8]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[9]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[10]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[11]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[12]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[13]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[14]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[15]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[16]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[17]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[18]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[19]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[20]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[21]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[22]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[23]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[24]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[25]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[26]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[27]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[28]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[29]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[30]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[31]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[32]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[33]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[34]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[35]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[36]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[37]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[38]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[39]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[40]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[41]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[42]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[43]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[44]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[45]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[46]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[47]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }, //[48]
        { KAL_FALSE, NVRAM_EF_RAT_NONE, {0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0, 0 }  //[49]
        }
    }
};



/*
 *   LID table
 */
ltable_entry_struct logical_data_item_table_mrs[] =
{
    {
        NVRAM_EF_MRS_AS_BLACK_CELL_LIST_LID,
        NVRAM_EF_MRS_AS_BLACK_CELL_LIST_TOTAL,
        NVRAM_EF_MRS_AS_BLACK_CELL_LIST_SIZE,
        NVRAM_NORMAL(NVRAM_EF_MRS_AS_BLACK_CELL_LIST_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "MR1A",
        VER(NVRAM_EF_MRS_AS_BLACK_CELL_LIST_LID)
    },
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
