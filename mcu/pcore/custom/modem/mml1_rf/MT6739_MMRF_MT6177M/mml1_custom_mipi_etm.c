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
 * mml1_custom_mipi_etm.c
 *
 * Project:
 * --------
 * MT6293
 *
 * Description:
 * ------------
 * Multi-Mode RF Central Functions
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/

#include "kal_general_types.h"
#include "mml1_mipi_public.h"
#include "mml1_custom_mipi.h"
#include "mml1_drdi.h"

/***************************************************************************
 * MML1 MIPI ETM Initial CW Table Data
 ***************************************************************************/
#if( defined( IS_MML1_ETM_FRONT_END_ENABLE_SetDefault ) && ( IS_MML1_ETM_FRONT_END_ENABLE_SetDefault == 1 ) )

// Do not modify MML1_ETM_INFO_TABLE context directly, please modify the settings in the header file.
const MML1_ETM_INFORMATION_T MML1_ETM_INFO_TABLE_SetDefault[ MML1_MIPI_ETM_MAX_SUPPORT_NUM ] =
{
   { { MML1_ETM0_MIPI_PORT_SetDefault, MIPI_ETM0_USID_SetDefault }, MML1_ETM0_ET_DAC_INDEX_SetDefault },
};

const MML1_MIPI_SIMPLE_INITIAL_CW_T MML1_MIPI_ETM_INITIAL_CW_SetDefault[ MML1_MIPI_ETM_MAX_INITIAL_CW_NUM ] =
{
   // device_index,                  data_seq,              { addr,    data                                              },   wait_time(us)
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x40,  0x00                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x43,  0x9E                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x4D,  0xEE                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x4E,  0xEE                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x4F,  0x33                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x50,  0x33                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x51,  0x33                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x55,  0x21                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x5E,  0x0E                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x5F,  0x00                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x60,  0x03                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x64,  0x01                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x9C,  0x08                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0x9D,  0x08                          }, 0             },
   { USE_ETM_INDEX_0,      MML1_REG_W_EXT, {0xA1,  0x02                          }, 0             },
   { USE_MIPI_DEVICE_NULL, 0,              {0,     0                             }, 0             },
   { USE_MIPI_DEVICE_NULL, 0,              {0,     0                             }, 0             },
   { USE_MIPI_DEVICE_NULL, 0,              {0,     0                             }, 0             },
   { USE_MIPI_DEVICE_NULL, 0,              {0,     0                             }, 0             },
   { USE_MIPI_DEVICE_NULL, 0,              {0,     0                             }, 0             },
};

#else

const MML1_ETM_INFORMATION_T MML1_ETM_INFO_TABLE_SetDefault[ MML1_MIPI_ETM_MAX_SUPPORT_NUM ] =
{
   { { MML1_ETM0_MIPI_PORT_SetDefault, MIPI_ETM0_USID_SetDefault }, ET_DAC_INDEX_NULL },
};

const MML1_MIPI_SIMPLE_INITIAL_CW_T MML1_MIPI_ETM_INITIAL_CW_SetDefault[ MML1_MIPI_ETM_MAX_INITIAL_CW_NUM ] =
{
   // device_index,                  data_seq,              { addr,    data                                              },   wait_time(us)
   { USE_MIPI_DEVICE_NULL, 0,              {0,     0                             }, 0             },
};

#endif   // #if( defined( IS_MML1_ETM_FRONT_END_ENABLE_SetDefault ) && ( IS_MML1_ETM_FRONT_END_ENABLE_SetDefault == 1 ) )

