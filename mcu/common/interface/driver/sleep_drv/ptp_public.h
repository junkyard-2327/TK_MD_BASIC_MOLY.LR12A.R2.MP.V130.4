#ifndef __PTP_PUBLIC_H__
#define __PTP_PUBLIC_H__

#include "kal_general_types.h"

extern void ptp_sleep(void);

extern void ptp_wake(void);

extern void ptp_init(void);

extern kal_bool ptp_Dump_API(kal_uint32 data_len, kal_uint8 *data_str);
extern kal_bool ptp_Ctrl_API(kal_uint32 data_len, kal_uint8 *data_str);
extern kal_bool ptp_Freq_API(kal_uint32 data_len, kal_uint8 *data_str);
extern kal_bool ptp_PMIC_API(kal_uint32 data_len, kal_uint8 *data_str);

#endif
