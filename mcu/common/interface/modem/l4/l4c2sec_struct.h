#ifndef _L4C2SEC_STRUCT_H
#define _L4C2SEC_STRUCT_H

#include "kal_public_defs.h"
#include "kal_general_types.h"

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 case_id;
		kal_uint8 subcase_id;
}l4c_sectest_test_req_struct;

#endif /* _L4C2SEC_STRUCT_H */

