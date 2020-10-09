#ifndef __GEN93_PROJ_CONFIG_H__
#define __GEN93_PROJ_CONFIG_H__

#if defined(MT6763) || defined(MT6293)
#define __CMIF_DRV_SW_WORKAROUND__
#undef __SUPPORT_RAKE_TBUF_MON_PC__
#elif defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761)
#undef __CMIF_DRV_SW_WORKAROUND__
#define __SUPPORT_RAKE_TBUF_MON_PC__
#endif

#endif // __GEN93_PROJ_CONFIG_H__

