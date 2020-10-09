#ifndef  _DDM_EVAL_STRUCT_H
#define  _DDM_EVAL_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "atcmd_struct.h"

typedef enum
{
    SERVICE_IS_MMS,
    SERVICE_MAX = 0x7FFFFFFF
} ddm_eval_ps_service_enum;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool                          state;                       // KAL_TRUE : service start, KAL_FALSE : service end
    ddm_eval_ps_service_enum      ps_service;
} ddm_eval_ps_service_notify_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    at_cabtsri_ind_struct cabtsri_ind;

} ddm_eval_cabtsri_ind_struct ;
#endif
