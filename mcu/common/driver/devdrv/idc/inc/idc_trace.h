#if !defined(__IDC_TRACE_H__)
#define __IDC_TRACE_H__

#if !defined(GEN_FOR_PC)
#include "kal_public_defs.h"
#endif

#include "dhl_trace.h"

#if !defined(GEN_FOR_PC)
#if defined (__DHL_MODULE__) || defined(__CUSTOM_RELEASE__)
	#include "idc_trace_gen.h"
#endif
#endif

BEGIN_TRACE_MAP(MOD_IDC)
	TRC_MSG(IDC_START_COUNT_MSG, 	"[DRV_IDC] Start counting CONNSYS TX/RX")
	TRC_MSG(IDC_END_COUNT_MSG, 	"[DRV_IDC] End counting CONNSYS TX/RX (%d/%d)")
	TRC_MSG(IDC_TDM_HI_MSG, 	"[DRV_IDC] TDM_REQ_HI_Entry")
	TRC_MSG(IDC_TDM_LO_MSG, 	"[DRV_IDC] TDM_REQ_LO_Entry")
	TRC_MSG(IDC_TDM_INIT_MSG, 	"[DRV_IDC] TDM_REQ Init")
	TRC_MSG(IDC_UART_INIT_MSG, 	"[DRV_IDC] IDC UART Init")
	TRC_MSG(IDC_SCHEDULE_0_MSG, 	"[DRV_IDC] Schedule Event, schedule_num %d, num_event %d")
	TRC_MSG(IDC_SCHEDULE_1_MSG, 	"[DRV_IDC] Schedule Offset = %d")
	TRC_MSG(IDC_SCHEDULE_2_MSG, 	"[DRV_IDC] Tx Schedule Event, Schedule Offset = %d, Schedule data = %x %x")
	TRC_MSG(IDC_SCHEDULE_UPDATE_MSG, 	"[DRV_IDC] Tx PHY_TIME Update from EL1C, PHY_TIME = %d")
	TRC_MSG(IDC_SCHEDULE_START_MSG,	"[DRV_IDC] Start Schedule %d 0x%x")
	TRC_MSG(IDC_SCHEDULE_STATUS_MSG,"[DRV_IDC] Get Schedule Status 0x%x")
	TRC_MSG(IDC_INTERNAL_PIN_MSG, 	"[DRV_IDC] Switch to internal pins")
	TRC_MSG(IDC_EXTERNAL_PIN_MSG, 	"[DRV_IDC] Switch to external pins")
	TRC_MSG(IDC_RX_LISR_MSG, 	"[DRV_IDC] IIR = %x, IER = %x, LSR = %x")
	TRC_MSG(IDC_RX_HISR_MSG, 	"[DRV_IDC] HISR without Read Data, IIR = %x, LSR = %x, RXTRIG = %x, (%d, %d, %d)")
	TRC_MSG(IDC_RX_WARNING_MSG, 	"[DRV_IDC] [Warning]IIR = %x, LSR = %x, RXTRIG = %x, (%d, %d, %d)")
	TRC_MSG(IDC_RX_HISTORY_MSG, 	"[DRV_IDC] Receive %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x")
	TRC_MSG(IDC_RX_MSG, 	"[DRV_IDC] Receive %x")
	TRC_MSG(IDC_RX_80211_RX_MSG,	"[DRV_IDC] Receive 802_11_RX %x %x")
	TRC_MSG(IDC_RX_80211_TX_MSG,	"[DRV_IDC] Receive 802_11_TX %x %x")
	TRC_MSG(IDC_RX_SEND_ILM_MSG,	"[DRV_IDC] MSG Send to EL1: %x, type:%x, msg:%x")
	TRC_MSG(IDC_RX_NOT_SEND_ILM_MSG,	"[DRV_IDC] MSG Not Send to EL1: %x, type:%x, msg:%x")
	TRC_MSG(IDC_RX_ABNORMAL_MSG,		"[DRV_IDC] IDC rx_buf receive 2 abnormal byte : %x")
	TRC_MSG(IDC_TX_COUNT_MSG,	"[DRV_IDC] Tx count: %d")
	TRC_MSG(IDC_EVENTS_STILL_BUSY_MSG,"[DRV_IDC] Some events are expired in scheduler & stopped. Status = 0x%x, Status2 = 0x%x")
	TRC_MSG(IDC_SLEEP_MSG, 	"[DRV_IDC] In drv_idc_init, sleep mode = %d")
	TRC_MSG(IDC_NONSLEEP_MSG, 	"[DRV_IDC] In drv_idc_init, NONSLEEP LAST TIME")
	TRC_MSG(IDC_ACTIVATE_MSG, 	"[DRV_IDC] In drv_idc_activate")
	TRC_MSG(IDC_RX_SUSPEND_MSG, 	"[DRV_IDC] UART RX suspends due to too many IDC commands received in 100 us")
	TRC_MSG(IDC_ILM_DISABLE_MSG, 	"[DRV_IDC] IDC_ILM disable by EL1")
	TRC_MSG(IDC_ILM_ENABLE_MSG, 	"[DRV_IDC] IDC_ILM enable by EL1")
	TRC_MSG(IDC_RX_RESUME_MSG, 	"[DRV_IDC] UART RX resume")
	TRC_MSG(IDC_WAKEUP_RX_RESUME_MSG, 	"[DRV_IDC] UART RX resume beacause sleep mode wake up")
	TRC_MSG(IDC_WAIT_IER_OFF_MSG,	"[DRV_IDC] Writing IER is not complete, count = %d")
	TRC_MSG(IDC_CLEAN_RXFIFO_MSG,	"[DRV_IDC] Clean RxFIFO in : %s")
	TRC_MSG(IDC_UNMASK_UART_ISR_MSG,	"[DRV_IDC] Unmask UART ISR in : %s")
	TRC_MSG(IDC_FUN_ENTER_CONCURRENTLY_MSG,	"[DRV_IDC] The IDC CTRL FUNC entering concurrently(%x, %x)")
	TRC_MSG(IDC_LEAVE_FUN_NOT_MATCH_MSG,	"[DRV_IDC] The IDC CTRL leave FUNC(%x) don't match enter func(%x)")
	TRC_MSG(IDC_GPS_BLANK_MSG,	"[DRV_IDC] GPS event trigger, gps_mode = (%x) , gps_status = (%x)")
	TRC_MSG(IDC_SRAM_FULL_DATA_IN_EVENT_BUFFER,	"[DRV_IDC]SRAM is full, Incoming event put in event_buf")
	TRC_MSG(IDC_DATA_IN_EVENT_BUFFER,	"[DRV_IDC]This event put in event_buf, offset: %d, data: %x %x")
	TRC_MSG(IDC_DATA_IN_EVENT_BUFFER_DISPLACE_HAPPEN,	"[DRV_IDC][DISPLACE]This event put in event_buf, offset: %d, data: %x %x")
	TRC_MSG(IDC_RESCHEDULE_EVENT_IN_EVENT_BUFFER,	"[DRV_IDC][RESCHEDULE]This event rescheduled in SRAM, offset: %d, data: %x %x")
	TRC_MSG(IDC_SCHEDULE_OVER_10MS_MSG, 	"[DRV_IDC] EL1C schedule over 10ms, PHY_TIME = %d, Schedule Offset = %d, Schedule data = %x %x")
	TRC_MSG(IDC_STOP_AND_FLUSH_EVENT_MSG, 	"[DRV_IDC] IDC_STOP_AND_FLUSH_EVENT, Schedule data = 0x%x, Schedule Offset = 0x%x, phy_time = 0x%x, real_phy_time = 0x%x, Wrap_case = %d")
END_TRACE_MAP(MOD_IDC)

#endif  /* !__IDC_TRACE_H__ */
