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

 /*******************************************************************************
 * Filename:
 * ---------
 *   em_emm_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_EMM_PUBLIC_STRUCT_H
#define _EM_EMM_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_nwsel_common_public_struct.h"

/********************* begin of EMM definition ****************************/

typedef enum
{
    EM_EMM_EU1_UPDATE = 0,
    EM_EMM_EU2_NOT_UPDATE,
    EM_EMM_EU3_ROAMING_NOT_ALLOWED
} em_emm_update_status_enum;

typedef enum
{
    EM_EMM_SIM_REMOVE,
    EM_EMM_SIM_INVALID,
    EM_EMM_SIM_VALID,
} em_emm_sim_status_enum;

typedef enum
{
    EM_EMM_TIN_DELETED    = 0,
    EM_EMM_TIN_PTMSI,
    EM_EMM_TIN_RAT_RELATED_TMSI,
    EM_EMM_TIN_GUTI
} em_emm_tin_enum;

typedef struct
{
    plmn_struct  plmn_id;
    kal_uint8   mme_gid[2];
    kal_uint8   mme_code;
    kal_uint8   mtmsi[4];
} em_emm_guti_struct;

typedef enum
{
    EM_ECM_IDLE=0,
    EM_ECM_CONNECTED
}em_emm_ecm_status_enum;

typedef enum
{
    EM_NORMAL_CELL    = 0,
    EM_CSG_CELL,
    EM_HYBRID_CELL
} em_csg_access_mode_enum;

typedef enum
{
    EM_DUPLEX_TYPE_FDD    = 0,
    EM_DUPLEX_TYPE_TDD,
    EM_DUPLEX_TYPE_UNKNOWN
} em_lte_duplex_type_enum;

typedef enum
{
    EM_TYPE_NONE                    = 0,
    EM_TYPE_SERVICE_REQ,
    EM_TYPE_EXTENDED_SERVICE_REQ,
    EM_TYPE_MAX
} em_sr_type_enum;

// RRC Establishment cause mapping (valid for R11 and earlier implementations)
typedef enum
{
    EM_CAUSE_MO_SIGNAL              = 0,
    EM_CAUSE_MO_DATA,
    EM_CAUSE_MT,
    EM_CAUSE_EMERGENCY,
    EM_CAUSE_MO_CSFB,
    EM_CAUSE_MO_MMTEL_VOICE,
    EM_CAUSE_MO_MMTEL_VIDEO,
    EM_CAUSE_MO_SMS,
    EM_CAUSE_INVALID
} em_sr_cause_enum;

// RRC Establishment cause mapping (valid from R12 implementation onwards)
typedef enum
{
    EM_EST_CAUSE_MO_SIGNAL              = 0,
    EM_EST_CAUSE_MO_DATA,
    EM_EST_CAUSE_MT_ACCESS,
    EM_EST_CAUSE_EMERGENCY,
    EM_EST_CAUSE_DELAY_TOLERANT,
    EM_EST_CAUSE_INVALID
} em_sr_est_cause_enum;

// RRC Establishment type mapping (valid from R12 implementation onwards)
typedef enum
{
    EM_EST_TYPE_MO_SIGNAL              = 0,
    EM_EST_TYPE_MO_DATA,
    EM_EST_TYPE_MT,
    EM_EST_TYPE_EMERGENCY,
    EM_EST_TYPE_MO_CSFB,
    EM_EST_TYPE_MO_MMTEL_VOICE,
    EM_EST_TYPE_MO_MMTEL_VIDEO,
    EM_EST_TYPE_MO_SMS,
    EM_EST_TYPE_INVALID
} em_sr_est_type_enum;

typedef enum
{
    EM_MO_CSFB_TYPE_INVALID         = 0,
    EM_MO_CSFB_TYPE_NORMAL_CALL,
    EM_MO_CSFB_TYPE_EMERGENCY_CALL,
    EM_MO_CSFB_TYPE_SS,
    EM_MO_CSFB_TYPE_LCS,
    EM_MO_CSFB_TYPE_RESERVED
} em_mo_csfb_cause_enum;

