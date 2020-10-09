#ifndef __DRV_PTP_H__
#define __DRV_PTP_H__

#include "reg_base.h"
#include "ptp_reg_base.h"
#include "DVFS_drv_reg_base.h"
#include "DVFS_drv_md_public.h"
#include "DVFS_drv.h"
#include "DVFS_drv_common.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_internal_api.h"
#include "kal_general_types.h"
#include "intrCtrl.h"
#include "us_timer.h"
#include "dcl.h"                 /* for PMIC control */

#if defined(MT6765)
    #define IGNORE_NON_DVFS_HW_TIMEOUT_ERROR 1
#else
    #define IGNORE_NON_DVFS_HW_TIMEOUT_ERROR 0
#endif
//#define MD_PTP_THERM_CTRL_UMOLY_DVT
//#define MD_PTP_THERM_CTRL_UMOLY_DVT_PWM_EN
//#define MD_PTP_THERM_CTRL_UMOLY_REGRESSION_TEST
//#define MD_PTP_THERM_CTRL_UMOLY_DVFS_IT_TEST
#define USER_LOAD_ATCMD_WRITE_PMIC_EN

#define DETWINDOW_VAL   0xA28
#define DEFAULT_THERMAL 0xDA1
#define OVER_INV_TEM    270 // 27'C
#define DEF_INV_TEM     170 // 17'C

#if defined(MT6763)
    #define NR_GEAR	    4
    #define START_CORE  0
    #define NR_PTP_CORE 1
    #define MD_PTP_EN           1
    #define MD_THERM_CTRL_EN    1
    #define MD_PTP_MONITOR_EN   0
    #define TEMPADC_MCUX 0x4 // TSMCU5: ((0x30&TSCON1_bit_4_5_00)|(0x07&TSCON1_bit_0_2_100))
    #define THERM_COEFFICIENT   1528
    #define PTP_PMIC6356
    #define PTPEN_SECURE_OFFSET 0x0
    #define ASSERTABLE 0

    #define VMODEM_LOW_TEMP_INVERSION_MARGIN(var1)  (0xA - (var1))
#elif defined(MT6739)
    #define NR_GEAR		3
    #define START_CORE  1
    #define NR_PTP_CORE 1
    #define MD_PTP_EN           1
    #define MD_THERM_CTRL_EN    1
    #define MD_PTP_MONITOR_EN   0
    #define TEMPADC_MCUX 0x2 // TSMCU3: ((0x30&TSCON1_bit_4_5_00)|(0x07&TSCON1_bit_0_2_010))
    #define THERM_COEFFICIENT   1650
    #define PTP_PMIC6357
    #define PTPEN_SECURE_OFFSET 0x0
    #define ASSERTABLE 0

    #define VMODEM_LOW_TEMP_INVERSION_MARGIN(var1)  (0xA - (var1))
#elif defined(MT6771)
    #define NR_GEAR             4
    #define START_CORE          0
    #define NR_PTP_CORE         1
    #if defined(DVFS_ENABLE)
    #define MD_PTP_EN           1
    #else
    #define MD_PTP_EN           0
    #endif
    #define MD_THERM_CTRL_EN    1
    #define MD_PTP_MONITOR_EN   0
    #define TEMPADC_MCUX        0x0 // TSMCU1: ((0x30&TSCON1_bit_4_5_00)|(0x07&TSCON1_bit_0_2_000))
    #define THERM_COEFFICIENT   1534
    #define PTP_PMIC6358
    #define PTPEN_SECURE_OFFSET 0x0
    #define ASSERTABLE          0

    #define VMODEM_LOW_TEMP_INVERSION_MARGIN(var1)  (0xA - (var1))
#elif defined(MT6765)
    #define NR_GEAR             4
    #define START_CORE          0
    #define NR_PTP_CORE         1
    #if defined(DVFS_ENABLE)
    #define MD_PTP_EN           1
    #else
    #define MD_PTP_EN           0
    #endif
    #define MD_THERM_CTRL_EN    1
    #define MD_PTP_MONITOR_EN   0
    #define TEMPADC_MCUX        0x4 // TSMCU5: ((0x30&TSCON1_bit_4_5_00)|(0x07&TSCON1_bit_0_2_100))
    #define THERM_COEFFICIENT   1534
    #define PTP_PMIC6357
    #define PTPEN_SECURE_OFFSET 0x0
    #define ASSERTABLE          1

    #define VMODEM_LOW_TEMP_INVERSION_MARGIN(var1)  (0x6 - (var1))
#elif defined(MT6761)
    #define NR_GEAR             4
    #define START_CORE          0
    #define NR_PTP_CORE         1
    #if defined(DVFS_ENABLE)
    #define MD_PTP_EN           1
    #else
    #define MD_PTP_EN           0
    #endif
    #define MD_THERM_CTRL_EN    1
    #define MD_PTP_MONITOR_EN   0
    #define TEMPADC_MCUX        0x3 // TSMCU4: ((0x30&TSCON1_bit_4_5_00)|(0x07&TSCON1_bit_0_2_100))
    #define THERM_COEFFICIENT   1653
    #define PTP_PMIC6357
    #define PTPEN_SECURE_OFFSET 0x0
    #define ASSERTABLE          1

    #define VMODEM_LOW_TEMP_INVERSION_MARGIN(var1)  (0x6 - (var1))
