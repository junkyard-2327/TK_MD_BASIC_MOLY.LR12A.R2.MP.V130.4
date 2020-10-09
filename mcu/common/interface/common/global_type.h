/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   global_type.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Used to define global struct or typedef
 * ==========================================================================
 *
 ****************************************************************************/

#ifndef _GLOBAL_TYPE_H
#define _GLOBAL_TYPE_H

typedef kal_uint32 EARFCN;

/* ERAC <-> ENAS/EAS */
typedef enum {
    ERAT_NO_RAT                     = 0,
    ERAT_GSM                        = 0x01,
    ERAT_UMTSFDD                    = 0x02,
    ERAT_UMTSTDD                    = 0x04,
    ERAT_LTEFDD                     = 0x08, // LTE FDD mode
    ERAT_LTETDD                     = 0x10, // LTE TDD mode
    ERAT_C2K                        = 0x20, // C2K
    ERAT_LTE                        = ERAT_LTEFDD | ERAT_LTETDD,
    ERAT_UMTSFDD_GSM                = ERAT_UMTSFDD | ERAT_GSM,
    ERAT_UMTSTDD_GSM                = ERAT_UMTSTDD | ERAT_GSM,

    ERAT_LTEFDD_GSM                 = ERAT_LTEFDD | ERAT_GSM,
    ERAT_LTETDD_GSM                 = ERAT_LTETDD | ERAT_GSM,
    ERAT_LTE_GSM                    = ERAT_LTE | ERAT_GSM,

    ERAT_LTEFDD_UMTSFDD             = ERAT_LTEFDD | ERAT_UMTSFDD,
    ERAT_LTETDD_UMTSFDD             = ERAT_LTETDD | ERAT_UMTSFDD,
    ERAT_LTE_UMTSFDD                = ERAT_LTE | ERAT_UMTSFDD,
    
    ERAT_LTEFDD_UMTSTDD             = ERAT_LTEFDD | ERAT_UMTSTDD,
    ERAT_LTETDD_UMTSTDD             = ERAT_LTETDD | ERAT_UMTSTDD,
    ERAT_LTE_UMTSTDD                = ERAT_LTE | ERAT_UMTSTDD,

    ERAT_C2K_LTE                    = ERAT_LTE | ERAT_C2K,
    ERAT_C2K_GSM                    = ERAT_GSM | ERAT_C2K,
    ERAT_C2K_UMTSFDD                = ERAT_UMTSFDD | ERAT_C2K,
    ERAT_C2K_UMTSTDD                = ERAT_UMTSTDD | ERAT_C2K,
    
    ERAT_C2K_UMTSFDD_GSM            = ERAT_C2K_UMTSFDD | ERAT_GSM,
    ERAT_C2K_UMTSTDD_GSM            = ERAT_C2K_UMTSTDD | ERAT_GSM,
    
    ERAT_LTEFDD_UMTSFDD_GSM         = ERAT_LTEFDD_UMTSFDD | ERAT_GSM,
    ERAT_LTEFDD_UMTSTDD_GSM         = ERAT_LTEFDD_UMTSTDD | ERAT_GSM,
    ERAT_LTETDD_UMTSFDD_GSM         = ERAT_LTETDD_UMTSFDD | ERAT_GSM,
    ERAT_LTETDD_UMTSTDD_GSM         = ERAT_LTETDD_UMTSTDD | ERAT_GSM,
    ERAT_LTE_UMTSFDD_GSM            = ERAT_LTE_UMTSFDD | ERAT_GSM,
    ERAT_LTE_UMTSTDD_GSM            = ERAT_LTE_UMTSTDD | ERAT_GSM,

    ERAT_C2K_LTE_UMTSFDD_GSM        = ERAT_C2K | ERAT_LTE_UMTSFDD_GSM,
    ERAT_C2K_LTE_UMTSTDD_GSM        = ERAT_C2K | ERAT_LTE_UMTSTDD_GSM,

    ERAT_LAST_VALID_RAT             = ERAT_C2K_LTE_UMTSTDD_GSM,
    /* Below are for backward compatible. These RAT shall not happen */
    ERAT_UMTSTDD_UMTSFDD            = ERAT_UMTSTDD | ERAT_UMTSFDD,
    ERAT_UMTSTDD_UMTSFDD_GSM        = ERAT_UMTSTDD_UMTSFDD | ERAT_GSM,
    ERAT_LTE_UMTSTDD_UMTSFDD        = ERAT_LTE | ERAT_UMTSTDD_UMTSFDD,
    ERAT_LTE_UMTSTDD_UMTSFDD_GSM    = ERAT_LTE_UMTSTDD_UMTSFDD | ERAT_GSM,
} erac_rat_enum;
#endif /* _GLOBAL_TYPE_H */
