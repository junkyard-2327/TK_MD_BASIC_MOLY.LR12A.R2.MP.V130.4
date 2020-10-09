#ifndef L1TRC_EL1D_PS_DEF_H
#define L1TRC_EL1D_PS_DEF_H

/******************************/
/* String category definition */
/******************************/
#define EL1D_TRC_STR_PS_FSM_STATE(v1)  (unsigned char)(v1+0)
#define EL1D_TRC_STR_PS_AGC_CONFIG(v1)  (unsigned char)(v1+2)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_MAIN_TIMER_H() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x0042,0x0042);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_MAIN_TIMER_H()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_FSM_SWITCH_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0142,0x0142);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_FSM_SWITCH_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_CMD_REQ_PRE_PROCESS_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0242,0x0242);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_CMD_REQ_PRE_PROCESS_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_CMD_ABORT_PRE_PROCESS_H() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x40);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x0342,0x0342);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_CMD_ABORT_PRE_PROCESS_H()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_CMD_REQ_INFO_H(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0442,0x0442);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_CMD_REQ_INFO_H(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_RPT_ABORT_SUCCESS_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0542,0x0542);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_RPT_ABORT_SUCCESS_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_RPT_ABORT_NO_NEED_H() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x02);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x0642,0x0642);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_RPT_ABORT_NO_NEED_H()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_RPT_RESULT_FROM_AGC_H(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0742,0x0742);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_RPT_RESULT_FROM_AGC_H(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_RPT_RESULT_TO_L1C_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0842,0x0842);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_RPT_RESULT_TO_L1C_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_RPT_RESULT_COMPLETE_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_PS_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0942,0x0942);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_PS_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_RPT_RESULT_COMPLETE_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_RPT_ABORT_COMPLETE_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_PS_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A42,0x0A42);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_PS_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_RPT_ABORT_COMPLETE_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_NEW_RF_ON_OFF_H(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0B42,0x0B42);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_NEW_RF_ON_OFF_H(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_PS_NEW_RF_OFF_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0C42,0x0C42);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_PS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_PS_NEW_RF_OFF_H(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1D_PS_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1D_PS_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1D_PS()	(FILTER_CHECK(EL1D_PS_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_MAIN_H()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_MAIN_M()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_MAIN_L()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_FSM_H()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_FSM_M()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_FSM_L()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_CMD_H()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_CMD_M()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_CMD_L()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RPT_H()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RPT_M()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RPT_L()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RF_H()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RF_M()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RF_L()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_AGC_H()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_AGC_M()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_AGC_L()	(ChkL1ModFltr_EL1D_PS()&&(FILTER_CHECK(EL1D_PS_Trace_Filter, 3, 0x02)))
#define ChkL1MsgFltr_EL1D_TRC_PS_MAIN_TIMER_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_FSM_SWITCH_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_FSM_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_CMD_REQ_PRE_PROCESS_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_CMD_ABORT_PRE_PROCESS_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_CMD_REQ_INFO_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_RPT_ABORT_SUCCESS_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_RPT_ABORT_NO_NEED_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_RPT_RESULT_FROM_AGC_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_RPT_RESULT_TO_L1C_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_RPT_RESULT_COMPLETE_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_RPT_ABORT_COMPLETE_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_NEW_RF_ON_OFF_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RF_H()
#define ChkL1MsgFltr_EL1D_TRC_PS_NEW_RF_OFF_H()	ChkL1ClsFltr_EL1D_PS_EL1D_TRC_PS_RF_H()


#endif