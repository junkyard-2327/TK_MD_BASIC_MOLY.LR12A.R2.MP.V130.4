/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   hif_lhif.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   lhif driver public API
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 07 28 2017 hsin-hao.huang
 * [MOLY00267433] [BIANCO][MT6763][RDIT][L+L][MTBF][PHONE][Overnight][HQ][Lab][Ericsson][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_hisr.c line:430
 * Log mask interrupt issue
 *
 * 07 20 2017 hsin-hao.huang
 * [MOLY00265077] [BIANCO][MT6763][RDIT][L+L][FT][TDD][Functional] <BJ><static><SIM1:CMCC><SIM2:CMCC>Assert fail: dpcopro_hisr.c 722
 * .Dont mask log interrupt when L2 restore
 *
 * 05 11 2017 hsin-hao.huang
 * [MOLY00248647] [BIANCO][LHIF] LHIF driver re-organization from LHIF core
 * LHIF dirver re-organization from LHIF core
 *
 * 04 21 2017 hsin-hao.huang
 * [MOLY00243828] [BIANCO][MT6763][RDIT][PHONE][Overnight][HQ][MTBF][Lab][Ericsson][ASSERT] file:mcu/pcore/modem/el2/el2h/erlcdl/src/erlcdl_reasm.c line:560
 * LHIF check CLDMA DL ready
 *
 * 08 23 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Change L2Copro wri ptr and start API
 *
 * 08 19 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] fix modis build error
 *
 * 08 19 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF DEV] fix modis build error
 *
 * 07 18 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Fix MoDIS build error
 *
 * 07 13 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Update LHIF register
 *
 * 07 12 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Fix build warnings
 *
  ****************************************************************************/
#ifndef _HIF_LHIF_H
#define _HIF_LHIF_H

#include "lhif_if.h"
#include "dpcopro_router.h"

/***********************************************************************
 *  lhif_hw_log_mode
 *
 *  Auther: CS.Huang (2016/5/4)
 *  Brief: LHIF HW log mode definition
 ***********************************************************************/
typedef enum
{
    LHIF_HW_LOG_RAW_DATA_MODE =0,
    LHIF_HW_LOG_PARSING_MODE  =1,
}lhif_hw_log_mode;


/***********************************************************************
 *  define module ID of copro power unit
 *
 ***********************************************************************/

#define LHIF_DRV_PWD_ID_AP_UL DPCOPRO_PWR_MOD_AP_UL_LHIF
#define LHIF_DRV_PWD_ID_SW_UL DPCOPRO_PWR_MOD_SW_UL_LHIF


/***********************************************************************
 *  LHIF driver related function definition
 *
 *  The function description please see the C file
 ***********************************************************************/
kal_bool lhif_drv_dl_enable(kal_bool enable);
kal_bool lhif_drv_ul_enable(kal_bool enable);
void lhif_drv_set_mtu(kal_uint16 size);
kal_uint16 lhif_drv_get_mtu();
kal_uint32 lhif_drv_get_error();
void lhif_drv_clr_error();
void lhif_drv_mask_all_error();
void lhif_drv_unmask_all_error();
void lhif_drv_force_md_error();
void lhif_drv_force_ap_error();
void lhif_drv_backup_all_reg();
void lhif_drv_restore_all_reg();
kal_bool lhif_drv_log_enable(kal_bool enable);
kal_uint32 lhif_drv_log_get_base();
void lhif_drv_log_set_base(kal_uint32 log_base);
kal_uint32 lhif_drv_log_get_entry_num();
void lhif_drv_log_set_entry_num(kal_uint32 entry_num);
kal_uint16 lhif_drv_log_get_entry_size();
void lhif_drv_log_set_entry_size(kal_uint16 entry_size);
kal_uint16 lhif_drv_log_get_data_len();
void lhif_drv_log_set_data_len(kal_uint16 data_len);
kal_uint16 lhif_drv_log_get_read_idx();
kal_uint16 lhif_drv_log_get_hw_read_idx();
void lhif_drv_log_set_read_idx(kal_uint16 read_idx);
void lhif_drv_log_set_hw_read_idx(kal_uint16 read_idx);
kal_uint16 lhif_drv_log_get_write_idx();
kal_uint16 lhif_drv_log_get_hw_write_idx();
void lhif_drv_log_set_write_idx(kal_uint16 write_idx);
kal_uint16 lhif_drv_log_get_log_seq();
void lhif_drv_log_set_log_seq(kal_uint16 log_seq);
kal_uint16 lhif_drv_log_get_sw_reserved_room();
void lhif_drv_log_set_sw_reserved_room(kal_uint16 room_size);
kal_uint32 lhif_drv_log_get_log_full();
kal_uint32 lhif_drv_check_meta_full();
kal_uint32 lhif_drv_check_vrb_shortage();
#define LHIF_DRV_LOG_WIDX_ADV_BIT    	(1 << 0)
#define LHIF_DRV_LOG_FULL_BIT    	(1 << 1)
void lhif_drv_log_int_clr_notify(kal_uint32 notify);
kal_uint32 lhif_drv_log_int_get_notify();
void lhif_drv_log_int_set_mask(kal_uint32 mask);
kal_uint32 lhif_drv_log_int_get_mask();
void lhif_dbg_register_dump(void);

