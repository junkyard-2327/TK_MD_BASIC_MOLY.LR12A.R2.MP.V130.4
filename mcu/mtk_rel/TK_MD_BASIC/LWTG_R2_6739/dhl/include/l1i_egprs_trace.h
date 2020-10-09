#ifndef L1TRC_L1I_EGPRS_DEF_H
#define L1TRC_L1I_EGPRS_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1I_EGPRS_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1I_Str_TBF_Direct(v1)  (unsigned char)(v1+2)
#define L1I_Str_MAC_Grant(v1)  (unsigned char)(v1+5)
#define L1C_Str_restart_bsic_type(v1)  (unsigned char)(v1+8)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_U2_header(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x005C,0x005C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1I_Trace_U2_header(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_IRParams(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x015C,0x015C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_IRParams(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_IRParams_TS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x025C,0x025C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_IRParams_TS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_Set_SRB_Mode(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x035C,0x035C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1I_Trace_Set_SRB_Mode(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_Egprs_ExtractPR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x045C,0x045C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1I_Trace_Egprs_ExtractPR(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_New_TBF_Tid(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x055C,0x055C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1I_Trace_New_TBF_Tid(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_U2_data(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x065C,0x065C);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Trace_U2_data(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_TAC_no_accumulate(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x075C,0x075C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define L1I_Trace_TAC_no_accumulate(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_TBF_Status(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x085C,0x085C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_TBF_Status(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_MAC_Update_USF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x095C,0x095C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_MAC_Update_USF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_MAC_Granularity(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A5C,0x0A5C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_MAC_Granularity(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_TBFStop(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B5C,0x0B5C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_TBFStop(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_TBFStop_Base(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C5C,0x0C5C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_TBFStop_Base(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_MAC_Grant(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D5C,0x0D5C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_MAC_Grant(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_RescheFCBSearch(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E5C,0x0E5C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define L1I_Trace_RescheFCBSearch(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_ReportGPRS_DL_CB_Check(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F5C,0x0F5C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define L1C_ReportGPRS_DL_CB_Check(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1I_EGPRS_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1I_EGPRS_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1I_EGPRS()	(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1I_EGPRS_UL_Block_H()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1I_EGPRS_U2_header_L()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1I_EGPRS_IRParams_M()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1I_EGPRS_EGPRS_PDAN_L()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1I_EGPRS_U1_cps_L()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1I_EGPRS_SRB_L()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1I_EGPRS_PR_TFI_L()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1I_EGPRS_newTBFtid_M()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1I_EGPRS_U2_data_L()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1I_EGPRS_TAC_M()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1I_EGPRS_MTBF_M()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1I_EGPRS_GEMINI20_M()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1I_EGPRS_DL_Block_M()	(ChkL1ModFltr_L1I_EGPRS()&&(FILTER_CHECK(L1I_EGPRS_Trace_Filter, 2, 0x10)))
#define ChkL1MsgFltr_L1I_Trace_U2_header()	ChkL1ClsFltr_L1I_EGPRS_U2_header_L()
#define ChkL1MsgFltr_L1I_Trace_IRParams()	ChkL1ClsFltr_L1I_EGPRS_MTBF_M()
#define ChkL1MsgFltr_L1I_Trace_IRParams_TS()	ChkL1ClsFltr_L1I_EGPRS_MTBF_M()
#define ChkL1MsgFltr_L1I_Trace_Set_SRB_Mode()	ChkL1ClsFltr_L1I_EGPRS_SRB_L()
#define ChkL1MsgFltr_L1I_Trace_Egprs_ExtractPR()	ChkL1ClsFltr_L1I_EGPRS_PR_TFI_L()
#define ChkL1MsgFltr_L1I_Trace_New_TBF_Tid()	ChkL1ClsFltr_L1I_EGPRS_newTBFtid_M()
#define ChkL1MsgFltr_L1I_Trace_U2_data()	ChkL1ClsFltr_L1I_EGPRS_U2_data_L()
#define ChkL1MsgFltr_L1I_Trace_TAC_no_accumulate()	ChkL1ClsFltr_L1I_EGPRS_TAC_M()
#define ChkL1MsgFltr_L1I_Trace_TBF_Status()	ChkL1ClsFltr_L1I_EGPRS_MTBF_M()
#define ChkL1MsgFltr_L1I_Trace_MAC_Update_USF()	ChkL1ClsFltr_L1I_EGPRS_MTBF_M()
#define ChkL1MsgFltr_L1I_Trace_MAC_Granularity()	ChkL1ClsFltr_L1I_EGPRS_MTBF_M()
#define ChkL1MsgFltr_L1I_Trace_TBFStop()	ChkL1ClsFltr_L1I_EGPRS_MTBF_M()
#define ChkL1MsgFltr_L1I_Trace_TBFStop_Base()	ChkL1ClsFltr_L1I_EGPRS_MTBF_M()
#define ChkL1MsgFltr_L1I_Trace_MAC_Grant()	ChkL1ClsFltr_L1I_EGPRS_MTBF_M()
#define ChkL1MsgFltr_L1I_Trace_RescheFCBSearch()	ChkL1ClsFltr_L1I_EGPRS_GEMINI20_M()
#define ChkL1MsgFltr_L1C_ReportGPRS_DL_CB_Check()	ChkL1ClsFltr_L1I_EGPRS_DL_Block_M()


#endif