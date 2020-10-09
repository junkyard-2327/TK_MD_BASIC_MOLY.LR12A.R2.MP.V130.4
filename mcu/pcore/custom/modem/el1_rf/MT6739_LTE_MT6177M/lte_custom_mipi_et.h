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
 * lte_custom_mipi_et.h
 *
 * Project:
 * --------
 * MT6291
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 *============================================================================*/

#ifndef  _LTE_CUSTOM_MIPI_ET_SetDefault_H_
#define  _LTE_CUSTOM_MIPI_ET_SetDefault_H_

/*===============================================================================*/

#include "el1d_rf_custom_data_et.h"
#include "lte_custom_mipi.h"

/*===============================================================================*/

/* ================================================================================================== */
/*   LTE ET feature enable control flag                                                                                                                                                                           */
/* ================================================================================================== */

#define IS_LTE_ET_FRONT_END_ENABLE_SetDefault                                  0   // 0: Disable ET feature; 1:Enable ET feature.

/* ================================================================================================== */
/*   LTE ET MIPI port selection                                                                                                                                                                                      */
/* ================================================================================================== */

#if( defined( MML1_ET_MIPI_PORT_SetDefault ) )

#if( MML1_ET_MIPI_PORT_SetDefault == MML1_MIPI_PORT0 )

#define MIPI_PORT_ET_SetDefault                          LTE_MIPI_PORT0   // DO NOT MODIFY! Just apply MML1 setting

#elif( MML1_ET_MIPI_PORT_SetDefault == MML1_MIPI_PORT1 )

#define MIPI_PORT_ET_SetDefault                          LTE_MIPI_PORT1   // DO NOT MODIFY! Just apply MML1 setting

#elif( MML1_ET_MIPI_PORT_SetDefault == MML1_MIPI_PORT2 )

#define MIPI_PORT_ET_SetDefault                          LTE_MIPI_PORT2   // DO NOT MODIFY! Just apply MML1 setting

#elif( MML1_ET_MIPI_PORT_SetDefault == MML1_MIPI_PORT3 )

#define MIPI_PORT_ET_SetDefault                          LTE_MIPI_PORT3   // DO NOT MODIFY! Just apply MML1 setting

#elif( MML1_ET_MIPI_PORT_SetDefault == MML1_MIPI_PORT4 )

#define MIPI_PORT_ET_SetDefault                          LTE_MIPI_PORT4   // DO NOT MODIFY! Just apply MML1 setting

#elif( MML1_ET_MIPI_PORT_SetDefault == MML1_MIPI_PORT5 )

#define MIPI_PORT_ET_SetDefault                          LTE_MIPI_PORT5   // DO NOT MODIFY! Just apply MML1 setting

#elif( MML1_ET_MIPI_PORT_SetDefault == MML1_MIPI_PORT6 )

#define MIPI_PORT_ET_SetDefault                          LTE_MIPI_PORT6   // DO NOT MODIFY! Just apply MML1 setting

#elif( MML1_ET_MIPI_PORT_SetDefault == MML1_MIPI_PORT7 )

#define MIPI_PORT_ET_SetDefault                          LTE_MIPI_PORT7   // DO NOT MODIFY! Just apply MML1 setting

#endif   // #if( MML1_ET_MIPI_PORT_SetDefault == 0 )

#endif   // #if( defined( MML1_ET_MIPI_PORT_SetDefault )



#if( defined( MIPI_USID_ETM0_SetDefault ) )

#define LTE_MIPI_USID_ETM0_SetDefault                    MIPI_USID_ETM0_SetDefault   // DO NOT MODIFY! Just apply MML1 setting

#endif   // #if( defined( MIPI_USID_ETM0_SetDefault ) )



#if( defined( ETM_CHIP_TYPE_SetDefault ) )

#define LTE_ETM_CHIP_TYPE_SetDefault                     ETM_CHIP_TYPE_SetDefault   // DO NOT MODIFY! Just apply MML1 setting

#endif   // #if( defined( ETM_CHIP_TYPE_SetDefault ) )



/* ================================================================================================== */
/*   LTE ET Sub-Band Frequency Settings                                                                                                                                                                      */
/*                                                                       Unit: 100kHz                                                                                                                                     */
/* ================================================================================================== */

// ET BandNone Sub-frequency                           
#define ET_LTE_BandNone_SUB_0_Freq_SetDefault           0 
#define ET_LTE_BandNone_SUB_1_Freq_SetDefault           0 
#define ET_LTE_BandNone_SUB_2_Freq_SetDefault           0 
#define ET_LTE_BandNone_SUB_3_Freq_SetDefault           0 
#define ET_LTE_BandNone_SUB_4_Freq_SetDefault           0 
#define ET_LTE_BandNone_SUB_5_Freq_SetDefault           0 
#define ET_LTE_BandNone_SUB_6_Freq_SetDefault           0 
#define ET_LTE_BandNone_SUB_7_Freq_SetDefault           0 

// ET Band 1 Sub-frequency                           
#define ET_LTE_Band1_SUB_0_Freq_SetDefault           19225 
#define ET_LTE_Band1_SUB_1_Freq_SetDefault           19305 
#define ET_LTE_Band1_SUB_2_Freq_SetDefault           19385 
#define ET_LTE_Band1_SUB_3_Freq_SetDefault           19465 
#define ET_LTE_Band1_SUB_4_Freq_SetDefault           19535 
#define ET_LTE_Band1_SUB_5_Freq_SetDefault           19615 
#define ET_LTE_Band1_SUB_6_Freq_SetDefault           19695 
#define ET_LTE_Band1_SUB_7_Freq_SetDefault           19775 

// ET Band 2 Sub-frequency                           
#define ET_LTE_Band2_SUB_0_Freq_SetDefault           18525 
#define ET_LTE_Band2_SUB_1_Freq_SetDefault           18605 
#define ET_LTE_Band2_SUB_2_Freq_SetDefault           18685 
#define ET_LTE_Band2_SUB_3_Freq_SetDefault           18765 
#define ET_LTE_Band2_SUB_4_Freq_SetDefault           18835 
#define ET_LTE_Band2_SUB_5_Freq_SetDefault           18915 
#define ET_LTE_Band2_SUB_6_Freq_SetDefault           18995 
#define ET_LTE_Band2_SUB_7_Freq_SetDefault           19075 

// ET Band 3 Sub-frequency                           
#define ET_LTE_Band3_SUB_0_Freq_SetDefault           17125 
#define ET_LTE_Band3_SUB_1_Freq_SetDefault           17225 
#define ET_LTE_Band3_SUB_2_Freq_SetDefault           17325 
#define ET_LTE_Band3_SUB_3_Freq_SetDefault           17425 
#define ET_LTE_Band3_SUB_4_Freq_SetDefault           17525 
#define ET_LTE_Band3_SUB_5_Freq_SetDefault           17625 
#define ET_LTE_Band3_SUB_6_Freq_SetDefault           17725 
#define ET_LTE_Band3_SUB_7_Freq_SetDefault           17825 

// ET Band 4 Sub-frequency                           
#define ET_LTE_Band4_SUB_0_Freq_SetDefault           17125 
#define ET_LTE_Band4_SUB_1_Freq_SetDefault           17225 
#define ET_LTE_Band4_SUB_2_Freq_SetDefault           17325 
#define ET_LTE_Band4_SUB_3_Freq_SetDefault           17425 
#define ET_LTE_Band4_SUB_4_Freq_SetDefault           17525 
#define ET_LTE_Band4_SUB_5_Freq_SetDefault           0     
#define ET_LTE_Band4_SUB_6_Freq_SetDefault           0     
#define ET_LTE_Band4_SUB_7_Freq_SetDefault           0     

// ET Band 5 Sub-frequency                           
#define ET_LTE_Band5_SUB_0_Freq_SetDefault           8265  
#define ET_LTE_Band5_SUB_1_Freq_SetDefault           8315  
#define ET_LTE_Band5_SUB_2_Freq_SetDefault           8365  
#define ET_LTE_Band5_SUB_3_Freq_SetDefault           8415  
#define ET_LTE_Band5_SUB_4_Freq_SetDefault           8465  
#define ET_LTE_Band5_SUB_5_Freq_SetDefault           0     
#define ET_LTE_Band5_SUB_6_Freq_SetDefault           0     
#define ET_LTE_Band5_SUB_7_Freq_SetDefault           0     

// ET Band 6 Sub-frequency                           
#define ET_LTE_Band6_SUB_0_Freq_SetDefault           8325  
#define ET_LTE_Band6_SUB_1_Freq_SetDefault           8340  
#define ET_LTE_Band6_SUB_2_Freq_SetDefault           8350  
#define ET_LTE_Band6_SUB_3_Freq_SetDefault           8360  
#define ET_LTE_Band6_SUB_4_Freq_SetDefault           8375  
#define ET_LTE_Band6_SUB_5_Freq_SetDefault           0     
#define ET_LTE_Band6_SUB_6_Freq_SetDefault           0     
#define ET_LTE_Band6_SUB_7_Freq_SetDefault           0     

// ET Band 7 Sub-frequency                           
#define ET_LTE_Band7_SUB_0_Freq_SetDefault           25025 
#define ET_LTE_Band7_SUB_1_Freq_SetDefault           25110 
#define ET_LTE_Band7_SUB_2_Freq_SetDefault           25210 
#define ET_LTE_Band7_SUB_3_Freq_SetDefault           25300 
#define ET_LTE_Band7_SUB_4_Freq_SetDefault           25400 
#define ET_LTE_Band7_SUB_5_Freq_SetDefault           25490 
#define ET_LTE_Band7_SUB_6_Freq_SetDefault           25590 
#define ET_LTE_Band7_SUB_7_Freq_SetDefault           25675 

// ET Band 8 Sub-frequency                           
#define ET_LTE_Band8_SUB_0_Freq_SetDefault           8825  
#define ET_LTE_Band8_SUB_1_Freq_SetDefault           8860  
#define ET_LTE_Band8_SUB_2_Freq_SetDefault           8900  
#define ET_LTE_Band8_SUB_3_Freq_SetDefault           8950  
#define ET_LTE_Band8_SUB_4_Freq_SetDefault           9000  
#define ET_LTE_Band8_SUB_5_Freq_SetDefault           9050  
#define ET_LTE_Band8_SUB_6_Freq_SetDefault           9090  
#define ET_LTE_Band8_SUB_7_Freq_SetDefault           9125  

// ET Band 9 Sub-frequency                           
#define ET_LTE_Band9_SUB_0_Freq_SetDefault           17524 
#define ET_LTE_Band9_SUB_1_Freq_SetDefault           17569 
#define ET_LTE_Band9_SUB_2_Freq_SetDefault           17614 
#define ET_LTE_Band9_SUB_3_Freq_SetDefault           17659 
#define ET_LTE_Band9_SUB_4_Freq_SetDefault           17689 
#define ET_LTE_Band9_SUB_5_Freq_SetDefault           17734 
#define ET_LTE_Band9_SUB_6_Freq_SetDefault           17779 
#define ET_LTE_Band9_SUB_7_Freq_SetDefault           17824 

// ET Band 11 Sub-frequency                          
#define ET_LTE_Band11_SUB_0_Freq_SetDefault          14304 
#define ET_LTE_Band11_SUB_1_Freq_SetDefault          14341 
#define ET_LTE_Band11_SUB_2_Freq_SetDefault          14379 
#define ET_LTE_Band11_SUB_3_Freq_SetDefault          14417 
#define ET_LTE_Band11_SUB_4_Freq_SetDefault          14454 
#define ET_LTE_Band11_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band11_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band11_SUB_7_Freq_SetDefault          0     

// ET Band 12 Sub-frequency                          
#define ET_LTE_Band12_SUB_0_Freq_SetDefault          7015  
#define ET_LTE_Band12_SUB_1_Freq_SetDefault          7045  
#define ET_LTE_Band12_SUB_2_Freq_SetDefault          7075  
#define ET_LTE_Band12_SUB_3_Freq_SetDefault          7105  
#define ET_LTE_Band12_SUB_4_Freq_SetDefault          7135  
#define ET_LTE_Band12_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band12_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band12_SUB_7_Freq_SetDefault          0     

// ET Band 13 Sub-frequency                          
#define ET_LTE_Band13_SUB_0_Freq_SetDefault          7795  
#define ET_LTE_Band13_SUB_1_Freq_SetDefault          7810  
#define ET_LTE_Band13_SUB_2_Freq_SetDefault          7820  
#define ET_LTE_Band13_SUB_3_Freq_SetDefault          7830  
#define ET_LTE_Band13_SUB_4_Freq_SetDefault          7845  
#define ET_LTE_Band13_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band13_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band13_SUB_7_Freq_SetDefault          0         

// ET Band 17 Sub-frequency                          
#define ET_LTE_Band17_SUB_0_Freq_SetDefault          7065  
#define ET_LTE_Band17_SUB_1_Freq_SetDefault          7090  
#define ET_LTE_Band17_SUB_2_Freq_SetDefault          7100  
#define ET_LTE_Band17_SUB_3_Freq_SetDefault          7110  
#define ET_LTE_Band17_SUB_4_Freq_SetDefault          7135  
#define ET_LTE_Band17_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band17_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band17_SUB_7_Freq_SetDefault          0     

// ET Band 18 Sub-frequency                          
#define ET_LTE_Band18_SUB_0_Freq_SetDefault          8175  
#define ET_LTE_Band18_SUB_1_Freq_SetDefault          8225  
#define ET_LTE_Band18_SUB_2_Freq_SetDefault          8275  
#define ET_LTE_Band18_SUB_3_Freq_SetDefault          0     
#define ET_LTE_Band18_SUB_4_Freq_SetDefault          0     
#define ET_LTE_Band18_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band18_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band18_SUB_7_Freq_SetDefault          0     

// ET Band 19 Sub-frequency                          
#define ET_LTE_Band19_SUB_0_Freq_SetDefault          8325  
#define ET_LTE_Band19_SUB_1_Freq_SetDefault          8350  
#define ET_LTE_Band19_SUB_2_Freq_SetDefault          8375  
#define ET_LTE_Band19_SUB_3_Freq_SetDefault          8400  
#define ET_LTE_Band19_SUB_4_Freq_SetDefault          8425  
#define ET_LTE_Band19_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band19_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band19_SUB_7_Freq_SetDefault          0     

// ET Band 20 Sub-frequency                          
#define ET_LTE_Band20_SUB_0_Freq_SetDefault          8345  
#define ET_LTE_Band20_SUB_1_Freq_SetDefault          8380  
#define ET_LTE_Band20_SUB_2_Freq_SetDefault          8415  
#define ET_LTE_Band20_SUB_3_Freq_SetDefault          8450  
#define ET_LTE_Band20_SUB_4_Freq_SetDefault          8490  
#define ET_LTE_Band20_SUB_5_Freq_SetDefault          8525  
#define ET_LTE_Band20_SUB_6_Freq_SetDefault          8560  
#define ET_LTE_Band20_SUB_7_Freq_SetDefault          8595  

// ET Band 21 Sub-frequency                          
#define ET_LTE_Band21_SUB_0_Freq_SetDefault          14504 
#define ET_LTE_Band21_SUB_1_Freq_SetDefault          14529 
#define ET_LTE_Band21_SUB_2_Freq_SetDefault          14554 
#define ET_LTE_Band21_SUB_3_Freq_SetDefault          14579 
#define ET_LTE_Band21_SUB_4_Freq_SetDefault          14604 
#define ET_LTE_Band21_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band21_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band21_SUB_7_Freq_SetDefault          0     

// ET Band 22 Sub-frequency                          
#define ET_LTE_Band22_SUB_0_Freq_SetDefault          34125 
#define ET_LTE_Band22_SUB_1_Freq_SetDefault          34230 
#define ET_LTE_Band22_SUB_2_Freq_SetDefault          34335 
#define ET_LTE_Band22_SUB_3_Freq_SetDefault          34440 
#define ET_LTE_Band22_SUB_4_Freq_SetDefault          34560 
#define ET_LTE_Band22_SUB_5_Freq_SetDefault          34665 
#define ET_LTE_Band22_SUB_6_Freq_SetDefault          34770 
#define ET_LTE_Band22_SUB_7_Freq_SetDefault          34875   

// ET Band 25 Sub-frequency                          
#define ET_LTE_Band25_SUB_0_Freq_SetDefault          18525 
#define ET_LTE_Band25_SUB_1_Freq_SetDefault          18615 
#define ET_LTE_Band25_SUB_2_Freq_SetDefault          18705 
#define ET_LTE_Band25_SUB_3_Freq_SetDefault          18795 
#define ET_LTE_Band25_SUB_4_Freq_SetDefault          18855 
#define ET_LTE_Band25_SUB_5_Freq_SetDefault          18945 
#define ET_LTE_Band25_SUB_6_Freq_SetDefault          19035 
#define ET_LTE_Band25_SUB_7_Freq_SetDefault          19125 