typedef enum
{
    EM_MT_CSFB_PAGING_ID_INVALID    = 0,
    EM_MT_CSFB_PAGING_ID_IMSI,
    EM_MT_CSFB_PAGING_ID_TMSI
} em_mt_csfb_paging_id_enum;

typedef enum
{
    EM_EMM_CAUSE_CAUSE_NONE = 0x00,
    EM_EMM_CAUSE_IMSI_UNKNOWN_IN_HSS    = 0x02,
    EM_EMM_CAUSE_ILLEGAL_UE    = 0x03,
    EM_EMM_CAUSE_IMEI_NOT_ACCEPTED    = 0x05,
    EM_EMM_CAUSE_ILLEGAL_ME    = 0x06,
    EM_EMM_CAUSE_EPS_NOT_ALLOWED    = 0x07,
    EM_EMM_CAUSE_EPS_NON_EPS_NOT_ALLOWED    = 0x08,
    EM_EMM_CAUSE_UE_ID_NOT_DERIVED_BY_NW    = 0x09,
    EM_EMM_CAUSE_IMPLICIT_DETACH    = 0x0a,
    EM_EMM_CAUSE_PLMN_NOT_ALLOWED    = 0x0b,
    EM_EMM_CAUSE_TA_NOT_ALLOWED    = 0x0c,
    EM_EMM_CAUSE_ROAMING_NOT_ALLOWED_IN_TA    = 0x0d,
    EM_EMM_CAUSE_EPS_NOT_ALLOWED_IN_PLMN    = 0x0e,
    EM_EMM_CAUSE_NO_SUITABLE_CELL_IN_TA    = 0x0f,
    EM_EMM_CAUSE_MSC_NOT_REACHABLE    = 0x10,
    EM_EMM_CAUSE_NW_FAILURE    = 0x11,
    EM_EMM_CAUSE_CS_NOT_AVAILABLE    = 0x12,
    EM_EMM_CAUSE_ESM_FAILURE    = 0x13,
    EM_EMM_CAUSE_MAC_FAILURE    = 0x14,
    EM_EMM_CAUSE_SYNCH_FAILURE    = 0x15,
    EM_EMM_CAUSE_CONGESTION    = 0x16,
    EM_EMM_CAUSE_UE_SEC_CAPA_MISMATCH    = 0x17,
    EM_EMM_CAUSE_SEC_MODE_REJ_UNSPECIFIED    = 0x18,
    EM_EMM_CAUSE_NOT_AUTH_FOR_CSG    = 0x19,
    EM_EMM_CAUSE_NON_EPS_AUTH_UNACCEPTABLE    = 0x1a,
    EM_EMM_CAUSE_REQUEST_SERVICE_OPTION_NOT_AUTHORIZED_IN_PLMN = 0x23,
    EM_EMM_CAUSE_CS_TEMP_NOT_AVAILABLE    = 0x27,
    EM_EMM_CAUSE_NO_EPS_CTXT_ACT    = 0x28,
    EM_EMM_CAUSE_SEVERE_NW_FAILURE    = 0x2a,
    EM_EMM_CAUSE_SEMANTIC_INCORRECT    = 0x5f,
    EM_EMM_CAUSE_INVALID_MANDATORY_INFO    = 0x60,
    EM_EMM_CAUSE_MSG_TYPE_NOT_EXIST    = 0x61,
    EM_EMM_CAUSE_MSG_TYPE_NOT_COMPATIBLE    = 0x62,
    EM_EMM_CAUSE_IE_NOT_EXIST    = 0x63,
    EM_EMM_CAUSE_CONDITIONAL_IE_ERROR    = 0x64,
    EM_EMM_CAUSE_MESSAGE_NOT_COMPATIBLE    = 0x65,
    EM_EMM_CAUSE_PROTOCOL_ERROR    = 0x6f,

    EM_EMM_CAUSE_FORBIDDEN_PLMN                    = 0x70,
    EM_EMM_CAUSE_NO_COVERAGE                       = 0x72,
    EM_EMM_CAUSE_EPS_SERV_NOT_ALLOWED              = 0x73,
    EM_EMM_CAUSE_SIM_REMOVED                       = 0x76,
    EM_EMM_CAUSE_SIM_INVALID_FOR_PS                = 0x78,
    EM_EMM_CAUSE_SIM_INVALID_FOR_CS                = 0x79,
    EM_EMM_CAUSE_SIM_INVALID_FOR_CS_AND_PS         = 0x80,
    EM_EMM_CAUSE_EAS_IN_SUSPEND_MODE               = 0x8b,
    EM_EMM_CAUSE_LIMITED_SERVICE                   = 0x8d,
    EM_EMM_CAUSE_SIM_INVALID_FOR_LTE_BECAUSE_NON_USIM_INSERTED = 0x8f
} em_emm_cause_enum;


