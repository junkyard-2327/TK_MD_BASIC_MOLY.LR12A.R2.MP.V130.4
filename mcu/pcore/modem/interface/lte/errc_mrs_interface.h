/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

/****************************************************************************
 * Filename:
 * ---------
 *   errc_mrs_interface.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   ERRC MRS interface functions
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 01 25 2017 menghau.wu
 * [MOLY00217129] [MT6293] code sync from UMOLY (Phase4)
 * UMOLY CR : [MOLY00223173] [6292][Gemini][L+L][Merge LR12][WCS/SE3/PS1~PS15]
 * UMOLY CL : 3370203
 *
 * 03 09 2016 sabrina.hsu
 * [MOLY00156230] [6292] ERRC code sync LR11 to UMOLY
 * merge LR11 CL 1801342 [MOLY00148166]CT CA capability query support
 *
 * 02 17 2016 sabrina.hsu
 * [MOLY00156230] [6292] ERRC code sync LR11 to UMOLY
 * mrs/nvram/sbp merge
 *
 *
 ****************************************************************************/

#ifndef _ERRC_MRS_INTERFACE_H_
#define _ERRC_MRS_INTERFACE_H_

#include "kal_general_types.h"
#include "mrs_as_enums.h"
#include "mrs_as_struct.h"

/****************************************************************************
 * FUNCTION
 *     errc_ue_eutra_capability_get
 *
 * DESCRIPTION
 *     Get the encoded UE-EUTRA-Capability IE as defined in 36.311
 *
 * PARAMETERS
 *     @param
 *         MRS_SIM_INDEX sim_index:
 *            SIM Index (currently, only the value 'MRS_SIM1' is supported).
 *     @param
 *         kal_uint8 **pp_ue_eutra_capa:
 *             Address of pointer to the encoded UE-EUTRA-Capability IE.
 *             Function allocates memory for the encoded IE and sets the
 *             pointer (*pp_ue_eutra_capa) to point to it. 
 *             Caller is responsible for releasing the memory.
 *     @param
 *         mrs_plmn_id_list *p_plmn_id_list
 *             The list of PLMN Id on which UE camped.
 *             NOTE: The mnc3 should be set to 0x00 or 0x0F if it's not
 *                   being used. (i.e. 5 digits PLMN Id)
 * RETURNS
 *    @return
 *        kal_uint32: Length of the encoded UE-EUTRA-Capability IE in bytes.
 *
 * GLOBALS AFFECTED
 ****************************************************************************/

kal_uint32 errc_ue_eutra_capability_get(
    MRS_SIM_INDEX sim_index, kal_uint8 **pp_ue_eutra_capa, mrs_plmn_id_list *p_plmn_id_list);

/****************************************************************************
 * FUNCTION
 *     errc_rcm_any_get_ue_category
 *
 * DESCRIPTION
 *     Get the LTE UE category
 *
 * PARAMETERS
 *     @param
 *       void
 * RETURNS
 *    @return
 *        kal_uint8: LTE UE categoty defined by ERRC RCM
 *
 * GLOBALS AFFECTED
 ****************************************************************************/
kal_uint8 errc_rcm_any_get_ue_category(void);

#if defined(__GEMINI_LTE__) && defined(UNIT_TEST)     //Gemini Multi LTE UT
/****************************************************************************
 * FUNCTION
 *     errc_ut_duplicate_nvram_for_multiSIM
 *
 * DESCRIPTION
 *     Function called by MRS_EAS to get ERRC MoDIS ut_duplicate_nvram_multiSIM setting
 *
 * PARAMETERS
 *     @param
 *       void
 * RETURNS
 *    @return
 *        0: default duplicate NVRAM fro other SIM; 1: no duplicating, setting nvram is invoked by MSC
 *
 * GLOBALS AFFECTED
 ****************************************************************************/
kal_uint8 errc_ut_duplicate_nvram_for_multiSIM(void);
#endif    // defined(__GEMINI_LTE__) && defined(UNIT_TEST)

#endif /* _ERRC_MRS_INTERFACE_H_ */