kal_bool lhif_drv_dl_cldma_ready_check(void);

kal_bool lhif_drv_meta_query_next_rw_idx(kal_uint32 meta_id, kal_uint16 *r_idx,kal_uint16 *w_idx);
void lhif_drv_meta_rel_entry(kal_uint32 meta_id, kal_uint16 rel_entry_num);
kal_uint32* lhif_drv_meta_get_base(kal_uint32 meta_id);
kal_uint16 lhif_drv_meta_get_tbl_entry_num(kal_uint32 meta_id);
kal_uint32* lhif_drv_desc_get_wri_ptr(kal_uint32 desc_id, kal_uint16 *remain_cont_word_num);
kal_uint32* lhif_drv_desc_inc_wri_ptr_and_start(kal_uint32 qid, kal_uint16 inc_num);
void lhif_drv_set_ib_desc_cksum(kal_uint32 *ib_desc);
void lhif_drv_copro_vrb_release(void* addr, kal_uint16 len, kal_uint8 task_id);
void lhif_drv_dpcopro_power_on(kal_uint8 mod_id);
void lhif_drv_dpcopro_power_down(kal_uint8 mod_id);
void lhif_drv_dpcopro_event_cb_reg(void(*reg_cb)(kal_uint32 event),kal_uint32 reg_event);
kal_uint32 lhif_drv_get_all_dp_power_status(void);


kal_uint32 lhif_drv_lock_pwr_st(kal_uint8 pwr_id);
void lhif_drv_unlock_pwr_st(kal_uint8 pwr_id);

#if defined(__MTK_TARGET__)
#else // MODIS
#include "dpcopro_router.h"
// Should be replaced to QP format
kal_uint32 lhif_drv_ut_get_hw_reg_base();
kal_uint32 lhif_drv_ut_get_hw_log_reg_base();
kal_uint32 lhif_drv_ut_get_meta_base();
kal_uint32 lhif_drv_ut_get_qp_base();
void lhif_drv_ut_writereg32(kal_uint32 reg_addr, kal_uint32 value);
kal_uint32 lhif_drv_ut_readreg32(kal_uint32 reg_addr);
kal_bool lhif_drv_ut_dl_enable(kal_bool enable);
kal_bool lhif_drv_ut_ul_enable(kal_bool enable);
void lhif_qp_ut_meta_config(kal_uint32 meta_id, meta_tbl_config_t *meta);
kal_bool lhif_qp_ut_meta_query(kal_uint32 meta_id, kal_uint16 *read_idx, kal_uint16 *end_idx);
kal_uint32* lhif_qp_ut_get_tbl_base(kal_uint32 meta_id);
kal_uint16 lhif_qp_ut_get_tbl_size(kal_uint32 meta_id);
void lhif_qp_ut_meta_rel_entry(kal_uint32 meta_id, kal_uint16 rel_entry_num);
kal_uint32* lhif_qp_ut_inc_wri_ptr(kal_uint32 desc_id, kal_uint16 desc_word_num);
kal_uint32* lhif_qp_ut_get_wri_ptr(kal_uint32 desc_id, kal_uint16 *remain_cont_word_num);
kal_uint32* lhif_qp_ut_inc_wri_ptr_and_start(kal_uint32 desc_id, kal_uint16 desc_word_num);
void lhif_qp_ut_start(kal_uint32 desc_id, kal_uint16 desc_word_num);
void lhif_qp_ut_set_checksum(inband_desc_hdr_t *hdr);
kal_uint16 lhif_qp_ut_inc_wri_idx_and_start(kal_uint32 desc_id, kal_uint16 desc_word_num);
void lhif_drv_ut_log_set_read_idx(kal_uint16 read_idx);
void lhif_drv_ut_log_set_write_idx(kal_uint16 write_idx);
void lhif_drv_ut_log_set_log_seq(kal_uint16 log_seq);

#endif

#endif //_HIF_LHIF_H
