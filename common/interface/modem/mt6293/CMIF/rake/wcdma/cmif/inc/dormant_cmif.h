#ifndef __DORMANT_CMIF_H__
#define __DORMANT_CMIF_H__

#include "reg_access.h"
#include "base_addr_cmif.h"

#define CMIF_DORMANT_REG_BASE                                         (CMIF_RAKE_DORMANT_OFFSET)
#define CMIF_RAKE_SLEEP_ACK                                           (CMIF_DORMANT_REG_BASE + 0x0000)
#define CMIF_RAKE_PM_DM_STATE                                         (CMIF_DORMANT_REG_BASE + 0x0004)
#define CMIF_RAKE_ALLOW_SLEEP_EXT                                     (CMIF_DORMANT_REG_BASE + 0x0008)
#define CMIF_RAKE_ALLOW_SLEEP_DMA                                     (CMIF_DORMANT_REG_BASE + 0x000C)
#define CMIF_RAKE_ALLOW_SLEEP_FW                                      (CMIF_DORMANT_REG_BASE + 0x0010)

#define M_CMIF_RAKE_SLEEP_ACK_RD()                                    REG_READ(CMIF_RAKE_SLEEP_ACK)
#define M_CMIF_RAKE_PM_DM_STATE_RD()                                  REG_READ(CMIF_RAKE_PM_DM_STATE)
#define M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD()                              REG_READ(CMIF_RAKE_ALLOW_SLEEP_EXT)
#define M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD()                              REG_READ(CMIF_RAKE_ALLOW_SLEEP_DMA)
#define M_CMIF_RAKE_ALLOW_SLEEP_FW_RD()                               REG_READ(CMIF_RAKE_ALLOW_SLEEP_FW)

#define M_CMIF_RAKE_SLEEP_ACK_WR(reg)                                 REG_WRITE(CMIF_RAKE_SLEEP_ACK, reg)
#define M_CMIF_RAKE_PM_DM_STATE_WR(reg)                               REG_WRITE(CMIF_RAKE_PM_DM_STATE, reg)
#define M_CMIF_RAKE_ALLOW_SLEEP_EXT_WR(reg)                           REG_WRITE(CMIF_RAKE_ALLOW_SLEEP_EXT, reg)
#define M_CMIF_RAKE_ALLOW_SLEEP_DMA_WR(reg)                           REG_WRITE(CMIF_RAKE_ALLOW_SLEEP_DMA, reg)
#define M_CMIF_RAKE_ALLOW_SLEEP_FW_WR(reg)                            REG_WRITE(CMIF_RAKE_ALLOW_SLEEP_FW, reg)

#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_LSB                       (16)
#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_WIDTH                     (8)
#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_MASK                      ((UINT32) (((1<<CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_WIDTH)-1) << CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_LSB) )
#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_FLD_WR(reg, val)              (reg |= (val) << CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_LSB)
#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_FLD_RD()                      ((M_CMIF_RAKE_SLEEP_ACK_RD() & CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_MASK) >> CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_LSB)

#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_LSB                       (0)
#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_WIDTH                     (8)
#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_MASK                      ((UINT32) (((1<<CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_WIDTH)-1) << CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_LSB) )
#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_FLD_WR(reg, val)              (reg |= (val) << CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_LSB)
#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_FLD_RD()                      ((M_CMIF_RAKE_SLEEP_ACK_RD() & CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_MASK) >> CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_LSB)

