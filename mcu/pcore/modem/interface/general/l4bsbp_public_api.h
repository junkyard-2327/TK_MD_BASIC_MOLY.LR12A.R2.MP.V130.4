/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 * Filename:
 * ------------
 *   l4bsbp_public_api.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines functions/enums for external module usage.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 06 07 2018 peter-sl.yeh
 * [MOLY00312598] [DSBP] patch back "D-SBP enhancment for all modem" to UMOLYE and TC01.R3.DEV
 * .
 *
 *
 *****************************************************************************/

#ifndef _L4BSBP_PUBLIC_API_H_
#define _L4BSBP_PUBLIC_API_H_

#include "kal_general_types.h"
#include "sim_exported_enum.h"

#ifndef L4BSBP_DSBP_MODE_DEFINED
#define L4BSBP_DSBP_MODE_DEFINED
typedef enum
{
    L4BSBP_DSBP_MODE_NONE,    // DSBP Disabled
    L4BSBP_DSBP_MODE_1,       // DSBP Enabled
    L4BSBP_DSBP_MODE_2,       // reserved    
} l4bsbp_dsbp_mode_enum;
#endif


/*****************************************************************************
 * FUNCTION
 *  l4bsbp_get_operator_by_plmn_id
 *
 * DESCRIPTION
 *  get SBP ID by PLMN ID (MCC+MNC)
 *
 * PARAMETERS
 *  plmn    [IN]    PLMN ID in integer format, ex. 460-01 = 46001
 *
 * RETURNS
 *  void
 *
 *****************************************************************************/
extern kal_uint32 l4bsbp_get_operator_by_plmn_id(kal_uint32 plmn_id);

/*****************************************************************************
 * FUNCTION
 *  l4bsbp_get_ap_dsbp_mode
 *
 * DESCRIPTION
 *  get AP DSBP Mode (None, Mode_1, Mode2)
 *
 * PARAMETERS
 *  ilm_ptr [IN]
 *
 * RETURNS
 *  void
 *
 *****************************************************************************/
extern l4bsbp_dsbp_mode_enum l4bsbp_get_ap_dsbp_mode(void);

#endif // _VDM_EXTERNAL_LIB_H_
