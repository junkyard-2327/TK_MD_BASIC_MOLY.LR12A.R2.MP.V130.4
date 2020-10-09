#ifndef __PTP_REG_BASE_H__
#define __PTP_REG_BASE_H__

#if !defined(BASE_MADDR_SPM_VMODEM)
    #define BASE_SLEEP_REG_MD_SPM_DVFS 0xC000F000
#else
    #define BASE_SLEEP_REG_MD_SPM_DVFS BASE_MADDR_SPM_VMODEM
#endif
#define SLEEP_REG_MD_SPM_DVFS_CMD16 (BASE_SLEEP_REG_MD_SPM_DVFS + 0x0)
#define SLEEP_REG_MD_SPM_DVFS_CMD17 (BASE_SLEEP_REG_MD_SPM_DVFS + 0x4)
#define SLEEP_REG_MD_SPM_DVFS_CMD18 (BASE_SLEEP_REG_MD_SPM_DVFS + 0x8)
#define SLEEP_REG_MD_SPM_DVFS_CMD19 (BASE_SLEEP_REG_MD_SPM_DVFS + 0xC)
#define SLEEP_REG_MD_SPM_DVFS_CMD22 (BASE_SLEEP_REG_MD_SPM_DVFS + 0x18)
#define SLEEP_REG_MD_SPM_DVFS_CMD23 (BASE_SLEEP_REG_MD_SPM_DVFS + 0x1C)

#if !defined(BASE_MADDR_SPM_PCM)
    #define BASE_SLEEP_REG_MD_SPM_PCM 0xC0006000
#else
    #define BASE_SLEEP_REG_MD_SPM_PCM BASE_MADDR_SPM_PCM
#endif
#define SLEEP_REG_MD_SPM_POWERON_CONFIG_EN (BASE_SLEEP_REG_MD_SPM_PCM + 0x0)

#define BASE_MADDR_INFRACFG_AO 0xC0001000
#define MD_MODULE_SW_CG_1_SET (BASE_MADDR_INFRACFG_AO + 0x88)
#define MD_MODULE_SW_CG_1_CLR (BASE_MADDR_INFRACFG_AO + 0x8C)
#define MD_MODULE_SW_CG_1_STA (BASE_MADDR_INFRACFG_AO + 0x94)

#if !defined(BASE_MADDR_SPM_VMODEM)
    #define BASE_MADDR_APMIXEDSYS 0xC000C000
#endif
#define AP_APMIXEDSYS_TS_CON0 (BASE_MADDR_APMIXEDSYS + 0x600)
#define AP_APMIXEDSYS_TS_CON1 (BASE_MADDR_APMIXEDSYS + 0x604)
#define AP_APMIXEDSYS_TS_CON2 (BASE_MADDR_APMIXEDSYS + 0x608)

#define BASE_MADDR_AP_AUXADC 0xC1001000
#define AP_AUXADC_CON1 (BASE_MADDR_AP_AUXADC + 0x4)
#define AP_AUXADC_CON1_SET (BASE_MADDR_AP_AUXADC + 0x8)
#define AP_AUXADC_CON1_CLR (BASE_MADDR_AP_AUXADC + 0xC)
#define AP_AUXADC_DAT10 (BASE_MADDR_AP_AUXADC + 0x3C)

#if defined(MT6763)
#define EFUSE_BASE  0xC1F10000
#define PTP1_OD0    (EFUSE_BASE + 0x580)
#define FAB_INFO2   (EFUSE_BASE + 0x7A8)

#define TS_Efuse_Address0 (EFUSE_BASE + 0x180)
#define TS_Efuse_Address1 (EFUSE_BASE + 0x184)
#define TS_Efuse_Address2 (EFUSE_BASE + 0x188)
#elif defined(MT6739)
#define EFUSE_BASE  0xC1C00000
#define PTP1_OD4    (EFUSE_BASE + 0x610)
#define PTP1_OD5    (EFUSE_BASE + 0x614)
#define PTP1_OD6    (EFUSE_BASE + 0x618)