// ET Band 26 Sub-frequency                          
#define ET_LTE_Band26_SUB_0_Freq_SetDefault          8165  
#define ET_LTE_Band26_SUB_1_Freq_SetDefault          8190  
#define ET_LTE_Band26_SUB_2_Freq_SetDefault          8240  
#define ET_LTE_Band26_SUB_3_Freq_SetDefault          8290  
#define ET_LTE_Band26_SUB_4_Freq_SetDefault          8340  
#define ET_LTE_Band26_SUB_5_Freq_SetDefault          8390  
#define ET_LTE_Band26_SUB_6_Freq_SetDefault          8440  
#define ET_LTE_Band26_SUB_7_Freq_SetDefault          8465  

// ET Band 27 Sub-frequency                          
#define ET_LTE_Band27_SUB_0_Freq_SetDefault          8095  
#define ET_LTE_Band27_SUB_1_Freq_SetDefault          8125  
#define ET_LTE_Band27_SUB_2_Freq_SetDefault          8155  
#define ET_LTE_Band27_SUB_3_Freq_SetDefault          8185  
#define ET_LTE_Band27_SUB_4_Freq_SetDefault          8215  
#define ET_LTE_Band27_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band27_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band27_SUB_7_Freq_SetDefault          0     

// ET Band 28 Sub-frequency                          
#define ET_LTE_Band28_SUB_0_Freq_SetDefault          7055  
#define ET_LTE_Band28_SUB_1_Freq_SetDefault          7160  
#define ET_LTE_Band28_SUB_2_Freq_SetDefault          7220  
#define ET_LTE_Band28_SUB_3_Freq_SetDefault          7255  
#define ET_LTE_Band28_SUB_4_Freq_SetDefault          7256  
#define ET_LTE_Band28_SUB_5_Freq_SetDefault          7290  
#define ET_LTE_Band28_SUB_6_Freq_SetDefault          7350  
#define ET_LTE_Band28_SUB_7_Freq_SetDefault          7455  

// ET Band 29 Sub-frequency                          
#define ET_LTE_Band29_SUB_0_Freq_SetDefault          0     
#define ET_LTE_Band29_SUB_1_Freq_SetDefault          0     
#define ET_LTE_Band29_SUB_2_Freq_SetDefault          0     
#define ET_LTE_Band29_SUB_3_Freq_SetDefault          0     
#define ET_LTE_Band29_SUB_4_Freq_SetDefault          0     
#define ET_LTE_Band29_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band29_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band29_SUB_7_Freq_SetDefault          0     

// ET Band 30 Sub-frequency                          
#define ET_LTE_Band30_SUB_0_Freq_SetDefault          23075 
#define ET_LTE_Band30_SUB_1_Freq_SetDefault          23090 
#define ET_LTE_Band30_SUB_2_Freq_SetDefault          23100 
#define ET_LTE_Band30_SUB_3_Freq_SetDefault          23110 
#define ET_LTE_Band30_SUB_4_Freq_SetDefault          23125 
#define ET_LTE_Band30_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band30_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band30_SUB_7_Freq_SetDefault          0     
 

// ET Band 32 Sub-frequency                          
#define ET_LTE_Band32_SUB_0_Freq_SetDefault          0  
#define ET_LTE_Band32_SUB_1_Freq_SetDefault          0     
#define ET_LTE_Band32_SUB_2_Freq_SetDefault          0     
#define ET_LTE_Band32_SUB_3_Freq_SetDefault          0     
#define ET_LTE_Band32_SUB_4_Freq_SetDefault          0     
#define ET_LTE_Band32_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band32_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band32_SUB_7_Freq_SetDefault          0 


// ET Band 34 Sub-frequency                          
#define ET_LTE_Band34_SUB_0_Freq_SetDefault          20125 
#define ET_LTE_Band34_SUB_1_Freq_SetDefault          20150 
#define ET_LTE_Band34_SUB_2_Freq_SetDefault          20175 
#define ET_LTE_Band34_SUB_3_Freq_SetDefault          20200 
#define ET_LTE_Band34_SUB_4_Freq_SetDefault          20225 
#define ET_LTE_Band34_SUB_5_Freq_SetDefault          0     
#define ET_LTE_Band34_SUB_6_Freq_SetDefault          0     
#define ET_LTE_Band34_SUB_7_Freq_SetDefault          0         

// ET Band 38 Sub-frequency                          
#define ET_LTE_Band38_SUB_0_Freq_SetDefault          25725 
#define ET_LTE_Band38_SUB_1_Freq_SetDefault          25800 
#define ET_LTE_Band38_SUB_2_Freq_SetDefault          25860 
#define ET_LTE_Band38_SUB_3_Freq_SetDefault          25920 
#define ET_LTE_Band38_SUB_4_Freq_SetDefault          25980 
#define ET_LTE_Band38_SUB_5_Freq_SetDefault          26040 
#define ET_LTE_Band38_SUB_6_Freq_SetDefault          26100 
#define ET_LTE_Band38_SUB_7_Freq_SetDefault          26175 

// ET Band 39 Sub-frequency                          
#define ET_LTE_Band39_SUB_0_Freq_SetDefault          18825 
#define ET_LTE_Band39_SUB_1_Freq_SetDefault          18875 
#define ET_LTE_Band39_SUB_2_Freq_SetDefault          18925 
#define ET_LTE_Band39_SUB_3_Freq_SetDefault          18975 
#define ET_LTE_Band39_SUB_4_Freq_SetDefault          19025 
#define ET_LTE_Band39_SUB_5_Freq_SetDefault          19075 
#define ET_LTE_Band39_SUB_6_Freq_SetDefault          19125 
#define ET_LTE_Band39_SUB_7_Freq_SetDefault          19175 

// ET Band 40 Sub-frequency                          
#define ET_LTE_Band40_SUB_0_Freq_SetDefault          23025 
#define ET_LTE_Band40_SUB_1_Freq_SetDefault          23160 
#define ET_LTE_Band40_SUB_2_Freq_SetDefault          23295 
#define ET_LTE_Band40_SUB_3_Freq_SetDefault          23430 
#define ET_LTE_Band40_SUB_4_Freq_SetDefault          23570 
#define ET_LTE_Band40_SUB_5_Freq_SetDefault          23705 
#define ET_LTE_Band40_SUB_6_Freq_SetDefault          23840 
#define ET_LTE_Band40_SUB_7_Freq_SetDefault          23975 

// ET Band 41 Sub-frequency                          
#define ET_LTE_Band41_SUB_0_Freq_SetDefault          24985 
#define ET_LTE_Band41_SUB_1_Freq_SetDefault          25255 
#define ET_LTE_Band41_SUB_2_Freq_SetDefault          25525 
#define ET_LTE_Band41_SUB_3_Freq_SetDefault          25795 
#define ET_LTE_Band41_SUB_4_Freq_SetDefault          26065 
#define ET_LTE_Band41_SUB_5_Freq_SetDefault          26335 
#define ET_LTE_Band41_SUB_6_Freq_SetDefault          26605 
#define ET_LTE_Band41_SUB_7_Freq_SetDefault          26875 

// ET Band 42 Sub-frequency                          
#define ET_LTE_Band42_SUB_0_Freq_SetDefault          34025 
#define ET_LTE_Band42_SUB_1_Freq_SetDefault          34305 
#define ET_LTE_Band42_SUB_2_Freq_SetDefault          34585 
#define ET_LTE_Band42_SUB_3_Freq_SetDefault          34865 
#define ET_LTE_Band42_SUB_4_Freq_SetDefault          35135 
#define ET_LTE_Band42_SUB_5_Freq_SetDefault          35415 
#define ET_LTE_Band42_SUB_6_Freq_SetDefault          35695 
#define ET_LTE_Band42_SUB_7_Freq_SetDefault          35975 

// ET Band 43 Sub-frequency                          
#define ET_LTE_Band43_SUB_0_Freq_SetDefault          36025 
#define ET_LTE_Band43_SUB_1_Freq_SetDefault          36305 
#define ET_LTE_Band43_SUB_2_Freq_SetDefault          36585 
#define ET_LTE_Band43_SUB_3_Freq_SetDefault          36865 
#define ET_LTE_Band43_SUB_4_Freq_SetDefault          37135 
#define ET_LTE_Band43_SUB_5_Freq_SetDefault          37415 
#define ET_LTE_Band43_SUB_6_Freq_SetDefault          37695 
#define ET_LTE_Band43_SUB_7_Freq_SetDefault          37975 

// ET Band 44 Sub-frequency
#define ET_LTE_Band44_SUB_0_Freq_SetDefault          7055
#define ET_LTE_Band44_SUB_1_Freq_SetDefault          7190
#define ET_LTE_Band44_SUB_2_Freq_SetDefault          7325
#define ET_LTE_Band44_SUB_3_Freq_SetDefault          7460
#define ET_LTE_Band44_SUB_4_Freq_SetDefault          7600
#define ET_LTE_Band44_SUB_5_Freq_SetDefault          7735
#define ET_LTE_Band44_SUB_6_Freq_SetDefault          7870
#define ET_LTE_Band44_SUB_7_Freq_SetDefault          8005

// ET Band 66 Sub-frequency
#define ET_LTE_Band66_SUB_0_Freq_SetDefault          17125
#define ET_LTE_Band66_SUB_1_Freq_SetDefault          17220
#define ET_LTE_Band66_SUB_2_Freq_SetDefault          17315
#define ET_LTE_Band66_SUB_3_Freq_SetDefault          17410
#define ET_LTE_Band66_SUB_4_Freq_SetDefault          17490
#define ET_LTE_Band66_SUB_5_Freq_SetDefault          17585
#define ET_LTE_Band66_SUB_6_Freq_SetDefault          17680
#define ET_LTE_Band66_SUB_7_Freq_SetDefault          17775

// ET Band 71 Sub-frequency
#define ET_LTE_Band71_SUB_0_Freq_SetDefault          17125
#define ET_LTE_Band71_SUB_1_Freq_SetDefault          17220
#define ET_LTE_Band71_SUB_2_Freq_SetDefault          17315
#define ET_LTE_Band71_SUB_3_Freq_SetDefault          17410
#define ET_LTE_Band71_SUB_4_Freq_SetDefault          17490
#define ET_LTE_Band71_SUB_5_Freq_SetDefault          17585
#define ET_LTE_Band71_SUB_6_Freq_SetDefault          17680
#define ET_LTE_Band71_SUB_7_Freq_SetDefault          17775 

// ET FILTER Band 38 Sub-frequency                        
#define ET_LTE_Band38_FILTER_SUB_0_Freq_SetDefault   25725
#define ET_LTE_Band38_FILTER_SUB_1_Freq_SetDefault   25800
#define ET_LTE_Band38_FILTER_SUB_2_Freq_SetDefault   25860
#define ET_LTE_Band38_FILTER_SUB_3_Freq_SetDefault   25920
#define ET_LTE_Band38_FILTER_SUB_4_Freq_SetDefault   25980
#define ET_LTE_Band38_FILTER_SUB_5_Freq_SetDefault   26040
#define ET_LTE_Band38_FILTER_SUB_6_Freq_SetDefault   26100
#define ET_LTE_Band38_FILTER_SUB_7_Freq_SetDefault   26175
                                                          
// ET FILTER Band 40 Sub-frequency                        
#define ET_LTE_Band40_FILTER_SUB_0_Freq_SetDefault   23025
#define ET_LTE_Band40_FILTER_SUB_1_Freq_SetDefault   23160
#define ET_LTE_Band40_FILTER_SUB_2_Freq_SetDefault   23295
#define ET_LTE_Band40_FILTER_SUB_3_Freq_SetDefault   23430
#define ET_LTE_Band40_FILTER_SUB_4_Freq_SetDefault   23570
#define ET_LTE_Band40_FILTER_SUB_5_Freq_SetDefault   23705
#define ET_LTE_Band40_FILTER_SUB_6_Freq_SetDefault   23840
#define ET_LTE_Band40_FILTER_SUB_7_Freq_SetDefault   23975
                                                          
// ET FILTER Band 41 Sub-frequency                        
#define ET_LTE_Band41_FILTER_SUB_0_Freq_SetDefault   24985
#define ET_LTE_Band41_FILTER_SUB_1_Freq_SetDefault   25255
#define ET_LTE_Band41_FILTER_SUB_2_Freq_SetDefault   25525
#define ET_LTE_Band41_FILTER_SUB_3_Freq_SetDefault   25795
#define ET_LTE_Band41_FILTER_SUB_4_Freq_SetDefault   26065
#define ET_LTE_Band41_FILTER_SUB_5_Freq_SetDefault   26335
#define ET_LTE_Band41_FILTER_SUB_6_Freq_SetDefault   26605
#define ET_LTE_Band41_FILTER_SUB_7_Freq_SetDefault   26875

// ET Band 1 CCA Sub-frequency   
#define ET_LTE_Band1_CCA_SUB_0_Freq_SetDefault       19225 
#define ET_LTE_Band1_CCA_SUB_1_Freq_SetDefault       19305 
#define ET_LTE_Band1_CCA_SUB_2_Freq_SetDefault       19385 
#define ET_LTE_Band1_CCA_SUB_3_Freq_SetDefault       19465 
#define ET_LTE_Band1_CCA_SUB_4_Freq_SetDefault       19535 
#define ET_LTE_Band1_CCA_SUB_5_Freq_SetDefault       19615 
#define ET_LTE_Band1_CCA_SUB_6_Freq_SetDefault       19695 
#define ET_LTE_Band1_CCA_SUB_7_Freq_SetDefault       19775 

// ET Band 2 CCA Sub-frequency   
#define ET_LTE_Band2_CCA_SUB_0_Freq_SetDefault       18525 
#define ET_LTE_Band2_CCA_SUB_1_Freq_SetDefault       18605 
#define ET_LTE_Band2_CCA_SUB_2_Freq_SetDefault       18685 
#define ET_LTE_Band2_CCA_SUB_3_Freq_SetDefault       18765 
#define ET_LTE_Band2_CCA_SUB_4_Freq_SetDefault       18835 
#define ET_LTE_Band2_CCA_SUB_5_Freq_SetDefault       18915 
#define ET_LTE_Band2_CCA_SUB_6_Freq_SetDefault       18995 
#define ET_LTE_Band2_CCA_SUB_7_Freq_SetDefault       19075 

// ET Band 3 CCA Sub-frequency   
#define ET_LTE_Band3_CCA_SUB_0_Freq_SetDefault       17125 
#define ET_LTE_Band3_CCA_SUB_1_Freq_SetDefault       17225 
#define ET_LTE_Band3_CCA_SUB_2_Freq_SetDefault       17325 
#define ET_LTE_Band3_CCA_SUB_3_Freq_SetDefault       17425 
#define ET_LTE_Band3_CCA_SUB_4_Freq_SetDefault       17525 
#define ET_LTE_Band3_CCA_SUB_5_Freq_SetDefault       17625 
#define ET_LTE_Band3_CCA_SUB_6_Freq_SetDefault       17725 
#define ET_LTE_Band3_CCA_SUB_7_Freq_SetDefault       17825 

// ET Band 4 CCA Sub-frequency   
#define ET_LTE_Band4_CCA_SUB_0_Freq_SetDefault       17125 
#define ET_LTE_Band4_CCA_SUB_1_Freq_SetDefault       17225 
#define ET_LTE_Band4_CCA_SUB_2_Freq_SetDefault       17325 
#define ET_LTE_Band4_CCA_SUB_3_Freq_SetDefault       17425 
#define ET_LTE_Band4_CCA_SUB_4_Freq_SetDefault       17525 
#define ET_LTE_Band4_CCA_SUB_5_Freq_SetDefault       0 
#define ET_LTE_Band4_CCA_SUB_6_Freq_SetDefault       0 
#define ET_LTE_Band4_CCA_SUB_7_Freq_SetDefault       0 

// ET Band 5 CCA Sub-frequency   
#define ET_LTE_Band5_CCA_SUB_0_Freq_SetDefault       8265  
#define ET_LTE_Band5_CCA_SUB_1_Freq_SetDefault       8315  
#define ET_LTE_Band5_CCA_SUB_2_Freq_SetDefault       8365  
#define ET_LTE_Band5_CCA_SUB_3_Freq_SetDefault       8415  
#define ET_LTE_Band5_CCA_SUB_4_Freq_SetDefault       8465  
#define ET_LTE_Band5_CCA_SUB_5_Freq_SetDefault       0 
#define ET_LTE_Band5_CCA_SUB_6_Freq_SetDefault       0 
#define ET_LTE_Band5_CCA_SUB_7_Freq_SetDefault       0 