typedef enum
{
    EM_EMM_ATTACH_TYPE_INVALID = 0,
    EM_EMM_ATTACH_TYPE_EPS_ATTACH    = 1,
    EM_EMM_ATTACH_TYPE_COMBINED_ATTACH    = 2,
    EM_EMM_ATTACH_TYPE_EMERGENCY_ATTACH    = 6
} em_emm_attach_type_enum;

typedef enum
{
    EM_EMM_ATTACH_RESULT_EPS_ONLY_ATTACHED    = 1,
    EM_EMM_ATTACH_RESULT_COMBINED_ATTACHED
} em_emm_attach_result_enum;

typedef enum
{
    EM_EMM_TYPE_NO_ADDITIONAL_INFO = 1,
    EM_EMM_TYPE_SMS_ONLY
}em_emm_additional_update_type_enum;

typedef enum
{
    EM_EMM_RESULT_NO_ADDITIONAL_INFO = 0,
    EM_EMM_RESULT_CSFB_NOT_PREFERRED = 1,
    EM_EMM_RESULT_SMS_ONLY           = 2
}em_emm_additional_update_result_enum;

typedef enum
{
    EM_EMM_UPDATE_TYPE_TAU    = 0,
    EM_EMM_UPDATE_TYPE_COMBINED_TAU,
    EM_EMM_UPDATE_TYPE_COMBINED_TAU_IMSI_ATTACH,
    EM_EMM_UPDATE_TYPE_PERIODIC_TAU,
    EM_EMM_UPDATE_TYPE_INVALID
} em_emm_update_type_enum;

typedef enum
{
    EM_EMM_UPDATE_RESULT_TA_UPDATED = 0,
    EM_EMM_UPDATE_RESULT_COMBINED_UPDATED = 1,
    EM_EMM_UPDATE_RESULT_TA_UPDATED_ISR_ACTIVATED = 4,
    EM_EMM_UPDATE_RESULT_COMBINED_UPDATED_ISR_ACTIVATED = 5,
    EM_EMM_UPDATE_RESULT_INVALID
} em_emm_update_result_enum;

typedef enum
{
    EM_EMM_USER_DETACH_EPS_DETACH  = 1,
    EM_EMM_USER_DETACH_IMSI_DETACH ,
    EM_EMM_USER_DETACH_COMBINED_EPS_IMSI_DETACH
}em_emm_user_detach_type_enum;

typedef enum
{
    EM_EMM_NW_DETACH_TYPE_RE_ATTACH_REQUIRED = 1,
    EM_EMM_NW_DETACH_TYPE_RE_ATTACH_NOT_REQUIRED,
    EM_EMM_NW_DETACH_TYPE_IMSI_DETACH
}em_emm_nw_detach_type_enum;

typedef enum
{
    EM_EMM_IMS_VOICE_OVER_PS_SESSION_IN_S1_MODE_NOT_SUPPORT = 0,
    EM_EMM_IMS_VOICE_OVER_PS_SESSION_IN_S1_MODE_SUPPORT
}em_emm_ims_service_ind_enum;