#define TS_Efuse_Address0 (EFUSE_BASE + 0x188)
#define TS_Efuse_Address1 (EFUSE_BASE + 0x18C)
#define TS_Efuse_Address2 (EFUSE_BASE + 0x190)
#elif defined(MT6771)
#define EFUSE_BASE                  0xC1F10000
#define EFUSE_PTP1_OD0              (EFUSE_BASE + 0x580)
#define EFUSE_PTP1_OD15             (EFUSE_BASE + 0x5BC)

#define TS_Efuse_Address0           (EFUSE_BASE + 0x180)
#define TS_Efuse_Address1           (EFUSE_BASE + 0x184)
#define TS_Efuse_Address2           (EFUSE_BASE + 0x188)
#elif defined(MT6765)
#define EFUSE_BASE                  0xC1C50000
#define EFUSE_PTP1_OD0              (EFUSE_BASE + 0x580)
#define EFUSE_PTP1_OD10             (EFUSE_BASE + 0x5A8)

#define TS_Efuse_Address0           (EFUSE_BASE + 0x180)
#define TS_Efuse_Address1           (EFUSE_BASE + 0x184)
#define TS_Efuse_Address2           (EFUSE_BASE + 0x188)
#elif defined(MT6761)
#define EFUSE_BASE                  0xC1C50000
#define EFUSE_PTP1_OD0              (EFUSE_BASE + 0x580)
#define EFUSE_PTP1_OD6              (EFUSE_BASE + 0x598)

#define TS_Efuse_Address0           (EFUSE_BASE + 0x180)
#define TS_Efuse_Address1           (EFUSE_BASE + 0x184)
#define TS_Efuse_Address2           (EFUSE_BASE + 0x188)
#else
#define EFUSE_BASE 0xC1F10000

#define TS_Efuse_Address0 (EFUSE_BASE + 0x180)
#define TS_Efuse_Address1 (EFUSE_BASE + 0x184)
#define TS_Efuse_Address2 (EFUSE_BASE + 0x188)
#endif

#if !defined(BASE_ADDR_PTP_THERM_CTRL)
    #define PTP_BASEADDR 0xA00C0000
    #define THERMAL_BASE 0xA00C0000
#else
    #define PTP_BASEADDR BASE_ADDR_PTP_THERM_CTRL
    #define THERMAL_BASE BASE_ADDR_PTP_THERM_CTRL