#else
    #define NR_GEAR     4
    #define START_CORE  0
    #define NR_PTP_CORE 1
    #define MD_PTP_EN           0
    #define MD_THERM_CTRL_EN    0
    #define MD_PTP_MONITOR_EN   0
    #define TEMPADC_MCUX 0x4
    #define THERM_COEFFICIENT   1612
    #define PTP_PMIC6356
    #define PTPEN_SECURE_OFFSET 0x0
    #define ASSERTABLE 0

    #define VMODEM_LOW_TEMP_INVERSION_MARGIN(var1)  ((var1) - (var1))
#endif

#if defined(PTP_PMIC6356)
    #define PTP_BASE    0x50
    #define PMIC_BASE   0x50
    #define PTP_PMIC_VMODEM             0x0C30
    #define PTP_PMIC_VCORE              0x0BE8
    #define PTP_PMIC_VS2                0x0CB0
    #define PTP_PMIC_VSRAM_OTHERS_RO    0x1188
    #define PTP_PMIC_VSRAM_OTHERS_WO    0x118E
    #define PTP_PMIC_WORKAROUND         0x0D26
#elif defined(PTP_PMIC6357)
    #define PTP_BASE    0x88
    #define PMIC_BASE   0x50
    #define PTP_PMIC_VMODEM             0x15AA
    #define PTP_PMIC_VCORE              0x152A
#elif defined(PTP_PMIC6358)
    #define PTP_BASE    0x50
    #define PMIC_BASE   0x50
    #define PTP_PMIC_VMODEM             0x15A6
#else
    #define PTP_BASE    0x50
    #define PMIC_BASE   0x50
#endif

#define PTP2PMIC_BASE (PTP_BASE - PMIC_BASE)
#define PMIC2PTP_BASE (PMIC_BASE - PTP_BASE)

#if defined(MT6763)
    #define CT_VOLT 0x4
    #define LOWER_BOUND         (0x68 - PMIC_BASE) // due to vsram - vlogic < 350mv
    #define VMODEM_VOLT_NUM 3
    #define VMODEM_0_CT_SIGNOFF (0x68 + CT_VOLT - PMIC_BASE)
    #define VMODEM_1_CT_SIGNOFF (0x70 + CT_VOLT - PMIC_BASE)
    #define VMODEM_2_CT_SIGNOFF (0x78 + CT_VOLT - PMIC_BASE)
    #define VMODEM_0_SIGNOFF    (0x68 - PMIC_BASE)
    #define VMODEM_1_SIGNOFF    (0x70 - PMIC_BASE)
    #define VMODEM_2_SIGNOFF    (0x78 - PMIC_BASE)
#elif defined(MT6739)
    #define CT_VOLT 0x7
    #define LOWER_BOUND         (0xA8 - PMIC_BASE)
    #define VMODEM_VOLT_NUM 2
    #define VMODEM_0_CT_SIGNOFF (0xA8 + CT_VOLT - PMIC_BASE)
    #define VMODEM_1_CT_SIGNOFF (0xB8 + CT_VOLT - PMIC_BASE)
    #define VMODEM_0_SIGNOFF    (0xA8 - PMIC_BASE)
    #define VMODEM_1_SIGNOFF    (0xB8 - PMIC_BASE)
    #define VMIN_HIGH_THRESHOLD (0xB6 - PMIC_BASE)
#elif defined(MT6771)
    #define CT_VOLT             0x4
    #define LOWER_BOUND         (0x66 - PMIC_BASE)  // 0.6375V, vsram - vlogic (/w pmic_variation) < 350mv
    #define VMODEM_VOLT_NUM     3
    #define VMODEM_0_CT_SIGNOFF (0x68 + CT_VOLT - PMIC_BASE)
    #define VMODEM_1_CT_SIGNOFF (0x70 + CT_VOLT - PMIC_BASE)
    #define VMODEM_2_CT_SIGNOFF (0x78 + CT_VOLT - PMIC_BASE)
    #define VMODEM_0_SIGNOFF    (0x68 - PMIC_BASE)
    #define VMODEM_1_SIGNOFF    (0x70 - PMIC_BASE)
    #define VMODEM_2_SIGNOFF    (0x78 - PMIC_BASE)
#elif defined(MT6765)
    #define CT_VOLT             0x0
    #define LOWER_BOUND         (0x66 - PMIC_BASE) // due to vsram - vlogic < 350mv
    #define VMODEM_VOLT_NUM     3
    #define VMODEM_0_SIGNOFF    (0x70 - PMIC_BASE)
    #define VMODEM_1_SIGNOFF    (0x78 - PMIC_BASE)
    #define VMODEM_2_SIGNOFF    (0x80 - PMIC_BASE)
    #define VMODEM_0_CT_SIGNOFF VMODEM_0_SIGNOFF
    #define VMODEM_1_CT_SIGNOFF VMODEM_1_SIGNOFF
    #define VMODEM_2_CT_SIGNOFF VMODEM_2_SIGNOFF
#elif defined(MT6761)
    #define CT_VOLT             0x0
    #define LOWER_BOUND         (0x66 - PMIC_BASE) // due to vsram - vlogic < 350mv
    #define VMODEM_VOLT_NUM     3
    #define VMODEM_0_SIGNOFF    (0x70 - PMIC_BASE)
    #define VMODEM_1_SIGNOFF    (0x78 - PMIC_BASE)
    #define VMODEM_2_SIGNOFF    (0x80 - PMIC_BASE)
    #define VMODEM_0_CT_SIGNOFF VMODEM_0_SIGNOFF
    #define VMODEM_1_CT_SIGNOFF VMODEM_1_SIGNOFF
    #define VMODEM_2_CT_SIGNOFF VMODEM_2_SIGNOFF