typedef enum
{
    EM_EMM_EMERGENCY_BEARER_SERVICE_IN_S1_MODE_NOT_SUPPORT = 0,
    EM_EMM_EMERGENCY_BEARER_SERVICE_IN_S1_MODE_SUPPORT
}em_emm_emergency_service_ind_enum;

typedef enum
{
    EM_EMM_ATTACH_NEEDED = 0,
    EM_EMM_ATTACH_REQUEST,
    EM_EMM_ATTACH_COMPLETE,
    EM_EMM_ATTACH_SUCCESS,
    EM_EMM_23G_ATTACH_SUCCESS
}em_emm_attach_status;

typedef enum
{
    EM_EMM_TAU_ONGOING_BEFORE_TAU_REQ = 0,
    EM_EMM_TAU_REQUEST,
    EM_EMM_TAU_COMPLETE,
    EM_EMM_TAU_SUCCESS,
    EM_EMM_TAU_FAIL,
    EM_EMM_TAU_NO_TAU_EVER
}em_emm_tau_status;

//Sync from EMM internal cause
//emm_call_fail_trigger_enum
typedef enum
{
    EM_EMM_CALL_FAIL_TRIG_SUCCESS  = 0,
    EM_EMM_CALL_FAIL_TRIG_EST_FAIL = 1,
    EM_EMM_CALL_FAIL_TRIG_REL_IND  = 2,
    EM_EMM_CALL_FAIL_TRIG_RETRANS  = 3,
    EM_EMM_CALL_FAIL_TRIG_REJECT   = 4,
    EM_EMM_CALL_FAIL_TRIG_T3417TO  = 9,
    EM_EMM_CALL_FAIL_TRIG_AC_BARRED= 15,
    EM_EMM_CALL_FAIL_TRIG_AUTH_REJ = 17,
} em_emm_call_fail_trigger_enum;

//Sync from EMM internal cause
//emm_call_est_cause_enum
typedef enum
{
    EM_EMM_CALL_EST_CAUSE_SUCCESS           =  0,
    EM_EMM_CALL_EST_CAUSE_AC_BARRED         =  1,
    EM_EMM_CALL_EST_CAUSE_NW_REJ_CONN       =  2,
    EM_EMM_CALL_EST_CAUSE_CONN_FAIL         =  3,
    EM_EMM_CALL_EST_CAUSE_AC_BARRED_MO_CSFB = 11,
    EM_EMM_CALL_EST_CAUSE_CONGESTION        = 12,
} em_emm_call_est_cause_enum;

//Sync from EMM internal cause
//emm_call_rel_cause_enum
typedef enum
{
    EM_EMM_CALL_REL_CAUSE_REL_OTHER         =  1,
    EM_EMM_CALL_REL_CAUSE_REEST_FAIL        =  2,
    EM_EMM_CALL_REL_CAUSE_REEST_CSFB_HIGH   =  3,
    EM_EMM_CALL_REL_CAUSE_REEST_LOCAL_REL   =  5,
} em_emm_call_rel_cause_enum;

//Sync from EMM internal cause
//emm_call_ignore_paging_cause_enum
typedef enum
{
    EM_EMM_CALL_IGNORE_PAGING_NONE                  =  0,
    EM_EMM_CALL_IGNORE_PAGING_UNEXPECTED_TYPE       =  1,
    EM_EMM_CALL_IGNORE_PAGING_IMS_CALL_ONGOING      =  2,
    EM_EMM_CALL_IGNORE_PAGING_CS_NOT_ALLOW          =  3,
    EM_EMM_CALL_IGNORE_PAGING_ID_ERROR              =  4,
    EM_EMM_CALL_IGNORE_PAGING_NOT_SUITABLE_CELL     =  5,
    EM_EMM_CALL_IGNORE_PAGING_NO_CS_INSTANCE        =  6,
    EM_EMM_CALL_IGNORE_PAGING_INTERRAT              =  7,
    EM_EMM_CALL_IGNORE_PAGING_TMSI_ERROR            =  8,
    EM_EMM_CALL_IGNORE_PAGING_WAIT_ATTACH_END       =  9,
} em_emm_call_ignore_paging_cause_enum;

