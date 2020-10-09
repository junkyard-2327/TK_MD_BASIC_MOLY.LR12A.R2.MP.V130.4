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
 *   ccismcore_sap.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   define ccismcore messages
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 06 28 2017 cs.huang
 * [MOLY00258471] [LHIFCore] Enable LHIF HW log interrupt to reduce polling times
 * lhifcore merge from UMOLYA TRUNK
 *
 * 06 23 2017 cs.huang
 * [MOLY00258471] [LHIFCore] Enable LHIF HW log interrupt to reduce polling times
 * merge HMU part
 *
 * 03 13 2017 actory.ou
 * [MOLY00233862] check in LHIF SLT and LHIF HW logging api
 * [LHIFCORE] replace LHIF log api with EBS api but wrapped
 * fix build error at DVT and MODIS due to EBS return type
 *
 ****************************************************************************/

#include "module_msg_range.h"

#ifndef LHIFCORE_MSGID_H
#define LHIFCORE_MSGID_H

MODULE_MSG_BEGIN(MSG_ID_LHIFCORE_CODE_BEGIN)
MSG_ID_LHIFCORE_IT_START_GEN_DL_DATA,
MSG_ID_LHIFCORE_IT_STOP_GEN_DL_DATA,
MSG_ID_LHIFCORE_IT_GEN_DL_DATA_AGAIN,
MSG_ID_LHIFCORE_LOG_DATA_DUMP,
MSG_ID_LHIFCORE_POLLING,
MODULE_MSG_END(MSG_ID_LHIFCORE_CODE_END)

#endif  //	LHIFCORE_MSGID_H