#else
    #define CT_VOLT             0x4
    #define LOWER_BOUND         (0x50 - PMIC_BASE)
    #define VMODEM_VOLT_NUM     4
    #define VMODEM_2_SIGNOFF    (0x78 - PMIC_BASE)
    #define VMODEM_1_SIGNOFF    (0x70 - PMIC_BASE)
    #define VMODEM_0_SIGNOFF    (0x68 - PMIC_BASE)
#endif

#define PTPEN_MODE_CLEAR    (0x0 + PTPEN_SECURE_OFFSET)
#define PTPEN_MODE_INIT1    (0x1 + PTPEN_SECURE_OFFSET)
#define PTPEN_MODE_INIT2    (0x5 + PTPEN_SECURE_OFFSET)
#define PTPEN_MODE_MON      (0x2 + PTPEN_SECURE_OFFSET)

// PMIC related Macro
#if defined(__MTK_TARGET__) && !defined(__FPGA__) && !defined(L1_SIM)
    extern DCL_UINT32 DRV_Read_PMIC_Data(DCL_UINT32 pmic_addr);
    extern void DRV_Write_PMIC_Data(DCL_UINT32 pmic_addr, DCL_UINT32 value);

    #define ptp_read_pmic(var1)         (kal_uint32)DRV_Read_PMIC_Data(var1)
    #define ptp_write_pmic(var1, var2)  DRV_Write_PMIC_Data(var1, var2)
#else
    #define ptp_read_pmic(var1)         0
    #define ptp_write_pmic(var1, var2)  (void)0
#endif

#if defined(MD_PTP_THERM_CTRL_UMOLY_REGRESSION_TEST)
extern int rand(void);
#endif

#define DRV_WriteReg32(addr,data)     ((*(volatile kal_uint32 *)(addr)) = (kal_uint32)(data))
#define DRV_Reg32(addr)               (*(volatile kal_uint32 *)(addr))
#define DRV_Reg(addr)                 (*(volatile kal_uint16 *)(addr))

#define PTP_BIT(_bit)              (0x1 << (_bit))
#define PTP_TEST_BIT(_val, _bit)   (((_val) & PTP_BIT(_bit)) != 0)
#define PTP_SET_BIT(_val, _bit)    (_val) |= PTP_BIT(_bit)
#define PTP_CLEAR_BIT(_val, _bit)  (_val) &= ~PTP_BIT(_bit)

// PTP Driver ASSERT Macro
#ifdef  __MTK_INTERNAL__
    #if (ASSERTABLE) || defined(MD_PTP_THERM_CTRL_UMOLY_REGRESSION_TEST) || defined(MD_PTP_THERM_CTRL_UMOLY_DVFS_IT_TEST)
        #define PTP_ASSERT_Bypass( st )                    (void)0
        #define PTP_ASSERT_Reboot( st )                    EXT_ASSERT( st, 0, 0, 0 )
        #define PTP_EXT_ASSERT_Bypass( st, d1, d2, d3 )    (void)0
        #define PTP_EXT_ASSERT_Reboot( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
    #else
        // NO ASSERT for debug after MP
        #define PTP_ASSERT_Bypass( st )                    (void)0
        #define PTP_ASSERT_Reboot( st )                    (void)0
        #define PTP_EXT_ASSERT_Bypass( st, d1, d2, d3 )    (void)0
        #define PTP_EXT_ASSERT_Reboot( st, d1, d2, d3 )    (void)0
    #endif
#else
    #define PTP_ASSERT_Bypass( st )                    (void)0
    #define PTP_ASSERT_Reboot( st )                    (void)0
    #define PTP_EXT_ASSERT_Bypass( st, d1, d2, d3 )    (void)0
    #define PTP_EXT_ASSERT_Reboot( st, d1, d2, d3 )    (void)0
#endif
#define PTP_DUMP_ASSERT(var1, var2, var3, var4) PTP_EXT_ASSERT_Bypass(0, (((var1) << 20) | ((var2) << 16) | ((var3) << 8) | (var4)), \
    ((DRV_Reg32(PTP_DCVALUES) & 0xFFFF0000) | ((DRV_Reg32(PTP_TEMP) & 0xFF) << 8) | (DRV_Reg32(PTP_PTPEN) & 0xFF)), \
    (((DRV_Reg32(PTP_VOP30) & 0xFFFF) << 16)  | (DRV_Reg32(PTP_VDESIGN30) & 0xFFFF)))

// PTP Driver Update SPM table Macro
#if defined(MD_PTP_THERM_CTRL_UMOLY_DVT)
    #define PTP_update_SPM_table_M(var1, var2) (void)0
#elif defined(MD_PTP_THERM_CTRL_UMOLY_REGRESSION_TEST)
    #define PTP_update_SPM_table_M(var1, var2) if(PTP_STATE_INIT == (ptp_state)var1) { \
        ptp_update_SPM_table(var1, var2);}
#else
    #define PTP_update_SPM_table_M(var1, var2) ptp_update_SPM_table(var1, var2)
#endif