typedef enum
{
    EM_EMM_MAINSTATE_EMM_NULL = 0,
    EM_EMM_MAINSTATE_EMM_DEREGISTERED,
    EM_EMM_MAINSTATE_EMM_DEREGISTERED_INITIATED,
    EM_EMM_MAINSTATE_EMM_REGISTERED,
    EM_EMM_MAINSTATE_EMM_REGISTERED_INITIATED,
    EM_EMM_MAINSTATE_EMM_TRACKING_AREA_UPDATING_INITIATED,
    EM_EMM_MAINSTATE_EMM_SERVICE_REQUEST_INITIATED
} em_emm_mainstate_enum;

typedef enum
{
    EM_EMM_SUBSTATE_INVALID = 0,
    EM_EMM_SUBSTATE_NORMAL_SERVICE,
    EM_EMM_SUBSTATE_LIMITED_SERVICE,
    EM_EMM_SUBSTATE_ATTEMPTING_TO_ATTACH,
    EM_EMM_SUBSTATE_PLMN_SEARCH,
    EM_EMM_SUBSTATE_NO_IMSI,
    EM_EMM_SUBSTATE_ATTACH_NEEDED,
    EM_EMM_SUBSTATE_NO_CELL_AVAILABLE,
    EM_EMM_SUBSTATE_ATTEMPTING_TO_UPDATE,
    EM_EMM_SUBSTATE_UPDATE_NEEDED,
    EM_EMM_SUBSTATE_ATTEMPTING_TO_UPDATE_MM,
    EM_EMM_SUBSTATE_IMSI_DETACH_INITIATED
} em_emm_substate_enum;

typedef enum {
    EMM_EM_TIMERMNG_TINVALID = 0,
    EMM_EM_TIMERMNG_T3410,
    EMM_EM_TIMERMNG_T3346
} emm_em_timermng_timer_id_enum;

typedef struct
{
    plmn_struct plmn_id;
    kal_uint8 lac[2];
}em_emm_lai_struct;

typedef enum
{
    EM_EMM_CAUSE_FROM_NONE = 0,
    EM_EMM_CAUSE_FROM_ATTACH_REJECT,
    EM_EMM_CAUSE_FROM_TAU_REJECT,
    EM_EMM_CAUSE_FROM_SERVICE_REJECT,
    EM_EMM_CAUSE_FROM_DETACH_REQUEST,
    EM_EMM_CAUSE_FROM_ATTACH_ACCEPT,
    EM_EMM_CAUSE_FROM_TAU_ACCEPT,
} em_emm_cause_source_enum;

typedef struct
{
    em_sr_type_enum              service_request_type;
    em_sr_cause_enum             service_request_cause; // RRC establishment cause (valid for R11 and earlier implementation)
    em_sr_est_cause_enum         service_request_est_cause; // RRC establishment cause (valid from R12 implementation onwards)
    em_sr_est_type_enum          service_request_est_type; // RRC establishment type (valid from R12 implementation onwards)
    em_mo_csfb_cause_enum        mo_csfb_cause;
    em_mt_csfb_paging_id_enum    mt_csfb_paging_id;
    em_emm_cause_enum            ext_service_reject_cause;
}l4c_em_emm_call_para_struct;


typedef struct
{
    em_emm_ecm_status_enum ecm_status;
    kal_uint8                              ac_barring_status;
}l4c_em_emm_conn_para_struct;


