/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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

#ifndef _WO_ADPT_STRUCT_H_
#define _WO_ADPT_STRUCT_H_

// MSG_ID_WO_ADPT_PENDING_WOMSG_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 womsg_len;
} wo_adpt_pending_womsg_req_struct;

// MSG_ID_WO_ADPT_ESP_DECRYPT_INFO_IND
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 ip_proto_version;
    kal_uint8 spi[20];
    kal_uint8 src_ip[64];
    kal_uint8 dst_ip[64];
    kal_uint16 enc_algo;
    kal_uint16 enc_key_size;
    kal_uint8 enc_key[256];
    kal_uint16 int_algo;
    kal_uint8 int_key[256];
} wo_adpt_esp_decrypt_info_ind_struct;


// MSG_ID_WO_ADPT_IKE_DECRYPT_INFO_IND
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 spi_i[20];
    kal_uint8 spi_r[20];
    kal_uint8 sk_ei[256];
    kal_uint8 sk_er[256];
    kal_uint16 enc_algo;
    kal_uint16 enc_key_size;
    kal_uint8 sk_ai[256];
    kal_uint8 sk_ar[256];
    kal_uint16 int_algo;
} wo_adpt_ike_decrypt_info_ind_struct;

#endif /* _WO_ADPT_STRUCT_H_ */