// ET Band 6 CCA Sub-frequency   
#define ET_LTE_Band6_CCA_SUB_0_Freq_SetDefault       8325  
#define ET_LTE_Band6_CCA_SUB_1_Freq_SetDefault       8340  
#define ET_LTE_Band6_CCA_SUB_2_Freq_SetDefault       8350  
#define ET_LTE_Band6_CCA_SUB_3_Freq_SetDefault       8360  
#define ET_LTE_Band6_CCA_SUB_4_Freq_SetDefault       8375  
#define ET_LTE_Band6_CCA_SUB_5_Freq_SetDefault       0 
#define ET_LTE_Band6_CCA_SUB_6_Freq_SetDefault       0 
#define ET_LTE_Band6_CCA_SUB_7_Freq_SetDefault       0 

// ET Band 7 CCA Sub-frequency   
#define ET_LTE_Band7_CCA_SUB_0_Freq_SetDefault       25025 
#define ET_LTE_Band7_CCA_SUB_1_Freq_SetDefault       25110 
#define ET_LTE_Band7_CCA_SUB_2_Freq_SetDefault       25210 
#define ET_LTE_Band7_CCA_SUB_3_Freq_SetDefault       25300 
#define ET_LTE_Band7_CCA_SUB_4_Freq_SetDefault       25400 
#define ET_LTE_Band7_CCA_SUB_5_Freq_SetDefault       25490 
#define ET_LTE_Band7_CCA_SUB_6_Freq_SetDefault       25590 
#define ET_LTE_Band7_CCA_SUB_7_Freq_SetDefault       25675 

// ET Band 8 CCA Sub-frequency   
#define ET_LTE_Band8_CCA_SUB_0_Freq_SetDefault       8825  
#define ET_LTE_Band8_CCA_SUB_1_Freq_SetDefault       8860  
#define ET_LTE_Band8_CCA_SUB_2_Freq_SetDefault       8900  
#define ET_LTE_Band8_CCA_SUB_3_Freq_SetDefault       8950  
#define ET_LTE_Band8_CCA_SUB_4_Freq_SetDefault       9000  
#define ET_LTE_Band8_CCA_SUB_5_Freq_SetDefault       9050  
#define ET_LTE_Band8_CCA_SUB_6_Freq_SetDefault       9090  
#define ET_LTE_Band8_CCA_SUB_7_Freq_SetDefault       9125  

// ET Band 9 CCA Sub-frequency   
#define ET_LTE_Band9_CCA_SUB_0_Freq_SetDefault       17524 
#define ET_LTE_Band9_CCA_SUB_1_Freq_SetDefault       17569 
#define ET_LTE_Band9_CCA_SUB_2_Freq_SetDefault       17614 
#define ET_LTE_Band9_CCA_SUB_3_Freq_SetDefault       17659 
#define ET_LTE_Band9_CCA_SUB_4_Freq_SetDefault       17689 
#define ET_LTE_Band9_CCA_SUB_5_Freq_SetDefault       17734 
#define ET_LTE_Band9_CCA_SUB_6_Freq_SetDefault       17779 
#define ET_LTE_Band9_CCA_SUB_7_Freq_SetDefault       17824 

// ET Band 11 CCA Sub-frequency  
#define ET_LTE_Band11_CCA_SUB_0_Freq_SetDefault      14304 
#define ET_LTE_Band11_CCA_SUB_1_Freq_SetDefault      14341 
#define ET_LTE_Band11_CCA_SUB_2_Freq_SetDefault      14379 
#define ET_LTE_Band11_CCA_SUB_3_Freq_SetDefault      14417 
#define ET_LTE_Band11_CCA_SUB_4_Freq_SetDefault      14454 
#define ET_LTE_Band11_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band11_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band11_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 12 CCA Sub-frequency  
#define ET_LTE_Band12_CCA_SUB_0_Freq_SetDefault      7015  
#define ET_LTE_Band12_CCA_SUB_1_Freq_SetDefault      7045  
#define ET_LTE_Band12_CCA_SUB_2_Freq_SetDefault      7075  
#define ET_LTE_Band12_CCA_SUB_3_Freq_SetDefault      7105  
#define ET_LTE_Band12_CCA_SUB_4_Freq_SetDefault      7135  
#define ET_LTE_Band12_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band12_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band12_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 13 CCA Sub-frequency  
#define ET_LTE_Band13_CCA_SUB_0_Freq_SetDefault      7795  
#define ET_LTE_Band13_CCA_SUB_1_Freq_SetDefault      7810  
#define ET_LTE_Band13_CCA_SUB_2_Freq_SetDefault      7820  
#define ET_LTE_Band13_CCA_SUB_3_Freq_SetDefault      7830  
#define ET_LTE_Band13_CCA_SUB_4_Freq_SetDefault      7845  
#define ET_LTE_Band13_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band13_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band13_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 17 CCA Sub-frequency  
#define ET_LTE_Band17_CCA_SUB_0_Freq_SetDefault      7065  
#define ET_LTE_Band17_CCA_SUB_1_Freq_SetDefault      7090  
#define ET_LTE_Band17_CCA_SUB_2_Freq_SetDefault      7100  
#define ET_LTE_Band17_CCA_SUB_3_Freq_SetDefault      7110  
#define ET_LTE_Band17_CCA_SUB_4_Freq_SetDefault      7135  
#define ET_LTE_Band17_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band17_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band17_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 18 CCA Sub-frequency  
#define ET_LTE_Band18_CCA_SUB_0_Freq_SetDefault      8175  
#define ET_LTE_Band18_CCA_SUB_1_Freq_SetDefault      8225  
#define ET_LTE_Band18_CCA_SUB_2_Freq_SetDefault      8275  
#define ET_LTE_Band18_CCA_SUB_3_Freq_SetDefault      0 
#define ET_LTE_Band18_CCA_SUB_4_Freq_SetDefault      0 
#define ET_LTE_Band18_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band18_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band18_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 19 CCA Sub-frequency  
#define ET_LTE_Band19_CCA_SUB_0_Freq_SetDefault      8325  
#define ET_LTE_Band19_CCA_SUB_1_Freq_SetDefault      8350  
#define ET_LTE_Band19_CCA_SUB_2_Freq_SetDefault      8375  
#define ET_LTE_Band19_CCA_SUB_3_Freq_SetDefault      8400  
#define ET_LTE_Band19_CCA_SUB_4_Freq_SetDefault      8425  
#define ET_LTE_Band19_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band19_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band19_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 20 CCA Sub-frequency  
#define ET_LTE_Band20_CCA_SUB_0_Freq_SetDefault      8345  
#define ET_LTE_Band20_CCA_SUB_1_Freq_SetDefault      8380  
#define ET_LTE_Band20_CCA_SUB_2_Freq_SetDefault      8415  
#define ET_LTE_Band20_CCA_SUB_3_Freq_SetDefault      8450  
#define ET_LTE_Band20_CCA_SUB_4_Freq_SetDefault      8490  
#define ET_LTE_Band20_CCA_SUB_5_Freq_SetDefault      8525  
#define ET_LTE_Band20_CCA_SUB_6_Freq_SetDefault      8560  
#define ET_LTE_Band20_CCA_SUB_7_Freq_SetDefault      8595  

// ET Band 21 CCA Sub-frequency  
#define ET_LTE_Band21_CCA_SUB_0_Freq_SetDefault      14504 
#define ET_LTE_Band21_CCA_SUB_1_Freq_SetDefault      14529 
#define ET_LTE_Band21_CCA_SUB_2_Freq_SetDefault      14554 
#define ET_LTE_Band21_CCA_SUB_3_Freq_SetDefault      14579 
#define ET_LTE_Band21_CCA_SUB_4_Freq_SetDefault      14604 
#define ET_LTE_Band21_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band21_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band21_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 22 CCA Sub-frequency  
#define ET_LTE_Band22_CCA_SUB_0_Freq_SetDefault      34125 
#define ET_LTE_Band22_CCA_SUB_1_Freq_SetDefault      34230 
#define ET_LTE_Band22_CCA_SUB_2_Freq_SetDefault      34335 
#define ET_LTE_Band22_CCA_SUB_3_Freq_SetDefault      34440 
#define ET_LTE_Band22_CCA_SUB_4_Freq_SetDefault      34560 
#define ET_LTE_Band22_CCA_SUB_5_Freq_SetDefault      34665 
#define ET_LTE_Band22_CCA_SUB_6_Freq_SetDefault      34770 
#define ET_LTE_Band22_CCA_SUB_7_Freq_SetDefault      34875 

// ET Band 25 CCA Sub-frequency  
#define ET_LTE_Band25_CCA_SUB_0_Freq_SetDefault      18525 
#define ET_LTE_Band25_CCA_SUB_1_Freq_SetDefault      18615 
#define ET_LTE_Band25_CCA_SUB_2_Freq_SetDefault      18705 
#define ET_LTE_Band25_CCA_SUB_3_Freq_SetDefault      18795 
#define ET_LTE_Band25_CCA_SUB_4_Freq_SetDefault      18855 
#define ET_LTE_Band25_CCA_SUB_5_Freq_SetDefault      18945 
#define ET_LTE_Band25_CCA_SUB_6_Freq_SetDefault      19035 
#define ET_LTE_Band25_CCA_SUB_7_Freq_SetDefault      19125 

// ET Band 26 CCA Sub-frequency  
#define ET_LTE_Band26_CCA_SUB_0_Freq_SetDefault      8165  
#define ET_LTE_Band26_CCA_SUB_1_Freq_SetDefault      8190  
#define ET_LTE_Band26_CCA_SUB_2_Freq_SetDefault      8240  
#define ET_LTE_Band26_CCA_SUB_3_Freq_SetDefault      8290  
#define ET_LTE_Band26_CCA_SUB_4_Freq_SetDefault      8340  
#define ET_LTE_Band26_CCA_SUB_5_Freq_SetDefault      8390  
#define ET_LTE_Band26_CCA_SUB_6_Freq_SetDefault      8440  
#define ET_LTE_Band26_CCA_SUB_7_Freq_SetDefault      8465  

// ET Band 27 CCA Sub-frequency  
#define ET_LTE_Band27_CCA_SUB_0_Freq_SetDefault      8095  
#define ET_LTE_Band27_CCA_SUB_1_Freq_SetDefault      8125  
#define ET_LTE_Band27_CCA_SUB_2_Freq_SetDefault      8155  
#define ET_LTE_Band27_CCA_SUB_3_Freq_SetDefault      8185  
#define ET_LTE_Band27_CCA_SUB_4_Freq_SetDefault      8215  
#define ET_LTE_Band27_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band27_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band27_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 28 CCA Sub-frequency  
#define ET_LTE_Band28_CCA_SUB_0_Freq_SetDefault      7055  
#define ET_LTE_Band28_CCA_SUB_1_Freq_SetDefault      7160  
#define ET_LTE_Band28_CCA_SUB_2_Freq_SetDefault      7220  
#define ET_LTE_Band28_CCA_SUB_3_Freq_SetDefault      7255  
#define ET_LTE_Band28_CCA_SUB_4_Freq_SetDefault      7256  
#define ET_LTE_Band28_CCA_SUB_5_Freq_SetDefault      7290  
#define ET_LTE_Band28_CCA_SUB_6_Freq_SetDefault      7350  
#define ET_LTE_Band28_CCA_SUB_7_Freq_SetDefault      7455  

// ET Band 29 CCA Sub-frequency  
#define ET_LTE_Band29_CCA_SUB_0_Freq_SetDefault      0 
#define ET_LTE_Band29_CCA_SUB_1_Freq_SetDefault      0 
#define ET_LTE_Band29_CCA_SUB_2_Freq_SetDefault      0 
#define ET_LTE_Band29_CCA_SUB_3_Freq_SetDefault      0 
#define ET_LTE_Band29_CCA_SUB_4_Freq_SetDefault      0 
#define ET_LTE_Band29_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band29_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band29_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 30 CCA Sub-frequency  
#define ET_LTE_Band30_CCA_SUB_0_Freq_SetDefault      23075 
#define ET_LTE_Band30_CCA_SUB_1_Freq_SetDefault      23090 
#define ET_LTE_Band30_CCA_SUB_2_Freq_SetDefault      23100 
#define ET_LTE_Band30_CCA_SUB_3_Freq_SetDefault      23110 
#define ET_LTE_Band30_CCA_SUB_4_Freq_SetDefault      23125 
#define ET_LTE_Band30_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band30_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band30_CCA_SUB_7_Freq_SetDefault      0 



// ET Band 32 CCA Sub-frequency  
#define ET_LTE_Band32_CCA_SUB_0_Freq_SetDefault      0  
#define ET_LTE_Band32_CCA_SUB_1_Freq_SetDefault      0 
#define ET_LTE_Band32_CCA_SUB_2_Freq_SetDefault      0 
#define ET_LTE_Band32_CCA_SUB_3_Freq_SetDefault      0 
#define ET_LTE_Band32_CCA_SUB_4_Freq_SetDefault      0 
#define ET_LTE_Band32_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band32_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band32_CCA_SUB_7_Freq_SetDefault      0 


// ET Band 34 CCA Sub-frequency  
#define ET_LTE_Band34_CCA_SUB_0_Freq_SetDefault      20125 
#define ET_LTE_Band34_CCA_SUB_1_Freq_SetDefault      20150 
#define ET_LTE_Band34_CCA_SUB_2_Freq_SetDefault      20175 
#define ET_LTE_Band34_CCA_SUB_3_Freq_SetDefault      20200 
#define ET_LTE_Band34_CCA_SUB_4_Freq_SetDefault      20225 
#define ET_LTE_Band34_CCA_SUB_5_Freq_SetDefault      0 
#define ET_LTE_Band34_CCA_SUB_6_Freq_SetDefault      0 
#define ET_LTE_Band34_CCA_SUB_7_Freq_SetDefault      0 

// ET Band 38 CCA Sub-frequency  
#define ET_LTE_Band38_CCA_SUB_0_Freq_SetDefault      25725 
#define ET_LTE_Band38_CCA_SUB_1_Freq_SetDefault      25800 
#define ET_LTE_Band38_CCA_SUB_2_Freq_SetDefault      25860 
#define ET_LTE_Band38_CCA_SUB_3_Freq_SetDefault      25920 
#define ET_LTE_Band38_CCA_SUB_4_Freq_SetDefault      25980 
#define ET_LTE_Band38_CCA_SUB_5_Freq_SetDefault      26040 
#define ET_LTE_Band38_CCA_SUB_6_Freq_SetDefault      26100 
#define ET_LTE_Band38_CCA_SUB_7_Freq_SetDefault      26175 

// ET Band 39 CCA Sub-frequency  
#define ET_LTE_Band39_CCA_SUB_0_Freq_SetDefault      18825 
#define ET_LTE_Band39_CCA_SUB_1_Freq_SetDefault      18875 
#define ET_LTE_Band39_CCA_SUB_2_Freq_SetDefault      18925 
#define ET_LTE_Band39_CCA_SUB_3_Freq_SetDefault      18975 
#define ET_LTE_Band39_CCA_SUB_4_Freq_SetDefault      19025 
#define ET_LTE_Band39_CCA_SUB_5_Freq_SetDefault      19075 
#define ET_LTE_Band39_CCA_SUB_6_Freq_SetDefault      19125 
#define ET_LTE_Band39_CCA_SUB_7_Freq_SetDefault      19175 

// ET Band 40 CCA Sub-frequency  
#define ET_LTE_Band40_CCA_SUB_0_Freq_SetDefault      23025 
#define ET_LTE_Band40_CCA_SUB_1_Freq_SetDefault      23160 
#define ET_LTE_Band40_CCA_SUB_2_Freq_SetDefault      23295 
#define ET_LTE_Band40_CCA_SUB_3_Freq_SetDefault      23430 
#define ET_LTE_Band40_CCA_SUB_4_Freq_SetDefault      23570 
#define ET_LTE_Band40_CCA_SUB_5_Freq_SetDefault      23705 
#define ET_LTE_Band40_CCA_SUB_6_Freq_SetDefault      23840 
#define ET_LTE_Band40_CCA_SUB_7_Freq_SetDefault      23975 

// ET Band 41 CCA Sub-frequency  
#define ET_LTE_Band41_CCA_SUB_0_Freq_SetDefault      24985 
#define ET_LTE_Band41_CCA_SUB_1_Freq_SetDefault      25255 
#define ET_LTE_Band41_CCA_SUB_2_Freq_SetDefault      25525 
#define ET_LTE_Band41_CCA_SUB_3_Freq_SetDefault      25795 
#define ET_LTE_Band41_CCA_SUB_4_Freq_SetDefault      26065 
#define ET_LTE_Band41_CCA_SUB_5_Freq_SetDefault      26335 
#define ET_LTE_Band41_CCA_SUB_6_Freq_SetDefault      26605 
#define ET_LTE_Band41_CCA_SUB_7_Freq_SetDefault      26875 

