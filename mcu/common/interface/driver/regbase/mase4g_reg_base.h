#ifndef __MASE_REG_BASE_H__
#define __MASE_REG_BASE_H__

/* This is a regbase file for MASE cosim */
/* If you want to define regbase, please undef it first to avoid duplicated definiation in general regbase file */
/* All register base including Normal/Device/SO type in general regbase file will be driected to dummy register */

#undef MDSYS_PERI_ACC_TYPE_MASK
#define MDSYS_PERI_ACC_TYPE_MASK    (0xF0000000)
#undef MDSYS_PERI_DEVICE_TYPE
#define MDSYS_PERI_DEVICE_TYPE      (0xF0000000)
#define DEV_REG_BASE(addr)              ((addr  & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)

#undef BASE_MADDR_MDCIRQ
#define BASE_MADDR_MDCIRQ               (0xF0070000)
#undef BASE_ADDR_MDCIRQ
#define BASE_ADDR_MDCIRQ                DEV_REG_BASE(BASE_MADDR_MDCIRQ)

#undef BASE_MADDR_L2ULSBDMA
#define BASE_MADDR_L2ULSBDMA            (0xF0800000)
#undef BASE_ADDR_L2ULSBDMA
#define BASE_ADDR_L2ULSBDMA             DEV_REG_BASE(BASE_MADDR_L2ULSBDMA)

#undef BASE_MADDR_L2ULHBDMA
#define BASE_MADDR_L2ULHBDMA            (0xF0810000)
#undef BASE_ADDR_L2ULHBDMA
#define BASE_ADDR_L2ULHBDMA             DEV_REG_BASE(BASE_MADDR_L2ULHBDMA)

#undef BASE_MADDR_L2DLSBDMA
#define BASE_MADDR_L2DLSBDMA            (0xF0820000)
#undef BASE_ADDR_L2DLSBDMA
#define BASE_ADDR_L2DLSBDMA             DEV_REG_BASE(BASE_MADDR_L2DLSBDMA)

#undef BASE_MADDR_L2DLHBDMA
#define BASE_MADDR_L2DLHBDMA            (0xF0830000)
#undef BASE_ADDR_L2DLHBDMA
#define BASE_ADDR_L2DLHBDMA             DEV_REG_BASE(BASE_MADDR_L2DLHBDMA)

#undef BASE_MADDR_L2MBIST
#define BASE_MADDR_L2MBIST              (0xF0840000)
#undef BASE_ADDR_L2MBIST
#define BASE_ADDR_L2MBIST               DEV_REG_BASE(BASE_MADDR_L2MBIST)

#undef BASE_MADDR_L2PSEUPHY
#define BASE_MADDR_L2PSEUPHY            (0xF0850000)
#undef BASE_ADDR_L2PSEUPHY
#define BASE_ADDR_L2PSEUPHY             DEV_REG_BASE(BASE_MADDR_L2PSEUPHY)

#undef BASE_MADDR_L2HWLOG
#define BASE_MADDR_L2HWLOG              (0xF0858000)
#undef BASE_ADDR_L2HWLOG
#define BASE_ADDR_L2HWLOG               DEV_REG_BASE(BASE_MADDR_L2HWLOG)

#undef BASE_MADDR_L2SOINDMA
#define BASE_MADDR_L2SOINDMA            (0xF0860000)
#undef BASE_ADDR_L2SOINDMA
#define BASE_ADDR_L2SOINDMA             DEV_REG_BASE(BASE_MADDR_L2SOINDMA)

#undef BASE_MADDR_L2SOOUTDMA
#define BASE_MADDR_L2SOOUTDMA           (0xF0870000)
#undef BASE_ADDR_L2SOOUTDMA
#define BASE_ADDR_L2SOOUTDMA            DEV_REG_BASE(BASE_MADDR_L2SOOUTDMA)

#undef BASE_MADDR_L2ULLMAC
#define BASE_MADDR_L2ULLMAC             (0xF0880000)
#undef BASE_ADDR_L2ULLMAC
#define BASE_ADDR_L2ULLMAC              DEV_REG_BASE(BASE_MADDR_L2ULLMAC)

#undef BASE_MADDR_L2ULLMAC_CH0
#define BASE_MADDR_L2ULLMAC_CH0         (0xF0880000)
#undef BASE_ADDR_L2ULLMAC_CH0
#define BASE_ADDR_L2ULLMAC_CH0          DEV_REG_BASE(BASE_MADDR_L2ULLMAC_CH0)

