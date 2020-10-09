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
*  LAWS PRINIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef __CUSTOM_D2_CONFIG_H__
#define __CUSTOM_D2_CONFIG_H__

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "module_id_range.h"
#include "kal_trace.h"
#include "pdn_public_defs.h"
#include "d2pm_public_defs.h"
#include "d2cm_public_defs.h"
#include "d2pm_d2rm_struct.h"
#include "ddm_l4bnw_struct.h"

typedef enum
{
    DDM_EVENT_IS_CLEAN_TABLE,
    DDM_EVENT_IS_INDEX_CONFLICT,
    DDM_EVENT_MAX = 0x7FFFFFFF
}ddm_deact_event_enum;

// Type definitions
// => D2PM
typedef void (*d2pm_custom_pdn_profile_tbl_cb_t) (kal_uint8 ps_id, const d2pm_custom_pdn_profile_struct *profile_ptr, void* arg);
// => D2CM
typedef void (*d2cm_custom_usr_profile_tbl_cb_t) (kal_uint8 ps_id, const d2cm_custom_usr_profile_struct *profile_ptr, void* arg);
typedef enum
{
    D2CM_BYPASS_EVENT_NONE = 0x00000000, 
    D2CM_BYPASS_EVENT_HO = 0x00000001, 
    D2CM_BYPASS_EVENT_GET_RETRY_TMR = 0x00000002, 
    D2CM_BYPASS_EVENT_RESET_RETRY_TMR = 0x00000003, 
    D2CM_BYPASS_EVENT_CGCONTRDP = 0x00000004, 
    D2CM_BYPASS_EVENT_MAX = 0x7FFFFFFF
}d2cm_bypass_event_enum;

// Macros
#define D2CM_CUSTOM_MOD_ID_START    (MOD_ID_END)
#define D2CM_CUSTOM_MOD_ID_UT    (D2CM_CUSTOM_MOD_ID_START + 1)
#define D2CM_CUSTOM_MOD_ID_OP    (D2CM_CUSTOM_MOD_ID_START + 2)
#define MOD_D2CUST    (MOD_DAST)
#ifdef __GEMINI__
#define MOD_D2CUST_2    (MOD_DAST_2)
#if (GEMINI_PLUS >= 3)
#define MOD_D2CUST_3    (MOD_DAST_3)
#if (GEMINI_PLUS >= 4)
#define MOD_D2CUST_4    (MOD_DAST_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */

typedef void (*ddm_deact_dangling_cid_ptr)(unsigned int d2_ps_id, kal_uint32 cid, ddm_deact_event_enum reason);
// APIs
extern void custom_d2_init();
extern kal_bool custom_reset_data_retry(kal_uint32 sbp_id, apn_data_retry_info_t *apn_retry_info, retrytime_reset_event_enum event);
extern void custom_handle_data_retry(kal_uint32 sbp_id, apn_data_retry_info_t *apn_retry_info, kal_uint16 err_cause, kal_uint32 ps_id, rat_enum rat, kal_uint8 *plmn, kal_bool is_roaming);
extern kal_bool custom_d2_keep_internet_pdn(kal_uint32 cid, kal_uint8 ps_id, kal_bool mobile_data_on, kal_bool data_switch_on, rat_enum rat);
extern kal_bool custom_d2_signalling_flag(kal_bool apn_type_is_ims, kal_uint32 default_sbp_id, kal_uint32 sbp_id, char *apn);
extern kal_bool custom_d2_pcscf_discovery_flag(kal_uint32 apn_type_is_ims, kal_uint32 default_sbp_id, kal_uint32 sbp_id, char *apn);
extern kal_bool custom_d2_need_to_fallback(kal_uint32 sbp_id, kal_uint16 err_cause);
// => D2PM
extern int d2pm_iterate_custom_pdn_profile_tbl (unsigned int ps_id, d2pm_custom_pdn_profile_tbl_cb_t cb, void *arg);
extern kal_bool d2pm_is_apn_idx_reuseable (unsigned int ps_id, const char *apn, int dst_apn_idx, int src_apn_idx);
// => D2CM
extern size_t d2cm_sizeof_custom_usr_profile_tbl ();
extern d2cm_custom_usr_profile_struct* d2cm_search_custom_usr_profile_tbl_by_mod (unsigned int ps_id, module_type mod_id);
extern int d2cm_iterate_custom_usr_profile_tbl (unsigned int ps_id, d2cm_custom_usr_profile_tbl_cb_t cb, void *arg);
// => Others
extern void custom_d2_attached_rat_ind(l4bnw_attached_rat_ind_struct *ind, kal_uint8 ps_id);
extern void custom_d2_ia_success(d2ia_ddm_attach_pdn_activate_success_ind_struct *ind, kal_uint8 ps_id);
extern void custom_ddm_register_ddm_deact_dangling_cid(ddm_deact_dangling_cid_ptr func);
extern void custom_ddm_deact_dangling_cid(unsigned int ps_id, kal_uint32 cid, ddm_deact_event_enum reason);
extern kal_bool custom_d2_is_ia_need_fallback(kal_uint32 sbp_id, kal_uint8 ps_id);

/*BEGIN_TRACE_MAP(MOD_D2CUST)
TRC_MSG(D2CUST_DTAG_IMSI, "DTAG IMSI [%s]")
END_TRACE_MAP(MOD_D2CUST)*/

#endif