// ET Band 42 CCA Sub-frequency  
#define ET_LTE_Band42_CCA_SUB_0_Freq_SetDefault      34025 
#define ET_LTE_Band42_CCA_SUB_1_Freq_SetDefault      34305 
#define ET_LTE_Band42_CCA_SUB_2_Freq_SetDefault      34585 
#define ET_LTE_Band42_CCA_SUB_3_Freq_SetDefault      34865 
#define ET_LTE_Band42_CCA_SUB_4_Freq_SetDefault      35135 
#define ET_LTE_Band42_CCA_SUB_5_Freq_SetDefault      35415 
#define ET_LTE_Band42_CCA_SUB_6_Freq_SetDefault      35695 
#define ET_LTE_Band42_CCA_SUB_7_Freq_SetDefault      35975 

// ET Band 43 CCA Sub-frequency  
#define ET_LTE_Band43_CCA_SUB_0_Freq_SetDefault      36025 
#define ET_LTE_Band43_CCA_SUB_1_Freq_SetDefault      36305 
#define ET_LTE_Band43_CCA_SUB_2_Freq_SetDefault      36585 
#define ET_LTE_Band43_CCA_SUB_3_Freq_SetDefault      36865 
#define ET_LTE_Band43_CCA_SUB_4_Freq_SetDefault      37135 
#define ET_LTE_Band43_CCA_SUB_5_Freq_SetDefault      37415 
#define ET_LTE_Band43_CCA_SUB_6_Freq_SetDefault      37695 
#define ET_LTE_Band43_CCA_SUB_7_Freq_SetDefault      37975 

// ET Band 44 CCA Sub-frequency
#define ET_LTE_Band44_CCA_SUB_0_Freq_SetDefault      7055
#define ET_LTE_Band44_CCA_SUB_1_Freq_SetDefault      7190
#define ET_LTE_Band44_CCA_SUB_2_Freq_SetDefault      7325
#define ET_LTE_Band44_CCA_SUB_3_Freq_SetDefault      7460
#define ET_LTE_Band44_CCA_SUB_4_Freq_SetDefault      7600
#define ET_LTE_Band44_CCA_SUB_5_Freq_SetDefault      7735
#define ET_LTE_Band44_CCA_SUB_6_Freq_SetDefault      7870
#define ET_LTE_Band44_CCA_SUB_7_Freq_SetDefault      8005

// ET Band 66 CCA Sub-frequency
#define ET_LTE_Band66_CCA_SUB_0_Freq_SetDefault      17125
#define ET_LTE_Band66_CCA_SUB_1_Freq_SetDefault      17220
#define ET_LTE_Band66_CCA_SUB_2_Freq_SetDefault      17315
#define ET_LTE_Band66_CCA_SUB_3_Freq_SetDefault      17410
#define ET_LTE_Band66_CCA_SUB_4_Freq_SetDefault      17490
#define ET_LTE_Band66_CCA_SUB_5_Freq_SetDefault      17585
#define ET_LTE_Band66_CCA_SUB_6_Freq_SetDefault      17680
#define ET_LTE_Band66_CCA_SUB_7_Freq_SetDefault      17775

// ET Band 71 CCA Sub-frequency
#define ET_LTE_Band71_CCA_SUB_0_Freq_SetDefault      17125
#define ET_LTE_Band71_CCA_SUB_1_Freq_SetDefault      17220
#define ET_LTE_Band71_CCA_SUB_2_Freq_SetDefault      17315
#define ET_LTE_Band71_CCA_SUB_3_Freq_SetDefault      17410
#define ET_LTE_Band71_CCA_SUB_4_Freq_SetDefault      17490
#define ET_LTE_Band71_CCA_SUB_5_Freq_SetDefault      17585
#define ET_LTE_Band71_CCA_SUB_6_Freq_SetDefault      17680
#define ET_LTE_Band71_CCA_SUB_7_Freq_SetDefault      17775

// ET FILTER Band 38 CCA Sub-frequency
#define ET_LTE_Band38_FILTER_CCA_SUB_0_Freq_SetDefault       25725
#define ET_LTE_Band38_FILTER_CCA_SUB_1_Freq_SetDefault       25800
#define ET_LTE_Band38_FILTER_CCA_SUB_2_Freq_SetDefault       25860
#define ET_LTE_Band38_FILTER_CCA_SUB_3_Freq_SetDefault       25920
#define ET_LTE_Band38_FILTER_CCA_SUB_4_Freq_SetDefault       25980
#define ET_LTE_Band38_FILTER_CCA_SUB_5_Freq_SetDefault       26040
#define ET_LTE_Band38_FILTER_CCA_SUB_6_Freq_SetDefault       26100
#define ET_LTE_Band38_FILTER_CCA_SUB_7_Freq_SetDefault       26175
  
// ET FILTER Band 40 CCA Sub-frequency
#define ET_LTE_Band40_FILTER_CCA_SUB_0_Freq_SetDefault       23025
#define ET_LTE_Band40_FILTER_CCA_SUB_1_Freq_SetDefault       23160
#define ET_LTE_Band40_FILTER_CCA_SUB_2_Freq_SetDefault       23295
#define ET_LTE_Band40_FILTER_CCA_SUB_3_Freq_SetDefault       23430
#define ET_LTE_Band40_FILTER_CCA_SUB_4_Freq_SetDefault       23570
#define ET_LTE_Band40_FILTER_CCA_SUB_5_Freq_SetDefault       23705
#define ET_LTE_Band40_FILTER_CCA_SUB_6_Freq_SetDefault       23840
#define ET_LTE_Band40_FILTER_CCA_SUB_7_Freq_SetDefault       23975
  
// ET FILTER Band 41 CCA Sub-frequency
#define ET_LTE_Band41_FILTER_CCA_SUB_0_Freq_SetDefault       24985
#define ET_LTE_Band41_FILTER_CCA_SUB_1_Freq_SetDefault       25255
#define ET_LTE_Band41_FILTER_CCA_SUB_2_Freq_SetDefault       25525
#define ET_LTE_Band41_FILTER_CCA_SUB_3_Freq_SetDefault       25795
#define ET_LTE_Band41_FILTER_CCA_SUB_4_Freq_SetDefault       26065
#define ET_LTE_Band41_FILTER_CCA_SUB_5_Freq_SetDefault       26335
#define ET_LTE_Band41_FILTER_CCA_SUB_6_Freq_SetDefault       26605
#define ET_LTE_Band41_FILTER_CCA_SUB_7_Freq_SetDefault       26875

/* ================================================================================================== */
/*   LTE ET TX_ON / TX_OFF / TPC Event Timing Offset Settings                                                                                                                                     */
/* ================================================================================================== */
#define TX_ON_SEQUENCE_END_TIMING_SetDefault                                    US2OFFCNT( 70 )   // The end point of TX_ON sequence.
#define TIME_DURATION_BETWEEN_WARM_UP_AND_END_TIMING_SetDefault                 US2OFFCNT( 25 )
#define TIME_DURATION_BETWEEN_BIAS_EN_AND_BANK_EN_SetDefault                    US2OFFCNT( 25 )
#define TIME_DURATION_BETWEEN_BIAS_EN_AND_BANK_EN0_SetDefault                   US2OFFCNT( 2 )

#define LTE_ET_TX_ON1_SetDefault                                                ( TX_ON_SEQUENCE_END_TIMING_SetDefault + TIME_DURATION_BETWEEN_WARM_UP_AND_END_TIMING_SetDefault )   //  95                                             //  95
#define LTE_ET_TX_ON0_SetDefault                                                ( LTE_ET_TX_ON1_SetDefault             + TIME_DURATION_BETWEEN_BIAS_EN_AND_BANK_EN_SetDefault    )   // 120
#define LTE_ET_TX_ON00_SetDefault                                               ( LTE_ET_TX_ON0_SetDefault             + TIME_DURATION_BETWEEN_BIAS_EN_AND_BANK_EN0_SetDefault   )   // 122


#define LTE_ET_TX_OFF0_SetDefault                                               US2OFFCNT(  0 )

#define LTE_ETM_TPC_E0_SPENT_TIME_SetDefault                                    US2OFFCNT(  5 )
#define LTE_ETM_TPC_E1_SPENT_TIME_SetDefault                                    US2OFFCNT(  5 )
#define LTE_ETM_TPC_SEQUENCE_END_TIMING_SetDefault                              US2OFFCNT( 28 )

#define LTE_ET_TPC_OFFSET_SetDefault                                            ( LTE_ETM_TPC_SEQUENCE_END_TIMING_SetDefault )
#define LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault                                 ( LTE_ET_TPC_OFFSET_SetDefault               + LTE_ETM_TPC_E1_SPENT_TIME_SetDefault )
#define LTE_ET_BANK_PRELOAD_OFFSET_1_SetDefault                                 ( LTE_ET_BANK_PRELOAD_OFFSET_2_SetDefault    + LTE_ETM_TPC_E0_SPENT_TIME_SetDefault )

/* ================================================================================================== */
/*   LTE ET TX_ON / TX_OFF / TPC Data Start and End Settings                                                                                                                                     */
/* ================================================================================================== */
#define LTE_ET_TX_ON_DATA_START_ADDRESS_0_SetDefault                            (  0 )
#define LTE_ET_TX_ON_DATA_STOP_ADDRESS_0_SetDefault                             (  0 )

#define LTE_ET_TX_ON_DATA_START_ADDRESS_1_SetDefault                            (  1 )
#define LTE_ET_TX_ON_DATA_STOP_ADDRESS_1_SetDefault                             (  5 )

#define LTE_ET_TX_ON_DATA_START_ADDRESS_2_SetDefault                            (  6 )
#define LTE_ET_TX_ON_DATA_STOP_ADDRESS_2_SetDefault                             (  6 )

#define LTE_ET_TX_OFF_DATA_START_ADDRESS_SetDefault                             (  7 )
#define LTE_ET_TX_OFF_DATA_STOP_ADDRESS_SetDefault                              (  9 )


#define LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_1_SetDefault                      (  0 )
#define LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_1_SetDefault                       (  3 )

#define LTE_ET_TPC_BANK_PRELOAD_START_ADDRESS_2_SetDefault                      (  4 )
#define LTE_ET_TPC_BANK_PRELOAD_STOP_ADDRESS_2_SetDefault                       (  8 )

#define LTE_ET_TPC_BANK_SWITCH_START_ADDRESS_SetDefault                         (  9 )
#define LTE_ET_TPC_BANK_SWITCH_STOP_ADDRESS_SetDefault                          (  9 )

/* ================================================================================================== */
/*   LTE ET Global Register Settings                                                                                                                                                                               */
/* ================================================================================================== */
#define LTE_ET_HFP_DAC_THRESHOLD1_SetDefault                                    LTE_ET_MT6303_HFP_DAC_THRESHOLD1
#define LTE_ET_HFP_DAC_THRESHOLD2_SetDefault                                    LTE_ET_MT6303_HFP_DAC_THRESHOLD2
#define LTE_ET_HFP_DAC_THRESHOLD3_SetDefault                                    LTE_ET_MT6303_HFP_DAC_THRESHOLD3

#define LTE_ET_HFP_EA_RSS_LEVEL0_SetDefault                                     LTE_ET_MT6303_HFP_EA_RSS_LEVEL0
#define LTE_ET_HFP_EA_RSS_LEVEL1_SetDefault                                     LTE_ET_MT6303_HFP_EA_RSS_LEVEL1
#define LTE_ET_HFP_EA_RSS_LEVEL2_SetDefault                                     LTE_ET_MT6303_HFP_EA_RSS_LEVEL2
#define LTE_ET_HFP_EA_RSS_LEVEL3_SetDefault                                     LTE_ET_MT6303_HFP_EA_RSS_LEVEL3



#define LTE_ET_RG_HFP_BYPASS_EN_SETTING_ET_MODE_SetDefault                      ET_MT6303_RG_HFP_BYPASS_DISABLE
#define LTE_ET_RG_HFP_AUTO_BYPASS_EN_SETTING_ET_MODE_SetDefault                 ET_MT6303_RG_HFP_AUTO_BYPASS_DISABLE
#define LTE_ET_RG_HFP_FPWM_SETTING_ET_MODE_SetDefault                           ET_MT6303_RG_HFP_FPWM_ENABLE
#define LTE_ET_RG_LFP_FPWM_SETTING_ET_MODE_SetDefault                           ET_MT6303_RG_LFP_FPWM_ENABLE
#define LTE_ET_RG_LFP_EN_SETTING_ET_MODE_SetDefault                             ET_MT6303_RG_LFP_ENABLE
#define LTE_ET_RG_HFP_EN_SETTING_ET_MODE_SetDefault                             ET_MT6303_RG_HFP_ENABLE
#define LTE_ET_RG_ET_MODE_SETTING_ET_MODE_SetDefault                            ET_MT6303_RG_ET_MODE_ENABLE



#define LTE_ET_RG_HFP_BYPASS_EN_SETTING_APT_MODE_SetDefault                     ET_MT6303_RG_HFP_BYPASS_DISABLE
#define LTE_ET_RG_HFP_AUTO_BYPASS_EN_SETTING_APT_MODE_SetDefault                ET_MT6303_RG_HFP_AUTO_BYPASS_DISABLE
#define LTE_ET_RG_HFP_FPWM_SETTING_APT_MODE_SetDefault                          ET_MT6303_RG_HFP_FPWM_ENABLE
#define LTE_ET_RG_LFP_FPWM_SETTING_APT_MODE_SetDefault                          ET_MT6303_RG_LFP_FPWM_DISABLE
#define LTE_ET_RG_LFP_EN_SETTING_APT_MODE_SetDefault                            ET_MT6303_RG_LFP_DISABLE
#define LTE_ET_RG_HFP_EN_SETTING_APT_MODE_SetDefault                            ET_MT6303_RG_HFP_ENABLE
#define LTE_ET_RG_ET_MODE_SETTING_APT_MODE_SetDefault                           ET_MT6303_RG_ET_MODE_DISABLE

#define LTE_ET_RG09_SETTING_DISABLE_SetDefault                                  ( 0x00 )

#define LTE_ET_LFP_PWRSEL_MODE_APT_MODE_SetDefault                              ET_MT6303_LFP_PWRSEL_MODE_FROM_BATTERY
#define LTE_ET_LFP_PWRSEL_MODE_ET_MODE_SetDefault                               ET_MT6303_LFP_PWRSEL_MODE_FROM_BATTERY

//ET PA SECTION DATA PATTERN
#define LTE_ET_SEC_DATA0              0x2000
#define LTE_ET_SEC_DATA1              0x2001
#define LTE_ET_SEC_DATA2              0x2002
#define LTE_ET_SEC_DATA3              0x2003
#define LTE_ET_SEC_DATA4              0x2004

/* ================================================================================================== */
/*   LTE ET TX_ON / TX_OFF Data Table Settings                                                                                                                                                           */
/* ================================================================================================== */
#define LTE_ET_TX_ON_BIAS_ENABLE_DATA_SetDefault                                ( 0x70 )
#define LTE_ET_TX_ON_REG_BANK_WRITE_SELECTION_SetDefault                        ( 0x00 )

#define LTE_ET_TX_ON_BANK_ENABLE_DATA_SetDefault                                ( 0x74 )
#define LTE_ET_TX_OFF_BIAS_DISABLE_DATA_SetDefault                              ( 0x00 )

#define LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault                       ( 0x8C )   // LTE ETM Warm-Up Voltage Settings

/* ================================================================================================== */
/*   LTE ET TPC Data Table Settings                                                                                                                                                                              */
/* ================================================================================================== */
#define LTE_ET_TPC_RG_BK_WR_SEL_DEFAULT_SETTING_SetDefault                      ( 0x00 )
 
#define LTE_ET_TPC_SECTION_DATA1_LEVEL0_SetDefault                              ( 0x14 )
#define LTE_ET_TPC_SECTION_DATA1_LEVEL1_SetDefault                              ( 0x1E )
#define LTE_ET_TPC_SECTION_DATA1_LEVEL2_SetDefault                              ( 0x23 )
#define LTE_ET_TPC_SECTION_DATA1_LEVEL3_SetDefault                              ( 0x28 )
#define LTE_ET_TPC_SECTION_DATA1_LEVEL4_SetDefault                              ( 0x32 )
#define LTE_ET_TPC_SECTION_DATA1_LEVEL5_SetDefault                              ( 0x3C )
#define LTE_ET_TPC_SECTION_DATA1_LEVEL6_SetDefault                              ( 0x46 )
#define LTE_ET_TPC_SECTION_DATA1_LEVEL7_SetDefault                              ( 0x55 )
#define LTE_ET_TPC_SECTION_DATA1_LEVEL8_SetDefault                              ( LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault )   // SRS Blanking

/* ================================================================================================== */
/*   LTE ET VPA LUT  Data Table Settings                                                                                                                                                                       */
/* ================================================================================================== */
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL0_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL1_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL2_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL3_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL4_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL5_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL6_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL7_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL8_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL9_SetDefault                          0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL10_SetDefault                         0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL11_SetDefault                         0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL12_SetDefault                         0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL13_SetDefault                         0x00
#define LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL14_SetDefault                         0x00

