#ifndef SAP_RANGE_H
#define SAP_RANGE_H

typedef enum {
    SAP_ID_XXX_CODE_BASE = 0,	

    SAP_ID_SVC_CODE_BEGIN = SAP_ID_XXX_CODE_BASE, SAP_ID_SVC_CODE_TAIL = SAP_ID_SVC_CODE_BEGIN + 20,

    SAP_ID_MD_CODE_BEGIN, SAP_ID_MD_CODE_TAIL = SAP_ID_MD_CODE_BEGIN + 250 + 300 + 250 + 200,/* +300 for LTE MD, + 250 for 91, +200 for C2K*/ 

    SAP_ID_MD_SVC_CODE_BEGIN, SAP_ID_MD_SVC_CODE_TAIL = SAP_ID_MD_SVC_CODE_BEGIN + 20,

    SAP_ID_MD_DRV_CODE_BEGIN, SAP_ID_MD_DRV_CODE_TAIL = SAP_ID_MD_DRV_CODE_BEGIN + 30,

    SAP_ID_MD_MMI_CODE_BEGIN, SAP_ID_MD_MMI_CODE_TAIL = SAP_ID_MD_MMI_CODE_BEGIN + 40,
	
    SAP_ID_MD_MW_CODE_BEGIN, SAP_ID_MD_MW_CODE_TAIL = SAP_ID_MD_MW_CODE_BEGIN + 100,
	
    SAP_ID_MW_CODE_BEGIN, SAP_ID_MW_CODE_TAIL = SAP_ID_MW_CODE_BEGIN + 50 + 100, /* +100 for LTE MW */
	
    SAP_ID_DRV_CODE_BEGIN, SAP_ID_DRV_CODE_TAIL = SAP_ID_DRV_CODE_BEGIN + 200,

	// LAST_SAP_CODE is defined at this scope, so please keep it at last.
    SAP_ID_SYSSERVICE_CODE_BEGIN, SAP_ID_SYSSERVICE_CODE_TAIL = SAP_ID_SYSSERVICE_CODE_BEGIN + 10,

    SAP_ID_CODE_END,
}SAP_ID_TYPE;

/**************************************************************
**********  Should not change the following MACROS defines     *************
**********  Should not define SAP ID with "SAP_TAG_"              *************
***************************************************************/
#ifdef GEN_FOR_PC
    #define MODULE_SAP_BEGIN(BEGIN_POS)  typedef enum __cgen_sap_type_id_##BEGIN_POS{SAP_TAG_##BEGIN_POS = BEGIN_POS,
    #define MODULE_SAP_END(END_POS) SAP_ID_CGEN_PARSE_LAST_ID=END_POS }_cgen_sap_type_id_##END_POS;
#else
    #define MODULE_SAP_BEGIN(BEGIN_POS)   enum { SAP_TAG_##BEGIN_POS = BEGIN_POS,
    #define MODULE_SAP_END(END_POS)     };    
#endif /* GEN_FOR_PC */

#define INLINE_ILM_FLAG_SAP 0x8000  /* bit15 is used by inline ILM */
#define RESERVE_FOR_INLINE_ILM_SAP 0xFFF /* INLINE_ILM_SAP is hard-defined, it can be enlarged once SAP_ID_CODE_END is larger than it */
typedef unsigned int sap_id_boundary_check1[(RESERVE_FOR_INLINE_ILM_SAP-1) - SAP_ID_CODE_END];

#endif /* SAP_RANGE_H */
