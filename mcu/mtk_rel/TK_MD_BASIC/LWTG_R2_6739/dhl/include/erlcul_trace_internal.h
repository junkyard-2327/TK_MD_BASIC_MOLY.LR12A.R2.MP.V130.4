#ifndef L1TRC_ERLCUL_INTERNAL_DEF_H
#define L1TRC_ERLCUL_INTERNAL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_HEAD_IDX_UPDATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x001A,0x001A);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_HEAD_IDX_UPDATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_UPDATE_PDCP_RETX(v1, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x011A,0x011A);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_24_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_UPDATE_PDCP_RETX(v1, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_PDU_CUR_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x021A,0x021A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_PDU_CUR_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_BLOCK_DISCARD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x031A,0x031A);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_BLOCK_DISCARD(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_DUMMY_LOG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x041A,0x041A);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_DUMMY_LOG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_POLLNACK_EXIST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x051A,0x051A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_POLLNACK_EXIST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_SRB_DATA_CNF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x061A,0x061A);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_SRB_DATA_CNF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_SRB_CNF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x071A,0x071A);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_SRB_CNF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_NO_SRB_CNF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x081A,0x081A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_NO_SRB_CNF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_UL_RB_LOCK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x091A,0x091A);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_UL_RB_LOCK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_UL_RB_UNLOCK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A1A,0x0A1A);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_UL_RB_UNLOCK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_UL_RB_VCON_ENTER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B1A,0x0B1A);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_UL_RB_VCON_ENTER(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_UL_RB_VCON_LEAVE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C1A,0x0C1A);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_UL_RB_VCON_LEAVE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_CONSTRUCT_RETX_ENTRY(v1, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0D1A,0x0D1A);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_INTERNAL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_CONSTRUCT_RETX_ENTRY(v1, v4)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, ERLCUL_INTERNAL_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_ERLCUL_INTERNAL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ERLCUL_INTERNAL()	(FILTER_CHECK(ERLCUL_INTERNAL_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()	(ChkL1ModFltr_ERLCUL_INTERNAL()&&(FILTER_CHECK(ERLCUL_INTERNAL_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_DUMP()	(ChkL1ModFltr_ERLCUL_INTERNAL()&&(FILTER_CHECK(ERLCUL_INTERNAL_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_DEV()	(ChkL1ModFltr_ERLCUL_INTERNAL()&&(FILTER_CHECK(ERLCUL_INTERNAL_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_ERLCUL_LOG_HEAD_IDX_UPDATE()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_UPDATE_PDCP_RETX()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_PDU_CUR_IDX()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_DEV()
#define ChkL1MsgFltr_ERLCUL_LOG_BLOCK_DISCARD()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_DUMMY_LOG()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_POLLNACK_EXIST()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_DEV()
#define ChkL1MsgFltr_ERLCUL_LOG_SRB_DATA_CNF()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_SRB_CNF()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_DEV()
#define ChkL1MsgFltr_ERLCUL_LOG_NO_SRB_CNF()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_UL_RB_LOCK()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_UL_RB_UNLOCK()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_UL_RB_VCON_ENTER()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_UL_RB_VCON_LEAVE()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_CONSTRUCT_RETX_ENTRY()	ChkL1ClsFltr_ERLCUL_INTERNAL_ERLCUL_DEV()


#endif
