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
 *   ssds_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 12 23 2019 szu-chieh.chiu
 * [MOLY00437163] [MT6762][Cervino][P0][WW FT][Canada][IMS][SQC Excluded][Bell][VoWiFi][TCID:W_SS_13]DUT can not receive the call after deactivating the call in flight mode WFC registered condition
 * 	
 * 	Bell SS workaround patchback.
 *
 * 10 04 2019 howen.pu
 * [MOLY00446176] iHTCjiL2050jiIs?jXJmodem patch P52AP53ZAIs?i
 * 	
 * 	SSDS - [ALPS04805279] iHTCjiL2050jiIs?jXJmodem patch P52AP53ZAIs?i.
 *
 * 08 31 2018 ya.li
 * [MOLY00348635] [SSDS]Transfer User Agent Information(AT+EXCAPUAS) to XCAP(common file)
 * 	
 * 	.
 *
 * 03 14 2018 ya.li
 * [MOLY00313100] [Rose][Cervino][O1][BSP+]The device will popup "Network or SIM card error".(5/5)-SAP part
 * 	
 * 	.
 *
 * 03 14 2018 ya.li
 * [MOLY00313100] [Rose][Cervino][O1][BSP+]The device will popup "Network or SIM card error".(5/5)-SAP part
 * 	
 * 	.
 *
 * 11 17 2017 xiaoting.wang
 * [MOLY00290096] [SPU][Zion][N1]Cannot query call forwarding status,and popup "Network or SIM card error".
 *
 ****************************************************************************/

#ifndef _SSDS_MSGID_H_
#define _SSDS_MSGID_H_

#include "module_msg_range.h"

MODULE_MSG_BEGIN( MSG_ID_SSDS_CODE_BEGIN )

        /*ATP -> SSDS*/
        MSG_ID_ATP_SSDS_SS_ATCMD_REQ=MSG_ID_SSDS_CODE_BEGIN,       /*SS atcmd request*/    
        MSG_ID_ATP_SSDS_EGBA_ATCMD_REQ,                            /*Trigger GBA*/
        MSG_ID_ATP_SSDS_ECNCFG_ATCMD_REQ,                          /*For mobile data/roaming data setting*/        
        MSG_ID_ATP_SSDS_ESRVSTATE_ATCMD_REQ,                       /*For data roaming type*/        
        MSG_ID_ATP_SSDS_ECFGSET_ATCMD_REQ,                         /*For CT volte setting*/          

        MSG_ID_ATP_SSDS_SS_URC_REQ,                                /*URC request*/   
        MSG_ID_ATP_SSDS_CIREGU_URC_REQ,                            /*URC: IMS registered state*/        
        MSG_ID_ATP_SSDS_XUI_INFO_REQ,                              /*XUI information request*/
        MSG_ID_ATP_SSDS_IMS_REG_STATUS_REQ,                        /*IMS registration status*/
        MSG_ID_ATP_SSDS_PS_REG_STATUS_REQ,

        MSG_ID_ATP_SSDS_SS_ATCMD_REDIRECT_CNF,  

        MSG_ID_SSDS_NOTIFY_OTHER_SIM_REL_PDN_CONN_IND,
        MSG_ID_SSDS_NOTIFY_OTHER_SIM_REL_PDN_CONN_RSP,
        MSG_ID_ATP_SSDS_EXCAPUAS_ATCMD_REQ,

        /*IMC -> SSDS*/
        MSG_ID_SSDS_IMC_IMS_DEREG_CNF,                             /*IMS deregistration cnf*/
        MSG_ID_SSDS_IMC_IMS_CALL_STATUS_IND,                       /*IMS call status*/
        MSG_ID_SSDS_NOTIFY_PDN_ON_IND,
        MSG_ID_SSDS_NOTIFY_PDN_OFF_IND,

MODULE_MSG_END( MSG_ID_SSDS_CODE_TAIL )
#endif /* _SSDS_MSGID_H_ */