typedef struct
{
    em_emm_attach_type_enum                 eps_attach_type;
    em_emm_additional_update_type_enum      attach_additional_update_type;
    em_emm_attach_result_enum               eps_attach_result;
    em_emm_additional_update_result_enum    attach_additional_update_result;
    em_emm_cause_enum                       attach_emm_cause;
    kal_uint32                              attach_attempt_count;
    em_emm_attach_status                    attach_status;

    em_emm_update_type_enum                 tau_req_update_type;
    em_emm_additional_update_type_enum      tau_additional_update_type;
    em_emm_update_result_enum               tau_update_result;
    em_emm_additional_update_result_enum    tau_additional_update_result;
    em_emm_cause_enum                       tau_emm_cause;
    kal_uint32                              tau_attempt_count;
    em_emm_tau_status                       tau_status;

    em_emm_user_detach_type_enum            user_detach_type;
    em_emm_nw_detach_type_enum              nw_detach_type;
    em_emm_cause_enum                       nw_detach_emm_cause;
    kal_uint32                              detach_attempt_count;

    em_emm_ims_service_ind_enum             ims_service_ind;
    em_emm_emergency_service_ind_enum       emergency_service_ind;

    em_emm_lai_struct                       lai;

    em_emm_cause_source_enum                emm_cause_source;
    kal_uint32                              emm_cause;
}l4c_em_emm_reg_para_struct;

typedef struct
{
    plmn_struct selected_plmn;
    kal_uint16        tac;
    em_csg_access_mode_enum  csg_access_mode;
    kal_uint32        csg_id;
    em_lte_duplex_type_enum  duplex_type;
    kal_uint32        cell_id;
}l4c_em_emm_plmnsel_para_struct;

typedef struct
{
    em_emm_update_status_enum update_status;
    em_emm_sim_status_enum cs_sim_status;
    em_emm_sim_status_enum ps_sim_status;
    em_emm_guti_struct guti;

}l4c_em_emm_usimsrv_para_struct;

typedef struct
{
    em_emm_tin_enum tin;
}l4c_em_emm_nvmsrv_para_struct;

typedef struct
{
    kal_uint16  t3402_remaining_time;   //in second
}l4c_em_emm_timersrv_para_struct;

typedef struct
{
    em_emm_mainstate_enum  emm_mainstate;
    em_emm_substate_enum    emm_substate;
}l4c_em_emm_statesrv_para_struct;

typedef struct
{
    kal_uint8  integrity_alg;
    kal_uint8  ciphering_alg;
    kal_bool   is_last_auth_rej;
} l4c_em_emm_sec_para_struct;

typedef struct
{
    kal_bool                       is_valid;
    em_emm_call_fail_trigger_enum  call_fail_trigger;
    em_emm_call_est_cause_enum     call_est_cause;
    em_emm_call_rel_cause_enum     call_rel_cause;
    em_emm_call_ignore_paging_cause_enum     call_ignore_paging_cause;
}l4c_em_emm_call_csfb_para_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                            em_info;
    l4c_em_emm_call_para_struct             emm_call_para;
    l4c_em_emm_conn_para_struct             emm_conn_para;
    l4c_em_emm_reg_para_struct              emm_reg_para;
    l4c_em_emm_plmnsel_para_struct          emm_plmnsel_para;
    l4c_em_emm_usimsrv_para_struct          emm_usimsrv_para;
    l4c_em_emm_nvmsrv_para_struct           emm_nvmsrv_para;
    l4c_em_emm_timersrv_para_struct         emm_timersrv_para;
    l4c_em_emm_sec_para_struct              emm_sec_para;
    l4c_em_emm_statesrv_para_struct         emm_statesrv_para;
	l4c_em_emm_call_csfb_para_struct        emm_call_csfb_para; 
} em_emm_l4c_emm_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum    em_info;
    l4c_em_emm_call_para_struct             emm_call_para;
    l4c_em_emm_call_csfb_para_struct        emm_call_csfb_para;     
} em_emm_l4c_csfb_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum    em_info;
}em_emm_l4c_lai_change_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum    em_info;
    kal_bool        is_auth_rej;
}em_emm_sec_event_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum    em_info;
    l4c_em_emm_call_para_struct             emm_call_para;
}em_emm_l4c_call_info_ind_struct;

/********************* end of EMM definition ****************************/


#endif /* _EM_EMM_PUBLIC_STRUCT_H */

