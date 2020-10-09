#include "kal_general_types.h"
#include "kal_public_api.h"
#include "nvram_data_items.h"
#include "sst_interface.h"

const SST_PROTECTED_NVRAM_LID g_protected_nvram_lid_list[] = 
{
	{
		NVRAM_EF_IMEI_IMEISV_LID,
		SST_PROTECTED_NVRAM_LID_WRITE_LIMIT 
	}
	,{
		NVRAM_EF_SML_LID,
		SST_PROTECTED_NVRAM_LID_READ_LIMIT | SST_PROTECTED_NVRAM_LID_WRITE_LIMIT
	}
	,{
		NVRAM_EF_SIM_LOCK_LID, // now used for TMO SML and equal to NVRAM_EF_SML_TMO_LID in smu_def.h
		SST_PROTECTED_NVRAM_LID_READ_LIMIT | SST_PROTECTED_NVRAM_LID_WRITE_LIMIT
	}		
#ifdef __SMB_SIMME_LOCK__
	,{
		NVRAM_EF_SML_GBLOB_LID,
		SST_PROTECTED_NVRAM_LID_READ_LIMIT | SST_PROTECTED_NVRAM_LID_WRITE_LIMIT
	}    
	,{
		NVRAM_EF_SML_GBLOB_KEY_LID,
		SST_PROTECTED_NVRAM_LID_READ_LIMIT | SST_PROTECTED_NVRAM_LID_WRITE_LIMIT
	}   
	,{
		NVRAM_EF_SML_S_LID,
		SST_PROTECTED_NVRAM_LID_READ_LIMIT | SST_PROTECTED_NVRAM_LID_WRITE_LIMIT
	}   
#endif
};

const unsigned int g_protected_nvram_lid_list_items = \
    sizeof(g_protected_nvram_lid_list)/sizeof(SST_PROTECTED_NVRAM_LID);

const SST_ALLOWED_TASK g_allowed_task_list[] = 
{
	{MOD_L4C},
	{MOD_FT},
	{MOD_FTC},
	{MOD_NVRAM}
};

const unsigned int g_allowed_task_list_items = \
    sizeof(g_allowed_task_list)/sizeof(SST_ALLOWED_TASK);

