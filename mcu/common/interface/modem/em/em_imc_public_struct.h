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
 * Filename:
 * ---------
 *   em_imc_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_IMC_PUBLIC_STRUCT_H
#define _EM_IMC_PUBLIC_STRUCT_H

#include "em_public_struct.h"



/********************* begin of IMC definition ****************************/

typedef struct
{
    kal_uint8        src_ip[64];
    kal_uint8        dst_ip[64];
    kal_uint8        src_port[16];
    kal_uint8        dst_port[16];
    kal_uint8        spi[32];
    kal_uint8        dir;          //0:in 1:out
    kal_uint8        padding[3];
} l4c_em_imc_ipsec_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
} em_imc_ipsec_info_flush_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    l4c_em_imc_ipsec_info_struct   ipsec_info[4];
    kal_uint8                      index;
    kal_uint8                      transport;          //0:udp 1:tcp
    kal_uint8                      mode;               //0:Transport 1:Tunnel
    kal_uint8                      protocol;           //0:AH 1:ESP
    kal_uint8                      encry_algo;         /* VoLTE_Stack_IPSec_Encry_Algo_e */
    kal_uint8                      integrity_algo;     /* enum VoLTE_Stack_IPSec_Integrity_Algo_e */
    kal_uint8                      padding[2];
    kal_uint8                      ck[256];
    kal_uint8                      ik[256];
} em_imc_ipsec_info_add_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8                      index;
    kal_uint8                      padding[3];
} em_imc_ipsec_info_delete_ind_struct;


/********************* end of IMC definition ****************************/


#endif /* _EM_IMC_PUBLIC_STRUCT_H */