// DVFS related API Macro
#if defined(MD_PTP_THERM_CTRL_UMOLY_DVT) || defined(MT6739) || defined(DVFS_STATIC_FREQ)
    #define PTP_DVFS_Lock2HighGear()    (void)0
    #define PTP_DVFS_UnlockHighGear()   (void)0
    #define PTP_DVFS_LockCompleted()    KAL_TRUE
    #define PTP_DVFS_LOCK()             (void)0
    #define PTP_DVFS_UNLOCK()           (void)0
#else
    extern void DVFS_ptpLock2HighGear(void);
    extern void DVFS_ptpUnlockHighGear(void);
    extern kal_bool DVFS_ptpLockCompleted(void);

    #define PTP_DVFS_Lock2HighGear()    DVFS_ptpLock2HighGear()
    #define PTP_DVFS_UnlockHighGear()   DVFS_ptpUnlockHighGear()
    #define PTP_DVFS_LockCompleted()    DVFS_ptpLockCompleted()

    #define PTP_DVFS_LOCK() do { \
        PTP_DVFS_Lock2HighGear(); \
        ptp_dvfs_state = DVFS_STATE_LOCK; \
        } while(0)
    #define PTP_DVFS_UNLOCK() do { \
        PTP_DVFS_UnlockHighGear(); \
        ptp_dvfs_state = DVFS_STATE_UNLOCK; \
        } while(0)
#endif
#if defined(MT6763) || defined(MT6765) || defined(MT6761)
    #define PTP_DVFS_HIGH_LOW_DIFF 0x18
#elif defined(MT6771)
    #define PTP_DVFS_HIGH_LOW_DIFF 0x16
#endif

#if defined(__MAUI_BASIC__) || defined(__UDVT__)
    #define IS_SW_LOAD_L1_EXIST 0 /* L1 module not exist in Basic Load and UDVT Load */
#else
    #define IS_SW_LOAD_L1_EXIST 1 /* especially for UDVT */
#endif /* defined(__MAUI_BASIC__) || defined(__UDVT__) */

/* For BASIC & UDVT build */
#if IS_SW_LOAD_L1_EXIST
    #include "TrcMod.h"
    #define PTP_DUMP_INFO(var1, var2, var3)         MD_PTP_DBG_INFO(var1, var2, var3)
    #define PTP_DUMP_DBG1(var1, var2, var3, var4)   MD_PTP_DBG_DUMP1(var1, var2, var3, var4)
    #define PTP_DUMP_DBG2(var1, var2)               MD_PTP_DBG_DUMP2(var1, var2)
    #define PTP_DUMP_DBG3(var1, var2, var3)         MD_PTP_DBG_DUMP3(var1, var2, var3)
    #define PTP_DUMP_DBG4(var1, var2)               MD_PTP_DBG_DUMP4(var1, var2)
    #define PTP_DUMP_DBG5(var1, var2)               MD_PTP_DBG_DUMP5(var1, var2)
    #define PTP_DUMP_DBG_DUMP_Table(var1, var2)     MD_PTP_DBG_DUMP_Table(var1, var2)
    #define PTP_DUMP_MON(var1, var2, var3, var4, var5, var6, var7, var8) MD_PTP_DBG_MON(var1, var2, var3, var4, var5, var6, var7, var8)
#else
    #define PTP_DUMP_INFO(var1, var2, var3)         (void)0
    #define PTP_DUMP_DBG1(var1, var2, var3, var4)   (void)0
    #define PTP_DUMP_DBG2(var1, var2)               (void)0
    #define PTP_DUMP_DBG3(var1, var2, var3)         (void)0
    #define PTP_DUMP_DBG4(var1, var2)               (void)0
    #define PTP_DUMP_DBG5(var1, var2)               (void)0
    #define PTP_DUMP_DBG_DUMP_Table(var1, var2)     (void)0
    #define PTP_DUMP_MON(var1, var2, var3, var4, var5, var6, var7, var8) (void)0
#endif

// Thermal Driver Macro
#define ENABLE_AUXADC() do { \
    DRV_WriteReg32(MD_MODULE_SW_CG_1_CLR, (0x1<<14)); \
    } while(0)
#define DISABLE_AUXADC() do { \
    DRV_WriteReg32(MD_MODULE_SW_CG_1_SET, (0x1<<14)); \
    } while(0)
#if defined(MT6765) || defined(MT6761)
    #define THERM_CTRL_BUS_STA_MASK (0x81)
    #define AUXADC_MD_CG_OFFSET (0x1<<14)
    #define READ_ENABLE_AUXADC_CLR_CG(a, b) do { \
        a = DRV_Reg32(MD_MODULE_SW_CG_1_CLR); \
        b = DRV_Reg32(MD_MODULE_SW_CG_1_STA); \
        } while(0)
    #define READ_DISABLE_AUXADC_SET_CG(a, b) do { \
        a = DRV_Reg32(MD_MODULE_SW_CG_1_SET); \
        b = DRV_Reg32(MD_MODULE_SW_CG_1_STA); \
        } while(0)
