#include "module_msg_range.h"

#ifndef _MLL1_MSG_H
#define _MLL1_MSG_H


#ifdef _Test_Hdr_On_PC
enum {
#endif

MODULE_MSG_BEGIN( MSG_ID_MLL1_MSG_CODE_BEGIN )

MSG_ID_LL1_GL1_SYNC_REQ = MSG_ID_MLL1_MSG_CODE_BEGIN,
MSG_ID_GL1_LL1_SYNC_CNF,
MSG_ID_GL1_LL1_RAT_STATUS_IND,
MSG_ID_GL1_LL1_MODE_STATUS_IND,
MSG_ID_LL1_GL1_MODE_STATUS_UPDATE_IND,
MSG_ID_GL1_LL1_ACTIVE_MEASURE_STATUS_IND,
MSG_ID_GL1_LL1_MEASURE_REQ,
MSG_ID_GL1_LL1_STANDBY_MEASURE_DONE_IND,
MSG_ID_LL1_GL1_GAP_SERVICE_REQ,
MSG_ID_GL1_LL1_GAP_STOP_REQ,
MSG_ID_LL1_GL1_GAP_STOP_CNF,
MSG_ID_LL1_GL1_GAP_STOP_REQ,
MSG_ID_GL1_LL1_GAP_STOP_CNF,
MSG_ID_GL1_LL1_GAP_SUSPEND_REQ,
MSG_ID_LL1_GL1_GAP_SUSPEND_CNF,
MSG_ID_LL1_GL1_GAP_SUSPEND_REQ,
MSG_ID_GL1_LL1_GAP_SUSPEND_CNF,
MSG_ID_GL1_LL1_GAP_RESUME_IND,
MSG_ID_LL1_GL1_GAP_RESUME_IND,
MSG_ID_GL1_LL1_AUTO_GAP_REQ,
MSG_ID_LL1_GL1_AUTO_GAP_CNF,
MSG_ID_LL1_GL1_AUTO_GAP_IND,
MSG_ID_GL1_LL1_AUTO_GAP_RES,
MSG_ID_GL1_LL1_AUTO_GAP_STOP_REQ,
MSG_ID_LL1_GL1_AUTO_GAP_STOP_IND,
MSG_ID_GL1_LL1_AUTO_GAP_STOP_RES,
MSG_ID_LL1_GL1_AUTO_GAP_STOP_CNF,
MSG_ID_GL1_LL1_AUTO_GAP_END_IND,
MSG_ID_LL1_GL1_AUTO_GAP_END_IND,
MSG_ID_GL1_LL1_AUTO_GAP_AVAILABLE_IND,
MSG_ID_LL1_GL1_AUTO_GAP_AVAILABLE_IND,
MSG_ID_GL1_LL1_AUTO_GAP_UNAVAILABLE_IND,
MSG_ID_LL1_GL1_AUTO_GAP_UNAVAILABLE_IND,
MSG_ID_LL1_GL1_GAP_NOTIFY_IND,
MSG_ID_GL1_LL1_GAP_PATTERN_IND,

MSG_ID_LL1_UL1_SYNC_REQ,
MSG_ID_UL1_LL1_SYNC_CNF,
MSG_ID_UL1_LL1_RAT_STATUS_IND,
MSG_ID_UL1_LL1_MODE_STATUS_IND,
MSG_ID_LL1_UL1_MODE_STATUS_UPDATE_IND,
MSG_ID_UL1_LL1_ACTIVE_MEASURE_STATUS_IND,
MSG_ID_UL1_LL1_MEASURE_REQ,
MSG_ID_UL1_LL1_STANDBY_MEASURE_DONE_IND,
MSG_ID_LL1_UL1_GAP_SERVICE_REQ,
MSG_ID_UL1_LL1_GAP_STOP_REQ,
MSG_ID_LL1_UL1_GAP_STOP_CNF,
MSG_ID_LL1_UL1_GAP_STOP_REQ,
MSG_ID_UL1_LL1_GAP_STOP_CNF,
MSG_ID_UL1_LL1_GAP_SUSPEND_REQ,
MSG_ID_LL1_UL1_GAP_SUSPEND_CNF,
MSG_ID_LL1_UL1_GAP_SUSPEND_REQ,
MSG_ID_UL1_LL1_GAP_SUSPEND_CNF,
MSG_ID_UL1_LL1_GAP_RESUME_IND,
MSG_ID_LL1_UL1_GAP_RESUME_IND,
MSG_ID_UL1_LL1_AUTO_GAP_REQ,
MSG_ID_LL1_UL1_AUTO_GAP_CNF,
MSG_ID_LL1_UL1_AUTO_GAP_IND,
MSG_ID_UL1_LL1_AUTO_GAP_RES,
MSG_ID_UL1_LL1_AUTO_GAP_STOP_REQ,
MSG_ID_LL1_UL1_AUTO_GAP_STOP_IND,
MSG_ID_UL1_LL1_AUTO_GAP_STOP_RES,
MSG_ID_LL1_UL1_AUTO_GAP_STOP_CNF,
MSG_ID_UL1_LL1_AUTO_GAP_END_IND,
MSG_ID_LL1_UL1_AUTO_GAP_END_IND,
MSG_ID_UL1_LL1_AUTO_GAP_AVAILABLE_IND,
MSG_ID_LL1_UL1_AUTO_GAP_AVAILABLE_IND,
MSG_ID_UL1_LL1_AUTO_GAP_UNAVAILABLE_IND,
MSG_ID_LL1_UL1_AUTO_GAP_UNAVAILABLE_IND,
MSG_ID_LL1_UL1_GAP_NOTIFY_IND,
MSG_ID_UL1_LL1_GAP_PATTERN_IND,
MSG_ID_LL1_UL1_SPECIFIC_GAP_IND,
MSG_ID_LL1_UL1_GAP_STATUS_IND,

MSG_ID_LL1_TL1_SYNC_REQ,
MSG_ID_TL1_LL1_SYNC_CNF,
MSG_ID_TL1_LL1_RAT_STATUS_IND,
MSG_ID_TL1_LL1_MODE_STATUS_IND,
MSG_ID_LL1_TL1_MODE_STATUS_UPDATE_IND,
MSG_ID_TL1_LL1_ACTIVE_MEASURE_STATUS_IND,
MSG_ID_TL1_LL1_MEASURE_REQ,
MSG_ID_TL1_LL1_STANDBY_MEASURE_DONE_IND,
MSG_ID_LL1_TL1_GAP_SERVICE_REQ,
MSG_ID_TL1_LL1_GAP_STOP_REQ,
MSG_ID_LL1_TL1_GAP_STOP_CNF,
MSG_ID_LL1_TL1_GAP_STOP_REQ,
MSG_ID_TL1_LL1_GAP_STOP_CNF,
MSG_ID_TL1_LL1_GAP_SUSPEND_REQ,
MSG_ID_LL1_TL1_GAP_SUSPEND_CNF,
MSG_ID_LL1_TL1_GAP_SUSPEND_REQ,
MSG_ID_TL1_LL1_GAP_SUSPEND_CNF,
MSG_ID_TL1_LL1_GAP_RESUME_IND,
MSG_ID_LL1_TL1_GAP_RESUME_IND,
MSG_ID_TL1_LL1_AUTO_GAP_REQ,
MSG_ID_LL1_TL1_AUTO_GAP_CNF,
MSG_ID_LL1_TL1_AUTO_GAP_IND,
MSG_ID_TL1_LL1_AUTO_GAP_RES,
MSG_ID_TL1_LL1_AUTO_GAP_STOP_REQ,
MSG_ID_LL1_TL1_AUTO_GAP_STOP_IND,
MSG_ID_TL1_LL1_AUTO_GAP_STOP_RES,
MSG_ID_LL1_TL1_AUTO_GAP_STOP_CNF,
MSG_ID_TL1_LL1_AUTO_GAP_END_IND,
MSG_ID_LL1_TL1_AUTO_GAP_END_IND,
MSG_ID_TL1_LL1_AUTO_GAP_AVAILABLE_IND,
MSG_ID_LL1_TL1_AUTO_GAP_AVAILABLE_IND,
MSG_ID_TL1_LL1_AUTO_GAP_UNAVAILABLE_IND,
MSG_ID_LL1_TL1_AUTO_GAP_UNAVAILABLE_IND,
MSG_ID_LL1_TL1_GAP_NOTIFY_IND,
MSG_ID_TL1_LL1_GAP_PATTERN_IND,

MSG_ID_LL1_EL1_SYNC_REQ,
MSG_ID_EL1_LL1_SYNC_CNF,
MSG_ID_EL1_LL1_RAT_STATUS_IND,
MSG_ID_EL1_LL1_MODE_STATUS_IND,
MSG_ID_LL1_EL1_MODE_STATUS_UPDATE_IND,
MSG_ID_EL1_LL1_ACTIVE_MEASURE_STATUS_IND,
MSG_ID_EL1_LL1_MEASURE_REQ,
MSG_ID_EL1_LL1_STANDBY_MEASURE_DONE_IND,
MSG_ID_LL1_EL1_GAP_SERVICE_REQ,
MSG_ID_EL1_LL1_GAP_STOP_REQ,
MSG_ID_LL1_EL1_GAP_STOP_CNF,
MSG_ID_LL1_EL1_GAP_STOP_REQ,
MSG_ID_EL1_LL1_GAP_STOP_CNF,
MSG_ID_EL1_LL1_GAP_SUSPEND_REQ,
MSG_ID_LL1_EL1_GAP_SUSPEND_CNF,
MSG_ID_LL1_EL1_GAP_SUSPEND_REQ,
MSG_ID_EL1_LL1_GAP_SUSPEND_CNF,
MSG_ID_EL1_LL1_GAP_RESUME_IND,
MSG_ID_LL1_EL1_GAP_RESUME_IND,
MSG_ID_EL1_LL1_AUTO_GAP_REQ,
MSG_ID_LL1_EL1_AUTO_GAP_CNF,
MSG_ID_LL1_EL1_AUTO_GAP_IND,
MSG_ID_EL1_LL1_AUTO_GAP_RES,
MSG_ID_EL1_LL1_AUTO_GAP_STOP_REQ,
MSG_ID_LL1_EL1_AUTO_GAP_STOP_IND,
MSG_ID_EL1_LL1_AUTO_GAP_STOP_RES,
MSG_ID_LL1_EL1_AUTO_GAP_STOP_CNF,
MSG_ID_EL1_LL1_AUTO_GAP_END_IND,
MSG_ID_LL1_EL1_AUTO_GAP_END_IND,
MSG_ID_EL1_LL1_AUTO_GAP_AVAILABLE_IND,
MSG_ID_LL1_EL1_AUTO_GAP_AVAILABLE_IND,
MSG_ID_EL1_LL1_AUTO_GAP_UNAVAILABLE_IND,
MSG_ID_LL1_EL1_AUTO_GAP_UNAVAILABLE_IND,
MSG_ID_LL1_EL1_GAP_NOTIFY_IND,
MSG_ID_EL1_LL1_GAP_PATTERN_IND,
MSG_ID_LL1_EL1_C2K_TIME_INFO_REQ,
MSG_ID_EL1_LL1_C2K_TIME_INFO_CNF,

#ifdef __EL1_IT__
MSG_ID_MLL1_IRT_SYNC_TMR,
MSG_ID_MLL1_EXPAND_PERIOD_TMR,
#endif /*__EL1_IT__*/

MSG_ID_CL1_LL1_RAT_STATUS_IND,
MSG_ID_CL1_LL1_MODE_STATUS_IND,
MSG_ID_LL1_CL1_MODE_STATUS_UPDATE_IND,
MSG_ID_CL1_LL1_ACTIVE_MEASURE_STATUS_IND,
MSG_ID_CL1_LL1_MEASURE_REQ,
MSG_ID_CL1_LL1_STANDBY_MEASURE_DONE_IND,
MSG_ID_LL1_CL1_GAP_SERVICE_REQ,
MSG_ID_CL1_LL1_GAP_STOP_REQ,
MSG_ID_LL1_CL1_GAP_STOP_CNF,
MSG_ID_LL1_CL1_GAP_STOP_REQ,
MSG_ID_CL1_LL1_GAP_STOP_CNF,
MSG_ID_LL1_CL1_GAP_SUSPEND_REQ,
MSG_ID_CL1_LL1_GAP_SUSPEND_CNF,
MSG_ID_LL1_CL1_GAP_RESUME_IND,
MSG_ID_CL1_LL1_AUTO_GAP_REQ,
MSG_ID_LL1_CL1_AUTO_GAP_CNF,
MSG_ID_LL1_CL1_AUTO_GAP_STOP_IND,
MSG_ID_CL1_LL1_AUTO_GAP_STOP_RES,
MSG_ID_CL1_LL1_AUTO_GAP_END_IND,
MSG_ID_LL1_CL1_AUTO_GAP_AVAILABLE_IND,
MSG_ID_LL1_CL1_AUTO_GAP_UNAVAILABLE_IND,
MSG_ID_LL1_CL1_GAP_NOTIFY_IND,
MSG_ID_CL1_LL1_GAP_PATTERN_IND,
MSG_ID_CL1_LL1_SIB8_TIMING_SYNC_REQ,
MSG_ID_LL1_CL1_SIB8_TIMING_SYNC_CNF,
MSG_ID_CL1_LL1_SPECIFIC_GAP_IND,

MODULE_MSG_END( MSG_ID_MLL1_MSG_CODE_TAIL )

#ifdef _Test_Hdr_On_PC
	};
#endif
#endif /*_MLL1_MSG_H*/