#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL0_SetDefault               0x22
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL1_SetDefault               0x21
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL2_SetDefault               0x20
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL3_SetDefault               0x1F
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL4_SetDefault               0x1E
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL5_SetDefault               0x1D
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL6_SetDefault               0x1C
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL7_SetDefault               0x1B
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL8_SetDefault               0x1B
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL9_SetDefault               0x1A
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL10_SetDefault              0x19
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL11_SetDefault              0x19
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL12_SetDefault              0x18
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL13_SetDefault              0x18
#define LTE_ET_LOOKUP_VPA_SECTION_DATA0_LEVEL14_SetDefault              0x17

#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL0_SetDefault               0x57
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL1_SetDefault               0x58
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL2_SetDefault               0x59
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL3_SetDefault               0x5A
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL4_SetDefault               0x5B
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL5_SetDefault               0x56
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL6_SetDefault               0x52
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL7_SetDefault               0x4D
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL8_SetDefault               0x4A
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL9_SetDefault               0x46
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL10_SetDefault              0x43
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL11_SetDefault              0x40
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL12_SetDefault              0x3E
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL13_SetDefault              0x3B
#define LTE_ET_LOOKUP_VPA_SECTION_DATA1_LEVEL14_SetDefault              0x39



/* ================================================================================================== */
/*   LTE ET BW Data Table Settings                                                                                                                                                                               */
/* ================================================================================================== */
#define LTE_ET_BAND1_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND1_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND1_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND1_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND1_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND1_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND1_RG_LA_INBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND1_RG_LA_INBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND1_RG_LA_INBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND1_RG_LA_INBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND1_RG_LA_INBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND1_RG_LA_INBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND1_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND1_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND1_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND1_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND1_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND1_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND1_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND1_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND1_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND1_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND1_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND1_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND1_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND1_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND1_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND1_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND1_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND1_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND1_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND1_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND1_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND1_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND1_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND1_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND1_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND1_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND1_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND1_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND1_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND1_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND1_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND1_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND1_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND1_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND1_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND1_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND1_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND1_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND1_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND1_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND1_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND1_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND2_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND2_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND2_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND2_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND2_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND2_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND2_RG_LA_INBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND2_RG_LA_INBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND2_RG_LA_INBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND2_RG_LA_INBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND2_RG_LA_INBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND2_RG_LA_INBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND2_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND2_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND2_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND2_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND2_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND2_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND2_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND2_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND2_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND2_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND2_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND2_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND2_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND2_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND2_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND2_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND2_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND2_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND2_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND2_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND2_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND2_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND2_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND2_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND2_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND2_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND2_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND2_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND2_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND2_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND2_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND2_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND2_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND2_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND2_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND2_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND2_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND2_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND2_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND2_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND2_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND2_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND3_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND3_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND3_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND3_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND3_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND3_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND3_RG_LA_INBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND3_RG_LA_INBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND3_RG_LA_INBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND3_RG_LA_INBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND3_RG_LA_INBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND3_RG_LA_INBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND3_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND3_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND3_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND3_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND3_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND3_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND3_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND3_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND3_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND3_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND3_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND3_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND3_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND3_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND3_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND3_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND3_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND3_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND3_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND3_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND3_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND3_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND3_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND3_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND3_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND3_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND3_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND3_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND3_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND3_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND3_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND3_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND3_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND3_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND3_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND3_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND3_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND3_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND3_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND3_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND3_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND3_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND4_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND4_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND4_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND4_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND4_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND4_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND4_RG_LA_INBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND4_RG_LA_INBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND4_RG_LA_INBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND4_RG_LA_INBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND4_RG_LA_INBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND4_RG_LA_INBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND4_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND4_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND4_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND4_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND4_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND4_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND4_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND4_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND4_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND4_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND4_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND4_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND4_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND4_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND4_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND4_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND4_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND4_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND4_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND4_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND4_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND4_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND4_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND4_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND4_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND4_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND4_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND4_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND4_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND4_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND4_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND4_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND4_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND4_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND4_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND4_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND4_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND4_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND4_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND4_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND4_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND4_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND5_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND5_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND5_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND5_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND5_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND5_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND5_RG_LA_INBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND5_RG_LA_INBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND5_RG_LA_INBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND5_RG_LA_INBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND5_RG_LA_INBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND5_RG_LA_INBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND5_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND5_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND5_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND5_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND5_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND5_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND5_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND5_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND5_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2
#define LTE_ET_BAND5_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND5_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND5_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND5_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND5_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND5_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND5_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND5_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND5_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND5_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND5_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND5_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL7
#define LTE_ET_BAND5_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND5_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND5_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND5_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND5_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND5_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND5_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND5_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND5_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND5_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND5_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND5_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND5_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND5_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND5_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND5_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND5_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND5_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND5_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND5_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND5_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND7_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND7_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND7_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND7_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND7_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND7_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND7_RG_LA_INBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND7_RG_LA_INBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND7_RG_LA_INBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND7_RG_LA_INBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND7_RG_LA_INBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND7_RG_LA_INBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND7_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND7_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND7_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND7_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND7_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND7_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND7_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND7_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND7_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND7_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND7_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND7_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND7_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND7_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND7_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND7_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND7_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND7_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND7_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND7_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND7_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND7_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND7_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND7_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND7_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND7_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND7_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND7_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND7_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND7_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND7_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND7_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND7_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND7_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND7_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND7_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND7_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND7_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND7_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND7_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND7_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND7_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND8_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND8_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND8_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND8_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND8_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND8_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND8_RG_LA_INBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND8_RG_LA_INBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND8_RG_LA_INBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND8_RG_LA_INBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND8_RG_LA_INBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND8_RG_LA_INBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND8_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND8_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND8_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND8_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND8_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND8_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND8_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND8_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND8_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2
#define LTE_ET_BAND8_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND8_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND8_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND8_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND8_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND8_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND8_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND8_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND8_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND8_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND8_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND8_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL7
#define LTE_ET_BAND8_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND8_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND8_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND8_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND8_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND8_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND8_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND8_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND8_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND8_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND8_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND8_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND8_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND8_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND8_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND8_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND8_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND8_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND8_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND8_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND8_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND9_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND9_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND9_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND9_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND9_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND9_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault               ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND9_RG_LA_INBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND9_RG_LA_INBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND9_RG_LA_INBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND9_RG_LA_INBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND9_RG_LA_INBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND9_RG_LA_INBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND9_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND9_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND9_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND9_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND9_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND9_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                 ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND9_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND9_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND9_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND9_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND9_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND9_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND9_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND9_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND9_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND9_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND9_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND9_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND9_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND9_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND9_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND9_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND9_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND9_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND9_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND9_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND9_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND9_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND9_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND9_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND9_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND9_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND9_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND9_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND9_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                       ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND9_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                       ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND9_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND9_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND9_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND9_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND9_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND9_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                     ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND11_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND11_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND11_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND11_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND11_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND11_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND11_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND11_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND11_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND11_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND11_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND11_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND11_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND11_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND11_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND11_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND11_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND11_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND11_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND11_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND11_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND11_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND11_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND11_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND11_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND11_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND11_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND11_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND11_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND11_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND11_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND11_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND11_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND11_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND11_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND11_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND11_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND11_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND11_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND11_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND11_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND11_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND11_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND11_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND11_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND11_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND11_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND11_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND11_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND11_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND11_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND11_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND11_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND11_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND12_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND12_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND12_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND12_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND12_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND12_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND12_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND12_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND12_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND12_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND12_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND12_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND12_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND12_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND12_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND12_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND12_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND12_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND12_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND12_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND12_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND12_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND12_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND12_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND12_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND12_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND12_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND12_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND12_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND12_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND12_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND12_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND12_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND12_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND12_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND12_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND12_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND12_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND12_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND12_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND12_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND12_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND12_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND12_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND12_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND12_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND12_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND12_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND12_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND12_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND12_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND12_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND12_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND12_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND13_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND13_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND13_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND13_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND13_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND13_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND13_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND13_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND13_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND13_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND13_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND13_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND13_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND13_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND13_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND13_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND13_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND13_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND13_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND13_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND13_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND13_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND13_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND13_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND13_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND13_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND13_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND13_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND13_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND13_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND13_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND13_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND13_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND13_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND13_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND13_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND13_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND13_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND13_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND13_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND13_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND13_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND13_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND13_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND13_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND13_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND13_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND13_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND13_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND13_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND13_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND13_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND13_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND13_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND17_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND17_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND17_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND17_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND17_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND17_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND17_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND17_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND17_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND17_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND17_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND17_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND17_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND17_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND17_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND17_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND17_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND17_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND17_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND17_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND17_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND17_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND17_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND17_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND17_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND17_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND17_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND17_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND17_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND17_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND17_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND17_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND17_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND17_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND17_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND17_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND17_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND17_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND17_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND17_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND17_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND17_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND17_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND17_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND17_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND17_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND17_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND17_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND17_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND17_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND17_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND17_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND17_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND17_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND18_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND18_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND18_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND18_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND18_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND18_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND18_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND18_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND18_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND18_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND18_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND18_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND18_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND18_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND18_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND18_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND18_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND18_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND18_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND18_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND18_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND18_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND18_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND18_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND18_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND18_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND18_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND18_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND18_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND18_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND18_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND18_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND18_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND18_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND18_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND18_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND18_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND18_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND18_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND18_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND18_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND18_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND18_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND18_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND18_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND18_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND18_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND18_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND18_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND18_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND18_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND18_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND18_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND18_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND19_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND19_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND19_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND19_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND19_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND19_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND19_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND19_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND19_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND19_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND19_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND19_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND19_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND19_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND19_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND19_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND19_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND19_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND19_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND19_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND19_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND19_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND19_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND19_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND19_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND19_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND19_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND19_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND19_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND19_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND19_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND19_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND19_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND19_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND19_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND19_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND19_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND19_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND19_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND19_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND19_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND19_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND19_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND19_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND19_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND19_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND19_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND19_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND19_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND19_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND19_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND19_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND19_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND19_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND20_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND20_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND20_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND20_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND20_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND20_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND20_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND20_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND20_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND20_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND20_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND20_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND20_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND20_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND20_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND20_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND20_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND20_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND20_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND20_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND20_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND20_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND20_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND20_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND20_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND20_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND20_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND20_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND20_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND20_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND20_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND20_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND20_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND20_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND20_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND20_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND20_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND20_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND20_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND20_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND20_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND20_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND20_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND20_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND20_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND20_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND20_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND20_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND20_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND20_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND20_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND20_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND20_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND20_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND21_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND21_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND21_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND21_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND21_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND21_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND21_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND21_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND21_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND21_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND21_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND21_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND21_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND21_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND21_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND21_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND21_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND21_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND21_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND21_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND21_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND21_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND21_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND21_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND21_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND21_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND21_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND21_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND21_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND21_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND21_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND21_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND21_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND21_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND21_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND21_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND21_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND21_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND21_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND21_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND21_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND21_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND21_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND21_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND21_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND21_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND21_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND21_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND21_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND21_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND21_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND21_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND21_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND21_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND22_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND22_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND22_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND22_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND22_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND22_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND22_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND22_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND22_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND22_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND22_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND22_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND22_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND22_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND22_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND22_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND22_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND22_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND22_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND22_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND22_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND22_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND22_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND22_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND22_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND22_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND22_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND22_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND22_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND22_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND22_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND22_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND22_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND22_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND22_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND22_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND22_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND22_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND22_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND22_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND22_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND22_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND22_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND22_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND22_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND22_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND22_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND22_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND22_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND22_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND22_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND22_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND22_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND22_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND25_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND25_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND25_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND25_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND25_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND25_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND25_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND25_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND25_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND25_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND25_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND25_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND25_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND25_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND25_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND25_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND25_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND25_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND25_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND25_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND25_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND25_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND25_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND25_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND25_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND25_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND25_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND25_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND25_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND25_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND25_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND25_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND25_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND25_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND25_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND25_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND26_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND26_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND26_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND26_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND26_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND26_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND26_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND26_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND26_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND26_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND26_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND26_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND26_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND26_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND26_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND26_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND26_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND26_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND26_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND26_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND26_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND26_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND26_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND26_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND26_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND26_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND26_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND26_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND26_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND26_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND26_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND26_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND26_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND26_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND26_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND26_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND26_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND26_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND26_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND26_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND26_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND26_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND26_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND26_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND26_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND26_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND26_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND26_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND26_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND26_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND26_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND26_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND26_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND26_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND27_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND27_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND27_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND27_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND27_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND27_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND27_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND27_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND27_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND27_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND27_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND27_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND27_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND27_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND27_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND27_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND27_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND27_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND27_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND27_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND27_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND27_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND27_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND27_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND27_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND27_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND27_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND27_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND27_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND27_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND27_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND27_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND27_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND27_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND27_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND27_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND27_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND27_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND27_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND27_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND27_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND27_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND27_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND27_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND27_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND27_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND27_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND27_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND27_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND27_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND27_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND27_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND27_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND27_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND28_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND28_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND28_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND28_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND28_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND28_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND28_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND28_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND28_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND28_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND28_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND28_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND28_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND28_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND28_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND28_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND28_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND28_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND28_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND28_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND28_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND28_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND28_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND28_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND28_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND28_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND28_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND28_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND28_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND28_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND28_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND28_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND28_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND28_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND28_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND28_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND28_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND28_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND28_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND28_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND28_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND28_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND28_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND28_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND28_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND28_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND28_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND28_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND28_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND28_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND28_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND28_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND28_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND28_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND29_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND29_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND29_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND29_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND29_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND29_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND29_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND29_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND29_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND29_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND29_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND29_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND29_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND29_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND29_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND29_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND29_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND29_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND29_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND29_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND29_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND29_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND29_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND29_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND29_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND29_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND29_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND29_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND29_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND29_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND29_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND29_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND29_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND29_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND29_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND29_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND29_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND29_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND29_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND29_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND29_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND29_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND29_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND29_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND29_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND29_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND29_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND29_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND29_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND29_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND29_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND29_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND29_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND29_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND30_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND30_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND30_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND30_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND30_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND30_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND30_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND30_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND30_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND30_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND30_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND30_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND30_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND30_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND30_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND30_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND30_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND30_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND30_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND30_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND30_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND30_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND30_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND30_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND30_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND30_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND30_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND30_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND30_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND30_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND30_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND30_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND30_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND30_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND30_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND30_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND30_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND30_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND30_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND30_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND30_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND30_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND30_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND30_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND30_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND30_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND30_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND30_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND30_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND30_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND30_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND30_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND30_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND30_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND34_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND34_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND34_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND34_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND34_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND34_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND34_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND34_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND34_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND34_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND34_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND34_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND34_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND34_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND34_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND34_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND34_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND34_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND34_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND34_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND34_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND34_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND34_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND34_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND34_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND34_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND34_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND34_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND34_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND34_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND34_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND34_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND34_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND34_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND34_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND34_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND34_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND34_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND34_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND34_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND34_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND34_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND34_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND34_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND34_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND34_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND34_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND34_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND34_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND34_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND34_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND34_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND34_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND34_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND38_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND38_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND38_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND38_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND38_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND38_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND38_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND38_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND38_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND38_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND38_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND38_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND38_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND38_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND38_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND38_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND38_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND38_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND38_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND38_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND38_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND38_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND38_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND38_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND38_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND38_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND38_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND38_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND38_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND38_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND38_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND38_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND38_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND38_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND39_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND39_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND39_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND39_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND39_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND39_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND39_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND39_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND39_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND39_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND39_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND39_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND39_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND39_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND39_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND39_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND39_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND39_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND39_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND39_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND39_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND39_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND39_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND39_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND39_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND39_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND39_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND39_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND39_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND39_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND39_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND39_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND39_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND39_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND39_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND39_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND39_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND39_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND39_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND39_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND39_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND39_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND39_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND39_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND39_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND39_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND39_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND39_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND39_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND39_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND39_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND39_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND39_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND39_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND40_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND40_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND40_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND40_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND40_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND40_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND40_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND40_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND40_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND40_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND40_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND40_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND40_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND40_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND40_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND40_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND40_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND40_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND40_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND40_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND40_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND40_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND40_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND40_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND40_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND40_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND40_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND40_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND40_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND40_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND40_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND40_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND40_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND40_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND41_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND41_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND41_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND41_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND41_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND41_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND41_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND41_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND41_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND41_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND41_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND41_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND41_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND41_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND41_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND41_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND41_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND41_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND41_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND41_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND41_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND41_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND41_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND41_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND41_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND41_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND41_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND41_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND41_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND41_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND41_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND41_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND41_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND41_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND42_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND42_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND42_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND42_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND42_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND42_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND42_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND42_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND42_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND42_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND42_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND42_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND42_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND42_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND42_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND42_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND42_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND42_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND42_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND42_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND42_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND42_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND42_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND42_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND42_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND42_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND42_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND42_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND42_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND42_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND42_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND42_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND42_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND42_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND42_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND42_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND42_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND42_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND42_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND42_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND42_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND42_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND42_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND42_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND42_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND42_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND42_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND42_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND42_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND42_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND42_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND42_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND42_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND42_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND43_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND43_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND43_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND43_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND43_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND43_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND43_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND43_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND43_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND43_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND43_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND43_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND43_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND43_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND43_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND43_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND43_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND43_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND43_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND43_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND43_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND43_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND43_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND43_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND43_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND43_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND43_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND43_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND43_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND43_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND43_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND43_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND43_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND43_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND43_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND43_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND43_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND43_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND43_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND43_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND43_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND43_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND43_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND43_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND43_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND43_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND43_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND43_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND43_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND43_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND43_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND43_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND43_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND43_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND44_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND44_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND44_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND44_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND44_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND44_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND44_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND44_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND44_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND44_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND44_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND44_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND44_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND44_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND44_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND44_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND44_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND44_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND44_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND44_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND44_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND44_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND44_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND44_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND44_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND44_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND44_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND44_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND44_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND44_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND44_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND44_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND44_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND44_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND44_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND44_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND44_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND44_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND44_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND44_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND44_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND44_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND44_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND44_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND44_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND44_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND44_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND44_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND44_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND44_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND44_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND44_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND44_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND44_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND66_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND66_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND66_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND66_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND66_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND66_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND66_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND66_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND66_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND66_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND66_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND66_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND66_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND66_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND66_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND66_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND66_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND66_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND66_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND66_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND66_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND66_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND66_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND66_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND66_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND66_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND66_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND66_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND66_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND66_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND66_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND66_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND66_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND66_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND66_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND66_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND66_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND66_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND66_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND66_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND66_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND66_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND66_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND66_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND66_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND66_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND66_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND66_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND66_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND66_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND66_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND66_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND66_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND66_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND71_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND71_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND71_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND71_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND71_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND71_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND71_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND71_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND71_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND71_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND71_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND71_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND71_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND71_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND71_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND71_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND71_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND71_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND71_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND71_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND71_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND71_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND71_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND71_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND71_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND71_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND71_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND71_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND71_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND71_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND71_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND71_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND71_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND71_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND71_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND71_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND71_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND71_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND71_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND71_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND71_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND71_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND71_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND71_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND71_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND71_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND71_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND71_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND71_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND71_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND71_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND71_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND71_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND71_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND38_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND38_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND38_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND38_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND38_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND38_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND38_FILTER_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND38_FILTER_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND38_FILTER_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND38_FILTER_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND38_FILTER_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND38_FILTER_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND38_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND38_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND38_FILTER_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND38_FILTER_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND38_FILTER_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND38_FILTER_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND38_FILTER_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND38_FILTER_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND38_FILTER_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_FILTER_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_FILTER_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_FILTER_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_FILTER_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND38_FILTER_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND38_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND38_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND38_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND38_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND38_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND38_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND38_FILTER_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND38_FILTER_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND38_FILTER_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND38_FILTER_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND38_FILTER_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND38_FILTER_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND38_FILTER_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_FILTER_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_FILTER_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_FILTER_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_FILTER_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND38_FILTER_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND38_FILTER_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_FILTER_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_FILTER_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_FILTER_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_FILTER_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND38_FILTER_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE


#define LTE_ET_BAND40_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND40_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND40_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND40_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND40_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND40_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND40_FILTER_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND40_FILTER_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND40_FILTER_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND40_FILTER_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND40_FILTER_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND40_FILTER_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND40_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND40_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND40_FILTER_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND40_FILTER_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND40_FILTER_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND40_FILTER_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND40_FILTER_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND40_FILTER_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND40_FILTER_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_FILTER_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_FILTER_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_FILTER_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_FILTER_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND40_FILTER_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND40_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND40_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND40_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND40_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND40_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND40_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND40_FILTER_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND40_FILTER_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND40_FILTER_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND40_FILTER_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND40_FILTER_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND40_FILTER_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND40_FILTER_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_FILTER_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_FILTER_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_FILTER_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_FILTER_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND40_FILTER_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND40_FILTER_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_FILTER_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_FILTER_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_FILTER_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_FILTER_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND40_FILTER_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

#define LTE_ET_BAND41_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL0_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND41_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL1_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND41_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL2_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_ON
#define LTE_ET_BAND41_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL3_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND41_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL4_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF
#define LTE_ET_BAND41_FILTER_RG_LA_LOW_POWER_EN_SETTING_LEVEL5_SetDefault              ET_MT6303_RG_LA_LOW_POWER_EN_OFF

#define LTE_ET_BAND41_FILTER_RG_LA_INBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND41_FILTER_RG_LA_INBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_2
#define LTE_ET_BAND41_FILTER_RG_LA_INBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_INBW_10_50MHZ_1
#define LTE_ET_BAND41_FILTER_RG_LA_INBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_INBW_14_20MHZ
#define LTE_ET_BAND41_FILTER_RG_LA_INBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_INBW_22_20MHZ
#define LTE_ET_BAND41_FILTER_RG_LA_INBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_INBW_50_00MHZ

#define LTE_ET_BAND41_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL0_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL1_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL2_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL3_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL4_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00
#define LTE_ET_BAND41_FILTER_RG_LA_INBUF_BIAS_SETTING_LEVEL5_SetDefault                ET_MT6303_RG_LA_INBUF_BIAS_X_1_00

#define LTE_ET_BAND41_FILTER_RG_LA_BIAS_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND41_FILTER_RG_LA_BIAS_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND41_FILTER_RG_LA_BIAS_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_4
#define LTE_ET_BAND41_FILTER_RG_LA_BIAS_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND41_FILTER_RG_LA_BIAS_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_0
#define LTE_ET_BAND41_FILTER_RG_LA_BIAS_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_BIAS_X_1_2

#define LTE_ET_BAND41_FILTER_RG_LA_HIGH4V_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_FILTER_RG_LA_HIGH4V_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_FILTER_RG_LA_HIGH4V_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_FILTER_RG_LA_HIGH4V_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_FILTER_RG_LA_HIGH4V_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE
#define LTE_ET_BAND41_FILTER_RG_LA_HIGH4V_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_HIGH4V_FALSE

#define LTE_ET_BAND41_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL0_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND41_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL1_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND41_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL2_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4
#define LTE_ET_BAND41_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL3_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL5
#define LTE_ET_BAND41_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL4_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL6
#define LTE_ET_BAND41_FILTER_RG_LA_OUTBIAS_SETTING_LEVEL5_SetDefault                   ET_MT6303_RG_LA_OUTBIAS_LEVEL4

#define LTE_ET_BAND41_FILTER_RG_LA_OPBW_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND41_FILTER_RG_LA_OPBW_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND41_FILTER_RG_LA_OPBW_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPBW_002P
#define LTE_ET_BAND41_FILTER_RG_LA_OPBW_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPBW_001P
#define LTE_ET_BAND41_FILTER_RG_LA_OPBW_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPBW_200F
#define LTE_ET_BAND41_FILTER_RG_LA_OPBW_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPBW_200F

#define LTE_ET_BAND41_FILTER_RG_LA_OPFF_SETTING_LEVEL0_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_FILTER_RG_LA_OPFF_SETTING_LEVEL1_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_FILTER_RG_LA_OPFF_SETTING_LEVEL2_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_FILTER_RG_LA_OPFF_SETTING_LEVEL3_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_FILTER_RG_LA_OPFF_SETTING_LEVEL4_SetDefault                      ET_MT6303_RG_LA_OPFF_ON
#define LTE_ET_BAND41_FILTER_RG_LA_OPFF_SETTING_LEVEL5_SetDefault                      ET_MT6303_RG_LA_OPFF_ON

#define LTE_ET_BAND41_FILTER_RG_LA_OPLOAD_SETTING_LEVEL0_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_FILTER_RG_LA_OPLOAD_SETTING_LEVEL1_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_FILTER_RG_LA_OPLOAD_SETTING_LEVEL2_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_FILTER_RG_LA_OPLOAD_SETTING_LEVEL3_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_FILTER_RG_LA_OPLOAD_SETTING_LEVEL4_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE
#define LTE_ET_BAND41_FILTER_RG_LA_OPLOAD_SETTING_LEVEL5_SetDefault                    ET_MT6303_RG_LA_OPLOAD_3_STAGE

/* =================================================================================================================================================== */
/*   DO NOT MODIFY THE BELOW DATA!   DO NOT MODIFY THE BELOW DATA!   DO NOT MODIFY THE BELOW DATA!   DO NOT MODIFY THE BELOW DATA!   DO NOT MODIFY THE BELOW DATA!   DO NOT MODIFY THE BELOW DATA! */
/* =================================================================================================================================================== */
#define LTE_ET_RG_HFP_BYPASS_EN_PART_ET_MODE_SetDefault                         ( ( ( LTE_ET_RG_HFP_BYPASS_EN_SETTING_ET_MODE_SetDefault       ) << ET_MT6303_RG_HFP_BYPASS_EN_SHIFT      ) & ET_MT6303_RG_HFP_BYPASS_EN_MASK      )
#define LTE_ET_RG_HFP_BYPASS_EN_PART_APT_MODE_SetDefault                        ( ( ( LTE_ET_RG_HFP_BYPASS_EN_SETTING_APT_MODE_SetDefault      ) << ET_MT6303_RG_HFP_BYPASS_EN_SHIFT      ) & ET_MT6303_RG_HFP_BYPASS_EN_MASK      )

#define LTE_ET_RG_HFP_AUTO_BYPASS_EN_PART_ET_MODE_SetDefault                    ( ( ( LTE_ET_RG_HFP_AUTO_BYPASS_EN_SETTING_ET_MODE_SetDefault  ) << ET_MT6303_RG_HFP_AUTO_BYPASS_EN_SHIFT ) & ET_MT6303_RG_HFP_AUTO_BYPASS_EN_MASK )
#define LTE_ET_RG_HFP_AUTO_BYPASS_EN_PART_APT_MODE_SetDefault                   ( ( ( LTE_ET_RG_HFP_AUTO_BYPASS_EN_SETTING_APT_MODE_SetDefault ) << ET_MT6303_RG_HFP_AUTO_BYPASS_EN_SHIFT ) & ET_MT6303_RG_HFP_AUTO_BYPASS_EN_MASK )

#define LTE_ET_RG_HFP_FPWM_PART_ET_MODE_SetDefault                              ( ( ( LTE_ET_RG_HFP_FPWM_SETTING_ET_MODE_SetDefault            ) << ET_MT6303_RG_HFP_FPWM_SHIFT           ) & ET_MT6303_RG_HFP_FPWM_MASK           )
#define LTE_ET_RG_HFP_FPWM_PART_APT_MODE_SetDefault                             ( ( ( LTE_ET_RG_HFP_FPWM_SETTING_APT_MODE_SetDefault           ) << ET_MT6303_RG_HFP_FPWM_SHIFT           ) & ET_MT6303_RG_HFP_FPWM_MASK           )

#define LTE_ET_RG_LFP_FPWM_PART_ET_MODE_SetDefault                              ( ( ( LTE_ET_RG_LFP_FPWM_SETTING_ET_MODE_SetDefault            ) << ET_MT6303_RG_LFP_FPWM_SHIFT           ) & ET_MT6303_RG_LFP_FPWM_MASK           )
#define LTE_ET_RG_LFP_FPWM_PART_APT_MODE_SetDefault                             ( ( ( LTE_ET_RG_LFP_FPWM_SETTING_APT_MODE_SetDefault           ) << ET_MT6303_RG_LFP_FPWM_SHIFT           ) & ET_MT6303_RG_LFP_FPWM_MASK           )

#define LTE_ET_RG_LFP_EN_PART_ET_MODE_SetDefault                                ( ( ( LTE_ET_RG_LFP_EN_SETTING_ET_MODE_SetDefault              ) << ET_MT6303_RG_LFP_EN_SHIFT             ) & ET_MT6303_RG_LFP_EN_MASK             )
#define LTE_ET_RG_LFP_EN_PART_APT_MODE_SetDefault                               ( ( ( LTE_ET_RG_LFP_EN_SETTING_APT_MODE_SetDefault             ) << ET_MT6303_RG_LFP_EN_SHIFT             ) & ET_MT6303_RG_LFP_EN_MASK             )

