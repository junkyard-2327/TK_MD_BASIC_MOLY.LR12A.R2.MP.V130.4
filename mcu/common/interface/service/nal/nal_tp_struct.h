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
 *   naltp_struct.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   NAL Testing Package Message Structure
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * 
 ****************************************************************************/
#ifndef __NALTP_STRUCT_H__
#define __NALTP_STRUCT_H__

#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_general_types.h"

/*******************************************************************************
* Inject testing REQ                                                           * 
*******************************************************************************/
// category type
typedef enum
{
    NALTP_CATEGORY_NONE      = 0,
    NALTP_CATEGORY_IPERF     = 0x10,
    NALTP_CATEGORY_PING      = 0x11,
    NALTP_CATEGORY_TRACE     = 0x20,	
    NALTP_CATEGORY_PDN       = 0x30,
    NALTP_CATEGORY_LOOPBACK  = 0x40,
    NALTP_CATEGORY_SOCKOPT   = 0x50,
    NALTP_CATEGORY_UDP       = 0x60,
    NALTP_CATEGORY_TCP       = 0x70,
    NALTP_CATEGORY_EX_UDP    = 0x98,
    NALTP_CATEGORY_EX_TCP    = 0x99,
    NALTP_CATEGORY_SOCK_MTBF = 0x100,	
    NALTP_CATEGORY_MAX       = 0xFFFFFFFF,
} naltp_category_t;

// sub category type
typedef enum
{
    NALTP_SUB_CATEGORY_NONE = 0,

    // UDP testing sub category
    NALTP_SUB_CAT_UDP_ABORT = 0x60000001,
	
    // TCP testing sub category
    NALTP_SUB_CAT_TCP_ABORT = 0x70000001,

    // the bound
    NALTP_SUB_CATEGORY_MAX  = 0xFFFFFFFF,
} naltp_sub_category_t;

// MSG_ID_NALTP_TEST_RUN_REQ
typedef struct
{
    LOCAL_PARA_HDR
    naltp_category_t     tp_category;
    naltp_sub_category_t tp_sub_idx;
    kal_uint8            tp_para[64]; // byte array for parameters, 8*8 values
} naltp_test_run_req_struct;

/*******************************************************************************
* Inject testing CNF                                                           * 
*******************************************************************************/
typedef enum
{
    NALTP_RES_SUCC = 0,
    NALTP_RES_NONE = 1,
    NALTP_RES_FAIL = 2,
    NALTP_RES_MAX  = 0x7FFFFFFF,
} naltp_res_enum;

// MSG_ID_NALTP_TEST_RUN_CNF
typedef struct
{
    LOCAL_PARA_HDR

    naltp_res_enum tp_res;
    kal_uint32     tp_retval;
} naltp_test_run_cnf_struct;

#endif // __NAP_STRUCT_H__