#endif
#if (MD_THERM_CTRL_EN) || defined(MD_PTP_THERM_CTRL_UMOLY_DVT)
    #define SET_IMMD_INT() do { \
        DRV_WriteReg32(PTP_TEMPMONINT, 0x80010000); /* Set INTERRUPT ENABLE */ \
        DRV_WriteReg32(PTP_TEMPMSRCTL1, (DRV_Reg32(PTP_TEMPMSRCTL1) | 0x12)); /* Set immediate sense interrupt */ \
        } while(0)
    #define WAIT_IMMD_INT() do { \
        while((DRV_Reg32(PTP_TEMPMONINTSTS) & 0x00010000) == 0x0); /* Wait filter sense interrupt bit 19 */ \
        } while(0)
    #define SET_LOFSINT_HOFSINT_INT() do { \
        DRV_WriteReg32(PTP_TEMPMONINT, 0x8000000C); /* Enable both HIGH OFFSET INT and LOW OFFSET INT */ \
        } while(0)
    #define SET_LOFSINT_INT() do { \
        DRV_WriteReg32(PTP_TEMPMONINT, 0x80000004); /* Disable HIGH OFFSET INT and Enable LOW OFFSET INT */ \
        } while(0)
    #define SET_HOFSINT_INT() do { \
        DRV_WriteReg32(PTP_TEMPMONINT, 0x80000008); /* Disable LOW OFFSET INT and Enable HIGH OFFSET INT */ \
        } while(0)
    #define SET_OFSINT_ENABLE_THERM_CTRL() do { \
        if(SPM_STATE_INIT == ptp_spm_state) { \
            SET_HOFSINT_INT(); \
            ENABLE_THERM_CTRL(); } \
        else if(SPM_STATE_MON == ptp_spm_state) { \
            SET_LOFSINT_INT(); \
            ENABLE_THERM_CTRL(); } \
        else if(SPM_STATE_SIGNOFF == ptp_spm_state) { \
            } \
        } while(0)
    #define CLEAR_THERM_INT() do { \
        DRV_WriteReg32(PTP_TEMPMONINTSTS, 0xFFFFFFFF); /* Clear INTERRUPT STATUS */ \
        } while(0)
    #define ENABLE_THERM_CTRL() do { \
        DRV_WriteReg32(PTP_TEMPMONCTL0, 0x1); \
        } while(0)
    #define DISABLE_THERM_CTRL() do { \
        DRV_WriteReg32(PTP_TEMPMONCTL0, 0x0); \
        DRV_WriteReg32(PTP_TEMPMSRCTL1, 0x0); /* Clear TEMP MEASURE CONTROL */ \
        DRV_WriteReg32(PTP_TEMPMONINT, 0x80000000); /* Clear INTERRUPT ENABLE */ \
        } while(0)
    #define SW_CLEAR_AUXADC() do { \
        DRV_WriteReg32(AP_AUXADC_CON1_CLR, 0x400); \
        DRV_WriteReg32(AP_AUXADC_CON1_SET, 0x400); \
        } while(0)
    #define thermal_cal_M() thermal_cal()
    #define thermal_ctrl_init_auxadc_M() thermal_ctrl_init_auxadc()
#else
    #define SET_IMMD_INT() (void)0
    #define WAIT_IMMD_INT() (void)0
    #define SET_LOFSINT_HOFSINT_INT() (void)0
    #define SET_LOFSINT_INT() (void)0
    #define SET_HOFSINT_INT() (void)0
    #define SET_OFSINT_ENABLE_THERM_CTRL() (void)0
    #define CLEAR_THERM_INT() (void)0
    #define ENABLE_THERM_CTRL() (void)0
    #define DISABLE_THERM_CTRL() (void)0
    #define SW_CLEAR_AUXADC() (void)0
    #define thermal_cal_M() (void)0
    #define thermal_ctrl_init_auxadc_M() (void)0
#endif

#if (MD_PTP_MONITOR_EN) || defined(MD_PTP_THERM_CTRL_UMOLY_DVT)
    #define get_thermal_slope_intercept_M() get_thermal_slope_intercept()
    #define base_ops_set_phase_M(var1, var2) base_ops_set_phase(var1, var2)
#else
    #define get_thermal_slope_intercept_M() (void)0
    #define base_ops_set_phase_M(var1, var2) if(PTP_PHASE_MON != (ptp_phase)var2) { \
        base_ops_set_phase(var1, var2);}
#endif

// PTP Driver Macro
#define DUMP_PTP_TABLE() do { \
    ptp_status(); \
    PTP_DUMP_DBG_DUMP_Table(PTP_Core_String(PTP_ELT_VMODEM), PTP_Mode_String(2)); \
    PTP_DUMP_DBG1(vmodem_raw_table[0], vmodem_raw_table[1], vmodem_raw_table[2], vmodem_raw_table[3]); \
    PTP_DUMP_DBG_DUMP_Table(PTP_Core_String(PTP_ELT_VMODEM), PTP_Mode_String(0)); \
    PTP_DUMP_DBG1(ptp_dvfs_table.PTP_INIT_VMODEM_VOLT[0],ptp_dvfs_table.PTP_INIT_VMODEM_VOLT[1],ptp_dvfs_table.PTP_INIT_VMODEM_VOLT[2],ptp_dvfs_table.PTP_INIT_VMODEM_VOLT[3]); \
    PTP_DUMP_DBG_DUMP_Table(PTP_Core_String(PTP_ELT_VMODEM), PTP_Mode_String(1)); \
    PTP_DUMP_DBG1(ptp_dvfs_table.PTP_MONITOR_VMODEM_VOLT[0],ptp_dvfs_table.PTP_MONITOR_VMODEM_VOLT[1],ptp_dvfs_table.PTP_MONITOR_VMODEM_VOLT[2],ptp_dvfs_table.PTP_MONITOR_VMODEM_VOLT[3]); \
    } while(0)