#endif
/* PTP Register Definition */
#define PTP_REVISIONID      (PTP_BASEADDR + 0x0FC)
#define PTP_DESCHAR         (PTP_BASEADDR + 0xC00)
#define PTP_TEMPCHAR        (PTP_BASEADDR + 0xC04)
#define PTP_DETCHAR         (PTP_BASEADDR + 0xC08)
#define PTP_AGECHAR         (PTP_BASEADDR + 0xC0C)
#define PTP_DCCONFIG        (PTP_BASEADDR + 0xC10)
#define PTP_AGECONFIG       (PTP_BASEADDR + 0xC14)
#define PTP_FREQPCT30       (PTP_BASEADDR + 0xC18)
#define PTP_FREQPCT74       (PTP_BASEADDR + 0xC1C)
#define PTP_LIMITVALS       (PTP_BASEADDR + 0xC20)
#define PTP_VBOOT           (PTP_BASEADDR + 0xC24)
#define PTP_DETWINDOW       (PTP_BASEADDR + 0xC28)
#define PTP_PTPCONFIG       (PTP_BASEADDR + 0xC2C)
#define PTP_TSCALCS         (PTP_BASEADDR + 0xC30)
#define PTP_RUNCONFIG       (PTP_BASEADDR + 0xC34)
#define PTP_PTPEN           (PTP_BASEADDR + 0xC38)
#define PTP_INIT2VALS       (PTP_BASEADDR + 0xC3C)
#define PTP_DCVALUES        (PTP_BASEADDR + 0xC40)
#define PTP_AGEVALUES       (PTP_BASEADDR + 0xC44)
#define PTP_VOP30           (PTP_BASEADDR + 0xC48)
#define PTP_VOP74           (PTP_BASEADDR + 0xC4C)
#define PTP_TEMP            (PTP_BASEADDR + 0xC50)
#define PTP_PTPINTSTS       (PTP_BASEADDR + 0xC54)
#define PTP_PTPINTSTSRAW    (PTP_BASEADDR + 0xC58)
#define PTP_PTPINTEN        (PTP_BASEADDR + 0xC5C)
#define PTP_PTPCHKINT       (PTP_BASEADDR + 0xC60)
#define PTP_PTPCHKSHIFT     (PTP_BASEADDR + 0xC64)
#define PTP_PTPSTATUS       (PTP_BASEADDR + 0xC68)
#define PTP_VDESIGN30       (PTP_BASEADDR + 0xC6C)
#define PTP_VDESIGN74       (PTP_BASEADDR + 0xC70)
#define PTP_DVT30           (PTP_BASEADDR + 0xC74)
#define PTP_DVT74           (PTP_BASEADDR + 0xC78)
#define PTP_AGECOUNT	    (PTP_BASEADDR + 0xC7C)
#define PTP_SMSTATE0        (PTP_BASEADDR + 0xC80)
#define PTP_SMSTATE1        (PTP_BASEADDR + 0xC84)
#define PTP_PTPCTL0         (PTP_BASEADDR + 0xC88)

#define PTP_PTPCORESEL      (PTP_BASEADDR + 0xF00)
    #define PTPODCORE3EN        19:19
    #define PTPODCORE2EN        18:18
    #define PTPODCORE1EN        17:17
    #define PTPODCORE0EN        16:16
    #define APBSEL              3:0
#define PTP_THERMINTST      (PTP_BASEADDR + 0xF04)
#define PTP_PTPODINTST      (PTP_BASEADDR + 0xF08)
    #define PTPODINT0		0:0
    #define PTPODINT1		1:1
    #define PTPODINT2		2:2
    #define PTPODINT3		3:3
#define PTP_THSTAGE0ST      (PTP_BASEADDR + 0xF0C)
#define PTP_THSTAGE1ST      (PTP_BASEADDR + 0xF10)
#define PTP_THSTAGE2ST      (PTP_BASEADDR + 0xF14)
#define PTP_THAHBST0        (PTP_BASEADDR + 0xF18)
#define PTP_THAHBST1        (PTP_BASEADDR + 0xF1C)
#define PTP_PTPSPARE0       (PTP_BASEADDR + 0xF20)
#define PTP_PTPSPARE1       (PTP_BASEADDR + 0xF24)
#define PTP_PTPSPARE2       (PTP_BASEADDR + 0xF28)
#define PTP_PTPSPARE3       (PTP_BASEADDR + 0xF2C)
#define PTP_THSLPEVEB       (PTP_BASEADDR + 0xF30)

