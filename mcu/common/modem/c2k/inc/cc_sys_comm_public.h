/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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


#ifndef __CC_SYS_COMM_H__
#define __CC_SYS_COMM_H__

//#include "global_cc_sys_comm_id.h"
//#include "global_cc_rpc_op_id.h"
//#include "global_cc_sync_func_id.h"

typedef void (*CC_IRQ_SYS_CALLBACK_P)(kal_uint32 para0, kal_uint32 para1, kal_uint32 para2);

extern kal_int32 cc_sys_comm_channel_init(kal_uint32 comm_id, CC_IRQ_SYS_CALLBACK_P funcp);
extern kal_int32 cc_sys_comm_channel_deinit(kal_uint32 comm_id);
extern kal_int32 cc_sys_comm_tx(kal_uint32 comm_id, kal_uint32 para0, kal_uint32 para1);
extern kal_int32 cc_sys_comm_tx_polling(kal_uint32 comm_id, kal_uint32 para0, kal_uint32 para1);

/*for CC IRQ MSG*/
#define GlMod_ID_T  kal_uint32
#ifdef SYS_OPTION_CCIRQ_PCCIF
extern kal_int32 cc_irq_msg_send(GlMod_ID_T SrcModId, GlMod_ID_T DestModId, kal_uint32 MsgId, void *MsgBufferP, kal_uint32 MsgSize);
#endif
/* for CC IRQ RPC */
/* TX side */
extern kal_int32 cc_irq_rpc_call(kal_uint32 rpc_opid, kal_uint32 input_para_struct_len, void *input_para_struct_addr, kal_uint32 output_para_struct_len, void *output_para_struct_addr);
/* RX side */
typedef void (*CC_IRQ_RPC_CALLBACK_P)(kal_uint32 rpc_buffer_index);
extern kal_int32 cc_irq_rpc_register_callback(kal_uint32 rpc_opid, CC_IRQ_RPC_CALLBACK_P funcp);
extern kal_int32 cc_irq_rpc_get_input_param(kal_uint32 rpc_buffer_index, kal_uint32 input_para_struct_len, void *input_para_struct_addr, kal_uint32 core_type);
extern kal_int32 cc_irq_rpc_put_output_param(kal_uint32 rpc_buffer_index, kal_uint32 ret_value, kal_uint32 output_para_struct_len, void *output_para_struct_addr, kal_uint32 core_type);

/* for CC IRQ SYNC */
typedef void (*CC_IRQ_SYNC_USER_CALLBACK_P)();
/* function registered by user to execute before sending ping packet to MD1. */
extern kal_int32 cc_irq_sync_register_tx_cb(kal_uint32 func_id, CC_IRQ_SYNC_USER_CALLBACK_P funcp);
/* function registered by user to execute after receiving ack packet from MD1 */
extern kal_int32 cc_irq_sync_register_rx_cb(kal_uint32 func_id, CC_IRQ_SYNC_USER_CALLBACK_P funcp);
#endif /*__CC_SYS_COMM_H__*/