#define DISABLE_PTP_CTRL() do { \
    DRV_WriteReg32(PTP_PTPCTL0, 0x0); \
    DRV_WriteReg32(PTP_PTPEN, 0x0); \
    } while(0)
#define CLEAR_PTP_INT() do { \
    DRV_WriteReg32(PTP_PTPEN, PTPEN_MODE_CLEAR); \
    DRV_WriteReg32(PTP_PTPINTSTS, 0xFFFFFFFF); \
    } while(0)
#define PTP_REMAP_DVFSRC() do { \
    DRV_WriteReg32(DVFSRC_MD_VMD_REMAP, 0x1 << 31); /* Set Vmd remapping to 0 for all gears and enable remapping */ \
    DRV_WriteReg32(DVFSRC_MD_VSRAM_REMAP, 0x1 << 31); /* Set Vsram remapping to 0 for all gears and enable remapping */ \
    DRV_WriteReg32(DVFSRC_MD_REQUEST, (DVFS_VMODEM_MAX_GEAR << 3) | DVFS_VMD_MAX_GEAR); /* Set (vmd1, vmodem) to highest gears through MD_SW_REQUEST */ \
    } while(0)
#define SET_DVFS_ERROR_INFO() do { \
    ptp_dvfs_error_info.ptp_dvfs_timeout_flag = 1; \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_COUNT = DRV_Reg32(DVFSRC_RECORD_COUNT); \
    ptp_dvfs_error_info.PTP_DVFSRC_LEVEL = DRV_Reg32(DVFSRC_LEVEL); \
    ptp_dvfs_error_info.PTP_DVFSRC_BASIC_CONTROL = DRV_Reg32(DVFSRC_BASIC_CONTROL); \
    ptp_dvfs_error_info.PTP_DVFSRC_MD_SW_CONTROL = DRV_Reg32(DVFSRC_MD_SW_CONTROL); \
    ptp_dvfs_error_info.PTP_DVFSRC_LAST = DRV_Reg32(DVFSRC_LAST); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_MD_0 = DRV_Reg32(DVFSRC_RECORD_MD_0); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_MD_1 = DRV_Reg32(DVFSRC_RECORD_MD_1); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_MD_2 = DRV_Reg32(DVFSRC_RECORD_MD_2); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_MD_3 = DRV_Reg32(DVFSRC_RECORD_MD_3); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_MD_4 = DRV_Reg32(DVFSRC_RECORD_MD_4); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_MD_5 = DRV_Reg32(DVFSRC_RECORD_MD_5); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_MD_6 = DRV_Reg32(DVFSRC_RECORD_MD_6); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_MD_7 = DRV_Reg32(DVFSRC_RECORD_MD_7); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_0_0 = DRV_Reg32(DVFSRC_RECORD_0_0); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_0_1 = DRV_Reg32(DVFSRC_RECORD_0_1); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_1_0 = DRV_Reg32(DVFSRC_RECORD_1_0); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_1_1 = DRV_Reg32(DVFSRC_RECORD_1_1); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_2_0 = DRV_Reg32(DVFSRC_RECORD_2_0); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_2_1 = DRV_Reg32(DVFSRC_RECORD_2_1); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_3_0 = DRV_Reg32(DVFSRC_RECORD_3_0); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_3_1 = DRV_Reg32(DVFSRC_RECORD_3_1); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_4_0 = DRV_Reg32(DVFSRC_RECORD_4_0); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_4_1 = DRV_Reg32(DVFSRC_RECORD_4_1); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_5_0 = DRV_Reg32(DVFSRC_RECORD_5_0); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_5_1 = DRV_Reg32(DVFSRC_RECORD_5_1); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_6_0 = DRV_Reg32(DVFSRC_RECORD_6_0); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_6_1 = DRV_Reg32(DVFSRC_RECORD_6_1); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_7_0 = DRV_Reg32(DVFSRC_RECORD_7_0); \
    ptp_dvfs_error_info.PTP_DVFSRC_RECORD_7_1 = DRV_Reg32(DVFSRC_RECORD_7_1); \
    ptp_dvfs_error_info.PTP_SPM_DFS_LEVEL = DRV_Reg32(SPM_DFS_LEVEL); \
    ptp_dvfs_error_info.PTP_SPM_DVS_LEVEL = DRV_Reg32(SPM_DVS_LEVEL); \
    ptp_dvfs_error_info.PTP_MD_DVFS_STATE = DRV_Reg32(MD_DVFS_STATE); \
    ptp_dvfs_error_info.PTP_MD_DVFS_ERR_FLAG = DRV_Reg32(MD_DVFS_ERR_FLAG); \
    ptp_dvfs_error_info.PTP_MD_DVFS_CUR_BUK_VAL = DRV_Reg32(MD_DVFS_CUR_BUK_VAL); \
    } while(0)
#define PTP_COMPARE(a, b) ((a) != (b) ? (0) : (1))
#define PTP_MAX(a, b) ((a) > (b) ? (a) : (b))
#define PTP_REGROUP(a, b, c, d) ((((a) & 0xFF) << 24) | (((b) & 0xFF) << 16) | (((c) & 0xFF) << 8) | ((d) & 0xFF))

// PTP Driver Monitor Mode Debug Macro
#if defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761)
    #define PTP_DUMP_MON_M(var1, var2, var3) PTP_DUMP_MON(var1, PTP_Core_String(PTP_ELT_VMODEM), 0, 672, 500, 336, var2, var3)
