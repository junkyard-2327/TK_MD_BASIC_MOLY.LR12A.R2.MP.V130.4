/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   sim_cache_files.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   SIM EF data cache in NVRAM
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#ifndef SIM_CACHE_FILES_H
#define SIM_CACHE_FILES_H
#include "sim_private_enum.h"
#include "sim_private_struct.h"
#include "sim_public_enum.h"

extern void sim_cache_reset_cached(sim_context_struct *this_sim);
extern void sim_cache_full_reset_cached(sim_context_struct *this_sim);
extern kal_bool sim_cache_check_record_cached(kal_uint8 p1, kal_uint8 p2, kal_uint8 file_id, sim_context_struct *this_sim);
extern void sim_cache_update_record_cached(kal_uint8 p1, kal_uint8 p2, kal_uint8 file_id, sim_context_struct *this_sim);
extern void sim_cache_clean_record_cached(kal_uint8 p1, kal_uint8 p2, kal_uint8 file_id, sim_context_struct *this_sim);

/* IMSI */
extern kal_bool sim_cache_nvram_imsi_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_imsi_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_imsi_reset(sim_context_struct *this_sim);

/* DIR */
extern kal_bool sim_cache_nvram_dir_record_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_dir_record_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_dir_reset(sim_context_struct *this_sim);

/* AD */
extern kal_bool sim_cache_nvram_ad_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_ad_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_ad_reset(sim_context_struct *this_sim);

/* GID1 */
extern kal_bool sim_cache_nvram_gid1_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_gid1_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_gid1_reset(sim_context_struct *this_sim);

/* SPN */
extern kal_bool sim_cache_nvram_spn_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_spn_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_spn_reset(sim_context_struct *this_sim);

/* ICCID */
extern kal_bool sim_cache_nvram_iccid_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_iccid_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_iccid_reset(sim_context_struct *this_sim);

/* SST */
extern kal_bool sim_cache_nvram_sst_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_sst_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_sst_reset(sim_context_struct *this_sim);

/* SMSP */
extern kal_bool sim_cache_nvram_smsp_record_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_smsp_record_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_smsp_reset(sim_context_struct *this_sim);

/* MBI */
extern kal_bool sim_cache_nvram_mbi_record_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_mbi_record_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_mbi_reset(sim_context_struct *this_sim);

/* GID2 */
extern kal_bool sim_cache_nvram_gid2_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_gid2_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_gid2_reset(sim_context_struct *this_sim);

/* LI_LP */
extern kal_bool sim_cache_nvram_li_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_li_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_li_reset(sim_context_struct *this_sim);

/* ELP */
extern kal_bool sim_cache_nvram_elp_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_elp_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_elp_reset(sim_context_struct *this_sim);

/* MSISDN */
extern kal_bool sim_cache_nvram_msisdn_record_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_msisdn_record_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_msisdn_reset(sim_context_struct *this_sim);

/* VM_WAIT */
extern kal_bool sim_cache_nvram_vm_wait_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_vm_wait_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_vm_wait_reset(sim_context_struct *this_sim);

/* SPDI */
extern kal_bool sim_cache_nvram_spdi_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_spdi_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_spdi_reset(sim_context_struct *this_sim);

/* CPHS_INFO */
extern kal_bool sim_cache_nvram_cphs_info_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_cphs_info_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_cphs_info_reset(sim_context_struct *this_sim);

/* CSP */
extern kal_bool sim_cache_nvram_csp_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_csp_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_csp_reset(sim_context_struct *this_sim);

/* OP_STRING */
extern kal_bool sim_cache_nvram_op_string_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_op_string_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_op_string_reset(sim_context_struct *this_sim);

/* OP_SHORTFORM */
extern kal_bool sim_cache_nvram_op_shortform_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_op_shortform_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_op_shortform_reset(sim_context_struct *this_sim);

/* CFIS */
extern kal_bool sim_cache_nvram_cfis_record_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_cfis_record_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_cfis_reset(sim_context_struct *this_sim);

/* PLMNWACT */
extern kal_bool sim_cache_nvram_plmnwact_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_plmnwact_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_plmnwact_reset(sim_context_struct *this_sim);

/* OPLMNWACT */
extern kal_bool sim_cache_nvram_oplmnwact_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_oplmnwact_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_oplmnwact_reset(sim_context_struct *this_sim);

/* HPLMNWACT */
extern kal_bool sim_cache_nvram_hplmnwact_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_hplmnwact_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_hplmnwact_reset(sim_context_struct *this_sim);

/* EHPLMN */
extern kal_bool sim_cache_nvram_ehplmn_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_ehplmn_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_ehplmn_reset(sim_context_struct *this_sim);

/* FPLMN */
extern kal_bool sim_cache_nvram_fplmn_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_fplmn_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_fplmn_reset(sim_context_struct *this_sim);

/* PERSO */
extern kal_bool sim_cache_nvram_perso_binary_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *rx_data, kal_uint32 rx_data_size, kal_uint16 *status_word, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_perso_binary_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *tx_data, kal_uint32 tx_data_size, sim_context_struct *this_sim);
extern kal_bool sim_cache_nvram_perso_reset(sim_context_struct *this_sim);

#endif /* SIM_CACHE_FILES_H */