#define LTE_ET_RG_HFP_EN_PART_ET_MODE_SetDefault                                ( ( ( LTE_ET_RG_HFP_EN_SETTING_ET_MODE_SetDefault              ) << ET_MT6303_RG_HFP_EN_SHIFT             ) & ET_MT6303_RG_HFP_EN_MASK             )
#define LTE_ET_RG_HFP_EN_PART_APT_MODE_SetDefault                               ( ( ( LTE_ET_RG_HFP_EN_SETTING_APT_MODE_SetDefault             ) << ET_MT6303_RG_HFP_EN_SHIFT             ) & ET_MT6303_RG_HFP_EN_MASK             )

#define LTE_ET_RG_ET_MODE_PART_ET_MODE_SetDefault                               ( ( ( LTE_ET_RG_ET_MODE_SETTING_ET_MODE_SetDefault             ) << ET_MT6303_RG_ET_MODE_SHIFT            ) & ET_MT6303_RG_ET_MODE_MASK            )
#define LTE_ET_RG_ET_MODE_PART_APT_MODE_SetDefault                              ( ( ( LTE_ET_RG_ET_MODE_SETTING_APT_MODE_SetDefault            ) << ET_MT6303_RG_ET_MODE_SHIFT            ) & ET_MT6303_RG_ET_MODE_MASK            )


#define LTE_ET_RG09_SETTING_APT_MODE_SetDefault                                 ( 0x02 )

#define LTE_ET_RG09_SETTING_ET_MODE_SetDefault                                  ( 0x07 )

#define LTE_ET_RG6D_SETTING_HFP_WITH_PFM_SetDefault                             ( 0x0B )
#define LTE_ET_RG6D_SETTING_HFP_NO_PFM_SetDefault                               ( 0x07 )

#define LTE_ET_RG83_SETTING_OTP_EN_OCP_EN_SetDefault                            ( 0x03 )
#define LTE_ET_RG83_SETTING_OTP_EN_OCP_DIS_SetDefault                           ( 0x00 )

#define LTE_ET_RG8E_SETTING_RESET_OCP_OTP_SetDefault                            ( 0x01 )

#define LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault                   ( ( ( LTE_ET_LFP_PWRSEL_MODE_APT_MODE_SetDefault ) << ET_MT6303_LFP_PWRSEL_MODE_SHIFT ) & ET_MT6303_LFP_PWRSEL_MODE_MASK )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault                            ( ( ( LTE_ET_LFP_PWRSEL_MODE_ET_MODE_SetDefault  ) << ET_MT6303_LFP_PWRSEL_MODE_SHIFT ) & ET_MT6303_LFP_PWRSEL_MODE_MASK )

#define LTE_ET_TX_ON_BAND1_RG0A_APT_SETTING_SetDefault                         ( ( LTE_ET_VPA_BAND1_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND2_RG0A_APT_SETTING_SetDefault                         ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND3_RG0A_APT_SETTING_SetDefault                         ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND4_RG0A_APT_SETTING_SetDefault                         ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND5_RG0A_APT_SETTING_SetDefault                         ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND6_RG0A_APT_SETTING_SetDefault                         ( ( LTE_ET_VPA_BAND6_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND7_RG0A_APT_SETTING_SetDefault                         ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND8_RG0A_APT_SETTING_SetDefault                         ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND9_RG0A_APT_SETTING_SetDefault                         ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND11_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND12_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND13_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND17_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND18_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND19_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND20_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND21_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND22_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND25_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND26_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND27_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND28_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND29_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND30_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND32_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND32_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND34_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND38_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND39_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND40_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND41_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND42_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND43_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND44_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND66_RG0A_APT_SETTING_SetDefault                        ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )

#define LTE_ET_TX_ON_BAND38_FILTER_RG0A_APT_SETTING_SetDefault                 ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND40_FILTER_RG0A_APT_SETTING_SetDefault                 ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )
#define LTE_ET_TX_ON_BAND41_FILTER_RG0A_APT_SETTING_SetDefault                 ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_RG_LFP_PWRSEL_MODE_PART_APT_SETTING_SetDefault ) )

#if( LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault > LTE_ET_HFP_DAC_THRESHOLD1_SetDefault )

#define LTE_ET_TX_ON_HFP_EA_RSS_SETTING_SetDefault                      LTE_ET_HFP_EA_RSS_LEVEL0_SetDefault

#elif( LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault > LTE_ET_HFP_DAC_THRESHOLD2_SetDefault )

#define LTE_ET_TX_ON_HFP_EA_RSS_SETTING_SetDefault                      LTE_ET_HFP_EA_RSS_LEVEL1_SetDefault

#elif( LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault > LTE_ET_HFP_DAC_THRESHOLD3_SetDefault )

#define LTE_ET_TX_ON_HFP_EA_RSS_SETTING_SetDefault                      LTE_ET_HFP_EA_RSS_LEVEL2_SetDefault

#else

#define LTE_ET_TX_ON_HFP_EA_RSS_SETTING_SetDefault                      LTE_ET_HFP_EA_RSS_LEVEL3_SetDefault

#endif   // #if( LTE_ETM_WARM_UP_VOLTAGE_REGISTER_VALUE_SetDefault > LTE_ET_HFP_DAC_THRESHOLD1_SetDefault )

#define LTE_ET_TPC_SECTION_DATA0_APT_MODE_SetDefault                            LTE_ET_RG09_SETTING_APT_MODE_SetDefault

#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL0_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL1_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL2_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL3_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL4_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL5_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL6_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL7_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL8_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault                      ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL9_SetDefault              ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault                     ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL10_SetDefault             ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault                     ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL11_SetDefault             ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault                     ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL12_SetDefault             ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault                     ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL13_SetDefault             ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )
#define LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault                     ( ( ( LTE_ET_VPA_RG_LFP_PWRSEL_VTH_LEVEL14_SetDefault             ) << ET_MT6303_LFP_PWRSEL_VTH_SHIFT  ) & ET_MT6303_LFP_PWRSEL_VTH_MASK  )

#define LTE_ET_VPA_BAND1_RG0A_ET_SETTING_LEVEL0_SetDefault                      ( ( LTE_ET_VPA_BAND1_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )

#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL0_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL1_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL2_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL3_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL4_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL5_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL6_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL7_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL8_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL9_SetDefault                      ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL10_SetDefault                     ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL11_SetDefault                     ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL12_SetDefault                     ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL13_SetDefault                     ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND2_RG0A_ET_SETTING_LEVEL14_SetDefault                     ( ( LTE_ET_VPA_BAND2_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL0_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL1_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL2_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL3_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL4_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL5_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL6_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL7_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL8_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL9_SetDefault                      ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL10_SetDefault                     ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL11_SetDefault                     ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL12_SetDefault                     ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL13_SetDefault                     ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND3_RG0A_ET_SETTING_LEVEL14_SetDefault                     ( ( LTE_ET_VPA_BAND3_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL0_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL1_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL2_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL3_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL4_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL5_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL6_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL7_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL8_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL9_SetDefault                      ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL10_SetDefault                     ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL11_SetDefault                     ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL12_SetDefault                     ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL13_SetDefault                     ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND4_RG0A_ET_SETTING_LEVEL14_SetDefault                     ( ( LTE_ET_VPA_BAND4_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL0_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL1_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL2_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL3_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL4_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL5_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL6_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL7_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL8_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL9_SetDefault                      ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL10_SetDefault                     ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL11_SetDefault                     ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL12_SetDefault                     ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL13_SetDefault                     ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND5_RG0A_ET_SETTING_LEVEL14_SetDefault                     ( ( LTE_ET_VPA_BAND5_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL0_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL1_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL2_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL3_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL4_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL5_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL6_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL7_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL8_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL9_SetDefault                      ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL10_SetDefault                     ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL11_SetDefault                     ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL12_SetDefault                     ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL13_SetDefault                     ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND7_RG0A_ET_SETTING_LEVEL14_SetDefault                     ( ( LTE_ET_VPA_BAND7_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL0_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL1_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL2_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL3_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL4_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL5_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL6_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL7_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL8_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL9_SetDefault                      ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL10_SetDefault                     ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL11_SetDefault                     ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL12_SetDefault                     ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL13_SetDefault                     ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND8_RG0A_ET_SETTING_LEVEL14_SetDefault                     ( ( LTE_ET_VPA_BAND8_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL0_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL1_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL2_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL3_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL4_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL5_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL6_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL7_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL8_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL9_SetDefault                      ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL10_SetDefault                     ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL11_SetDefault                     ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL12_SetDefault                     ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL13_SetDefault                     ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND9_RG0A_ET_SETTING_LEVEL14_SetDefault                     ( ( LTE_ET_VPA_BAND9_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND11_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND11_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND12_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND12_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND13_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND13_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND17_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND17_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND18_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND18_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND19_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND19_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND20_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND20_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND21_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND21_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND22_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND22_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND25_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND25_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND26_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND26_RG0A_ET_SETTING_GAIN_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND27_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND27_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND28_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND28_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND29_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND29_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND30_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND30_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND34_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND34_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND38_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND39_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND39_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND40_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND40_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND41_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND41_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND42_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND42_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND43_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND43_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND44_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND44_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND66_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND66_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL0_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL1_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL2_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL3_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL4_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL5_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL6_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL7_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL8_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL9_SetDefault                    ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL10_SetDefault                   ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL11_SetDefault                   ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL12_SetDefault                   ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL13_SetDefault                   ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND252_RG0A_ET_SETTING_LEVEL14_SetDefault                   ( ( LTE_ET_VPA_BAND252_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL0_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL1_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL2_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL3_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL4_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL5_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL6_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL7_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL8_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL9_SetDefault                    ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL10_SetDefault                   ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL11_SetDefault                   ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL12_SetDefault                   ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL13_SetDefault                   ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND255_RG0A_ET_SETTING_LEVEL14_SetDefault                   ( ( LTE_ET_VPA_BAND255_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND38_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND40_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL0_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL1_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL2_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL3_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL4_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL5_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL6_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL7_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL8_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL9_SetDefault                     ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL10_SetDefault                    ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL11_SetDefault                    ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL12_SetDefault                    ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL13_SetDefault                    ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_LEVEL14_SetDefault                    ( ( LTE_ET_VPA_BAND41_FILTER_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL0_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL1_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL2_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL3_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL4_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL5_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL6_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL7_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL8_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL9_SetDefault                    ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL10_SetDefault                   ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL11_SetDefault                   ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL12_SetDefault                   ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL13_SetDefault                   ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_LEVEL14_SetDefault                   ( ( LTE_ET_VPA_ROUTE35_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL0_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL1_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL2_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL3_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL4_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL5_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL6_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL7_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL8_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL9_SetDefault                    ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL10_SetDefault                   ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL11_SetDefault                   ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL12_SetDefault                   ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL13_SetDefault                   ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_LEVEL14_SetDefault                   ( ( LTE_ET_VPA_ROUTE36_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL0_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL1_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL2_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL3_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL4_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL5_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL6_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL7_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL8_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL9_SetDefault                    ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL10_SetDefault                   ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL11_SetDefault                   ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL12_SetDefault                   ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL13_SetDefault                   ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_LEVEL14_SetDefault                   ( ( LTE_ET_VPA_ROUTE37_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )

#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL0_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL0_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL1_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL1_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL2_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL2_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL3_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL3_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL4_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL4_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL5_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL5_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL6_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL6_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL7_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL7_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL8_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL8_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL9_SetDefault                    ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL9_SetDefault  ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL10_SetDefault                   ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL10_SetDefault ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL11_SetDefault                   ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL11_SetDefault ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL12_SetDefault                   ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL12_SetDefault ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL13_SetDefault                   ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL13_SetDefault ) )
#define LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_LEVEL14_SetDefault                   ( ( LTE_ET_VPA_ROUTE38_RG0A_ET_SETTING_GAIN_SetDefault) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_MODE_SetDefault ) | ( LTE_ET_VPA_ET_SETTING_PWRSEL_VTH_LEVEL14_SetDefault ) )



