#ifndef __RAKE_LORX_CTRL_CMIF_H__
#define __RAKE_LORX_CTRL_CMIF_H__

#include "reg_access.h"
#include "base_addr_cmif.h"

#define CMIF_RAKE_LORX_CTRL_REG_BASE                                  (CMIF_RAKE_LO_RX)
#define CMIF_LO_RX_ON_OFF                                             (CMIF_RAKE_LORX_CTRL_REG_BASE + 0x0000)
#define CMIF_SW_HW_MODE                                               (CMIF_RAKE_LORX_CTRL_REG_BASE + 0x0004)
#define CMIF_HW_MODE_LO_RX_LEAVE                                      (CMIF_RAKE_LORX_CTRL_REG_BASE + 0x0008)
#define CMIF_TPC_TOGGLE_SW_MODE                                       (CMIF_RAKE_LORX_CTRL_REG_BASE + 0x000C)
#define CMIF_R2B_DMA_TFCI_INT_BIT_MAP                                 (CMIF_RAKE_LORX_CTRL_REG_BASE + 0x0010)

#define M_CMIF_LO_RX_ON_OFF_RD()                                      REG_READ(CMIF_LO_RX_ON_OFF)
#define M_CMIF_SW_HW_MODE_RD()                                        REG_READ(CMIF_SW_HW_MODE)
#define M_CMIF_HW_MODE_LO_RX_LEAVE_RD()                               REG_READ(CMIF_HW_MODE_LO_RX_LEAVE)
#define M_CMIF_TPC_TOGGLE_SW_MODE_RD()                                REG_READ(CMIF_TPC_TOGGLE_SW_MODE)
#define M_CMIF_R2B_DMA_TFCI_INT_BIT_MAP_RD()                          REG_READ(CMIF_R2B_DMA_TFCI_INT_BIT_MAP)

#define M_CMIF_LO_RX_ON_OFF_WR(reg)                                   REG_WRITE(CMIF_LO_RX_ON_OFF, reg)
#define M_CMIF_SW_HW_MODE_WR(reg)                                     REG_WRITE(CMIF_SW_HW_MODE, reg)
#define M_CMIF_HW_MODE_LO_RX_LEAVE_WR(reg)                            REG_WRITE(CMIF_HW_MODE_LO_RX_LEAVE, reg)
#define M_CMIF_TPC_TOGGLE_SW_MODE_WR(reg)                             REG_WRITE(CMIF_TPC_TOGGLE_SW_MODE, reg)
#define M_CMIF_R2B_DMA_TFCI_INT_BIT_MAP_WR(reg)                       REG_WRITE(CMIF_R2B_DMA_TFCI_INT_BIT_MAP, reg)

#define CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_BIT_LSB                       (0)
#define CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_BIT_WIDTH                     (1)
#define CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_BIT_MASK                      ((UINT32) (((1<<CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_BIT_WIDTH)-1) << CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_BIT_LSB) )
#define CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_FLD_WR(reg, val)              (reg |= (val) << CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_BIT_LSB)
#define CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_FLD_RD()                      ((M_CMIF_LO_RX_ON_OFF_RD() & CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_BIT_MASK) >> CMIF_LO_RX_ON_OFF_LO_RX_FEATURE_BIT_LSB)

#define CMIF_SW_HW_MODE_LO_RX_MODE_BIT_LSB                            (0)
#define CMIF_SW_HW_MODE_LO_RX_MODE_BIT_WIDTH                          (1)
#define CMIF_SW_HW_MODE_LO_RX_MODE_BIT_MASK                           ((UINT32) (((1<<CMIF_SW_HW_MODE_LO_RX_MODE_BIT_WIDTH)-1) << CMIF_SW_HW_MODE_LO_RX_MODE_BIT_LSB) )
#define CMIF_SW_HW_MODE_LO_RX_MODE_FLD_WR(reg, val)                   (reg |= (val) << CMIF_SW_HW_MODE_LO_RX_MODE_BIT_LSB)
#define CMIF_SW_HW_MODE_LO_RX_MODE_FLD_RD()                           ((M_CMIF_SW_HW_MODE_RD() & CMIF_SW_HW_MODE_LO_RX_MODE_BIT_MASK) >> CMIF_SW_HW_MODE_LO_RX_MODE_BIT_LSB)

#define CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_BIT_LSB          (0)
#define CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_BIT_WIDTH        (1)
#define CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_BIT_MASK         ((UINT32) (((1<<CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_BIT_WIDTH)-1) << CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_BIT_LSB) )
#define CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_FLD_WR(reg, val) (reg |= (val) << CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_BIT_LSB)
#define CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_FLD_RD()         ((M_CMIF_HW_MODE_LO_RX_LEAVE_RD() & CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_BIT_MASK) >> CMIF_HW_MODE_LO_RX_LEAVE_LEAVE_LO_RX_HW_MODE_BIT_LSB)

#define CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_BIT_LSB                    (0)
#define CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_BIT_WIDTH                  (1)
#define CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_BIT_MASK                   ((UINT32) (((1<<CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_BIT_WIDTH)-1) << CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_BIT_LSB) )
#define CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_FLD_WR(reg, val)           (reg |= (val) << CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_BIT_LSB)
#define CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_FLD_RD()                   ((M_CMIF_TPC_TOGGLE_SW_MODE_RD() & CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_BIT_MASK) >> CMIF_TPC_TOGGLE_SW_MODE_TOGGLE_TPC_BIT_LSB)

#define CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_BIT_LSB (0)
#define CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_BIT_WIDTH (15)
#define CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_BIT_MASK ((UINT32) (((1<<CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_BIT_WIDTH)-1) << CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_BIT_LSB) )
#define CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_FLD_WR(reg, val) (reg |= (val) << CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_BIT_LSB)
#define CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_FLD_RD() ((M_CMIF_R2B_DMA_TFCI_INT_BIT_MAP_RD() & CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_BIT_MASK) >> CMIF_R2B_DMA_TFCI_INT_BIT_MAP_R2B_DMA_TFCI_INT_BIT_MAP_BIT_LSB)

#endif /* __RAKE_LORX_CTRL_CMIF_H__ */