#undef BASE_MADDR_L2ULLMAC_CH1
#define BASE_MADDR_L2ULLMAC_CH1         (0xF0888000)
#undef BASE_ADDR_L2ULLMAC_CH1
#define BASE_ADDR_L2ULLMAC_CH1          DEV_REG_BASE(BASE_MADDR_L2ULLMAC_CH1)

#undef BASE_MADDR_L2DLLMAC
#define BASE_MADDR_L2DLLMAC             (0xF0890000)
#undef BASE_ADDR_L2DLLMAC
#define BASE_ADDR_L2DLLMAC              DEV_REG_BASE(BASE_MADDR_L2DLLMAC)

#undef BASE_MADDR_L2CALMAC
#define BASE_MADDR_L2CALMAC             (0xF0898000)
#undef BASE_ADDR_L2CALMAC
#define BASE_ADDR_L2CALMAC              DEV_REG_BASE(BASE_MADDR_L2CALMAC)

#undef BASE_MADDR_L2ULFIFOMNG
#define BASE_MADDR_L2ULFIFOMNG          (0xF08A0000)
#undef BASE_ADDR_L2ULFIFOMNG
#define BASE_ADDR_L2ULFIFOMNG           DEV_REG_BASE(BASE_MADDR_L2ULFIFOMNG)

#undef BASE_MADDR_L2DLFIFOMNG
#define BASE_MADDR_L2DLFIFOMNG          (0xF08A4000)
#undef BASE_ADDR_L2DLFIFOMNG
#define BASE_ADDR_L2DLFIFOMNG           DEV_REG_BASE(BASE_MADDR_L2DLFIFOMNG)

#undef BASE_MADDR_L2SOFIFOMNG
#define BASE_MADDR_L2SOFIFOMNG          (0xF08A8000)
#undef BASE_ADDR_L2SOFIFOMNG
#define BASE_ADDR_L2SOFIFOMNG           DEV_REG_BASE(BASE_MADDR_L2SOFIFOMNG)

#undef BASE_MADDR_L2SEC
#define BASE_MADDR_L2SEC                (0xF08B0000)
#undef BASE_ADDR_L2SEC
#define BASE_ADDR_L2SEC                 DEV_REG_BASE(BASE_MADDR_L2SEC)

#undef BASE_MADDR_L2ULSECCTL
#define BASE_MADDR_L2ULSECCTL           (0xF08B4000)
#undef BASE_ADDR_L2ULSECCTL
#define BASE_ADDR_L2ULSECCTL            DEV_REG_BASE(BASE_MADDR_L2ULSECCTL)

#undef BASE_MADDR_L2DLSECCTL
#define BASE_MADDR_L2DLSECCTL           (0xF08B8000)
#undef BASE_ADDR_L2DLSECCTL
#define BASE_ADDR_L2DLSECCTL            DEV_REG_BASE(BASE_MADDR_L2DLSECCTL)

#undef BASE_MADDR_L2SOSECCTL
#define BASE_MADDR_L2SOSECCTL           (0xF08BC000)
#undef BASE_ADDR_L2SOSECCTL
#define BASE_ADDR_L2SOSECCTL            DEV_REG_BASE(BASE_MADDR_L2SOSECCTL)

#undef BASE_MADDR_L2MISC
#define BASE_MADDR_L2MISC               (0xF08C0000)
#undef BASE_ADDR_L2MISC
#define BASE_ADDR_L2MISC                DEV_REG_BASE(BASE_MADDR_L2MISC)

#undef BASE_MADDR_L2DBGMON
#define BASE_MADDR_L2DBGMON             (0xF08D0000)
#undef BASE_ADDR_L2DBGMON
#define BASE_ADDR_L2DBGMON              DEV_REG_BASE(BASE_MADDR_L2DBGMON)

#undef BASE_MADDR_L2ULBUFMNG
#define BASE_MADDR_L2ULBUFMNG           (0xF08E0000)
#undef BASE_ADDR_L2ULBUFMNG
#define BASE_ADDR_L2ULBUFMNG            DEV_REG_BASE(BASE_MADDR_L2ULBUFMNG)

#undef BASE_MADDR_L2DLBUFMNG
#define BASE_MADDR_L2DLBUFMNG           (0xF08F0000)
#undef BASE_ADDR_L2DLBUFMNG
#define BASE_ADDR_L2DLBUFMNG            DEV_REG_BASE(BASE_MADDR_L2DLBUFMNG)


#define BASE_ADDR_SIMCTRL               (0xFFFF1000)
#define BASE_ADDR_HSL                   (0xFFFF2000)


#endif /* end of __MASE_REG_BASE_H__ */