#define LTE_ET_BAND1_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND1_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND1_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND1_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND1_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND1_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND1_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND1_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND1_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND1_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND1_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND1_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND1_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND1_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND1_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND1_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND1_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND1_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND1_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND1_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND1_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND1_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND1_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND1_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND1_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND1_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND1_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND2_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND2_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND2_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND2_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND2_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND2_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND2_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND2_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND2_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND2_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND2_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND2_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND2_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND2_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND2_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND2_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND2_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND2_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND2_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND2_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND2_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND2_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND2_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND2_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND2_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND2_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND2_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND3_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND3_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND3_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND3_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND3_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND3_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND3_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND3_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND3_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND3_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND3_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND3_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND3_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND3_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND3_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND3_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND3_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND3_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND3_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND3_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND3_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND3_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND3_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND3_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND3_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND3_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND3_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND4_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND4_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND4_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND4_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND4_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND4_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND4_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND4_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND4_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND4_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND4_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND4_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND4_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND4_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND4_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND4_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND4_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND4_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND4_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND4_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND4_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND4_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND4_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND4_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND4_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND4_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND4_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND5_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND5_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND5_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND5_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND5_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND5_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND5_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND5_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND5_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND5_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND5_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND5_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND5_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND5_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND5_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND5_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND5_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND5_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND5_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND5_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND5_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND5_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND5_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND5_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND5_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND5_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND5_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND6_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND6_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND6_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND6_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND6_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND6_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND6_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND6_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND6_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND6_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND6_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND6_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND6_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND6_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND6_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND6_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND6_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND6_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND6_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND6_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND6_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND6_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND6_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND6_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND6_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND6_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND6_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND7_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND7_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND7_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND7_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND7_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND7_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND7_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND7_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND7_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND7_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND7_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND7_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND7_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND7_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND7_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND7_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND7_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND7_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND7_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND7_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND7_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND7_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND7_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND7_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND7_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND7_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND7_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND8_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND8_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND8_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND8_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND8_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND8_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND8_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND8_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND8_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND8_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND8_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND8_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND8_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND8_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND8_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND8_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND8_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND8_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND8_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND8_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND8_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND8_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND8_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND8_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND8_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND8_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND8_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND9_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND9_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND9_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND9_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND9_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND9_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND9_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND9_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND9_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND9_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND9_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND9_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND9_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND9_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND9_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND9_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND9_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND9_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND9_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND9_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND9_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND9_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND9_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND9_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND9_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND9_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND9_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND11_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND11_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND11_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND11_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND11_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND11_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND11_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND11_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND11_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND11_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND11_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND11_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND11_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND11_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND11_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND11_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND11_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND11_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND11_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND11_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND11_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND11_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND11_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND11_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND11_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND11_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND11_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND12_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND12_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND12_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND12_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND12_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND12_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND12_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND12_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND12_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND12_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND12_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND12_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND12_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND12_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND12_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND12_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND12_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND12_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND12_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND12_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND12_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND12_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND12_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND12_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND12_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND12_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND12_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND13_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND13_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND13_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND13_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND13_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND13_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND13_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND13_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND13_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND13_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND13_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND13_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND13_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND13_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND13_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND13_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND13_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND13_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND13_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND13_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND13_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND13_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND13_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND13_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND13_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND13_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND13_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND14_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND14_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND14_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND14_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND14_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND14_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND14_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND14_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND14_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND14_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND14_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND14_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND14_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND14_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND14_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND14_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND14_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND14_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND14_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND14_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND14_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND14_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND14_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND14_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND14_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND14_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND14_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND17_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND17_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND17_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND17_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND17_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND17_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND17_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND17_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND17_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND17_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND17_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND17_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND17_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND17_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND17_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND17_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND17_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND17_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND17_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND17_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND17_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND17_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND17_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND17_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND17_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND17_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND17_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND18_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND18_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND18_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND18_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND18_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND18_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND18_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND18_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND18_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND18_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND18_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND18_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND18_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND18_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND18_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND18_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND18_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND18_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND18_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND18_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND18_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND18_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND18_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND18_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND18_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND18_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND18_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND19_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND19_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND19_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND19_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND19_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND19_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND19_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND19_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND19_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND19_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND19_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND19_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND19_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND19_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND19_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND19_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND19_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND19_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND19_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND19_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND19_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND19_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND19_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND19_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND19_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND19_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND19_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND20_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND20_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND20_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND20_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND20_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND20_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND20_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND20_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND20_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND20_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND20_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND20_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND20_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND20_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND20_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND20_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND20_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND20_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND20_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND20_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND20_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND20_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND20_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND20_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND20_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND20_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND20_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND21_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND21_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND21_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND21_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND21_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND21_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND21_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND21_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND21_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND21_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND21_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND21_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND21_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND21_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND21_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND21_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND21_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND21_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND21_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND21_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND21_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND21_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND21_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND21_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND21_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND21_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND21_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND22_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND22_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND22_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND22_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND22_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND22_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND22_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND22_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND22_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND22_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND22_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND22_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND22_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND22_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND22_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND22_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND22_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND22_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND22_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND22_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND22_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND22_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND22_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND22_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND22_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND22_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND22_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND25_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND25_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND25_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND25_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND25_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND25_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND25_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND25_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND25_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND25_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND25_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND25_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND25_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND25_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND25_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND25_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND25_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND25_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND25_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND25_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND25_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND25_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND25_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND25_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND25_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND25_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND25_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND26_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND26_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND26_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND26_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND26_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND26_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND26_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND26_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND26_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND26_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND26_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND26_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND26_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND26_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND26_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND26_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND26_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND26_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND26_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND26_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND26_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND26_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND26_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND26_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND26_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND26_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND26_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND27_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND27_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND27_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND27_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND27_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND27_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND27_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND27_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND27_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND27_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND27_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND27_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND27_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND27_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND27_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND27_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND27_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND27_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND27_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND27_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND27_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND27_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND27_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND27_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND27_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND27_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND27_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND28_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND28_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND28_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND28_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND28_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND28_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND28_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND28_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND28_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND28_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND28_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND28_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND28_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND28_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND28_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND28_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND28_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND28_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND28_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND28_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND28_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND28_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND28_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND28_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND28_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND28_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND28_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND29_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND29_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND29_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND29_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND29_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND29_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND29_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND29_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND29_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND29_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND29_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND29_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND29_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND29_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND29_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND29_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND29_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND29_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND29_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND29_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND29_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND29_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND29_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND29_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND29_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND29_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND29_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND30_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND30_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND30_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND30_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND30_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND30_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND30_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND30_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND30_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND30_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND30_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND30_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND30_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND30_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND30_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND30_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND30_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND30_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND30_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND30_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND30_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND30_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND30_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND30_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND30_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND30_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND30_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND32_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND32_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND32_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND32_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND32_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND32_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND32_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND32_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND32_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND32_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND32_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND32_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND32_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND32_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND32_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND32_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND32_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND32_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND32_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND32_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND32_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND32_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND32_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND32_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND32_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND32_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND32_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND34_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND34_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND34_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND34_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND34_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND34_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND34_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND34_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND34_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND34_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND34_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND34_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND34_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND34_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND34_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND34_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND34_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND34_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND34_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND34_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND34_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND34_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND34_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND34_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND34_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND34_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND34_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND38_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND38_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND38_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND38_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND38_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND38_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND38_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND38_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND38_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND38_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND38_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND38_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND38_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND39_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND39_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND39_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND39_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND39_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND39_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND39_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND39_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND39_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND39_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND39_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND39_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND39_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND39_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND39_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND39_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND39_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND39_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND39_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND39_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND39_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND39_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND39_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND39_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND39_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND39_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND39_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND40_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND40_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND40_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND40_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND40_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND40_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND40_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND40_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND40_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND40_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND40_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND40_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND40_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND41_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND41_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND41_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND41_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND41_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND41_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND41_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND41_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND41_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND41_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND41_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND41_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND41_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND42_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND42_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND42_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND42_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND42_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND42_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND42_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND42_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND42_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND42_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND42_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND42_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND42_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND42_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND42_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND42_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND42_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND42_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND42_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND42_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND42_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND42_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND42_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND42_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND42_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND42_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND42_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND43_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND43_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND43_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND43_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND43_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND43_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND43_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND43_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND43_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND43_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND43_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND43_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND43_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND43_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND43_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND43_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND43_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND43_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND43_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND43_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND43_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND43_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND43_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND43_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND43_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND43_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND43_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND44_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND44_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND44_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND44_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND44_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND44_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND44_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND44_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND44_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND44_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND44_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND44_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND44_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND44_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND44_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND44_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND44_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND44_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND44_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND44_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND44_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND44_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND44_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND44_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND44_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND44_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND44_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND66_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND66_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND66_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND66_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND66_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND66_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND66_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND66_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND66_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND66_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND66_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND66_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND66_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND66_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND66_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND66_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND66_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND66_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND66_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND66_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND66_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND66_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND66_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND66_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND66_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND66_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND66_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND71_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND71_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND71_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND71_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND71_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND71_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND71_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND71_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND71_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND71_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND71_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND71_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND71_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND71_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND71_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND71_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND71_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND71_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND71_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND71_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND71_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND71_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND71_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND71_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND71_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND71_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND71_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND252_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND252_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND252_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND252_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND252_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND252_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND252_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND252_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND252_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND252_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND252_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND252_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND252_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND252_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND252_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND252_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND252_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND252_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND252_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND252_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND252_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND252_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND252_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND252_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND252_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND252_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND252_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND255_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND255_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND255_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND255_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND255_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND255_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND255_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND255_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND255_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND255_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND255_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND255_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND255_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND255_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND255_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND255_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND255_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND255_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND255_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND255_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND255_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND255_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND255_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND255_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND255_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND255_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND255_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_FILTER_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND38_FILTER_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND38_FILTER_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_FILTER_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND40_FILTER_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND40_FILTER_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_FILTER_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_BAND41_FILTER_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_BAND41_FILTER_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_ROUTE35_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE35_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE35_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE35_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE35_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE35_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE35_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE35_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE35_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE35_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE35_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE35_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE35_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_ROUTE35_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_ROUTE35_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_ROUTE35_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_ROUTE35_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_ROUTE35_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_ROUTE35_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE35_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE35_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE35_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE35_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE35_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE35_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE35_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE35_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_ROUTE36_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE36_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE36_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE36_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE36_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE36_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE36_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE36_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE36_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE36_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE36_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE36_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE36_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_ROUTE36_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_ROUTE36_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_ROUTE36_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_ROUTE36_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_ROUTE36_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_ROUTE36_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE36_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE36_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE36_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE36_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE36_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE36_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE36_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE36_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_ROUTE37_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE37_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE37_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE37_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE37_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE37_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE37_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE37_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE37_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE37_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE37_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE37_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE37_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_ROUTE37_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_ROUTE37_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_ROUTE37_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_ROUTE37_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_ROUTE37_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_ROUTE37_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE37_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE37_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE37_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE37_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE37_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE37_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE37_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE37_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )

#define LTE_ET_ROUTE38_RG0D_SETTING_LEVEL0_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE38_RG0D_SETTING_LEVEL1_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE38_RG0D_SETTING_LEVEL2_SetDefault                             ( 0xC8 )
#define LTE_ET_ROUTE38_RG0D_SETTING_LEVEL3_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE38_RG0D_SETTING_LEVEL4_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE38_RG0D_SETTING_LEVEL5_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE38_RG0D_SETTING_LEVEL6_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE38_RG0D_SETTING_LEVEL7_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE38_RG0D_SETTING_LEVEL8_SetDefault                             ( 0x09 )
#define LTE_ET_ROUTE38_RG0E_SETTING_LEVEL0_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE38_RG0E_SETTING_LEVEL1_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE38_RG0E_SETTING_LEVEL2_SetDefault                             ( 0x7F )
#define LTE_ET_ROUTE38_RG0E_SETTING_LEVEL3_SetDefault                             ( 0x3A )
#define LTE_ET_ROUTE38_RG0E_SETTING_LEVEL4_SetDefault                             ( 0x3A )
#define LTE_ET_ROUTE38_RG0E_SETTING_LEVEL5_SetDefault                             ( 0xCA )
#define LTE_ET_ROUTE38_RG0E_SETTING_LEVEL6_SetDefault                             ( 0xD6 )
#define LTE_ET_ROUTE38_RG0E_SETTING_LEVEL7_SetDefault                             ( 0x42 )
#define LTE_ET_ROUTE38_RG0E_SETTING_LEVEL8_SetDefault                             ( 0x42 )
#define LTE_ET_ROUTE38_RG0F_SETTING_LEVEL0_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE38_RG0F_SETTING_LEVEL1_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE38_RG0F_SETTING_LEVEL2_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE38_RG0F_SETTING_LEVEL3_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE38_RG0F_SETTING_LEVEL4_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE38_RG0F_SETTING_LEVEL5_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE38_RG0F_SETTING_LEVEL6_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE38_RG0F_SETTING_LEVEL7_SetDefault                             ( 0x00 )
#define LTE_ET_ROUTE38_RG0F_SETTING_LEVEL8_SetDefault                             ( 0x00 )
 
#endif   // #if IS_LTE_ET_FRONT_END_ENABLE_SetDefault

/*MT6739*/ /*--------------------------------------------------------------*/
/*MT6739*/ /*                PA Vcc_define_SetDefault                  */
/*MT6739*/ /*--------------------------------------------------------------*/
/*MT6739*/ #define  LTE_BandNone_PA_VCC_SetDefault 3400
/*MT6739*/ #define  LTE_Band1_PA_VCC_SetDefault    3400
/*MT6739*/ #define  LTE_Band2_PA_VCC_SetDefault    3400
/*MT6739*/ #define  LTE_Band3_PA_VCC_SetDefault    3400
/*MT6739*/ #define  LTE_Band4_PA_VCC_SetDefault    3400
/*MT6739*/ #define  LTE_Band5_PA_VCC_SetDefault    3400
/*MT6739*/ #define  LTE_Band7_PA_VCC_SetDefault    3400
/*MT6739*/ #define  LTE_Band8_PA_VCC_SetDefault    3400
/*MT6739*/ #define  LTE_Band9_PA_VCC_SetDefault    3400
/*MT6739*/ #define  LTE_Band11_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band12_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band13_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band17_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band18_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band19_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band20_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band21_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band22_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band25_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band26_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band27_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band28_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band29_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band30_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band32_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band34_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band38_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band39_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band40_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band41_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band42_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band43_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band44_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band66_PA_VCC_SetDefault   3400
/*MT6739*/ #define  LTE_Band252_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Band255_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route35_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route36_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route37_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route38_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route39_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route40_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route41_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route42_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route43_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route44_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route45_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route46_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route47_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route48_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route49_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route50_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route51_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route52_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route53_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route54_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route55_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route56_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route57_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route58_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route59_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route60_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route61_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route62_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route63_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route64_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route65_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route66_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route67_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route68_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route69_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route70_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route71_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route72_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route73_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route74_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route75_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route76_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route77_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route78_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route79_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route80_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route81_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route82_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route83_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route84_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route85_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route86_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route87_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route88_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route89_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route90_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route91_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route92_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route93_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route94_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route95_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route96_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route97_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route98_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route99_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route100_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route101_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route102_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route103_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route104_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route105_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route106_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route107_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route108_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route109_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route110_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route111_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route112_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route113_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route114_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route115_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route116_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route117_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route118_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route119_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route120_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route121_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route122_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route123_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route124_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route125_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route126_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route127_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route128_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route129_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route130_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route131_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route132_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route133_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route134_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route135_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route136_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route137_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route138_PA_VCC_SetDefault  3400
/*MT6739*/ #define  LTE_Route139_PA_VCC_SetDefault  3400

extern kal_uint16* LTE_ET_BAND_FREQ_TABLE_SetDefault[];
extern kal_uint16 LTE_ET_BAND_FREQ_SIZE_TABLE_SetDefault[];

extern LTE_ET_EVENT_TABLE_T*              LTE_ET_TX_EVENT_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_TX_EVENT_SIZE_TABLE_SetDefault[];
extern LTE_ET_DATA_SUBBAND_TABLE_T*       LTE_ET_TX_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_TX_DATA_SIZE_TABLE_SetDefault[];
extern LTE_ET_EVENT_TABLE_T*              LTE_ET_TPC_EVENT_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_TPC_EVENT_SIZE_TABLE_SetDefault[];
extern LTE_ET_EVENT_TABLE_T*              LTE_ET_FILTER_TPC_EVENT_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_FILTER_TPC_EVENT_SIZE_TABLE_SetDefault[];

extern LTE_ET_DATA_TABLE_T*               LTE_ET_TPC_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_TPC_DATA_SIZE_TABLE_SetDefault[];
extern LTE_ET_DATA_TABLE_T*               LTE_ET_FILTER_TPC_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_FILTER_TPC_DATA_SIZE_TABLE_SetDefault[];

extern LTE_MIPI_adda_DATA_EXPAND_TABLE_T*               LTE_ET_LOOKUP_VPA_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_LOOKUP_VPA_DATA_SIZE_TABLE_SetDefault[];
extern LTE_MIPI_adda_DATA_EXPAND_TABLE_T*               LTE_ET_FILTER_LOOKUP_VPA_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_FILTER_LOOKUP_VPA_DATA_SIZE_TABLE_SetDefault[];

extern LTE_MIPI_adda_DATA_EXPAND_TABLE_T*               LTE_ET_BW_SWITCH_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_BW_SWITCH_DATA_SIZE_TABLE_SetDefault[];
extern LTE_MIPI_adda_DATA_EXPAND_TABLE_T*               LTE_ET_FILTER_BW_SWITCH_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_FILTER_BW_SWITCH_DATA_SIZE_TABLE_SetDefault[];

extern LTE_ET_BW_SWITCH_SECTION_TABLE_DEFAULT   LTE_ET_BW_SWITCH_SECTION_DATA_TABLE_SetDefault[];
extern kal_uint32                               LTE_ET_BW_SWITCH_SECTION_DATA_SIZE_TABLE_SetDefault[];
extern LTE_ET_BW_SWITCH_SECTION_TABLE_DEFAULT   LTE_ET_FILTER_BW_SWITCH_SECTION_DATA_TABLE_SetDefault[];
extern kal_uint32                               LTE_ET_FILTER_BW_SWITCH_SECTION_DATA_SIZE_TABLE_SetDefault[];

extern LTE_MIPI_adda_DATA_EXPAND_TABLE_T*               LTE_ETM_MODE_SETTING_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ETM_MODE_SETTING_DATA_SIZE_TABLE_SetDefault[];
extern LTE_MIPI_adda_DATA_EXPAND_TABLE_T*               LTE_ETM_FILTER_MODE_SETTING_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ETM_FILTER_MODE_SETTING_DATA_SIZE_TABLE_SetDefault[];

extern LTE_ET_TPC_PA_SECTION_TABLE_DEFAULT  LTE_ET_PA_TPC_SECTION_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_PA_TPC_SECTION_DATA_SIZE_TABLE_SetDefault[];
extern LTE_ET_TPC_PA_SECTION_TABLE_DEFAULT  LTE_ET_FILTER_PA_TPC_SECTION_DATA_TABLE_SetDefault[];
extern kal_uint32                         LTE_ET_FILTER_PA_TPC_SECTION_DATA_SIZE_TABLE_SetDefault[];


/////////////////////////