#elif defined(MT6739)
    #define PTP_DUMP_MON_M(var1, var2, var3) PTP_DUMP_MON(var1, PTP_Core_String(PTP_ELT_VMODEM), 0, 0, 450, 336, var2, var3)
#else
    #define PTP_DUMP_MON_M(var1, var2, var3) PTP_DUMP_MON(var1, PTP_Core_String(PTP_ELT_VMODEM), 0, 0, 0, 0, var2, var3)
#endif

typedef enum {
    #if defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761)
    PTP_CTRL_VMODEM = 0,
    PTP_CTRL_VMD1 = 1,
    #elif defined(MT6739)
    PTP_CTRL_VMD1 = 0,
    PTP_CTRL_VMODEM = 1,
    #else
    PTP_CTRL_VMODEM,
    PTP_CTRL_VMD1,
    #endif
}ptp_ctrl_id;

typedef enum {
    PTP_ELT_VMODEM = 0,
    PTP_ELT_VMD1 = 1,
    PTP_ELT_VSRAM_MD = 2,
}ptp_elt_id;

typedef enum {
    PTP_PHASE_INIT01 = 0,
    PTP_PHASE_INIT02 = 1,
    PTP_PHASE_MON = 2,
} ptp_phase;

typedef enum {
    PTP_INT_OTHER = 0,
    PTP_INT_HIGH_OFFSET = 1,
    PTP_INT_LOW_OFFSET = 2,
    PTP_INT_IMMD = 3,
} ptp_int;

typedef enum {
    PTP_STATE_INIT = 0,
    PTP_STATE_RUNTIME = 1,
    PTP_STATE_SLEEP = 2,
} ptp_state;

typedef enum {
    DVFS_STATE_UNLOCK = 0,
    DVFS_STATE_LOCK = 1,
} dvfs_state;

typedef enum {
    SPM_STATE_SIGNOFF = 0,
    SPM_STATE_INIT = 1,
    SPM_STATE_MON = 2,
} spm_state;

typedef struct
{
    // struct ptp_det_ops *ops;
    kal_uint32 status;     /* TODO: enable/disable */
    kal_uint32 PTPINITEN;
    kal_uint32 PTPMONEN;
    kal_uint32 MDES;
    kal_uint32 BDES;
    kal_uint32 DCMDET;
    kal_uint32 DCBDET;
    kal_uint32 AGEDELTA;
    kal_uint32 MTDES;

    /* constant */
    kal_uint32 DETWINDOW;
    kal_uint32 VMAX;
    kal_uint32 VMIN;
    kal_uint32 DTHI;
    kal_uint32 DTLO;
    kal_uint32 VBOOT;
    kal_uint32 DETMAX;
    kal_uint32 AGECONFIG;
    kal_uint32 AGEM;
    kal_uint32 DVTFIXED;
    kal_uint32 VCO;
    kal_uint32 DCCONFIG;

    /* Generated by PTP init01. Used in PTP init02 */
    kal_uint32 DCVOFFSETIN;
    kal_uint32 AGEVOFFSETIN;

    /* slope */
    kal_uint32 MTS;
    kal_uint32 BTS;

    /* dvfs */
    kal_uint32 num_freq_tbl;        /* could be got @ the same time with freq_tbl[] */
    kal_uint32 max_freq_khz;        /* maximum frequency used to calculate percentage */
    kal_uint32 freq_tbl[8];   /* percentage to maximum freq */
    kal_uint32 volt_tbl[8];
    kal_uint32 volt_tbl_signoff[8];
    kal_uint32 volt_tbl_init2[8];
    kal_uint32 volt_tbl_mon[8];
    kal_uint32 volt_design[4];
    kal_uint32 volt_bin;
    kal_uint32 mon_count;
    kal_uint32 MSSV2OCC_SW_margin;
} ptp_det;

typedef struct
{
    kal_uint32 max_ptp_sleep_part1;
    kal_uint32 max_ptp_sleep_part2;
    kal_uint32 max_ptp_update_SPM_table_DVFSLock2HighGear;
    kal_uint32 max_ptp_update_SPM_table_DVFSUnLockHighGear;
    kal_uint32 TimeStamp_spm_1, TimeStamp_spm_2, TimeStamp_spm_3, TimeStamp_spm_4;
    kal_uint32 TimeStamp_sleep_1, TimeStamp_sleep_2, TimeStamp_sleep_3;
#if defined(MT6765) || defined(MT6761)
    kal_uint32 ptp_bus_status, ptp_bus_status_reset;
    kal_uint32 cg_set_reg, cg_clr_reg, cg_sta_reg;
    kal_uint32 auxadc_cg_rw_duration, max_auxadc_cg_rw_duration;
#endif
} ptp_debug;

