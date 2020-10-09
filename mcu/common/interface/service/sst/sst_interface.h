#ifndef SST_INTERFACE_H
#define SST_INTERFACE_H

#include "nvram_data_items.h"

#define SST_PROTECTED_NVRAM_LID_READ_LIMIT             0x1
#define SST_PROTECTED_NVRAM_LID_WRITE_LIMIT            0x2

typedef struct sst_protected_nvram_lid_struct {
    nvram_lid_enum          m_lid;
    kal_uint16              m_attr;
} SST_PROTECTED_NVRAM_LID;

typedef struct sst_allowed_task_struct {
    module_type             m_mod_id;
} SST_ALLOWED_TASK;

/*****************************************************************************
 * FUNCTION
 *	SST_Get_ChipRID
 *
 * DESCRIPTION
 *	The function returns HRID to the caller.  
 *
 * PARAMETERS
 *	[INPUT/OUTPUT] pRid  : The buffer that is used to store the HRID
 *	[INPUT] buf_len : Length that the caller wants for the HRID in "bits"  The maximum length of HRID may vary according to the chips.
 *
 * RETURNS
 *	0  : Get HRID Success
 *  -1 : Get HRID failed, buf_len is less than zero
 *  -2 : Get HRID failed, buf_len is greater than maximum HRID in bites
 *
 * NOTES
 *    N/A
 *
 *****************************************************************************/
extern kal_bool SST_Get_ChipRID(kal_char *pUid, kal_int32 buf_len);

#endif