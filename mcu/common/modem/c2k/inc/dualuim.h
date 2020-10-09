/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/****************************************************************************
 *
 * Module:     Dualuim.h
 *
 * Purpose:    common definition for dual uim project.
 *
 ****************************************************************************
 *
 *                          PVCS Header Information
 *
 * Revision 1.1  2009/02/04  17:49:24  neolsu
 * Initial revision
 *
 *
 ****************************************************************************
 ****************************************************************************/
#ifndef _DUALUIM_H_
#define _DUALUIM_H_

/*****************************************************************************
 * Includes
 ****************************************************************************/
#include "sysdefs.h"

#define LOG_FOR_SCRIPTER_TOOL 0

//#define DUAL_UIM_STANDBY 1

/*Make statistics of GPM lost rate for FT*/
#define DUAL_UIM_PCH_STAT 1
#define TEST_NON_SYS_TABLE 1
#define ADAPT_SQ 1

//#define DUAL_UIM_DISABLE_VAL_OLD_API  
#define DUAL_VAL_TEST 1 // only for test val before integration, after integration set to 0 !!!!!

/* #if DUAL_UIM_STANDBY */
#ifdef DUAL_UIM_STANDBY
#define DUAL_UIM_TEST 1 // only for dual UIM test, if there are some exceptions, it will print warning, when integration, remark !!!!!
#define IHO_FORCE_WAKE 1
/* In registration, after MS receives BS ACK order, it will go to idle state, if the patch is enabled,
it will start a timer at the same time, if MS does not receive registration accept/reject order in time, 
timer expires, MS will go to system determination state with registration reject indication */
//#if( defined (BOARD_TITAN_P0) || defined (BOARD_TITAN_P1) )
#define PATCH_FOR_NO_REG_ORDER 0
//#else
//#define PATCH_FOR_NO_REG_ORDER 1
//#endif
/* When MS is not in idle state, and gonna send a SMS, if the patch is enabled, 
this SMS will be pended until MS goes back to idle state, 
especially, when MS is processing one UIM's Auto SMS registration, another UIM want to send  Auto registration SMS */
#define PATCH_FOR_AUTO_SMS_REG 1
#endif /* DUAL_UIM_STANDBY */
/* UimAttribute: attribute for UIM A and UIM B */
#define UIM_ATTRIBUTE_PRIMARY   0
#define UIM_ATTRIBUTE_SECONDARY 1
#ifdef SYS_OPTION_CGP
#define NETWORK_SEARCH_GRADUAL 1 
#else
#define NETWORK_SEARCH_GRADUAL 0 
#endif

typedef enum
{
    PRIMARY_ONLY,        /*only primary UIM is present*/
    SECONDARY_ONLY,   /*only secondary UIM is present*/
    DUAL_UIM_MODE,     /*both primary and secondary UIMs are presnt*/
    NO_DUAL_UIM         /*neither primary nor secondary UIM is present*/
}DualUimModeT;

/* UimTag: index for physical storage of Uim A or UIM B*/
typedef enum 
{
   UIM_A = 0,
   UIM_B,
   UIM_NUM_MAX,
   UIM_NOCARE
}DualUimT;

/*
PSW_DUAL_MODE_MSG
PSW_ETS_DUAL_MODE_MSG
*/
typedef PACKED_PREFIX struct
{
    DualUimT UimPrim;
    DualUimT UimSecd;
    kal_bool DualCarrier;
    kal_bool PrioriyInUse;    /*= KAL_FALSE: no priority;    = TURE UimPrim is the priority uim maybe = UIM_A or UIM_B*/
} PACKED_POSTFIX  PswDualModeMsgT, PACKED_POSTFIX PswEtsDualModeMsgT;
/*
PSW_PRIM_MODE_MSG
PSW_ETS_PRIM_MODE_MSG
*/
typedef PACKED_PREFIX struct
{
    DualUimT UimPrim;
} PACKED_POSTFIX  PswPrimModeMsgT, PACKED_POSTFIX PswEtsPrimModeMsgT;
/*
PSW_SECD_MODE_MSG
PSW_ETS_SECD_MODE_MSG
*/
typedef PACKED_PREFIX struct
{
    DualUimT UimSecd;
} PACKED_POSTFIX  PswSecdModeMsgT, PACKED_POSTFIX PswEtsSecdModeMsgT;

#define ANOTHERUIM(UimTag)   (UIM_B - UimTag)

#define  PNI_PNQ_CALC_ONLY      2

/* get physical UIM card slot for access UIM by UimTag */
kal_uint8 DualUimGetCardSlotByUimTag (DualUimT UimTag);

/* get UimTag by physical UIM card slot*/
kal_uint8 DualUimGetUimTagByCardSlot (kal_uint8);

/* get UIM card attribute by UimTag */
kal_uint8 DualUimGetCardAttributByUimTag (DualUimT UimTag);

/* get UimTag by UIM attribute */
DualUimT DualUimGetUimTagByAttribute (kal_uint8);

/*return current mode */
DualUimModeT DualUimGetCurrentMode (void);
/*get current defalut UimTag when only one UIm is present*/
DualUimT DualUimGetSingleUimTag (void);
/* process UIM mode from VAL or ETS */
void PswDualUimModeMsg (PswDualModeMsgT*);
void PswPrimModeMsg (PswPrimModeMsgT*);
void PswSecdModeMsg (PswSecdModeMsgT*);
void PswNoUimPresent (void);

/* for DUAL_UIM_STANDBY */
kal_bool setOperateUimTag(DualUimT UimTag);
DualUimT getOperateUimTag(void);
void setActiveUimTag(DualUimT UimTag);
DualUimT getActiveUimTag(void);

DualUimT getDataCallUimTag (void);
void setDataCallUimTag (DualUimT UimTag);

kal_bool DualUimGetDualCarrier (void);
void DualUimSetDualCarrier (kal_bool Value);

DualUimT getUimTagByMode(void);
#endif  /* _DUALUIM_H_ */