/* Thermal Register Definition */
#define PTP_TEMPMONCTL0         (THERMAL_BASE + 0x000)
#define PTP_TEMPMONCTL1         (THERMAL_BASE + 0x004)
#define PTP_TEMPMONCTL2         (THERMAL_BASE + 0x008)
#define PTP_TEMPMONINT          (THERMAL_BASE + 0x00C)
#define PTP_TEMPMONINTSTS       (THERMAL_BASE + 0x010)
#define PTP_TEMPMONIDET0        (THERMAL_BASE + 0x014)
#define PTP_TEMPMONIDET1        (THERMAL_BASE + 0x018)
#define PTP_TEMPMONIDET2        (THERMAL_BASE + 0x01C)
#define PTP_TEMPH2NTHRE         (THERMAL_BASE + 0x024)
#define PTP_TEMPHTHRE           (THERMAL_BASE + 0x028)
#define PTP_TEMPCTHRE           (THERMAL_BASE + 0x02C)
#define PTP_TEMPOFFSETH         (THERMAL_BASE + 0x030)
#define PTP_TEMPOFFSETL         (THERMAL_BASE + 0x034)
#define PTP_TEMPMSRCTL0         (THERMAL_BASE + 0x038)
#define PTP_TEMPMSRCTL1         (THERMAL_BASE + 0x03C)
#define PTP_TEMPAHBPOLL         (THERMAL_BASE + 0x040)
#define PTP_TEMPAHBTO           (THERMAL_BASE + 0x044)
#define PTP_TEMPADCPNP0         (THERMAL_BASE + 0x048)
#define PTP_TEMPADCPNP1         (THERMAL_BASE + 0x04C)
#define PTP_TEMPADCPNP2         (THERMAL_BASE + 0x050)
#define PTP_TEMPADCMUX          (THERMAL_BASE + 0x054)
#define PTP_TEMPADCEXT          (THERMAL_BASE + 0x058)
#define PTP_TEMPADCEXT1         (THERMAL_BASE + 0x05C)
#define PTP_TEMPADCEN           (THERMAL_BASE + 0x060)
#define PTP_TEMPPNPMUXADDR      (THERMAL_BASE + 0x064)
#define PTP_TEMPADCMUXADDR      (THERMAL_BASE + 0x068)
#define PTP_TEMPADCEXTADDR      (THERMAL_BASE + 0x06C)
#define PTP_TEMPADCEXT1ADDR     (THERMAL_BASE + 0x070)
#define PTP_TEMPADCENADDR       (THERMAL_BASE + 0x074)
#define PTP_TEMPADCVALIDADDR    (THERMAL_BASE + 0x078)
#define PTP_TEMPADCVOLTADDR     (THERMAL_BASE + 0x07C)
#define PTP_TEMPRDCTRL          (THERMAL_BASE + 0x080)
#define PTP_TEMPADCVALIDMASK    (THERMAL_BASE + 0x084)
#define PTP_TEMPADCVOLTAGESHIFT (THERMAL_BASE + 0x088)
#define PTP_TEMPADCWRITECTRL    (THERMAL_BASE + 0x08C)
#define PTP_TEMPMSR0            (THERMAL_BASE + 0x090)
#define PTP_TEMPMSR1            (THERMAL_BASE + 0x094)
#define PTP_TEMPMSR2            (THERMAL_BASE + 0x098)
#define PTP_TEMPADCHADDR        (THERMAL_BASE + 0x09C)
#define PTP_TEMPIMMD0           (THERMAL_BASE + 0x0A0)
#define PTP_TEMPIMMD1           (THERMAL_BASE + 0x0A4)
#define PTP_TEMPIMMD2           (THERMAL_BASE + 0x0A8)
#define PTP_TEMPMONIDET3        (THERMAL_BASE + 0x0B0)
#define PTP_TEMPADCPNP3         (THERMAL_BASE + 0x0B4)
#define PTP_TEMPMSR3            (THERMAL_BASE + 0x0B8)
#define PTP_TEMPIMMD3           (THERMAL_BASE + 0x0BC)
#define PTP_TEMPPROTCTL         (THERMAL_BASE + 0x0C0)
#define PTP_TEMPPROTTA          (THERMAL_BASE + 0x0C4)
#define PTP_TEMPPROTTB          (THERMAL_BASE + 0x0C8)
#define PTP_TEMPPROTTC          (THERMAL_BASE + 0x0CC)
#define PTP_TEMPSPARE0          (THERMAL_BASE + 0x0F0)
#define PTP_TEMPSPARE1          (THERMAL_BASE + 0x0F4)
#define PTP_TEMPSPARE2          (THERMAL_BASE + 0x0F8)

#endif
