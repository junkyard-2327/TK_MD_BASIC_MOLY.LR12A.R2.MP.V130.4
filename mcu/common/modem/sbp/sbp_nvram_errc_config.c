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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *

 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "kal_public_api.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "nvram_editor_data_item.h"


#define ERRC_FGI_03      0x20000000
#define ERRC_FGI_07      0x02000000
#define ERRC_FGI_08      0x01000000
#define ERRC_FGI_27      0x00000020
#define ERRC_FGI_28      0x00000010
#define ERRC_FGI_29      0x00000008
#define ERRC_FGI_31      0x00000002

#ifdef __LTE_RAT__

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_errc_para
 * DESCRIPTION
 * Set ERRC para in nvram
 * PARAMETERS
 *  sbp_id
 *  protocol_id
 * RETURNS
 *  none
 *****************************************************************************/
kal_bool nvram_custom_config_errc_para(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_uint8 *buf_performance;
    kal_uint8 *buf_eutra_cap_csfb;
    kal_uint8 *buf_lte_cap;
    kal_uint8 *buf_lte_scan_enh_inf;
    kal_uint32 sbp_id = param_ptr->sbp_id;
    protocol_id_enum ps_id = param_ptr->ps_id;

    if (sbp_id == 1) // for CMCC
    {
/*        nvram_ef_ue_eutra_cap_struct* pEutra_cap_csfb;
        buf_eutra_cap_csfb = get_ctrl_buffer(NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
		
        nvram_external_read_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                 1+(ps_id-PROTOCOL_1),
                                 buf_eutra_cap_csfb,
                                 NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
		
        pEutra_cap_csfb = (nvram_ef_ue_eutra_cap_struct*)buf_eutra_cap_csfb;

        nvram_external_write_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                  1+(ps_id-PROTOCOL_1),
                                  buf_eutra_cap_csfb,
                                  NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);

        free_ctrl_buffer(buf_eutra_cap_csfb); */
    }
    else if (sbp_id == 3) //for Orange
    {
        nvram_ef_errc_performance_para_struct* pERRC_performance_para;
		
        nvram_ef_ue_eutra_cap_struct* pEutra_cap_csfb;
        buf_performance = get_ctrl_buffer(NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        /* modify ERRC_PERFORMANCE_PARA_LID */
        nvram_external_read_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                1+(ps_id-PROTOCOL_1),
                                buf_performance,
                                NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        pERRC_performance_para = (nvram_ef_errc_performance_para_struct*)buf_performance;
		
        //disable 3G AFR
        pERRC_performance_para->csfb_enhancement_item_status &= 0xEF;

        nvram_external_write_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                1+(ps_id-PROTOCOL_1),
                                buf_performance,
                                NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        free_ctrl_buffer(buf_performance);

		// RoHC

	    buf_eutra_cap_csfb = get_ctrl_buffer(NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
	
	    nvram_external_read_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
											   1+(ps_id-PROTOCOL_1),
											  buf_eutra_cap_csfb,
											  NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
	
	    pEutra_cap_csfb = (nvram_ef_ue_eutra_cap_struct*)buf_eutra_cap_csfb;
	
					// new orange requirement for RoHC
	    pEutra_cap_csfb->pdcp_param.rohc_profiles[3] = 0;
	
	    nvram_external_write_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
							 1+(ps_id-PROTOCOL_1),
							  buf_eutra_cap_csfb,
							  NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
	
	    free_ctrl_buffer(buf_eutra_cap_csfb);


		
    }
    else if (sbp_id == 5) //For DTAG
    {
        nvram_ef_ue_eutra_cap_struct* pEutra_cap_csfb;

        buf_eutra_cap_csfb = get_ctrl_buffer(NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);

        nvram_external_read_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_eutra_cap_csfb,
                                                      NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);

        pEutra_cap_csfb = (nvram_ef_ue_eutra_cap_struct*)buf_eutra_cap_csfb;

        pEutra_cap_csfb->phylayer_param_v1020.multi_cluster_pusch_within_cc_r10 = 0;

        nvram_external_write_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                       1+(ps_id-PROTOCOL_1),
                                                       buf_eutra_cap_csfb,
                                                       NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
        free_ctrl_buffer(buf_eutra_cap_csfb);
    }
    else if (sbp_id == 7 || sbp_id == 145) //for AT&T and Cricket
    {
        nvram_ef_errc_performance_para_struct* pERRC_performance_para;
        buf_performance = get_ctrl_buffer(NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);
        
        /* modify ERRC_PERFORMANCE_PARA_LID */
        nvram_external_read_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_performance,
                                                      NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);
        
        pERRC_performance_para = (nvram_ef_errc_performance_para_struct*)buf_performance;
        
        //adjust 'bar cell' mechanism
        pERRC_performance_para->trach = 6;
        pERRC_performance_para->max_kraerr = 5;
        pERRC_performance_para->traerr = 60;
        pERRC_performance_para->tvalid_raerr = 80;
        
        nvram_external_write_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                                       1+(ps_id-PROTOCOL_1),
                                                       buf_performance,
                                                      NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        free_ctrl_buffer(buf_performance);
    }
    else if (sbp_id == 8) // for TMO-US
    {
        nvram_ef_ue_eutra_cap_struct* pEutra_cap_csfb;

        buf_eutra_cap_csfb = get_ctrl_buffer(NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);

        nvram_external_read_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_eutra_cap_csfb,
                                                      NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
		

        pEutra_cap_csfb = (nvram_ef_ue_eutra_cap_struct*)buf_eutra_cap_csfb;

        pEutra_cap_csfb->feature_group_ind_fdd &= (~(ERRC_FGI_29));
        pEutra_cap_csfb->feature_group_ind_tdd &= (~(ERRC_FGI_29));


        nvram_external_write_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                       1+(ps_id-PROTOCOL_1),
                                                       buf_eutra_cap_csfb,
                                                       NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
		
        free_ctrl_buffer(buf_eutra_cap_csfb);
    }
    else if (sbp_id == 9) // for CT
    {
        nvram_ef_ue_eutra_cap_struct* pEutra_cap_csfb;
        nvram_ef_errc_lte_scan_enhance_struct *p_lte_scan_enh_inf;
        buf_eutra_cap_csfb = get_ctrl_buffer(NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
        buf_lte_scan_enh_inf = get_ctrl_buffer(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_SIZE);
		
	 /* disable ue-SpecificRefSigsSupported */
        nvram_external_read_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_eutra_cap_csfb,
                                                      NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
        nvram_external_read_data(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_lte_scan_enh_inf,
                                                      NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_SIZE);
		
        pEutra_cap_csfb = (nvram_ef_ue_eutra_cap_struct*)buf_eutra_cap_csfb;
        pEutra_cap_csfb->phylayer_param.ue_specific_ref_sigs = 0;

        p_lte_scan_enh_inf = (nvram_ef_errc_lte_scan_enhance_struct *)buf_lte_scan_enh_inf;
        p_lte_scan_enh_inf->LTE_scan_active_duration_1xRTT = 0x02; //unit in 500ms
        p_lte_scan_enh_inf->LTE_scan_active_duration_DO = 0x03; //unit in 100ms
        p_lte_scan_enh_inf->LTE_scan_active_interval_1xRTT = 0x3c; //unit in 500ms
        p_lte_scan_enh_inf->LTE_scan_active_interval_DO = 0x3c; //unit in 500ms 

        nvram_external_write_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                       1+(ps_id-PROTOCOL_1),
                                                       buf_eutra_cap_csfb,
                                                       NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
        nvram_external_write_data(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_lte_scan_enh_inf,
                                                      NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_SIZE);
		
        free_ctrl_buffer(buf_eutra_cap_csfb);
        free_ctrl_buffer(buf_lte_scan_enh_inf);
    }
    else if (sbp_id == 12) //for VzW
    {
        nvram_ef_errc_performance_para_struct* pERRC_performance_para;
        nvram_ef_errc_lte_scan_enhance_struct *p_lte_scan_enh_inf;
                       
        buf_performance = get_ctrl_buffer(NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);
        buf_lte_scan_enh_inf = get_ctrl_buffer(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_SIZE);

        /* modify ERRC_PERFORMANCE_PARA_LID */
        nvram_external_read_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_performance,
                                                      NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        nvram_external_read_data(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_lte_scan_enh_inf,
                                                      NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_SIZE);
						
        pERRC_performance_para = (nvram_ef_errc_performance_para_struct*)buf_performance;
		
        //Dennis Weng 2014/12/09: set priority band record
        pERRC_performance_para->designated_carrier_inf.priority_band_inf_num = 2;

        //plmn=ffffff (default)
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mcc1=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mcc2=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mcc3=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mnc1=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mnc2=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mnc3=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_num=13;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[0]=13;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[1]=4;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[2]=3;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[3]=7;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[4]=20;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[5]=5;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[6]=2;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[7]=1;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[8]=28;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[9]=26;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[10]=8;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[11]=18;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[12]=19;
		
        //plmn=310fff
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].plmn_id.mcc1=0x3;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].plmn_id.mcc2=0x1;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].plmn_id.mcc3=0x0;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].plmn_id.mnc1=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].plmn_id.mnc2=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].plmn_id.mnc3=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].band_num=5;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].band_list[0]=4;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].band_list[1]=2;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].band_list[2]=13;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].band_list[3]=5;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[1].band_list[4]=66;

        /* Adjust 'bar cell' mechanism (for SBP_EMM_CONN_FAIL_ABNORMAL_B) */
        pERRC_performance_para->trach = 60;
        pERRC_performance_para->max_kraerr = 30;
        pERRC_performance_para->traerr = 5;
        pERRC_performance_para->tvalid_raerr = 10;

        p_lte_scan_enh_inf = (nvram_ef_errc_lte_scan_enhance_struct *)buf_lte_scan_enh_inf;
        p_lte_scan_enh_inf->LTE_scan_active_duration_1xRTT = 0x0C; //unit in 500ms
        p_lte_scan_enh_inf->LTE_scan_active_duration_DO    = 0x03; //unit in 100ms
        p_lte_scan_enh_inf->LTE_scan_active_interval_1xRTT = 0x78; //unit in 500ms
        p_lte_scan_enh_inf->LTE_scan_active_interval_DO    = 0x78; //unit in 500ms 

        nvram_external_write_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                                       1+(ps_id-PROTOCOL_1),
                                                       buf_performance,
                                                      NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        nvram_external_write_data(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_lte_scan_enh_inf,
                                                      NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_SIZE);

        free_ctrl_buffer(buf_performance);
        free_ctrl_buffer(buf_lte_scan_enh_inf);

    }
    else if (sbp_id == 18) //for RJIL
    {
        nvram_ef_errc_performance_para_struct* pERRC_performance_para;
        buf_performance = get_ctrl_buffer(NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);
		
        /* modify ERRC_PERFORMANCE_PARA_LID */
        nvram_external_read_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_performance,
                                                      NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);
						
        pERRC_performance_para = (nvram_ef_errc_performance_para_struct*)buf_performance;
		
        //Dennis Weng 2017/03/07: set priority band record
        pERRC_performance_para->designated_carrier_inf.priority_band_inf_num = 1;

        //plmn=ffffff (default)
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mcc1=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mcc2=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mcc3=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mnc1=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mnc2=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mnc3=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_num=4;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[0]=40;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[1]=3;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[2]=5;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[3]=28;
		
        nvram_external_write_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                                       1+(ps_id-PROTOCOL_1),
                                                       buf_performance,
                                                       NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        free_ctrl_buffer(buf_performance);
    }
    else if (sbp_id == 20) // for Sprint
    {
        kal_uint32 i, j;
        kal_uint32 mcc[] = {310, 311, 312, 313, 314, 315, 316, 330};        
        kal_uint32 band1[] = {25, 26, 41, 12, 2, 4, 5};
        kal_uint32 band_default[] = {41, 2, 4, 5};        
        kal_uint32 num_mcc, num_band1, num_band_default;
        nvram_ef_errc_lte_scan_enhance_struct *p_lte_scan_enh_inf;

        /*Apply band scarn priority*/
        nvram_ef_errc_performance_para_struct* pERRC_performance_para;
        nvram_ef_ue_eutra_cap_struct* pEutra_cap_csfb;
        
        buf_performance = get_ctrl_buffer(NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        /* modify ERRC_PERFORMANCE_PARA_LID */
        nvram_external_read_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                  1+(ps_id-PROTOCOL_1),
                                  buf_performance,
                                  NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        pERRC_performance_para = (nvram_ef_errc_performance_para_struct*)buf_performance;

        num_mcc = sizeof(mcc) / sizeof(kal_uint32);
        num_band1 = sizeof(band1) / sizeof(kal_uint32);
        
        // plmn in North america , mcc = 310~316 or 330
        // 1. NA area: search B25, 26, 41, 12, 2, 4, 5 when MCC is 310~316 or 330
        // 2. non NA area: search B41, 2, 4, 5
        for (i = 0; i < num_mcc; i++)
        {
            pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mcc1 = (mcc[i] / 100);
            pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mcc2 = (mcc[i] / 10) % 10;
            pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mcc3 = (mcc[i] % 10);
            pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mnc1 = 0xf;
            pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mnc2 = 0xf;
            pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mnc3 = 0xf;
            
            pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].band_num = num_band1;

            for (j = 0; j < num_band1; j++)
            {
                pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].band_list[j] = band1[j];	
            }
        }

        //plmn=ffffff (default)
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mcc1=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mcc2=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mcc3=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mnc1=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mnc2=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].plmn_id.mnc3=0xf;

        num_band_default = sizeof(band_default) / sizeof(kal_uint32);

        pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].band_num = num_band_default;
        
        for (j = 0; j < num_band_default; j++)
        {
            pERRC_performance_para->designated_carrier_inf.priority_band_inf[i].band_list[j] = band_default[j];	
        }        

        pERRC_performance_para->designated_carrier_inf.priority_band_inf_num = i + 1;

        nvram_external_write_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                   1+(ps_id-PROTOCOL_1),
                                   buf_performance,
                                   NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        free_ctrl_buffer(buf_performance);

        /* apply LTE_SCAN_ENHANCEMENT parameter */
        buf_lte_scan_enh_inf = get_ctrl_buffer(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_SIZE);

        /* modify ERRC_VZW_LTE_SCAN_ENHANCE_LID */
        nvram_external_read_data(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_LID,
                                  1,
                                  buf_lte_scan_enh_inf,
                                  NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_SIZE);

        p_lte_scan_enh_inf = (nvram_ef_errc_lte_scan_enhance_struct *)buf_lte_scan_enh_inf;
        p_lte_scan_enh_inf->LTE_scan_active_duration_1xRTT = 0x02; //unit in 500ms
        p_lte_scan_enh_inf->LTE_scan_active_duration_DO = 0x03; //unit in 100ms
        p_lte_scan_enh_inf->LTE_scan_active_interval_1xRTT = 0x3c; //unit in 500ms
        p_lte_scan_enh_inf->LTE_scan_active_interval_DO = 0x3c; //unit in 500ms 
      
        nvram_external_write_data(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_LID,
                                   1,
                                   buf_lte_scan_enh_inf,
                                   NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_SIZE);

        free_ctrl_buffer(buf_lte_scan_enh_inf);

        buf_eutra_cap_csfb = get_ctrl_buffer(NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);

        nvram_external_read_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_eutra_cap_csfb,
                                                      NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
		

        pEutra_cap_csfb = (nvram_ef_ue_eutra_cap_struct*)buf_eutra_cap_csfb;
        pEutra_cap_csfb->feature_group_ind_fdd &= (~(ERRC_FGI_03));
        pEutra_cap_csfb->feature_group_ind_tdd &= (~(ERRC_FGI_03));
        pEutra_cap_csfb->feature_group_ind_fdd &= (~(ERRC_FGI_27));
        pEutra_cap_csfb->feature_group_ind_fdd &= (~(ERRC_FGI_28));
        pEutra_cap_csfb->feature_group_ind_fdd &= (~(ERRC_FGI_29));
        pEutra_cap_csfb->phylayer_param.ue_specific_ref_sigs = 0;
        pEutra_cap_csfb->nei_cell_si_acq_r9.intraFreqSI_AcquisitionForHO_r9_fdd = 0;
        pEutra_cap_csfb->nei_cell_si_acq_r9.intraFreqSI_AcquisitionForHO_r9_tdd = 0;
        pEutra_cap_csfb->nei_cell_si_acq_r9.interFreqSI_AcquisitionForHO_r9_fdd = 0;
        pEutra_cap_csfb->nei_cell_si_acq_r9.interFreqSI_AcquisitionForHO_r9_tdd = 0;
        pEutra_cap_csfb->nei_cell_si_acq_r9.utran_SI_AcquisitionForHO_r9_fdd = 0;
        pEutra_cap_csfb->nei_cell_si_acq_r9.utran_SI_AcquisitionForHO_r9_tdd = 0;

        nvram_external_write_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                       1+(ps_id-PROTOCOL_1),
                                                       buf_eutra_cap_csfb,
                                                       NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
		
        free_ctrl_buffer(buf_eutra_cap_csfb);
    }
    else if(sbp_id == 50) //for Softbank
    {
        nvram_ef_lte_cap_struct* pLte_cap;
        kal_uint32 j;
        kal_uint32 band_default[] = {41, 1, 3, 8, 25, 26, 2, 4, 5, 7, 12, 17, 38, 39, 40};
        kal_uint32 num_band_default;        
        nvram_ef_errc_performance_para_struct* pERRC_performance_para;   
        nvram_ef_ue_eutra_cap_struct* pEutra_cap_csfb;
        
        buf_lte_cap = get_ctrl_buffer(NVRAM_EF_LTE_CAP_SIZE);

        /* turn on Disable BW */
        nvram_external_read_data(NVRAM_EF_LTE_CAP_LID, 1+(ps_id-PROTOCOL_1), buf_lte_cap, NVRAM_EF_LTE_CAP_SIZE);
           
        pLte_cap = (nvram_ef_lte_cap_struct*)buf_lte_cap;
        pLte_cap->disable_bw[0] = 0x03;
        pLte_cap->disable_bw[7] = 0x30;
        pLte_cap->disable_bw[40] = 0x17;

        nvram_external_write_data(NVRAM_EF_LTE_CAP_LID,1+(ps_id-PROTOCOL_1), buf_lte_cap, NVRAM_EF_LTE_CAP_SIZE);
        free_ctrl_buffer(buf_lte_cap);

        /*Apply band scarn priority*/
        /* modify ERRC_PERFORMANCE_PARA_LID */
        buf_performance = get_ctrl_buffer(NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);	

        nvram_external_read_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                  1+(ps_id-PROTOCOL_1),
                                  buf_performance,
                                  NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        pERRC_performance_para = (nvram_ef_errc_performance_para_struct*)buf_performance;
        
       //plmn=ffffff (default)
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mcc1=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mcc2=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mcc3=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mnc1=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mnc2=0xf;
        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].plmn_id.mnc3=0xf;

        num_band_default = sizeof(band_default) / sizeof(kal_uint32);

        pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_num = num_band_default;
        
        for (j = 0; j < num_band_default; j++)
        {
            pERRC_performance_para->designated_carrier_inf.priority_band_inf[0].band_list[j] = band_default[j];	
        }        

        pERRC_performance_para->designated_carrier_inf.priority_band_inf_num = 1;

        //disable 3G AFR
        pERRC_performance_para->csfb_enhancement_item_status &= 0xEF;

        nvram_external_write_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                                   1+(ps_id-PROTOCOL_1),
                                   buf_performance,
                                   NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);

        free_ctrl_buffer(buf_performance);
        
        buf_eutra_cap_csfb = get_ctrl_buffer(NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);

		
        nvram_external_read_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                      1+(ps_id-PROTOCOL_1),
                                                      buf_eutra_cap_csfb,
                                                      NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);           

        pEutra_cap_csfb = (nvram_ef_ue_eutra_cap_struct*)buf_eutra_cap_csfb;
        pEutra_cap_csfb->feature_group_ind_fdd &= (~(ERRC_FGI_31));
        pEutra_cap_csfb->feature_group_ind_tdd &= (~(ERRC_FGI_31));
        pEutra_cap_csfb->phylayer_param.ue_specific_ref_sigs = 0;

        nvram_external_write_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                                                       1+(ps_id-PROTOCOL_1),
                                                       buf_eutra_cap_csfb,
                                                       NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);			

        free_ctrl_buffer(buf_eutra_cap_csfb);
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_reset_errc_para
 * DESCRIPTION
 *  This function will reset nvram parameters to the default value for 
 *  1. NVRAM_EF_UE_EUTRA_CAP_CSFB_LID
 *  2. NVRAM_EF_ERRC_PERFORMANCE_PARA_LID
 *  3. NVRAM_EF_LTE_CAP_LID
 * PARAMETERS
 *   old_sbp_id   previously SBP ID which is used to change the configuration of NVRAMs
 * RETURNS
 *****************************************************************************/
void nvram_custom_reset_errc_para(kal_uint32 old_sbp_id)
{
    kal_uint8* nvram_write_buf_ptr = NULL;

    //NVRAM_EF_UE_EUTRA_CAP_CSFB_LID
    if(NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
            1, 
            &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID,
                1,
                nvram_write_buf_ptr,
                NVRAM_EF_UE_EUTRA_CAP_CSFB_SIZE);
    }		

    //NVRAM_EF_ERRC_PERFORMANCE_PARA_LID
    if(NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
            1, 
            &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID,
                1,
                nvram_write_buf_ptr,
                NVRAM_EF_ERRC_PERFORMANCE_PARA_SIZE);
    }		

    //NVRAM_EF_LTE_CAP_LID
    if(NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_LTE_CAP_LID,
        1, 
        &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_LTE_CAP_LID,
                1,
                nvram_write_buf_ptr,
                NVRAM_EF_LTE_CAP_SIZE);
    }		

}


#endif /* __LTE_RAT__ */ 