typedef struct
{
    kal_bool ptp_dvfs_timeout_flag;
    kal_uint32 PTP_DVFSRC_RECORD_COUNT, PTP_DVFSRC_LEVEL, PTP_DVFSRC_BASIC_CONTROL, PTP_DVFSRC_MD_SW_CONTROL, PTP_DVFSRC_LAST;
    kal_uint32 PTP_DVFSRC_RECORD_MD_0, PTP_DVFSRC_RECORD_MD_1, PTP_DVFSRC_RECORD_MD_2, PTP_DVFSRC_RECORD_MD_3, PTP_DVFSRC_RECORD_MD_4, PTP_DVFSRC_RECORD_MD_5, PTP_DVFSRC_RECORD_MD_6, PTP_DVFSRC_RECORD_MD_7;
    kal_uint32 PTP_DVFSRC_RECORD_0_0, PTP_DVFSRC_RECORD_0_1, PTP_DVFSRC_RECORD_1_0, PTP_DVFSRC_RECORD_1_1, PTP_DVFSRC_RECORD_2_0, PTP_DVFSRC_RECORD_2_1, PTP_DVFSRC_RECORD_3_0, PTP_DVFSRC_RECORD_3_1, PTP_DVFSRC_RECORD_4_0, PTP_DVFSRC_RECORD_4_1, PTP_DVFSRC_RECORD_5_0, PTP_DVFSRC_RECORD_5_1, PTP_DVFSRC_RECORD_6_0, PTP_DVFSRC_RECORD_6_1, PTP_DVFSRC_RECORD_7_0, PTP_DVFSRC_RECORD_7_1;
    kal_uint32 PTP_SPM_DFS_LEVEL, PTP_SPM_DVS_LEVEL;
    kal_uint32 PTP_MD_DVFS_STATE, PTP_MD_DVFS_ERR_FLAG, PTP_MD_DVFS_CUR_BUK_VAL;
} ptp_dvfs_error_flag;

/*Function Define*/
void ptp_status();
void ptp_off_reg();
void ptp_off_back2init();
void ptp_off_back2signoff();
void ptp_update_SPM_table(ptp_state, kal_int32);
void ptp_read_efuse();
void set_pmic_bit(kal_uint32, kal_uint32, kal_uint32, kal_uint32);
void set_reg_bit(kal_uint32, kal_uint32, kal_uint32, kal_uint32);
void increase_reg_bit(kal_uint32, kal_uint32, kal_uint32);
kal_int32 set_volt_tbl(kal_int32, kal_int32, kal_int32);
void ptp_lock_sleep();
void thermal_cal();
void get_thermal_slope_intercept();
void thermal_ctrl_init_auxadc();
kal_int32 raw_to_temperature_roomt(kal_uint32, kal_uint32);
kal_int32 temperature_to_raw_room(kal_uint32, kal_uint32);
void base_ops_core_select(ptp_ctrl_id, ptp_phase);
void base_ops_set_phase(ptp_ctrl_id, ptp_phase);
#if defined(MT6763)
void MT6763_MP1_check_temperature(ptp_int, kal_int32);
void MT6763_MP1_fill_table(ptp_phase);
void MT6763_MP1_corner_tightening_flow(kal_uint32, kal_uint32);
void MT6763_MP1_ptp_flow();
#elif defined(MT6739)
void MT6739_MP1_ptp_init_det_efuse(ptp_ctrl_id);
void MT6739_MP1_check_temperature(ptp_int, kal_int32);
void MT6739_MP1_fill_table(ptp_phase);
void MT6739_MP1_corner_tightening_flow(kal_uint32, kal_uint32);
void MT6739_MP1_ptp_flow();
#elif defined(MT6771)
void MT6771_MP1_check_temperature(ptp_int, kal_int32);
void MT6771_MP1_fill_table(ptp_phase);
void MT6771_MP1_corner_tightening_flow(kal_uint32, kal_uint32);
void MT6771_MP1_ptp_flow(void);
#elif defined(MT6765)
void ptp_check_bus_status();
void MT6765_MP1_check_temperature(ptp_int, kal_int32);
void MT6765_MP1_fill_table(ptp_phase);
void MT6765_MP1_corner_tightening_flow(kal_uint32, kal_uint32);
void MT6765_MP1_ptp_flow(void);
#elif defined(MT6761)
void ptp_check_bus_status();
void MT6761_MP1_check_temperature(ptp_int, kal_int32);
void MT6761_MP1_fill_table(ptp_phase);
void MT6761_MP1_corner_tightening_flow(kal_uint32, kal_uint32);
void MT6761_MP1_ptp_flow(void);
#endif
void ptp_init_flow(ptp_ctrl_id, ptp_phase);
void ptp_init01_Interrupt(ptp_ctrl_id);
void ptp_init02_Interrupt(ptp_ctrl_id);
kal_int32 ptp_monitor_Interrupt(ptp_ctrl_id);
void ptp_Interrupt();
void ptp_sleep();
void ptp_wake();
#if defined(MD_PTP_THERM_CTRL_UMOLY_DVFS_IT_TEST)
void ptp_dvfs_it_timer_handler();
#endif
#if defined(MD_PTP_THERM_CTRL_UMOLY_DVT)
void ptp_dvt_reg_log(kal_uint32);
void ptp_dvt_timer_handler();
void ptp_dvt_timer_init();
void ptp_dvt_flow();
#endif
void ptp_reg_isr();
kal_bool ptp_check_efuse();
void ptp_init();

/*Global PTP data structure*/
typedef struct
{
    kal_uint32   PTP_INIT_VMODEM_VOLT[4];
    kal_uint32   PTP_MONITOR_VMODEM_VOLT[4];
} ptp_info;

kal_bool ptp_Dump_API(kal_uint32 data_len, kal_uint8 *data_str);
kal_bool ptp_Ctrl_API(kal_uint32 data_len, kal_uint8 *data_str);
kal_bool ptp_Freq_API(kal_uint32 data_len, kal_uint8 *data_str);
kal_bool ptp_PMIC_API(kal_uint32 data_len, kal_uint8 *data_str);

#endif
