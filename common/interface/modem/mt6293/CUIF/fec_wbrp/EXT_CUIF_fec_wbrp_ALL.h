#ifndef INCLUDE_DSP_HEADER_ENABLE_FEC_WBRP
    #error "Please include CUIF_fec_wbrp_ALL.h via dsp_header_define_fec_wbrp.h"
#endif

#ifndef    __EXT_CUIF_FEC_WBRP_ALL_H__
#define    __EXT_CUIF_FEC_WBRP_ALL_H__

// to avoid including this header file directly
#if defined(INCLUDE_DSP_HEADER_ENABLE_FEC_WBRP)

#include "stddef.h"
#if defined(__MIPS_IA__)
#include "kal_general_types.h"
#elif defined(__CORE_USIP1__)
#include "kal_public.h"
#endif

// include your own structure header file
#include "../CUIF_SS_region.h"
#include "fec/inc/EXT_CUIF_FEC_region.h"
#include "dsp_header_define_cxif_ulsp.h"

// fec wbrp external CUIF composite data structure on EMI
typedef volatile struct {
    // dummy data - 4 bytes
    EXT_CUIF_DUMMY dummy_data;
    
    // SS report use
    kal_uint32 usip_vic_enable_report;
    
    EXT_CUIF_FEC_region ext_fec_region;
    ulsp_info_t ulsp_data_fec;

} FEC_WBRP_EXT_CUIF_ALL_REGS;

// CUIF BASE on L1 & DSP
#if !defined(__LTE_L1SIM__) && defined(__CORE_USIP1__)
    extern volatile FEC_WBRP_EXT_CUIF_ALL_REGS ext_cuif_fec_wbrp;
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(&ext_cuif_fec_wbrp))
#else
#if defined(MT6763) || defined(MT6293)
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0xF798000))
#elif defined(MT6739)

#if defined(__DSP_DEFAULT_ASIC_WO_LTEPOS__)
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0x7C28000))
#else
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0x7DD8000))
#endif

#elif defined(MT6771) || defined(MT6765) || defined(MT6761)
    /* 0x1_8000 from start of DSP EXT_CUIF */
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0x7F98000))
#else
    #error "Unsupported project, need to do related porting!!!!"
#endif
#endif // !defined(__LTE_L1SIM__) && defined(__CORE_USIP1__)

// MACRO for accessing each MODULE and RAT
#define  DUMMY_MACRO                   ((EXT_CUIF_DUMMY *)           (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, dummy_data)))

// SS
#define USIP_VIC_ENABLE_REPORT_FEC_PTR ((volatile kal_uint32*) (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, usip_vic_enable_report)))

#define  EXT_FEC_WBRP_FEC_L_TX_INFO    ((EXT_CUIF_FEC_l_tx_t *)      (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, ext_fec_region.ext_cuif_fec_l_tx)))
// FEC
#define  EXT_CUIF_FEC_CTX_INFO         ((EXT_CUIF_FEC_CTX_INFO_t*)   (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, ext_fec_region.ext_cuif_fec_ctx)))
#define  EXT_CUIF_FEC_CRX_INFO         ((EXT_CUIF_FEC_CRX_INFO_t*)   (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, ext_fec_region.ext_cuif_fec_crx)))
#define  ULSP_INFO_ADDR_FEC            ((ulsp_info_t *)              (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, ulsp_data_fec)))

// WBRP

#endif //INCLUDE_DSP_HEADER_ENABLE_FEC_WBRP
#endif