#define CMIF_RAKE_PM_DM_STATE_STATE_BIT_LSB                           (0)
#define CMIF_RAKE_PM_DM_STATE_STATE_BIT_WIDTH                         (2)
#define CMIF_RAKE_PM_DM_STATE_STATE_BIT_MASK                          ((UINT32) (((1<<CMIF_RAKE_PM_DM_STATE_STATE_BIT_WIDTH)-1) << CMIF_RAKE_PM_DM_STATE_STATE_BIT_LSB) )
#define CMIF_RAKE_PM_DM_STATE_STATE_FLD_WR(reg, val)                  (reg |= (val) << CMIF_RAKE_PM_DM_STATE_STATE_BIT_LSB)
#define CMIF_RAKE_PM_DM_STATE_STATE_FLD_RD()                          ((M_CMIF_RAKE_PM_DM_STATE_RD() & CMIF_RAKE_PM_DM_STATE_STATE_BIT_MASK) >> CMIF_RAKE_PM_DM_STATE_STATE_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_BIT_LSB               (18)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_BIT_WIDTH             (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_BIT_MASK              ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_FLD_WR(reg, val)      (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_FLD_RD()              ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PCCPCH_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_BIT_LSB                (17)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH2_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_BIT_LSB                (16)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_BIT_LSB                (15)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_BIT_LSB                 (14)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_BIT_LSB                 (13)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_AGCH_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_BIT_LSB          (12)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_BIT_WIDTH        (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_BIT_MASK         ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_FLD_WR(reg, val) (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_FLD_RD()         ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_TARGET_SCCH_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_BIT_LSB                (11)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C2_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_BIT_LSB                (10)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C2_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_BIT_LSB                (9)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C2_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_BIT_LSB                (8)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C2_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_BIT_LSB                (7)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_BIT_LSB                (6)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_BIT_LSB                (5)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_BIT_LSB                (4)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_BIT_LSB                (3)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH3_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_BIT_LSB                (2)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH2_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_BIT_LSB                (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH1_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_BIT_LSB                (0)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_SCCH0_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_BIT_LSB               (21)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_BIT_WIDTH             (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_BIT_MASK              ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_FLD_WR(reg, val)      (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_FLD_RD()              ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PCCPCH_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_BIT_LSB                 (20)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_BIT_LSB                 (19)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_AGCH_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_BIT_LSB          (18)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_BIT_WIDTH        (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_BIT_MASK         ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_FLD_WR(reg, val) (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_FLD_RD()         ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_TARGET_SCCH_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_BIT_LSB                (17)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C2_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_BIT_LSB                (16)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C2_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_BIT_LSB                (15)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C2_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_BIT_LSB                (14)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C2_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_BIT_LSB                (13)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_BIT_LSB                (12)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_BIT_LSB                (11)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_BIT_LSB                (10)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_BIT_LSB                (9)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH3_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_BIT_LSB                (8)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH2_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_BIT_LSB                (7)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH1_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_BIT_LSB                (6)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_BIT_WIDTH              (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_BIT_MASK               ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_FLD_WR(reg, val)       (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_FLD_RD()               ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_SCCH0_C0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_BIT_LSB                 (5)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_BIT_LSB                 (4)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH2_0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_BIT_LSB                 (3)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_BIT_LSB                 (2)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH1_0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_BIT_LSB                 (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_BIT_LSB                 (0)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_BIT_WIDTH               (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_BIT_MASK                ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_FLD_WR(reg, val)        (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_FLD_RD()                ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_DPCH0_0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_BIT_LSB                         (4)
#define CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_BIT_WIDTH                       (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_BIT_MASK                        ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_FLD_WR(reg, val)                (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_FLD_RD()                        ((M_CMIF_RAKE_ALLOW_SLEEP_FW_RD() & CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_FW_TFCI_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_FW_CQI_BIT_LSB                          (3)
#define CMIF_RAKE_ALLOW_SLEEP_FW_CQI_BIT_WIDTH                        (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_CQI_BIT_MASK                         ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_FW_CQI_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_FW_CQI_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_FW_CQI_FLD_WR(reg, val)                 (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_FW_CQI_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_FW_CQI_FLD_RD()                         ((M_CMIF_RAKE_ALLOW_SLEEP_FW_RD() & CMIF_RAKE_ALLOW_SLEEP_FW_CQI_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_FW_CQI_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_BIT_LSB                         (2)
#define CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_BIT_WIDTH                       (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_BIT_MASK                        ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_FLD_WR(reg, val)                (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_FLD_RD()                        ((M_CMIF_RAKE_ALLOW_SLEEP_FW_RD() & CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_FW_HIRG_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_BIT_LSB                         (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_BIT_WIDTH                       (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_BIT_MASK                        ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_FLD_WR(reg, val)                (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_FLD_RD()                        ((M_CMIF_RAKE_ALLOW_SLEEP_FW_RD() & CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_FW_DLPC_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_BIT_LSB                         (0)
#define CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_BIT_WIDTH                       (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_BIT_MASK                        ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_FLD_WR(reg, val)                (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_FLD_RD()                        ((M_CMIF_RAKE_ALLOW_SLEEP_FW_RD() & CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_FW_ULPC_BIT_LSB)

#endif /* __DORMANT_CMIF_H__ */